#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations

import thrift.python.types as _fbthrift_python_types
import apache.thrift.metadata.thrift_types as _fbthrift_metadata

class _fbthrift_compatible_with_Result:
    pass


class Result(_fbthrift_python_types.Enum, int, _fbthrift_compatible_with_Result):
    OK: Result = ...
    SO_SO: Result = ...
    GOOD: Result = ...
    def _to_python(self) -> Result: ...
    def _to_py3(self) -> "module.types.Result": ...  # type: ignore
    def _to_py_deprecated(self) -> int: ...


def _fbthrift_gen_metadata_enum_Result(metadata_struct: _fbthrift_metadata.ThriftMetadata) -> _fbthrift_metadata.ThriftMetadata: ...
def gen_metadata_enum_Result() -> _fbthrift_metadata.ThriftMetadata: ...
