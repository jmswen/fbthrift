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

#pragma once

#include <string>
#include <string_view>
#include <unordered_set>
#include <vector>

#include <thrift/compiler/ast/t_enum.h>
#include <thrift/compiler/ast/t_program.h>
#include <thrift/compiler/ast/t_service.h>
#include <thrift/compiler/ast/t_struct.h>
#include <thrift/compiler/ast/t_type.h>

namespace apache::thrift::compiler {

/**
 * Split a namespace string using '.' as a token
 */
std::vector<std::string> split_namespace(const std::string& s);

/**
 * return all types used in the struct, including types container elements,
 * but not including fields of nested structs
 */
std::unordered_set<const t_type*> collect_types(const t_structured* strct);

/**
 * Return whether to generate legacy apis
 */
bool generate_legacy_api(const t_program&);
bool generate_legacy_api(const t_structured&);
bool generate_legacy_api(const t_enum&);
bool generate_legacy_api(const t_service&);

inline std::string get_escaped_string(std::string_view str) {
  std::string escaped;
  escaped.reserve(str.size());
  for (unsigned char c : str) {
    switch (c) {
      case '\\':
        escaped.append("\\\\");
        break;
      case '"':
        escaped.append("\\\"");
        break;
      case '\r':
        escaped.append("\\r");
        break;
      case '\n':
        escaped.append("\\n");
        break;
      case '?':
        escaped.append("\\?");
        break;
      default:
        if (c < 0x20 || c >= 0x7F) {
          // Use octal escape sequences because they are the most portable
          // across languages. Hexadecimal ones have a problem of consuming
          // all hex digits after \x in C++, e.g. \xcafefe is a single escape
          // sequence.
          escaped.append(fmt::format("\\{:03o}", c));
        } else {
          escaped.push_back(c);
        }
        break;
    }
  }
  return escaped;
}

} // namespace apache::thrift::compiler
