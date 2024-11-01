// Autogenerated by Thrift for module0.thrift
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//  @generated

package module0


import (
    "reflect"
    "sync"

    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift/types"
)

// (needed to ensure safety because of naive import list construction)
var _ = thrift.ZERO
var _ = reflect.Ptr

// Premade codec specs
var (
    premadeCodecTypeSpec_i32 *thrift.TypeSpec = nil
    premadeCodecTypeSpec_string *thrift.TypeSpec = nil
    premadeCodecTypeSpec_module0_Accessory *thrift.TypeSpec = nil
    premadeCodecTypeSpec_module0_PartName *thrift.TypeSpec = nil
)

// Premade codec specs initializer
var premadeCodecSpecsInitOnce = sync.OnceFunc(func() {
    premadeCodecTypeSpec_i32 = &thrift.TypeSpec{
        CodecPrimitiveSpec: &thrift.CodecPrimitiveSpec{
    PrimitiveType: thrift.CODEC_PRIMITIVE_TYPE_I32,
},

    }
    premadeCodecTypeSpec_string = &thrift.TypeSpec{
        CodecPrimitiveSpec: &thrift.CodecPrimitiveSpec{
    PrimitiveType: thrift.CODEC_PRIMITIVE_TYPE_STRING,
},

    }
    premadeCodecTypeSpec_module0_Accessory = &thrift.TypeSpec{
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewAccessory() },
},

    }
    premadeCodecTypeSpec_module0_PartName = &thrift.TypeSpec{
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewPartName() },
},

    }
})

// Premade struct specs
var (
    premadeStructSpec_Accessory *thrift.StructSpec = nil
    premadeStructSpec_PartName *thrift.StructSpec = nil
)

// Premade struct specs initializer
var premadeStructSpecsInitOnce = sync.OnceFunc(func() {
    premadeStructSpec_Accessory = &thrift.StructSpec{
    Name:               "Accessory",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.Type(thrift.I32),
            Name:                 "InventoryId",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_i32,
            MustBeSetToSerialize: false,
        },        {
            ID:                   2,
            WireType:             thrift.Type(thrift.STRING),
            Name:                 "Name",
            ReflectIndex:         1,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        1: 0,
        2: 1,
    },
}
    premadeStructSpec_PartName = &thrift.StructSpec{
    Name:               "PartName",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.Type(thrift.I32),
            Name:                 "InventoryId",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_i32,
            MustBeSetToSerialize: false,
        },        {
            ID:                   2,
            WireType:             thrift.Type(thrift.STRING),
            Name:                 "Name",
            ReflectIndex:         1,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        1: 0,
        2: 1,
    },
}
})

// Helper type to allow us to store codec specs in a slice at compile time,
// and put them in a map at runtime. See comment at the top of template
// about a compilation limitation that affects map literals.
type codecSpecWithFullName struct {
    fullName string
    typeSpec *thrift.TypeSpec
}

var premadeCodecSpecsMapOnce = sync.OnceValue(
    func() map[string]*thrift.TypeSpec {
        // Relies on premade codec specs initialization
        premadeCodecSpecsInitOnce()

        codecSpecsWithFullName := make([]codecSpecWithFullName, 0)
        codecSpecsWithFullName = append(codecSpecsWithFullName, codecSpecWithFullName{ "i32", premadeCodecTypeSpec_i32 })
        codecSpecsWithFullName = append(codecSpecsWithFullName, codecSpecWithFullName{ "string", premadeCodecTypeSpec_string })
        codecSpecsWithFullName = append(codecSpecsWithFullName, codecSpecWithFullName{ "module0.Accessory", premadeCodecTypeSpec_module0_Accessory })
        codecSpecsWithFullName = append(codecSpecsWithFullName, codecSpecWithFullName{ "module0.PartName", premadeCodecTypeSpec_module0_PartName })

        fbthriftTypeSpecsMap := make(map[string]*thrift.TypeSpec, len(codecSpecsWithFullName))
        for _, value := range codecSpecsWithFullName {
            fbthriftTypeSpecsMap[value.fullName] = value.typeSpec
        }
        return fbthriftTypeSpecsMap
    },
)

func init() {
    premadeCodecSpecsInitOnce()
    premadeStructSpecsInitOnce()
}

// GetMetadataThriftType (INTERNAL USE ONLY).
// Returns metadata TypeSpec for a given full type name.
func GetCodecTypeSpec(fullName string) *thrift.TypeSpec {
    return premadeCodecSpecsMapOnce()[fullName]
}
