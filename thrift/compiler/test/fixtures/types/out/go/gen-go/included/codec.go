// Autogenerated by Thrift for included.thrift
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//  @generated

package included


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
    premadeCodecTypeSpec_map_i32_string *thrift.TypeSpec = nil
    premadeCodecTypeSpec_included_SomeMap *thrift.TypeSpec = nil
    premadeCodecTypeSpec_list_included_SomeMap *thrift.TypeSpec = nil
    premadeCodecTypeSpec_included_SomeListOfTypeMap *thrift.TypeSpec = nil
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
    premadeCodecTypeSpec_map_i32_string = &thrift.TypeSpec{
        CodecMapSpec: &thrift.CodecMapSpec{
	KeyTypeSpec:   premadeCodecTypeSpec_i32,
	ValueTypeSpec: premadeCodecTypeSpec_string,
    KeyWireType:   thrift.I32,
	ValueWireType: thrift.STRING,
},

    }
    premadeCodecTypeSpec_included_SomeMap = &thrift.TypeSpec{
        CodecTypedefSpec: &thrift.CodecTypedefSpec{
	UnderlyingTypeSpec: premadeCodecTypeSpec_map_i32_string,
},

    }
    premadeCodecTypeSpec_list_included_SomeMap = &thrift.TypeSpec{
        CodecListSpec: &thrift.CodecListSpec{
    ElementWireType: thrift.MAP,
	ElementTypeSpec: premadeCodecTypeSpec_included_SomeMap,
},

    }
    premadeCodecTypeSpec_included_SomeListOfTypeMap = &thrift.TypeSpec{
        CodecTypedefSpec: &thrift.CodecTypedefSpec{
	UnderlyingTypeSpec: premadeCodecTypeSpec_list_included_SomeMap,
},

    }
})

// Premade struct specs
var (
)

// Premade struct specs initializer
var premadeStructSpecsInitOnce = sync.OnceFunc(func() {
})

// Helper type to allow us to store codec specs in a slice at compile time,
// and put them in a map at runtime. See comment at the top of template
// about a compilation limitation that affects map literals.
type codecSpecWithFullName struct {
    fullName string
    typeSpec *thrift.TypeSpec
}

var premadeCodecSpecsSliceOnce = sync.OnceValue(
    func() []codecSpecWithFullName {
        // Relies on premade codec specs initialization
        premadeCodecSpecsInitOnce()
        results := make([]codecSpecWithFullName, 0)
        results = append(results, codecSpecWithFullName{ "i32", premadeCodecTypeSpec_i32 })
        results = append(results, codecSpecWithFullName{ "string", premadeCodecTypeSpec_string })
        results = append(results, codecSpecWithFullName{ "included.SomeMap", premadeCodecTypeSpec_included_SomeMap })
        results = append(results, codecSpecWithFullName{ "included.SomeListOfTypeMap", premadeCodecTypeSpec_included_SomeListOfTypeMap })
        return results
    },
)

var premadeCodecSpecsMapOnce = sync.OnceValue(
    func() map[string]*thrift.TypeSpec {
        codecSpecsWithFullName := premadeCodecSpecsSliceOnce()
        results := make(map[string]*thrift.TypeSpec, len(codecSpecsWithFullName))
        for _, value := range codecSpecsWithFullName {
            results[value.fullName] = value.typeSpec
        }
        return results
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
