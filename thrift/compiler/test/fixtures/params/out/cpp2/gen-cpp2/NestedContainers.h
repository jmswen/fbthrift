/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/params/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/service_h.h>

#include "thrift/compiler/test/fixtures/params/gen-cpp2/NestedContainersAsyncClient.h"
#include "thrift/compiler/test/fixtures/params/gen-cpp2/module_types.h"

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
class NestedContainers;
class NestedContainersAsyncProcessor;

class NestedContainersServiceInfoHolder : public apache::thrift::ServiceInfoHolder {
  public:
   apache::thrift::ServiceRequestInfoMap const& requestInfoMap() const override;
   static apache::thrift::ServiceRequestInfoMap staticRequestInfoMap();
};
} // namespace cpp2

namespace apache::thrift {
template <>
class ServiceHandler<::cpp2::NestedContainers> : public apache::thrift::ServerInterface {
 public:
  std::string_view getGeneratedName() const override { return "NestedContainers"; }

  typedef ::cpp2::NestedContainersAsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;
  CreateMethodMetadataResult createMethodMetadata() override;
  bool isThriftGenerated() const override final { return true; }
 private:
  std::optional<std::reference_wrapper<apache::thrift::ServiceRequestInfoMap const>> getServiceRequestInfoMap() const;
 public:

  virtual void sync_mapList(std::unique_ptr<::std::map<::std::int32_t, ::std::vector<::std::int32_t>>> /*foo*/);
  [[deprecated("Use sync_mapList instead")]] virtual void mapList(std::unique_ptr<::std::map<::std::int32_t, ::std::vector<::std::int32_t>>> /*foo*/);
  virtual folly::Future<folly::Unit> future_mapList(std::unique_ptr<::std::map<::std::int32_t, ::std::vector<::std::int32_t>>> p_foo);
  virtual folly::SemiFuture<folly::Unit> semifuture_mapList(std::unique_ptr<::std::map<::std::int32_t, ::std::vector<::std::int32_t>>> p_foo);
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<void> co_mapList(std::unique_ptr<::std::map<::std::int32_t, ::std::vector<::std::int32_t>>> p_foo);
  virtual folly::coro::Task<void> co_mapList(apache::thrift::RequestParams params, std::unique_ptr<::std::map<::std::int32_t, ::std::vector<::std::int32_t>>> p_foo);
#endif
  virtual void async_tm_mapList(apache::thrift::HandlerCallbackPtr<void> callback, std::unique_ptr<::std::map<::std::int32_t, ::std::vector<::std::int32_t>>> p_foo);
  virtual void sync_mapSet(std::unique_ptr<::std::map<::std::int32_t, ::std::set<::std::int32_t>>> /*foo*/);
  [[deprecated("Use sync_mapSet instead")]] virtual void mapSet(std::unique_ptr<::std::map<::std::int32_t, ::std::set<::std::int32_t>>> /*foo*/);
  virtual folly::Future<folly::Unit> future_mapSet(std::unique_ptr<::std::map<::std::int32_t, ::std::set<::std::int32_t>>> p_foo);
  virtual folly::SemiFuture<folly::Unit> semifuture_mapSet(std::unique_ptr<::std::map<::std::int32_t, ::std::set<::std::int32_t>>> p_foo);
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<void> co_mapSet(std::unique_ptr<::std::map<::std::int32_t, ::std::set<::std::int32_t>>> p_foo);
  virtual folly::coro::Task<void> co_mapSet(apache::thrift::RequestParams params, std::unique_ptr<::std::map<::std::int32_t, ::std::set<::std::int32_t>>> p_foo);
#endif
  virtual void async_tm_mapSet(apache::thrift::HandlerCallbackPtr<void> callback, std::unique_ptr<::std::map<::std::int32_t, ::std::set<::std::int32_t>>> p_foo);
  virtual void sync_listMap(std::unique_ptr<::std::vector<::std::map<::std::int32_t, ::std::int32_t>>> /*foo*/);
  [[deprecated("Use sync_listMap instead")]] virtual void listMap(std::unique_ptr<::std::vector<::std::map<::std::int32_t, ::std::int32_t>>> /*foo*/);
  virtual folly::Future<folly::Unit> future_listMap(std::unique_ptr<::std::vector<::std::map<::std::int32_t, ::std::int32_t>>> p_foo);
  virtual folly::SemiFuture<folly::Unit> semifuture_listMap(std::unique_ptr<::std::vector<::std::map<::std::int32_t, ::std::int32_t>>> p_foo);
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<void> co_listMap(std::unique_ptr<::std::vector<::std::map<::std::int32_t, ::std::int32_t>>> p_foo);
  virtual folly::coro::Task<void> co_listMap(apache::thrift::RequestParams params, std::unique_ptr<::std::vector<::std::map<::std::int32_t, ::std::int32_t>>> p_foo);
#endif
  virtual void async_tm_listMap(apache::thrift::HandlerCallbackPtr<void> callback, std::unique_ptr<::std::vector<::std::map<::std::int32_t, ::std::int32_t>>> p_foo);
  virtual void sync_listSet(std::unique_ptr<::std::vector<::std::set<::std::int32_t>>> /*foo*/);
  [[deprecated("Use sync_listSet instead")]] virtual void listSet(std::unique_ptr<::std::vector<::std::set<::std::int32_t>>> /*foo*/);
  virtual folly::Future<folly::Unit> future_listSet(std::unique_ptr<::std::vector<::std::set<::std::int32_t>>> p_foo);
  virtual folly::SemiFuture<folly::Unit> semifuture_listSet(std::unique_ptr<::std::vector<::std::set<::std::int32_t>>> p_foo);
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<void> co_listSet(std::unique_ptr<::std::vector<::std::set<::std::int32_t>>> p_foo);
  virtual folly::coro::Task<void> co_listSet(apache::thrift::RequestParams params, std::unique_ptr<::std::vector<::std::set<::std::int32_t>>> p_foo);
#endif
  virtual void async_tm_listSet(apache::thrift::HandlerCallbackPtr<void> callback, std::unique_ptr<::std::vector<::std::set<::std::int32_t>>> p_foo);
  virtual void sync_turtles(std::unique_ptr<::std::vector<::std::vector<::std::map<::std::int32_t, ::std::map<::std::int32_t, ::std::set<::std::int32_t>>>>>> /*foo*/);
  [[deprecated("Use sync_turtles instead")]] virtual void turtles(std::unique_ptr<::std::vector<::std::vector<::std::map<::std::int32_t, ::std::map<::std::int32_t, ::std::set<::std::int32_t>>>>>> /*foo*/);
  virtual folly::Future<folly::Unit> future_turtles(std::unique_ptr<::std::vector<::std::vector<::std::map<::std::int32_t, ::std::map<::std::int32_t, ::std::set<::std::int32_t>>>>>> p_foo);
  virtual folly::SemiFuture<folly::Unit> semifuture_turtles(std::unique_ptr<::std::vector<::std::vector<::std::map<::std::int32_t, ::std::map<::std::int32_t, ::std::set<::std::int32_t>>>>>> p_foo);
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<void> co_turtles(std::unique_ptr<::std::vector<::std::vector<::std::map<::std::int32_t, ::std::map<::std::int32_t, ::std::set<::std::int32_t>>>>>> p_foo);
  virtual folly::coro::Task<void> co_turtles(apache::thrift::RequestParams params, std::unique_ptr<::std::vector<::std::vector<::std::map<::std::int32_t, ::std::map<::std::int32_t, ::std::set<::std::int32_t>>>>>> p_foo);
#endif
  virtual void async_tm_turtles(apache::thrift::HandlerCallbackPtr<void> callback, std::unique_ptr<::std::vector<::std::vector<::std::map<::std::int32_t, ::std::map<::std::int32_t, ::std::set<::std::int32_t>>>>>> p_foo);
 private:
  static ::cpp2::NestedContainersServiceInfoHolder __fbthrift_serviceInfoHolder;
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_mapList{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_mapSet{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_listMap{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_listSet{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_turtles{apache::thrift::detail::si::InvocationType::AsyncTm};
};

} // namespace apache::thrift

namespace cpp2 {
using NestedContainersSvIf [[deprecated("Use apache::thrift::ServiceHandler<NestedContainers> instead")]] = ::apache::thrift::ServiceHandler<NestedContainers>;
} // namespace cpp2
namespace cpp2 {
class NestedContainersSvNull : public ::apache::thrift::ServiceHandler<NestedContainers> {
 public:
  void mapList(std::unique_ptr<::std::map<::std::int32_t, ::std::vector<::std::int32_t>>> /*foo*/) override;
  void mapSet(std::unique_ptr<::std::map<::std::int32_t, ::std::set<::std::int32_t>>> /*foo*/) override;
  void listMap(std::unique_ptr<::std::vector<::std::map<::std::int32_t, ::std::int32_t>>> /*foo*/) override;
  void listSet(std::unique_ptr<::std::vector<::std::set<::std::int32_t>>> /*foo*/) override;
  void turtles(std::unique_ptr<::std::vector<::std::vector<::std::map<::std::int32_t, ::std::map<::std::int32_t, ::std::set<::std::int32_t>>>>>> /*foo*/) override;
};

class NestedContainersAsyncProcessor : public ::apache::thrift::GeneratedAsyncProcessorBase {
 public:
  const char* getServiceName() override;
  void getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) override;
  using BaseAsyncProcessor = void;
 protected:
  ::apache::thrift::ServiceHandler<::cpp2::NestedContainers>* iface_;
 public:
  void processSerializedCompressedRequestWithMetadata(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
  void executeRequest(apache::thrift::ServerRequest&& serverRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata) override;
 public:
  using ProcessFuncs = GeneratedAsyncProcessorBase::ProcessFuncs<NestedContainersAsyncProcessor>;
  using ProcessMap = GeneratedAsyncProcessorBase::ProcessMap<ProcessFuncs>;
  static const NestedContainersAsyncProcessor::ProcessMap& getOwnProcessMap();
 private:
  static const NestedContainersAsyncProcessor::ProcessMap kOwnProcessMap_;
 private:
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_mapList(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_mapList(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_mapList(apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_mapList(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_mapSet(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_mapSet(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_mapSet(apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_mapSet(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_listMap(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_listMap(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_listMap(apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_listMap(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_listSet(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_listSet(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_listSet(apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_listSet(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_turtles(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_turtles(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_turtles(apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_turtles(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
 public:
  NestedContainersAsyncProcessor(::apache::thrift::ServiceHandler<::cpp2::NestedContainers>* iface) :
      iface_(iface) {}
  ~NestedContainersAsyncProcessor() override {}
};

} // namespace cpp2
