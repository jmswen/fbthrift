/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/client-methods/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/client_h.h>

#include "thrift/compiler/test/fixtures/client-methods/gen-cpp2/module_types.h"

namespace apache { namespace thrift {
  class Cpp2RequestContext;
  namespace detail { namespace ac { struct ClientRequestContext; }}
  namespace transport { class THeader; }
}}

namespace cpp2 {
class HeaderClientMethodsAnnotationOnFunction;
} // namespace cpp2
namespace apache::thrift {

template <>
class Client<::cpp2::HeaderClientMethodsAnnotationOnFunction> : public apache::thrift::GeneratedAsyncClient {
 public:
  using apache::thrift::GeneratedAsyncClient::GeneratedAsyncClient;

  char const* getServiceName() const noexcept override {
    return "HeaderClientMethodsAnnotationOnFunction";
  }


  /** Glean {"file": "thrift/compiler/test/fixtures/client-methods/src/module.thrift", "service": "HeaderClientMethodsAnnotationOnFunction", "function": "echo"} */
  virtual void echo(std::unique_ptr<apache::thrift::RequestCallback> callback, const ::cpp2::EchoRequest& p_request);
  /** Glean {"file": "thrift/compiler/test/fixtures/client-methods/src/module.thrift", "service": "HeaderClientMethodsAnnotationOnFunction", "function": "echo"} */
  virtual void echo(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const ::cpp2::EchoRequest& p_request);
 protected:
  void fbthrift_serialize_and_send_echo(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::cpp2::EchoRequest& p_request, bool stealRpcOptions = false);
 public:

  /** Glean {"file": "thrift/compiler/test/fixtures/client-methods/src/module.thrift", "service": "HeaderClientMethodsAnnotationOnFunction", "function": "echo"} */
  virtual void sync_echo(::cpp2::EchoResponse& _return, const ::cpp2::EchoRequest& p_request);
  /** Glean {"file": "thrift/compiler/test/fixtures/client-methods/src/module.thrift", "service": "HeaderClientMethodsAnnotationOnFunction", "function": "echo"} */
  virtual void sync_echo(apache::thrift::RpcOptions& rpcOptions, ::cpp2::EchoResponse& _return, const ::cpp2::EchoRequest& p_request);

  /** Glean {"file": "thrift/compiler/test/fixtures/client-methods/src/module.thrift", "service": "HeaderClientMethodsAnnotationOnFunction", "function": "echo"} */
  virtual folly::Future<::cpp2::EchoResponse> future_echo(const ::cpp2::EchoRequest& p_request);
  /** Glean {"file": "thrift/compiler/test/fixtures/client-methods/src/module.thrift", "service": "HeaderClientMethodsAnnotationOnFunction", "function": "echo"} */
  virtual folly::SemiFuture<::cpp2::EchoResponse> semifuture_echo(const ::cpp2::EchoRequest& p_request);
  /** Glean {"file": "thrift/compiler/test/fixtures/client-methods/src/module.thrift", "service": "HeaderClientMethodsAnnotationOnFunction", "function": "echo"} */
  virtual folly::Future<::cpp2::EchoResponse> future_echo(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::EchoRequest& p_request);
  /** Glean {"file": "thrift/compiler/test/fixtures/client-methods/src/module.thrift", "service": "HeaderClientMethodsAnnotationOnFunction", "function": "echo"} */
  virtual folly::SemiFuture<::cpp2::EchoResponse> semifuture_echo(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::EchoRequest& p_request);
  /** Glean {"file": "thrift/compiler/test/fixtures/client-methods/src/module.thrift", "service": "HeaderClientMethodsAnnotationOnFunction", "function": "echo"} */
  virtual folly::Future<std::pair<::cpp2::EchoResponse, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_echo(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::EchoRequest& p_request);
  /** Glean {"file": "thrift/compiler/test/fixtures/client-methods/src/module.thrift", "service": "HeaderClientMethodsAnnotationOnFunction", "function": "echo"} */
  virtual folly::SemiFuture<std::pair<::cpp2::EchoResponse, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_echo(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::EchoRequest& p_request);

#if FOLLY_HAS_COROUTINES
#if __clang__
  /** Glean {"file": "thrift/compiler/test/fixtures/client-methods/src/module.thrift", "service": "HeaderClientMethodsAnnotationOnFunction", "function": "echo"} */
  template <int = 0>
  folly::coro::Task<::cpp2::EchoResponse> co_echo(const ::cpp2::EchoRequest& p_request) {
    return co_echo<false>(nullptr, p_request);
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/client-methods/src/module.thrift", "service": "HeaderClientMethodsAnnotationOnFunction", "function": "echo"} */
  template <int = 0>
  folly::coro::Task<::cpp2::EchoResponse> co_echo(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::EchoRequest& p_request) {
    return co_echo<true>(&rpcOptions, p_request);
  }
#else
  /** Glean {"file": "thrift/compiler/test/fixtures/client-methods/src/module.thrift", "service": "HeaderClientMethodsAnnotationOnFunction", "function": "echo"} */
  folly::coro::Task<::cpp2::EchoResponse> co_echo(const ::cpp2::EchoRequest& p_request) {
    co_return co_await folly::coro::detachOnCancel(semifuture_echo(p_request));
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/client-methods/src/module.thrift", "service": "HeaderClientMethodsAnnotationOnFunction", "function": "echo"} */
  folly::coro::Task<::cpp2::EchoResponse> co_echo(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::EchoRequest& p_request) {
    co_return co_await folly::coro::detachOnCancel(semifuture_echo(rpcOptions, p_request));
  }
#endif
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<::cpp2::EchoResponse> co_echo(apache::thrift::RpcOptions* rpcOptions, const ::cpp2::EchoRequest& p_request) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientCoroCallback<false> callback(&returnState, co_await folly::coro::co_current_executor);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto [ctx, header] = echoCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static apache::thrift::RpcOptions* defaultRpcOptions = new apache::thrift::RpcOptions();
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    if (ctx != nullptr) {
      ctx->processClientInterceptorsOnRequest().throwUnlessValue();
    }
    if constexpr (hasRpcOptions) {
      fbthrift_serialize_and_send_echo(*rpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback), p_request);
    } else {
      fbthrift_serialize_and_send_echo(*defaultRpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback), p_request);
    }
    if (cancellable) {
      folly::CancellationCallback cb(cancelToken, [&] { CancellableCallback::cancel(std::move(cancellableCallback)); });
      co_await callback.co_waitUntilDone();
    } else {
      co_await callback.co_waitUntilDone();
    }
    if (ctx != nullptr) {
      ctx->processClientInterceptorsOnResponse().throwUnlessValue();
    }
    if (returnState.isException()) {
      co_yield folly::coro::co_error(std::move(returnState.exception()));
    }
    returnState.resetProtocolId(protocolId);
    returnState.resetCtx(std::move(ctx));
    SCOPE_EXIT {
      if (hasRpcOptions && returnState.header()) {
        auto* rheader = returnState.header();
        if (!rheader->getHeaders().empty()) {
          rpcOptions->setReadHeaders(rheader->releaseHeaders());
        }
        rpcOptions->setRoutingData(rheader->releaseRoutingData());
      }
    };
    ::cpp2::EchoResponse _return;
    if (auto ew = recv_wrapped_echo(_return, returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
    co_return _return;
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  /** Glean {"file": "thrift/compiler/test/fixtures/client-methods/src/module.thrift", "service": "HeaderClientMethodsAnnotationOnFunction", "function": "echo"} */
  virtual void echo(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const ::cpp2::EchoRequest& p_request);


  /** Glean {"file": "thrift/compiler/test/fixtures/client-methods/src/module.thrift", "service": "HeaderClientMethodsAnnotationOnFunction", "function": "echo"} */
  static folly::exception_wrapper recv_wrapped_echo(::cpp2::EchoResponse& _return, ::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/client-methods/src/module.thrift", "service": "HeaderClientMethodsAnnotationOnFunction", "function": "echo"} */
  static void recv_echo(::cpp2::EchoResponse& _return, ::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  /** Glean {"file": "thrift/compiler/test/fixtures/client-methods/src/module.thrift", "service": "HeaderClientMethodsAnnotationOnFunction", "function": "echo"} */
  virtual void recv_instance_echo(::cpp2::EchoResponse& _return, ::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/client-methods/src/module.thrift", "service": "HeaderClientMethodsAnnotationOnFunction", "function": "echo"} */
  virtual folly::exception_wrapper recv_instance_wrapped_echo(::cpp2::EchoResponse& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  apache::thrift::SerializedRequest fbthrift_serialize_echo(const RpcOptions& rpcOptions, apache::thrift::transport::THeader& header, apache::thrift::ContextStack* contextStack, const ::cpp2::EchoRequest& p_request);
  template <typename RpcOptions>
  void fbthrift_send_echo(apache::thrift::SerializedRequest&& request, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::RequestClientCallback::Ptr callback);
  std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> echoCtx(apache::thrift::RpcOptions* rpcOptions);
  template <typename CallbackType>
  folly::SemiFuture<::cpp2::EchoResponse> fbthrift_semifuture_echo(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::EchoRequest& p_request);
 public:
  /** Glean {"file": "thrift/compiler/test/fixtures/client-methods/src/module.thrift", "service": "HeaderClientMethodsAnnotationOnFunction", "function": "echo_2"} */
  virtual void echo_2(std::unique_ptr<apache::thrift::RequestCallback> callback, const ::cpp2::EchoRequest& p_request);
  /** Glean {"file": "thrift/compiler/test/fixtures/client-methods/src/module.thrift", "service": "HeaderClientMethodsAnnotationOnFunction", "function": "echo_2"} */
  virtual void echo_2(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const ::cpp2::EchoRequest& p_request);
 protected:
  void fbthrift_serialize_and_send_echo_2(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::cpp2::EchoRequest& p_request, bool stealRpcOptions = false);
 public:

  /** Glean {"file": "thrift/compiler/test/fixtures/client-methods/src/module.thrift", "service": "HeaderClientMethodsAnnotationOnFunction", "function": "echo_2"} */
  virtual void sync_echo_2(::cpp2::EchoResponse& _return, const ::cpp2::EchoRequest& p_request);
  /** Glean {"file": "thrift/compiler/test/fixtures/client-methods/src/module.thrift", "service": "HeaderClientMethodsAnnotationOnFunction", "function": "echo_2"} */
  virtual void sync_echo_2(apache::thrift::RpcOptions& rpcOptions, ::cpp2::EchoResponse& _return, const ::cpp2::EchoRequest& p_request);

  /** Glean {"file": "thrift/compiler/test/fixtures/client-methods/src/module.thrift", "service": "HeaderClientMethodsAnnotationOnFunction", "function": "echo_2"} */
  virtual folly::Future<::cpp2::EchoResponse> future_echo_2(const ::cpp2::EchoRequest& p_request);
  /** Glean {"file": "thrift/compiler/test/fixtures/client-methods/src/module.thrift", "service": "HeaderClientMethodsAnnotationOnFunction", "function": "echo_2"} */
  virtual folly::SemiFuture<::cpp2::EchoResponse> semifuture_echo_2(const ::cpp2::EchoRequest& p_request);
  /** Glean {"file": "thrift/compiler/test/fixtures/client-methods/src/module.thrift", "service": "HeaderClientMethodsAnnotationOnFunction", "function": "echo_2"} */
  virtual folly::Future<::cpp2::EchoResponse> future_echo_2(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::EchoRequest& p_request);
  /** Glean {"file": "thrift/compiler/test/fixtures/client-methods/src/module.thrift", "service": "HeaderClientMethodsAnnotationOnFunction", "function": "echo_2"} */
  virtual folly::SemiFuture<::cpp2::EchoResponse> semifuture_echo_2(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::EchoRequest& p_request);

#if FOLLY_HAS_COROUTINES
#if __clang__
  /** Glean {"file": "thrift/compiler/test/fixtures/client-methods/src/module.thrift", "service": "HeaderClientMethodsAnnotationOnFunction", "function": "echo_2"} */
  template <int = 0>
  folly::coro::Task<::cpp2::EchoResponse> co_echo_2(const ::cpp2::EchoRequest& p_request) {
    return co_echo_2<false>(nullptr, p_request);
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/client-methods/src/module.thrift", "service": "HeaderClientMethodsAnnotationOnFunction", "function": "echo_2"} */
  template <int = 0>
  folly::coro::Task<::cpp2::EchoResponse> co_echo_2(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::EchoRequest& p_request) {
    return co_echo_2<true>(&rpcOptions, p_request);
  }
#else
  /** Glean {"file": "thrift/compiler/test/fixtures/client-methods/src/module.thrift", "service": "HeaderClientMethodsAnnotationOnFunction", "function": "echo_2"} */
  folly::coro::Task<::cpp2::EchoResponse> co_echo_2(const ::cpp2::EchoRequest& p_request) {
    co_return co_await folly::coro::detachOnCancel(semifuture_echo_2(p_request));
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/client-methods/src/module.thrift", "service": "HeaderClientMethodsAnnotationOnFunction", "function": "echo_2"} */
  folly::coro::Task<::cpp2::EchoResponse> co_echo_2(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::EchoRequest& p_request) {
    co_return co_await folly::coro::detachOnCancel(semifuture_echo_2(rpcOptions, p_request));
  }
#endif
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<::cpp2::EchoResponse> co_echo_2(apache::thrift::RpcOptions* rpcOptions, const ::cpp2::EchoRequest& p_request) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientCoroCallback<false> callback(&returnState, co_await folly::coro::co_current_executor);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto [ctx, header] = echo_2Ctx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static apache::thrift::RpcOptions* defaultRpcOptions = new apache::thrift::RpcOptions();
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    if (ctx != nullptr) {
      ctx->processClientInterceptorsOnRequest().throwUnlessValue();
    }
    if constexpr (hasRpcOptions) {
      fbthrift_serialize_and_send_echo_2(*rpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback), p_request);
    } else {
      fbthrift_serialize_and_send_echo_2(*defaultRpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback), p_request);
    }
    if (cancellable) {
      folly::CancellationCallback cb(cancelToken, [&] { CancellableCallback::cancel(std::move(cancellableCallback)); });
      co_await callback.co_waitUntilDone();
    } else {
      co_await callback.co_waitUntilDone();
    }
    if (ctx != nullptr) {
      ctx->processClientInterceptorsOnResponse().throwUnlessValue();
    }
    if (returnState.isException()) {
      co_yield folly::coro::co_error(std::move(returnState.exception()));
    }
    returnState.resetProtocolId(protocolId);
    returnState.resetCtx(std::move(ctx));
    SCOPE_EXIT {
      if (hasRpcOptions && returnState.header()) {
        auto* rheader = returnState.header();
        if (!rheader->getHeaders().empty()) {
          rpcOptions->setReadHeaders(rheader->releaseHeaders());
        }
        rpcOptions->setRoutingData(rheader->releaseRoutingData());
      }
    };
    ::cpp2::EchoResponse _return;
    if (auto ew = recv_wrapped_echo_2(_return, returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
    co_return _return;
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  /** Glean {"file": "thrift/compiler/test/fixtures/client-methods/src/module.thrift", "service": "HeaderClientMethodsAnnotationOnFunction", "function": "echo_2"} */
  virtual void echo_2(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const ::cpp2::EchoRequest& p_request);


  /** Glean {"file": "thrift/compiler/test/fixtures/client-methods/src/module.thrift", "service": "HeaderClientMethodsAnnotationOnFunction", "function": "echo_2"} */
  static folly::exception_wrapper recv_wrapped_echo_2(::cpp2::EchoResponse& _return, ::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/client-methods/src/module.thrift", "service": "HeaderClientMethodsAnnotationOnFunction", "function": "echo_2"} */
  static void recv_echo_2(::cpp2::EchoResponse& _return, ::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  /** Glean {"file": "thrift/compiler/test/fixtures/client-methods/src/module.thrift", "service": "HeaderClientMethodsAnnotationOnFunction", "function": "echo_2"} */
  virtual void recv_instance_echo_2(::cpp2::EchoResponse& _return, ::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/client-methods/src/module.thrift", "service": "HeaderClientMethodsAnnotationOnFunction", "function": "echo_2"} */
  virtual folly::exception_wrapper recv_instance_wrapped_echo_2(::cpp2::EchoResponse& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  apache::thrift::SerializedRequest fbthrift_serialize_echo_2(const RpcOptions& rpcOptions, apache::thrift::transport::THeader& header, apache::thrift::ContextStack* contextStack, const ::cpp2::EchoRequest& p_request);
  template <typename RpcOptions>
  void fbthrift_send_echo_2(apache::thrift::SerializedRequest&& request, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::RequestClientCallback::Ptr callback);
  std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> echo_2Ctx(apache::thrift::RpcOptions* rpcOptions);
  template <typename CallbackType>
  folly::SemiFuture<::cpp2::EchoResponse> fbthrift_semifuture_echo_2(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::EchoRequest& p_request);
 public:
};

} // namespace apache::thrift

namespace cpp2 {
using HeaderClientMethodsAnnotationOnFunctionAsyncClient [[deprecated("Use apache::thrift::Client<HeaderClientMethodsAnnotationOnFunction> instead")]] = ::apache::thrift::Client<HeaderClientMethodsAnnotationOnFunction>;
} // namespace cpp2
