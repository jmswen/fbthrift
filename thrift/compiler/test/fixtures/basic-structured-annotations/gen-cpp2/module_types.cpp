/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/basic-structured-annotations/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/basic-structured-annotations/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/basic-structured-annotations/gen-cpp2/module_data.h"


namespace apache { namespace thrift {

constexpr std::size_t const TEnumTraits<::cpp2::MyEnum>::size;
folly::Range<::cpp2::MyEnum const*> const TEnumTraits<::cpp2::MyEnum>::values = folly::range(TEnumDataStorage<::cpp2::MyEnum>::values);
folly::Range<folly::StringPiece const*> const TEnumTraits<::cpp2::MyEnum>::names = folly::range(TEnumDataStorage<::cpp2::MyEnum>::names);

char const* TEnumTraits<::cpp2::MyEnum>::findName(type value) {
  using factory = ::cpp2::_MyEnum_EnumMapFactory;
  static folly::Indestructible<factory::ValuesToNamesMapType> const map{
      factory::makeValuesToNamesMap()};
  auto found = map->find(value);
  return found == map->end() ? nullptr : found->second;
}

bool TEnumTraits<::cpp2::MyEnum>::findValue(char const* name, type* out) {
  using factory = ::cpp2::_MyEnum_EnumMapFactory;
  static folly::Indestructible<factory::NamesToValuesMapType> const map{
      factory::makeNamesToValuesMap()};
  auto found = map->find(name);
  return found == map->end() ? false : (*out = found->second, true);
}

}} // apache::thrift

namespace cpp2 {
FOLLY_PUSH_WARNING
FOLLY_GNU_DISABLE_WARNING("-Wdeprecated-declarations")
const _MyEnum_EnumMapFactory::ValuesToNamesMapType _MyEnum_VALUES_TO_NAMES = _MyEnum_EnumMapFactory::makeValuesToNamesMap();
const _MyEnum_EnumMapFactory::NamesToValuesMapType _MyEnum_NAMES_TO_VALUES = _MyEnum_EnumMapFactory::makeNamesToValuesMap();
FOLLY_POP_WARNING

} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::structured_annotation_inline>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::structured_annotation_inline>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
structured_annotation_inline::structured_annotation_inline(structured_annotation_inline&& other) noexcept  :
    count(std::move(other.count)),
    name(std::move(other.name)),
    __isset(other.__isset) {}
THRIFT_IGNORE_ISSET_USE_WARNING_END


THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
structured_annotation_inline::structured_annotation_inline(apache::thrift::FragileConstructor, ::std::int64_t count__arg, ::std::string name__arg) :
    count(std::move(count__arg)),
    name(std::move(name__arg)) {
  __isset.count = true;
  __isset.name = true;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END
void structured_annotation_inline::__clear() {
  // clear all fields
  this->count = 0;
  this->name = apache::thrift::StringTraits<std::string>::fromStringLiteral("abacaba");
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool structured_annotation_inline::operator==(const structured_annotation_inline& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.count == rhs.count)) {
    return false;
  }
  if (!(lhs.name == rhs.name)) {
    return false;
  }
  return true;
}

bool structured_annotation_inline::operator<(const structured_annotation_inline& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.count == rhs.count)) {
    return lhs.count < rhs.count;
  }
  if (!(lhs.name == rhs.name)) {
    return lhs.name < rhs.name;
  }
  return false;
}


void swap(structured_annotation_inline& a, structured_annotation_inline& b) {
  using ::std::swap;
  swap(a.count_ref().value(), b.count_ref().value());
  swap(a.name_ref().value(), b.name_ref().value());
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void structured_annotation_inline::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t structured_annotation_inline::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t structured_annotation_inline::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t structured_annotation_inline::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void structured_annotation_inline::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t structured_annotation_inline::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t structured_annotation_inline::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t structured_annotation_inline::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;



} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::structured_annotation_with_default>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::structured_annotation_with_default>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
structured_annotation_with_default::structured_annotation_with_default(structured_annotation_with_default&& other) noexcept  :
    name(std::move(other.name)),
    __isset(other.__isset) {}
THRIFT_IGNORE_ISSET_USE_WARNING_END


THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
structured_annotation_with_default::structured_annotation_with_default(apache::thrift::FragileConstructor, ::std::string name__arg) :
    name(std::move(name__arg)) {
  __isset.name = true;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END
void structured_annotation_with_default::__clear() {
  // clear all fields
  this->name = apache::thrift::StringTraits<std::string>::fromStringLiteral("abacabadabacaba");
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool structured_annotation_with_default::operator==(const structured_annotation_with_default& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.name == rhs.name)) {
    return false;
  }
  return true;
}

bool structured_annotation_with_default::operator<(const structured_annotation_with_default& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.name == rhs.name)) {
    return lhs.name < rhs.name;
  }
  return false;
}


void swap(structured_annotation_with_default& a, structured_annotation_with_default& b) {
  using ::std::swap;
  swap(a.name_ref().value(), b.name_ref().value());
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void structured_annotation_with_default::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t structured_annotation_with_default::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t structured_annotation_with_default::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t structured_annotation_with_default::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void structured_annotation_with_default::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t structured_annotation_with_default::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t structured_annotation_with_default::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t structured_annotation_with_default::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;



} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::structured_annotation_forward>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::structured_annotation_forward>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {


THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
structured_annotation_forward::structured_annotation_forward(apache::thrift::FragileConstructor, ::std::int64_t count__arg) :
    count(std::move(count__arg)) {
  __isset.count = true;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END
void structured_annotation_forward::__clear() {
  // clear all fields
  this->count = 0;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool structured_annotation_forward::operator==(const structured_annotation_forward& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.count == rhs.count)) {
    return false;
  }
  return true;
}

bool structured_annotation_forward::operator<(const structured_annotation_forward& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.count == rhs.count)) {
    return lhs.count < rhs.count;
  }
  return false;
}


void swap(structured_annotation_forward& a, structured_annotation_forward& b) {
  using ::std::swap;
  swap(a.count_ref().value(), b.count_ref().value());
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void structured_annotation_forward::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t structured_annotation_forward::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t structured_annotation_forward::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t structured_annotation_forward::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void structured_annotation_forward::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t structured_annotation_forward::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t structured_annotation_forward::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t structured_annotation_forward::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;



} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::structured_annotation_recursive>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::structured_annotation_recursive>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
structured_annotation_recursive::structured_annotation_recursive(structured_annotation_recursive&& other) noexcept  :
    name(std::move(other.name)),
    recurse(std::move(other.recurse)),
    forward(std::move(other.forward)),
    __isset(other.__isset) {}
THRIFT_IGNORE_ISSET_USE_WARNING_END


THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
structured_annotation_recursive::structured_annotation_recursive(apache::thrift::FragileConstructor, ::std::string name__arg, ::cpp2::structured_annotation_recursive recurse__arg, ::cpp2::structured_annotation_forward forward__arg) :
    name(std::move(name__arg)),
    recurse(std::move(recurse__arg)),
    forward(std::move(forward__arg)) {
  __isset.name = true;
  __isset.recurse = true;
  __isset.forward = true;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END
void structured_annotation_recursive::__clear() {
  // clear all fields
  this->name = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->recurse.__clear();
  this->forward.__clear();
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool structured_annotation_recursive::operator==(const structured_annotation_recursive& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.name == rhs.name)) {
    return false;
  }
  if (!(lhs.recurse == rhs.recurse)) {
    return false;
  }
  if (!(lhs.forward == rhs.forward)) {
    return false;
  }
  return true;
}

bool structured_annotation_recursive::operator<(const structured_annotation_recursive& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.name == rhs.name)) {
    return lhs.name < rhs.name;
  }
  if (!(lhs.recurse == rhs.recurse)) {
    return lhs.recurse < rhs.recurse;
  }
  if (!(lhs.forward == rhs.forward)) {
    return lhs.forward < rhs.forward;
  }
  return false;
}

const ::cpp2::structured_annotation_recursive& structured_annotation_recursive::get_recurse() const& {
  return recurse;
}

::cpp2::structured_annotation_recursive structured_annotation_recursive::get_recurse() && {
  return std::move(recurse);
}

const ::cpp2::structured_annotation_forward& structured_annotation_recursive::get_forward() const& {
  return forward;
}

::cpp2::structured_annotation_forward structured_annotation_recursive::get_forward() && {
  return std::move(forward);
}


void swap(structured_annotation_recursive& a, structured_annotation_recursive& b) {
  using ::std::swap;
  swap(a.name_ref().value(), b.name_ref().value());
  swap(a.recurse_ref().value(), b.recurse_ref().value());
  swap(a.forward_ref().value(), b.forward_ref().value());
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void structured_annotation_recursive::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t structured_annotation_recursive::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t structured_annotation_recursive::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t structured_annotation_recursive::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void structured_annotation_recursive::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t structured_annotation_recursive::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t structured_annotation_recursive::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t structured_annotation_recursive::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        structured_annotation_recursive,
        ::apache::thrift::type_class::structure,
        ::cpp2::structured_annotation_recursive>,
    "inconsistent use of json option");
static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        structured_annotation_recursive,
        ::apache::thrift::type_class::structure,
        ::cpp2::structured_annotation_forward>,
    "inconsistent use of json option");

static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        structured_annotation_recursive,
        ::apache::thrift::type_class::structure,
        ::cpp2::structured_annotation_recursive>,
    "inconsistent use of nimble option");
static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        structured_annotation_recursive,
        ::apache::thrift::type_class::structure,
        ::cpp2::structured_annotation_forward>,
    "inconsistent use of nimble option");

} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::structured_annotation_nested>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::structured_annotation_nested>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
structured_annotation_nested::structured_annotation_nested(structured_annotation_nested&& other) noexcept  :
    name(std::move(other.name)),
    nest(std::move(other.nest)),
    __isset(other.__isset) {}
THRIFT_IGNORE_ISSET_USE_WARNING_END


THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
structured_annotation_nested::structured_annotation_nested(apache::thrift::FragileConstructor, ::std::string name__arg, ::cpp2::structured_annotation_with_default nest__arg) :
    name(std::move(name__arg)),
    nest(std::move(nest__arg)) {
  __isset.name = true;
  __isset.nest = true;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END
void structured_annotation_nested::__clear() {
  // clear all fields
  this->name = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->nest.__clear();
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool structured_annotation_nested::operator==(const structured_annotation_nested& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.name == rhs.name)) {
    return false;
  }
  if (!(lhs.nest == rhs.nest)) {
    return false;
  }
  return true;
}

bool structured_annotation_nested::operator<(const structured_annotation_nested& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.name == rhs.name)) {
    return lhs.name < rhs.name;
  }
  if (!(lhs.nest == rhs.nest)) {
    return lhs.nest < rhs.nest;
  }
  return false;
}

const ::cpp2::structured_annotation_with_default& structured_annotation_nested::get_nest() const& {
  return nest;
}

::cpp2::structured_annotation_with_default structured_annotation_nested::get_nest() && {
  return std::move(nest);
}


void swap(structured_annotation_nested& a, structured_annotation_nested& b) {
  using ::std::swap;
  swap(a.name_ref().value(), b.name_ref().value());
  swap(a.nest_ref().value(), b.nest_ref().value());
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void structured_annotation_nested::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t structured_annotation_nested::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t structured_annotation_nested::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t structured_annotation_nested::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void structured_annotation_nested::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t structured_annotation_nested::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t structured_annotation_nested::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t structured_annotation_nested::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        structured_annotation_nested,
        ::apache::thrift::type_class::structure,
        ::cpp2::structured_annotation_with_default>,
    "inconsistent use of json option");

static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        structured_annotation_nested,
        ::apache::thrift::type_class::structure,
        ::cpp2::structured_annotation_with_default>,
    "inconsistent use of nimble option");

} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::MyStruct>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::MyStruct>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
MyStruct::MyStruct(MyStruct&& other) noexcept  :
    annotated_field(std::move(other.annotated_field)),
    annotated_type(std::move(other.annotated_type)),
    annotated_recursive(std::move(other.annotated_recursive)),
    annotated_nested(std::move(other.annotated_nested)),
    __isset(other.__isset) {}
THRIFT_IGNORE_ISSET_USE_WARNING_END


THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
MyStruct::MyStruct(apache::thrift::FragileConstructor, ::std::int64_t annotated_field__arg, ::cpp2::annotated_inline_string annotated_type__arg, ::std::string annotated_recursive__arg, ::std::int64_t annotated_nested__arg) :
    annotated_field(std::move(annotated_field__arg)),
    annotated_type(std::move(annotated_type__arg)),
    annotated_recursive(std::move(annotated_recursive__arg)),
    annotated_nested(std::move(annotated_nested__arg)) {
  __isset.annotated_field = true;
  __isset.annotated_type = true;
  __isset.annotated_recursive = true;
  __isset.annotated_nested = true;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END
void MyStruct::__clear() {
  // clear all fields
  this->annotated_field = 0;
  this->annotated_type = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->annotated_recursive = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->annotated_nested = 0;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool MyStruct::operator==(const MyStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.annotated_field == rhs.annotated_field)) {
    return false;
  }
  if (!(lhs.annotated_type == rhs.annotated_type)) {
    return false;
  }
  if (!(lhs.annotated_recursive == rhs.annotated_recursive)) {
    return false;
  }
  if (!(lhs.annotated_nested == rhs.annotated_nested)) {
    return false;
  }
  return true;
}

bool MyStruct::operator<(const MyStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.annotated_field == rhs.annotated_field)) {
    return lhs.annotated_field < rhs.annotated_field;
  }
  if (!(lhs.annotated_type == rhs.annotated_type)) {
    return lhs.annotated_type < rhs.annotated_type;
  }
  if (!(lhs.annotated_recursive == rhs.annotated_recursive)) {
    return lhs.annotated_recursive < rhs.annotated_recursive;
  }
  if (!(lhs.annotated_nested == rhs.annotated_nested)) {
    return lhs.annotated_nested < rhs.annotated_nested;
  }
  return false;
}


void swap(MyStruct& a, MyStruct& b) {
  using ::std::swap;
  swap(a.annotated_field_ref().value(), b.annotated_field_ref().value());
  swap(a.annotated_type_ref().value(), b.annotated_type_ref().value());
  swap(a.annotated_recursive_ref().value(), b.annotated_recursive_ref().value());
  swap(a.annotated_nested_ref().value(), b.annotated_nested_ref().value());
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void MyStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t MyStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t MyStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void MyStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t MyStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t MyStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;



} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::MyException>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::MyException>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
MyException::MyException(MyException&& other) noexcept  :
    context(std::move(other.context)),
    __isset(other.__isset) {}
THRIFT_IGNORE_ISSET_USE_WARNING_END


THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
MyException::MyException(apache::thrift::FragileConstructor, ::std::string context__arg) :
    context(std::move(context__arg)) {
  __isset.context = true;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END
void MyException::__clear() {
  // clear all fields
  this->context = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool MyException::operator==(const MyException& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.context == rhs.context)) {
    return false;
  }
  return true;
}

bool MyException::operator<(const MyException& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.context == rhs.context)) {
    return lhs.context < rhs.context;
  }
  return false;
}


void swap(MyException& a, MyException& b) {
  using ::std::swap;
  swap(a.context_ref().value(), b.context_ref().value());
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void MyException::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t MyException::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t MyException::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t MyException::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void MyException::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t MyException::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t MyException::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t MyException::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;



} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::MyUnion>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::MyUnion>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace apache { namespace thrift {

constexpr std::size_t const TEnumTraits<::cpp2::MyUnion::Type>::size;
folly::Range<::cpp2::MyUnion::Type const*> const TEnumTraits<::cpp2::MyUnion::Type>::values = folly::range(TEnumDataStorage<::cpp2::MyUnion::Type>::values);
folly::Range<folly::StringPiece const*> const TEnumTraits<::cpp2::MyUnion::Type>::names = folly::range(TEnumDataStorage<::cpp2::MyUnion::Type>::names);

char const* TEnumTraits<::cpp2::MyUnion::Type>::findName(type value) {
  using factory = detail::TEnumMapFactory<::cpp2::MyUnion::Type>;
  static folly::Indestructible<factory::ValuesToNamesMapType> const map{
      factory::makeValuesToNamesMap()};
  auto found = map->find(value);
  return found == map->end() ? nullptr : found->second;
}

bool TEnumTraits<::cpp2::MyUnion::Type>::findValue(char const* name, type* out) {
  using factory = detail::TEnumMapFactory<::cpp2::MyUnion::Type>;
  static folly::Indestructible<factory::NamesToValuesMapType> const map{
      factory::makeNamesToValuesMap()};
  auto found = map->find(name);
  return found == map->end() ? false : (*out = found->second, true);
}
}} // apache::thrift
namespace cpp2 {

void MyUnion::__clear() {
  // clear all fields
  if (type_ == Type::__EMPTY__) { return; }
  switch(type_) {
    case Type::first:
      destruct(value_.first);
      break;
    case Type::second:
      destruct(value_.second);
      break;
    default:
      assert(false);
      break;
  }
  type_ = Type::__EMPTY__;
}

bool MyUnion::operator==(const MyUnion& rhs) const {
  if (type_ != rhs.type_) { return false; }
  switch(type_) {
    case Type::first:
      return value_.first == rhs.value_.first;
    case Type::second:
      return value_.second == rhs.value_.second;
    default:
      return true;
  }
}

bool MyUnion::operator<(const MyUnion& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (lhs.type_ != rhs.type_) {
    return lhs.type_ < rhs.type_;
  }
  switch (lhs.type_) {
    case Type::first:
      return lhs.value_.first < rhs.value_.first;
    case Type::second:
      return lhs.value_.second < rhs.value_.second;
    default:
      return false;
  }
}

void swap(MyUnion& a, MyUnion& b) {
  MyUnion temp(std::move(a));
  a = std::move(b);
  b = std::move(temp);
}

template void MyUnion::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t MyUnion::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t MyUnion::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t MyUnion::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void MyUnion::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t MyUnion::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t MyUnion::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t MyUnion::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;



} // cpp2
