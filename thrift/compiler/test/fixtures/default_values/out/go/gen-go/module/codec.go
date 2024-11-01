// Autogenerated by Thrift for thrift/compiler/test/fixtures/default_values/src/module.thrift
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//  @generated

package module


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
    premadeCodecTypeSpec_module_TrivialStruct *thrift.TypeSpec = nil
    premadeCodecTypeSpec_module_StructWithNoCustomDefaultValues *thrift.TypeSpec = nil
    premadeCodecTypeSpec_module_StructWithCustomDefaultValues *thrift.TypeSpec = nil
)

// Premade codec specs initializer
var premadeCodecSpecsInitOnce = sync.OnceFunc(func() {
    premadeCodecTypeSpec_i32 = &thrift.TypeSpec{
        CodecPrimitiveSpec: &thrift.CodecPrimitiveSpec{
    PrimitiveType: thrift.CODEC_PRIMITIVE_TYPE_I32,
},

    }
    premadeCodecTypeSpec_module_TrivialStruct = &thrift.TypeSpec{
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewTrivialStruct() },
},

    }
    premadeCodecTypeSpec_module_StructWithNoCustomDefaultValues = &thrift.TypeSpec{
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewStructWithNoCustomDefaultValues() },
},

    }
    premadeCodecTypeSpec_module_StructWithCustomDefaultValues = &thrift.TypeSpec{
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewStructWithCustomDefaultValues() },
},

    }
})

// Premade struct specs
var (
    premadeStructSpec_TrivialStruct *thrift.StructSpec = nil
    premadeStructSpec_StructWithNoCustomDefaultValues *thrift.StructSpec = nil
    premadeStructSpec_StructWithCustomDefaultValues *thrift.StructSpec = nil
)

// Premade struct specs initializer
var premadeStructSpecsInitOnce = sync.OnceFunc(func() {
    premadeStructSpec_TrivialStruct = &thrift.StructSpec{
    Name:               "TrivialStruct",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.Type(thrift.I32),
            Name:                 "int_value",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_i32,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        1: 0,
    },
}
    premadeStructSpec_StructWithNoCustomDefaultValues = &thrift.StructSpec{
    Name:               "StructWithNoCustomDefaultValues",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.Type(thrift.I32),
            Name:                 "unqualified_integer",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_i32,
            MustBeSetToSerialize: false,
        },        {
            ID:                   2,
            WireType:             thrift.Type(thrift.I32),
            Name:                 "optional_integer",
            ReflectIndex:         1,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_i32,
            MustBeSetToSerialize: true,
        },        {
            ID:                   3,
            WireType:             thrift.Type(thrift.I32),
            Name:                 "required_integer",
            ReflectIndex:         2,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_i32,
            MustBeSetToSerialize: false,
        },        {
            ID:                   4,
            WireType:             thrift.Type(thrift.STRUCT),
            Name:                 "unqualified_struct",
            ReflectIndex:         3,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_module_TrivialStruct,
            MustBeSetToSerialize: true,
        },        {
            ID:                   5,
            WireType:             thrift.Type(thrift.STRUCT),
            Name:                 "optional_struct",
            ReflectIndex:         4,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_module_TrivialStruct,
            MustBeSetToSerialize: true,
        },        {
            ID:                   6,
            WireType:             thrift.Type(thrift.STRUCT),
            Name:                 "required_struct",
            ReflectIndex:         5,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_module_TrivialStruct,
            MustBeSetToSerialize: true,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        1: 0,
        2: 1,
        3: 2,
        4: 3,
        5: 4,
        6: 5,
    },
}
    premadeStructSpec_StructWithCustomDefaultValues = &thrift.StructSpec{
    Name:               "StructWithCustomDefaultValues",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.Type(thrift.I32),
            Name:                 "unqualified_integer",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_i32,
            MustBeSetToSerialize: false,
        },        {
            ID:                   2,
            WireType:             thrift.Type(thrift.I32),
            Name:                 "optional_integer",
            ReflectIndex:         1,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_i32,
            MustBeSetToSerialize: true,
        },        {
            ID:                   3,
            WireType:             thrift.Type(thrift.I32),
            Name:                 "required_integer",
            ReflectIndex:         2,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_i32,
            MustBeSetToSerialize: false,
        },        {
            ID:                   4,
            WireType:             thrift.Type(thrift.STRUCT),
            Name:                 "unqualified_struct",
            ReflectIndex:         3,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_module_TrivialStruct,
            MustBeSetToSerialize: true,
        },        {
            ID:                   5,
            WireType:             thrift.Type(thrift.STRUCT),
            Name:                 "optional_struct",
            ReflectIndex:         4,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_module_TrivialStruct,
            MustBeSetToSerialize: true,
        },        {
            ID:                   6,
            WireType:             thrift.Type(thrift.STRUCT),
            Name:                 "required_struct",
            ReflectIndex:         5,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_module_TrivialStruct,
            MustBeSetToSerialize: true,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        1: 0,
        2: 1,
        3: 2,
        4: 3,
        5: 4,
        6: 5,
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
        codecSpecsWithFullName = append(codecSpecsWithFullName, codecSpecWithFullName{ "module.TrivialStruct", premadeCodecTypeSpec_module_TrivialStruct })
        codecSpecsWithFullName = append(codecSpecsWithFullName, codecSpecWithFullName{ "module.StructWithNoCustomDefaultValues", premadeCodecTypeSpec_module_StructWithNoCustomDefaultValues })
        codecSpecsWithFullName = append(codecSpecsWithFullName, codecSpecWithFullName{ "module.StructWithCustomDefaultValues", premadeCodecTypeSpec_module_StructWithCustomDefaultValues })

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
