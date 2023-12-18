/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
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
public class Internship implements TBase, java.io.Serializable, Cloneable {
  private static final TStruct STRUCT_DESC = new TStruct("Internship");
  private static final TField WEEKS_FIELD_DESC = new TField("weeks", TType.I32, (short)1);
  private static final TField TITLE_FIELD_DESC = new TField("title", TType.STRING, (short)2);
  private static final TField EMPLOYER_FIELD_DESC = new TField("employer", TType.I32, (short)3);
  private static final TField COMPENSATION_FIELD_DESC = new TField("compensation", TType.DOUBLE, (short)4);
  private static final TField SCHOOL_FIELD_DESC = new TField("school", TType.STRING, (short)5);

  public final Integer weeks;
  public final String title;
  /**
   * 
   * @see Company
   */
  public final Company employer;
  public final Double compensation;
  public final String school;
  public static final int WEEKS = 1;
  public static final int TITLE = 2;
  public static final int EMPLOYER = 3;
  public static final int COMPENSATION = 4;
  public static final int SCHOOL = 5;

  public Internship(
      Integer weeks,
      String title,
      Company employer,
      Double compensation,
      String school) {
    this.weeks = weeks;
    this.title = title;
    this.employer = employer;
    this.compensation = compensation;
    this.school = school;
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public Internship(Internship other) {
    if (other.isSetWeeks()) {
      this.weeks = TBaseHelper.deepCopy(other.weeks);
    } else {
      this.weeks = null;
    }
    if (other.isSetTitle()) {
      this.title = TBaseHelper.deepCopy(other.title);
    } else {
      this.title = null;
    }
    if (other.isSetEmployer()) {
      this.employer = TBaseHelper.deepCopy(other.employer);
    } else {
      this.employer = null;
    }
    if (other.isSetCompensation()) {
      this.compensation = TBaseHelper.deepCopy(other.compensation);
    } else {
      this.compensation = null;
    }
    if (other.isSetSchool()) {
      this.school = TBaseHelper.deepCopy(other.school);
    } else {
      this.school = null;
    }
  }

  public Internship deepCopy() {
    return new Internship(this);
  }

  public Integer getWeeks() {
    return this.weeks;
  }

  // Returns true if field weeks is set (has been assigned a value) and false otherwise
  public boolean isSetWeeks() {
    return this.weeks != null;
  }

  public String getTitle() {
    return this.title;
  }

  // Returns true if field title is set (has been assigned a value) and false otherwise
  public boolean isSetTitle() {
    return this.title != null;
  }

  /**
   * 
   * @see Company
   */
  public Company getEmployer() {
    return this.employer;
  }

  // Returns true if field employer is set (has been assigned a value) and false otherwise
  public boolean isSetEmployer() {
    return this.employer != null;
  }

  public Double getCompensation() {
    return this.compensation;
  }

  // Returns true if field compensation is set (has been assigned a value) and false otherwise
  public boolean isSetCompensation() {
    return this.compensation != null;
  }

  public String getSchool() {
    return this.school;
  }

  // Returns true if field school is set (has been assigned a value) and false otherwise
  public boolean isSetSchool() {
    return this.school != null;
  }

  @Override
  public boolean equals(Object _that) {
    if (_that == null)
      return false;
    if (this == _that)
      return true;
    if (!(_that instanceof Internship))
      return false;
    Internship that = (Internship)_that;

    if (!TBaseHelper.equalsNobinary(this.isSetWeeks(), that.isSetWeeks(), this.weeks, that.weeks)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetTitle(), that.isSetTitle(), this.title, that.title)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetEmployer(), that.isSetEmployer(), this.employer, that.employer)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetCompensation(), that.isSetCompensation(), this.compensation, that.compensation)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetSchool(), that.isSetSchool(), this.school, that.school)) { return false; }

    return true;
  }

  @Override
  public int hashCode() {
    return Arrays.deepHashCode(new Object[] {weeks, title, employer, compensation, school});
  }

  // This is required to satisfy the TBase interface, but can't be implemented on immutable struture.
  public void read(TProtocol iprot) throws TException {
    throw new TException("unimplemented in android immutable structure");
  }

  public static Internship deserialize(TProtocol iprot) throws TException {
    Integer tmp_weeks = null;
    String tmp_title = null;
    Company tmp_employer = null;
    Double tmp_compensation = null;
    String tmp_school = null;
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
        case WEEKS:
          if (__field.type == TType.I32) {
            tmp_weeks = iprot.readI32();
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case TITLE:
          if (__field.type == TType.STRING) {
            tmp_title = iprot.readString();
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case EMPLOYER:
          if (__field.type == TType.I32) {
            tmp_employer = Company.findByValue(iprot.readI32());
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case COMPENSATION:
          if (__field.type == TType.DOUBLE) {
            tmp_compensation = iprot.readDouble();
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case SCHOOL:
          if (__field.type == TType.STRING) {
            tmp_school = iprot.readString();
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

    Internship _that;
    _that = new Internship(
      tmp_weeks
      ,tmp_title
      ,tmp_employer
      ,tmp_compensation
      ,tmp_school
    );
    _that.validate();
    return _that;
  }

  public void write(TProtocol oprot) throws TException {
    validate();

    oprot.writeStructBegin(STRUCT_DESC);
    if (this.weeks != null) {
      oprot.writeFieldBegin(WEEKS_FIELD_DESC);
      oprot.writeI32(this.weeks);
      oprot.writeFieldEnd();
    }
    if (this.title != null) {
      oprot.writeFieldBegin(TITLE_FIELD_DESC);
      oprot.writeString(this.title);
      oprot.writeFieldEnd();
    }
    if (this.employer != null) {
      if (isSetEmployer()) {
        oprot.writeFieldBegin(EMPLOYER_FIELD_DESC);
        oprot.writeI32(this.employer == null ? 0 : this.employer.getValue());
        oprot.writeFieldEnd();
      }
    }
    if (this.compensation != null) {
      if (isSetCompensation()) {
        oprot.writeFieldBegin(COMPENSATION_FIELD_DESC);
        oprot.writeDouble(this.compensation);
        oprot.writeFieldEnd();
      }
    }
    if (this.school != null) {
      if (isSetSchool()) {
        oprot.writeFieldBegin(SCHOOL_FIELD_DESC);
        oprot.writeString(this.school);
        oprot.writeFieldEnd();
      }
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
    if (weeks == null) {
      throw new TProtocolException(TProtocolException.MISSING_REQUIRED_FIELD, "Required field 'weeks' was not present! Struct: " + toString());
    }
  }

}

