
# EXPERIMENTAL - DO NOT USE !!!
# See `experimental_generate_abstract_types` documentation in thrift compiler

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


import folly.iobuf as _fbthrift_iobuf
import thrift.python.abstract_types as _fbthrift_python_abstract_types
import apache.thrift.fixtures.types.included.thrift_abstract_types as _fbthrift__apache__thrift__fixtures__types__included__thrift_abstract_types

class has_bitwise_ops:
    pass

class is_unscoped:
    pass

class MyForwardRefEnum:
    pass


class empty_struct(_abc.ABC):
    @_abc.abstractmethod
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[None]]]: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "apache.thrift.fixtures.types.module.thrift_mutable_types.empty_struct": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "apache.thrift.fixtures.types.module.thrift_types.empty_struct": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "apache.thrift.fixtures.types.module.types.empty_struct": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.empty_struct": ...  # type: ignore

class decorated_struct(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def field(self) -> str: ...
    @_abc.abstractmethod
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str]]]: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "apache.thrift.fixtures.types.module.thrift_mutable_types.decorated_struct": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "apache.thrift.fixtures.types.module.thrift_types.decorated_struct": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "apache.thrift.fixtures.types.module.types.decorated_struct": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.decorated_struct": ...  # type: ignore

class ContainerStruct(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def fieldB(self) -> _typing.Sequence[int]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def fieldC(self) -> _typing.Sequence[int]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def fieldD(self) -> _typing.Sequence[int]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def fieldE(self) -> _typing.Sequence[int]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def fieldF(self) -> _typing.AbstractSet[int]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def fieldG(self) -> _typing.Mapping[int, str]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def fieldH(self) -> _typing.Mapping[int, str]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def fieldA(self) -> _typing.Sequence[int]: ...
    @_abc.abstractmethod
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[_typing.Sequence[int], _typing.Sequence[int], _typing.Sequence[int], _typing.Sequence[int], _typing.AbstractSet[int], _typing.Mapping[int, str], _typing.Mapping[int, str], _typing.Sequence[int]]]]: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "apache.thrift.fixtures.types.module.thrift_mutable_types.ContainerStruct": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "apache.thrift.fixtures.types.module.thrift_types.ContainerStruct": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "apache.thrift.fixtures.types.module.types.ContainerStruct": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.ContainerStruct": ...  # type: ignore

class CppTypeStruct(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def fieldA(self) -> _typing.Sequence[int]: ...
    @_abc.abstractmethod
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[_typing.Sequence[int]]]]: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "apache.thrift.fixtures.types.module.thrift_mutable_types.CppTypeStruct": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "apache.thrift.fixtures.types.module.thrift_types.CppTypeStruct": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "apache.thrift.fixtures.types.module.types.CppTypeStruct": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.CppTypeStruct": ...  # type: ignore

class VirtualStruct(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def MyIntField(self) -> int: ...
    @_abc.abstractmethod
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int]]]: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "apache.thrift.fixtures.types.module.thrift_mutable_types.VirtualStruct": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "apache.thrift.fixtures.types.module.thrift_types.VirtualStruct": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "apache.thrift.fixtures.types.module.types.VirtualStruct": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.VirtualStruct": ...  # type: ignore

class MyStructWithForwardRefEnum(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def a(self) -> MyForwardRefEnum: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def b(self) -> MyForwardRefEnum: ...
    @_abc.abstractmethod
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[MyForwardRefEnum, MyForwardRefEnum]]]: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "apache.thrift.fixtures.types.module.thrift_mutable_types.MyStructWithForwardRefEnum": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "apache.thrift.fixtures.types.module.thrift_types.MyStructWithForwardRefEnum": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "apache.thrift.fixtures.types.module.types.MyStructWithForwardRefEnum": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.MyStructWithForwardRefEnum": ...  # type: ignore

class TrivialNumeric(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def a(self) -> int: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def b(self) -> bool: ...
    @_abc.abstractmethod
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, bool]]]: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "apache.thrift.fixtures.types.module.thrift_mutable_types.TrivialNumeric": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "apache.thrift.fixtures.types.module.thrift_types.TrivialNumeric": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "apache.thrift.fixtures.types.module.types.TrivialNumeric": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.TrivialNumeric": ...  # type: ignore

class TrivialNestedWithDefault(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def z(self) -> int: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def n(self) -> TrivialNumeric: ...
    @_abc.abstractmethod
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, TrivialNumeric]]]: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "apache.thrift.fixtures.types.module.thrift_mutable_types.TrivialNestedWithDefault": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "apache.thrift.fixtures.types.module.thrift_types.TrivialNestedWithDefault": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "apache.thrift.fixtures.types.module.types.TrivialNestedWithDefault": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.TrivialNestedWithDefault": ...  # type: ignore

class ComplexString(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def a(self) -> str: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def b(self) -> _typing.Mapping[str, int]: ...
    @_abc.abstractmethod
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str, _typing.Mapping[str, int]]]]: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "apache.thrift.fixtures.types.module.thrift_mutable_types.ComplexString": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "apache.thrift.fixtures.types.module.thrift_types.ComplexString": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "apache.thrift.fixtures.types.module.types.ComplexString": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.ComplexString": ...  # type: ignore

class ComplexNestedWithDefault(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def z(self) -> str: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def n(self) -> ComplexString: ...
    @_abc.abstractmethod
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str, ComplexString]]]: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "apache.thrift.fixtures.types.module.thrift_mutable_types.ComplexNestedWithDefault": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "apache.thrift.fixtures.types.module.thrift_types.ComplexNestedWithDefault": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "apache.thrift.fixtures.types.module.types.ComplexNestedWithDefault": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.ComplexNestedWithDefault": ...  # type: ignore

class MinPadding(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def small(self) -> int: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def big(self) -> int: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def medium(self) -> int: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def biggish(self) -> int: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def tiny(self) -> int: ...
    @_abc.abstractmethod
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, int, int, int, int]]]: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "apache.thrift.fixtures.types.module.thrift_mutable_types.MinPadding": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "apache.thrift.fixtures.types.module.thrift_types.MinPadding": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "apache.thrift.fixtures.types.module.types.MinPadding": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.MinPadding": ...  # type: ignore

class MinPaddingWithCustomType(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def small(self) -> int: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def big(self) -> int: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def medium(self) -> int: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def biggish(self) -> int: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def tiny(self) -> int: ...
    @_abc.abstractmethod
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, int, int, int, int]]]: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "apache.thrift.fixtures.types.module.thrift_mutable_types.MinPaddingWithCustomType": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "apache.thrift.fixtures.types.module.thrift_types.MinPaddingWithCustomType": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "apache.thrift.fixtures.types.module.types.MinPaddingWithCustomType": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.MinPaddingWithCustomType": ...  # type: ignore

class MyStruct(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def MyIntField(self) -> int: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def MyStringField(self) -> str: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def majorVer(self) -> int: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def data(self) -> MyDataItem: ...
    @_abc.abstractmethod
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, str, int, MyDataItem]]]: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "apache.thrift.fixtures.types.module.thrift_mutable_types.MyStruct": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "apache.thrift.fixtures.types.module.thrift_types.MyStruct": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "apache.thrift.fixtures.types.module.types.MyStruct": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.MyStruct": ...  # type: ignore

class MyDataItem(_abc.ABC):
    @_abc.abstractmethod
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[None]]]: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "apache.thrift.fixtures.types.module.thrift_mutable_types.MyDataItem": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "apache.thrift.fixtures.types.module.thrift_types.MyDataItem": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "apache.thrift.fixtures.types.module.types.MyDataItem": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.MyDataItem": ...  # type: ignore

class Renaming(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def foo(self) -> int: ...
    @_abc.abstractmethod
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int]]]: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "apache.thrift.fixtures.types.module.thrift_mutable_types.Renaming": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "apache.thrift.fixtures.types.module.thrift_types.Renaming": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "apache.thrift.fixtures.types.module.types.Renaming": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.Renaming": ...  # type: ignore

class AnnotatedTypes(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def binary_field(self) -> bytes: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def list_field(self) -> _typing.Sequence[_typing.Mapping[int, str]]: ...
    @_abc.abstractmethod
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[bytes, _typing.Sequence[_typing.Mapping[int, str]]]]]: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "apache.thrift.fixtures.types.module.thrift_mutable_types.AnnotatedTypes": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "apache.thrift.fixtures.types.module.thrift_types.AnnotatedTypes": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "apache.thrift.fixtures.types.module.types.AnnotatedTypes": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.AnnotatedTypes": ...  # type: ignore

class ForwardUsageRoot(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def ForwardUsageStruct(self) -> _typing.Optional[ForwardUsageStruct]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def ForwardUsageByRef(self) -> _typing.Optional[ForwardUsageByRef]: ...
    @_abc.abstractmethod
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[ForwardUsageStruct, ForwardUsageByRef]]]: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "apache.thrift.fixtures.types.module.thrift_mutable_types.ForwardUsageRoot": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "apache.thrift.fixtures.types.module.thrift_types.ForwardUsageRoot": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "apache.thrift.fixtures.types.module.types.ForwardUsageRoot": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.ForwardUsageRoot": ...  # type: ignore

class ForwardUsageStruct(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def foo(self) -> _typing.Optional[ForwardUsageRoot]: ...
    @_abc.abstractmethod
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[ForwardUsageRoot]]]: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "apache.thrift.fixtures.types.module.thrift_mutable_types.ForwardUsageStruct": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "apache.thrift.fixtures.types.module.thrift_types.ForwardUsageStruct": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "apache.thrift.fixtures.types.module.types.ForwardUsageStruct": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.ForwardUsageStruct": ...  # type: ignore

class ForwardUsageByRef(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def foo(self) -> _typing.Optional[ForwardUsageRoot]: ...
    @_abc.abstractmethod
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[ForwardUsageRoot]]]: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "apache.thrift.fixtures.types.module.thrift_mutable_types.ForwardUsageByRef": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "apache.thrift.fixtures.types.module.thrift_types.ForwardUsageByRef": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "apache.thrift.fixtures.types.module.types.ForwardUsageByRef": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.ForwardUsageByRef": ...  # type: ignore

class IncompleteMap(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def field(self) -> _typing.Optional[_typing.Mapping[int, IncompleteMapDep]]: ...
    @_abc.abstractmethod
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[_typing.Mapping[int, IncompleteMapDep]]]]: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "apache.thrift.fixtures.types.module.thrift_mutable_types.IncompleteMap": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "apache.thrift.fixtures.types.module.thrift_types.IncompleteMap": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "apache.thrift.fixtures.types.module.types.IncompleteMap": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.IncompleteMap": ...  # type: ignore

class IncompleteMapDep(_abc.ABC):
    @_abc.abstractmethod
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[None]]]: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "apache.thrift.fixtures.types.module.thrift_mutable_types.IncompleteMapDep": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "apache.thrift.fixtures.types.module.thrift_types.IncompleteMapDep": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "apache.thrift.fixtures.types.module.types.IncompleteMapDep": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.IncompleteMapDep": ...  # type: ignore

class CompleteMap(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def field(self) -> _typing.Optional[_typing.Mapping[int, CompleteMapDep]]: ...
    @_abc.abstractmethod
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[_typing.Mapping[int, CompleteMapDep]]]]: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "apache.thrift.fixtures.types.module.thrift_mutable_types.CompleteMap": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "apache.thrift.fixtures.types.module.thrift_types.CompleteMap": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "apache.thrift.fixtures.types.module.types.CompleteMap": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.CompleteMap": ...  # type: ignore

class CompleteMapDep(_abc.ABC):
    @_abc.abstractmethod
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[None]]]: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "apache.thrift.fixtures.types.module.thrift_mutable_types.CompleteMapDep": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "apache.thrift.fixtures.types.module.thrift_types.CompleteMapDep": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "apache.thrift.fixtures.types.module.types.CompleteMapDep": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.CompleteMapDep": ...  # type: ignore

class IncompleteList(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def field(self) -> _typing.Optional[_typing.Sequence[IncompleteListDep]]: ...
    @_abc.abstractmethod
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[_typing.Sequence[IncompleteListDep]]]]: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "apache.thrift.fixtures.types.module.thrift_mutable_types.IncompleteList": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "apache.thrift.fixtures.types.module.thrift_types.IncompleteList": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "apache.thrift.fixtures.types.module.types.IncompleteList": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.IncompleteList": ...  # type: ignore

class IncompleteListDep(_abc.ABC):
    @_abc.abstractmethod
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[None]]]: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "apache.thrift.fixtures.types.module.thrift_mutable_types.IncompleteListDep": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "apache.thrift.fixtures.types.module.thrift_types.IncompleteListDep": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "apache.thrift.fixtures.types.module.types.IncompleteListDep": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.IncompleteListDep": ...  # type: ignore

class CompleteList(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def field(self) -> _typing.Optional[_typing.Sequence[CompleteListDep]]: ...
    @_abc.abstractmethod
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[_typing.Sequence[CompleteListDep]]]]: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "apache.thrift.fixtures.types.module.thrift_mutable_types.CompleteList": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "apache.thrift.fixtures.types.module.thrift_types.CompleteList": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "apache.thrift.fixtures.types.module.types.CompleteList": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.CompleteList": ...  # type: ignore

class CompleteListDep(_abc.ABC):
    @_abc.abstractmethod
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[None]]]: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "apache.thrift.fixtures.types.module.thrift_mutable_types.CompleteListDep": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "apache.thrift.fixtures.types.module.thrift_types.CompleteListDep": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "apache.thrift.fixtures.types.module.types.CompleteListDep": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.CompleteListDep": ...  # type: ignore

class AdaptedList(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def field(self) -> _typing.Optional[_typing.Sequence[AdaptedListDep]]: ...
    @_abc.abstractmethod
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[_typing.Sequence[AdaptedListDep]]]]: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "apache.thrift.fixtures.types.module.thrift_mutable_types.AdaptedList": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "apache.thrift.fixtures.types.module.thrift_types.AdaptedList": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "apache.thrift.fixtures.types.module.types.AdaptedList": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.AdaptedList": ...  # type: ignore

class AdaptedListDep(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def field(self) -> AdaptedList: ...
    @_abc.abstractmethod
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[AdaptedList]]]: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "apache.thrift.fixtures.types.module.thrift_mutable_types.AdaptedListDep": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "apache.thrift.fixtures.types.module.thrift_types.AdaptedListDep": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "apache.thrift.fixtures.types.module.types.AdaptedListDep": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.AdaptedListDep": ...  # type: ignore

class DependentAdaptedList(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def field(self) -> _typing.Optional[_typing.Sequence[DependentAdaptedListDep]]: ...
    @_abc.abstractmethod
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[_typing.Sequence[DependentAdaptedListDep]]]]: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "apache.thrift.fixtures.types.module.thrift_mutable_types.DependentAdaptedList": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "apache.thrift.fixtures.types.module.thrift_types.DependentAdaptedList": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "apache.thrift.fixtures.types.module.types.DependentAdaptedList": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.DependentAdaptedList": ...  # type: ignore

class DependentAdaptedListDep(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def field(self) -> _typing.Optional[int]: ...
    @_abc.abstractmethod
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int]]]: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "apache.thrift.fixtures.types.module.thrift_mutable_types.DependentAdaptedListDep": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "apache.thrift.fixtures.types.module.thrift_types.DependentAdaptedListDep": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "apache.thrift.fixtures.types.module.types.DependentAdaptedListDep": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.DependentAdaptedListDep": ...  # type: ignore

class AllocatorAware(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def aa_list(self) -> _typing.Sequence[int]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def aa_set(self) -> _typing.AbstractSet[int]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def aa_map(self) -> _typing.Mapping[int, int]: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def aa_string(self) -> str: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def not_a_container(self) -> int: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def aa_unique(self) -> int: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def aa_shared(self) -> int: ...
    @_abc.abstractmethod
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[_typing.Sequence[int], _typing.AbstractSet[int], _typing.Mapping[int, int], str, int, int, int]]]: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "apache.thrift.fixtures.types.module.thrift_mutable_types.AllocatorAware": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "apache.thrift.fixtures.types.module.thrift_types.AllocatorAware": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "apache.thrift.fixtures.types.module.types.AllocatorAware": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.AllocatorAware": ...  # type: ignore

class AllocatorAware2(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def not_a_container(self) -> int: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def box_field(self) -> _typing.Optional[int]: ...
    @_abc.abstractmethod
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, int]]]: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "apache.thrift.fixtures.types.module.thrift_mutable_types.AllocatorAware2": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "apache.thrift.fixtures.types.module.thrift_types.AllocatorAware2": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "apache.thrift.fixtures.types.module.types.AllocatorAware2": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.AllocatorAware2": ...  # type: ignore

class TypedefStruct(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def i32_field(self) -> int: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def IntTypedef_field(self) -> int: ...
    @_fbthrift_property
    @_abc.abstractmethod
    def UintTypedef_field(self) -> int: ...
    @_abc.abstractmethod
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, int, int]]]: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "apache.thrift.fixtures.types.module.thrift_mutable_types.TypedefStruct": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "apache.thrift.fixtures.types.module.thrift_types.TypedefStruct": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "apache.thrift.fixtures.types.module.types.TypedefStruct": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.TypedefStruct": ...  # type: ignore

class StructWithDoubleUnderscores(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def _StructWithDoubleUnderscores__field(self) -> int: ...
    @_abc.abstractmethod
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int]]]: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "apache.thrift.fixtures.types.module.thrift_mutable_types.StructWithDoubleUnderscores": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "apache.thrift.fixtures.types.module.thrift_types.StructWithDoubleUnderscores": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "apache.thrift.fixtures.types.module.types.StructWithDoubleUnderscores": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "module.ttypes.StructWithDoubleUnderscores": ...  # type: ignore

TBinary = bytes
IntTypedef = int
UintTypedef = int
SomeListOfTypeMap_2468 = _typing.Sequence[_typing.Mapping[int, str]]
TBinary_8623 = bytes
i32_9314 = int
list_i32_9187 = _typing.Sequence[int]
map_i32_i32_9565 = _typing.Mapping[int, int]
map_i32_string_1261 = _typing.Mapping[int, str]
set_i32_7070 = _typing.AbstractSet[int]
set_i32_7194 = _typing.AbstractSet[int]
string_5252 = str
