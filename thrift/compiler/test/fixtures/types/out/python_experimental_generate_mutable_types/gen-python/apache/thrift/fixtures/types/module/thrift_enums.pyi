#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations

import thrift.python.types as _fbthrift_python_types
import apache.thrift.metadata.thrift_types as _fbthrift_metadata

class _fbthrift_compatible_with_has_bitwise_ops:
    pass


class has_bitwise_ops(_fbthrift_python_types.Enum, int, _fbthrift_compatible_with_has_bitwise_ops):
    none: has_bitwise_ops = ...
    zero: has_bitwise_ops = ...
    one: has_bitwise_ops = ...
    two: has_bitwise_ops = ...
    three: has_bitwise_ops = ...
    def _to_python(self) -> has_bitwise_ops: ...
    def _to_py3(self) -> "apache.thrift.fixtures.types.module.types.has_bitwise_ops": ...  # type: ignore
    def _to_py_deprecated(self) -> int: ...


def _fbthrift_gen_metadata_enum_has_bitwise_ops(metadata_struct: _fbthrift_metadata.ThriftMetadata) -> _fbthrift_metadata.ThriftMetadata: ...
def gen_metadata_enum_has_bitwise_ops() -> _fbthrift_metadata.ThriftMetadata: ...

class _fbthrift_compatible_with_is_unscoped:
    pass


class is_unscoped(_fbthrift_python_types.Enum, int, _fbthrift_compatible_with_is_unscoped):
    hello: is_unscoped = ...
    world: is_unscoped = ...
    def _to_python(self) -> is_unscoped: ...
    def _to_py3(self) -> "apache.thrift.fixtures.types.module.types.is_unscoped": ...  # type: ignore
    def _to_py_deprecated(self) -> int: ...


def _fbthrift_gen_metadata_enum_is_unscoped(metadata_struct: _fbthrift_metadata.ThriftMetadata) -> _fbthrift_metadata.ThriftMetadata: ...
def gen_metadata_enum_is_unscoped() -> _fbthrift_metadata.ThriftMetadata: ...

class _fbthrift_compatible_with_MyForwardRefEnum:
    pass


class MyForwardRefEnum(_fbthrift_python_types.Enum, int, _fbthrift_compatible_with_MyForwardRefEnum):
    ZERO: MyForwardRefEnum = ...
    NONZERO: MyForwardRefEnum = ...
    def _to_python(self) -> MyForwardRefEnum: ...
    def _to_py3(self) -> "apache.thrift.fixtures.types.module.types.MyForwardRefEnum": ...  # type: ignore
    def _to_py_deprecated(self) -> int: ...


def _fbthrift_gen_metadata_enum_MyForwardRefEnum(metadata_struct: _fbthrift_metadata.ThriftMetadata) -> _fbthrift_metadata.ThriftMetadata: ...
def gen_metadata_enum_MyForwardRefEnum() -> _fbthrift_metadata.ThriftMetadata: ...
