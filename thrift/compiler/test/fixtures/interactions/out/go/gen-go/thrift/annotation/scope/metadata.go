// Autogenerated by Thrift for thrift/annotation/scope.thrift
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//  @generated

package scope

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
    premadeThriftType_scope_Transitive *metadata.ThriftType = nil
    premadeThriftType_scope_Program *metadata.ThriftType = nil
    premadeThriftType_scope_Struct *metadata.ThriftType = nil
    premadeThriftType_scope_Union *metadata.ThriftType = nil
    premadeThriftType_scope_Exception *metadata.ThriftType = nil
    premadeThriftType_scope_Field *metadata.ThriftType = nil
    premadeThriftType_scope_Typedef *metadata.ThriftType = nil
    premadeThriftType_scope_Service *metadata.ThriftType = nil
    premadeThriftType_scope_Interaction *metadata.ThriftType = nil
    premadeThriftType_scope_Function *metadata.ThriftType = nil
    premadeThriftType_scope_EnumValue *metadata.ThriftType = nil
    premadeThriftType_scope_Const *metadata.ThriftType = nil
    premadeThriftType_scope_Enum *metadata.ThriftType = nil
    premadeThriftType_scope_Structured *metadata.ThriftType = nil
    premadeThriftType_scope_Interface *metadata.ThriftType = nil
    premadeThriftType_scope_RootDefinition *metadata.ThriftType = nil
    premadeThriftType_scope_Definition *metadata.ThriftType = nil
)

// Premade Thrift type initializer
var premadeThriftTypesInitOnce = sync.OnceFunc(func() {
    premadeThriftType_scope_Transitive = metadata.NewThriftType().SetTStruct(
        metadata.NewThriftStructType().
            SetName("scope.Transitive"),
    )
    premadeThriftType_scope_Program = metadata.NewThriftType().SetTStruct(
        metadata.NewThriftStructType().
            SetName("scope.Program"),
    )
    premadeThriftType_scope_Struct = metadata.NewThriftType().SetTStruct(
        metadata.NewThriftStructType().
            SetName("scope.Struct"),
    )
    premadeThriftType_scope_Union = metadata.NewThriftType().SetTStruct(
        metadata.NewThriftStructType().
            SetName("scope.Union"),
    )
    premadeThriftType_scope_Exception = metadata.NewThriftType().SetTStruct(
        metadata.NewThriftStructType().
            SetName("scope.Exception"),
    )
    premadeThriftType_scope_Field = metadata.NewThriftType().SetTStruct(
        metadata.NewThriftStructType().
            SetName("scope.Field"),
    )
    premadeThriftType_scope_Typedef = metadata.NewThriftType().SetTStruct(
        metadata.NewThriftStructType().
            SetName("scope.Typedef"),
    )
    premadeThriftType_scope_Service = metadata.NewThriftType().SetTStruct(
        metadata.NewThriftStructType().
            SetName("scope.Service"),
    )
    premadeThriftType_scope_Interaction = metadata.NewThriftType().SetTStruct(
        metadata.NewThriftStructType().
            SetName("scope.Interaction"),
    )
    premadeThriftType_scope_Function = metadata.NewThriftType().SetTStruct(
        metadata.NewThriftStructType().
            SetName("scope.Function"),
    )
    premadeThriftType_scope_EnumValue = metadata.NewThriftType().SetTStruct(
        metadata.NewThriftStructType().
            SetName("scope.EnumValue"),
    )
    premadeThriftType_scope_Const = metadata.NewThriftType().SetTStruct(
        metadata.NewThriftStructType().
            SetName("scope.Const"),
    )
    premadeThriftType_scope_Enum = metadata.NewThriftType().SetTStruct(
        metadata.NewThriftStructType().
            SetName("scope.Enum"),
    )
    premadeThriftType_scope_Structured = metadata.NewThriftType().SetTStruct(
        metadata.NewThriftStructType().
            SetName("scope.Structured"),
    )
    premadeThriftType_scope_Interface = metadata.NewThriftType().SetTStruct(
        metadata.NewThriftStructType().
            SetName("scope.Interface"),
    )
    premadeThriftType_scope_RootDefinition = metadata.NewThriftType().SetTStruct(
        metadata.NewThriftStructType().
            SetName("scope.RootDefinition"),
    )
    premadeThriftType_scope_Definition = metadata.NewThriftType().SetTStruct(
        metadata.NewThriftStructType().
            SetName("scope.Definition"),
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
        results = append(results, thriftTypeWithFullName{ "scope.Transitive", premadeThriftType_scope_Transitive })
        results = append(results, thriftTypeWithFullName{ "scope.Program", premadeThriftType_scope_Program })
        results = append(results, thriftTypeWithFullName{ "scope.Struct", premadeThriftType_scope_Struct })
        results = append(results, thriftTypeWithFullName{ "scope.Union", premadeThriftType_scope_Union })
        results = append(results, thriftTypeWithFullName{ "scope.Exception", premadeThriftType_scope_Exception })
        results = append(results, thriftTypeWithFullName{ "scope.Field", premadeThriftType_scope_Field })
        results = append(results, thriftTypeWithFullName{ "scope.Typedef", premadeThriftType_scope_Typedef })
        results = append(results, thriftTypeWithFullName{ "scope.Service", premadeThriftType_scope_Service })
        results = append(results, thriftTypeWithFullName{ "scope.Interaction", premadeThriftType_scope_Interaction })
        results = append(results, thriftTypeWithFullName{ "scope.Function", premadeThriftType_scope_Function })
        results = append(results, thriftTypeWithFullName{ "scope.EnumValue", premadeThriftType_scope_EnumValue })
        results = append(results, thriftTypeWithFullName{ "scope.Const", premadeThriftType_scope_Const })
        results = append(results, thriftTypeWithFullName{ "scope.Enum", premadeThriftType_scope_Enum })
        results = append(results, thriftTypeWithFullName{ "scope.Structured", premadeThriftType_scope_Structured })
        results = append(results, thriftTypeWithFullName{ "scope.Interface", premadeThriftType_scope_Interface })
        results = append(results, thriftTypeWithFullName{ "scope.RootDefinition", premadeThriftType_scope_RootDefinition })
        results = append(results, thriftTypeWithFullName{ "scope.Definition", premadeThriftType_scope_Definition })
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
    SetName("scope.Transitive").
    SetIsUnion(false))
        results = append(results, metadata.NewThriftStruct().
    SetName("scope.Program").
    SetIsUnion(false))
        results = append(results, metadata.NewThriftStruct().
    SetName("scope.Struct").
    SetIsUnion(false))
        results = append(results, metadata.NewThriftStruct().
    SetName("scope.Union").
    SetIsUnion(false))
        results = append(results, metadata.NewThriftStruct().
    SetName("scope.Exception").
    SetIsUnion(false))
        results = append(results, metadata.NewThriftStruct().
    SetName("scope.Field").
    SetIsUnion(false))
        results = append(results, metadata.NewThriftStruct().
    SetName("scope.Typedef").
    SetIsUnion(false))
        results = append(results, metadata.NewThriftStruct().
    SetName("scope.Service").
    SetIsUnion(false))
        results = append(results, metadata.NewThriftStruct().
    SetName("scope.Interaction").
    SetIsUnion(false))
        results = append(results, metadata.NewThriftStruct().
    SetName("scope.Function").
    SetIsUnion(false))
        results = append(results, metadata.NewThriftStruct().
    SetName("scope.EnumValue").
    SetIsUnion(false))
        results = append(results, metadata.NewThriftStruct().
    SetName("scope.Const").
    SetIsUnion(false))
        results = append(results, metadata.NewThriftStruct().
    SetName("scope.Enum").
    SetIsUnion(false))
        results = append(results, metadata.NewThriftStruct().
    SetName("scope.Structured").
    SetIsUnion(false))
        results = append(results, metadata.NewThriftStruct().
    SetName("scope.Interface").
    SetIsUnion(false))
        results = append(results, metadata.NewThriftStruct().
    SetName("scope.RootDefinition").
    SetIsUnion(false))
        results = append(results, metadata.NewThriftStruct().
    SetName("scope.Definition").
    SetIsUnion(false))
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
