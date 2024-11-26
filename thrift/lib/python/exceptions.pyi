# Copyright (c) Meta Platforms, Inc. and affiliates.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# pyre-strict

import enum
import typing

class Error(Exception):
    def __init__(self, *args: object) -> None: ...

class ApplicationErrorType(enum.Enum):
    UNKNOWN: ApplicationErrorType = ...
    UNKNOWN_METHOD: ApplicationErrorType = ...
    INVALID_MESSAGE_TYPE: ApplicationErrorType = ...
    WRONG_METHOD_NAME: ApplicationErrorType = ...
    BAD_SEQUENCE_ID: ApplicationErrorType = ...
    MISSING_RESULT: ApplicationErrorType = ...
    INTERNAL_ERROR: ApplicationErrorType = ...
    PROTOCOL_ERROR: ApplicationErrorType = ...
    INVALID_TRANSFORM: ApplicationErrorType = ...
    INVALID_PROTOCOL: ApplicationErrorType = ...
    UNSUPPORTED_CLIENT_TYPE: ApplicationErrorType = ...
    LOADSHEDDING: ApplicationErrorType = ...
    TIMEOUT: ApplicationErrorType = ...
    INJECTED_FAILURE: ApplicationErrorType = ...
    @property
    def value(self) -> int: ...

class ApplicationError(Error):
    def __init__(self, type: ApplicationErrorType, message: str) -> None: ...
    type: ApplicationErrorType
    message: str

class LibraryError(Error):
    def __init__(self, *args: object) -> None: ...

class TransportErrorType(enum.Enum):
    UNKNOWN: TransportErrorType = ...
    NOT_OPEN: TransportErrorType = ...
    ALREADY_OPEN: TransportErrorType = ...
    TIMED_OUT: TransportErrorType = ...
    END_OF_FILE: TransportErrorType = ...
    INTERRUPTED: TransportErrorType = ...
    BAD_ARGS: TransportErrorType = ...
    CORRUPTED_DATA: TransportErrorType = ...
    INTERNAL_ERROR: TransportErrorType = ...
    NOT_SUPPORTED: TransportErrorType = ...
    INVALID_STATE: TransportErrorType = ...
    INVALID_FRAME_SIZE: TransportErrorType = ...
    SSL_ERROR: TransportErrorType = ...
    COULD_NOT_BIND: TransportErrorType = ...
    NETWORK_ERROR: TransportErrorType = ...
    @property
    def value(self) -> int: ...

class TransportOptions(enum.Flag):
    CHANNEL_IS_VALID: TransportOptions = ...
    @property
    def value(self) -> int: ...

class TransportError(LibraryError):
    def __init__(
        self,
        type: TransportErrorType,
        message: str,
        errno: int,
        options: typing.Union[int, TransportOptions],
        *args: object,
    ) -> None: ...
    type: TransportErrorType
    options: TransportOptions
    message: str
    errno: int

class ProtocolErrorType(enum.Enum):
    UNKNOWN: ProtocolErrorType = ...
    INVALID_DATA: ProtocolErrorType = ...
    NEGATIVE_SIZE: ProtocolErrorType = ...
    BAD_VERSION: ProtocolErrorType = ...
    NOT_IMPLEMENTED: ProtocolErrorType = ...
    MISSING_REQUIRED_FIELD: ProtocolErrorType = ...
    @property
    def value(self) -> int: ...

class ProtocolError(LibraryError):
    def __init__(self, type: ProtocolErrorType, message: str) -> None: ...
    type: ProtocolErrorType
    message: str

class GeneratedError(Error, typing.Hashable, metaclass=GeneratedErrorMeta):
    def __hash__(self) -> int: ...
    @staticmethod
    def __get_thrift_uri__() -> typing.Optional[str]: ...

class GeneratedErrorMeta(type): ...
