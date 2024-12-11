#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/req-opt/src/module.thrift
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
from libc.stdint cimport int64_t
from thrift.python.common cimport (
    RpcOptions as __RpcOptions,
    MetadataBox as __MetadataBox,
)
from folly.optional cimport cOptional as __cOptional


cimport module.types as _fbthrift_types
cimport module.types_fields as _fbthrift_types_fields
cimport module.cbindings as _module_cbindings

cdef extern from "thrift/compiler/test/fixtures/req-opt/gen-py3/module/types.h":
  pass



cdef class Foo(thrift.py3.types.Struct):
    cdef shared_ptr[_module_cbindings.cFoo] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__Foo_FieldsSetter _fields_setter
    cdef inline object myInteger_impl(self)
    cdef inline object myString_impl(self)
    cdef inline object myBools_impl(self)
    cdef inline object myNumbers_impl(self)
    cdef object __fbthrift_cached_myBools
    cdef object __fbthrift_cached_myNumbers

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_module_cbindings.cFoo])


cdef vector[cbool] List__bool__make_instance(object items) except *
cdef object List__bool__from_cpp(const vector[cbool]&) except *

cdef vector[cint32_t] List__i32__make_instance(object items) except *
cdef object List__i32__from_cpp(const vector[cint32_t]&) except *


