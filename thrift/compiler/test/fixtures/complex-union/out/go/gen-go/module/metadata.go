// Autogenerated by Thrift for thrift/compiler/test/fixtures/complex-union/src/module.thrift
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//  @generated

package module

import (
    "maps"
    "sync"

    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift/types"
    metadata "github.com/facebook/fbthrift/thrift/lib/thrift/metadata"
)

// (needed to ensure safety because of naive import list construction)
var _ = thrift.ZERO
var _ = maps.Copy[map[int]int, map[int]int]
var _ = metadata.GoUnusedProtection__

// Premade Thrift types
var (
    premadeThriftType_i64 *metadata.ThriftType = nil
    premadeThriftType_string *metadata.ThriftType = nil
    premadeThriftType_list_i64 *metadata.ThriftType = nil
    premadeThriftType_list_string *metadata.ThriftType = nil
    premadeThriftType_i16 *metadata.ThriftType = nil
    premadeThriftType_map_i16_string *metadata.ThriftType = nil
    premadeThriftType_module_containerTypedef *metadata.ThriftType = nil
    premadeThriftType_module_ComplexUnion *metadata.ThriftType = nil
    premadeThriftType_module_ListUnion *metadata.ThriftType = nil
    premadeThriftType_binary *metadata.ThriftType = nil
    premadeThriftType_module_DataUnion *metadata.ThriftType = nil
    premadeThriftType_i32 *metadata.ThriftType = nil
    premadeThriftType_module_Val *metadata.ThriftType = nil
    premadeThriftType_module_ValUnion *metadata.ThriftType = nil
    premadeThriftType_module_VirtualComplexUnion *metadata.ThriftType = nil
    premadeThriftType_module_NonCopyableStruct *metadata.ThriftType = nil
    premadeThriftType_module_NonCopyableUnion *metadata.ThriftType = nil
)

// Premade Thrift type initializer
var premadeThriftTypesInitOnce = sync.OnceFunc(func() {
    premadeThriftType_i64 = metadata.NewThriftType().SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_I64_TYPE.Ptr(),
    )
    premadeThriftType_string = metadata.NewThriftType().SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_STRING_TYPE.Ptr(),
    )
    premadeThriftType_list_i64 = metadata.NewThriftType().SetTList(
        metadata.NewThriftListType().
            SetValueType(premadeThriftType_i64),
    )
    premadeThriftType_list_string = metadata.NewThriftType().SetTList(
        metadata.NewThriftListType().
            SetValueType(premadeThriftType_string),
    )
    premadeThriftType_i16 = metadata.NewThriftType().SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_I16_TYPE.Ptr(),
    )
    premadeThriftType_map_i16_string = metadata.NewThriftType().SetTMap(
        metadata.NewThriftMapType().
            SetKeyType(premadeThriftType_i16).
            SetValueType(premadeThriftType_string),
    )
    premadeThriftType_module_containerTypedef = metadata.NewThriftType().SetTTypedef(
        metadata.NewThriftTypedefType().
            SetName("module.containerTypedef").
            SetUnderlyingType(premadeThriftType_map_i16_string),
    )
    premadeThriftType_module_ComplexUnion = metadata.NewThriftType().SetTUnion(
        metadata.NewThriftUnionType().
            SetName("module.ComplexUnion"),
    )
    premadeThriftType_module_ListUnion = metadata.NewThriftType().SetTUnion(
        metadata.NewThriftUnionType().
            SetName("module.ListUnion"),
    )
    premadeThriftType_binary = metadata.NewThriftType().SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_BINARY_TYPE.Ptr(),
    )
    premadeThriftType_module_DataUnion = metadata.NewThriftType().SetTUnion(
        metadata.NewThriftUnionType().
            SetName("module.DataUnion"),
    )
    premadeThriftType_i32 = metadata.NewThriftType().SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_I32_TYPE.Ptr(),
    )
    premadeThriftType_module_Val = metadata.NewThriftType().SetTStruct(
        metadata.NewThriftStructType().
            SetName("module.Val"),
    )
    premadeThriftType_module_ValUnion = metadata.NewThriftType().SetTUnion(
        metadata.NewThriftUnionType().
            SetName("module.ValUnion"),
    )
    premadeThriftType_module_VirtualComplexUnion = metadata.NewThriftType().SetTUnion(
        metadata.NewThriftUnionType().
            SetName("module.VirtualComplexUnion"),
    )
    premadeThriftType_module_NonCopyableStruct = metadata.NewThriftType().SetTStruct(
        metadata.NewThriftStructType().
            SetName("module.NonCopyableStruct"),
    )
    premadeThriftType_module_NonCopyableUnion = metadata.NewThriftType().SetTUnion(
        metadata.NewThriftUnionType().
            SetName("module.NonCopyableUnion"),
    )
})

// Helper type to allow us to store Thrift types in a slice at compile time,
// and put them in a map at runtime. See comment at the top of template
// about a compilation limitation that affects map literals.
type thriftTypeWithFullName struct {
    fullName   string
    thriftType *metadata.ThriftType
}

var premadeThriftTypesSliceOnce = sync.OnceValue(
    func() []thriftTypeWithFullName {
        // Relies on premade Thrift types initialization
        premadeThriftTypesInitOnce()
        results := make([]thriftTypeWithFullName, 0)
        results = append(results, thriftTypeWithFullName{ "i64", premadeThriftType_i64 })
        results = append(results, thriftTypeWithFullName{ "string", premadeThriftType_string })
        results = append(results, thriftTypeWithFullName{ "i16", premadeThriftType_i16 })
        results = append(results, thriftTypeWithFullName{ "module.containerTypedef", premadeThriftType_module_containerTypedef })
        results = append(results, thriftTypeWithFullName{ "module.ComplexUnion", premadeThriftType_module_ComplexUnion })
        results = append(results, thriftTypeWithFullName{ "module.ListUnion", premadeThriftType_module_ListUnion })
        results = append(results, thriftTypeWithFullName{ "binary", premadeThriftType_binary })
        results = append(results, thriftTypeWithFullName{ "module.DataUnion", premadeThriftType_module_DataUnion })
        results = append(results, thriftTypeWithFullName{ "i32", premadeThriftType_i32 })
        results = append(results, thriftTypeWithFullName{ "module.Val", premadeThriftType_module_Val })
        results = append(results, thriftTypeWithFullName{ "module.ValUnion", premadeThriftType_module_ValUnion })
        results = append(results, thriftTypeWithFullName{ "module.VirtualComplexUnion", premadeThriftType_module_VirtualComplexUnion })
        results = append(results, thriftTypeWithFullName{ "module.NonCopyableStruct", premadeThriftType_module_NonCopyableStruct })
        results = append(results, thriftTypeWithFullName{ "module.NonCopyableUnion", premadeThriftType_module_NonCopyableUnion })
        return results
    },
)

var premadeThriftTypesMapOnce = sync.OnceValue(
    func() map[string]*metadata.ThriftType {
        thriftTypesWithFullName := premadeThriftTypesSliceOnce()
        results := make(map[string]*metadata.ThriftType, len(thriftTypesWithFullName))
        for _, value := range thriftTypesWithFullName {
            results[value.fullName] = value.thriftType
        }
        return results
    },
)

var structMetadatasOnce = sync.OnceValue(
    func() []*metadata.ThriftStruct {
        // Relies on premade Thrift types initialization
        premadeThriftTypesInitOnce()
        results := make([]*metadata.ThriftStruct, 0)
        results = append(results, metadata.NewThriftStruct().
    SetName("module.ComplexUnion").
    SetIsUnion(true).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("intValue").
    SetIsOptional(false).
    SetType(premadeThriftType_i64),
            metadata.NewThriftField().
    SetId(2).
    SetName("intListValue").
    SetIsOptional(false).
    SetType(premadeThriftType_list_i64),
            metadata.NewThriftField().
    SetId(3).
    SetName("stringListValue").
    SetIsOptional(false).
    SetType(premadeThriftType_list_string),
            metadata.NewThriftField().
    SetId(5).
    SetName("stringValue").
    SetIsOptional(false).
    SetType(premadeThriftType_string),
            metadata.NewThriftField().
    SetId(9).
    SetName("typedefValue").
    SetIsOptional(false).
    SetType(premadeThriftType_module_containerTypedef),
            metadata.NewThriftField().
    SetId(14).
    SetName("stringRef").
    SetIsOptional(false).
    SetType(premadeThriftType_string),
        },
    ))
        results = append(results, metadata.NewThriftStruct().
    SetName("module.ListUnion").
    SetIsUnion(true).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(2).
    SetName("intListValue").
    SetIsOptional(false).
    SetType(premadeThriftType_list_i64),
            metadata.NewThriftField().
    SetId(3).
    SetName("stringListValue").
    SetIsOptional(false).
    SetType(premadeThriftType_list_string),
        },
    ))
        results = append(results, metadata.NewThriftStruct().
    SetName("module.DataUnion").
    SetIsUnion(true).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("binaryData").
    SetIsOptional(false).
    SetType(premadeThriftType_binary),
            metadata.NewThriftField().
    SetId(2).
    SetName("stringData").
    SetIsOptional(false).
    SetType(premadeThriftType_string),
        },
    ))
        results = append(results, metadata.NewThriftStruct().
    SetName("module.Val").
    SetIsUnion(false).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("strVal").
    SetIsOptional(false).
    SetType(premadeThriftType_string),
            metadata.NewThriftField().
    SetId(2).
    SetName("intVal").
    SetIsOptional(false).
    SetType(premadeThriftType_i32),
            metadata.NewThriftField().
    SetId(9).
    SetName("typedefValue").
    SetIsOptional(false).
    SetType(premadeThriftType_module_containerTypedef),
        },
    ))
        results = append(results, metadata.NewThriftStruct().
    SetName("module.ValUnion").
    SetIsUnion(true).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("v1").
    SetIsOptional(false).
    SetType(premadeThriftType_module_Val),
            metadata.NewThriftField().
    SetId(2).
    SetName("v2").
    SetIsOptional(false).
    SetType(premadeThriftType_module_Val),
        },
    ))
        results = append(results, metadata.NewThriftStruct().
    SetName("module.VirtualComplexUnion").
    SetIsUnion(true).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("thingOne").
    SetIsOptional(false).
    SetType(premadeThriftType_string),
            metadata.NewThriftField().
    SetId(2).
    SetName("thingTwo").
    SetIsOptional(false).
    SetType(premadeThriftType_string),
        },
    ))
        results = append(results, metadata.NewThriftStruct().
    SetName("module.NonCopyableStruct").
    SetIsUnion(false).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("num").
    SetIsOptional(false).
    SetType(premadeThriftType_i64),
        },
    ))
        results = append(results, metadata.NewThriftStruct().
    SetName("module.NonCopyableUnion").
    SetIsUnion(true).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("s").
    SetIsOptional(false).
    SetType(premadeThriftType_module_NonCopyableStruct),
        },
    ))
        return results
    },
)

var exceptionMetadatasOnce = sync.OnceValue(
    func() []*metadata.ThriftException {
        // Relies on premade Thrift types initialization
        premadeThriftTypesInitOnce()
        return []*metadata.ThriftException{
        }
    },
)

var enumMetadatasOnce = sync.OnceValue(
    func() []*metadata.ThriftEnum {
        // Relies on premade Thrift types initialization
        premadeThriftTypesInitOnce()
        return []*metadata.ThriftEnum{
        }
    },
)

var serviceMetadatasOnce = sync.OnceValue(
    func() []*metadata.ThriftService {
        // Relies on premade Thrift types initialization
        premadeThriftTypesInitOnce()
        return []*metadata.ThriftService{
        }
    },
)

// GetMetadataThriftType (INTERNAL USE ONLY).
// Returns metadata ThriftType for a given full type name.
func GetMetadataThriftType(fullName string) *metadata.ThriftType {
    return premadeThriftTypesMapOnce()[fullName]
}

// GetThriftMetadata returns complete Thrift metadata for current and imported packages.
func GetThriftMetadata() *metadata.ThriftMetadata {
    allEnumsMap := make(map[string]*metadata.ThriftEnum)
    allStructsMap := make(map[string]*metadata.ThriftStruct)
    allExceptionsMap := make(map[string]*metadata.ThriftException)
    allServicesMap := make(map[string]*metadata.ThriftService)

    // Add enum metadatas from the current program...
    for _, enumMetadata := range enumMetadatasOnce() {
        allEnumsMap[enumMetadata.GetName()] = enumMetadata
    }
    // Add struct metadatas from the current program...
    for _, structMetadata := range structMetadatasOnce() {
        allStructsMap[structMetadata.GetName()] = structMetadata
    }
    // Add exception metadatas from the current program...
    for _, exceptionMetadata := range exceptionMetadatasOnce() {
        allExceptionsMap[exceptionMetadata.GetName()] = exceptionMetadata
    }
    // Add service metadatas from the current program...
    for _, serviceMetadata := range serviceMetadatasOnce() {
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
