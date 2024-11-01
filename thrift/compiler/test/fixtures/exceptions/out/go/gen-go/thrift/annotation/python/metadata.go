// Autogenerated by Thrift for thrift/annotation/python.thrift
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//  @generated

package python

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
    premadeThriftType_python_Py3Hidden *metadata.ThriftType = nil
    premadeThriftType_string *metadata.ThriftType = nil
    premadeThriftType_python_PyDeprecatedHidden *metadata.ThriftType = nil
    premadeThriftType_python_Flags *metadata.ThriftType = nil
    premadeThriftType_python_Name *metadata.ThriftType = nil
    premadeThriftType_python_Adapter *metadata.ThriftType = nil
    premadeThriftType_bool *metadata.ThriftType = nil
    premadeThriftType_python_UseCAPI *metadata.ThriftType = nil
)

// Premade Thrift type initializer
var premadeThriftTypesInitOnce = sync.OnceFunc(func() {
    premadeThriftType_python_Py3Hidden = metadata.NewThriftType().SetTStruct(
        metadata.NewThriftStructType().
            SetName("python.Py3Hidden"),
    )
    premadeThriftType_string = metadata.NewThriftType().SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_STRING_TYPE.Ptr(),
    )
    premadeThriftType_python_PyDeprecatedHidden = metadata.NewThriftType().SetTStruct(
        metadata.NewThriftStructType().
            SetName("python.PyDeprecatedHidden"),
    )
    premadeThriftType_python_Flags = metadata.NewThriftType().SetTStruct(
        metadata.NewThriftStructType().
            SetName("python.Flags"),
    )
    premadeThriftType_python_Name = metadata.NewThriftType().SetTStruct(
        metadata.NewThriftStructType().
            SetName("python.Name"),
    )
    premadeThriftType_python_Adapter = metadata.NewThriftType().SetTStruct(
        metadata.NewThriftStructType().
            SetName("python.Adapter"),
    )
    premadeThriftType_bool = metadata.NewThriftType().SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_BOOL_TYPE.Ptr(),
    )
    premadeThriftType_python_UseCAPI = metadata.NewThriftType().SetTStruct(
        metadata.NewThriftStructType().
            SetName("python.UseCAPI"),
    )
})

// Helper type to allow us to store Thrift types in a slice at compile time,
// and put them in a map at runtime. See comment at the top of template
// about a compilation limitation that affects map literals.
type thriftTypeWithFullName struct {
    fullName   string
    thriftType *metadata.ThriftType
}

var premadeThriftTypesMapOnce = sync.OnceValue(
    func() map[string]*metadata.ThriftType {
        // Relies on premade Thrift types initialization
        premadeThriftTypesInitOnce()

        thriftTypesWithFullName := make([]thriftTypeWithFullName, 0)
        thriftTypesWithFullName = append(thriftTypesWithFullName, thriftTypeWithFullName{ "python.Py3Hidden", premadeThriftType_python_Py3Hidden })
        thriftTypesWithFullName = append(thriftTypesWithFullName, thriftTypeWithFullName{ "string", premadeThriftType_string })
        thriftTypesWithFullName = append(thriftTypesWithFullName, thriftTypeWithFullName{ "python.PyDeprecatedHidden", premadeThriftType_python_PyDeprecatedHidden })
        thriftTypesWithFullName = append(thriftTypesWithFullName, thriftTypeWithFullName{ "python.Flags", premadeThriftType_python_Flags })
        thriftTypesWithFullName = append(thriftTypesWithFullName, thriftTypeWithFullName{ "python.Name", premadeThriftType_python_Name })
        thriftTypesWithFullName = append(thriftTypesWithFullName, thriftTypeWithFullName{ "python.Adapter", premadeThriftType_python_Adapter })
        thriftTypesWithFullName = append(thriftTypesWithFullName, thriftTypeWithFullName{ "bool", premadeThriftType_bool })
        thriftTypesWithFullName = append(thriftTypesWithFullName, thriftTypeWithFullName{ "python.UseCAPI", premadeThriftType_python_UseCAPI })

        fbthriftThriftTypesMap := make(map[string]*metadata.ThriftType, len(thriftTypesWithFullName))
        for _, value := range thriftTypesWithFullName {
            fbthriftThriftTypesMap[value.fullName] = value.thriftType
        }
        return fbthriftThriftTypesMap
    },
)

var structMetadatasOnce = sync.OnceValue(
    func() []*metadata.ThriftStruct {
        // Relies on premade Thrift types initialization
        premadeThriftTypesInitOnce()
        fbthriftThriftStructs := make([]*metadata.ThriftStruct, 0)
        fbthriftThriftStructs = append(fbthriftThriftStructs, metadata.NewThriftStruct().
    SetName("python.Py3Hidden").
    SetIsUnion(false))
        fbthriftThriftStructs = append(fbthriftThriftStructs, metadata.NewThriftStruct().
    SetName("python.PyDeprecatedHidden").
    SetIsUnion(false).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("reason").
    SetIsOptional(false).
    SetType(premadeThriftType_string),
        },
    ))
        fbthriftThriftStructs = append(fbthriftThriftStructs, metadata.NewThriftStruct().
    SetName("python.Flags").
    SetIsUnion(false))
        fbthriftThriftStructs = append(fbthriftThriftStructs, metadata.NewThriftStruct().
    SetName("python.Name").
    SetIsUnion(false).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("name").
    SetIsOptional(false).
    SetType(premadeThriftType_string),
        },
    ))
        fbthriftThriftStructs = append(fbthriftThriftStructs, metadata.NewThriftStruct().
    SetName("python.Adapter").
    SetIsUnion(false).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("name").
    SetIsOptional(false).
    SetType(premadeThriftType_string),
            metadata.NewThriftField().
    SetId(2).
    SetName("typeHint").
    SetIsOptional(false).
    SetType(premadeThriftType_string),
        },
    ))
        fbthriftThriftStructs = append(fbthriftThriftStructs, metadata.NewThriftStruct().
    SetName("python.UseCAPI").
    SetIsUnion(false).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("serialize").
    SetIsOptional(false).
    SetType(premadeThriftType_bool),
        },
    ))
        return fbthriftThriftStructs
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
