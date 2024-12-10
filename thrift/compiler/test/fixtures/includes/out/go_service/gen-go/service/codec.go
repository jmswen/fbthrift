// Autogenerated by Thrift for thrift/compiler/test/fixtures/includes/src/service.thrift
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//  @generated

package service


import (
    "sync"

    module "module"
    includes "includes"
    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift/types"
)

var _ = module.GoUnusedProtection__
var _ = includes.GoUnusedProtection__
// (needed to ensure safety because of naive import list construction)
var _ = thrift.ZERO

// Premade codec specs
var (
    premadeCodecTypeSpec_service_IncludesIncluded = func() *thrift.TypeSpec {
        return &thrift.TypeSpec{
            FullName: "service.IncludesIncluded",
            CodecTypedefSpec: &thrift.CodecTypedefSpec{
    ScopedName:         "service.IncludesIncluded",
	UnderlyingTypeSpec: includes.GetCodecTypeSpec("includes.Included"),
},

        }
    }()
    premadeCodecTypeSpec_service_IncludesTransitiveFoo = func() *thrift.TypeSpec {
        return &thrift.TypeSpec{
            FullName: "service.IncludesTransitiveFoo",
            CodecTypedefSpec: &thrift.CodecTypedefSpec{
    ScopedName:         "service.IncludesTransitiveFoo",
	UnderlyingTypeSpec: includes.GetCodecTypeSpec("includes.TransitiveFoo"),
},

        }
    }()
    premadeCodecTypeSpec_void = func() *thrift.TypeSpec {
        return &thrift.TypeSpec{
            FullName: "void",
            CodecPrimitiveSpec: &thrift.CodecPrimitiveSpec{
    PrimitiveType: thrift.CODEC_PRIMITIVE_TYPE_VOID,
},

        }
    }()
)

// Premade struct specs
var (
    premadeStructSpec_reqMyServiceQuery = func() *thrift.StructSpec {
        return &thrift.StructSpec{
    Name:                 "reqMyServiceQuery",
    ScopedName:           "service.reqMyServiceQuery",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.STRUCT,
            Name:                 "s",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        module.GetCodecTypeSpec("module.MyStruct"),
            MustBeSetToSerialize: true,
        },        {
            ID:                   2,
            WireType:             thrift.STRUCT,
            Name:                 "i",
            ReflectIndex:         1,
            IsOptional:           false,
            ValueTypeSpec:        includes.GetCodecTypeSpec("includes.Included"),
            MustBeSetToSerialize: true,
        },    },
    FieldSpecIDToIndex:   map[int16]int{
        1: 0,
        2: 1,
    },
    FieldSpecNameToIndex: map[string]int{
        "s": 0,
        "i": 1,
    },
}
    }()
    premadeStructSpec_respMyServiceQuery = func() *thrift.StructSpec {
        return &thrift.StructSpec{
    Name:                 "respMyServiceQuery",
    ScopedName:           "service.respMyServiceQuery",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
    },
    FieldSpecIDToIndex:   map[int16]int{
    },
    FieldSpecNameToIndex: map[string]int{
    },
}
    }()
    premadeStructSpec_reqMyServiceHasArgDocs = func() *thrift.StructSpec {
        return &thrift.StructSpec{
    Name:                 "reqMyServiceHasArgDocs",
    ScopedName:           "service.reqMyServiceHasArgDocs",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.STRUCT,
            Name:                 "s",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        module.GetCodecTypeSpec("module.MyStruct"),
            MustBeSetToSerialize: true,
        },        {
            ID:                   2,
            WireType:             thrift.STRUCT,
            Name:                 "i",
            ReflectIndex:         1,
            IsOptional:           false,
            ValueTypeSpec:        includes.GetCodecTypeSpec("includes.Included"),
            MustBeSetToSerialize: true,
        },    },
    FieldSpecIDToIndex:   map[int16]int{
        1: 0,
        2: 1,
    },
    FieldSpecNameToIndex: map[string]int{
        "s": 0,
        "i": 1,
    },
}
    }()
    premadeStructSpec_respMyServiceHasArgDocs = func() *thrift.StructSpec {
        return &thrift.StructSpec{
    Name:                 "respMyServiceHasArgDocs",
    ScopedName:           "service.respMyServiceHasArgDocs",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
    },
    FieldSpecIDToIndex:   map[int16]int{
    },
    FieldSpecNameToIndex: map[string]int{
    },
}
    }()
)

// Premade slice of all struct specs
var premadeStructSpecsOnce = sync.OnceValue(
    func() []*thrift.StructSpec {
        fbthriftResults := make([]*thrift.StructSpec, 0)
        return fbthriftResults
    },
)

var premadeCodecSpecsMapOnce = sync.OnceValue(
    func() map[string]*thrift.TypeSpec {
        fbthriftTypeSpecsMap := make(map[string]*thrift.TypeSpec)
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_service_IncludesIncluded.FullName] = premadeCodecTypeSpec_service_IncludesIncluded
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_service_IncludesTransitiveFoo.FullName] = premadeCodecTypeSpec_service_IncludesTransitiveFoo
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_void.FullName] = premadeCodecTypeSpec_void
        return fbthriftTypeSpecsMap
    },
)

// GetMetadataThriftType (INTERNAL USE ONLY).
// Returns metadata TypeSpec for a given full type name.
func GetCodecTypeSpec(fullName string) *thrift.TypeSpec {
    return premadeCodecSpecsMapOnce()[fullName]
}
