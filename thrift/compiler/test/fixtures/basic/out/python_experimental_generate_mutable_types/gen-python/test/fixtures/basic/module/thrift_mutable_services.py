#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations

from abc import ABCMeta
import typing as _typing

import folly.iobuf as _fbthrift_iobuf

import apache.thrift.metadata.thrift_types as _fbthrift_metadata
from thrift.python.mutable_serializer import serialize_iobuf, deserialize, Protocol
from thrift.python.server import ServiceInterface, RpcKind, PythonUserException

import test.fixtures.basic.module.thrift_mutable_types as _fbthrift__test__fixtures__basic__module__thrift_mutable_types
import test.fixtures.basic.module.thrift_metadata

class FooServiceInterface(
    ServiceInterface,
    metaclass=ABCMeta
):

    @staticmethod
    def service_name() -> bytes:
        return b"FooService"

    def getFunctionTable(self) -> _typing.Mapping[bytes, _typing.Callable[..., object]]:
        functionTable = {
            b"simple_rpc": (RpcKind.SINGLE_REQUEST_SINGLE_RESPONSE, self._fbthrift__handler_simple_rpc),
        }
        return {**super().getFunctionTable(), **functionTable}

    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.FooService"

    @staticmethod
    def __get_metadata__() -> _fbthrift_metadata.ThriftMetadata:
        return test.fixtures.basic.module.thrift_metadata.gen_metadata_service_FooService()

    @staticmethod
    def __get_metadata_service_response__() -> _fbthrift_metadata.ThriftServiceMetadataResponse:
        return test.fixtures.basic.module.thrift_metadata._fbthrift_metadata_service_response_FooService()



    async def simple_rpc(
            self
        ) -> None:
        raise NotImplementedError("async def simple_rpc is not implemented")

    async def _fbthrift__handler_simple_rpc(self, args: _fbthrift_iobuf.IOBuf, protocol: Protocol) -> _fbthrift_iobuf.IOBuf:
        args_struct = deserialize(_fbthrift__test__fixtures__basic__module__thrift_mutable_types._fbthrift_FooService_simple_rpc_args, args, protocol)
        value = await self.simple_rpc()
        return_struct = _fbthrift__test__fixtures__basic__module__thrift_mutable_types._fbthrift_FooService_simple_rpc_result()
        return serialize_iobuf(return_struct, protocol)

class FB303ServiceInterface(
    ServiceInterface,
    metaclass=ABCMeta
):

    @staticmethod
    def service_name() -> bytes:
        return b"FB303Service"

    def getFunctionTable(self) -> _typing.Mapping[bytes, _typing.Callable[..., object]]:
        functionTable = {
            b"simple_rpc": (RpcKind.SINGLE_REQUEST_SINGLE_RESPONSE, self._fbthrift__handler_simple_rpc),
        }
        return {**super().getFunctionTable(), **functionTable}

    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.FB303Service"

    @staticmethod
    def __get_metadata__() -> _fbthrift_metadata.ThriftMetadata:
        return test.fixtures.basic.module.thrift_metadata.gen_metadata_service_FB303Service()

    @staticmethod
    def __get_metadata_service_response__() -> _fbthrift_metadata.ThriftServiceMetadataResponse:
        return test.fixtures.basic.module.thrift_metadata._fbthrift_metadata_service_response_FB303Service()



    async def simple_rpc(
            self,
            int_parameter: int
        ) -> _fbthrift__test__fixtures__basic__module__thrift_mutable_types.ReservedKeyword:
        raise NotImplementedError("async def simple_rpc is not implemented")

    async def _fbthrift__handler_simple_rpc(self, args: _fbthrift_iobuf.IOBuf, protocol: Protocol) -> _fbthrift_iobuf.IOBuf:
        args_struct = deserialize(_fbthrift__test__fixtures__basic__module__thrift_mutable_types._fbthrift_FB303Service_simple_rpc_args, args, protocol)
        value = await self.simple_rpc(args_struct.int_parameter,)
        return_struct = _fbthrift__test__fixtures__basic__module__thrift_mutable_types._fbthrift_FB303Service_simple_rpc_result(success=value)
        return serialize_iobuf(return_struct, protocol)

class MyServiceInterface(
    ServiceInterface,
    metaclass=ABCMeta
):

    @staticmethod
    def service_name() -> bytes:
        return b"MyService"

    def getFunctionTable(self) -> _typing.Mapping[bytes, _typing.Callable[..., object]]:
        functionTable = {
            b"ping": (RpcKind.SINGLE_REQUEST_SINGLE_RESPONSE, self._fbthrift__handler_ping),
            b"getRandomData": (RpcKind.SINGLE_REQUEST_SINGLE_RESPONSE, self._fbthrift__handler_getRandomData),
            b"sink": (RpcKind.SINGLE_REQUEST_SINGLE_RESPONSE, self._fbthrift__handler_sink),
            b"putDataById": (RpcKind.SINGLE_REQUEST_SINGLE_RESPONSE, self._fbthrift__handler_putDataById),
            b"hasDataById": (RpcKind.SINGLE_REQUEST_SINGLE_RESPONSE, self._fbthrift__handler_hasDataById),
            b"getDataById": (RpcKind.SINGLE_REQUEST_SINGLE_RESPONSE, self._fbthrift__handler_getDataById),
            b"deleteDataById": (RpcKind.SINGLE_REQUEST_SINGLE_RESPONSE, self._fbthrift__handler_deleteDataById),
            b"lobDataById": (RpcKind.SINGLE_REQUEST_NO_RESPONSE, self._fbthrift__handler_lobDataById),
            b"invalid_return_for_hack": (RpcKind.SINGLE_REQUEST_SINGLE_RESPONSE, self._fbthrift__handler_invalid_return_for_hack),
            b"rpc_skipped_codegen": (RpcKind.SINGLE_REQUEST_SINGLE_RESPONSE, self._fbthrift__handler_rpc_skipped_codegen),
        }
        return {**super().getFunctionTable(), **functionTable}

    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.MyService"

    @staticmethod
    def __get_metadata__() -> _fbthrift_metadata.ThriftMetadata:
        return test.fixtures.basic.module.thrift_metadata.gen_metadata_service_MyService()

    @staticmethod
    def __get_metadata_service_response__() -> _fbthrift_metadata.ThriftServiceMetadataResponse:
        return test.fixtures.basic.module.thrift_metadata._fbthrift_metadata_service_response_MyService()



    async def ping(
            self
        ) -> None:
        raise NotImplementedError("async def ping is not implemented")

    async def _fbthrift__handler_ping(self, args: _fbthrift_iobuf.IOBuf, protocol: Protocol) -> _fbthrift_iobuf.IOBuf:
        args_struct = deserialize(_fbthrift__test__fixtures__basic__module__thrift_mutable_types._fbthrift_MyService_ping_args, args, protocol)
        value = await self.ping()
        return_struct = _fbthrift__test__fixtures__basic__module__thrift_mutable_types._fbthrift_MyService_ping_result()
        return serialize_iobuf(return_struct, protocol)


    async def getRandomData(
            self
        ) -> str:
        raise NotImplementedError("async def getRandomData is not implemented")

    async def _fbthrift__handler_getRandomData(self, args: _fbthrift_iobuf.IOBuf, protocol: Protocol) -> _fbthrift_iobuf.IOBuf:
        args_struct = deserialize(_fbthrift__test__fixtures__basic__module__thrift_mutable_types._fbthrift_MyService_getRandomData_args, args, protocol)
        value = await self.getRandomData()
        return_struct = _fbthrift__test__fixtures__basic__module__thrift_mutable_types._fbthrift_MyService_getRandomData_result(success=value)
        return serialize_iobuf(return_struct, protocol)


    async def sink(
            self,
            sink: int
        ) -> None:
        raise NotImplementedError("async def sink is not implemented")

    async def _fbthrift__handler_sink(self, args: _fbthrift_iobuf.IOBuf, protocol: Protocol) -> _fbthrift_iobuf.IOBuf:
        args_struct = deserialize(_fbthrift__test__fixtures__basic__module__thrift_mutable_types._fbthrift_MyService_sink_args, args, protocol)
        value = await self.sink(args_struct.sink,)
        return_struct = _fbthrift__test__fixtures__basic__module__thrift_mutable_types._fbthrift_MyService_sink_result()
        return serialize_iobuf(return_struct, protocol)


    async def putDataById(
            self,
            id: int,
            data: str
        ) -> None:
        raise NotImplementedError("async def putDataById is not implemented")

    async def _fbthrift__handler_putDataById(self, args: _fbthrift_iobuf.IOBuf, protocol: Protocol) -> _fbthrift_iobuf.IOBuf:
        args_struct = deserialize(_fbthrift__test__fixtures__basic__module__thrift_mutable_types._fbthrift_MyService_putDataById_args, args, protocol)
        value = await self.putDataById(args_struct.id,args_struct.data,)
        return_struct = _fbthrift__test__fixtures__basic__module__thrift_mutable_types._fbthrift_MyService_putDataById_result()
        return serialize_iobuf(return_struct, protocol)


    async def hasDataById(
            self,
            id: int
        ) -> bool:
        raise NotImplementedError("async def hasDataById is not implemented")

    async def _fbthrift__handler_hasDataById(self, args: _fbthrift_iobuf.IOBuf, protocol: Protocol) -> _fbthrift_iobuf.IOBuf:
        args_struct = deserialize(_fbthrift__test__fixtures__basic__module__thrift_mutable_types._fbthrift_MyService_hasDataById_args, args, protocol)
        value = await self.hasDataById(args_struct.id,)
        return_struct = _fbthrift__test__fixtures__basic__module__thrift_mutable_types._fbthrift_MyService_hasDataById_result(success=value)
        return serialize_iobuf(return_struct, protocol)


    async def getDataById(
            self,
            id: int
        ) -> str:
        raise NotImplementedError("async def getDataById is not implemented")

    async def _fbthrift__handler_getDataById(self, args: _fbthrift_iobuf.IOBuf, protocol: Protocol) -> _fbthrift_iobuf.IOBuf:
        args_struct = deserialize(_fbthrift__test__fixtures__basic__module__thrift_mutable_types._fbthrift_MyService_getDataById_args, args, protocol)
        value = await self.getDataById(args_struct.id,)
        return_struct = _fbthrift__test__fixtures__basic__module__thrift_mutable_types._fbthrift_MyService_getDataById_result(success=value)
        return serialize_iobuf(return_struct, protocol)


    async def deleteDataById(
            self,
            id: int
        ) -> None:
        raise NotImplementedError("async def deleteDataById is not implemented")

    async def _fbthrift__handler_deleteDataById(self, args: _fbthrift_iobuf.IOBuf, protocol: Protocol) -> _fbthrift_iobuf.IOBuf:
        args_struct = deserialize(_fbthrift__test__fixtures__basic__module__thrift_mutable_types._fbthrift_MyService_deleteDataById_args, args, protocol)
        value = await self.deleteDataById(args_struct.id,)
        return_struct = _fbthrift__test__fixtures__basic__module__thrift_mutable_types._fbthrift_MyService_deleteDataById_result()
        return serialize_iobuf(return_struct, protocol)


    async def lobDataById(
            self,
            id: int,
            data: str
        ) -> None:
        raise NotImplementedError("async def lobDataById is not implemented")

    async def _fbthrift__handler_lobDataById(self, args: _fbthrift_iobuf.IOBuf, protocol: Protocol) -> None:
        args_struct = deserialize(_fbthrift__test__fixtures__basic__module__thrift_mutable_types._fbthrift_MyService_lobDataById_args, args, protocol)
        value = await self.lobDataById(args_struct.id,args_struct.data,)


    async def invalid_return_for_hack(
            self
        ) -> _fbthrift_python_mutable_containers.MutableSet[float]:
        raise NotImplementedError("async def invalid_return_for_hack is not implemented")

    async def _fbthrift__handler_invalid_return_for_hack(self, args: _fbthrift_iobuf.IOBuf, protocol: Protocol) -> _fbthrift_iobuf.IOBuf:
        args_struct = deserialize(_fbthrift__test__fixtures__basic__module__thrift_mutable_types._fbthrift_MyService_invalid_return_for_hack_args, args, protocol)
        value = await self.invalid_return_for_hack()
        return_struct = _fbthrift__test__fixtures__basic__module__thrift_mutable_types._fbthrift_MyService_invalid_return_for_hack_result(success=value)
        return serialize_iobuf(return_struct, protocol)


    async def rpc_skipped_codegen(
            self
        ) -> None:
        raise NotImplementedError("async def rpc_skipped_codegen is not implemented")

    async def _fbthrift__handler_rpc_skipped_codegen(self, args: _fbthrift_iobuf.IOBuf, protocol: Protocol) -> _fbthrift_iobuf.IOBuf:
        args_struct = deserialize(_fbthrift__test__fixtures__basic__module__thrift_mutable_types._fbthrift_MyService_rpc_skipped_codegen_args, args, protocol)
        value = await self.rpc_skipped_codegen()
        return_struct = _fbthrift__test__fixtures__basic__module__thrift_mutable_types._fbthrift_MyService_rpc_skipped_codegen_result()
        return serialize_iobuf(return_struct, protocol)

class DbMixedStackArgumentsInterface(
    ServiceInterface,
    metaclass=ABCMeta
):

    @staticmethod
    def service_name() -> bytes:
        return b"DbMixedStackArguments"

    def getFunctionTable(self) -> _typing.Mapping[bytes, _typing.Callable[..., object]]:
        functionTable = {
            b"getDataByKey0": (RpcKind.SINGLE_REQUEST_SINGLE_RESPONSE, self._fbthrift__handler_getDataByKey0),
            b"getDataByKey1": (RpcKind.SINGLE_REQUEST_SINGLE_RESPONSE, self._fbthrift__handler_getDataByKey1),
        }
        return {**super().getFunctionTable(), **functionTable}

    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.DbMixedStackArguments"

    @staticmethod
    def __get_metadata__() -> _fbthrift_metadata.ThriftMetadata:
        return test.fixtures.basic.module.thrift_metadata.gen_metadata_service_DbMixedStackArguments()

    @staticmethod
    def __get_metadata_service_response__() -> _fbthrift_metadata.ThriftServiceMetadataResponse:
        return test.fixtures.basic.module.thrift_metadata._fbthrift_metadata_service_response_DbMixedStackArguments()



    async def getDataByKey0(
            self,
            key: str
        ) -> bytes:
        raise NotImplementedError("async def getDataByKey0 is not implemented")

    async def _fbthrift__handler_getDataByKey0(self, args: _fbthrift_iobuf.IOBuf, protocol: Protocol) -> _fbthrift_iobuf.IOBuf:
        args_struct = deserialize(_fbthrift__test__fixtures__basic__module__thrift_mutable_types._fbthrift_DbMixedStackArguments_getDataByKey0_args, args, protocol)
        value = await self.getDataByKey0(args_struct.key,)
        return_struct = _fbthrift__test__fixtures__basic__module__thrift_mutable_types._fbthrift_DbMixedStackArguments_getDataByKey0_result(success=value)
        return serialize_iobuf(return_struct, protocol)


    async def getDataByKey1(
            self,
            key: str
        ) -> bytes:
        raise NotImplementedError("async def getDataByKey1 is not implemented")

    async def _fbthrift__handler_getDataByKey1(self, args: _fbthrift_iobuf.IOBuf, protocol: Protocol) -> _fbthrift_iobuf.IOBuf:
        args_struct = deserialize(_fbthrift__test__fixtures__basic__module__thrift_mutable_types._fbthrift_DbMixedStackArguments_getDataByKey1_args, args, protocol)
        value = await self.getDataByKey1(args_struct.key,)
        return_struct = _fbthrift__test__fixtures__basic__module__thrift_mutable_types._fbthrift_DbMixedStackArguments_getDataByKey1_result(success=value)
        return serialize_iobuf(return_struct, protocol)

