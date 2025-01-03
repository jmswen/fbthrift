

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

class C(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def i(self) -> int: ...
    @_abc.abstractmethod
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int]]]: ...
    @_abc.abstractmethod
    def _to_mutable_python(self) -> "c.thrift_mutable_types.C": ...  # type: ignore
    @_abc.abstractmethod
    def _to_python(self) -> "c.thrift_types.C": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "c.types.C": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "c.ttypes.C": ...  # type: ignore
_fbthrift_C = C
class E(_fbthrift_python_abstract_types.AbstractGeneratedError):
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[None]]]: ...
    def _to_mutable_python(self) -> "c.thrift_mutable_types.E": ...  # type: ignore
    def _to_python(self) -> "c.thrift_types.E": ...  # type: ignore
    def _to_py3(self) -> "c.types.E": ...  # type: ignore
    def _to_py_deprecated(self) -> "c.ttypes.E": ...  # type: ignore
_fbthrift_E = E
