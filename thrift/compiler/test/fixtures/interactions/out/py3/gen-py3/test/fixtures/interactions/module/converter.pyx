
#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/interactions/src/module.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

cimport test.fixtures.interactions.module.types as _fbthrift_ctypes


cdef shared_ptr[_fbthrift_cbindings.cCustomException] CustomException_convert_to_cpp(object inst) except*:
    return (<_fbthrift_ctypes.CustomException?>inst)._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE

cdef object CustomException_from_cpp(const shared_ptr[_fbthrift_cbindings.cCustomException]& c_struct):
    return _fbthrift_ctypes.CustomException._create_FBTHRIFT_ONLY_DO_NOT_USE(c_struct)

cdef shared_ptr[_fbthrift_cbindings.cShouldBeBoxed] ShouldBeBoxed_convert_to_cpp(object inst) except*:
    return (<_fbthrift_ctypes.ShouldBeBoxed?>inst)._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE

cdef object ShouldBeBoxed_from_cpp(const shared_ptr[_fbthrift_cbindings.cShouldBeBoxed]& c_struct):
    return _fbthrift_ctypes.ShouldBeBoxed._create_FBTHRIFT_ONLY_DO_NOT_USE(c_struct)


