
#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/basic-annotations/src/module.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

cimport module.types as _fbthrift_ctypes


cdef shared_ptr[_fbthrift_cbindings.cMyStructNestedAnnotation] MyStructNestedAnnotation_convert_to_cpp(object inst) except*:
    return (<_fbthrift_ctypes.MyStructNestedAnnotation?>inst)._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE

cdef object MyStructNestedAnnotation_from_cpp(const shared_ptr[_fbthrift_cbindings.cMyStructNestedAnnotation]& c_struct):
    return _fbthrift_ctypes.MyStructNestedAnnotation._create_FBTHRIFT_ONLY_DO_NOT_USE(c_struct)

cdef shared_ptr[_fbthrift_cbindings.cSecretStruct] SecretStruct_convert_to_cpp(object inst) except*:
    return (<_fbthrift_ctypes.SecretStruct?>inst)._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE

cdef object SecretStruct_from_cpp(const shared_ptr[_fbthrift_cbindings.cSecretStruct]& c_struct):
    return _fbthrift_ctypes.SecretStruct._create_FBTHRIFT_ONLY_DO_NOT_USE(c_struct)


