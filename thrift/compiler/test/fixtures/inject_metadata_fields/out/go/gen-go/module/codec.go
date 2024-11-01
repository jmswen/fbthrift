// Autogenerated by Thrift for thrift/compiler/test/fixtures/inject_metadata_fields/src/module.thrift
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//  @generated

package module


import (
    "reflect"
    "sync"

    foo "foo"
    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift/types"
)

var _ = foo.GoUnusedProtection__
// (needed to ensure safety because of naive import list construction)
var _ = thrift.ZERO
var _ = reflect.Ptr

// Premade codec specs
var (
    premadeCodecTypeSpec_string *thrift.TypeSpec = nil
    premadeCodecTypeSpec_module_Fields *thrift.TypeSpec = nil
    premadeCodecTypeSpec_module_FieldsInjectedToEmptyStruct *thrift.TypeSpec = nil
    premadeCodecTypeSpec_module_FieldsInjectedToStruct *thrift.TypeSpec = nil
    premadeCodecTypeSpec_module_FieldsInjectedWithIncludedStruct *thrift.TypeSpec = nil
)

// Premade codec specs initializer
var premadeCodecSpecsInitOnce = sync.OnceFunc(func() {
    premadeCodecTypeSpec_string = &thrift.TypeSpec{
        CodecPrimitiveSpec: &thrift.CodecPrimitiveSpec{
    PrimitiveType: thrift.CODEC_PRIMITIVE_TYPE_STRING,
},

    }
    premadeCodecTypeSpec_module_Fields = &thrift.TypeSpec{
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewFields() },
},

    }
    premadeCodecTypeSpec_module_FieldsInjectedToEmptyStruct = &thrift.TypeSpec{
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewFieldsInjectedToEmptyStruct() },
},

    }
    premadeCodecTypeSpec_module_FieldsInjectedToStruct = &thrift.TypeSpec{
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewFieldsInjectedToStruct() },
},

    }
    premadeCodecTypeSpec_module_FieldsInjectedWithIncludedStruct = &thrift.TypeSpec{
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewFieldsInjectedWithIncludedStruct() },
},

    }
})

// Premade struct specs
var (
    premadeStructSpec_Fields *thrift.StructSpec = nil
    premadeStructSpec_FieldsInjectedToEmptyStruct *thrift.StructSpec = nil
    premadeStructSpec_FieldsInjectedToStruct *thrift.StructSpec = nil
    premadeStructSpec_FieldsInjectedWithIncludedStruct *thrift.StructSpec = nil
)

// Premade struct specs initializer
var premadeStructSpecsInitOnce = sync.OnceFunc(func() {
    premadeStructSpec_Fields = &thrift.StructSpec{
    Name:               "Fields",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []thrift.FieldSpec{
        {
            ID:                   100,
            WireType:             thrift.Type(thrift.STRING),
            Name:                 "injected_field",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        100: 0,
    },
}
    premadeStructSpec_FieldsInjectedToEmptyStruct = &thrift.StructSpec{
    Name:               "FieldsInjectedToEmptyStruct",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []thrift.FieldSpec{
        {
            ID:                   -1100,
            WireType:             thrift.Type(thrift.STRING),
            Name:                 "injected_field",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        -1100: 0,
    },
}
    premadeStructSpec_FieldsInjectedToStruct = &thrift.StructSpec{
    Name:               "FieldsInjectedToStruct",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []thrift.FieldSpec{
        {
            ID:                   -1100,
            WireType:             thrift.Type(thrift.STRING),
            Name:                 "injected_field",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: false,
        },        {
            ID:                   1,
            WireType:             thrift.Type(thrift.STRING),
            Name:                 "string_field",
            ReflectIndex:         1,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        -1100: 0,
        1: 1,
    },
}
    premadeStructSpec_FieldsInjectedWithIncludedStruct = &thrift.StructSpec{
    Name:               "FieldsInjectedWithIncludedStruct",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []thrift.FieldSpec{
        {
            ID:                   -1102,
            WireType:             thrift.Type(thrift.STRING),
            Name:                 "injected_unstructured_annotation_field",
            ReflectIndex:         0,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: true,
        },        {
            ID:                   -1101,
            WireType:             thrift.Type(thrift.STRING),
            Name:                 "injected_structured_annotation_field",
            ReflectIndex:         1,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: true,
        },        {
            ID:                   -1100,
            WireType:             thrift.Type(thrift.STRING),
            Name:                 "injected_field",
            ReflectIndex:         2,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: false,
        },        {
            ID:                   1,
            WireType:             thrift.Type(thrift.STRING),
            Name:                 "string_field",
            ReflectIndex:         3,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        -1102: 0,
        -1101: 1,
        -1100: 2,
        1: 3,
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
        codecSpecsWithFullName = append(codecSpecsWithFullName, codecSpecWithFullName{ "string", premadeCodecTypeSpec_string })
        codecSpecsWithFullName = append(codecSpecsWithFullName, codecSpecWithFullName{ "module.Fields", premadeCodecTypeSpec_module_Fields })
        codecSpecsWithFullName = append(codecSpecsWithFullName, codecSpecWithFullName{ "module.FieldsInjectedToEmptyStruct", premadeCodecTypeSpec_module_FieldsInjectedToEmptyStruct })
        codecSpecsWithFullName = append(codecSpecsWithFullName, codecSpecWithFullName{ "module.FieldsInjectedToStruct", premadeCodecTypeSpec_module_FieldsInjectedToStruct })
        codecSpecsWithFullName = append(codecSpecsWithFullName, codecSpecWithFullName{ "module.FieldsInjectedWithIncludedStruct", premadeCodecTypeSpec_module_FieldsInjectedWithIncludedStruct })

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
