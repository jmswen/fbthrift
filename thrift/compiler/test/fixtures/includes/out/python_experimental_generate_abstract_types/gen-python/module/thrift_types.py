#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations

import folly.iobuf as _fbthrift_iobuf
import module.thrift_abstract_types as _fbthrift_abstract_types
import thrift.python.types as _fbthrift_python_types
import thrift.python.exceptions as _fbthrift_python_exceptions


import includes.thrift_types
import includes.thrift_types as _fbthrift__includes__thrift_types


@_fbthrift_abstract_types.MyStruct.register
class MyStruct(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        _fbthrift_python_types.FieldInfo(
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "MyIncludedField",  # name
            "MyIncludedField",  # python name (from @python.Name annotation)
            lambda: _fbthrift_python_types.StructTypeInfo(_fbthrift__includes__thrift_types.Included),  # typeinfo
            lambda: includes.thrift_types.Included(MyIntField=2, MyTransitiveField=transitive.thrift_types.Foo(a=2)),  # default value
            None,  # adapter info
            False, # field type is primitive
            11, # IDL type (see BaseTypeEnum)
        ),
        _fbthrift_python_types.FieldInfo(
            2,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "MyOtherIncludedField",  # name
            "MyOtherIncludedField",  # python name (from @python.Name annotation)
            lambda: _fbthrift_python_types.StructTypeInfo(_fbthrift__includes__thrift_types.Included),  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
            11, # IDL type (see BaseTypeEnum)
        ),
        _fbthrift_python_types.FieldInfo(
            3,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "MyIncludedInt",  # name
            "MyIncludedInt",  # python name (from @python.Name annotation)
            _fbthrift_python_types.typeinfo_i64,  # typeinfo
            42,  # default value
            None,  # adapter info
            True, # field type is primitive
            5, # IDL type (see BaseTypeEnum)
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.MyStruct"

    @staticmethod
    def __get_thrift_uri__():
        return None

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_MyStruct()

    def _to_python(self):
        return self

    def _to_mutable_python(self):
        import thrift.python.mutable_converter
        import importlib
        mutable_types = importlib.import_module("module.thrift_mutable_types")
        return thrift.python.mutable_converter.to_mutable_python_struct_or_union(mutable_types.MyStruct, self)

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("module.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.MyStruct, self)

    def _to_py_deprecated(self):
        import importlib
        import thrift.util.converter
        try:
            py_deprecated_types = importlib.import_module("module.ttypes")
            return thrift.util.converter.to_py_struct(py_deprecated_types.MyStruct, self)
        except ModuleNotFoundError:
            py_asyncio_types = importlib.import_module("module.ttypes")
            return thrift.util.converter.to_py_struct(py_asyncio_types.MyStruct, self)

# This unfortunately has to be down here to prevent circular imports
import module.thrift_metadata


_fbthrift_all_enums = [
]

def _fbthrift_metadata__struct_MyStruct():
    return module.thrift_metadata.gen_metadata_struct_MyStruct()


_fbthrift_all_structs = [
    MyStruct,
]
_fbthrift_python_types.fill_specs(*_fbthrift_all_structs)
