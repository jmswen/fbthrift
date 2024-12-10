// Autogenerated by Thrift for thrift/compiler/test/fixtures/constants/src/module.thrift
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//  @generated

package module


import (
    "sync"

    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift/types"
)

// (needed to ensure safety because of naive import list construction)
var _ = thrift.ZERO

// Premade codec specs
var (
    premadeCodecTypeSpec_module_EmptyEnum *thrift.TypeSpec = nil
    premadeCodecTypeSpec_module_City *thrift.TypeSpec = nil
    premadeCodecTypeSpec_module_Company *thrift.TypeSpec = nil
    premadeCodecTypeSpec_i32 *thrift.TypeSpec = nil
    premadeCodecTypeSpec_string *thrift.TypeSpec = nil
    premadeCodecTypeSpec_double *thrift.TypeSpec = nil
    premadeCodecTypeSpec_module_Internship *thrift.TypeSpec = nil
    premadeCodecTypeSpec_module_Range *thrift.TypeSpec = nil
    premadeCodecTypeSpec_module_struct1 *thrift.TypeSpec = nil
    premadeCodecTypeSpec_list_i32 *thrift.TypeSpec = nil
    premadeCodecTypeSpec_module_struct2 *thrift.TypeSpec = nil
    premadeCodecTypeSpec_module_struct3 *thrift.TypeSpec = nil
    premadeCodecTypeSpec_byte *thrift.TypeSpec = nil
    premadeCodecTypeSpec_module_struct4 *thrift.TypeSpec = nil
    premadeCodecTypeSpec_module_union1 *thrift.TypeSpec = nil
    premadeCodecTypeSpec_module_union2 *thrift.TypeSpec = nil
    premadeCodecTypeSpec_module_MyCompany *thrift.TypeSpec = nil
    premadeCodecTypeSpec_module_MyStringIdentifier *thrift.TypeSpec = nil
    premadeCodecTypeSpec_module_MyIntIdentifier *thrift.TypeSpec = nil
    premadeCodecTypeSpec_map_string_string *thrift.TypeSpec = nil
    premadeCodecTypeSpec_module_MyMapIdentifier *thrift.TypeSpec = nil
)

// Premade codec specs initializer
var premadeCodecSpecsInitOnce = sync.OnceFunc(func() {
    premadeCodecTypeSpec_module_EmptyEnum = &thrift.TypeSpec{
        FullName: "module.EmptyEnum",
        CodecEnumSpec: &thrift.CodecEnumSpec{
    ScopedName: "module.EmptyEnum",
},

    }
    premadeCodecTypeSpec_module_City = &thrift.TypeSpec{
        FullName: "module.City",
        CodecEnumSpec: &thrift.CodecEnumSpec{
    ScopedName: "module.City",
},

    }
    premadeCodecTypeSpec_module_Company = &thrift.TypeSpec{
        FullName: "module.Company",
        CodecEnumSpec: &thrift.CodecEnumSpec{
    ScopedName: "module.Company",
},

    }
    premadeCodecTypeSpec_i32 = &thrift.TypeSpec{
        FullName: "i32",
        CodecPrimitiveSpec: &thrift.CodecPrimitiveSpec{
    PrimitiveType: thrift.CODEC_PRIMITIVE_TYPE_I32,
},

    }
    premadeCodecTypeSpec_string = &thrift.TypeSpec{
        FullName: "string",
        CodecPrimitiveSpec: &thrift.CodecPrimitiveSpec{
    PrimitiveType: thrift.CODEC_PRIMITIVE_TYPE_STRING,
},

    }
    premadeCodecTypeSpec_double = &thrift.TypeSpec{
        FullName: "double",
        CodecPrimitiveSpec: &thrift.CodecPrimitiveSpec{
    PrimitiveType: thrift.CODEC_PRIMITIVE_TYPE_DOUBLE,
},

    }
    premadeCodecTypeSpec_module_Internship = &thrift.TypeSpec{
        FullName: "module.Internship",
        CodecStructSpec: &thrift.CodecStructSpec{
    ScopedName: "module.Internship",
    IsUnion:    false,
    NewFunc:    func() thrift.Struct { return NewInternship() },
},

    }
    premadeCodecTypeSpec_module_Range = &thrift.TypeSpec{
        FullName: "module.Range",
        CodecStructSpec: &thrift.CodecStructSpec{
    ScopedName: "module.Range",
    IsUnion:    false,
    NewFunc:    func() thrift.Struct { return NewRange() },
},

    }
    premadeCodecTypeSpec_module_struct1 = &thrift.TypeSpec{
        FullName: "module.struct1",
        CodecStructSpec: &thrift.CodecStructSpec{
    ScopedName: "module.struct1",
    IsUnion:    false,
    NewFunc:    func() thrift.Struct { return NewStruct1() },
},

    }
    premadeCodecTypeSpec_list_i32 = &thrift.TypeSpec{
        FullName: "list<i32>",
        CodecListSpec: &thrift.CodecListSpec{
    ElementWireType: thrift.I32,
	ElementTypeSpec: premadeCodecTypeSpec_i32,
},

    }
    premadeCodecTypeSpec_module_struct2 = &thrift.TypeSpec{
        FullName: "module.struct2",
        CodecStructSpec: &thrift.CodecStructSpec{
    ScopedName: "module.struct2",
    IsUnion:    false,
    NewFunc:    func() thrift.Struct { return NewStruct2() },
},

    }
    premadeCodecTypeSpec_module_struct3 = &thrift.TypeSpec{
        FullName: "module.struct3",
        CodecStructSpec: &thrift.CodecStructSpec{
    ScopedName: "module.struct3",
    IsUnion:    false,
    NewFunc:    func() thrift.Struct { return NewStruct3() },
},

    }
    premadeCodecTypeSpec_byte = &thrift.TypeSpec{
        FullName: "byte",
        CodecPrimitiveSpec: &thrift.CodecPrimitiveSpec{
    PrimitiveType: thrift.CODEC_PRIMITIVE_TYPE_BYTE,
},

    }
    premadeCodecTypeSpec_module_struct4 = &thrift.TypeSpec{
        FullName: "module.struct4",
        CodecStructSpec: &thrift.CodecStructSpec{
    ScopedName: "module.struct4",
    IsUnion:    false,
    NewFunc:    func() thrift.Struct { return NewStruct4() },
},

    }
    premadeCodecTypeSpec_module_union1 = &thrift.TypeSpec{
        FullName: "module.union1",
        CodecStructSpec: &thrift.CodecStructSpec{
    ScopedName: "module.union1",
    IsUnion:    true,
    NewFunc:    func() thrift.Struct { return NewUnion1() },
},

    }
    premadeCodecTypeSpec_module_union2 = &thrift.TypeSpec{
        FullName: "module.union2",
        CodecStructSpec: &thrift.CodecStructSpec{
    ScopedName: "module.union2",
    IsUnion:    true,
    NewFunc:    func() thrift.Struct { return NewUnion2() },
},

    }
    premadeCodecTypeSpec_module_MyCompany = &thrift.TypeSpec{
        FullName: "module.MyCompany",
        CodecTypedefSpec: &thrift.CodecTypedefSpec{
    ScopedName:         "module.MyCompany",
	UnderlyingTypeSpec: premadeCodecTypeSpec_module_Company,
},

    }
    premadeCodecTypeSpec_module_MyStringIdentifier = &thrift.TypeSpec{
        FullName: "module.MyStringIdentifier",
        CodecTypedefSpec: &thrift.CodecTypedefSpec{
    ScopedName:         "module.MyStringIdentifier",
	UnderlyingTypeSpec: premadeCodecTypeSpec_string,
},

    }
    premadeCodecTypeSpec_module_MyIntIdentifier = &thrift.TypeSpec{
        FullName: "module.MyIntIdentifier",
        CodecTypedefSpec: &thrift.CodecTypedefSpec{
    ScopedName:         "module.MyIntIdentifier",
	UnderlyingTypeSpec: premadeCodecTypeSpec_i32,
},

    }
    premadeCodecTypeSpec_map_string_string = &thrift.TypeSpec{
        FullName: "map<string, string>",
        CodecMapSpec: &thrift.CodecMapSpec{
	KeyTypeSpec:   premadeCodecTypeSpec_string,
	ValueTypeSpec: premadeCodecTypeSpec_string,
    KeyWireType:   thrift.STRING,
	ValueWireType: thrift.STRING,
},

    }
    premadeCodecTypeSpec_module_MyMapIdentifier = &thrift.TypeSpec{
        FullName: "module.MyMapIdentifier",
        CodecTypedefSpec: &thrift.CodecTypedefSpec{
    ScopedName:         "module.MyMapIdentifier",
	UnderlyingTypeSpec: premadeCodecTypeSpec_map_string_string,
},

    }
})

// Premade struct specs
var (
    premadeStructSpec_Internship *thrift.StructSpec = nil
    premadeStructSpec_Range *thrift.StructSpec = nil
    premadeStructSpec_struct1 *thrift.StructSpec = nil
    premadeStructSpec_struct2 *thrift.StructSpec = nil
    premadeStructSpec_struct3 *thrift.StructSpec = nil
    premadeStructSpec_struct4 *thrift.StructSpec = nil
    premadeStructSpec_union1 *thrift.StructSpec = nil
    premadeStructSpec_union2 *thrift.StructSpec = nil
)

// Premade struct specs initializer
var premadeStructSpecsInitOnce = sync.OnceFunc(func() {
    premadeStructSpec_Internship = &thrift.StructSpec{
    Name:                 "Internship",
    ScopedName:           "module.Internship",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.I32,
            Name:                 "weeks",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_i32,
            MustBeSetToSerialize: false,
        },        {
            ID:                   2,
            WireType:             thrift.STRING,
            Name:                 "title",
            ReflectIndex:         1,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: false,
        },        {
            ID:                   3,
            WireType:             thrift.I32,
            Name:                 "employer",
            ReflectIndex:         2,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_module_Company,
            MustBeSetToSerialize: true,
        },        {
            ID:                   4,
            WireType:             thrift.DOUBLE,
            Name:                 "compensation",
            ReflectIndex:         3,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_double,
            MustBeSetToSerialize: true,
        },        {
            ID:                   5,
            WireType:             thrift.STRING,
            Name:                 "school",
            ReflectIndex:         4,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: true,
        },    },
    FieldSpecIDToIndex:   map[int16]int{
        1: 0,
        2: 1,
        3: 2,
        4: 3,
        5: 4,
    },
    FieldSpecNameToIndex: map[string]int{
        "weeks": 0,
        "title": 1,
        "employer": 2,
        "compensation": 3,
        "school": 4,
    },
}
    premadeStructSpec_Range = &thrift.StructSpec{
    Name:                 "Range",
    ScopedName:           "module.Range",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.I32,
            Name:                 "min",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_i32,
            MustBeSetToSerialize: false,
        },        {
            ID:                   2,
            WireType:             thrift.I32,
            Name:                 "max",
            ReflectIndex:         1,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_i32,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex:   map[int16]int{
        1: 0,
        2: 1,
    },
    FieldSpecNameToIndex: map[string]int{
        "min": 0,
        "max": 1,
    },
}
    premadeStructSpec_struct1 = &thrift.StructSpec{
    Name:                 "struct1",
    ScopedName:           "module.struct1",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.I32,
            Name:                 "a",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_i32,
            MustBeSetToSerialize: false,
        },        {
            ID:                   2,
            WireType:             thrift.STRING,
            Name:                 "b",
            ReflectIndex:         1,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex:   map[int16]int{
        1: 0,
        2: 1,
    },
    FieldSpecNameToIndex: map[string]int{
        "a": 0,
        "b": 1,
    },
}
    premadeStructSpec_struct2 = &thrift.StructSpec{
    Name:                 "struct2",
    ScopedName:           "module.struct2",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.I32,
            Name:                 "a",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_i32,
            MustBeSetToSerialize: false,
        },        {
            ID:                   2,
            WireType:             thrift.STRING,
            Name:                 "b",
            ReflectIndex:         1,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: false,
        },        {
            ID:                   3,
            WireType:             thrift.STRUCT,
            Name:                 "c",
            ReflectIndex:         2,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_module_struct1,
            MustBeSetToSerialize: true,
        },        {
            ID:                   4,
            WireType:             thrift.LIST,
            Name:                 "d",
            ReflectIndex:         3,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_list_i32,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex:   map[int16]int{
        1: 0,
        2: 1,
        3: 2,
        4: 3,
    },
    FieldSpecNameToIndex: map[string]int{
        "a": 0,
        "b": 1,
        "c": 2,
        "d": 3,
    },
}
    premadeStructSpec_struct3 = &thrift.StructSpec{
    Name:                 "struct3",
    ScopedName:           "module.struct3",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.STRING,
            Name:                 "a",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: false,
        },        {
            ID:                   2,
            WireType:             thrift.I32,
            Name:                 "b",
            ReflectIndex:         1,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_i32,
            MustBeSetToSerialize: false,
        },        {
            ID:                   3,
            WireType:             thrift.STRUCT,
            Name:                 "c",
            ReflectIndex:         2,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_module_struct2,
            MustBeSetToSerialize: true,
        },    },
    FieldSpecIDToIndex:   map[int16]int{
        1: 0,
        2: 1,
        3: 2,
    },
    FieldSpecNameToIndex: map[string]int{
        "a": 0,
        "b": 1,
        "c": 2,
    },
}
    premadeStructSpec_struct4 = &thrift.StructSpec{
    Name:                 "struct4",
    ScopedName:           "module.struct4",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.I32,
            Name:                 "a",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_i32,
            MustBeSetToSerialize: false,
        },        {
            ID:                   2,
            WireType:             thrift.DOUBLE,
            Name:                 "b",
            ReflectIndex:         1,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_double,
            MustBeSetToSerialize: true,
        },        {
            ID:                   3,
            WireType:             thrift.BYTE,
            Name:                 "c",
            ReflectIndex:         2,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_byte,
            MustBeSetToSerialize: true,
        },    },
    FieldSpecIDToIndex:   map[int16]int{
        1: 0,
        2: 1,
        3: 2,
    },
    FieldSpecNameToIndex: map[string]int{
        "a": 0,
        "b": 1,
        "c": 2,
    },
}
    premadeStructSpec_union1 = &thrift.StructSpec{
    Name:                 "union1",
    ScopedName:           "module.union1",
    IsUnion:              true,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.I32,
            Name:                 "i",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_i32,
            MustBeSetToSerialize: true,
        },        {
            ID:                   2,
            WireType:             thrift.DOUBLE,
            Name:                 "d",
            ReflectIndex:         1,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_double,
            MustBeSetToSerialize: true,
        },    },
    FieldSpecIDToIndex:   map[int16]int{
        1: 0,
        2: 1,
    },
    FieldSpecNameToIndex: map[string]int{
        "i": 0,
        "d": 1,
    },
}
    premadeStructSpec_union2 = &thrift.StructSpec{
    Name:                 "union2",
    ScopedName:           "module.union2",
    IsUnion:              true,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.I32,
            Name:                 "i",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_i32,
            MustBeSetToSerialize: true,
        },        {
            ID:                   2,
            WireType:             thrift.DOUBLE,
            Name:                 "d",
            ReflectIndex:         1,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_double,
            MustBeSetToSerialize: true,
        },        {
            ID:                   3,
            WireType:             thrift.STRUCT,
            Name:                 "s",
            ReflectIndex:         2,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_module_struct1,
            MustBeSetToSerialize: true,
        },        {
            ID:                   4,
            WireType:             thrift.STRUCT,
            Name:                 "u",
            ReflectIndex:         3,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_module_union1,
            MustBeSetToSerialize: true,
        },    },
    FieldSpecIDToIndex:   map[int16]int{
        1: 0,
        2: 1,
        3: 2,
        4: 3,
    },
    FieldSpecNameToIndex: map[string]int{
        "i": 0,
        "d": 1,
        "s": 2,
        "u": 3,
    },
}
})

// Premade slice of all struct specs
var premadeStructSpecsOnce = sync.OnceValue(
    func() []*thrift.StructSpec {
        // Relies on premade struct specs
        premadeStructSpecsInitOnce()

        fbthriftResults := make([]*thrift.StructSpec, 0)
        fbthriftResults = append(fbthriftResults, premadeStructSpec_Internship)
        fbthriftResults = append(fbthriftResults, premadeStructSpec_Range)
        fbthriftResults = append(fbthriftResults, premadeStructSpec_struct1)
        fbthriftResults = append(fbthriftResults, premadeStructSpec_struct2)
        fbthriftResults = append(fbthriftResults, premadeStructSpec_struct3)
        fbthriftResults = append(fbthriftResults, premadeStructSpec_struct4)
        fbthriftResults = append(fbthriftResults, premadeStructSpec_union1)
        fbthriftResults = append(fbthriftResults, premadeStructSpec_union2)
        return fbthriftResults
    },
)

var premadeCodecSpecsMapOnce = sync.OnceValue(
    func() map[string]*thrift.TypeSpec {
        // Relies on premade codec specs initialization
        premadeCodecSpecsInitOnce()

        fbthriftTypeSpecsMap := make(map[string]*thrift.TypeSpec)
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_module_EmptyEnum.FullName] = premadeCodecTypeSpec_module_EmptyEnum
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_module_City.FullName] = premadeCodecTypeSpec_module_City
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_module_Company.FullName] = premadeCodecTypeSpec_module_Company
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_i32.FullName] = premadeCodecTypeSpec_i32
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_string.FullName] = premadeCodecTypeSpec_string
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_double.FullName] = premadeCodecTypeSpec_double
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_module_Internship.FullName] = premadeCodecTypeSpec_module_Internship
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_module_Range.FullName] = premadeCodecTypeSpec_module_Range
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_module_struct1.FullName] = premadeCodecTypeSpec_module_struct1
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_module_struct2.FullName] = premadeCodecTypeSpec_module_struct2
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_module_struct3.FullName] = premadeCodecTypeSpec_module_struct3
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_byte.FullName] = premadeCodecTypeSpec_byte
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_module_struct4.FullName] = premadeCodecTypeSpec_module_struct4
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_module_union1.FullName] = premadeCodecTypeSpec_module_union1
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_module_union2.FullName] = premadeCodecTypeSpec_module_union2
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_module_MyCompany.FullName] = premadeCodecTypeSpec_module_MyCompany
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_module_MyStringIdentifier.FullName] = premadeCodecTypeSpec_module_MyStringIdentifier
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_module_MyIntIdentifier.FullName] = premadeCodecTypeSpec_module_MyIntIdentifier
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_module_MyMapIdentifier.FullName] = premadeCodecTypeSpec_module_MyMapIdentifier
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
