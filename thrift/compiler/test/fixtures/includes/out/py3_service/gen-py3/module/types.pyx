#
# Autogenerated by Thrift for module.thrift
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
cimport includes.types as _includes_types
import includes.types as _includes_types




cdef object get_types_reflection():
    import importlib
    return importlib.import_module(
        "module.types_reflection"
    )

@__cython.auto_pickle(False)
cdef class MyStruct(thrift.py3.types.Struct):
    def __init__(MyStruct self, **kwargs):
        self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE = make_shared[_module_cbindings.cMyStruct]()
        self._fields_setter = _fbthrift_types_fields.__MyStruct_FieldsSetter._fbthrift_create(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE.get())
        super().__init__(**kwargs)

    def __call__(MyStruct self, **kwargs):
        if not kwargs:
            return self
        cdef MyStruct __fbthrift_inst = MyStruct.__new__(MyStruct)
        __fbthrift_inst._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE = make_shared[_module_cbindings.cMyStruct](deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE))
        __fbthrift_inst._fields_setter = _fbthrift_types_fields.__MyStruct_FieldsSetter._fbthrift_create(__fbthrift_inst._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE.get())
        for __fbthrift_name, _fbthrift_value in kwargs.items():
            __fbthrift_inst._fbthrift_set_field(__fbthrift_name, _fbthrift_value)
        return __fbthrift_inst

    cdef void _fbthrift_set_field(self, str name, object value) except *:
        self._fields_setter.set_field(name.encode("utf-8"), value)

    cdef object _fbthrift_isset(self):
        return _fbthrift_IsSet("MyStruct", {
          "MyIncludedField": deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE).MyIncludedField_ref().has_value(),
          "MyOtherIncludedField": deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE).MyOtherIncludedField_ref().has_value(),
          "MyIncludedInt": deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE).MyIncludedInt_ref().has_value(),
        })

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_module_cbindings.cMyStruct] cpp_obj):
        __fbthrift_inst = <MyStruct>MyStruct.__new__(MyStruct)
        __fbthrift_inst._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE = cmove(cpp_obj)
        return __fbthrift_inst

    cdef inline MyIncludedField_impl(self):
        if self.__fbthrift_cached_MyIncludedField is None:
            self.__fbthrift_cached_MyIncludedField = _includes_types.Included._create_FBTHRIFT_ONLY_DO_NOT_USE(__reference_shared_ptr(deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE).MyIncludedField_ref().ref(), self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE))
        return self.__fbthrift_cached_MyIncludedField

    @property
    def MyIncludedField(self):
        return self.MyIncludedField_impl()

    cdef inline MyOtherIncludedField_impl(self):
        if self.__fbthrift_cached_MyOtherIncludedField is None:
            self.__fbthrift_cached_MyOtherIncludedField = _includes_types.Included._create_FBTHRIFT_ONLY_DO_NOT_USE(__reference_shared_ptr(deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE).MyOtherIncludedField_ref().ref(), self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE))
        return self.__fbthrift_cached_MyOtherIncludedField

    @property
    def MyOtherIncludedField(self):
        return self.MyOtherIncludedField_impl()

    cdef inline MyIncludedInt_impl(self):
        return deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE).MyIncludedInt_ref().value()

    @property
    def MyIncludedInt(self):
        return self.MyIncludedInt_impl()


    def __hash__(MyStruct self):
        return super().__hash__()

    def __repr__(MyStruct self):
        return super().__repr__()

    def __str__(MyStruct self):
        return super().__str__()


    def __copy__(MyStruct self):
        cdef shared_ptr[_module_cbindings.cMyStruct] cpp_obj = make_shared[_module_cbindings.cMyStruct](
            deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE)
        )
        return MyStruct._create_FBTHRIFT_ONLY_DO_NOT_USE(cmove(cpp_obj))

    def __richcmp__(self, other, int op):
        r = self._fbthrift_cmp_sametype(other, op)
        return __richcmp[_module_cbindings.cMyStruct](
            self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE,
            (<MyStruct>other)._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE,
            op,
        ) if r is None else r

    @staticmethod
    def __get_reflection__():
        return get_types_reflection().get_reflection__MyStruct()

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftMetadata meta
        _module_cbindings.StructMetadata[_module_cbindings.cMyStruct].gen(meta)
        return __MetadataBox.box(cmove(meta))

    @staticmethod
    def __get_thrift_name__():
        return "module.MyStruct"

    @classmethod
    def _fbthrift_get_field_name_by_index(cls, idx):
        return __sv_to_str(__get_field_name_by_index[_module_cbindings.cMyStruct](idx))

    @classmethod
    def _fbthrift_get_struct_size(cls):
        return 3

    cdef _fbthrift_iobuf.IOBuf _fbthrift_serialize(MyStruct self, __Protocol proto):
        cdef unique_ptr[_fbthrift_iobuf.cIOBuf] data
        with nogil:
            data = cmove(serializer.cserialize[_module_cbindings.cMyStruct](self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE.get(), proto))
        return _fbthrift_iobuf.from_unique_ptr(cmove(data))

    cdef cuint32_t _fbthrift_deserialize(MyStruct self, const _fbthrift_iobuf.cIOBuf* buf, __Protocol proto) except? 0:
        cdef cuint32_t needed
        self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE = make_shared[_module_cbindings.cMyStruct]()
        with nogil:
            needed = serializer.cdeserialize[_module_cbindings.cMyStruct](buf, self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE.get(), proto)
        return needed


    def _to_python(self):
        import importlib
        import thrift.python.converter
        python_types = importlib.import_module(
            "module.thrift_types"
        )
        return thrift.python.converter.to_python_struct(python_types.MyStruct, self)

    def _to_py3(self):
        return self

    def _to_py_deprecated(self):
        import importlib
        import thrift.util.converter
        py_deprecated_types = importlib.import_module("module.ttypes")
        return thrift.util.converter.to_py_struct(py_deprecated_types.MyStruct, self)


