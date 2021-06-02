/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/service_h.h>

#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/EmptyServiceAsyncClient.h"
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/includes_types.h"
#include <folly/small_vector.h>

namespace folly {
  class IOBuf;
  class IOBufQueue;
}
namespace apache { namespace thrift {
  class Cpp2RequestContext;
  class BinaryProtocolReader;
  class CompactProtocolReader;
  namespace transport { class THeader; }
}}

namespace some { namespace valid { namespace ns {

class EmptyServiceSvAsyncIf {
 public:
  virtual ~EmptyServiceSvAsyncIf() {}
};

class EmptyServiceAsyncProcessor;

class EmptyServiceSvIf : public EmptyServiceSvAsyncIf, public apache::thrift::ServerInterface {
 public:
  typedef EmptyServiceAsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;


 private:
};

class EmptyServiceSvNull : public EmptyServiceSvIf {
 public:
};

class EmptyServiceAsyncProcessor : public ::apache::thrift::GeneratedAsyncProcessor {
 public:
  const char* getServiceName() override;
  void getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) override;
  using BaseAsyncProcessor = void;
 protected:
  EmptyServiceSvIf* iface_;
 public:
  void processSerializedCompressedRequest(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
 public:
  using ProcessFuncs = GeneratedAsyncProcessor::ProcessFuncs<EmptyServiceAsyncProcessor>;
  using ProcessMap = GeneratedAsyncProcessor::ProcessMap<ProcessFuncs>;
  static const EmptyServiceAsyncProcessor::ProcessMap& getOwnProcessMap();
 private:
  static const EmptyServiceAsyncProcessor::ProcessMap kOwnProcessMap_;
 private:
 public:
  EmptyServiceAsyncProcessor(EmptyServiceSvIf* iface) :
      iface_(iface) {}

  virtual ~EmptyServiceAsyncProcessor() {}
};

}}} // some::valid::ns
