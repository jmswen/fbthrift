// Autogenerated by Thrift for shared.thrift
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//  @generated

package shared

import (
    "fmt"
    "strings"

    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift/types"
)

// (needed to ensure safety because of naive import list construction)
var _ = fmt.Printf
var _ = strings.Split
var _ = thrift.ZERO


type DoSomethingResult struct {
    SRes string `thrift:"s_res,1" json:"s_res" db:"s_res"`
    IRes int32 `thrift:"i_res,2" json:"i_res" db:"i_res"`
}
// Compile time interface enforcer
var _ thrift.Struct = (*DoSomethingResult)(nil)

func NewDoSomethingResult() *DoSomethingResult {
    return (&DoSomethingResult{}).setDefaults()
}

func (x *DoSomethingResult) GetSRes() string {
    return x.SRes
}

func (x *DoSomethingResult) GetIRes() int32 {
    return x.IRes
}

func (x *DoSomethingResult) SetSResNonCompat(value string) *DoSomethingResult {
    x.SRes = value
    return x
}

func (x *DoSomethingResult) SetSRes(value string) *DoSomethingResult {
    x.SRes = value
    return x
}

func (x *DoSomethingResult) SetIResNonCompat(value int32) *DoSomethingResult {
    x.IRes = value
    return x
}

func (x *DoSomethingResult) SetIRes(value int32) *DoSomethingResult {
    x.IRes = value
    return x
}

func (x *DoSomethingResult) writeField1(p thrift.Encoder) error {  // SRes
    if err := p.WriteFieldBegin("s_res", thrift.STRING, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.SRes
    if err := p.WriteString(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *DoSomethingResult) writeField2(p thrift.Encoder) error {  // IRes
    if err := p.WriteFieldBegin("i_res", thrift.I32, 2); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.IRes
    if err := p.WriteI32(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *DoSomethingResult) readField1(p thrift.Decoder) error {  // SRes
    result, err := p.ReadString()
if err != nil {
    return err
}

    x.SRes = result
    return nil
}

func (x *DoSomethingResult) readField2(p thrift.Decoder) error {  // IRes
    result, err := p.ReadI32()
if err != nil {
    return err
}

    x.IRes = result
    return nil
}

func (x *DoSomethingResult) toString1() string {  // SRes
    return fmt.Sprintf("%v", x.SRes)
}

func (x *DoSomethingResult) toString2() string {  // IRes
    return fmt.Sprintf("%v", x.IRes)
}



func (x *DoSomethingResult) Write(p thrift.Encoder) error {
    if err := p.WriteStructBegin("DoSomethingResult"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField1(p); err != nil {
        return err
    }
    if err := x.writeField2(p); err != nil {
        return err
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *DoSomethingResult) Read(p thrift.Decoder) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, wireType, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if wireType == thrift.STOP {
            break;
        }

        var fieldReadErr error
        switch {
        case (id == 1 && wireType == thrift.Type(thrift.STRING)):  // s_res
            fieldReadErr = x.readField1(p)
        case (id == 2 && wireType == thrift.Type(thrift.I32)):  // i_res
            fieldReadErr = x.readField2(p)
        default:
            fieldReadErr = p.Skip(wireType)
        }

        if fieldReadErr != nil {
            return fieldReadErr
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}

func (x *DoSomethingResult) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("DoSomethingResult({")
    sb.WriteString(fmt.Sprintf("SRes:%s ", x.toString1()))
    sb.WriteString(fmt.Sprintf("IRes:%s", x.toString2()))
    sb.WriteString("})")

    return sb.String()
}
func (x *DoSomethingResult) setDefaults() *DoSomethingResult {
    return x.
        SetSResNonCompat("").
        SetIResNonCompat(0)
}


// RegisterTypes registers types found in this file that have a thrift_uri with the passed in registry.
func RegisterTypes(registry interface {
  RegisterType(name string, initializer func() any)
}) {

}
