/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/service_h.h>

#include "thrift/compiler/test/fixtures/py3/gen-cpp2/RederivedServiceAsyncClient.h"
#include "thrift/compiler/test/fixtures/py3/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/py3/gen-cpp2/DerivedService.h"

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

namespace py3 { namespace simple {

class RederivedServiceSvAsyncIf {
 public:
  virtual ~RederivedServiceSvAsyncIf() {}
  virtual void async_tm_get_seven(std::unique_ptr<apache::thrift::HandlerCallback<::std::int32_t>> callback) = 0;
  virtual folly::Future<::std::int32_t> future_get_seven() = 0;
  virtual folly::SemiFuture<::std::int32_t> semifuture_get_seven() = 0;
};

class RederivedServiceAsyncProcessor;

class RederivedServiceSvIf : public RederivedServiceSvAsyncIf, virtual public ::py3::simple::DerivedServiceSvIf {
 public:
  typedef RederivedServiceAsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;


  virtual ::std::int32_t get_seven();
  folly::Future<::std::int32_t> future_get_seven() override;
  folly::SemiFuture<::std::int32_t> semifuture_get_seven() override;
  void async_tm_get_seven(std::unique_ptr<apache::thrift::HandlerCallback<::std::int32_t>> callback) override;
 private:
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_get_seven{apache::thrift::detail::si::InvocationType::AsyncTm};
};

class RederivedServiceSvNull : public RederivedServiceSvIf, virtual public ::py3::simple::DerivedServiceSvIf {
 public:
  ::std::int32_t get_seven() override;
};

class RederivedServiceAsyncProcessor : public ::py3::simple::DerivedServiceAsyncProcessor {
 public:
  const char* getServiceName() override;
  void getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) override;
  using BaseAsyncProcessor = ::py3::simple::DerivedServiceAsyncProcessor;
 protected:
  RederivedServiceSvIf* iface_;
 public:
  void processSerializedCompressedRequest(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
 public:
  using ProcessFuncs = GeneratedAsyncProcessor::ProcessFuncs<RederivedServiceAsyncProcessor>;
  using ProcessMap = GeneratedAsyncProcessor::ProcessMap<ProcessFuncs>;
  static const RederivedServiceAsyncProcessor::ProcessMap& getOwnProcessMap();
 private:
  static const RederivedServiceAsyncProcessor::ProcessMap kOwnProcessMap_;
 private:
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_get_seven(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_get_seven(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::LegacySerializedResponse return_get_seven(int32_t protoSeqId, apache::thrift::ContextStack* ctx, ::std::int32_t const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_get_seven(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
 public:
  RederivedServiceAsyncProcessor(RederivedServiceSvIf* iface) :
      ::py3::simple::DerivedServiceAsyncProcessor(iface),
      iface_(iface) {}

  virtual ~RederivedServiceAsyncProcessor() {}
};

}} // py3::simple
