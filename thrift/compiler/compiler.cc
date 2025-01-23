/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/**
 * thrift - a lightweight cross-language rpc/serialization tool
 *
 * This file contains the main compiler engine for Thrift, which invokes the
 * scanner/parser to build the thrift object tree. The interface generation
 * code for each language lives in a file by the language name under the
 * generate/ folder, and all parse structures live in parse/
 *
 */

#include <thrift/compiler/compiler.h>

#ifdef _WIN32
#include <process.h> // @manual
#else
#include <unistd.h>
#endif
#include <stdio.h>
#include <algorithm>
#include <ctime>
#include <filesystem>
#include <fstream>
#include <set>

#include <boost/algorithm/string/split.hpp>

#include <thrift/annotation/bundled_annotations.h>
#include <thrift/compiler/ast/t_program_bundle.h>
#include <thrift/compiler/detail/system.h>
#include <thrift/compiler/diagnostic.h>
#include <thrift/compiler/generate/t_generator.h>
#include <thrift/compiler/parse/parse_ast.h>
#include <thrift/compiler/sema/ast_validator.h>
#include <thrift/compiler/sema/sema.h>
#include <thrift/compiler/sema/sema_context.h>
#include <thrift/compiler/sema/standard_validator.h>

namespace apache::thrift::compiler {
namespace {
/**
 * Flags to control code generation
 */
struct gen_params {
  bool gen_recurse = false;
  std::string genfile;
  std::vector<std::string> targets;
  std::string out_path;
  bool add_gen_dir = true;

  // If true, code generation will be skipped (regardless of other parameters).
  // This is useful, for example, to parse and validate source Thrift IDL
  // without a particular target language in mind.
  bool skip_gen = false;

  bool inject_schema_const = false;
};

constexpr bool bundle_annotations() {
#ifdef THRIFT_OSS
  return false;
#else
  return true;
#endif
}

/**
 * Display the usage message to the given C stream.
 *
 * @param stream See https://en.cppreference.com/w/c/io/FILE
 */
void printUsageTo(FILE* stream) {
  fprintf(stream, R"(Usage: thrift [options] file

Options:
  --help      Print this message to stdout and exit (successfully).
  -o dir      Set the output directory for gen-* packages (default: current
              directory).
              At most one of this option (-o) or -out (see below) can be
              specified.
  -out dir    Set the output location for generated files (no gen-* folder will
              be created).
              At most one of this option (-out) or -o (see above) can be
              specified.
  -I dir      Add a directory to the list of directories searched for include
              directives

  -nowarn     Suppress all compiler warnings (BAD!)
  -legacy-strict
              Strict compiler warnings on (DEPRECATED)
  -v[erbose]  Verbose mode
  -r[ecurse]  Also generate included files
  -debug      Parse debug trace to stdout
  --allow-neg-keys
              Allow negative field keys (IGNORED: always true).
  --allow-neg-enum-vals
              Allow negative enum vals (DEPRECATED)
  --allow-64bit-consts
              Do not print warnings about using 64-bit constants

  --gen STR   Generate code with a dynamically-registered generator.
              STR has the form language[:key1=val1[,key2,[key3=val3]]].
              Keys and values are options passed to the generator.
              Many options will not require values.
              If --skip-gen (see below) is specified, then --gen
              cannot be used. Otherwise (i.e., --skip-gen is NOT
              specified), then --gen must be specified at least once,
              and may be specified multiple times (eg. to generate
              multiple languages).
  --skip-gen  Skip code generation. This is useful, for example, to
              parse and validate Thrift IDL without generating code
              for any particular language.
              If --skip-gen is specified, no --gen argument may be
              given (see above).
  --record-genfiles FILE
              Save the list of generated files to FILE
  --inject-schema-const
              Inject generated schema constant (must use thrift2ast)
  --extra-validation
              Comma-separated list of opt-in validators to run. Recognized
              values include:
                unstructured_annotations_on_field_type

                forbid_non_optional_cpp_ref_fields (IGNORED: set by default).
                  Struct (and exception) fields with a @cpp.Ref (or
                  cpp[2].ref[_type]) annotation must be optional, unless
                  annotated with @cpp.AllowLegacyNonOptionalRef.

                  TEMPORARY NOTE: As of Jan 2025, this is enabled by default.
                  As a short-term escape hatch, in case we missed any existing
                  use case, users can specify this validator prefixed with a
                  "-", to explicitly disable this enforcement, i.e.:
                  "-forbid_non_optional_cpp_ref_fields"
                  Note however that this is only a temporary, short-term option:
                  support for "-forbid_non_optional_cpp_ref_fields" will be
                  removed soon (and will fail if provided in the future).

                implicit_field_ids (IGNORED: always present, i.e. implicit field
                  IDs are always forbidden).

Available generators (and options):
)");
  for (const auto& gen : generator_registry::get_generators()) {
    const generator_factory& generator_factory = *gen.second;
    fmt::print(
        stream,
        "  {} ({}):\n{}",
        generator_factory.name(),
        generator_factory.long_name(),
        generator_factory.documentation());
  }
}

/**
 * Display the usage message to the standard error stream.
 */
void printUsageError() {
  printUsageTo(stderr);
}

/**
 * If `arguments` includes "--help" (in any position), prints usage message
 * to STDOUT and returns true. Otherwise returns false.
 */
bool maybeHandleHelpInvocation(const std::vector<std::string>& arguments) {
  if (std::find(arguments.begin(), arguments.end(), "--help") ==
      arguments.end()) {
    return false;
  }
  printUsageTo(stdout);
  return true;
}

bool isPathSeparator(const char& c) {
#ifdef _WIN32
  return c == ';';
#else
  return c == ':';
#endif
}

/**
 * Grabs the next argument, if possible.
 *
 * On success (i.e., if there is an argument after the current arg_i),
 * returns a pointer to that argument and increments arg_i (which then
 * corresponds to the returned argument).
 *
 * Otherwise, if no next argument is available, prints an error message to
 * stderr and returns nullptr.
 *
 * @param arg_name Human readable description of the next (expected) argument,
 *        for logging purposes only.
 */
const std::string* consume_next_arg(
    const char* arg_name,
    const std::vector<std::string>& arguments,
    size_t& arg_i) {
  // Note: The input filename must be the last argument.
  if (arg_i + 2 >= arguments.size()) {
    fprintf(
        stderr,
        "!!! Missing %s between %s and '%s'\n\n",
        arg_name,
        arguments[arg_i].c_str(),
        arguments[arg_i + 1].c_str());
    printUsageError();
    return nullptr;
  }
  return &arguments[++arg_i];
}

/**
 * Attempts to parse and return a flag name from the given argument (removing up
 * to two leading '-' characters), otherwise prints an error message and returns
 * the empty string.
 *
 * eg:
 *
 * If `argument == "--foo"`, returns "foo"
 * If `argument == "-bar"`, returns "bar"
 * If `argument == "foo"`, `argument == "-"` or `argument == "--"`:
 *      prints error and returns empty string.
 */
std::string parse_flag(const std::string& argument) {
  if (argument.size() < 2 || argument[0] != '-' || (argument == "--")) {
    fprintf(stderr, "!!! Expected flag, got: %s\n\n", argument.c_str());
    printUsageError();
    return {};
  }

  // argument starts with "-" and is at least 2 chars long.

  if (argument[1] == '-') {
    // argument starts with "--"
    return argument.substr(2);
  }

  return argument.substr(1);
}

/**
 * Returns true iff the given parameters are valid.
 *
 * Otherwise, prints error messages (to stderr) and returns false.
 */
bool validate_params(const gen_params& gparams) {
  // 1. Check target generators
  // Generation must either be explicitly disabled (via --skip-gen) or some
  // generators must be specified (via --gen), but not both!
  const bool has_targets = !gparams.targets.empty();
  const bool skip_gen = gparams.skip_gen;
  if (has_targets && skip_gen) {
    fprintf(stderr, "!!! Cannot specify both --skip-gen and --gen.\n\n");
    printUsageError();
    return false;
  }
  if (!has_targets && !skip_gen) {
    fprintf(
        stderr,
        "!!! No output language(s) specified: need --gen or --skip-gen.\n\n");
    printUsageError();
    return false;
  }
  // Exactly one of skip_gen and has_targets is true => valid.

  // 2. Check output path (if any)
  const std::string& out_path = gparams.out_path;
  if (!out_path.empty()) {
    if (!gparams.add_gen_dir) {
      // Invoker specified `-out blah`. We are supposed to output directly
      // into blah, e.g. `blah/Foo.java`. Make the directory if necessary,
      // just like how for `-o blah` we make `blah/gen-java`
      std::error_code errc;
      std::filesystem::create_directory(out_path, errc);
      if (errc) {
        fprintf(
            stderr,
            "Could not create output directory: %s (error: %s)\n",
            out_path.c_str(),
            errc.message().c_str());
        return false;
      }
    }
    if (!std::filesystem::is_directory(out_path)) {
      fprintf(
          stderr,
          "Output path %s is unusable or not a directory\n",
          out_path.c_str());
      return false;
    }
  }

  return true;
}

// Returns the input file name if successful, otherwise returns an empty
// string.
std::string parse_args(
    const std::vector<std::string>& arguments,
    parsing_params& pparams,
    gen_params& gparams,
    diagnostic_params& dparams,
    sema_params& sparams) {
  // Check for necessary arguments, you gotta have at least a filename and
  // an output language flag.
  if (arguments.size() < 3 && gparams.targets.empty()) {
    printUsageError();
    return {};
  }

  size_t arg_i = 1; // Skip the binary name.

  // Convenient closure to call consume_next_arg() without repeating local
  // variables.
  auto consume_arg = [&](const char* arg_name) -> const std::string* {
    return consume_next_arg(arg_name, arguments, arg_i);
  };

  // Hacky parameter handling... I didn't feel like using a library sorry!

  // Guard so --nowarn and --legacy-strict are order agnostic.
  bool nowarn = false;

  for (; arg_i < arguments.size() - 1;
       ++arg_i) { // Last argument is the src file.
    // Parse flag.
    const std::string flag = parse_flag(arguments[arg_i]);
    if (flag.empty()) {
      return {};
    }

    // Interpret flag.
    if (flag == "debug") {
      dparams.debug = true;
    } else if (flag == "nowarn") {
      dparams.warn_level = 0;
      nowarn = true;
    } else if (flag == "legacy-strict") {
      pparams.strict = 255;
      if (!nowarn) { // Don't override nowarn.
        dparams.warn_level = 2;
      }
    } else if (flag == "v" || flag == "verbose") {
      dparams.info = true;
    } else if (flag == "r" || flag == "recurse") {
      gparams.gen_recurse = true;
    } else if (flag == "allow-neg-keys") {
      // no-op
    } else if (flag == "allow-neg-enum-vals") {
      // no-op
    } else if (flag == "allow-64bit-consts") {
      pparams.allow_64bit_consts = true;
    } else if (flag == "record-genfiles") {
      const std::string* arg = consume_arg("genfile file specification");
      if (arg == nullptr) {
        return {};
      }
      gparams.genfile = *arg;
    } else if (flag == "gen") {
      const std::string* arg = consume_arg("generator specification");
      if (arg == nullptr) {
        return {};
      }
      gparams.targets.push_back(*arg);
    } else if (flag == "skip-gen") {
      gparams.skip_gen = true;
    } else if (flag == "I") {
      const std::string* arg = consume_arg("include directory");
      if (arg == nullptr) {
        return {};
      }
      // An argument of "-I\ asdf" is invalid and has unknown results
      pparams.incl_searchpath.push_back(*arg);
    } else if (flag == "o" || flag == "out") {
      const std::string* arg = consume_arg("output directory");
      if (arg == nullptr) {
        return {};
      }

      if (!gparams.out_path.empty()) {
        fprintf(stderr, "!!! Cannot specify both -o and --out.\n\n");
        printUsageError();
        return {};
      }

      std::string out_path = *arg;

      // Strip out trailing \ on a Windows path
      if (detail::platform_is_windows()) {
        int last = out_path.length() - 1;
        if (out_path[last] == '\\') {
          out_path.erase(last);
        }
      }

      gparams.out_path = std::move(out_path);
      gparams.add_gen_dir = (flag == "o");
    } else if (flag == "inject-schema-const") {
      gparams.inject_schema_const = true;
    } else if (flag == "extra-validation") {
      const std::string* arg = consume_arg("extra validation");
      if (arg == nullptr) {
        return {};
      }
      std::vector<std::string> validators;
      boost::algorithm::split(
          validators, *arg, [](char c) { return c == ','; });
      for (const auto& validator : validators) {
        if (validator == "unstructured_annotations_on_field_type") {
          sparams.forbid_unstructured_annotations_on_field_types = true;
        } else if (validator == "forbid_non_optional_cpp_ref_fields") {
          // no-op
        } else if (validator == "-forbid_non_optional_cpp_ref_fields") {
          // DO_BEFORE(aristidis,20250201): Remove support for escape hatch:
          // -forbid_non_optional_cpp_ref_fields
          sparams.forbid_non_optional_cpp_ref_fields = false;
        } else if (validator == "implicit_field_ids") {
          // no-op
        } else {
          fprintf(
              stderr, "!!! Unrecognized validator: %s\n\n", validator.c_str());
          printUsageError();
          return {};
        }
      }
    } else {
      fprintf(
          stderr, "!!! Unrecognized option: %s\n\n", arguments[arg_i].c_str());
      printUsageError();
      return {};
    }
  }

  if (const char* env_p = std::getenv("THRIFT_INCLUDE_PATH")) {
    std::vector<std::string> components;
    boost::algorithm::split(components, env_p, isPathSeparator);
    pparams.incl_searchpath.insert(
        pparams.incl_searchpath.end(), components.begin(), components.end());
  }

  if (!validate_params(gparams)) {
    return {};
  }

  // Return the input file name.
  assert(arg_i == arguments.size() - 1);
  if (detail::platform_is_windows()) {
    // The path here is used in schema.thrift
    //
    // * In Linux, buck uses relative path.
    // * In Windows, buck uses absolute path.
    //
    // To make the generated schema.thrift consistent with Unix, we need to
    // convert it to relative path when possible.
    //
    // Not that the path might not exist since when thrift compiler is used as
    // library, user's code can use `source_manager::add_virtual_file(...)`
    // method to create a virtual file.
    return std::filesystem::proximate(arguments[arg_i]).generic_string();
  }
  return arguments[arg_i];
}

enum class parse_control : bool { stop, more };

// `callback(key, value)` will be called for each key=value generator's option.
// If there is no value, `value` will be empty string.
void parse_generator_options(
    const std::string& option_string,
    std::function<parse_control(std::string, std::string)> callback) {
  std::vector<std::string> parts;
  bool inside_braces = false;
  boost::algorithm::split(parts, option_string, [&inside_braces](char c) {
    if (c == '{' || c == '}') {
      inside_braces = (c == '{');
    }
    return c == ',' && !inside_braces;
  });
  for (const auto& part : parts) {
    auto key = part.substr(0, part.find('='));
    auto value = part.substr(std::min(key.size() + 1, part.size()));
    if (callback(std::move(key), std::move(value)) == parse_control::stop) {
      break;
    }
  }
}

struct generator_specs {
  std::string generator_name;
  std::map<std::string, std::string> generator_options;
};

/**
 * Parses the given target specification string.
 *
 * For example, if `target == "ast:protocol=json"`, the return value would be:
 *
 * ```
 * { "ast", { "protocol": "json" } }
 * ```
 */
generator_specs parse_generator_specs(const std::string& target) {
  const auto colon_pos = target.find(':');
  std::string name = target.substr(0, colon_pos);

  std::map<std::string, std::string> options;
  parse_generator_options(
      target.substr(colon_pos + 1), [&](std::string k, std::string v) {
        options.emplace(std::move(k), std::move(v));
        return parse_control::more;
      });
  return {std::move(name), std::move(options)};
}

/**
 * Creates and processes options for a generator based on the given `target`
 * specification string.
 *
 * If a generator cannot be successfully created with the given parameters, an
 * error message is printed to stderr and this method returns `nullptr`.
 *
 * @param target specification string, eg "ast:protocol=json".
 *
 * @return successfully created generator, or `nullptr` on failure.
 *
 * @throws std::exception if the generator options could not be processed (see
 * `t_generator::process_options`).
 */
std::unique_ptr<t_generator> create_generator(
    const std::string& target,
    const gen_params& params,
    t_program& program,
    t_program_bundle& program_bundle,
    diagnostics_engine& diags) {
  const auto [generator_name, generator_options] =
      parse_generator_specs(target);
  std::unique_ptr<t_generator> generator = generator_registry::make_generator(
      generator_name, program, program_bundle, diags);
  if (generator == nullptr) {
    fmt::print(stderr, "Error: Invalid generator name: {}\n", generator_name);
    printUsageError();
    return nullptr;
  }
  generator->process_options(
      generator_options, params.out_path, params.add_gen_dir);
  return generator;
}

/**
 * Validates the program currently being generated by `generator`.
 *
 * The validators to run are specified by the `generator` (see
 * `t_generator::fill_validator_list()`).
 *
 * @return true iff no validator reports an error (i.e.,
 * `diagnostic_level::error`.
 */
bool validate_program(t_generator& generator, diagnostics_engine& diags) {
  bool success = true;
  sema_context validator_ctx(
      diags.source_mgr(),
      [&](diagnostic d) {
        if (d.level() == diagnostic_level::error) {
          success = false;
        }
        diags.report(std::move(d));
      },
      diags.params());
  ast_validator validator;
  generator.fill_validator_visitors(validator);
  validator(validator_ctx, *generator.get_program());
  return success;
}

/**
 * Validates and generates the output for the given `program`.
 *
 * @return true iff generation was successful for all targets in `params`
 */
bool generate_code_for_single_program(
    const gen_params& params,
    t_program& program,
    t_program_bundle& program_bundle,
    diagnostics_engine& diags) {
  try {
    bool all_targets_successful = true;

    std::ofstream genfile_list_out;
    if (!params.genfile.empty()) {
      genfile_list_out.open(params.genfile);
    }

    for (const std::string& target : params.targets) {
      std::unique_ptr<t_generator> generator =
          create_generator(target, params, program, program_bundle, diags);
      if (generator == nullptr) {
        continue;
      }

      if (!validate_program(*generator, diags)) {
        all_targets_successful = false;
        continue;
      }

      diags.report(
          source_location(),
          diagnostic_level::info,
          "generating \"{}\"",
          target);
      generator->generate_program();

      if (genfile_list_out.is_open()) {
        for (const std::string& s : generator->get_genfiles()) {
          genfile_list_out << s << "\n";
        }
      }
    }
    return all_targets_successful && !diags.has_errors();
  } catch (const std::string& s) {
    printf("Error: %s\n", s.c_str());
    return false;
  } catch (const char* exc) {
    printf("Error: %s\n", exc);
    return false;
  }
}

/**
 * Validates and generates the output for the given `program` and all its
 * (transitive) dependencies.
 *
 * @return true iff the (validation and) generation was successful for all
 * (transitive) dependencies of `program` and target generators.
 */
bool generate_code_recursively(
    const gen_params& params,
    t_program& program,
    std::set<std::string>& already_generated,
    t_program_bundle& program_bundle,
    diagnostics_engine& diags) {
  // Add the path we are about to generate.
  [[maybe_unused]] const auto [_, inserted] =
      already_generated.emplace(program.path());
  assert(inserted); // Was not already generated

  for (t_program* included_program : program.get_included_programs()) {
    if (already_generated.count(included_program->path()) > 0) {
      continue;
    }
    if (!generate_code_recursively(
            params,
            *included_program,
            already_generated,
            program_bundle,
            diags)) {
      return false;
    }
  }

  return generate_code_for_single_program(
      params, program, program_bundle, diags);
}

/**
 * Validates and generates the output for the given `program_bundle`.
 *
 * Depending on `gparams.gen_recurse`, this will either generate the output for
 * the root program in the bundle, or for all programs (i.e., the root program
 * and all of its transitive dependencies).
 *
 * @return `compile_retcode::success` if validation and generation of all
 * requested programs (see above) was successful (for all generator targets
 * specified in `gparams`). Otherwise, `compile_retcode::failure`.
 */
compile_retcode generate_code_for_program_bundle(
    t_program_bundle& program_bundle,
    const gen_params& gparams,
    sema_context& ctx) {
  compile_retcode retcode = compile_retcode::failure;

  ctx.begin_visit(*program_bundle.root_program());
  try {
    if (gparams.gen_recurse) {
      std::set<std::string> already_generated;
      if (generate_code_recursively(
              gparams,
              *program_bundle.get_root_program(),
              already_generated,
              program_bundle,
              ctx)) {
        retcode = compile_retcode::success;
      }
    } else {
      if (generate_code_for_single_program(
              gparams,
              *program_bundle.get_root_program(),
              program_bundle,
              ctx)) {
        retcode = compile_retcode::success;
      }
    }
  } catch (const std::exception& e) {
    ctx.error(*program_bundle.root_program(), "{}", e.what());
  }
  ctx.end_visit(*program_bundle.root_program());
  return retcode;
}

std::string get_include_path(
    const std::vector<std::string>& generator_targets,
    const std::string& input_filename) {
  std::string include_prefix;
  for (const auto& target : generator_targets) {
    const auto colon_pos = target.find(':');
    if (colon_pos == std::string::npos) {
      continue;
    }
    const auto lang_name = target.substr(0, colon_pos);
    if (lang_name != "cpp2" && lang_name != "mstch_cpp2") {
      continue;
    }

    const auto lang_args = target.substr(colon_pos + 1);
    parse_generator_options(lang_args, [&](std::string k, std::string v) {
      if (k.find("include_prefix") != std::string::npos) {
        include_prefix = std::move(v);
        return parse_control::stop;
      }
      return parse_control::more;
    });
  }

  // infer cpp include prefix from the filename passed in if none specified.
  if (include_prefix == "") {
    if (input_filename.rfind('/') != std::string::npos) {
      include_prefix = input_filename.substr(0, input_filename.rfind('/'));
    }
  }

  return include_prefix;
}

/**
 * Parses and validates the given Thrift file.
 *
 * @returns The AST root of the t_program_bundle corresponding to
 * `input_filename`, or nullptr on error.
 */
std::unique_ptr<t_program_bundle> parse_and_mutate(
    source_manager& source_mgr,
    sema_context& ctx,
    const std::string& input_filename,
    const parsing_params& pparams,
    const gen_params& gparams) {
  auto found_or_error = source_manager::path_or_error();
  if constexpr (bundle_annotations()) {
    const auto& annotation_files =
        apache::thrift::detail::bundled_annotations::files();
    for (const auto& [path, content] : annotation_files) {
      found_or_error = source_mgr.find_include_file(
          path, input_filename, pparams.incl_searchpath);
      if (found_or_error.index() != 0) {
        // Fall back to the bundled annotation files.
        source_mgr.add_virtual_file(path, content);
      }
    }
  }

  // Parse it!
  std::unique_ptr<t_program_bundle> program_bundle = parse_ast(
      source_mgr, ctx, input_filename, pparams, &ctx.sema_parameters());
  if (!program_bundle || ctx.has_errors()) {
    return nullptr;
  }

  // Load standard library if available.
  const std::string schema_path = "thrift/lib/thrift/schema.thrift";
  found_or_error =
      source_mgr.find_include_file(schema_path, "", pparams.incl_searchpath);
  if (found_or_error.index() == 0) {
    if (!program_bundle->find_program_by_full_path(
            std::get<0>(found_or_error))) {
      sema_context stdlib_ctx(
          source_mgr,
          [&](diagnostic&& d) {
            ctx.report(
                source_location{},
                diagnostic_level::debug,
                "Could not load Thrift standard libraries: {}",
                d);
          },
          diagnostic_params::only_errors());
      std::unique_ptr<t_program_bundle> inc = parse_ast(
          source_mgr,
          stdlib_ctx,
          schema_path,
          pparams,
          nullptr,
          program_bundle.get());
      if (inc && !stdlib_ctx.has_errors()) {
        program_bundle->add_implicit_includes(std::move(inc));
      }
    }
  }

  // C++ codegen inserts an empty const if this is false. Other languages may
  // dynamically determine whether the schema const exists.
  if (gparams.inject_schema_const) {
    if (found_or_error.index() != 0) {
      ctx.warning(
          source_location(),
          "Could not load Thrift standard libraries: {}",
          std::get<1>(found_or_error));
    }
    sema::add_schema(ctx, *program_bundle);
  }

  program_bundle->root_program()->set_include_prefix(
      get_include_path(gparams.targets, input_filename));

  return ctx.has_errors() ? nullptr : std::move(program_bundle);
}

} // namespace

std::optional<std::string> detail::parse_command_line_args(
    const std::vector<std::string>& args,
    parsing_params& parsing_params,
    sema_params& sema_params) {
  gen_params gen_params = {};
  gen_params.targets.emplace_back(); // Avoid the need to pass --gen.
  diagnostic_params diag_params = {};
  auto filename =
      parse_args(args, parsing_params, gen_params, diag_params, sema_params);
  return filename.empty() ? std::nullopt
                          : std::make_optional(std::move(filename));
}

std::pair<std::unique_ptr<t_program_bundle>, diagnostic_results>
parse_and_mutate_program(
    source_manager& sm,
    const std::string& filename,
    parsing_params params,
    diagnostic_params dparams) {
  diagnostic_results results;
  diagnostics_engine diags(sm, results, std::move(dparams));
  return {parse_ast(sm, diags, filename, std::move(params)), results};
}

std::unique_ptr<t_program_bundle> parse_and_dump_diagnostics(
    const std::string& filename,
    source_manager& sm,
    parsing_params pparams,
    diagnostic_params dparams) {
  diagnostic_results results;
  diagnostics_engine diags(sm, results, std::move(dparams));
  auto programs = parse_ast(sm, diags, filename, std::move(pparams));
  for (const auto& diag : results.diagnostics()) {
    fmt::print(stderr, "{}\n", diag);
  }
  return programs;
}

std::unique_ptr<t_program_bundle> parse_and_get_program(
    source_manager& sm, const std::vector<std::string>& arguments) {
  // Parse arguments.
  parsing_params pparams;
  pparams.allow_missing_includes = true;
  gen_params gparams;
  diagnostic_params dparams;
  sema_params sparams;
  gparams.targets.push_back(""); // Avoid needing to pass --gen
  std::string filename =
      parse_args(arguments, pparams, gparams, dparams, sparams);
  if (filename.empty()) {
    return {};
  }

  diagnostics_engine diags(
      sm,
      [](const diagnostic& d) { fmt::print(stderr, "{}\n", d); },
      diagnostic_params::only_errors());
  sparams.skip_lowering_annotations = true;
  return parse_ast(sm, diags, filename, std::move(pparams), &sparams);
}

compile_result compile(
    const std::vector<std::string>& arguments, source_manager& source_mgr) {
  compile_result result;

  // If --help is explicitly passed, print (non-error) usage and return
  // successfully.
  if (maybeHandleHelpInvocation(arguments)) {
    result.retcode = compile_retcode::success;
    return result;
  }

  // Parse arguments.
  parsing_params pparams;
  gen_params gparams;
  diagnostic_params dparams;
  sema_params sparams;
  std::string input_filename =
      parse_args(arguments, pparams, gparams, dparams, sparams);
  if (input_filename.empty()) {
    return result;
  }
  sema_context ctx(source_mgr, result.detail, std::move(dparams));
  ctx.sema_parameters() = std::move(sparams);

  std::unique_ptr<t_program_bundle> program_bundle =
      parse_and_mutate(source_mgr, ctx, input_filename, pparams, gparams);
  if (program_bundle == nullptr) {
    return result;
  }

  if (gparams.skip_gen) {
    result.retcode = compile_retcode::success;
    return result;
  }

  result.retcode =
      generate_code_for_program_bundle(*program_bundle, gparams, ctx);
  return result;
}

} // namespace apache::thrift::compiler
