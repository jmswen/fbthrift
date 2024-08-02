/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/no_metadata/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/service_h.h>

#include "thrift/compiler/test/fixtures/no_metadata/gen-cpp2/MyServiceAsyncClient.h"
#include "thrift/compiler/test/fixtures/no_metadata/gen-cpp2/module_types.h"

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
} // namespace cpp2

namespace apache::thrift {
template <>
class ServiceHandler<::cpp2::MyService> : public apache::thrift::ServerInterface {
 public:
  std::string_view getGeneratedName() const override { return "MyService"; }

  typedef ::cpp2::MyServiceAsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;
  CreateMethodMetadataResult createMethodMetadata() override;
  bool isThriftGenerated() const override final { return true; }
 private:
  std::optional<std::reference_wrapper<apache::thrift::ServiceRequestInfoMap const>> getServiceRequestInfoMap() const;
 public:

  virtual void sync_ping();
  [[deprecated("Use sync_ping instead")]] virtual void ping();
  virtual folly::Future<folly::Unit> future_ping();
  virtual folly::SemiFuture<folly::Unit> semifuture_ping();
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<void> co_ping();
  virtual folly::coro::Task<void> co_ping(apache::thrift::RequestParams params);
#endif
  virtual void async_tm_ping(apache::thrift::HandlerCallbackPtr<void> callback);
  virtual void sync_getRandomData(::std::string& /*_return*/);
  [[deprecated("Use sync_getRandomData instead")]] virtual void getRandomData(::std::string& /*_return*/);
  virtual folly::Future<std::unique_ptr<::std::string>> future_getRandomData();
  virtual folly::SemiFuture<std::unique_ptr<::std::string>> semifuture_getRandomData();
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<std::unique_ptr<::std::string>> co_getRandomData();
  virtual folly::coro::Task<std::unique_ptr<::std::string>> co_getRandomData(apache::thrift::RequestParams params);
#endif
  virtual void async_tm_getRandomData(apache::thrift::HandlerCallbackPtr<std::unique_ptr<::std::string>> callback);
  virtual bool sync_hasDataById(::std::int64_t /*id*/);
  [[deprecated("Use sync_hasDataById instead")]] virtual bool hasDataById(::std::int64_t /*id*/);
  virtual folly::Future<bool> future_hasDataById(::std::int64_t p_id);
  virtual folly::SemiFuture<bool> semifuture_hasDataById(::std::int64_t p_id);
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<bool> co_hasDataById(::std::int64_t p_id);
  virtual folly::coro::Task<bool> co_hasDataById(apache::thrift::RequestParams params, ::std::int64_t p_id);
#endif
  virtual void async_tm_hasDataById(apache::thrift::HandlerCallbackPtr<bool> callback, ::std::int64_t p_id);
  virtual void sync_getDataById(::std::string& /*_return*/, ::std::int64_t /*id*/);
  [[deprecated("Use sync_getDataById instead")]] virtual void getDataById(::std::string& /*_return*/, ::std::int64_t /*id*/);
  virtual folly::Future<std::unique_ptr<::std::string>> future_getDataById(::std::int64_t p_id);
  virtual folly::SemiFuture<std::unique_ptr<::std::string>> semifuture_getDataById(::std::int64_t p_id);
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<std::unique_ptr<::std::string>> co_getDataById(::std::int64_t p_id);
  virtual folly::coro::Task<std::unique_ptr<::std::string>> co_getDataById(apache::thrift::RequestParams params, ::std::int64_t p_id);
#endif
  virtual void async_tm_getDataById(apache::thrift::HandlerCallbackPtr<std::unique_ptr<::std::string>> callback, ::std::int64_t p_id);
  virtual void sync_putDataById(::std::int64_t /*id*/, std::unique_ptr<::std::string> /*data*/);
  [[deprecated("Use sync_putDataById instead")]] virtual void putDataById(::std::int64_t /*id*/, std::unique_ptr<::std::string> /*data*/);
  virtual folly::Future<folly::Unit> future_putDataById(::std::int64_t p_id, std::unique_ptr<::std::string> p_data);
  virtual folly::SemiFuture<folly::Unit> semifuture_putDataById(::std::int64_t p_id, std::unique_ptr<::std::string> p_data);
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<void> co_putDataById(::std::int64_t p_id, std::unique_ptr<::std::string> p_data);
  virtual folly::coro::Task<void> co_putDataById(apache::thrift::RequestParams params, ::std::int64_t p_id, std::unique_ptr<::std::string> p_data);
#endif
  virtual void async_tm_putDataById(apache::thrift::HandlerCallbackPtr<void> callback, ::std::int64_t p_id, std::unique_ptr<::std::string> p_data);
  virtual void sync_lobDataById(::std::int64_t /*id*/, std::unique_ptr<::std::string> /*data*/);
  [[deprecated("Use sync_lobDataById instead")]] virtual void lobDataById(::std::int64_t /*id*/, std::unique_ptr<::std::string> /*data*/);
  virtual folly::Future<folly::Unit> future_lobDataById(::std::int64_t p_id, std::unique_ptr<::std::string> p_data);
  virtual folly::SemiFuture<folly::Unit> semifuture_lobDataById(::std::int64_t p_id, std::unique_ptr<::std::string> p_data);
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<void> co_lobDataById(::std::int64_t p_id, std::unique_ptr<::std::string> p_data);
  virtual folly::coro::Task<void> co_lobDataById(apache::thrift::RequestParams params, ::std::int64_t p_id, std::unique_ptr<::std::string> p_data);
#endif
  virtual void async_tm_lobDataById(apache::thrift::HandlerCallbackBase::Ptr callback, ::std::int64_t p_id, std::unique_ptr<::std::string> p_data);
 private:
  static ::cpp2::MyServiceServiceInfoHolder __fbthrift_serviceInfoHolder;
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_ping{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_getRandomData{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_hasDataById{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_getDataById{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_putDataById{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_lobDataById{apache::thrift::detail::si::InvocationType::AsyncTm};
};

} // namespace apache::thrift

namespace cpp2 {
using MyServiceSvIf [[deprecated("Use apache::thrift::ServiceHandler<MyService> instead")]] = ::apache::thrift::ServiceHandler<MyService>;
} // namespace cpp2
namespace cpp2 {
class MyServiceSvNull : public ::apache::thrift::ServiceHandler<MyService> {
 public:
  void ping() override;
  void getRandomData(::std::string& /*_return*/) override;
  bool hasDataById(::std::int64_t /*id*/) override;
  void getDataById(::std::string& /*_return*/, ::std::int64_t /*id*/) override;
  void putDataById(::std::int64_t /*id*/, std::unique_ptr<::std::string> /*data*/) override;
  void lobDataById(::std::int64_t /*id*/, std::unique_ptr<::std::string> /*data*/) override;
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
  void setUpAndProcess_ping(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_ping(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_ping(apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_ping(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_getRandomData(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_getRandomData(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_getRandomData(apache::thrift::ContextStack* ctx, ::std::string const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_getRandomData(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_hasDataById(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_hasDataById(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_hasDataById(apache::thrift::ContextStack* ctx, bool const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_hasDataById(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_getDataById(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_getDataById(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_getDataById(apache::thrift::ContextStack* ctx, ::std::string const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_getDataById(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_putDataById(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_putDataById(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_putDataById(apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_putDataById(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_lobDataById(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_lobDataById(apache::thrift::ServerRequest&& serverRequest);
 public:
  MyServiceAsyncProcessor(::apache::thrift::ServiceHandler<::cpp2::MyService>* iface) :
      iface_(iface) {}
  ~MyServiceAsyncProcessor() override {}
};

} // namespace cpp2
