/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/typed-interceptor/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/service_h.h>

#include "thrift/compiler/test/fixtures/typed-interceptor/gen-cpp2/MyServiceAsyncClient.h"
#include "thrift/compiler/test/fixtures/typed-interceptor/gen-cpp2/module_types.h"

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

namespace cpp2 {
class MyService;
class MyServiceAsyncProcessor;

class MyServiceServiceInfoHolder : public apache::thrift::ServiceInfoHolder {
  public:
   apache::thrift::ServiceRequestInfoMap const& requestInfoMap() const override;
   static apache::thrift::ServiceRequestInfoMap staticRequestInfoMap();
};
} // cpp2

namespace apache::thrift {
template <>
class ServiceHandler<::cpp2::MyService> : public apache::thrift::ServerInterface {
 public:
  std::string_view getGeneratedName() const override { return "MyService"; }

  typedef ::cpp2::MyServiceAsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;
  CreateMethodMetadataResult createMethodMetadata() override;
  const std::vector<std::unique_ptr<TypedInterceptor<::cpp2::MyService>>>& getTypedInterceptors() const {
    return __fbthrift_typedInterceptors_;
  }
  void addTypedInterceptor(std::unique_ptr<TypedInterceptor<::cpp2::MyService>> typedInterceptor) {
    __fbthrift_typedInterceptors_.push_back(std::move(typedInterceptor));
  }
 private:
  std::optional<std::reference_wrapper<apache::thrift::ServiceRequestInfoMap const>> getServiceRequestInfoMap() const;
  size_t getNumTypedInterceptors() const final;
  std::vector<std::unique_ptr<TypedInterceptor<::cpp2::MyService>>> __fbthrift_typedInterceptors_;
 public:

  virtual void sync_echo();
  [[deprecated("Use sync_echo instead")]] virtual void echo();
  virtual folly::Future<folly::Unit> future_echo();
  virtual folly::SemiFuture<folly::Unit> semifuture_echo();
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<void> co_echo();
  virtual folly::coro::Task<void> co_echo(apache::thrift::RequestParams params);
#endif
  virtual void async_tm_echo(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback);
  virtual void sync_getRandomData(::std::string& /*_return*/, std::unique_ptr<::cpp2::Request> /*req*/);
  [[deprecated("Use sync_getRandomData instead")]] virtual void getRandomData(::std::string& /*_return*/, std::unique_ptr<::cpp2::Request> /*req*/);
  virtual folly::Future<std::unique_ptr<::std::string>> future_getRandomData(std::unique_ptr<::cpp2::Request> p_req);
  virtual folly::SemiFuture<std::unique_ptr<::std::string>> semifuture_getRandomData(std::unique_ptr<::cpp2::Request> p_req);
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<std::unique_ptr<::std::string>> co_getRandomData(std::unique_ptr<::cpp2::Request> p_req);
  virtual folly::coro::Task<std::unique_ptr<::std::string>> co_getRandomData(apache::thrift::RequestParams params, std::unique_ptr<::cpp2::Request> p_req);
#endif
  virtual void async_tm_getRandomData(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::string>>> callback, std::unique_ptr<::cpp2::Request> p_req);
  virtual ::std::int32_t sync_getId(::std::int32_t /*field*/);
  [[deprecated("Use sync_getId instead")]] virtual ::std::int32_t getId(::std::int32_t /*field*/);
  virtual folly::Future<::std::int32_t> future_getId(::std::int32_t p_field);
  virtual folly::SemiFuture<::std::int32_t> semifuture_getId(::std::int32_t p_field);
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<::std::int32_t> co_getId(::std::int32_t p_field);
  virtual folly::coro::Task<::std::int32_t> co_getId(apache::thrift::RequestParams params, ::std::int32_t p_field);
#endif
  virtual void async_tm_getId(std::unique_ptr<apache::thrift::HandlerCallback<::std::int32_t>> callback, ::std::int32_t p_field);
  virtual void async_eb_ping_eb(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr<::cpp2::Request> p_req);
 private:
  static ::cpp2::MyServiceServiceInfoHolder __fbthrift_serviceInfoHolder;
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_echo{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_getRandomData{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_getId{apache::thrift::detail::si::InvocationType::AsyncTm};
};

} // namespace apache::thrift

namespace cpp2 {
using MyServiceSvIf [[deprecated("Use apache::thrift::ServiceHandler<MyService> instead")]] = ::apache::thrift::ServiceHandler<MyService>;
} // cpp2
namespace apache::thrift {
template <>
class TypedInterceptor<::cpp2::MyService> : public apache::thrift::TypedInterceptorBase {
 public:
  virtual InterceptedData before_echo();
  virtual InterceptedData before_getRandomData(const ::cpp2::Request& /*p_req*/);
  virtual InterceptedData before_getId(const ::std::int32_t& /*p_field*/);
  virtual InterceptedData before_ping_eb(const ::cpp2::Request& /*p_req*/);
};
} // namespace apache::thrift

namespace cpp2 {
class MyServiceSvNull : public ::apache::thrift::ServiceHandler<MyService> {
 public:
  void echo() override;
  void getRandomData(::std::string& /*_return*/, std::unique_ptr<::cpp2::Request> /*req*/) override;
  ::std::int32_t getId(::std::int32_t /*field*/) override;
};

class MyServiceAsyncProcessor : public ::apache::thrift::GeneratedAsyncProcessorBase {
 public:
  const char* getServiceName() override;
  void getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) override;
  using BaseAsyncProcessor = void;
 protected:
  ::apache::thrift::ServiceHandler<::cpp2::MyService>* iface_;
 public:
  void processSerializedCompressedRequestWithMetadata(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
  void executeRequest(apache::thrift::ServerRequest&& serverRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata) override;
 public:
  using ProcessFuncs = GeneratedAsyncProcessorBase::ProcessFuncs<MyServiceAsyncProcessor>;
  using ProcessMap = GeneratedAsyncProcessorBase::ProcessMap<ProcessFuncs>;
  static const MyServiceAsyncProcessor::ProcessMap& getOwnProcessMap();
 private:
  static const MyServiceAsyncProcessor::ProcessMap kOwnProcessMap_;
 private:
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_echo(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_echo(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_echo(apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_echo(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_getRandomData(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_getRandomData(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_getRandomData(apache::thrift::ContextStack* ctx, ::std::string const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_getRandomData(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_getId(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_getId(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_getId(apache::thrift::ContextStack* ctx, ::std::int32_t const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_getId(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_ping_eb(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_ping_eb(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_ping_eb(apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_ping_eb(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
 public:
  MyServiceAsyncProcessor(::apache::thrift::ServiceHandler<::cpp2::MyService>* iface) :
      iface_(iface) {}
  ~MyServiceAsyncProcessor() override {}
};

} // cpp2
