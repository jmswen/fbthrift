/**
 * Autogenerated by Thrift for src/extra_services.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/service_h.h>

#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/ExtraServiceAsyncClient.h"
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/extra_services_types.h"
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/ParamService.h"
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/module_types.h"

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

namespace extra { namespace svc {

class ExtraServiceSvAsyncIf {
 public:
  virtual ~ExtraServiceSvAsyncIf() {}
  virtual void async_tm_simple_function(std::unique_ptr<apache::thrift::HandlerCallback<bool>> callback) = 0;
  virtual folly::Future<bool> future_simple_function() = 0;
  virtual folly::SemiFuture<bool> semifuture_simple_function() = 0;
  virtual void async_eb_throws_function(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) = 0;
  virtual void async_tm_throws_function2(std::unique_ptr<apache::thrift::HandlerCallback<bool>> callback, bool p_param1) = 0;
  virtual folly::Future<bool> future_throws_function2(bool p_param1) = 0;
  virtual folly::SemiFuture<bool> semifuture_throws_function2(bool p_param1) = 0;
  virtual void async_tm_throws_function3(std::unique_ptr<apache::thrift::HandlerCallback<::std::map<::std::int32_t, ::std::string>>> callback, bool p_param1, const ::std::string& p_param2) = 0;
  virtual folly::Future<::std::map<::std::int32_t, ::std::string>> future_throws_function3(bool p_param1, const ::std::string& p_param2) = 0;
  virtual folly::SemiFuture<::std::map<::std::int32_t, ::std::string>> semifuture_throws_function3(bool p_param1, const ::std::string& p_param2) = 0;
  virtual void async_tm_oneway_void_ret(std::unique_ptr<apache::thrift::HandlerCallbackBase> callback) = 0;
  virtual folly::Future<folly::Unit> future_oneway_void_ret() = 0;
  virtual folly::SemiFuture<folly::Unit> semifuture_oneway_void_ret() = 0;
  virtual void async_tm_oneway_void_ret_i32_i32_i32_i32_i32_param(std::unique_ptr<apache::thrift::HandlerCallbackBase> callback, ::std::int32_t p_param1, ::std::int32_t p_param2, ::std::int32_t p_param3, ::std::int32_t p_param4, ::std::int32_t p_param5) = 0;
  virtual folly::Future<folly::Unit> future_oneway_void_ret_i32_i32_i32_i32_i32_param(::std::int32_t p_param1, ::std::int32_t p_param2, ::std::int32_t p_param3, ::std::int32_t p_param4, ::std::int32_t p_param5) = 0;
  virtual folly::SemiFuture<folly::Unit> semifuture_oneway_void_ret_i32_i32_i32_i32_i32_param(::std::int32_t p_param1, ::std::int32_t p_param2, ::std::int32_t p_param3, ::std::int32_t p_param4, ::std::int32_t p_param5) = 0;
  virtual void async_eb_oneway_void_ret_map_setlist_param(std::unique_ptr<apache::thrift::HandlerCallbackBase> callback, const ::std::map<::std::string, ::std::int64_t>& p_param1, const ::std::set<::std::vector<::std::string>>& p_param2) = 0;
  virtual void async_tm_oneway_void_ret_struct_param(std::unique_ptr<apache::thrift::HandlerCallbackBase> callback, const ::some::valid::ns::MyStruct& p_param1) = 0;
  virtual folly::Future<folly::Unit> future_oneway_void_ret_struct_param(const ::some::valid::ns::MyStruct& p_param1) = 0;
  virtual folly::SemiFuture<folly::Unit> semifuture_oneway_void_ret_struct_param(const ::some::valid::ns::MyStruct& p_param1) = 0;
  virtual void async_tm_oneway_void_ret_listunion_param(std::unique_ptr<apache::thrift::HandlerCallbackBase> callback, const ::std::vector<::some::valid::ns::ComplexUnion>& p_param1) = 0;
  virtual folly::Future<folly::Unit> future_oneway_void_ret_listunion_param(const ::std::vector<::some::valid::ns::ComplexUnion>& p_param1) = 0;
  virtual folly::SemiFuture<folly::Unit> semifuture_oneway_void_ret_listunion_param(const ::std::vector<::some::valid::ns::ComplexUnion>& p_param1) = 0;
};

class ExtraServiceAsyncProcessor;

class ExtraServiceSvIf : public ExtraServiceSvAsyncIf, virtual public ::some::valid::ns::ParamServiceSvIf {
 public:
  typedef ExtraServiceAsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;


  virtual bool simple_function();
  folly::Future<bool> future_simple_function() override;
  folly::SemiFuture<bool> semifuture_simple_function() override;
  void async_tm_simple_function(std::unique_ptr<apache::thrift::HandlerCallback<bool>> callback) override;
  void async_eb_throws_function(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) override;
  virtual bool throws_function2(bool /*param1*/);
  folly::Future<bool> future_throws_function2(bool p_param1) override;
  folly::SemiFuture<bool> semifuture_throws_function2(bool p_param1) override;
  void async_tm_throws_function2(std::unique_ptr<apache::thrift::HandlerCallback<bool>> callback, bool p_param1) override;
  virtual void throws_function3(::std::map<::std::int32_t, ::std::string>& /*_return*/, bool /*param1*/, const ::std::string& /*param2*/);
  folly::Future<::std::map<::std::int32_t, ::std::string>> future_throws_function3(bool p_param1, const ::std::string& p_param2) override;
  folly::SemiFuture<::std::map<::std::int32_t, ::std::string>> semifuture_throws_function3(bool p_param1, const ::std::string& p_param2) override;
  void async_tm_throws_function3(std::unique_ptr<apache::thrift::HandlerCallback<::std::map<::std::int32_t, ::std::string>>> callback, bool p_param1, const ::std::string& p_param2) override;
  virtual void oneway_void_ret();
  folly::Future<folly::Unit> future_oneway_void_ret() override;
  folly::SemiFuture<folly::Unit> semifuture_oneway_void_ret() override;
  void async_tm_oneway_void_ret(std::unique_ptr<apache::thrift::HandlerCallbackBase> callback) override;
  virtual void oneway_void_ret_i32_i32_i32_i32_i32_param(::std::int32_t /*param1*/, ::std::int32_t /*param2*/, ::std::int32_t /*param3*/, ::std::int32_t /*param4*/, ::std::int32_t /*param5*/);
  folly::Future<folly::Unit> future_oneway_void_ret_i32_i32_i32_i32_i32_param(::std::int32_t p_param1, ::std::int32_t p_param2, ::std::int32_t p_param3, ::std::int32_t p_param4, ::std::int32_t p_param5) override;
  folly::SemiFuture<folly::Unit> semifuture_oneway_void_ret_i32_i32_i32_i32_i32_param(::std::int32_t p_param1, ::std::int32_t p_param2, ::std::int32_t p_param3, ::std::int32_t p_param4, ::std::int32_t p_param5) override;
  void async_tm_oneway_void_ret_i32_i32_i32_i32_i32_param(std::unique_ptr<apache::thrift::HandlerCallbackBase> callback, ::std::int32_t p_param1, ::std::int32_t p_param2, ::std::int32_t p_param3, ::std::int32_t p_param4, ::std::int32_t p_param5) override;
  void async_eb_oneway_void_ret_map_setlist_param(std::unique_ptr<apache::thrift::HandlerCallbackBase> callback, const ::std::map<::std::string, ::std::int64_t>& p_param1, const ::std::set<::std::vector<::std::string>>& p_param2) override;
  virtual void oneway_void_ret_struct_param(const ::some::valid::ns::MyStruct& /*param1*/);
  folly::Future<folly::Unit> future_oneway_void_ret_struct_param(const ::some::valid::ns::MyStruct& p_param1) override;
  folly::SemiFuture<folly::Unit> semifuture_oneway_void_ret_struct_param(const ::some::valid::ns::MyStruct& p_param1) override;
  void async_tm_oneway_void_ret_struct_param(std::unique_ptr<apache::thrift::HandlerCallbackBase> callback, const ::some::valid::ns::MyStruct& p_param1) override;
  virtual void oneway_void_ret_listunion_param(const ::std::vector<::some::valid::ns::ComplexUnion>& /*param1*/);
  folly::Future<folly::Unit> future_oneway_void_ret_listunion_param(const ::std::vector<::some::valid::ns::ComplexUnion>& p_param1) override;
  folly::SemiFuture<folly::Unit> semifuture_oneway_void_ret_listunion_param(const ::std::vector<::some::valid::ns::ComplexUnion>& p_param1) override;
  void async_tm_oneway_void_ret_listunion_param(std::unique_ptr<apache::thrift::HandlerCallbackBase> callback, const ::std::vector<::some::valid::ns::ComplexUnion>& p_param1) override;
 private:
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_simple_function{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_throws_function2{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_throws_function3{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_oneway_void_ret{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_oneway_void_ret_i32_i32_i32_i32_i32_param{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_oneway_void_ret_struct_param{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_oneway_void_ret_listunion_param{apache::thrift::detail::si::InvocationType::AsyncTm};
};

class ExtraServiceSvNull : public ExtraServiceSvIf, virtual public ::some::valid::ns::ParamServiceSvIf {
 public:
  bool simple_function() override;
  bool throws_function2(bool /*param1*/) override;
  void throws_function3(::std::map<::std::int32_t, ::std::string>& /*_return*/, bool /*param1*/, const ::std::string& /*param2*/) override;
  void oneway_void_ret() override;
  void oneway_void_ret_i32_i32_i32_i32_i32_param(::std::int32_t /*param1*/, ::std::int32_t /*param2*/, ::std::int32_t /*param3*/, ::std::int32_t /*param4*/, ::std::int32_t /*param5*/) override;
  void oneway_void_ret_struct_param(const ::some::valid::ns::MyStruct& /*param1*/) override;
  void oneway_void_ret_listunion_param(const ::std::vector<::some::valid::ns::ComplexUnion>& /*param1*/) override;
};

class ExtraServiceAsyncProcessor : public ::some::valid::ns::ParamServiceAsyncProcessor {
 public:
  const char* getServiceName() override;
  void getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) override;
  using BaseAsyncProcessor = ::some::valid::ns::ParamServiceAsyncProcessor;
 protected:
  ExtraServiceSvIf* iface_;
 public:
  void processSerializedCompressedRequest(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
 public:
  using ProcessFuncs = GeneratedAsyncProcessor::ProcessFuncs<ExtraServiceAsyncProcessor>;
  using ProcessMap = GeneratedAsyncProcessor::ProcessMap<ProcessFuncs>;
  static const ExtraServiceAsyncProcessor::ProcessMap& getOwnProcessMap();
 private:
  static const ExtraServiceAsyncProcessor::ProcessMap kOwnProcessMap_;
 private:
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_simple_function(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_simple_function(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::LegacySerializedResponse return_simple_function(int32_t protoSeqId, apache::thrift::ContextStack* ctx, bool const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_simple_function(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_throws_function(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_throws_function(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::LegacySerializedResponse return_throws_function(int32_t protoSeqId, apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_throws_function(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_throws_function2(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_throws_function2(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::LegacySerializedResponse return_throws_function2(int32_t protoSeqId, apache::thrift::ContextStack* ctx, bool const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_throws_function2(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_throws_function3(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_throws_function3(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::LegacySerializedResponse return_throws_function3(int32_t protoSeqId, apache::thrift::ContextStack* ctx, ::std::map<::std::int32_t, ::std::string> const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_throws_function3(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_oneway_void_ret(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_oneway_void_ret(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_oneway_void_ret_i32_i32_i32_i32_i32_param(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_oneway_void_ret_i32_i32_i32_i32_i32_param(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_oneway_void_ret_map_setlist_param(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_oneway_void_ret_map_setlist_param(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_oneway_void_ret_struct_param(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_oneway_void_ret_struct_param(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_oneway_void_ret_listunion_param(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_oneway_void_ret_listunion_param(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
 public:
  ExtraServiceAsyncProcessor(ExtraServiceSvIf* iface) :
      ::some::valid::ns::ParamServiceAsyncProcessor(iface),
      iface_(iface) {}

  virtual ~ExtraServiceAsyncProcessor() {}
};

}} // extra::svc
