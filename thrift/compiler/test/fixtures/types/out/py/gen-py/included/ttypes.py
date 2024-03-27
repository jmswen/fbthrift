#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from __future__ import absolute_import
import sys
from thrift.util.Recursive import fix_spec
from thrift.Thrift import TType, TMessageType, TPriority, TRequestContext, TProcessorEventHandler, TServerInterface, TProcessor, TException, TApplicationException, UnimplementedTypedef
from thrift.protocol.TProtocol import TProtocolException



import pprint
import warnings
from thrift import Thrift
from thrift.transport import TTransport
from thrift.protocol import TBinaryProtocol
from thrift.protocol import TCompactProtocol
from thrift.protocol import THeaderProtocol
fastproto = None
try:
  from thrift.protocol import fastproto
except ImportError:
  pass

def __EXPAND_THRIFT_SPEC(spec):
    next_id = 0
    for item in spec:
        if next_id >= 0 and item[0] < 0:
            next_id = item[0]
        if item[0] != next_id:
            for _ in range(next_id, item[0]):
                yield None
        yield item
        next_id = item[0] + 1

class ThriftEnumWrapper(int):
  def __new__(cls, enum_class, value):
    return super().__new__(cls, value)
  def __init__(self, enum_class, value):    self.enum_class = enum_class
  def __repr__(self):
    return self.enum_class.__name__ + '.' + self.enum_class._VALUES_TO_NAMES[self]

all_structs = []
UTF8STRINGS = bool(0) or sys.version_info.major >= 3

__all__ = ['UTF8STRINGS', 'SomeMap', 'SomeListOfTypeMap']

SomeMap = UnimplementedTypedef()
SomeListOfTypeMap = UnimplementedTypedef()
fix_spec(all_structs)
del all_structs
