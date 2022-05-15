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

#include <thrift/lib/cpp2/type/TypeRegistry.h>

#include <folly/portability/GTest.h>
#include <thrift/lib/cpp2/type/Any.h>
#include <thrift/lib/cpp2/type/AnyRef.h>
#include <thrift/lib/cpp2/type/AnyValue.h>
#include <thrift/lib/cpp2/type/UniversalName.h>

namespace apache::thrift::type {
namespace {

TEST(TypeRegistry, Void) {
  TypeRegistry treg;
  // We can store void.
  AnyData data = treg.store<StandardProtocol::Compact>(AnyRef{});
  EXPECT_EQ(data.type(), Type::get<void_t>());
  EXPECT_TRUE(data.protocol().empty()); // void has no protocol

  // Can load void.
  AnyValue val = treg.load(data);
  EXPECT_TRUE(val.empty());
  EXPECT_EQ(val.type(), Type::get<void_t>());

  // Happy with an empty AnyRef.
  AnyRef rval;
  treg.load(data, rval);
  EXPECT_TRUE(rval.empty());
  EXPECT_EQ(rval.type(), Type::create<void_t>());

  // Cannot load void into a real reference.
  int32_t uval;
  rval = AnyRef::create<i32_t>(uval);
  EXPECT_THROW(treg.load(data, rval), std::bad_any_cast);
}

TEST(TypeRegistry, NotImplemented) {
  TypeRegistry treg;
  // Try to store a non-void value.
  EXPECT_THROW(
      (treg.store<i16_t, StandardProtocol::Compact>(7)), std::out_of_range);

  // Try to load a non-void value.
  SemiAny builder;
  builder.type() = i16_t{};
  builder.protocol() = Protocol::get<StandardProtocol::Compact>();
  AnyData data(builder);
  EXPECT_THROW(treg.load(data), std::out_of_range);
}

} // namespace
} // namespace apache::thrift::type
