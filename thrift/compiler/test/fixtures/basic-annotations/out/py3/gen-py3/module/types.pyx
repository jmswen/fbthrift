#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/basic-annotations/src/module.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
cimport cython as __cython
from cpython.object cimport PyTypeObject
from libcpp.memory cimport shared_ptr, make_shared, unique_ptr
from libcpp.optional cimport optional as __optional
from libcpp.string cimport string
from libcpp cimport bool as cbool
from libcpp.iterator cimport inserter as cinserter
from libcpp.utility cimport move as cmove
from cpython cimport bool as pbool
from cython.operator cimport dereference as deref, preincrement as inc, address as ptr_address
import thrift.py3.types
from thrift.py3.types import _IsSet as _fbthrift_IsSet
from thrift.py3.types cimport make_unique
cimport thrift.py3.types
cimport thrift.py3.exceptions
cimport thrift.python.exceptions
from thrift.python.types import EnumMeta as __EnumMeta
from thrift.python.std_libcpp cimport sv_to_str as __sv_to_str, string_view as __cstring_view
from thrift.python.types cimport(
    BadEnum as __BadEnum,
)
from thrift.py3.types cimport (
    richcmp as __richcmp,
    init_unicode_from_cpp as __init_unicode_from_cpp,
    set_iter as __set_iter,
    map_iter as __map_iter,
    map_contains as __map_contains,
    map_getitem as __map_getitem,
    reference_shared_ptr as __reference_shared_ptr,
    get_field_name_by_index as __get_field_name_by_index,
    reset_field as __reset_field,
    translate_cpp_enum_to_python,
    const_pointer_cast,
    make_const_shared,
    constant_shared_ptr,
)
cimport thrift.py3.serializer as serializer
from thrift.python.protocol cimport Protocol as __Protocol
import folly.iobuf as _fbthrift_iobuf
from folly.optional cimport cOptional
from folly.memory cimport to_shared_ptr as __to_shared_ptr
from folly.range cimport Range as __cRange

import sys
from collections.abc import Sequence, Set, Mapping, Iterable
import weakref as __weakref
import builtins as _builtins
import importlib

from module.types_impl_FBTHRIFT_ONLY_DO_NOT_USE import (
    MyEnum,
)

from module.containers_FBTHRIFT_ONLY_DO_NOT_USE import (
    std_deque_std_string__List__string,
)


cdef object get_types_reflection():
    import importlib
    return importlib.import_module(
        "module.types_reflection"
    )

@__cython.auto_pickle(False)
cdef class MyStructNestedAnnotation(thrift.py3.types.Struct):
    def __init__(MyStructNestedAnnotation self, **kwargs):
        self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE = make_shared[_module_cbindings.cMyStructNestedAnnotation]()
        self._fields_setter = _fbthrift_types_fields.__MyStructNestedAnnotation_FieldsSetter._fbthrift_create(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE.get())
        super().__init__(**kwargs)

    def __call__(MyStructNestedAnnotation self, **kwargs):
        if not kwargs:
            return self
        cdef MyStructNestedAnnotation __fbthrift_inst = MyStructNestedAnnotation.__new__(MyStructNestedAnnotation)
        __fbthrift_inst._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE = make_shared[_module_cbindings.cMyStructNestedAnnotation](deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE))
        __fbthrift_inst._fields_setter = _fbthrift_types_fields.__MyStructNestedAnnotation_FieldsSetter._fbthrift_create(__fbthrift_inst._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE.get())
        for __fbthrift_name, _fbthrift_value in kwargs.items():
            __fbthrift_inst._fbthrift_set_field(__fbthrift_name, _fbthrift_value)
        return __fbthrift_inst

    cdef void _fbthrift_set_field(self, str name, object value) except *:
        self._fields_setter.set_field(name.encode("utf-8"), value)

    cdef object _fbthrift_isset(self):
        return _fbthrift_IsSet("MyStructNestedAnnotation", {
          "name": deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE).name_ref().has_value(),
        })

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_module_cbindings.cMyStructNestedAnnotation] cpp_obj):
        __fbthrift_inst = <MyStructNestedAnnotation>MyStructNestedAnnotation.__new__(MyStructNestedAnnotation)
        __fbthrift_inst._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE = cmove(cpp_obj)
        return __fbthrift_inst

    cdef inline name_impl(self):
        return (<bytes>deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE).name_ref().value()).decode('UTF-8')

    @property
    def name(self):
        return self.name_impl()


    def __hash__(MyStructNestedAnnotation self):
        return super().__hash__()

    def __repr__(MyStructNestedAnnotation self):
        return super().__repr__()

    def __str__(MyStructNestedAnnotation self):
        return super().__str__()


    def __copy__(MyStructNestedAnnotation self):
        cdef shared_ptr[_module_cbindings.cMyStructNestedAnnotation] cpp_obj = make_shared[_module_cbindings.cMyStructNestedAnnotation](
            deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE)
        )
        return MyStructNestedAnnotation._create_FBTHRIFT_ONLY_DO_NOT_USE(cmove(cpp_obj))

    def __richcmp__(self, other, int op):
        r = self._fbthrift_cmp_sametype(other, op)
        return __richcmp[_module_cbindings.cMyStructNestedAnnotation](
            self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE,
            (<MyStructNestedAnnotation>other)._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE,
            op,
        ) if r is None else r

    @staticmethod
    def __get_reflection__():
        return get_types_reflection().get_reflection__MyStructNestedAnnotation()

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftMetadata meta
        _module_cbindings.StructMetadata[_module_cbindings.cMyStructNestedAnnotation].gen(meta)
        return __MetadataBox.box(cmove(meta))

    @staticmethod
    def __get_thrift_name__():
        return "module.MyStructNestedAnnotation"

    @classmethod
    def _fbthrift_get_field_name_by_index(cls, idx):
        return __sv_to_str(__get_field_name_by_index[_module_cbindings.cMyStructNestedAnnotation](idx))

    @classmethod
    def _fbthrift_get_struct_size(cls):
        return 1

    cdef _fbthrift_iobuf.IOBuf _fbthrift_serialize(MyStructNestedAnnotation self, __Protocol proto):
        cdef unique_ptr[_fbthrift_iobuf.cIOBuf] data
        with nogil:
            data = cmove(serializer.cserialize[_module_cbindings.cMyStructNestedAnnotation](self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE.get(), proto))
        return _fbthrift_iobuf.from_unique_ptr(cmove(data))

    cdef cuint32_t _fbthrift_deserialize(MyStructNestedAnnotation self, const _fbthrift_iobuf.cIOBuf* buf, __Protocol proto) except? 0:
        cdef cuint32_t needed
        self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE = make_shared[_module_cbindings.cMyStructNestedAnnotation]()
        with nogil:
            needed = serializer.cdeserialize[_module_cbindings.cMyStructNestedAnnotation](buf, self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE.get(), proto)
        return needed


    def _to_python(self):
        import importlib
        import thrift.python.converter
        python_types = importlib.import_module(
            "module.thrift_types"
        )
        return thrift.python.converter.to_python_struct(python_types.MyStructNestedAnnotation, self)

    def _to_py3(self):
        return self

    def _to_py_deprecated(self):
        import importlib
        import thrift.util.converter
        py_deprecated_types = importlib.import_module("module.ttypes")
        return thrift.util.converter.to_py_struct(py_deprecated_types.MyStructNestedAnnotation, self)

@__cython.auto_pickle(False)
cdef class SecretStruct(thrift.py3.types.Struct):
    def __init__(SecretStruct self, **kwargs):
        self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE = make_shared[_module_cbindings.cSecretStruct]()
        self._fields_setter = _fbthrift_types_fields.__SecretStruct_FieldsSetter._fbthrift_create(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE.get())
        super().__init__(**kwargs)

    def __call__(SecretStruct self, **kwargs):
        if not kwargs:
            return self
        cdef SecretStruct __fbthrift_inst = SecretStruct.__new__(SecretStruct)
        __fbthrift_inst._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE = make_shared[_module_cbindings.cSecretStruct](deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE))
        __fbthrift_inst._fields_setter = _fbthrift_types_fields.__SecretStruct_FieldsSetter._fbthrift_create(__fbthrift_inst._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE.get())
        for __fbthrift_name, _fbthrift_value in kwargs.items():
            __fbthrift_inst._fbthrift_set_field(__fbthrift_name, _fbthrift_value)
        return __fbthrift_inst

    cdef void _fbthrift_set_field(self, str name, object value) except *:
        self._fields_setter.set_field(name.encode("utf-8"), value)

    cdef object _fbthrift_isset(self):
        return _fbthrift_IsSet("SecretStruct", {
          "id": deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE).id_ref().has_value(),
          "password": deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE).password_ref().has_value(),
        })

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_module_cbindings.cSecretStruct] cpp_obj):
        __fbthrift_inst = <SecretStruct>SecretStruct.__new__(SecretStruct)
        __fbthrift_inst._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE = cmove(cpp_obj)
        return __fbthrift_inst

    cdef inline id_impl(self):
        return deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE).id_ref().value()

    @property
    def id(self):
        return self.id_impl()

    cdef inline password_impl(self):
        return (<bytes>deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE).password_ref().value()).decode('UTF-8')

    @property
    def password(self):
        return self.password_impl()


    def __hash__(SecretStruct self):
        return super().__hash__()

    def __repr__(SecretStruct self):
        return super().__repr__()

    def __str__(SecretStruct self):
        return super().__str__()


    def __copy__(SecretStruct self):
        cdef shared_ptr[_module_cbindings.cSecretStruct] cpp_obj = make_shared[_module_cbindings.cSecretStruct](
            deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE)
        )
        return SecretStruct._create_FBTHRIFT_ONLY_DO_NOT_USE(cmove(cpp_obj))

    def __richcmp__(self, other, int op):
        r = self._fbthrift_cmp_sametype(other, op)
        return __richcmp[_module_cbindings.cSecretStruct](
            self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE,
            (<SecretStruct>other)._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE,
            op,
        ) if r is None else r

    @staticmethod
    def __get_reflection__():
        return get_types_reflection().get_reflection__SecretStruct()

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftMetadata meta
        _module_cbindings.StructMetadata[_module_cbindings.cSecretStruct].gen(meta)
        return __MetadataBox.box(cmove(meta))

    @staticmethod
    def __get_thrift_name__():
        return "module.SecretStruct"

    @classmethod
    def _fbthrift_get_field_name_by_index(cls, idx):
        return __sv_to_str(__get_field_name_by_index[_module_cbindings.cSecretStruct](idx))

    @classmethod
    def _fbthrift_get_struct_size(cls):
        return 2

    cdef _fbthrift_iobuf.IOBuf _fbthrift_serialize(SecretStruct self, __Protocol proto):
        cdef unique_ptr[_fbthrift_iobuf.cIOBuf] data
        with nogil:
            data = cmove(serializer.cserialize[_module_cbindings.cSecretStruct](self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE.get(), proto))
        return _fbthrift_iobuf.from_unique_ptr(cmove(data))

    cdef cuint32_t _fbthrift_deserialize(SecretStruct self, const _fbthrift_iobuf.cIOBuf* buf, __Protocol proto) except? 0:
        cdef cuint32_t needed
        self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE = make_shared[_module_cbindings.cSecretStruct]()
        with nogil:
            needed = serializer.cdeserialize[_module_cbindings.cSecretStruct](buf, self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE.get(), proto)
        return needed


    def _to_python(self):
        import importlib
        import thrift.python.converter
        python_types = importlib.import_module(
            "module.thrift_types"
        )
        return thrift.python.converter.to_python_struct(python_types.SecretStruct, self)

    def _to_py3(self):
        return self

    def _to_py_deprecated(self):
        import importlib
        import thrift.util.converter
        py_deprecated_types = importlib.import_module("module.ttypes")
        return thrift.util.converter.to_py_struct(py_deprecated_types.SecretStruct, self)


cdef _module_cbindings.std_deque_std_string std_deque_std_string__List__string__make_instance(object items) except *:
    cdef _module_cbindings.std_deque_std_string c_inst
    if items is not None:
        if isinstance(items, str):
            raise TypeError("If you really want to pass a string into a _typing.Sequence[str] field, explicitly convert it first.")
        for item in items:
            if not isinstance(item, str):
                raise TypeError(f"{item!r} is not of type str")
            c_inst.push_back(item.encode('UTF-8'))
    return cmove(c_inst)

cdef object std_deque_std_string__List__string__from_cpp(const _module_cbindings.std_deque_std_string& c_vec) except *:
    cdef list py_list = []
    cdef int idx = 0
    for idx in range(c_vec.size()):
        py_list.append(__init_unicode_from_cpp(c_vec[idx]))
    return std_deque_std_string__List__string(py_list, thrift.py3.types._fbthrift_list_private_ctor)


myStruct = MyStruct._create_FBTHRIFT_ONLY_DO_NOT_USE(constant_shared_ptr(_module_cbindings.cmyStruct()))
list_string_6884 = std_deque_std_string__List__string
