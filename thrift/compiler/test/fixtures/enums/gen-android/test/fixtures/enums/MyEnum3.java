/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
package test.fixtures.enums;


import com.facebook.thrift.IntRangeSet;
import java.util.Map;
import java.util.HashMap;

@SuppressWarnings({ "unused" })
public enum MyEnum3 implements com.facebook.thrift.TEnum {
  ME3_0(0),
  ME3_1(1),
  ME3_N2(-2),
  ME3_N1(-1),
  ME3_9(9),
  ME3_10(10);

  private final int value;

  private MyEnum3(int value) {
    this.value = value;
  }

  /**
   * Get the integer value of this enum value, as defined in the Thrift IDL.
   */
  public int getValue() {
    return value;
  }

  /**
   * Find a the enum type by its integer value, as defined in the Thrift IDL.
   * @return null if the value is not found.
   */
  public static MyEnum3 findByValue(int value) { 
    switch (value) {
      case 0:
        return ME3_0;
      case 1:
        return ME3_1;
      case -2:
        return ME3_N2;
      case -1:
        return ME3_N1;
      case 9:
        return ME3_9;
      case 10:
        return ME3_10;
      default:
        return null;
    }
  }
}
