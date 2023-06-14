/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/basic-python-capi/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include "thrift/compiler/test/fixtures/basic-python-capi/gen-cpp2/module_metadata.h"
#include <thrift/lib/cpp2/visitation/for_each.h>

namespace apache {
namespace thrift {
namespace detail {

template <>
struct ForEachField<::test::fixtures::basic-python-capi::MyStruct> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).MyIntField_ref()...);
    f(1, static_cast<T&&>(t).MyStringField_ref()...);
    f(2, static_cast<T&&>(t).MyDataField_ref()...);
    f(3, static_cast<T&&>(t).myEnum_ref()...);
    f(4, static_cast<T&&>(t).oneway_ref()...);
    f(5, static_cast<T&&>(t).floatList_ref()...);
    f(6, static_cast<T&&>(t).strMap_ref()...);
    f(7, static_cast<T&&>(t).floatSet_ref()...);
  }
};

template <>
struct ForEachField<::test::fixtures::basic-python-capi::MyDataItem> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
  }
};

template <>
struct ForEachField<::test::fixtures::basic-python-capi::MyUnion> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).myEnum_ref()...);
    f(1, static_cast<T&&>(t).myStruct_ref()...);
    f(2, static_cast<T&&>(t).myDataItem_ref()...);
    f(3, static_cast<T&&>(t).doubleSet_ref()...);
    f(4, static_cast<T&&>(t).doubleList_ref()...);
    f(5, static_cast<T&&>(t).strMap_ref()...);
  }
};
} // namespace detail
} // namespace thrift
} // namespace apache