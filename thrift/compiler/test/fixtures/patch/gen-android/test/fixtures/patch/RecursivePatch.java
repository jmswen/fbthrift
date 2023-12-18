/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
package test.fixtures.patch;

import java.util.List;
import java.util.ArrayList;
import java.util.Map;
import java.util.HashMap;
import java.util.Set;
import java.util.HashSet;
import java.util.Collections;
import java.util.BitSet;
import java.util.Arrays;
import com.facebook.thrift.*;
import com.facebook.thrift.annotations.*;
import com.facebook.thrift.async.*;
import com.facebook.thrift.meta_data.*;
import com.facebook.thrift.server.*;
import com.facebook.thrift.transport.*;
import com.facebook.thrift.protocol.*;

@SuppressWarnings({ "unused", "serial" })
public class RecursivePatch implements TBase, java.io.Serializable, Cloneable {
  private static final TStruct STRUCT_DESC = new TStruct("RecursivePatch");
  private static final TField ASSIGN_FIELD_DESC = new TField("assign", TType.STRUCT, (short)1);
  private static final TField CLEAR_FIELD_DESC = new TField("clear", TType.BOOL, (short)2);
  private static final TField PATCH_PRIOR_FIELD_DESC = new TField("patchPrior", TType.STRUCT, (short)3);
  private static final TField ENSURE_FIELD_DESC = new TField("ensure", TType.STRUCT, (short)5);
  private static final TField PATCH_FIELD_DESC = new TField("patch", TType.STRUCT, (short)6);
  private static final TField REMOVE_FIELD_DESC = new TField("remove", TType.LIST, (short)7);

  /**
   * Assigns to a (set) value.
   * 
   * If set, all other operations are ignored.
   * 
   * Note: Optional and union fields must be set before assigned.
   * 
   */
  public final Recursive assign;
  /**
   * Clears a value. Applies first.
   */
  public final Boolean clear;
  /**
   * Patches any previously set values. Applies second.
   */
  public final RecursiveFieldPatch patchPrior;
  /**
   * Initialize fields, using the given defaults. Applies third.
   */
  public final RecursiveEnsureStruct ensure;
  /**
   * Patches any set value, including newly set values. Applies last.
   */
  public final RecursiveFieldPatch patch;
  /**
   * Removes entries, if present. Applies third.
   */
  public final List<Short> remove;
  public static final int ASSIGN = 1;
  public static final int CLEAR = 2;
  public static final int PATCHPRIOR = 3;
  public static final int ENSURE = 5;
  public static final int PATCH = 6;
  public static final int REMOVE = 7;

  public RecursivePatch(
      Recursive assign,
      Boolean clear,
      RecursiveFieldPatch patchPrior,
      RecursiveEnsureStruct ensure,
      RecursiveFieldPatch patch,
      List<Short> remove) {
    this.assign = assign;
    this.clear = clear;
    this.patchPrior = patchPrior;
    this.ensure = ensure;
    this.patch = patch;
    this.remove = remove;
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public RecursivePatch(RecursivePatch other) {
    if (other.isSetAssign()) {
      this.assign = TBaseHelper.deepCopy(other.assign);
    } else {
      this.assign = null;
    }
    if (other.isSetClear()) {
      this.clear = TBaseHelper.deepCopy(other.clear);
    } else {
      this.clear = null;
    }
    if (other.isSetPatchPrior()) {
      this.patchPrior = TBaseHelper.deepCopy(other.patchPrior);
    } else {
      this.patchPrior = null;
    }
    if (other.isSetEnsure()) {
      this.ensure = TBaseHelper.deepCopy(other.ensure);
    } else {
      this.ensure = null;
    }
    if (other.isSetPatch()) {
      this.patch = TBaseHelper.deepCopy(other.patch);
    } else {
      this.patch = null;
    }
    if (other.isSetRemove()) {
      this.remove = TBaseHelper.deepCopy(other.remove);
    } else {
      this.remove = null;
    }
  }

  public RecursivePatch deepCopy() {
    return new RecursivePatch(this);
  }

  /**
   * Assigns to a (set) value.
   * 
   * If set, all other operations are ignored.
   * 
   * Note: Optional and union fields must be set before assigned.
   * 
   */
  public Recursive getAssign() {
    return this.assign;
  }

  // Returns true if field assign is set (has been assigned a value) and false otherwise
  public boolean isSetAssign() {
    return this.assign != null;
  }

  /**
   * Clears a value. Applies first.
   */
  public Boolean isClear() {
    return this.clear;
  }

  // Returns true if field clear is set (has been assigned a value) and false otherwise
  public boolean isSetClear() {
    return this.clear != null;
  }

  /**
   * Patches any previously set values. Applies second.
   */
  public RecursiveFieldPatch getPatchPrior() {
    return this.patchPrior;
  }

  // Returns true if field patchPrior is set (has been assigned a value) and false otherwise
  public boolean isSetPatchPrior() {
    return this.patchPrior != null;
  }

  /**
   * Initialize fields, using the given defaults. Applies third.
   */
  public RecursiveEnsureStruct getEnsure() {
    return this.ensure;
  }

  // Returns true if field ensure is set (has been assigned a value) and false otherwise
  public boolean isSetEnsure() {
    return this.ensure != null;
  }

  /**
   * Patches any set value, including newly set values. Applies last.
   */
  public RecursiveFieldPatch getPatch() {
    return this.patch;
  }

  // Returns true if field patch is set (has been assigned a value) and false otherwise
  public boolean isSetPatch() {
    return this.patch != null;
  }

  /**
   * Removes entries, if present. Applies third.
   */
  public List<Short> getRemove() {
    return this.remove;
  }

  // Returns true if field remove is set (has been assigned a value) and false otherwise
  public boolean isSetRemove() {
    return this.remove != null;
  }

  @Override
  public boolean equals(Object _that) {
    if (_that == null)
      return false;
    if (this == _that)
      return true;
    if (!(_that instanceof RecursivePatch))
      return false;
    RecursivePatch that = (RecursivePatch)_that;

    if (!TBaseHelper.equalsNobinary(this.isSetAssign(), that.isSetAssign(), this.assign, that.assign)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetClear(), that.isSetClear(), this.clear, that.clear)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetPatchPrior(), that.isSetPatchPrior(), this.patchPrior, that.patchPrior)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetEnsure(), that.isSetEnsure(), this.ensure, that.ensure)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetPatch(), that.isSetPatch(), this.patch, that.patch)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetRemove(), that.isSetRemove(), this.remove, that.remove)) { return false; }

    return true;
  }

  @Override
  public int hashCode() {
    return Arrays.deepHashCode(new Object[] {assign, clear, patchPrior, ensure, patch, remove});
  }

  // This is required to satisfy the TBase interface, but can't be implemented on immutable struture.
  public void read(TProtocol iprot) throws TException {
    throw new TException("unimplemented in android immutable structure");
  }

  public static RecursivePatch deserialize(TProtocol iprot) throws TException {
    Recursive tmp_assign = null;
    Boolean tmp_clear = null;
    RecursiveFieldPatch tmp_patchPrior = null;
    RecursiveEnsureStruct tmp_ensure = null;
    RecursiveFieldPatch tmp_patch = null;
    List<Short> tmp_remove = null;
    TField __field;
    iprot.readStructBegin();
    while (true)
    {
      __field = iprot.readFieldBegin();
      if (__field.type == TType.STOP) {
        break;
      }
      switch (__field.id)
      {
        case ASSIGN:
          if (__field.type == TType.STRUCT) {
            tmp_assign = Recursive.deserialize(iprot);
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case CLEAR:
          if (__field.type == TType.BOOL) {
            tmp_clear = iprot.readBool();
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case PATCHPRIOR:
          if (__field.type == TType.STRUCT) {
            tmp_patchPrior = RecursiveFieldPatch.deserialize(iprot);
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case ENSURE:
          if (__field.type == TType.STRUCT) {
            tmp_ensure = RecursiveEnsureStruct.deserialize(iprot);
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case PATCH:
          if (__field.type == TType.STRUCT) {
            tmp_patch = RecursiveFieldPatch.deserialize(iprot);
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case REMOVE:
          if (__field.type == TType.LIST) {
            {
              TList _list238 = iprot.readListBegin();
              tmp_remove = new ArrayList<Short>(Math.max(0, _list238.size));
              for (int _i239 = 0; 
                   (_list238.size < 0) ? iprot.peekList() : (_i239 < _list238.size); 
                   ++_i239)
              {
                Short _elem240;
                _elem240 = iprot.readI16();
                tmp_remove.add(_elem240);
              }
              iprot.readListEnd();
            }
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        default:
          TProtocolUtil.skip(iprot, __field.type);
          break;
      }
      iprot.readFieldEnd();
    }
    iprot.readStructEnd();

    RecursivePatch _that;
    _that = new RecursivePatch(
      tmp_assign
      ,tmp_clear
      ,tmp_patchPrior
      ,tmp_ensure
      ,tmp_patch
      ,tmp_remove
    );
    _that.validate();
    return _that;
  }

  public void write(TProtocol oprot) throws TException {
    validate();

    oprot.writeStructBegin(STRUCT_DESC);
    if (this.assign != null) {
      if (isSetAssign()) {
        oprot.writeFieldBegin(ASSIGN_FIELD_DESC);
        this.assign.write(oprot);
        oprot.writeFieldEnd();
      }
    }
    if (this.clear != null) {
      oprot.writeFieldBegin(CLEAR_FIELD_DESC);
      oprot.writeBool(this.clear);
      oprot.writeFieldEnd();
    }
    if (this.patchPrior != null) {
      oprot.writeFieldBegin(PATCH_PRIOR_FIELD_DESC);
      this.patchPrior.write(oprot);
      oprot.writeFieldEnd();
    }
    if (this.ensure != null) {
      oprot.writeFieldBegin(ENSURE_FIELD_DESC);
      this.ensure.write(oprot);
      oprot.writeFieldEnd();
    }
    if (this.patch != null) {
      oprot.writeFieldBegin(PATCH_FIELD_DESC);
      this.patch.write(oprot);
      oprot.writeFieldEnd();
    }
    if (this.remove != null) {
      oprot.writeFieldBegin(REMOVE_FIELD_DESC);
      {
        oprot.writeListBegin(new TList(TType.I16, this.remove.size()));
        for (Short _iter241 : this.remove)        {
          oprot.writeI16(_iter241);
        }
        oprot.writeListEnd();
      }
      oprot.writeFieldEnd();
    }
    oprot.writeFieldStop();
    oprot.writeStructEnd();
  }

  @Override
  public String toString() {
    return toString(1, true);
  }

  @Override
  public String toString(int indent, boolean prettyPrint) {
    return TBaseHelper.toStringHelper(this, indent, prettyPrint);
  }

  public void validate() throws TException {
    // check for required fields
  }

}

