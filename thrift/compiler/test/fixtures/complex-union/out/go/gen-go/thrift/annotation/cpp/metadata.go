// Autogenerated by Thrift for thrift/annotation/cpp.thrift
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//  @generated

package cpp

import (
    "maps"

    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift/types"
    metadata "github.com/facebook/fbthrift/thrift/lib/thrift/metadata"
)

// (needed to ensure safety because of naive import list construction)
var _ = thrift.ZERO
var _ = maps.Copy[map[int]int, map[int]int]
var _ = metadata.GoUnusedProtection__

// Premade Thrift types
var (
    premadeThriftType_cpp_RefType = func() *metadata.ThriftType {
        return metadata.NewThriftType().SetTEnum(
            metadata.NewThriftEnumType().
                SetName("cpp.RefType"),
        )
    }()
    premadeThriftType_cpp_EnumUnderlyingType = func() *metadata.ThriftType {
        return metadata.NewThriftType().SetTEnum(
            metadata.NewThriftEnumType().
                SetName("cpp.EnumUnderlyingType"),
        )
    }()
    premadeThriftType_string = func() *metadata.ThriftType {
        return metadata.NewThriftType().SetTPrimitive(
            metadata.ThriftPrimitiveType_THRIFT_STRING_TYPE.Ptr(),
        )
    }()
    premadeThriftType_cpp_Name = func() *metadata.ThriftType {
        return metadata.NewThriftType().SetTStruct(
            metadata.NewThriftStructType().
                SetName("cpp.Name"),
        )
    }()
    premadeThriftType_cpp_Type = func() *metadata.ThriftType {
        return metadata.NewThriftType().SetTStruct(
            metadata.NewThriftStructType().
                SetName("cpp.Type"),
        )
    }()
    premadeThriftType_cpp_Ref = func() *metadata.ThriftType {
        return metadata.NewThriftType().SetTStruct(
            metadata.NewThriftStructType().
                SetName("cpp.Ref"),
        )
    }()
    premadeThriftType_bool = func() *metadata.ThriftType {
        return metadata.NewThriftType().SetTPrimitive(
            metadata.ThriftPrimitiveType_THRIFT_BOOL_TYPE.Ptr(),
        )
    }()
    premadeThriftType_cpp_Lazy = func() *metadata.ThriftType {
        return metadata.NewThriftType().SetTStruct(
            metadata.NewThriftStructType().
                SetName("cpp.Lazy"),
        )
    }()
    premadeThriftType_cpp_DisableLazyChecksum = func() *metadata.ThriftType {
        return metadata.NewThriftType().SetTStruct(
            metadata.NewThriftStructType().
                SetName("cpp.DisableLazyChecksum"),
        )
    }()
    premadeThriftType_cpp_Adapter = func() *metadata.ThriftType {
        return metadata.NewThriftType().SetTStruct(
            metadata.NewThriftStructType().
                SetName("cpp.Adapter"),
        )
    }()
    premadeThriftType_cpp_PackIsset = func() *metadata.ThriftType {
        return metadata.NewThriftType().SetTStruct(
            metadata.NewThriftStructType().
                SetName("cpp.PackIsset"),
        )
    }()
    premadeThriftType_cpp_MinimizePadding = func() *metadata.ThriftType {
        return metadata.NewThriftType().SetTStruct(
            metadata.NewThriftStructType().
                SetName("cpp.MinimizePadding"),
        )
    }()
    premadeThriftType_cpp_ScopedEnumAsUnionType = func() *metadata.ThriftType {
        return metadata.NewThriftType().SetTStruct(
            metadata.NewThriftStructType().
                SetName("cpp.ScopedEnumAsUnionType"),
        )
    }()
    premadeThriftType_cpp_FieldInterceptor = func() *metadata.ThriftType {
        return metadata.NewThriftType().SetTStruct(
            metadata.NewThriftStructType().
                SetName("cpp.FieldInterceptor"),
        )
    }()
    premadeThriftType_cpp_UseOpEncode = func() *metadata.ThriftType {
        return metadata.NewThriftType().SetTStruct(
            metadata.NewThriftStructType().
                SetName("cpp.UseOpEncode"),
        )
    }()
    premadeThriftType_cpp_EnumType = func() *metadata.ThriftType {
        return metadata.NewThriftType().SetTStruct(
            metadata.NewThriftStructType().
                SetName("cpp.EnumType"),
        )
    }()
    premadeThriftType_cpp_Frozen2Exclude = func() *metadata.ThriftType {
        return metadata.NewThriftType().SetTStruct(
            metadata.NewThriftStructType().
                SetName("cpp.Frozen2Exclude"),
        )
    }()
    premadeThriftType_cpp_Frozen2RequiresCompleteContainerParams = func() *metadata.ThriftType {
        return metadata.NewThriftType().SetTStruct(
            metadata.NewThriftStructType().
                SetName("cpp.Frozen2RequiresCompleteContainerParams"),
        )
    }()
    premadeThriftType_cpp_ProcessInEbThreadUnsafe = func() *metadata.ThriftType {
        return metadata.NewThriftType().SetTStruct(
            metadata.NewThriftStructType().
                SetName("cpp.ProcessInEbThreadUnsafe"),
        )
    }()
    premadeThriftType_cpp_RuntimeAnnotation = func() *metadata.ThriftType {
        return metadata.NewThriftType().SetTStruct(
            metadata.NewThriftStructType().
                SetName("cpp.RuntimeAnnotation"),
        )
    }()
    premadeThriftType_cpp_UseCursorSerialization = func() *metadata.ThriftType {
        return metadata.NewThriftType().SetTStruct(
            metadata.NewThriftStructType().
                SetName("cpp.UseCursorSerialization"),
        )
    }()
    premadeThriftType_cpp_GenerateDeprecatedHeaderClientMethods = func() *metadata.ThriftType {
        return metadata.NewThriftType().SetTStruct(
            metadata.NewThriftStructType().
                SetName("cpp.GenerateDeprecatedHeaderClientMethods"),
        )
    }()
)

// Helper type to allow us to store Thrift types in a slice at compile time,
// and put them in a map at runtime. See comment at the top of template
// about a compilation limitation that affects map literals.
type thriftTypeWithFullName struct {
    fullName   string
    thriftType *metadata.ThriftType
}

var premadeThriftTypesMap = func() map[string]*metadata.ThriftType {
    thriftTypesWithFullName := make([]thriftTypeWithFullName, 0)
    thriftTypesWithFullName = append(thriftTypesWithFullName, thriftTypeWithFullName{ "cpp.RefType", premadeThriftType_cpp_RefType })
    thriftTypesWithFullName = append(thriftTypesWithFullName, thriftTypeWithFullName{ "cpp.EnumUnderlyingType", premadeThriftType_cpp_EnumUnderlyingType })
    thriftTypesWithFullName = append(thriftTypesWithFullName, thriftTypeWithFullName{ "string", premadeThriftType_string })
    thriftTypesWithFullName = append(thriftTypesWithFullName, thriftTypeWithFullName{ "cpp.Name", premadeThriftType_cpp_Name })
    thriftTypesWithFullName = append(thriftTypesWithFullName, thriftTypeWithFullName{ "cpp.Type", premadeThriftType_cpp_Type })
    thriftTypesWithFullName = append(thriftTypesWithFullName, thriftTypeWithFullName{ "cpp.Ref", premadeThriftType_cpp_Ref })
    thriftTypesWithFullName = append(thriftTypesWithFullName, thriftTypeWithFullName{ "bool", premadeThriftType_bool })
    thriftTypesWithFullName = append(thriftTypesWithFullName, thriftTypeWithFullName{ "cpp.Lazy", premadeThriftType_cpp_Lazy })
    thriftTypesWithFullName = append(thriftTypesWithFullName, thriftTypeWithFullName{ "cpp.DisableLazyChecksum", premadeThriftType_cpp_DisableLazyChecksum })
    thriftTypesWithFullName = append(thriftTypesWithFullName, thriftTypeWithFullName{ "cpp.Adapter", premadeThriftType_cpp_Adapter })
    thriftTypesWithFullName = append(thriftTypesWithFullName, thriftTypeWithFullName{ "cpp.PackIsset", premadeThriftType_cpp_PackIsset })
    thriftTypesWithFullName = append(thriftTypesWithFullName, thriftTypeWithFullName{ "cpp.MinimizePadding", premadeThriftType_cpp_MinimizePadding })
    thriftTypesWithFullName = append(thriftTypesWithFullName, thriftTypeWithFullName{ "cpp.ScopedEnumAsUnionType", premadeThriftType_cpp_ScopedEnumAsUnionType })
    thriftTypesWithFullName = append(thriftTypesWithFullName, thriftTypeWithFullName{ "cpp.FieldInterceptor", premadeThriftType_cpp_FieldInterceptor })
    thriftTypesWithFullName = append(thriftTypesWithFullName, thriftTypeWithFullName{ "cpp.UseOpEncode", premadeThriftType_cpp_UseOpEncode })
    thriftTypesWithFullName = append(thriftTypesWithFullName, thriftTypeWithFullName{ "cpp.EnumType", premadeThriftType_cpp_EnumType })
    thriftTypesWithFullName = append(thriftTypesWithFullName, thriftTypeWithFullName{ "cpp.Frozen2Exclude", premadeThriftType_cpp_Frozen2Exclude })
    thriftTypesWithFullName = append(thriftTypesWithFullName, thriftTypeWithFullName{ "cpp.Frozen2RequiresCompleteContainerParams", premadeThriftType_cpp_Frozen2RequiresCompleteContainerParams })
    thriftTypesWithFullName = append(thriftTypesWithFullName, thriftTypeWithFullName{ "cpp.ProcessInEbThreadUnsafe", premadeThriftType_cpp_ProcessInEbThreadUnsafe })
    thriftTypesWithFullName = append(thriftTypesWithFullName, thriftTypeWithFullName{ "cpp.RuntimeAnnotation", premadeThriftType_cpp_RuntimeAnnotation })
    thriftTypesWithFullName = append(thriftTypesWithFullName, thriftTypeWithFullName{ "cpp.UseCursorSerialization", premadeThriftType_cpp_UseCursorSerialization })
    thriftTypesWithFullName = append(thriftTypesWithFullName, thriftTypeWithFullName{ "cpp.GenerateDeprecatedHeaderClientMethods", premadeThriftType_cpp_GenerateDeprecatedHeaderClientMethods })

    fbthriftThriftTypesMap := make(map[string]*metadata.ThriftType, len(thriftTypesWithFullName))
    for _, value := range thriftTypesWithFullName {
        fbthriftThriftTypesMap[value.fullName] = value.thriftType
    }
    return fbthriftThriftTypesMap
}()

var structMetadatas = func() []*metadata.ThriftStruct {
    fbthriftResults := make([]*metadata.ThriftStruct, 0)
    for _, fbthriftStructSpec := range premadeStructSpecs {
        if !fbthriftStructSpec.IsException {
            fbthriftResults = append(fbthriftResults, getMetadataThriftStruct(fbthriftStructSpec))
        }
    }
    return fbthriftResults
}()

var exceptionMetadatas = func() []*metadata.ThriftException {
    fbthriftResults := make([]*metadata.ThriftException, 0)
    for _, fbthriftStructSpec := range premadeStructSpecs {
        if fbthriftStructSpec.IsException {
            fbthriftResults = append(fbthriftResults, getMetadataThriftException(fbthriftStructSpec))
        }
    }
    return fbthriftResults
}()

var enumMetadatas = func() []*metadata.ThriftEnum {
    fbthriftResults := make([]*metadata.ThriftEnum, 0)
    fbthriftResults = append(fbthriftResults, metadata.NewThriftEnum().
    SetName("cpp.RefType").
    SetElements(
        map[int32]string{
            0: "Unique",
            1: "Shared",
            2: "SharedMutable",
        },
    ))
    fbthriftResults = append(fbthriftResults, metadata.NewThriftEnum().
    SetName("cpp.EnumUnderlyingType").
    SetElements(
        map[int32]string{
            0: "I8",
            1: "U8",
            2: "I16",
            3: "U16",
            4: "U32",
        },
    ))
    return fbthriftResults
}()

var serviceMetadatas = func() []*metadata.ThriftService {
    fbthriftResults := make([]*metadata.ThriftService, 0)
    return fbthriftResults
}()

// GetMetadataThriftType (INTERNAL USE ONLY).
// Returns metadata ThriftType for a given full type name.
func GetMetadataThriftType(fullName string) *metadata.ThriftType {
    return premadeThriftTypesMap[fullName]
}

// GetThriftMetadata returns complete Thrift metadata for current and imported packages.
func GetThriftMetadata() *metadata.ThriftMetadata {
    allEnumsMap := make(map[string]*metadata.ThriftEnum)
    allStructsMap := make(map[string]*metadata.ThriftStruct)
    allExceptionsMap := make(map[string]*metadata.ThriftException)
    allServicesMap := make(map[string]*metadata.ThriftService)

    // Add enum metadatas from the current program...
    for _, enumMetadata := range enumMetadatas {
        allEnumsMap[enumMetadata.GetName()] = enumMetadata
    }
    // Add struct metadatas from the current program...
    for _, structMetadata := range structMetadatas {
        allStructsMap[structMetadata.GetName()] = structMetadata
    }
    // Add exception metadatas from the current program...
    for _, exceptionMetadata := range exceptionMetadatas {
        allExceptionsMap[exceptionMetadata.GetName()] = exceptionMetadata
    }
    // Add service metadatas from the current program...
    for _, serviceMetadata := range serviceMetadatas {
        allServicesMap[serviceMetadata.GetName()] = serviceMetadata
    }

    // Obtain Thrift metadatas from recursively included programs...
    var recursiveThriftMetadatas []*metadata.ThriftMetadata

    // ...now merge metadatas from recursively included programs.
    for _, thriftMetadata := range recursiveThriftMetadatas {
        maps.Copy(allEnumsMap, thriftMetadata.GetEnums())
        maps.Copy(allStructsMap, thriftMetadata.GetStructs())
        maps.Copy(allExceptionsMap, thriftMetadata.GetExceptions())
        maps.Copy(allServicesMap, thriftMetadata.GetServices())
    }

    return metadata.NewThriftMetadata().
        SetEnums(allEnumsMap).
        SetStructs(allStructsMap).
        SetExceptions(allExceptionsMap).
        SetServices(allServicesMap)
}

// GetThriftMetadataForService returns Thrift metadata for the given service.
func GetThriftMetadataForService(scopedServiceName string) *metadata.ThriftMetadata {
    thriftMetadata := GetThriftMetadata()

    allServicesMap := thriftMetadata.GetServices()
    relevantServicesMap := make(map[string]*metadata.ThriftService)

    serviceMetadata := allServicesMap[scopedServiceName]
    // Visit and record all recursive parents of the target service.
    for serviceMetadata != nil {
        relevantServicesMap[serviceMetadata.GetName()] = serviceMetadata
        if serviceMetadata.IsSetParent() {
            serviceMetadata = allServicesMap[serviceMetadata.GetParent()]
        } else {
            serviceMetadata = nil
        }
    }

    thriftMetadata.SetServices(relevantServicesMap)

    return thriftMetadata
}

func getMetadataThriftPrimitiveType(s *thrift.CodecPrimitiveSpec) *metadata.ThriftPrimitiveType {
	var value metadata.ThriftPrimitiveType

	switch s.PrimitiveType {
	case thrift.CODEC_PRIMITIVE_TYPE_BYTE:
		value = metadata.ThriftPrimitiveType_THRIFT_BYTE_TYPE
	case thrift.CODEC_PRIMITIVE_TYPE_BOOL:
		value = metadata.ThriftPrimitiveType_THRIFT_BOOL_TYPE
	case thrift.CODEC_PRIMITIVE_TYPE_I16:
		value = metadata.ThriftPrimitiveType_THRIFT_I16_TYPE
	case thrift.CODEC_PRIMITIVE_TYPE_I32:
		value = metadata.ThriftPrimitiveType_THRIFT_I32_TYPE
	case thrift.CODEC_PRIMITIVE_TYPE_I64:
		value = metadata.ThriftPrimitiveType_THRIFT_I64_TYPE
	case thrift.CODEC_PRIMITIVE_TYPE_FLOAT:
		value = metadata.ThriftPrimitiveType_THRIFT_FLOAT_TYPE
	case thrift.CODEC_PRIMITIVE_TYPE_DOUBLE:
		value = metadata.ThriftPrimitiveType_THRIFT_DOUBLE_TYPE
	case thrift.CODEC_PRIMITIVE_TYPE_BINARY:
		value = metadata.ThriftPrimitiveType_THRIFT_BINARY_TYPE
	case thrift.CODEC_PRIMITIVE_TYPE_STRING:
		value = metadata.ThriftPrimitiveType_THRIFT_STRING_TYPE
	}

	return value.Ptr()
}

func getMetadataThriftEnumType(s *thrift.CodecEnumSpec) *metadata.ThriftEnumType {
	return metadata.NewThriftEnumType().
		SetName(s.ScopedName)
}

func getMetadataThriftSetType(s *thrift.CodecSetSpec) *metadata.ThriftSetType {
	return metadata.NewThriftSetType().
		SetValueType(getMetadataThriftType(s.ElementTypeSpec))
}

func getMetadataThriftListType(s *thrift.CodecListSpec) *metadata.ThriftListType {
	return metadata.NewThriftListType().
		SetValueType(getMetadataThriftType(s.ElementTypeSpec))
}

func getMetadataThriftMapType(s *thrift.CodecMapSpec) *metadata.ThriftMapType {
	return metadata.NewThriftMapType().
		SetKeyType(getMetadataThriftType(s.KeyTypeSpec)).
		SetValueType(getMetadataThriftType(s.ValueTypeSpec))
}

func getMetadataThriftTypedefType(s *thrift.CodecTypedefSpec) *metadata.ThriftTypedefType {
	return metadata.NewThriftTypedefType().
		SetName(s.ScopedName).
		SetUnderlyingType(getMetadataThriftType(s.UnderlyingTypeSpec))
}

func getMetadataThriftStructType(s *thrift.CodecStructSpec) *metadata.ThriftStructType {
	return metadata.NewThriftStructType().
		SetName(s.ScopedName)
}

func getMetadataThriftUnionType(s *thrift.CodecStructSpec) *metadata.ThriftUnionType {
	return metadata.NewThriftUnionType().
		SetName(s.ScopedName)
}

func getMetadataThriftType(s *thrift.TypeSpec) *metadata.ThriftType {
	thriftType := metadata.NewThriftType()
	switch {
	case s.CodecPrimitiveSpec != nil:
		thriftType.SetTPrimitive(getMetadataThriftPrimitiveType(s.CodecPrimitiveSpec))
	case s.CodecEnumSpec != nil:
		thriftType.SetTEnum(getMetadataThriftEnumType(s.CodecEnumSpec))
	case s.CodecSetSpec != nil:
		thriftType.SetTSet(getMetadataThriftSetType(s.CodecSetSpec))
	case s.CodecListSpec != nil:
		thriftType.SetTList(getMetadataThriftListType(s.CodecListSpec))
	case s.CodecMapSpec != nil:
		thriftType.SetTMap(getMetadataThriftMapType(s.CodecMapSpec))
	case s.CodecTypedefSpec != nil:
		thriftType.SetTTypedef(getMetadataThriftTypedefType(s.CodecTypedefSpec))
	case s.CodecStructSpec != nil:
		if s.CodecStructSpec.IsUnion {
			thriftType.SetTUnion(getMetadataThriftUnionType(s.CodecStructSpec))
		} else {
			thriftType.SetTStruct(getMetadataThriftStructType(s.CodecStructSpec))
		}
	}
	return thriftType
}

func getMetadataThriftField(s *thrift.FieldSpec) *metadata.ThriftField {
	return metadata.NewThriftField().
		SetId(int32(s.ID)).
		SetName(s.Name).
		SetIsOptional(s.IsOptional).
		SetType(getMetadataThriftType(s.ValueTypeSpec))
}

func getMetadataThriftStruct(s *thrift.StructSpec) *metadata.ThriftStruct {
	metadataThriftFields := make([]*metadata.ThriftField, len(s.FieldSpecs), len(s.FieldSpecs))
	for i, fieldSpec := range s.FieldSpecs {
		metadataThriftFields[i] = getMetadataThriftField(&fieldSpec)
	}

	return metadata.NewThriftStruct().
		SetName(s.ScopedName).
		SetIsUnion(s.IsUnion).
		SetFields(metadataThriftFields)
}

func getMetadataThriftException(s *thrift.StructSpec) *metadata.ThriftException {
	metadataThriftFields := make([]*metadata.ThriftField, len(s.FieldSpecs), len(s.FieldSpecs))
	for i, fieldSpec := range s.FieldSpecs {
		metadataThriftFields[i] = getMetadataThriftField(&fieldSpec)
	}

	return metadata.NewThriftException().
		SetName(s.ScopedName).
		SetFields(metadataThriftFields)
}
