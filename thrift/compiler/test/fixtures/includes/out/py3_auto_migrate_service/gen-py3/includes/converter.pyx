
#
# Autogenerated by Thrift for includes.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from libcpp.memory cimport make_shared
from thrift.python.capi.cpp_converter cimport cpp_to_python, python_to_cpp
from cython.operator cimport dereference as deref

cdef extern from "thrift/compiler/test/fixtures/includes/gen-python-capi/includes/thrift_types_capi.h":
    pass

cdef shared_ptr[_fbthrift_cbindings.cIncluded] Included_convert_to_cpp(object inst) except*:
    return make_shared[_fbthrift_cbindings.cIncluded](python_to_cpp[_fbthrift_cbindings.cIncluded](inst))
cdef object Included_from_cpp(const shared_ptr[_fbthrift_cbindings.cIncluded]& c_struct):
    return cpp_to_python[_fbthrift_cbindings.cIncluded](deref(c_struct))


