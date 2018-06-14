/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include "src/gen-cpp2/MyNodeAsyncClient.h"

#include <folly/io/IOBuf.h>
#include <folly/io/IOBufQueue.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <thrift/lib/cpp/transport/THeader.h>
#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
#include <thrift/lib/cpp2/server/Cpp2ConnContext.h>
#include <thrift/lib/cpp2/GeneratedCodeHelper.h>
#include <thrift/lib/cpp2/GeneratedSerializationCodeHelper.h>

namespace cpp2 {
typedef apache::thrift::ThriftPresult<false> MyNode_do_mid_pargs;
typedef apache::thrift::ThriftPresult<true> MyNode_do_mid_presult;

template <typename Protocol_>
void MyNodeAsyncClient::do_midT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  struct HeaderAndConnContext {
    HeaderAndConnContext() : header(apache::thrift::transport::THeader::ALLOW_BIG_FRAMES) {}

    apache::thrift::transport::THeader header;
    apache::thrift::Cpp2ConnContext connContext;
  };
  auto headerAndConnContext = std::make_shared<HeaderAndConnContext>();
  std::shared_ptr<apache::thrift::transport::THeader> header(headerAndConnContext, &headerAndConnContext->header);
  header->setProtocolId(getChannel()->getProtocolId());
  header->setHeaders(rpcOptions.releaseWriteHeaders());
  headerAndConnContext->connContext.setRequestHeader(header.get());
  std::unique_ptr<apache::thrift::ContextStack> ctx = this->getContextStack(this->getServiceName(), "MyNode.do_mid", &headerAndConnContext->connContext);
  MyNode_do_mid_pargs args;
  auto sizer = [&](Protocol_* p) { return args.serializedSizeZC(p); };
  auto writer = [&](Protocol_* p) { args.write(p); };
  apache::thrift::clientSendT<Protocol_>(prot, rpcOptions, std::move(callback), std::move(ctx), header, channel_.get(), "do_mid", writer, sizer, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, useSync);
  headerAndConnContext->connContext.setRequestHeader(nullptr);
}



void MyNodeAsyncClient::do_mid(std::unique_ptr<apache::thrift::RequestCallback> callback) {
  ::apache::thrift::RpcOptions rpcOptions;
  do_midImpl(false, rpcOptions, std::move(callback));
}

void MyNodeAsyncClient::do_mid(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  do_midImpl(false, rpcOptions, std::move(callback));
}

void MyNodeAsyncClient::do_midImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  switch(getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      do_midT(&writer, useSync, rpcOptions, std::move(callback));
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      do_midT(&writer, useSync, rpcOptions, std::move(callback));
      break;
    }
    default:
    {
      apache::thrift::detail::ac::throw_app_exn("Could not find Protocol");
    }
  }
}

void MyNodeAsyncClient::sync_do_mid() {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_do_mid(rpcOptions);
}

void MyNodeAsyncClient::sync_do_mid(apache::thrift::RpcOptions& rpcOptions) {
  apache::thrift::ClientReceiveState _returnState;
  auto callback = std::make_unique<apache::thrift::ClientSyncCallback>(
      &_returnState, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE);
  do_midImpl(true, rpcOptions, std::move(callback));
  SCOPE_EXIT {
    if (_returnState.header() && !_returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(_returnState.header()->releaseHeaders());
    }
  };
  if (!_returnState.buf()) {
    assert(!!_returnState.exception());
    _returnState.exception().throw_exception();
  }
  recv_do_mid(_returnState);
}

folly::Future<folly::Unit> MyNodeAsyncClient::future_do_mid() {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_do_mid(rpcOptions);
}

folly::SemiFuture<folly::Unit> MyNodeAsyncClient::semifuture_do_mid() {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_do_mid(rpcOptions);
}

folly::Future<folly::Unit> MyNodeAsyncClient::future_do_mid(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<folly::Unit> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<apache::thrift::FutureCallback<folly::Unit>>(std::move(_promise), recv_wrapped_do_mid, channel_);
  do_mid(rpcOptions, std::move(callback));
  return _future;
}

folly::SemiFuture<folly::Unit> MyNodeAsyncClient::semifuture_do_mid(apache::thrift::RpcOptions& rpcOptions) {
  auto callbackAndFuture = makeSemiFutureCallback(recv_wrapped_do_mid, channel_);
  auto callback = std::move(callbackAndFuture.first);
  do_mid(rpcOptions, std::move(callback));
  return std::move(callbackAndFuture.second);
}

folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> MyNodeAsyncClient::header_future_do_mid(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback<folly::Unit>>(std::move(_promise), recv_wrapped_do_mid, channel_);
  do_mid(rpcOptions, std::move(callback));
  return _future;
}

folly::SemiFuture<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> MyNodeAsyncClient::header_semifuture_do_mid(apache::thrift::RpcOptions& rpcOptions) {
  auto callbackAndFuture = makeHeaderSemiFutureCallback(recv_wrapped_do_mid, channel_);
  auto callback = std::move(callbackAndFuture.first);
  do_mid(rpcOptions, std::move(callback));
  return std::move(callbackAndFuture.second);
}

void MyNodeAsyncClient::do_mid(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback) {
  do_mid(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)));
}

folly::exception_wrapper MyNodeAsyncClient::recv_wrapped_do_mid(::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = MyNode_do_mid_presult;
  constexpr auto const fname = "do_mid";
  switch (state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          fname, &reader, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          fname, &reader, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void MyNodeAsyncClient::recv_do_mid(::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_do_mid(state);
  if (ew) {
    ew.throw_exception();
  }
}

void MyNodeAsyncClient::recv_instance_do_mid(::apache::thrift::ClientReceiveState& state) {
  recv_do_mid(state);
}

folly::exception_wrapper MyNodeAsyncClient::recv_instance_wrapped_do_mid(::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_do_mid(state);
}

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
