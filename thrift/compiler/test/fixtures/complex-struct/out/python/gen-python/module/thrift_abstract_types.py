

#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations

import abc as _abc
import typing as _typing

_fbthrift_property = property

import enum as _enum


import folly.iobuf as _fbthrift_iobuf
import thrift.python.abstract_types as _fbthrift_python_abstract_types

from module.thrift_enums import (
    MyEnum,
    MyEnum as _fbthrift_MyEnum,
    _fbthrift_compatible_with_MyEnum,
)

class MyStructFloatFieldThrowExp(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def myLongField(self) -> int: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def MyByteField(self) -> int: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def myStringField(self) -> str: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def myFloatField(self) -> float: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "module.thrift_mutable_types.MyStructFloatFieldThrowExp": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "module.thrift_types.MyStructFloatFieldThrowExp": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "module.types.MyStructFloatFieldThrowExp": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.MyStructFloatFieldThrowExp": ...  # type: ignore
_fbthrift_MyStructFloatFieldThrowExp = MyStructFloatFieldThrowExp
class MyStructMapFloatThrowExp(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def myLongField(self) -> int: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def mapListOfFloats(self) -> _typing.Mapping[int, _typing.Sequence[_typing.Sequence[float]]]: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "module.thrift_mutable_types.MyStructMapFloatThrowExp": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "module.thrift_types.MyStructMapFloatThrowExp": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "module.types.MyStructMapFloatThrowExp": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.MyStructMapFloatThrowExp": ...  # type: ignore
_fbthrift_MyStructMapFloatThrowExp = MyStructMapFloatThrowExp
class MyStruct(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def MyIntField(self) -> int: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def MyStringField(self) -> str: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def MyDataField(self) -> _fbthrift_MyDataItem: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def myEnum(self) -> _fbthrift_MyEnum: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def MyBoolField(self) -> bool: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def MyByteField(self) -> int: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def MyShortField(self) -> int: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def MyLongField(self) -> int: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def MyDoubleField(self) -> float: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def lDouble(self) -> _typing.Sequence[float]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def lShort(self) -> _typing.Sequence[int]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def lInteger(self) -> _typing.Sequence[int]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def lLong(self) -> _typing.Sequence[int]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def lString(self) -> _typing.Sequence[str]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def lBool(self) -> _typing.Sequence[bool]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def lByte(self) -> _typing.Sequence[int]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def mShortString(self) -> _typing.Mapping[int, str]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def mIntegerString(self) -> _typing.Mapping[int, str]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def mStringMyStruct(self) -> _typing.Mapping[str, _fbthrift_MyStruct]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def mStringBool(self) -> _typing.Mapping[str, bool]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def mIntegerInteger(self) -> _typing.Mapping[int, int]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def mIntegerBool(self) -> _typing.Mapping[int, bool]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def sShort(self) -> _typing.AbstractSet[int]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def sMyStruct(self) -> _typing.AbstractSet[_fbthrift_MyStruct]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def sLong(self) -> _typing.AbstractSet[int]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def sString(self) -> _typing.AbstractSet[str]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def sByte(self) -> _typing.AbstractSet[int]: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "module.thrift_mutable_types.MyStruct": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "module.thrift_types.MyStruct": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "module.types.MyStruct": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.MyStruct": ...  # type: ignore
_fbthrift_MyStruct = MyStruct
class SimpleStruct(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def age(self) -> int: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def name(self) -> str: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "module.thrift_mutable_types.SimpleStruct": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "module.thrift_types.SimpleStruct": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "module.types.SimpleStruct": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.SimpleStruct": ...  # type: ignore
_fbthrift_SimpleStruct = SimpleStruct
class defaultStruct(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def myLongDFset(self) -> int: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def myLongDF(self) -> int: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def portDFset(self) -> int: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def portNum(self) -> int: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def myBinaryDFset(self) -> bytes: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def myBinary(self) -> bytes: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def myByteDFSet(self) -> int: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def myByte(self) -> int: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def myDoubleDFset(self) -> float: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def myDoubleDFZero(self) -> float: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def myDouble(self) -> float: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def field3(self) -> _typing.Mapping[int, str]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def myList(self) -> _typing.Sequence[_fbthrift_MyEnum]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def mySet(self) -> _typing.AbstractSet[str]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def simpleStruct(self) -> _fbthrift_SimpleStruct: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def listStructDFset(self) -> _typing.Sequence[_fbthrift_SimpleStruct]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def myUnion(self) -> _fbthrift_MyUnion: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def listUnionDFset(self) -> _typing.Sequence[_fbthrift_MyUnion]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def mapNestlistStructDfSet(self) -> _typing.Mapping[int, _typing.Sequence[_fbthrift_SimpleStruct]]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def mapJavaTypeDFset(self) -> _typing.Mapping[int, str]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def emptyMap(self) -> _typing.Mapping[int, int]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def enumMapDFset(self) -> _typing.Mapping[str, _typing.Mapping[int, _fbthrift_MyEnum]]: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "module.thrift_mutable_types.defaultStruct": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "module.thrift_types.defaultStruct": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "module.types.defaultStruct": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.defaultStruct": ...  # type: ignore
_fbthrift_defaultStruct = defaultStruct
class MyStructTypeDef(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def myLongField(self) -> int: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def myLongTypeDef(self) -> int: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def myStringField(self) -> str: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def myStringTypedef(self) -> str: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def myMapField(self) -> _typing.Mapping[int, str]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def myMapTypedef(self) -> _typing.Mapping[int, str]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def myListField(self) -> _typing.Sequence[float]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def myListTypedef(self) -> _typing.Sequence[float]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def myMapListOfTypeDef(self) -> _typing.Mapping[int, _typing.Sequence[_typing.Sequence[float]]]: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "module.thrift_mutable_types.MyStructTypeDef": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "module.thrift_types.MyStructTypeDef": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "module.types.MyStructTypeDef": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.MyStructTypeDef": ...  # type: ignore
_fbthrift_MyStructTypeDef = MyStructTypeDef
class MyDataItem(_abc.ABC):
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "module.thrift_mutable_types.MyDataItem": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "module.thrift_types.MyDataItem": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "module.types.MyDataItem": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.MyDataItem": ...  # type: ignore
_fbthrift_MyDataItem = MyDataItem
class MyUnion(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def myEnum(self) -> _fbthrift_MyEnum: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def myStruct(self) -> _fbthrift_MyStruct: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def myDataItem(self) -> _fbthrift_MyDataItem: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def complexNestedStruct(self) -> _fbthrift_ComplexNestedStruct: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def longValue(self) -> int: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def intValue(self) -> int: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "module.thrift_mutable_types.MyUnion": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "module.thrift_types.MyUnion": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "module.types.MyUnion": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.MyUnion": ...  # type: ignore

    class FbThriftUnionFieldEnum(_enum.Enum):
        EMPTY = 0
        myEnum = 1
        myStruct = 2
        myDataItem = 3
        complexNestedStruct = 4
        longValue = 5
        intValue = 6

    FbThriftUnionFieldEnum.__name__ = "MyUnion"
    @_fbthrift_property
    @_abc.abstractmethod
    def fbthrift_current_value(self) -> _typing.Final[_typing.Union[None, _fbthrift_MyEnum, _fbthrift_MyStruct, _fbthrift_MyDataItem, _fbthrift_ComplexNestedStruct, int, int]]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def fbthrift_current_field(self) -> _typing.Final[FbThriftUnionFieldEnum]: ...

_fbthrift_MyUnion = MyUnion
class MyUnionFloatFieldThrowExp(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def myEnum(self) -> _fbthrift_MyEnum: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def setFloat(self) -> _typing.Sequence[_typing.Sequence[float]]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def myDataItem(self) -> _fbthrift_MyDataItem: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def complexNestedStruct(self) -> _fbthrift_ComplexNestedStruct: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "module.thrift_mutable_types.MyUnionFloatFieldThrowExp": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "module.thrift_types.MyUnionFloatFieldThrowExp": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "module.types.MyUnionFloatFieldThrowExp": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.MyUnionFloatFieldThrowExp": ...  # type: ignore

    class FbThriftUnionFieldEnum(_enum.Enum):
        EMPTY = 0
        myEnum = 1
        setFloat = 2
        myDataItem = 3
        complexNestedStruct = 4

    FbThriftUnionFieldEnum.__name__ = "MyUnionFloatFieldThrowExp"
    @_fbthrift_property
    @_abc.abstractmethod
    def fbthrift_current_value(self) -> _typing.Final[_typing.Union[None, _fbthrift_MyEnum, _typing.Sequence[_typing.Sequence[float]], _fbthrift_MyDataItem, _fbthrift_ComplexNestedStruct]]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def fbthrift_current_field(self) -> _typing.Final[FbThriftUnionFieldEnum]: ...

_fbthrift_MyUnionFloatFieldThrowExp = MyUnionFloatFieldThrowExp
class ComplexNestedStruct(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def setOfSetOfInt(self) -> _typing.AbstractSet[_typing.AbstractSet[int]]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def listofListOfListOfListOfEnum(self) -> _typing.Sequence[_typing.Sequence[_typing.Sequence[_typing.Sequence[_fbthrift_MyEnum]]]]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def listOfListOfMyStruct(self) -> _typing.Sequence[_typing.Sequence[_fbthrift_MyStruct]]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def setOfListOfListOfLong(self) -> _typing.AbstractSet[_typing.Sequence[_typing.Sequence[int]]]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def setOfSetOfsetOfLong(self) -> _typing.AbstractSet[_typing.AbstractSet[_typing.AbstractSet[int]]]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def mapStructListOfListOfLong(self) -> _typing.Mapping[int, _typing.Sequence[_typing.Sequence[_fbthrift_MyStruct]]]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def listOfMapKeyIntValInt(self) -> _typing.Sequence[_typing.Mapping[int, int]]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def listOfMapKeyStrValList(self) -> _typing.Sequence[_typing.Mapping[str, _typing.Sequence[_fbthrift_MyStruct]]]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def mapKeyIntValList(self) -> _typing.Mapping[int, _typing.Sequence[_fbthrift_MyStruct]]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def mapKeyIntValSet(self) -> _typing.Mapping[int, _typing.AbstractSet[bool]]: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "module.thrift_mutable_types.ComplexNestedStruct": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "module.thrift_types.ComplexNestedStruct": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "module.types.ComplexNestedStruct": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.ComplexNestedStruct": ...  # type: ignore
_fbthrift_ComplexNestedStruct = ComplexNestedStruct
class TypeRemapped(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def lsMap(self) -> _typing.Mapping[int, str]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def ioMap(self) -> _typing.Mapping[int, _typing.Mapping[int, int]]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def BigInteger(self) -> int: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def binaryTestBuffer(self) -> bytes: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "module.thrift_mutable_types.TypeRemapped": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "module.thrift_types.TypeRemapped": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "module.types.TypeRemapped": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.TypeRemapped": ...  # type: ignore
_fbthrift_TypeRemapped = TypeRemapped
class emptyXcep(_fbthrift_python_abstract_types.AbstractGeneratedError):
    def _to_mutable_python(self) -> "module.thrift_mutable_types.emptyXcep": ...  # type: ignore
    def _to_python(self) -> "module.thrift_types.emptyXcep": ...  # type: ignore
    def _to_py3(self) -> "module.types.emptyXcep": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.emptyXcep": ...  # type: ignore
_fbthrift_emptyXcep = emptyXcep
class reqXcep(_fbthrift_python_abstract_types.AbstractGeneratedError):
    @_fbthrift_property
    def message(self) -> str: ...
    @_fbthrift_property
    def errorCode(self) -> int: ...
    def _to_mutable_python(self) -> "module.thrift_mutable_types.reqXcep": ...  # type: ignore
    def _to_python(self) -> "module.thrift_types.reqXcep": ...  # type: ignore
    def _to_py3(self) -> "module.types.reqXcep": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.reqXcep": ...  # type: ignore
_fbthrift_reqXcep = reqXcep
class optXcep(_fbthrift_python_abstract_types.AbstractGeneratedError):
    @_fbthrift_property
    def message(self) -> _typing.Optional[str]: ...
    @_fbthrift_property
    def errorCode(self) -> _typing.Optional[int]: ...
    def _to_mutable_python(self) -> "module.thrift_mutable_types.optXcep": ...  # type: ignore
    def _to_python(self) -> "module.thrift_types.optXcep": ...  # type: ignore
    def _to_py3(self) -> "module.types.optXcep": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.optXcep": ...  # type: ignore
_fbthrift_optXcep = optXcep
class complexException(_fbthrift_python_abstract_types.AbstractGeneratedError):
    @_fbthrift_property
    def message(self) -> str: ...
    @_fbthrift_property
    def listStrings(self) -> _typing.Sequence[str]: ...
    @_fbthrift_property
    def errorEnum(self) -> _fbthrift_MyEnum: ...
    @_fbthrift_property
    def unionError(self) -> _typing.Optional[_fbthrift_MyUnion]: ...
    @_fbthrift_property
    def structError(self) -> _fbthrift_MyStruct: ...
    @_fbthrift_property
    def lsMap(self) -> _typing.Mapping[int, str]: ...
    def _to_mutable_python(self) -> "module.thrift_mutable_types.complexException": ...  # type: ignore
    def _to_python(self) -> "module.thrift_types.complexException": ...  # type: ignore
    def _to_py3(self) -> "module.types.complexException": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.complexException": ...  # type: ignore
_fbthrift_complexException = complexException
class Containers(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def struct_list(self) -> _typing.Sequence[_fbthrift_MyStruct]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def union_list(self) -> _typing.Sequence[_fbthrift_MyUnion]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def enum_list(self) -> _typing.Sequence[_fbthrift_MyEnum]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def struct_set(self) -> _typing.AbstractSet[_fbthrift_MyStruct]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def union_set(self) -> _typing.AbstractSet[_fbthrift_MyUnion]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def enum_set(self) -> _typing.AbstractSet[_fbthrift_MyEnum]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def enum_map(self) -> _typing.Mapping[_fbthrift_MyEnum, int]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def struct_map_2(self) -> _typing.Mapping[int, _fbthrift_MyStruct]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def union_map_2(self) -> _typing.Mapping[int, _fbthrift_MyUnion]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def enum_map_2(self) -> _typing.Mapping[int, _fbthrift_MyEnum]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def list_map_2(self) -> _typing.Mapping[int, _typing.Sequence[int]]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def set_map_2(self) -> _typing.Mapping[int, _typing.AbstractSet[int]]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def map_map_2(self) -> _typing.Mapping[int, _typing.Mapping[int, int]]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def list_list_i32(self) -> _typing.Sequence[_typing.Sequence[int]]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def list_list_struct(self) -> _typing.Sequence[_typing.Sequence[_fbthrift_MyStruct]]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def list_set_i32(self) -> _typing.Sequence[_typing.AbstractSet[int]]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def list_set_struct(self) -> _typing.Sequence[_typing.AbstractSet[_fbthrift_MyStruct]]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def list_map_i32_i32(self) -> _typing.Sequence[_typing.Mapping[int, int]]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def list_map_i32_struct(self) -> _typing.Sequence[_typing.Mapping[int, _fbthrift_MyStruct]]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def set_list_i32(self) -> _typing.AbstractSet[_typing.Sequence[int]]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def set_list_struct(self) -> _typing.AbstractSet[_typing.Sequence[_fbthrift_MyStruct]]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def set_set_i32(self) -> _typing.AbstractSet[_typing.AbstractSet[int]]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def set_set_struct(self) -> _typing.AbstractSet[_typing.AbstractSet[_fbthrift_MyStruct]]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def set_map_i32_i32(self) -> _typing.AbstractSet[_typing.Mapping[int, int]]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def set_map_i32_struct(self) -> _typing.AbstractSet[_typing.Mapping[int, _fbthrift_MyStruct]]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def map_i32_map_i32_i32(self) -> _typing.Mapping[int, _typing.Mapping[int, int]]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def map_i32_map_i32_struct(self) -> _typing.Mapping[int, _typing.Mapping[int, _fbthrift_MyStruct]]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def map_i32_map_list_i32_i32(self) -> _typing.Mapping[int, _typing.Sequence[_typing.Mapping[int, int]]]: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "module.thrift_mutable_types.Containers": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "module.thrift_types.Containers": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "module.types.Containers": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.Containers": ...  # type: ignore
_fbthrift_Containers = Containers

stringTypedef = str
longTypeDef = int
mapTypedef = _typing.Mapping[int, str]
listTypedef = _typing.Sequence[float]
floatTypedef = float
FMap = _typing.Mapping[int, int]
binary_4918 = bytes
i32_1194 = int
map_i32_FMap_6797 = _typing.Mapping[int, _typing.Mapping[int, int]]
map_i64_string_5732 = _typing.Mapping[int, str]
