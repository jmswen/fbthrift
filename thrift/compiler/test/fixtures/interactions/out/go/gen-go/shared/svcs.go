// Autogenerated by Thrift for shared.thrift
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//  @generated

package shared


import (
    "context"
    "fmt"
    "strings"

    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift"
    metadata "github.com/facebook/fbthrift/thrift/lib/thrift/metadata"
)

// (needed to ensure safety because of naive import list construction)
var _ = context.Background
var _ = fmt.Printf
var _ = strings.Split
var _ = thrift.ZERO
var _ = metadata.GoUnusedProtection__



type InteractLocally interface {
}

type InteractLocallyChannelClientInterface interface {
    thrift.ClientInterface
    InteractLocally
}

type InteractLocallyClientInterface interface {
    thrift.ClientInterface
}

type InteractLocallyContextClientInterface interface {
    InteractLocallyClientInterface
}

type InteractLocallyChannelClient struct {
    ch thrift.RequestChannel
}
// Compile time interface enforcer
var _ InteractLocallyChannelClientInterface = (*InteractLocallyChannelClient)(nil)

func NewInteractLocallyChannelClient(channel thrift.RequestChannel) *InteractLocallyChannelClient {
    return &InteractLocallyChannelClient{
        ch: channel,
    }
}

func (c *InteractLocallyChannelClient) Close() error {
    return c.ch.Close()
}

type InteractLocallyClient struct {
    chClient *InteractLocallyChannelClient
}
// Compile time interface enforcer
var _ InteractLocallyClientInterface = (*InteractLocallyClient)(nil)
var _ InteractLocallyContextClientInterface = (*InteractLocallyClient)(nil)

func NewInteractLocallyClient(prot thrift.Protocol) *InteractLocallyClient {
    return &InteractLocallyClient{
        chClient: NewInteractLocallyChannelClient(
            thrift.NewSerialChannel(prot),
        ),
    }
}

func (c *InteractLocallyClient) Close() error {
    return c.chClient.Close()
}



type InteractLocallyProcessor struct {
    processorFunctionMap map[string]thrift.ProcessorFunction
    functionServiceMap   map[string]string
    handler            InteractLocally
}
// Compile time interface enforcer
var _ thrift.Processor = (*InteractLocallyProcessor)(nil)

func NewInteractLocallyProcessor(handler InteractLocally) *InteractLocallyProcessor {
    p := &InteractLocallyProcessor{
        handler:              handler,
        processorFunctionMap: make(map[string]thrift.ProcessorFunction),
        functionServiceMap:   make(map[string]string),
    }

    return p
}

func (p *InteractLocallyProcessor) AddToProcessorFunctionMap(key string, processorFunction thrift.ProcessorFunction) {
    p.processorFunctionMap[key] = processorFunction
}

func (p *InteractLocallyProcessor) AddToFunctionServiceMap(key, service string) {
    p.functionServiceMap[key] = service
}

func (p *InteractLocallyProcessor) GetProcessorFunction(key string) (processor thrift.ProcessorFunction) {
    return p.processorFunctionMap[key]
}

func (p *InteractLocallyProcessor) ProcessorFunctionMap() map[string]thrift.ProcessorFunction {
    return p.processorFunctionMap
}

func (p *InteractLocallyProcessor) FunctionServiceMap() map[string]string {
    return p.functionServiceMap
}

func (p *InteractLocallyProcessor) GetThriftMetadata() *metadata.ThriftMetadata {
    return GetThriftMetadataForService("shared.InteractLocally")
}


