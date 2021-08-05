#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
cimport cython as __cython
from cpython.object cimport PyTypeObject, Py_LT, Py_LE, Py_EQ, Py_NE, Py_GT, Py_GE
from libcpp.memory cimport shared_ptr, make_shared, unique_ptr, make_unique
from libcpp.string cimport string
from libcpp cimport bool as cbool
from libcpp.iterator cimport inserter as cinserter
from cpython cimport bool as pbool
from cython.operator cimport dereference as deref, preincrement as inc, address as ptr_address
import thrift.py3.types
cimport thrift.py3.types
cimport thrift.py3.exceptions
from thrift.py3.std_libcpp cimport sv_to_str as __sv_to_str, string_view as __cstring_view
from thrift.py3.types cimport (
    cSetOp as __cSetOp,
    richcmp as __richcmp,
    set_op as __set_op,
    setcmp as __setcmp,
    list_index as __list_index,
    list_count as __list_count,
    list_slice as __list_slice,
    list_getitem as __list_getitem,
    set_iter as __set_iter,
    map_iter as __map_iter,
    map_contains as __map_contains,
    map_getitem as __map_getitem,
    reference_shared_ptr as __reference_shared_ptr,
    get_field_name_by_index as __get_field_name_by_index,
    reset_field as __reset_field,
    translate_cpp_enum_to_python,
    SetMetaClass as __SetMetaClass,
    const_pointer_cast,
    constant_shared_ptr,
    NOTSET as __NOTSET,
    EnumData as __EnumData,
    EnumFlagsData as __EnumFlagsData,
    UnionTypeEnumData as __UnionTypeEnumData,
    createEnumDataForUnionType as __createEnumDataForUnionType,
)
cimport thrift.py3.std_libcpp as std_libcpp
cimport thrift.py3.serializer as serializer
import folly.iobuf as _fbthrift_iobuf
from folly.optional cimport cOptional
from folly.memory cimport to_shared_ptr as __to_shared_ptr
from folly.range cimport Range as __cRange

import sys
from collections.abc import Sequence, Set, Mapping, Iterable
import weakref as __weakref
import builtins as _builtins

cimport test.fixtures.enumstrict.module.types_reflection as _types_reflection


cdef __EnumData __EmptyEnum_enum_data  = __EnumData.create(thrift.py3.types.createEnumData[cEmptyEnum](), EmptyEnum)


@__cython.internal
@__cython.auto_pickle(False)
cdef class __EmptyEnumMeta(thrift.py3.types.EnumMeta):
    def _fbthrift_get_by_value(cls, int value):
        return __EmptyEnum_enum_data.get_by_value(value)

    def _fbthrift_get_all_names(cls):
        return __EmptyEnum_enum_data.get_all_names()

    def __len__(cls):
        return __EmptyEnum_enum_data.size()

    def __getattribute__(cls, str name not None):
        if name.startswith("__") or name.startswith("_fbthrift_") or name == "mro":
            return super().__getattribute__(name)
        return __EmptyEnum_enum_data.get_by_name(name)


@__cython.final
@__cython.auto_pickle(False)
cdef class EmptyEnum(thrift.py3.types.CompiledEnum):
    cdef get_by_name(self, str name):
        return __EmptyEnum_enum_data.get_by_name(name)


    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftMetadata meta
        EnumMetadata[cEmptyEnum].gen(meta)
        return __MetadataBox.box(cmove(meta))

    @staticmethod
    def __get_thrift_name__():
        return "module.EmptyEnum"


__SetMetaClass(<PyTypeObject*> EmptyEnum, <PyTypeObject*> __EmptyEnumMeta)


cdef __EnumData __MyEnum_enum_data  = __EnumData.create(thrift.py3.types.createEnumData[cMyEnum](), MyEnum)


@__cython.internal
@__cython.auto_pickle(False)
cdef class __MyEnumMeta(thrift.py3.types.EnumMeta):
    def _fbthrift_get_by_value(cls, int value):
        return __MyEnum_enum_data.get_by_value(value)

    def _fbthrift_get_all_names(cls):
        return __MyEnum_enum_data.get_all_names()

    def __len__(cls):
        return __MyEnum_enum_data.size()

    def __getattribute__(cls, str name not None):
        if name.startswith("__") or name.startswith("_fbthrift_") or name == "mro":
            return super().__getattribute__(name)
        return __MyEnum_enum_data.get_by_name(name)


@__cython.final
@__cython.auto_pickle(False)
cdef class MyEnum(thrift.py3.types.CompiledEnum):
    cdef get_by_name(self, str name):
        return __MyEnum_enum_data.get_by_name(name)


    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftMetadata meta
        EnumMetadata[cMyEnum].gen(meta)
        return __MetadataBox.box(cmove(meta))

    @staticmethod
    def __get_thrift_name__():
        return "module.MyEnum"


__SetMetaClass(<PyTypeObject*> MyEnum, <PyTypeObject*> __MyEnumMeta)


cdef __EnumData __MyBigEnum_enum_data  = __EnumData.create(thrift.py3.types.createEnumData[cMyBigEnum](), MyBigEnum)


@__cython.internal
@__cython.auto_pickle(False)
cdef class __MyBigEnumMeta(thrift.py3.types.EnumMeta):
    def _fbthrift_get_by_value(cls, int value):
        return __MyBigEnum_enum_data.get_by_value(value)

    def _fbthrift_get_all_names(cls):
        return __MyBigEnum_enum_data.get_all_names()

    def __len__(cls):
        return __MyBigEnum_enum_data.size()

    def __getattribute__(cls, str name not None):
        if name.startswith("__") or name.startswith("_fbthrift_") or name == "mro":
            return super().__getattribute__(name)
        return __MyBigEnum_enum_data.get_by_name(name)


@__cython.final
@__cython.auto_pickle(False)
cdef class MyBigEnum(thrift.py3.types.CompiledEnum):
    cdef get_by_name(self, str name):
        return __MyBigEnum_enum_data.get_by_name(name)


    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftMetadata meta
        EnumMetadata[cMyBigEnum].gen(meta)
        return __MetadataBox.box(cmove(meta))

    @staticmethod
    def __get_thrift_name__():
        return "module.MyBigEnum"


__SetMetaClass(<PyTypeObject*> MyBigEnum, <PyTypeObject*> __MyBigEnumMeta)



@__cython.auto_pickle(False)
cdef class MyStruct(thrift.py3.types.Struct):
    def __init__(MyStruct self, **kwargs):
        self._cpp_obj = make_shared[cMyStruct]()
        self._fields_setter = _fbthrift_types_fields.__MyStruct_FieldsSetter.create(self._cpp_obj.get())
        super().__init__(**kwargs)

    def __call__(MyStruct self, **kwargs):
        if not kwargs:
            return self
        cdef MyStruct __fbthrift_inst = MyStruct.__new__(MyStruct)
        __fbthrift_inst._cpp_obj = make_shared[cMyStruct](deref(self._cpp_obj))
        __fbthrift_inst._fields_setter = _fbthrift_types_fields.__MyStruct_FieldsSetter.create(__fbthrift_inst._cpp_obj.get())
        for __fbthrift_name, _fbthrift_value in kwargs.items():
            __fbthrift_inst._fbthrift_set_field(__fbthrift_name, _fbthrift_value)
        return __fbthrift_inst

    cdef void _fbthrift_set_field(self, str name, object value) except *:
        self._fields_setter.set_field(name.encode("utf-8"), value)

    cdef object _fbthrift_isset(self):
        return thrift.py3.types._IsSet("MyStruct", {
          "myEnum": deref(self._cpp_obj).myEnum_ref().has_value(),
          "myBigEnum": deref(self._cpp_obj).myBigEnum_ref().has_value(),
        })

    @staticmethod
    cdef create(shared_ptr[cMyStruct] cpp_obj):
        __fbthrift_inst = <MyStruct>MyStruct.__new__(MyStruct)
        __fbthrift_inst._cpp_obj = cmove(cpp_obj)
        return __fbthrift_inst

    @property
    def myEnum(self):

        if self.__fbthrift_cached_myEnum is None:
            self.__fbthrift_cached_myEnum = translate_cpp_enum_to_python(MyEnum, <int>(deref(self._cpp_obj).myEnum_ref().value()))
        return self.__fbthrift_cached_myEnum

    @property
    def myBigEnum(self):

        if self.__fbthrift_cached_myBigEnum is None:
            self.__fbthrift_cached_myBigEnum = translate_cpp_enum_to_python(MyBigEnum, <int>(deref(self._cpp_obj).myBigEnum_ref().value()))
        return self.__fbthrift_cached_myBigEnum


    def __hash__(MyStruct self):
        return  super().__hash__()

    def __copy__(MyStruct self):
        cdef shared_ptr[cMyStruct] cpp_obj = make_shared[cMyStruct](
            deref(self._cpp_obj)
        )
        return MyStruct.create(cmove(cpp_obj))

    def __richcmp__(self, other, int op):
        r = self._fbthrift_cmp_sametype(other, op)
        return __richcmp[cMyStruct](
            self._cpp_obj,
            (<MyStruct>other)._cpp_obj,
            op,
        ) if r is None else r

    @staticmethod
    def __get_reflection__():
        return _types_reflection.get_reflection__MyStruct()

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftMetadata meta
        StructMetadata[cMyStruct].gen(meta)
        return __MetadataBox.box(cmove(meta))

    @staticmethod
    def __get_thrift_name__():
        return "module.MyStruct"

    cdef __cstring_view _fbthrift_get_field_name_by_index(self, size_t idx):
        return __get_field_name_by_index[cMyStruct](idx)

    def __cinit__(self):
        self._fbthrift_struct_size = 2

    cdef _fbthrift_iobuf.IOBuf _fbthrift_serialize(MyStruct self, __Protocol proto):
        cdef unique_ptr[_fbthrift_iobuf.cIOBuf] data
        with nogil:
            data = cmove(serializer.cserialize[cMyStruct](self._cpp_obj.get(), proto))
        return _fbthrift_iobuf.from_unique_ptr(cmove(data))

    cdef cuint32_t _fbthrift_deserialize(MyStruct self, const _fbthrift_iobuf.cIOBuf* buf, __Protocol proto) except? 0:
        cdef cuint32_t needed
        self._cpp_obj = make_shared[cMyStruct]()
        with nogil:
            needed = serializer.cdeserialize[cMyStruct](buf, self._cpp_obj.get(), proto)
        return needed


@__cython.auto_pickle(False)
cdef class Map__MyEnum_string(thrift.py3.types.Map):
    def __init__(self, items=None):
        if isinstance(items, Map__MyEnum_string):
            self._cpp_obj = (<Map__MyEnum_string> items)._cpp_obj
        else:
            self._cpp_obj = Map__MyEnum_string._make_instance(items)

    @staticmethod
    cdef create(shared_ptr[cmap[cMyEnum,string]] c_items):
        __fbthrift_inst = <Map__MyEnum_string>Map__MyEnum_string.__new__(Map__MyEnum_string)
        __fbthrift_inst._cpp_obj = cmove(c_items)
        return __fbthrift_inst

    def __copy__(Map__MyEnum_string self):
        cdef shared_ptr[cmap[cMyEnum,string]] cpp_obj = make_shared[cmap[cMyEnum,string]](
            deref(self._cpp_obj)
        )
        return Map__MyEnum_string.create(cmove(cpp_obj))

    def __len__(self):
        return deref(self._cpp_obj).size()

    @staticmethod
    cdef shared_ptr[cmap[cMyEnum,string]] _make_instance(object items) except *:
        cdef shared_ptr[cmap[cMyEnum,string]] c_inst = make_shared[cmap[cMyEnum,string]]()
        if items is not None:
            for key, item in items.items():
                if not isinstance(key, MyEnum):
                    raise TypeError(f"{key!r} is not of type MyEnum")
                if not isinstance(item, str):
                    raise TypeError(f"{item!r} is not of type str")

                deref(c_inst)[<cMyEnum><int>key] = item.encode('UTF-8')
        return c_inst

    cdef _check_key_type(self, key):
        if not self or key is None:
            return
        if isinstance(key, MyEnum):
            return key

    def __getitem__(self, key):
        err = KeyError(f'{key}')
        key = self._check_key_type(key)
        if key is None:
            raise err
        cdef cMyEnum ckey = <cMyEnum><int>key
        if not __map_contains(self._cpp_obj, ckey):
            raise err
        cdef string citem
        __map_getitem(self._cpp_obj, ckey, citem)
        return bytes(citem).decode('UTF-8')

    def __iter__(self):
        if not self:
            return
        cdef __map_iter[cmap[cMyEnum,string]] itr = __map_iter[cmap[cMyEnum,string]](self._cpp_obj)
        cdef cMyEnum citem
        for i in range(deref(self._cpp_obj).size()):
            itr.genNextKey(self._cpp_obj, citem)
            yield translate_cpp_enum_to_python(MyEnum, <int> citem)

    def __contains__(self, key):
        key = self._check_key_type(key)
        if key is None:
            return False
        cdef cMyEnum ckey = <cMyEnum><int>key
        return __map_contains(self._cpp_obj, ckey)

    def values(self):
        if not self:
            return
        cdef __map_iter[cmap[cMyEnum,string]] itr = __map_iter[cmap[cMyEnum,string]](self._cpp_obj)
        cdef string citem
        for i in range(deref(self._cpp_obj).size()):
            itr.genNextValue(self._cpp_obj, citem)
            yield bytes(citem).decode('UTF-8')

    def items(self):
        if not self:
            return
        cdef __map_iter[cmap[cMyEnum,string]] itr = __map_iter[cmap[cMyEnum,string]](self._cpp_obj)
        cdef cMyEnum ckey
        cdef string citem
        for i in range(deref(self._cpp_obj).size()):
            itr.genNextItem(self._cpp_obj, ckey, citem)
            yield (translate_cpp_enum_to_python(MyEnum, <int> ckey), bytes(citem).decode('UTF-8'))

    @staticmethod
    def __get_reflection__():
        return _types_reflection.get_reflection__Map__MyEnum_string()

Mapping.register(Map__MyEnum_string)

kOne = MyEnum(<int> (ckOne()))
enumNames = Map__MyEnum_string.create(constant_shared_ptr(cenumNames()))
