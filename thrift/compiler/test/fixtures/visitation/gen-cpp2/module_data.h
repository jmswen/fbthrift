/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_data_h.h>

#include "thrift/compiler/test/fixtures/visitation/gen-cpp2/module_types.h"

namespace apache { namespace thrift {

template <> struct TEnumDataStorage<::test_cpp2::cpp_reflection::enum1> {
  using type = ::test_cpp2::cpp_reflection::enum1;
  static constexpr const std::size_t size = 3;
  static const std::array<type, size> values;
  static const std::array<folly::StringPiece, size> names;
};

template <> struct TEnumDataStorage<::test_cpp2::cpp_reflection::enum2> {
  using type = ::test_cpp2::cpp_reflection::enum2;
  static constexpr const std::size_t size = 3;
  static const std::array<type, size> values;
  static const std::array<folly::StringPiece, size> names;
};

template <> struct TEnumDataStorage<::test_cpp2::cpp_reflection::enum3> {
  using type = ::test_cpp2::cpp_reflection::enum3;
  static constexpr const std::size_t size = 2;
  static const std::array<type, size> values;
  static const std::array<folly::StringPiece, size> names;
};

template <> struct TEnumDataStorage<::test_cpp2::cpp_reflection::enum_with_special_names> {
  using type = ::test_cpp2::cpp_reflection::enum_with_special_names;
  static constexpr const std::size_t size = 28;
  static const std::array<type, size> values;
  static const std::array<folly::StringPiece, size> names;
};

template <> struct TEnumDataStorage<::test_cpp2::cpp_reflection::union1::Type> {
  using type = ::test_cpp2::cpp_reflection::union1::Type;
  static constexpr const std::size_t size = 4;
  static const std::array<type, size> values;
  static const std::array<folly::StringPiece, size> names;
};

template <> struct TEnumDataStorage<::test_cpp2::cpp_reflection::union2::Type> {
  using type = ::test_cpp2::cpp_reflection::union2::Type;
  static constexpr const std::size_t size = 4;
  static const std::array<type, size> values;
  static const std::array<folly::StringPiece, size> names;
};

template <> struct TEnumDataStorage<::test_cpp2::cpp_reflection::union3::Type> {
  using type = ::test_cpp2::cpp_reflection::union3::Type;
  static constexpr const std::size_t size = 4;
  static const std::array<type, size> values;
  static const std::array<folly::StringPiece, size> names;
};

template <> struct TEnumDataStorage<::test_cpp2::cpp_reflection::unionA::Type> {
  using type = ::test_cpp2::cpp_reflection::unionA::Type;
  static constexpr const std::size_t size = 5;
  static const std::array<type, size> values;
  static const std::array<folly::StringPiece, size> names;
};

template <> struct TEnumDataStorage<::test_cpp2::cpp_reflection::union_with_special_names::Type> {
  using type = ::test_cpp2::cpp_reflection::union_with_special_names::Type;
  static constexpr const std::size_t size = 28;
  static const std::array<type, size> values;
  static const std::array<folly::StringPiece, size> names;
};

template <> struct TStructDataStorage<::test_cpp2::cpp_reflection::union1> {
  static constexpr const std::size_t fields_size = 4;
  static const std::array<folly::StringPiece, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;

 private:
  // The following fields describe internal storage metadata, and are private to
  // prevent user logic from accessing them, but they can be inspected by
  // debuggers.
  static const std::array<folly::StringPiece, fields_size> storage_names;
  // -1 if the field has no isset.
  static const std::array<int, fields_size> isset_indexes;
};

template <> struct TStructDataStorage<::test_cpp2::cpp_reflection::union2> {
  static constexpr const std::size_t fields_size = 4;
  static const std::array<folly::StringPiece, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;

 private:
  // The following fields describe internal storage metadata, and are private to
  // prevent user logic from accessing them, but they can be inspected by
  // debuggers.
  static const std::array<folly::StringPiece, fields_size> storage_names;
  // -1 if the field has no isset.
  static const std::array<int, fields_size> isset_indexes;
};

template <> struct TStructDataStorage<::test_cpp2::cpp_reflection::union3> {
  static constexpr const std::size_t fields_size = 4;
  static const std::array<folly::StringPiece, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;

 private:
  // The following fields describe internal storage metadata, and are private to
  // prevent user logic from accessing them, but they can be inspected by
  // debuggers.
  static const std::array<folly::StringPiece, fields_size> storage_names;
  // -1 if the field has no isset.
  static const std::array<int, fields_size> isset_indexes;
};

template <> struct TStructDataStorage<::test_cpp2::cpp_reflection::structA> {
  static constexpr const std::size_t fields_size = 2;
  static const std::array<folly::StringPiece, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;

 private:
  // The following fields describe internal storage metadata, and are private to
  // prevent user logic from accessing them, but they can be inspected by
  // debuggers.
  static const std::array<folly::StringPiece, fields_size> storage_names;
  // -1 if the field has no isset.
  static const std::array<int, fields_size> isset_indexes;
};

template <> struct TStructDataStorage<::test_cpp2::cpp_reflection::unionA> {
  static constexpr const std::size_t fields_size = 5;
  static const std::array<folly::StringPiece, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;

 private:
  // The following fields describe internal storage metadata, and are private to
  // prevent user logic from accessing them, but they can be inspected by
  // debuggers.
  static const std::array<folly::StringPiece, fields_size> storage_names;
  // -1 if the field has no isset.
  static const std::array<int, fields_size> isset_indexes;
};

template <> struct TStructDataStorage<::test_cpp2::cpp_reflection::structB> {
  static constexpr const std::size_t fields_size = 2;
  static const std::array<folly::StringPiece, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;

 private:
  // The following fields describe internal storage metadata, and are private to
  // prevent user logic from accessing them, but they can be inspected by
  // debuggers.
  static const std::array<folly::StringPiece, fields_size> storage_names;
  // -1 if the field has no isset.
  static const std::array<int, fields_size> isset_indexes;
};

template <> struct TStructDataStorage<::test_cpp2::cpp_reflection::structC> {
  static constexpr const std::size_t fields_size = 30;
  static const std::array<folly::StringPiece, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;

 private:
  // The following fields describe internal storage metadata, and are private to
  // prevent user logic from accessing them, but they can be inspected by
  // debuggers.
  static const std::array<folly::StringPiece, fields_size> storage_names;
  // -1 if the field has no isset.
  static const std::array<int, fields_size> isset_indexes;
};

template <> struct TStructDataStorage<::test_cpp2::cpp_reflection::struct1> {
  static constexpr const std::size_t fields_size = 6;
  static const std::array<folly::StringPiece, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;

 private:
  // The following fields describe internal storage metadata, and are private to
  // prevent user logic from accessing them, but they can be inspected by
  // debuggers.
  static const std::array<folly::StringPiece, fields_size> storage_names;
  // -1 if the field has no isset.
  static const std::array<int, fields_size> isset_indexes;
};

template <> struct TStructDataStorage<::test_cpp2::cpp_reflection::struct2> {
  static constexpr const std::size_t fields_size = 7;
  static const std::array<folly::StringPiece, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;

 private:
  // The following fields describe internal storage metadata, and are private to
  // prevent user logic from accessing them, but they can be inspected by
  // debuggers.
  static const std::array<folly::StringPiece, fields_size> storage_names;
  // -1 if the field has no isset.
  static const std::array<int, fields_size> isset_indexes;
};

template <> struct TStructDataStorage<::test_cpp2::cpp_reflection::struct3> {
  static constexpr const std::size_t fields_size = 18;
  static const std::array<folly::StringPiece, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;

 private:
  // The following fields describe internal storage metadata, and are private to
  // prevent user logic from accessing them, but they can be inspected by
  // debuggers.
  static const std::array<folly::StringPiece, fields_size> storage_names;
  // -1 if the field has no isset.
  static const std::array<int, fields_size> isset_indexes;
};

template <> struct TStructDataStorage<::test_cpp2::cpp_reflection::struct4> {
  static constexpr const std::size_t fields_size = 4;
  static const std::array<folly::StringPiece, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;

 private:
  // The following fields describe internal storage metadata, and are private to
  // prevent user logic from accessing them, but they can be inspected by
  // debuggers.
  static const std::array<folly::StringPiece, fields_size> storage_names;
  // -1 if the field has no isset.
  static const std::array<int, fields_size> isset_indexes;
};

template <> struct TStructDataStorage<::test_cpp2::cpp_reflection::struct5> {
  static constexpr const std::size_t fields_size = 5;
  static const std::array<folly::StringPiece, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;

 private:
  // The following fields describe internal storage metadata, and are private to
  // prevent user logic from accessing them, but they can be inspected by
  // debuggers.
  static const std::array<folly::StringPiece, fields_size> storage_names;
  // -1 if the field has no isset.
  static const std::array<int, fields_size> isset_indexes;
};

template <> struct TStructDataStorage<::test_cpp2::cpp_reflection::struct_binary> {
  static constexpr const std::size_t fields_size = 1;
  static const std::array<folly::StringPiece, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;

 private:
  // The following fields describe internal storage metadata, and are private to
  // prevent user logic from accessing them, but they can be inspected by
  // debuggers.
  static const std::array<folly::StringPiece, fields_size> storage_names;
  // -1 if the field has no isset.
  static const std::array<int, fields_size> isset_indexes;
};

template <> struct TStructDataStorage<::test_cpp2::cpp_reflection::dep_A_struct> {
  static constexpr const std::size_t fields_size = 3;
  static const std::array<folly::StringPiece, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;

 private:
  // The following fields describe internal storage metadata, and are private to
  // prevent user logic from accessing them, but they can be inspected by
  // debuggers.
  static const std::array<folly::StringPiece, fields_size> storage_names;
  // -1 if the field has no isset.
  static const std::array<int, fields_size> isset_indexes;
};

template <> struct TStructDataStorage<::test_cpp2::cpp_reflection::dep_B_struct> {
  static constexpr const std::size_t fields_size = 3;
  static const std::array<folly::StringPiece, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;

 private:
  // The following fields describe internal storage metadata, and are private to
  // prevent user logic from accessing them, but they can be inspected by
  // debuggers.
  static const std::array<folly::StringPiece, fields_size> storage_names;
  // -1 if the field has no isset.
  static const std::array<int, fields_size> isset_indexes;
};

template <> struct TStructDataStorage<::test_cpp2::cpp_reflection::annotated> {
  static constexpr const std::size_t fields_size = 1;
  static const std::array<folly::StringPiece, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;

 private:
  // The following fields describe internal storage metadata, and are private to
  // prevent user logic from accessing them, but they can be inspected by
  // debuggers.
  static const std::array<folly::StringPiece, fields_size> storage_names;
  // -1 if the field has no isset.
  static const std::array<int, fields_size> isset_indexes;
};

template <> struct TStructDataStorage<::test_cpp2::cpp_reflection::union_with_special_names> {
  static constexpr const std::size_t fields_size = 28;
  static const std::array<folly::StringPiece, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;

 private:
  // The following fields describe internal storage metadata, and are private to
  // prevent user logic from accessing them, but they can be inspected by
  // debuggers.
  static const std::array<folly::StringPiece, fields_size> storage_names;
  // -1 if the field has no isset.
  static const std::array<int, fields_size> isset_indexes;
};

template <> struct TStructDataStorage<::test_cpp2::cpp_reflection::struct_with_special_names> {
  static constexpr const std::size_t fields_size = 28;
  static const std::array<folly::StringPiece, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;

 private:
  // The following fields describe internal storage metadata, and are private to
  // prevent user logic from accessing them, but they can be inspected by
  // debuggers.
  static const std::array<folly::StringPiece, fields_size> storage_names;
  // -1 if the field has no isset.
  static const std::array<int, fields_size> isset_indexes;
};

template <> struct TStructDataStorage<::test_cpp2::cpp_reflection::struct_with_indirections> {
  static constexpr const std::size_t fields_size = 5;
  static const std::array<folly::StringPiece, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;

 private:
  // The following fields describe internal storage metadata, and are private to
  // prevent user logic from accessing them, but they can be inspected by
  // debuggers.
  static const std::array<folly::StringPiece, fields_size> storage_names;
  // -1 if the field has no isset.
  static const std::array<int, fields_size> isset_indexes;
};

}} // apache::thrift
