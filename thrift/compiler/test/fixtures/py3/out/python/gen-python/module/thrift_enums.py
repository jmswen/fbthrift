#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations

import __static__

import apache.thrift.metadata.thrift_types as _fbthrift_metadata
import fbcode.thrift.python.types as _fbthrift_python_types

class _fbthrift_compatible_with_AnEnum:
    pass


class AnEnum(_fbthrift_python_types.Enum, int, _fbthrift_compatible_with_AnEnum):
    NOTSET = 0
    ONE = 1
    TWO = 2
    THREE = 3
    FOUR = 4
    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.AnEnum"

    @staticmethod
    def __get_thrift_uri__():
        return None

    @staticmethod
    def __get_metadata__():
        return gen_metadata_enum_AnEnum()

    def _to_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("module.types")
        return py3_types.AnEnum(self.value)

    def _to_py_deprecated(self):
        return self.value

class _fbthrift_compatible_with_AnEnumRenamed:
    pass


class AnEnumRenamed(_fbthrift_python_types.Enum, int, _fbthrift_compatible_with_AnEnumRenamed):
    name_ = 0
    value_ = 1
    renamed_ = 2
    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.AnEnumRenamed"

    @staticmethod
    def __get_thrift_uri__():
        return None

    @staticmethod
    def __get_metadata__():
        return gen_metadata_enum_AnEnumRenamed()

    def _to_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("module.types")
        return py3_types.AnEnumRenamed(self.value)

    def _to_py_deprecated(self):
        return self.value

class _fbthrift_compatible_with_Flags:
    pass


class Flags(_fbthrift_python_types.Flag, _fbthrift_compatible_with_Flags):
    flag_A = 1
    flag_B = 2
    flag_C = 4
    flag_D = 8
    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.Flags"

    @staticmethod
    def __get_thrift_uri__():
        return None

    @staticmethod
    def __get_metadata__():
        return gen_metadata_enum_Flags()

    def _to_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("module.types")
        return py3_types.Flags(self.value)

    def _to_py_deprecated(self):
        return self.value

def _fbthrift_gen_metadata_enum_AnEnum(metadata_struct: _fbthrift_metadata.ThriftMetadata) -> _fbthrift_metadata.ThriftMetadata:
    qualified_name = "module.AnEnum"

    if qualified_name in metadata_struct.enums:
        return metadata_struct
    elements = {
        0: "None",
        1: "ONE",
        2: "TWO",
        3: "THREE",
        4: "FOUR",
    }
    structured_annotations = [
    ]
    enum_dict = dict(metadata_struct.enums)
    enum_dict[qualified_name] = _fbthrift_metadata.ThriftEnum(name=qualified_name, elements=elements, structured_annotations=structured_annotations)
    new_struct = metadata_struct(enums=enum_dict)

    return new_struct

def gen_metadata_enum_AnEnum() -> _fbthrift_metadata.ThriftMetadata:
    return _fbthrift_gen_metadata_enum_AnEnum(
        _fbthrift_metadata.ThriftMetadata(structs={}, enums={}, exceptions={}, services={})
    )

def _fbthrift_gen_metadata_enum_AnEnumRenamed(metadata_struct: _fbthrift_metadata.ThriftMetadata) -> _fbthrift_metadata.ThriftMetadata:
    qualified_name = "module.AnEnumRenamed"

    if qualified_name in metadata_struct.enums:
        return metadata_struct
    elements = {
        0: "name",
        1: "value",
        2: "normal",
    }
    structured_annotations = [
    ]
    enum_dict = dict(metadata_struct.enums)
    enum_dict[qualified_name] = _fbthrift_metadata.ThriftEnum(name=qualified_name, elements=elements, structured_annotations=structured_annotations)
    new_struct = metadata_struct(enums=enum_dict)

    return new_struct

def gen_metadata_enum_AnEnumRenamed() -> _fbthrift_metadata.ThriftMetadata:
    return _fbthrift_gen_metadata_enum_AnEnumRenamed(
        _fbthrift_metadata.ThriftMetadata(structs={}, enums={}, exceptions={}, services={})
    )

def _fbthrift_gen_metadata_enum_Flags(metadata_struct: _fbthrift_metadata.ThriftMetadata) -> _fbthrift_metadata.ThriftMetadata:
    qualified_name = "module.Flags"

    if qualified_name in metadata_struct.enums:
        return metadata_struct
    elements = {
        1: "flag_A",
        2: "flag_B",
        4: "flag_C",
        8: "flag_D",
    }
    structured_annotations = [
        _fbthrift_metadata.ThriftConstStruct(type=_fbthrift_metadata.ThriftStructType(name="python.Flags"), fields= {  }),
    ]
    enum_dict = dict(metadata_struct.enums)
    enum_dict[qualified_name] = _fbthrift_metadata.ThriftEnum(name=qualified_name, elements=elements, structured_annotations=structured_annotations)
    new_struct = metadata_struct(enums=enum_dict)

    return new_struct

def gen_metadata_enum_Flags() -> _fbthrift_metadata.ThriftMetadata:
    return _fbthrift_gen_metadata_enum_Flags(
        _fbthrift_metadata.ThriftMetadata(structs={}, enums={}, exceptions={}, services={})
    )

