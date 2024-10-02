#
# Autogenerated by Thrift for thrift/annotation/cpp.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

# pyre-unsafe

import typing as __T  # sometimes `t` is used as a field name

from thrift import Thrift
from thrift.protocol.TProtocol import TProtocolBase

__property__ = property  # sometimes `property` is used as a field name


UTF8STRINGS: bool


class RefType(int):
    Unique: __T.ClassVar[RefType]
    Shared: __T.ClassVar[RefType]
    SharedMutable: __T.ClassVar[RefType]

    _VALUES_TO_NAMES: __T.ClassVar[__T.Dict[RefType, str]]
    _NAMES_TO_VALUES: __T.ClassVar[__T.Dict[str, RefType]]


class EnumUnderlyingType(int):
    I8: __T.ClassVar[EnumUnderlyingType]
    U8: __T.ClassVar[EnumUnderlyingType]
    I16: __T.ClassVar[EnumUnderlyingType]
    U16: __T.ClassVar[EnumUnderlyingType]
    U32: __T.ClassVar[EnumUnderlyingType]

    _VALUES_TO_NAMES: __T.ClassVar[__T.Dict[EnumUnderlyingType, str]]
    _NAMES_TO_VALUES: __T.ClassVar[__T.Dict[str, EnumUnderlyingType]]


class Name:
    thrift_spec: __T.Tuple[__T.Optional[__T.Tuple[int, int, str, __T.Any, __T.Optional[int], int]]]
    thrift_field_annotations: __T.Dict[int, __T.Dict[str, str]]
    thrift_struct_annotations: __T.Dict[str, str]

    def __init__(
        self,
        value: __T.Optional[str] = ...
    ) -> None:
        ...

    @__property__
    def value(self) -> str: ...
    @value.setter
    def value(self, value: __T.Optional[str]) -> None: ...


    def isUnion(self) -> bool: ...
    def checkRequired(self) -> None: ...
    def read(self, iprot: TProtocolBase) -> None: ...
    def write(self, oprot: TProtocolBase) -> None: ...
    def __eq__(self, other: __T.Any) -> bool: ...
    def __ne__(self, other: __T.Any) -> bool: ...
    def __dir__(self) -> __T.Sequence[str]: ...
    def _to_python(self) -> "facebook.thrift.annotation.cpp.thrift_types.Name": ...   # type: ignore
    def _to_py3(self) -> "facebook.thrift.annotation.cpp.types.Name": ...   # type: ignore
    def _to_py_deprecated(self) -> Name: ...


class Type:
    thrift_spec: __T.Tuple[__T.Optional[__T.Tuple[int, int, str, __T.Any, __T.Optional[int], int]]]
    thrift_field_annotations: __T.Dict[int, __T.Dict[str, str]]
    thrift_struct_annotations: __T.Dict[str, str]

    def __init__(
        self,
        name: __T.Optional[str] = ...,
        template: __T.Optional[str] = ...
    ) -> None:
        ...

    @__property__
    def name(self) -> str: ...
    @name.setter
    def name(self, value: __T.Optional[str]) -> None: ...
    @__property__
    def template(self) -> str: ...
    @template.setter
    def template(self, value: __T.Optional[str]) -> None: ...


    def isUnion(self) -> bool: ...
    def checkRequired(self) -> None: ...
    def read(self, iprot: TProtocolBase) -> None: ...
    def write(self, oprot: TProtocolBase) -> None: ...
    def __eq__(self, other: __T.Any) -> bool: ...
    def __ne__(self, other: __T.Any) -> bool: ...
    def __dir__(self) -> __T.Sequence[str]: ...
    def _to_python(self) -> "facebook.thrift.annotation.cpp.thrift_types.Type": ...   # type: ignore
    def _to_py3(self) -> "facebook.thrift.annotation.cpp.types.Type": ...   # type: ignore
    def _to_py_deprecated(self) -> Type: ...


class Ref:
    thrift_spec: __T.Tuple[__T.Optional[__T.Tuple[int, int, str, __T.Any, __T.Optional[int], int]]]
    thrift_field_annotations: __T.Dict[int, __T.Dict[str, str]]
    thrift_struct_annotations: __T.Dict[str, str]

    def __init__(
        self,
        type: __T.Optional[RefType] = ...
    ) -> None:
        ...

    @__property__
    def type(self) -> RefType: ...
    @type.setter
    def type(self, value: __T.Optional[RefType]) -> None: ...


    def isUnion(self) -> bool: ...
    def checkRequired(self) -> None: ...
    def read(self, iprot: TProtocolBase) -> None: ...
    def write(self, oprot: TProtocolBase) -> None: ...
    def __eq__(self, other: __T.Any) -> bool: ...
    def __ne__(self, other: __T.Any) -> bool: ...
    def __dir__(self) -> __T.Sequence[str]: ...
    def _to_python(self) -> "facebook.thrift.annotation.cpp.thrift_types.Ref": ...   # type: ignore
    def _to_py3(self) -> "facebook.thrift.annotation.cpp.types.Ref": ...   # type: ignore
    def _to_py_deprecated(self) -> Ref: ...


class Lazy:
    thrift_spec: __T.Tuple[__T.Optional[__T.Tuple[int, int, str, __T.Any, __T.Optional[int], int]]]
    thrift_field_annotations: __T.Dict[int, __T.Dict[str, str]]
    thrift_struct_annotations: __T.Dict[str, str]

    def __init__(
        self,
        ref: bool = ...
    ) -> None:
        ...

    @__property__
    def ref(self) -> bool: ...
    @ref.setter
    def ref(self, value: bool) -> None: ...


    def isUnion(self) -> bool: ...
    def checkRequired(self) -> None: ...
    def read(self, iprot: TProtocolBase) -> None: ...
    def write(self, oprot: TProtocolBase) -> None: ...
    def __eq__(self, other: __T.Any) -> bool: ...
    def __ne__(self, other: __T.Any) -> bool: ...
    def __dir__(self) -> __T.Sequence[str]: ...
    def _to_python(self) -> "facebook.thrift.annotation.cpp.thrift_types.Lazy": ...   # type: ignore
    def _to_py3(self) -> "facebook.thrift.annotation.cpp.types.Lazy": ...   # type: ignore
    def _to_py_deprecated(self) -> Lazy: ...


class DisableLazyChecksum:
    thrift_spec: __T.Tuple[__T.Optional[__T.Tuple[int, int, str, __T.Any, __T.Optional[int], int]]]
    thrift_field_annotations: __T.Dict[int, __T.Dict[str, str]]
    thrift_struct_annotations: __T.Dict[str, str]

    def __init__(
        self
    ) -> None:
        ...



    def isUnion(self) -> bool: ...
    def checkRequired(self) -> None: ...
    def read(self, iprot: TProtocolBase) -> None: ...
    def write(self, oprot: TProtocolBase) -> None: ...
    def __eq__(self, other: __T.Any) -> bool: ...
    def __ne__(self, other: __T.Any) -> bool: ...
    def __dir__(self) -> __T.Sequence[str]: ...
    def _to_python(self) -> "facebook.thrift.annotation.cpp.thrift_types.DisableLazyChecksum": ...   # type: ignore
    def _to_py3(self) -> "facebook.thrift.annotation.cpp.types.DisableLazyChecksum": ...   # type: ignore
    def _to_py_deprecated(self) -> DisableLazyChecksum: ...


class Adapter:
    thrift_spec: __T.Tuple[__T.Optional[__T.Tuple[int, int, str, __T.Any, __T.Optional[int], int]]]
    thrift_field_annotations: __T.Dict[int, __T.Dict[str, str]]
    thrift_struct_annotations: __T.Dict[str, str]

    def __init__(
        self,
        name: __T.Optional[str] = ...,
        adaptedType: __T.Optional[str] = ...,
        underlyingName: __T.Optional[str] = ...,
        extraNamespace: __T.Optional[str] = ...,
        moveOnly: __T.Optional[bool] = ...
    ) -> None:
        ...

    @__property__
    def name(self) -> str: ...
    @name.setter
    def name(self, value: __T.Optional[str]) -> None: ...
    @__property__
    def adaptedType(self) -> str: ...
    @adaptedType.setter
    def adaptedType(self, value: __T.Optional[str]) -> None: ...
    @__property__
    def underlyingName(self) -> str: ...
    @underlyingName.setter
    def underlyingName(self, value: __T.Optional[str]) -> None: ...
    @__property__
    def extraNamespace(self) -> str: ...
    @extraNamespace.setter
    def extraNamespace(self, value: __T.Optional[str]) -> None: ...
    @__property__
    def moveOnly(self) -> bool: ...
    @moveOnly.setter
    def moveOnly(self, value: __T.Optional[bool]) -> None: ...


    def isUnion(self) -> bool: ...
    def checkRequired(self) -> None: ...
    def read(self, iprot: TProtocolBase) -> None: ...
    def write(self, oprot: TProtocolBase) -> None: ...
    def __eq__(self, other: __T.Any) -> bool: ...
    def __ne__(self, other: __T.Any) -> bool: ...
    def __dir__(self) -> __T.Sequence[str]: ...
    def _to_python(self) -> "facebook.thrift.annotation.cpp.thrift_types.Adapter": ...   # type: ignore
    def _to_py3(self) -> "facebook.thrift.annotation.cpp.types.Adapter": ...   # type: ignore
    def _to_py_deprecated(self) -> Adapter: ...


class PackIsset:
    thrift_spec: __T.Tuple[__T.Optional[__T.Tuple[int, int, str, __T.Any, __T.Optional[int], int]]]
    thrift_field_annotations: __T.Dict[int, __T.Dict[str, str]]
    thrift_struct_annotations: __T.Dict[str, str]

    def __init__(
        self,
        atomic: bool = ...
    ) -> None:
        ...

    @__property__
    def atomic(self) -> bool: ...
    @atomic.setter
    def atomic(self, value: bool) -> None: ...


    def isUnion(self) -> bool: ...
    def checkRequired(self) -> None: ...
    def read(self, iprot: TProtocolBase) -> None: ...
    def write(self, oprot: TProtocolBase) -> None: ...
    def __eq__(self, other: __T.Any) -> bool: ...
    def __ne__(self, other: __T.Any) -> bool: ...
    def __dir__(self) -> __T.Sequence[str]: ...
    def _to_python(self) -> "facebook.thrift.annotation.cpp.thrift_types.PackIsset": ...   # type: ignore
    def _to_py3(self) -> "facebook.thrift.annotation.cpp.types.PackIsset": ...   # type: ignore
    def _to_py_deprecated(self) -> PackIsset: ...


class MinimizePadding:
    thrift_spec: __T.Tuple[__T.Optional[__T.Tuple[int, int, str, __T.Any, __T.Optional[int], int]]]
    thrift_field_annotations: __T.Dict[int, __T.Dict[str, str]]
    thrift_struct_annotations: __T.Dict[str, str]

    def __init__(
        self
    ) -> None:
        ...



    def isUnion(self) -> bool: ...
    def checkRequired(self) -> None: ...
    def read(self, iprot: TProtocolBase) -> None: ...
    def write(self, oprot: TProtocolBase) -> None: ...
    def __eq__(self, other: __T.Any) -> bool: ...
    def __ne__(self, other: __T.Any) -> bool: ...
    def __dir__(self) -> __T.Sequence[str]: ...
    def _to_python(self) -> "facebook.thrift.annotation.cpp.thrift_types.MinimizePadding": ...   # type: ignore
    def _to_py3(self) -> "facebook.thrift.annotation.cpp.types.MinimizePadding": ...   # type: ignore
    def _to_py_deprecated(self) -> MinimizePadding: ...


class ScopedEnumAsUnionType:
    thrift_spec: __T.Tuple[__T.Optional[__T.Tuple[int, int, str, __T.Any, __T.Optional[int], int]]]
    thrift_field_annotations: __T.Dict[int, __T.Dict[str, str]]
    thrift_struct_annotations: __T.Dict[str, str]

    def __init__(
        self
    ) -> None:
        ...



    def isUnion(self) -> bool: ...
    def checkRequired(self) -> None: ...
    def read(self, iprot: TProtocolBase) -> None: ...
    def write(self, oprot: TProtocolBase) -> None: ...
    def __eq__(self, other: __T.Any) -> bool: ...
    def __ne__(self, other: __T.Any) -> bool: ...
    def __dir__(self) -> __T.Sequence[str]: ...
    def _to_python(self) -> "facebook.thrift.annotation.cpp.thrift_types.ScopedEnumAsUnionType": ...   # type: ignore
    def _to_py3(self) -> "facebook.thrift.annotation.cpp.types.ScopedEnumAsUnionType": ...   # type: ignore
    def _to_py_deprecated(self) -> ScopedEnumAsUnionType: ...


class FieldInterceptor:
    thrift_spec: __T.Tuple[__T.Optional[__T.Tuple[int, int, str, __T.Any, __T.Optional[int], int]]]
    thrift_field_annotations: __T.Dict[int, __T.Dict[str, str]]
    thrift_struct_annotations: __T.Dict[str, str]

    def __init__(
        self,
        name: __T.Optional[str] = ...,
        noinline: __T.Optional[bool] = ...
    ) -> None:
        ...

    @__property__
    def name(self) -> str: ...
    @name.setter
    def name(self, value: __T.Optional[str]) -> None: ...
    @__property__
    def noinline(self) -> bool: ...
    @noinline.setter
    def noinline(self, value: __T.Optional[bool]) -> None: ...


    def isUnion(self) -> bool: ...
    def checkRequired(self) -> None: ...
    def read(self, iprot: TProtocolBase) -> None: ...
    def write(self, oprot: TProtocolBase) -> None: ...
    def __eq__(self, other: __T.Any) -> bool: ...
    def __ne__(self, other: __T.Any) -> bool: ...
    def __dir__(self) -> __T.Sequence[str]: ...
    def _to_python(self) -> "facebook.thrift.annotation.cpp.thrift_types.FieldInterceptor": ...   # type: ignore
    def _to_py3(self) -> "facebook.thrift.annotation.cpp.types.FieldInterceptor": ...   # type: ignore
    def _to_py_deprecated(self) -> FieldInterceptor: ...


class UseOpEncode:
    thrift_spec: __T.Tuple[__T.Optional[__T.Tuple[int, int, str, __T.Any, __T.Optional[int], int]]]
    thrift_field_annotations: __T.Dict[int, __T.Dict[str, str]]
    thrift_struct_annotations: __T.Dict[str, str]

    def __init__(
        self
    ) -> None:
        ...



    def isUnion(self) -> bool: ...
    def checkRequired(self) -> None: ...
    def read(self, iprot: TProtocolBase) -> None: ...
    def write(self, oprot: TProtocolBase) -> None: ...
    def __eq__(self, other: __T.Any) -> bool: ...
    def __ne__(self, other: __T.Any) -> bool: ...
    def __dir__(self) -> __T.Sequence[str]: ...
    def _to_python(self) -> "facebook.thrift.annotation.cpp.thrift_types.UseOpEncode": ...   # type: ignore
    def _to_py3(self) -> "facebook.thrift.annotation.cpp.types.UseOpEncode": ...   # type: ignore
    def _to_py_deprecated(self) -> UseOpEncode: ...


class EnumType:
    thrift_spec: __T.Tuple[__T.Optional[__T.Tuple[int, int, str, __T.Any, __T.Optional[int], int]]]
    thrift_field_annotations: __T.Dict[int, __T.Dict[str, str]]
    thrift_struct_annotations: __T.Dict[str, str]

    def __init__(
        self,
        type: __T.Optional[EnumUnderlyingType] = ...
    ) -> None:
        ...

    @__property__
    def type(self) -> EnumUnderlyingType: ...
    @type.setter
    def type(self, value: __T.Optional[EnumUnderlyingType]) -> None: ...


    def isUnion(self) -> bool: ...
    def checkRequired(self) -> None: ...
    def read(self, iprot: TProtocolBase) -> None: ...
    def write(self, oprot: TProtocolBase) -> None: ...
    def __eq__(self, other: __T.Any) -> bool: ...
    def __ne__(self, other: __T.Any) -> bool: ...
    def __dir__(self) -> __T.Sequence[str]: ...
    def _to_python(self) -> "facebook.thrift.annotation.cpp.thrift_types.EnumType": ...   # type: ignore
    def _to_py3(self) -> "facebook.thrift.annotation.cpp.types.EnumType": ...   # type: ignore
    def _to_py_deprecated(self) -> EnumType: ...


class Frozen2Exclude:
    thrift_spec: __T.Tuple[__T.Optional[__T.Tuple[int, int, str, __T.Any, __T.Optional[int], int]]]
    thrift_field_annotations: __T.Dict[int, __T.Dict[str, str]]
    thrift_struct_annotations: __T.Dict[str, str]

    def __init__(
        self
    ) -> None:
        ...



    def isUnion(self) -> bool: ...
    def checkRequired(self) -> None: ...
    def read(self, iprot: TProtocolBase) -> None: ...
    def write(self, oprot: TProtocolBase) -> None: ...
    def __eq__(self, other: __T.Any) -> bool: ...
    def __ne__(self, other: __T.Any) -> bool: ...
    def __dir__(self) -> __T.Sequence[str]: ...
    def _to_python(self) -> "facebook.thrift.annotation.cpp.thrift_types.Frozen2Exclude": ...   # type: ignore
    def _to_py3(self) -> "facebook.thrift.annotation.cpp.types.Frozen2Exclude": ...   # type: ignore
    def _to_py_deprecated(self) -> Frozen2Exclude: ...


class Frozen2RequiresCompleteContainerParams:
    thrift_spec: __T.Tuple[__T.Optional[__T.Tuple[int, int, str, __T.Any, __T.Optional[int], int]]]
    thrift_field_annotations: __T.Dict[int, __T.Dict[str, str]]
    thrift_struct_annotations: __T.Dict[str, str]

    def __init__(
        self
    ) -> None:
        ...



    def isUnion(self) -> bool: ...
    def checkRequired(self) -> None: ...
    def read(self, iprot: TProtocolBase) -> None: ...
    def write(self, oprot: TProtocolBase) -> None: ...
    def __eq__(self, other: __T.Any) -> bool: ...
    def __ne__(self, other: __T.Any) -> bool: ...
    def __dir__(self) -> __T.Sequence[str]: ...
    def _to_python(self) -> "facebook.thrift.annotation.cpp.thrift_types.Frozen2RequiresCompleteContainerParams": ...   # type: ignore
    def _to_py3(self) -> "facebook.thrift.annotation.cpp.types.Frozen2RequiresCompleteContainerParams": ...   # type: ignore
    def _to_py_deprecated(self) -> Frozen2RequiresCompleteContainerParams: ...


class ProcessInEbThreadUnsafe:
    thrift_spec: __T.Tuple[__T.Optional[__T.Tuple[int, int, str, __T.Any, __T.Optional[int], int]]]
    thrift_field_annotations: __T.Dict[int, __T.Dict[str, str]]
    thrift_struct_annotations: __T.Dict[str, str]

    def __init__(
        self
    ) -> None:
        ...



    def isUnion(self) -> bool: ...
    def checkRequired(self) -> None: ...
    def read(self, iprot: TProtocolBase) -> None: ...
    def write(self, oprot: TProtocolBase) -> None: ...
    def __eq__(self, other: __T.Any) -> bool: ...
    def __ne__(self, other: __T.Any) -> bool: ...
    def __dir__(self) -> __T.Sequence[str]: ...
    def _to_python(self) -> "facebook.thrift.annotation.cpp.thrift_types.ProcessInEbThreadUnsafe": ...   # type: ignore
    def _to_py3(self) -> "facebook.thrift.annotation.cpp.types.ProcessInEbThreadUnsafe": ...   # type: ignore
    def _to_py_deprecated(self) -> ProcessInEbThreadUnsafe: ...


class RuntimeAnnotation:
    thrift_spec: __T.Tuple[__T.Optional[__T.Tuple[int, int, str, __T.Any, __T.Optional[int], int]]]
    thrift_field_annotations: __T.Dict[int, __T.Dict[str, str]]
    thrift_struct_annotations: __T.Dict[str, str]

    def __init__(
        self
    ) -> None:
        ...



    def isUnion(self) -> bool: ...
    def checkRequired(self) -> None: ...
    def read(self, iprot: TProtocolBase) -> None: ...
    def write(self, oprot: TProtocolBase) -> None: ...
    def __eq__(self, other: __T.Any) -> bool: ...
    def __ne__(self, other: __T.Any) -> bool: ...
    def __dir__(self) -> __T.Sequence[str]: ...
    def _to_python(self) -> "facebook.thrift.annotation.cpp.thrift_types.RuntimeAnnotation": ...   # type: ignore
    def _to_py3(self) -> "facebook.thrift.annotation.cpp.types.RuntimeAnnotation": ...   # type: ignore
    def _to_py_deprecated(self) -> RuntimeAnnotation: ...


class UseCursorSerialization:
    thrift_spec: __T.Tuple[__T.Optional[__T.Tuple[int, int, str, __T.Any, __T.Optional[int], int]]]
    thrift_field_annotations: __T.Dict[int, __T.Dict[str, str]]
    thrift_struct_annotations: __T.Dict[str, str]

    def __init__(
        self
    ) -> None:
        ...



    def isUnion(self) -> bool: ...
    def checkRequired(self) -> None: ...
    def read(self, iprot: TProtocolBase) -> None: ...
    def write(self, oprot: TProtocolBase) -> None: ...
    def __eq__(self, other: __T.Any) -> bool: ...
    def __ne__(self, other: __T.Any) -> bool: ...
    def __dir__(self) -> __T.Sequence[str]: ...
    def _to_python(self) -> "facebook.thrift.annotation.cpp.thrift_types.UseCursorSerialization": ...   # type: ignore
    def _to_py3(self) -> "facebook.thrift.annotation.cpp.types.UseCursorSerialization": ...   # type: ignore
    def _to_py_deprecated(self) -> UseCursorSerialization: ...


class GenerateDeprecatedHeaderClientMethods:
    thrift_spec: __T.Tuple[__T.Optional[__T.Tuple[int, int, str, __T.Any, __T.Optional[int], int]]]
    thrift_field_annotations: __T.Dict[int, __T.Dict[str, str]]
    thrift_struct_annotations: __T.Dict[str, str]

    def __init__(
        self
    ) -> None:
        ...



    def isUnion(self) -> bool: ...
    def checkRequired(self) -> None: ...
    def read(self, iprot: TProtocolBase) -> None: ...
    def write(self, oprot: TProtocolBase) -> None: ...
    def __eq__(self, other: __T.Any) -> bool: ...
    def __ne__(self, other: __T.Any) -> bool: ...
    def __dir__(self) -> __T.Sequence[str]: ...
    def _to_python(self) -> "facebook.thrift.annotation.cpp.thrift_types.GenerateDeprecatedHeaderClientMethods": ...   # type: ignore
    def _to_py3(self) -> "facebook.thrift.annotation.cpp.types.GenerateDeprecatedHeaderClientMethods": ...   # type: ignore
    def _to_py_deprecated(self) -> GenerateDeprecatedHeaderClientMethods: ...


