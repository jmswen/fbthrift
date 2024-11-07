// Autogenerated by Thrift for thrift/compiler/test/fixtures/go-typedef/src/module1.thrift
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//  @generated

package module1

import (
    "maps"
    "sync"

    module0 "module0"
    module2 "module2"
    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift/types"
    metadata "github.com/facebook/fbthrift/thrift/lib/thrift/metadata"
)

var _ = module0.GoUnusedProtection__
var _ = module2.GoUnusedProtection__
// (needed to ensure safety because of naive import list construction)
var _ = thrift.ZERO
var _ = maps.Copy[map[int]int, map[int]int]
var _ = metadata.GoUnusedProtection__

// Premade Thrift types
var (
    premadeThriftType_string *metadata.ThriftType = nil
    premadeThriftType_module1_Plate *metadata.ThriftType = nil
    premadeThriftType_i32 *metadata.ThriftType = nil
    premadeThriftType_module1_Year *metadata.ThriftType = nil
    premadeThriftType_list_string *metadata.ThriftType = nil
    premadeThriftType_module1_Drivers *metadata.ThriftType = nil
    premadeThriftType_module1_Accessory *metadata.ThriftType = nil
    premadeThriftType_list_module1_Accessory *metadata.ThriftType = nil
    premadeThriftType_module1_PartName *metadata.ThriftType = nil
    premadeThriftType_map_i32_module1_PartName *metadata.ThriftType = nil
    premadeThriftType_module1_Automobile *metadata.ThriftType = nil
    premadeThriftType_i64 *metadata.ThriftType = nil
    premadeThriftType_module1_MapKey *metadata.ThriftType = nil
    premadeThriftType_map_module1_MapKey_string *metadata.ThriftType = nil
    premadeThriftType_module1_MapContainer *metadata.ThriftType = nil
    premadeThriftType_module1_Car *metadata.ThriftType = nil
    premadeThriftType_module1_Pair *metadata.ThriftType = nil
    premadeThriftType_list_module1_Automobile *metadata.ThriftType = nil
    premadeThriftType_list_module1_Car *metadata.ThriftType = nil
    premadeThriftType_module1_Collection *metadata.ThriftType = nil
    premadeThriftType_module1_State *metadata.ThriftType = nil
    premadeThriftType_module1_Enum *metadata.ThriftType = nil
)

// Premade Thrift type initializer
var premadeThriftTypesInitOnce = sync.OnceFunc(func() {
    premadeThriftType_string = metadata.NewThriftType().SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_STRING_TYPE.Ptr(),
    )
    premadeThriftType_module1_Plate = metadata.NewThriftType().SetTTypedef(
        metadata.NewThriftTypedefType().
            SetName("module1.Plate").
            SetUnderlyingType(premadeThriftType_string),
    )
    premadeThriftType_i32 = metadata.NewThriftType().SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_I32_TYPE.Ptr(),
    )
    premadeThriftType_module1_Year = metadata.NewThriftType().SetTTypedef(
        metadata.NewThriftTypedefType().
            SetName("module1.Year").
            SetUnderlyingType(premadeThriftType_i32),
    )
    premadeThriftType_list_string = metadata.NewThriftType().SetTList(
        metadata.NewThriftListType().
            SetValueType(premadeThriftType_string),
    )
    premadeThriftType_module1_Drivers = metadata.NewThriftType().SetTTypedef(
        metadata.NewThriftTypedefType().
            SetName("module1.Drivers").
            SetUnderlyingType(premadeThriftType_list_string),
    )
    premadeThriftType_module1_Accessory = metadata.NewThriftType().SetTTypedef(
        metadata.NewThriftTypedefType().
            SetName("module1.Accessory").
            SetUnderlyingType(module0.GetMetadataThriftType("module0.Accessory")),
    )
    premadeThriftType_list_module1_Accessory = metadata.NewThriftType().SetTList(
        metadata.NewThriftListType().
            SetValueType(premadeThriftType_module1_Accessory),
    )
    premadeThriftType_module1_PartName = metadata.NewThriftType().SetTTypedef(
        metadata.NewThriftTypedefType().
            SetName("module1.PartName").
            SetUnderlyingType(module0.GetMetadataThriftType("module0.PartName")),
    )
    premadeThriftType_map_i32_module1_PartName = metadata.NewThriftType().SetTMap(
        metadata.NewThriftMapType().
            SetKeyType(premadeThriftType_i32).
            SetValueType(premadeThriftType_module1_PartName),
    )
    premadeThriftType_module1_Automobile = metadata.NewThriftType().SetTStruct(
        metadata.NewThriftStructType().
            SetName("module1.Automobile"),
    )
    premadeThriftType_i64 = metadata.NewThriftType().SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_I64_TYPE.Ptr(),
    )
    premadeThriftType_module1_MapKey = metadata.NewThriftType().SetTStruct(
        metadata.NewThriftStructType().
            SetName("module1.MapKey"),
    )
    premadeThriftType_map_module1_MapKey_string = metadata.NewThriftType().SetTMap(
        metadata.NewThriftMapType().
            SetKeyType(premadeThriftType_module1_MapKey).
            SetValueType(premadeThriftType_string),
    )
    premadeThriftType_module1_MapContainer = metadata.NewThriftType().SetTStruct(
        metadata.NewThriftStructType().
            SetName("module1.MapContainer"),
    )
    premadeThriftType_module1_Car = metadata.NewThriftType().SetTTypedef(
        metadata.NewThriftTypedefType().
            SetName("module1.Car").
            SetUnderlyingType(premadeThriftType_module1_Automobile),
    )
    premadeThriftType_module1_Pair = metadata.NewThriftType().SetTStruct(
        metadata.NewThriftStructType().
            SetName("module1.Pair"),
    )
    premadeThriftType_list_module1_Automobile = metadata.NewThriftType().SetTList(
        metadata.NewThriftListType().
            SetValueType(premadeThriftType_module1_Automobile),
    )
    premadeThriftType_list_module1_Car = metadata.NewThriftType().SetTList(
        metadata.NewThriftListType().
            SetValueType(premadeThriftType_module1_Car),
    )
    premadeThriftType_module1_Collection = metadata.NewThriftType().SetTStruct(
        metadata.NewThriftStructType().
            SetName("module1.Collection"),
    )
    premadeThriftType_module1_State = metadata.NewThriftType().SetTTypedef(
        metadata.NewThriftTypedefType().
            SetName("module1.State").
            SetUnderlyingType(premadeThriftType_string),
    )
    premadeThriftType_module1_Enum = metadata.NewThriftType().SetTTypedef(
        metadata.NewThriftTypedefType().
            SetName("module1.Enum").
            SetUnderlyingType(module2.GetMetadataThriftType("module2.Enum")),
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
        thriftTypesWithFullName = append(thriftTypesWithFullName, thriftTypeWithFullName{ "string", premadeThriftType_string })
        thriftTypesWithFullName = append(thriftTypesWithFullName, thriftTypeWithFullName{ "module1.Plate", premadeThriftType_module1_Plate })
        thriftTypesWithFullName = append(thriftTypesWithFullName, thriftTypeWithFullName{ "i32", premadeThriftType_i32 })
        thriftTypesWithFullName = append(thriftTypesWithFullName, thriftTypeWithFullName{ "module1.Year", premadeThriftType_module1_Year })
        thriftTypesWithFullName = append(thriftTypesWithFullName, thriftTypeWithFullName{ "module1.Drivers", premadeThriftType_module1_Drivers })
        thriftTypesWithFullName = append(thriftTypesWithFullName, thriftTypeWithFullName{ "module1.Accessory", premadeThriftType_module1_Accessory })
        thriftTypesWithFullName = append(thriftTypesWithFullName, thriftTypeWithFullName{ "module1.PartName", premadeThriftType_module1_PartName })
        thriftTypesWithFullName = append(thriftTypesWithFullName, thriftTypeWithFullName{ "module1.Automobile", premadeThriftType_module1_Automobile })
        thriftTypesWithFullName = append(thriftTypesWithFullName, thriftTypeWithFullName{ "i64", premadeThriftType_i64 })
        thriftTypesWithFullName = append(thriftTypesWithFullName, thriftTypeWithFullName{ "module1.MapKey", premadeThriftType_module1_MapKey })
        thriftTypesWithFullName = append(thriftTypesWithFullName, thriftTypeWithFullName{ "module1.MapContainer", premadeThriftType_module1_MapContainer })
        thriftTypesWithFullName = append(thriftTypesWithFullName, thriftTypeWithFullName{ "module1.Car", premadeThriftType_module1_Car })
        thriftTypesWithFullName = append(thriftTypesWithFullName, thriftTypeWithFullName{ "module1.Pair", premadeThriftType_module1_Pair })
        thriftTypesWithFullName = append(thriftTypesWithFullName, thriftTypeWithFullName{ "module1.Collection", premadeThriftType_module1_Collection })
        thriftTypesWithFullName = append(thriftTypesWithFullName, thriftTypeWithFullName{ "module1.State", premadeThriftType_module1_State })
        thriftTypesWithFullName = append(thriftTypesWithFullName, thriftTypeWithFullName{ "module1.Enum", premadeThriftType_module1_Enum })

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

        fbthriftResults := make([]*metadata.ThriftStruct, 0)
        fbthriftResults = append(fbthriftResults, metadata.NewThriftStruct().
    SetName("module1.Automobile").
    SetIsUnion(false).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("plate").
    SetIsOptional(false).
    SetType(premadeThriftType_module1_Plate),
            metadata.NewThriftField().
    SetId(2).
    SetName("previous_plate").
    SetIsOptional(true).
    SetType(premadeThriftType_module1_Plate),
            metadata.NewThriftField().
    SetId(3).
    SetName("first_plate").
    SetIsOptional(true).
    SetType(premadeThriftType_module1_Plate),
            metadata.NewThriftField().
    SetId(4).
    SetName("year").
    SetIsOptional(false).
    SetType(premadeThriftType_module1_Year),
            metadata.NewThriftField().
    SetId(5).
    SetName("drivers").
    SetIsOptional(false).
    SetType(premadeThriftType_module1_Drivers),
            metadata.NewThriftField().
    SetId(6).
    SetName("Accessories").
    SetIsOptional(false).
    SetType(premadeThriftType_list_module1_Accessory),
            metadata.NewThriftField().
    SetId(7).
    SetName("PartNames").
    SetIsOptional(false).
    SetType(premadeThriftType_map_i32_module1_PartName),
        },
    ))
        fbthriftResults = append(fbthriftResults, metadata.NewThriftStruct().
    SetName("module1.MapKey").
    SetIsUnion(false).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("num").
    SetIsOptional(false).
    SetType(premadeThriftType_i64),
            metadata.NewThriftField().
    SetId(2).
    SetName("strval").
    SetIsOptional(false).
    SetType(premadeThriftType_string),
        },
    ))
        fbthriftResults = append(fbthriftResults, metadata.NewThriftStruct().
    SetName("module1.MapContainer").
    SetIsUnion(false).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("mapval").
    SetIsOptional(false).
    SetType(premadeThriftType_map_module1_MapKey_string),
        },
    ))
        fbthriftResults = append(fbthriftResults, metadata.NewThriftStruct().
    SetName("module1.Pair").
    SetIsUnion(false).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("automobile").
    SetIsOptional(false).
    SetType(premadeThriftType_module1_Automobile),
            metadata.NewThriftField().
    SetId(2).
    SetName("car").
    SetIsOptional(false).
    SetType(premadeThriftType_module1_Car),
        },
    ))
        fbthriftResults = append(fbthriftResults, metadata.NewThriftStruct().
    SetName("module1.Collection").
    SetIsUnion(false).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("automobiles").
    SetIsOptional(false).
    SetType(premadeThriftType_list_module1_Automobile),
            metadata.NewThriftField().
    SetId(2).
    SetName("cars").
    SetIsOptional(false).
    SetType(premadeThriftType_list_module1_Car),
        },
    ))
        return fbthriftResults
    },
)

var exceptionMetadatasOnce = sync.OnceValue(
    func() []*metadata.ThriftException {
        // Relies on premade Thrift types initialization
        premadeThriftTypesInitOnce()

        fbthriftResults := make([]*metadata.ThriftException, 0)
        return fbthriftResults
    },
)

var enumMetadatasOnce = sync.OnceValue(
    func() []*metadata.ThriftEnum {
        // Relies on premade Thrift types initialization
        premadeThriftTypesInitOnce()

        fbthriftResults := make([]*metadata.ThriftEnum, 0)
        return fbthriftResults
    },
)

var serviceMetadatasOnce = sync.OnceValue(
    func() []*metadata.ThriftService {
        // Relies on premade Thrift types initialization
        premadeThriftTypesInitOnce()

        fbthriftResults := make([]*metadata.ThriftService, 0)
        fbthriftResults = append(fbthriftResults, metadata.NewThriftService().
    SetName("module1.Finder").
    SetFunctions(
        []*metadata.ThriftFunction{
            metadata.NewThriftFunction().
    SetName("byPlate").
    SetIsOneway(false).
    SetReturnType(premadeThriftType_module1_Automobile).
    SetArguments(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("plate").
    SetIsOptional(false).
    SetType(premadeThriftType_module1_Plate),
        },
    ),
            metadata.NewThriftFunction().
    SetName("aliasByPlate").
    SetIsOneway(false).
    SetReturnType(premadeThriftType_module1_Car).
    SetArguments(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("plate").
    SetIsOptional(false).
    SetType(premadeThriftType_module1_Plate),
        },
    ),
            metadata.NewThriftFunction().
    SetName("previousPlate").
    SetIsOneway(false).
    SetReturnType(premadeThriftType_module1_Plate).
    SetArguments(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("plate").
    SetIsOptional(false).
    SetType(premadeThriftType_module1_Plate),
        },
    ),
        },
    ))
        return fbthriftResults
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
    recursiveThriftMetadatas = append(recursiveThriftMetadatas, module0.GetThriftMetadata())
    recursiveThriftMetadatas = append(recursiveThriftMetadatas, module2.GetThriftMetadata())

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
