#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/templated-deserialize/src/module.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from libc.stdint cimport (
    int8_t as cint8_t,
    int16_t as cint16_t,
    int32_t as cint32_t,
    int64_t as cint64_t,
    uint16_t as cuint16_t,
    uint32_t as cuint32_t,
)
from libcpp.string cimport string
from libcpp cimport bool as cbool, nullptr, nullptr_t
from cpython cimport bool as pbool
from libcpp.memory cimport shared_ptr, unique_ptr
from libcpp.vector cimport vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap, pair as cpair
from libcpp.unordered_map cimport unordered_map as cumap
cimport folly.iobuf as _fbthrift_iobuf
from thrift.python.exceptions cimport cTException
from thrift.py3.types cimport (
    bstring,
    field_ref as __field_ref,
    optional_field_ref as __optional_field_ref,
    required_field_ref as __required_field_ref,
    terse_field_ref as __terse_field_ref,
    union_field_ref as __union_field_ref,
    get_union_field_value as __get_union_field_value,
)
from thrift.python.common cimport cThriftMetadata as __fbthrift_cThriftMetadata
cimport thrift.py3.exceptions
cimport thrift.py3.types
from thrift.python.common cimport (
    RpcOptions as __RpcOptions,
    MetadataBox as __MetadataBox,
)
from folly.optional cimport cOptional as __cOptional


cimport module.types as _fbthrift_types
cimport module.types_fields as _fbthrift_types_fields
cimport module.cbindings as _module_cbindings

cdef extern from "thrift/compiler/test/fixtures/templated-deserialize/gen-py3/module/types.h":
  pass



cdef class SmallStruct(thrift.py3.types.Struct):
    cdef shared_ptr[_module_cbindings.cSmallStruct] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__SmallStruct_FieldsSetter _fields_setter
    cdef inline object small_A_impl(self)
    cdef inline object small_B_impl(self)

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_module_cbindings.cSmallStruct])



cdef class containerStruct(thrift.py3.types.Struct):
    cdef shared_ptr[_module_cbindings.ccontainerStruct] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__containerStruct_FieldsSetter _fields_setter
    cdef inline object fieldA_impl(self)
    cdef inline object fieldB_impl(self)
    cdef inline object fieldC_impl(self)
    cdef inline object fieldD_impl(self)
    cdef inline object fieldE_impl(self)
    cdef inline object fieldF_impl(self)
    cdef inline object fieldG_impl(self)
    cdef inline object fieldH_impl(self)
    cdef inline object fieldI_impl(self)
    cdef inline object fieldJ_impl(self)
    cdef inline object fieldK_impl(self)
    cdef inline object fieldL_impl(self)
    cdef inline object fieldM_impl(self)
    cdef inline object fieldN_impl(self)
    cdef inline object fieldO_impl(self)
    cdef inline object fieldP_impl(self)
    cdef inline object fieldQ_impl(self)
    cdef inline object fieldR_impl(self)
    cdef inline object fieldS_impl(self)
    cdef inline object fieldT_impl(self)
    cdef inline object fieldU_impl(self)
    cdef inline object fieldX_impl(self)
    cdef Map__string_bool __fbthrift_cached_fieldB
    cdef object __fbthrift_cached_fieldC
    cdef object __fbthrift_cached_fieldF
    cdef Map__string_Map__string_Map__string_i32 __fbthrift_cached_fieldG
    cdef object __fbthrift_cached_fieldH
    cdef Map__string_List__i32 __fbthrift_cached_fieldJ
    cdef object __fbthrift_cached_fieldK
    cdef object __fbthrift_cached_fieldL
    cdef Map__Set__List__i32_Map__List__Set__string_string __fbthrift_cached_fieldM
    cdef object __fbthrift_cached_fieldN
    cdef object __fbthrift_cached_fieldO
    cdef object __fbthrift_cached_fieldP
    cdef object __fbthrift_cached_fieldQ
    cdef Map__string_bool __fbthrift_cached_fieldR
    cdef SmallStruct __fbthrift_cached_fieldS
    cdef SmallStruct __fbthrift_cached_fieldT
    cdef SmallStruct __fbthrift_cached_fieldU
    cdef SmallStruct __fbthrift_cached_fieldX

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_module_cbindings.ccontainerStruct])


cdef class Map__string_bool(thrift.py3.types.Map):
    cdef shared_ptr[cmap[string,cbool]] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[cmap[string,cbool]])
    cdef _check_key_type(self, key)

cdef shared_ptr[cmap[string,cbool]] Map__string_bool__make_instance(object items) except *

cdef cset[cint32_t] Set__i32__make_instance(object items) except *
cdef object Set__i32__from_cpp(const cset[cint32_t]&) except *

cdef vector[cint32_t] List__i32__make_instance(object items) except *
cdef object List__i32__from_cpp(const vector[cint32_t]&) except *

cdef vector[vector[cint32_t]] List__List__i32__make_instance(object items) except *
cdef object List__List__i32__from_cpp(const vector[vector[cint32_t]]&) except *

cdef vector[vector[vector[cint32_t]]] List__List__List__i32__make_instance(object items) except *
cdef object List__List__List__i32__from_cpp(const vector[vector[vector[cint32_t]]]&) except *

cdef class Map__string_i32(thrift.py3.types.Map):
    cdef shared_ptr[cmap[string,cint32_t]] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[cmap[string,cint32_t]])
    cdef _check_key_type(self, key)

cdef shared_ptr[cmap[string,cint32_t]] Map__string_i32__make_instance(object items) except *

cdef class Map__string_Map__string_i32(thrift.py3.types.Map):
    cdef shared_ptr[cmap[string,cmap[string,cint32_t]]] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[cmap[string,cmap[string,cint32_t]]])
    cdef _check_key_type(self, key)

cdef shared_ptr[cmap[string,cmap[string,cint32_t]]] Map__string_Map__string_i32__make_instance(object items) except *

cdef class Map__string_Map__string_Map__string_i32(thrift.py3.types.Map):
    cdef shared_ptr[cmap[string,cmap[string,cmap[string,cint32_t]]]] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[cmap[string,cmap[string,cmap[string,cint32_t]]]])
    cdef _check_key_type(self, key)

cdef shared_ptr[cmap[string,cmap[string,cmap[string,cint32_t]]]] Map__string_Map__string_Map__string_i32__make_instance(object items) except *

cdef vector[cset[cint32_t]] List__Set__i32__make_instance(object items) except *
cdef object List__Set__i32__from_cpp(const vector[cset[cint32_t]]&) except *

cdef class Map__string_List__i32(thrift.py3.types.Map):
    cdef shared_ptr[cmap[string,vector[cint32_t]]] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[cmap[string,vector[cint32_t]]])
    cdef _check_key_type(self, key)

cdef shared_ptr[cmap[string,vector[cint32_t]]] Map__string_List__i32__make_instance(object items) except *

cdef vector[vector[vector[vector[cint32_t]]]] List__List__List__List__i32__make_instance(object items) except *
cdef object List__List__List__List__i32__from_cpp(const vector[vector[vector[vector[cint32_t]]]]&) except *

cdef cset[cbool] Set__bool__make_instance(object items) except *
cdef object Set__bool__from_cpp(const cset[cbool]&) except *

cdef cset[cset[cbool]] Set__Set__bool__make_instance(object items) except *
cdef object Set__Set__bool__from_cpp(const cset[cset[cbool]]&) except *

cdef cset[cset[cset[cbool]]] Set__Set__Set__bool__make_instance(object items) except *
cdef object Set__Set__Set__bool__from_cpp(const cset[cset[cset[cbool]]]&) except *

cdef cset[vector[cint32_t]] Set__List__i32__make_instance(object items) except *
cdef object Set__List__i32__from_cpp(const cset[vector[cint32_t]]&) except *

cdef cset[string] Set__string__make_instance(object items) except *
cdef object Set__string__from_cpp(const cset[string]&) except *

cdef vector[cset[string]] List__Set__string__make_instance(object items) except *
cdef object List__Set__string__from_cpp(const vector[cset[string]]&) except *

cdef class Map__List__Set__string_string(thrift.py3.types.Map):
    cdef shared_ptr[cmap[vector[cset[string]],string]] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[cmap[vector[cset[string]],string]])
    cdef _check_key_type(self, key)

cdef shared_ptr[cmap[vector[cset[string]],string]] Map__List__Set__string_string__make_instance(object items) except *

cdef class Map__Set__List__i32_Map__List__Set__string_string(thrift.py3.types.Map):
    cdef shared_ptr[cmap[cset[vector[cint32_t]],cmap[vector[cset[string]],string]]] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[cmap[cset[vector[cint32_t]],cmap[vector[cset[string]],string]]])
    cdef _check_key_type(self, key)

cdef shared_ptr[cmap[cset[vector[cint32_t]],cmap[vector[cset[string]],string]]] Map__Set__List__i32_Map__List__Set__string_string__make_instance(object items) except *

cdef vector[_module_cbindings.Foo] List__Foo__i64__make_instance(object items) except *
cdef object List__Foo__i64__from_cpp(const vector[_module_cbindings.Foo]&) except *

cdef vector[_module_cbindings.Bar] List__Bar__double__make_instance(object items) except *
cdef object List__Bar__double__from_cpp(const vector[_module_cbindings.Bar]&) except *

cdef vector[_module_cbindings.Baz] List__Baz__i32__make_instance(object items) except *
cdef object List__Baz__i32__from_cpp(const vector[_module_cbindings.Baz]&) except *


