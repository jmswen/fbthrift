
#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/transitive-deps/src/a.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

cimport a.types as _fbthrift_ctypes


cdef shared_ptr[_fbthrift_cbindings.cA] A_convert_to_cpp(object inst) except*:
    return (<_fbthrift_ctypes.A?>inst)._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE

cdef object A_from_cpp(const shared_ptr[_fbthrift_cbindings.cA]& c_struct):
    return _fbthrift_ctypes.A._create_FBTHRIFT_ONLY_DO_NOT_USE(c_struct)


