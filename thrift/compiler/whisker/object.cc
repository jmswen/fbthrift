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

#include <thrift/compiler/whisker/object.h>

#include <cassert>
#include <ostream>
#include <set>
#include <sstream>
#include <type_traits>

#include <fmt/core.h>
#include <fmt/ranges.h>

namespace whisker {

namespace {

class to_string_visitor {
 public:
  explicit to_string_visitor(const object_print_options& opts) : opts_(opts) {}

  // Prevent implicit conversion to whisker::object. Otherwise, we can silently
  // compile an infinitely recursive visit() chain if there is a missing
  // overload for one of the alternatives in the variant.
  template <
      typename T = object,
      typename = std::enable_if_t<std::is_same_v<T, object>>>
  void visit(const T& value, tree_printer::scope scope) const {
    value.visit(
        [&](const array& a) { visit_maybe_truncate(a, std::move(scope)); },
        [&](const map& m) { visit_maybe_truncate(m, std::move(scope)); },
        [&](const native_object::ptr& o) {
          visit_maybe_truncate(o, std::move(scope));
        },
        [&](const native_function::ptr& f) {
          visit_maybe_truncate(f, std::move(scope));
        },
        // All other types are printed inline so no truncation is necessary.
        [&](auto&& alternative) { visit(alternative, std::move(scope)); });
  }

 private:
  template <typename T>
  void visit_maybe_truncate(const T& value, tree_printer::scope scope) const {
    if (at_max_depth(scope)) {
      scope.println("...");
      return;
    }
    visit(value, scope);
  }

  void visit(i64 value, tree_printer::scope scope) const {
    require_within_max_depth(scope);
    scope.println("i64({})", value);
  }

  void visit(f64 value, tree_printer::scope scope) const {
    require_within_max_depth(scope);
    scope.println("f64({})", value);
  }

  void visit(const std::string& value, tree_printer::scope scope) const {
    require_within_max_depth(scope);
    scope.println("'{}'", tree_printer::escape(value));
  }

  void visit(bool value, tree_printer::scope scope) const {
    require_within_max_depth(scope);
    scope.println("{}", value ? "true" : "false");
  }

  void visit(null, tree_printer::scope scope) const {
    require_within_max_depth(scope);
    scope.println("null");
  }

  void visit(const array& arr, tree_printer::scope scope) const {
    require_within_max_depth(scope);
    scope.println("array (size={})", arr.size());
    for (std::size_t i = 0; i < arr.size(); ++i) {
      auto element_scope = scope.open_transparent_property();
      element_scope.println("[{}]", i);
      visit(arr[i], element_scope.open_node());
    }
  }

  void visit(const map& m, tree_printer::scope scope) const {
    require_within_max_depth(scope);
    scope.println("map (size={})", m.size());
    for (const auto& [key, value] : m) {
      auto element_scope = scope.open_transparent_property();
      element_scope.println("'{}'", key);
      visit(value, element_scope.open_node());
    }
  }

  void visit(const native_object::ptr& o, tree_printer::scope scope) const {
    require_within_max_depth(scope);
    o->print_to(std::move(scope), opts_);
  }

  void visit(const native_function::ptr& f, tree_printer::scope scope) const {
    require_within_max_depth(scope);
    f->print_to(std::move(scope), opts_);
  }

  [[nodiscard]] bool at_max_depth(const tree_printer::scope& scope) const {
    return scope.semantic_depth() == opts_.max_depth;
  }

  void require_within_max_depth(
      [[maybe_unused]] const tree_printer::scope& scope) const {
    assert(scope.semantic_depth() <= opts_.max_depth);
  }

  const object_print_options& opts_;
};

} // namespace

void native_object::print_to(
    tree_printer::scope scope, const object_print_options&) const {
  scope.println("<native_object>");
}

bool native_object::operator==(const native_object& other) const {
  return &other == this;
}

maybe_managed_ptr<object> native_function::context::named_argument(
    std::string_view name, named_argument_presence presence) const {
  auto arg = named_args_.find(name);
  if (arg == named_args_.end()) {
    if (presence == named_argument_presence::optional) {
      return nullptr;
    }
    error("Missing named argument '{}'.", name);
  }
  return arg->second;
}

void native_function::context::do_warning(std::string msg) const {
  diags_.get().warning(loc_.begin, "{}", std::move(msg));
}

void native_function::context::declare_arity(std::size_t expected) const {
  if (arity() != expected) {
    error("Expected {} argument(s) but got {}", expected, arity());
  }
}

void native_function::context::declare_named_arguments(
    std::initializer_list<std::string_view> expected) const {
  // Using std::set so that the error message is deterministic.
  std::set<std::string_view> names;
  for (const auto& [name, _] : named_args_) {
    names.insert(name);
  }
  for (const auto& name : expected) {
    names.erase(name);
  }
  if (!names.empty()) {
    error("Unknown named argument(s) provided: {}.", fmt::join(names, ", "));
  }
}

void native_function::print_to(
    tree_printer::scope scope, const object_print_options&) const {
  scope.println("<native_function>");
}

std::string to_string(const object& obj, const object_print_options& options) {
  std::ostringstream out;
  print_to(obj, tree_printer::scope::make_root(out), options);
  return std::move(out).str();
}

void print_to(
    const object& obj,
    tree_printer::scope scope,
    const object_print_options& options) {
  to_string_visitor(options).visit(obj, std::move(scope));
}

std::ostream& operator<<(std::ostream& out, const object& o) {
  return out << to_string(o);
}

} // namespace whisker
