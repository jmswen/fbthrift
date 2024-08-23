/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.complex_union;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.codec.ThriftField.Recursiveness;
import java.util.*;
import org.apache.thrift.*;
import org.apache.thrift.transport.*;
import org.apache.thrift.protocol.*;

import static com.google.common.base.MoreObjects.toStringHelper;

@SwiftGenerated
@ThriftUnion("DataUnion")
public final class DataUnion implements com.facebook.thrift.payload.ThriftSerializable {
    
    private static final boolean allowNullFieldValues =
        System.getProperty("thrift.union.allow-null-field-values", "false").equalsIgnoreCase("true");

    private static final TStruct STRUCT_DESC = new TStruct("DataUnion");
    private static final Map<String, Integer> NAMES_TO_IDS = new HashMap();
    public static final Map<String, Integer> THRIFT_NAMES_TO_IDS = new HashMap();
    private static final Map<Integer, TField> FIELD_METADATA = new HashMap<>();
    private static final DataUnion _DEFAULT = new DataUnion();

    public static final int _BINARYDATA = 1;
    private static final TField BINARY_DATA_FIELD_DESC = new TField("binaryData", TType.STRING, (short)1);
    public static final int _STRINGDATA = 2;
    private static final TField STRING_DATA_FIELD_DESC = new TField("stringData", TType.STRING, (short)2);

    static {
      NAMES_TO_IDS.put("binaryData", 1);
      THRIFT_NAMES_TO_IDS.put("binaryData", 1);
      FIELD_METADATA.put(1, BINARY_DATA_FIELD_DESC);
      NAMES_TO_IDS.put("stringData", 2);
      THRIFT_NAMES_TO_IDS.put("stringData", 2);
      FIELD_METADATA.put(2, STRING_DATA_FIELD_DESC);
    }

    private java.lang.Object value;
    private short id;

    public static DataUnion from(int _id, java.lang.Object _field) {
        return from((short) _id, _field);
    }

    public static DataUnion from(short _id, java.lang.Object _field) {
        java.util.Objects.requireNonNull(_field);
        if (!FIELD_METADATA.containsKey(Integer.valueOf(_id))) {
            throw new java.lang.IllegalArgumentException("unknown field " + _id);
        }

        DataUnion _u = new  DataUnion();

        try {
            switch(_id) {
                case 1:
                    _u.id = _id;
                    _u.value = (byte[]) _field;
                    return _u;
                case 2:
                    _u.id = _id;
                    _u.value = (String) _field;
                    return _u;
                default:
                throw new IllegalArgumentException("invalid type " + _field.getClass().getName() + " for field " + _id);
            }
        } catch (java.lang.Exception t) {
            throw new IllegalArgumentException("invalid type " + _field.getClass().getName() + " for field " + _id);
        }
    }

    @ThriftConstructor
    public DataUnion() {
    }
    
    @ThriftConstructor
    @Deprecated
    public DataUnion(final byte[] binaryData) {
        if (!DataUnion.allowNullFieldValues && binaryData == null) {
            throw new TProtocolException("Cannot initialize Union field 'DataUnion.binaryData' with null value!");
        }
        this.value = binaryData;
        this.id = 1;
    }
    
    @ThriftConstructor
    @Deprecated
    public DataUnion(final String stringData) {
        if (!DataUnion.allowNullFieldValues && stringData == null) {
            throw new TProtocolException("Cannot initialize Union field 'DataUnion.stringData' with null value!");
        }
        this.value = stringData;
        this.id = 2;
    }
    
    public static DataUnion fromBinaryData(final byte[] binaryData) {
        DataUnion res = new DataUnion();
        if (!DataUnion.allowNullFieldValues && binaryData == null) {
            throw new TProtocolException("Cannot initialize Union field 'DataUnion.binaryData' with null value!");
        }
        res.value = binaryData;
        res.id = 1;
        return res;
    }
    
    public static DataUnion fromStringData(final String stringData) {
        DataUnion res = new DataUnion();
        if (!DataUnion.allowNullFieldValues && stringData == null) {
            throw new TProtocolException("Cannot initialize Union field 'DataUnion.stringData' with null value!");
        }
        res.value = stringData;
        res.id = 2;
        return res;
    }
    

    @com.facebook.swift.codec.ThriftField(value=1, name="binaryData", requiredness=Requiredness.NONE)
    public byte[] getBinaryData() {
        if (this.id != 1) {
            throw new IllegalStateException("Not a binaryData element!");
        }
        return (byte[]) value;
    }

    public boolean isSetBinaryData() {
        return this.id == 1;
    }

    @com.facebook.swift.codec.ThriftField(value=2, name="stringData", requiredness=Requiredness.NONE)
    public String getStringData() {
        if (this.id != 2) {
            throw new IllegalStateException("Not a stringData element!");
        }
        return (String) value;
    }

    public boolean isSetStringData() {
        return this.id == 2;
    }

    @ThriftUnionId
    public short getThriftId() {
        return this.id;
    }

    public String getThriftName() {
        TField tField = (TField) FIELD_METADATA.get((int) this.id);
        if (tField == null) {
            return "null";
        } else {
            return tField.name;
        }
    }

    public void accept(Visitor visitor) {
        if (isSetBinaryData()) {
            visitor.visitBinaryData(getBinaryData());
            return;
        }
        if (isSetStringData()) {
            visitor.visitStringData(getStringData());
            return;
        }
    }

    @java.lang.Override
    public String toString() {
        return toStringHelper(this)
            .add("value", value)
            .add("id", id)
            .add("name", getThriftName())
            .add("type", value == null ? "<null>" : value.getClass().getSimpleName())
            .toString();
    }

    @java.lang.Override
    public boolean equals(java.lang.Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }

        DataUnion other = (DataUnion)o;

        return Objects.equals(this.id, other.id)
                && Objects.deepEquals(this.value, other.value);
    }

    @java.lang.Override
    public int hashCode() {
        return Arrays.deepHashCode(new java.lang.Object[] {
            id,
            value,
        });
    }

    public interface Visitor {
        void visitBinaryData(byte[] binaryData);
        void visitStringData(String stringData);
    }

    public void write0(TProtocol oprot) throws TException {
      if (this.id != 0 && this.value == null ){
        if(allowNullFieldValues) {
          // Warning: this path will generate corrupt serialized data!
          return;
        } else {
          throw new TProtocolException("Cannot write a Union with marked-as-set but null value!");
        }
      }
      oprot.writeStructBegin(STRUCT_DESC);
      switch (this.id) {
      case _BINARYDATA: {
        oprot.writeFieldBegin(BINARY_DATA_FIELD_DESC);
        byte[] binaryData = (byte[])this.value;
        oprot.writeBinary(java.nio.ByteBuffer.wrap(binaryData));
        oprot.writeFieldEnd();
        break;
      }
      case _STRINGDATA: {
        oprot.writeFieldBegin(STRING_DATA_FIELD_DESC);
        String stringData = (String)this.value;
        oprot.writeString(stringData);
        oprot.writeFieldEnd();
        break;
      }
      default:
          // ignore unknown field
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }
    
    
    public static com.facebook.thrift.payload.Reader<DataUnion> asReader() {
      return DataUnion::read0;
    }
    
    public static DataUnion read0(TProtocol oprot) throws TException {
      DataUnion res = new DataUnion();
      res.value = null;
      res.id = (short) 0;
      oprot.readStructBegin(DataUnion.NAMES_TO_IDS, DataUnion.THRIFT_NAMES_TO_IDS, DataUnion.FIELD_METADATA);
      TField __field = oprot.readFieldBegin();
      if (__field.type != TType.STOP) {
          switch (__field.id) {
          case _BINARYDATA:
            if (__field.type == BINARY_DATA_FIELD_DESC.type) {
              byte[] binaryData = oprot.readBinary().array();
              res.value = binaryData;
            }
            break;
          case _STRINGDATA:
            if (__field.type == STRING_DATA_FIELD_DESC.type) {
              String stringData = oprot.readString();
              res.value = stringData;
            }
            break;
          default:
            TProtocolUtil.skip(oprot, __field.type);
          }
        if (res.value != null) {
          res.id = __field.id;
        }
        oprot.readFieldEnd();
        TField __stopField = oprot.readFieldBegin(); // Consume the STOP byte
        if (__stopField.type != TType.STOP) {
          throw new TProtocolException(TProtocolException.INVALID_DATA, "Union 'DataUnion' is missing a STOP byte");
        }
      }
      oprot.readStructEnd();
      return res;
    }
    public static DataUnion defaultInstance() {
        return _DEFAULT;
    }

}
