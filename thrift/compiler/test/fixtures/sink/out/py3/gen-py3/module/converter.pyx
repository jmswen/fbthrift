
#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/sink/src/module.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

cimport module.types as _fbthrift_ctypes


cdef shared_ptr[_fbthrift_cbindings.cInitialResponse] InitialResponse_convert_to_cpp(object inst) except*:
    return (<_fbthrift_ctypes.InitialResponse?>inst)._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE

cdef object InitialResponse_from_cpp(const shared_ptr[_fbthrift_cbindings.cInitialResponse]& c_struct):
    return _fbthrift_ctypes.InitialResponse._create_FBTHRIFT_ONLY_DO_NOT_USE(c_struct)

cdef shared_ptr[_fbthrift_cbindings.cFinalResponse] FinalResponse_convert_to_cpp(object inst) except*:
    return (<_fbthrift_ctypes.FinalResponse?>inst)._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE

cdef object FinalResponse_from_cpp(const shared_ptr[_fbthrift_cbindings.cFinalResponse]& c_struct):
    return _fbthrift_ctypes.FinalResponse._create_FBTHRIFT_ONLY_DO_NOT_USE(c_struct)

cdef shared_ptr[_fbthrift_cbindings.cSinkPayload] SinkPayload_convert_to_cpp(object inst) except*:
    return (<_fbthrift_ctypes.SinkPayload?>inst)._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE

cdef object SinkPayload_from_cpp(const shared_ptr[_fbthrift_cbindings.cSinkPayload]& c_struct):
    return _fbthrift_ctypes.SinkPayload._create_FBTHRIFT_ONLY_DO_NOT_USE(c_struct)

cdef shared_ptr[_fbthrift_cbindings.cCompatibleWithKeywordSink] CompatibleWithKeywordSink_convert_to_cpp(object inst) except*:
    return (<_fbthrift_ctypes.CompatibleWithKeywordSink?>inst)._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE

cdef object CompatibleWithKeywordSink_from_cpp(const shared_ptr[_fbthrift_cbindings.cCompatibleWithKeywordSink]& c_struct):
    return _fbthrift_ctypes.CompatibleWithKeywordSink._create_FBTHRIFT_ONLY_DO_NOT_USE(c_struct)

cdef shared_ptr[_fbthrift_cbindings.cInitialException] InitialException_convert_to_cpp(object inst) except*:
    return (<_fbthrift_ctypes.InitialException?>inst)._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE

cdef object InitialException_from_cpp(const shared_ptr[_fbthrift_cbindings.cInitialException]& c_struct):
    return _fbthrift_ctypes.InitialException._create_FBTHRIFT_ONLY_DO_NOT_USE(c_struct)

cdef shared_ptr[_fbthrift_cbindings.cSinkException1] SinkException1_convert_to_cpp(object inst) except*:
    return (<_fbthrift_ctypes.SinkException1?>inst)._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE

cdef object SinkException1_from_cpp(const shared_ptr[_fbthrift_cbindings.cSinkException1]& c_struct):
    return _fbthrift_ctypes.SinkException1._create_FBTHRIFT_ONLY_DO_NOT_USE(c_struct)

cdef shared_ptr[_fbthrift_cbindings.cSinkException2] SinkException2_convert_to_cpp(object inst) except*:
    return (<_fbthrift_ctypes.SinkException2?>inst)._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE

cdef object SinkException2_from_cpp(const shared_ptr[_fbthrift_cbindings.cSinkException2]& c_struct):
    return _fbthrift_ctypes.SinkException2._create_FBTHRIFT_ONLY_DO_NOT_USE(c_struct)


