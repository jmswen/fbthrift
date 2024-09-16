#
# Autogenerated by Thrift for foo.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
cimport cython as __cython
from cython.operator cimport dereference as deref
from libcpp.utility cimport move as cmove
from thrift.py3.types cimport (
    assign_unique_ptr,
    assign_shared_ptr,
    assign_shared_const_ptr,
    bytes_to_string,
    make_unique,
    make_shared,
    make_const_shared,
)
cimport thrift.py3.types
from thrift.py3.types cimport (
    reset_field as __reset_field,
    StructFieldsSetter as __StructFieldsSetter
)

from thrift.py3.types cimport const_pointer_cast
from thrift.python.types cimport BadEnum as _fbthrift_BadEnum


import foo.types as _foo_types


@__cython.auto_pickle(False)
cdef class __Fields_FieldsSetter(__StructFieldsSetter):

    @staticmethod
    cdef __Fields_FieldsSetter _fbthrift_create(_foo_types.cFields* struct_cpp_obj):
        cdef __Fields_FieldsSetter __fbthrift_inst = __Fields_FieldsSetter.__new__(__Fields_FieldsSetter)
        __fbthrift_inst._struct_cpp_obj = struct_cpp_obj
        __fbthrift_inst._setters[__cstring_view(<const char*>"injected_field")] = __Fields_FieldsSetter._set_field_0
        __fbthrift_inst._setters[__cstring_view(<const char*>"injected_structured_annotation_field")] = __Fields_FieldsSetter._set_field_1
        __fbthrift_inst._setters[__cstring_view(<const char*>"injected_unstructured_annotation_field")] = __Fields_FieldsSetter._set_field_2
        return __fbthrift_inst

    cdef void set_field(__Fields_FieldsSetter self, const char* name, object value) except *:
        cdef __cstring_view cname = __cstring_view(name)
        cdef cumap[__cstring_view, __Fields_FieldsSetterFunc].iterator found = self._setters.find(cname)
        if found == self._setters.end():
            raise TypeError(f"invalid field name {name.decode('utf-8')}")
        deref(found).second(self, value)

    cdef void _set_field_0(self, _fbthrift_value) except *:
        # for field injected_field
        if _fbthrift_value is None:
            __reset_field[_foo_types.cFields](deref(self._struct_cpp_obj), 0)
            return
        if not isinstance(_fbthrift_value, str):
            raise TypeError(f'injected_field is not a { str !r}.')
        deref(self._struct_cpp_obj).injected_field_ref().assign(cmove(bytes_to_string(_fbthrift_value.encode('utf-8'))))

    cdef void _set_field_1(self, _fbthrift_value) except *:
        # for field injected_structured_annotation_field
        if _fbthrift_value is None:
            __reset_field[_foo_types.cFields](deref(self._struct_cpp_obj), 1)
            return
        if not isinstance(_fbthrift_value, str):
            raise TypeError(f'injected_structured_annotation_field is not a { str !r}.')
        deref(self._struct_cpp_obj).injected_structured_annotation_field_ref().assign(cmove(bytes_to_string(_fbthrift_value.encode('utf-8'))))

    cdef void _set_field_2(self, _fbthrift_value) except *:
        # for field injected_unstructured_annotation_field
        if _fbthrift_value is None:
            __reset_field[_foo_types.cFields](deref(self._struct_cpp_obj), 2)
            return
        if not isinstance(_fbthrift_value, str):
            raise TypeError(f'injected_unstructured_annotation_field is not a { str !r}.')
        deref(self._struct_cpp_obj).injected_unstructured_annotation_field_ref().assign(cmove(bytes_to_string(_fbthrift_value.encode('utf-8'))))

