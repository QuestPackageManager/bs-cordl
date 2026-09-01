#pragma once
// IWYU pragma private; include "System\Net\Http\HttpClient.hpp"
#include "System/Net/Http/zzzz__HttpCompletionOption_impl.hpp"
#include "System/Net/Http/zzzz__HttpMessageInvoker_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "System/Net/Http/zzzz__HttpClient_def.hpp"
#include "System/Net/Http/Headers/zzzz__HttpRequestHeaders_def.hpp"
#include "System/Net/Http/zzzz__HttpClient_def.hpp"
#include "System/Net/Http/zzzz__HttpCompletionOption_def.hpp"
#include "System/Net/Http/zzzz__HttpContent_def.hpp"
#include "System/Net/Http/zzzz__HttpMessageHandler_def.hpp"
#include "System/Net/Http/zzzz__HttpRequestMessage_def.hpp"
#include "System/Net/Http/zzzz__HttpResponseMessage_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Net::Http::HttpClient__SendAsyncWorker_d__47.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::HttpClient__SendAsyncWorker_d__47::*)()>(&::System::Net::Http::HttpClient__SendAsyncWorker_d__47::MoveNext)> {
  constexpr static std::size_t size = 0x6d0;
  constexpr static std::size_t addrs = 0x60dc2f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClient__SendAsyncWorker_d__47>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClient__SendAsyncWorker_d__47.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::HttpClient__SendAsyncWorker_d__47::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::System::Net::Http::HttpClient__SendAsyncWorker_d__47::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x60dc9c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClient__SendAsyncWorker_d__47>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void System::Net::Http::HttpClient__SendAsyncWorker_d__47::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClient__SendAsyncWorker_d__47>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::Net::Http::HttpClient__SendAsyncWorker_d__47::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClient__SendAsyncWorker_d__47>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::Http::HttpClient__SendAsyncWorker_d__47::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::Net::Http::HttpClient__SendAsyncWorker_d__47::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::Http::HttpResponseMessage*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::System::Net::Http::HttpClient*", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "request", ty: "::System::Net::Http::HttpRequestMessage*", modifiers: "", def_value: Some("{}") }, CppParam { name: "completionOption", ty:
// "::System::Net::Http::HttpCompletionOption", modifiers: "", def_value: Some("{}") }, CppParam { name: "_lcts_5__2", ty: "::System::Threading::CancellationTokenSource*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_response_5__3", ty: "::System::Net::Http::HttpResponseMessage*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2",
// ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Http::HttpClient__SendAsyncWorker_d__47::HttpClient__SendAsyncWorker_d__47(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::Http::HttpResponseMessage*> __t__builder, ::System::Net::Http::HttpClient* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Net::Http::HttpRequestMessage* request, ::System::Net::Http::HttpCompletionOption completionOption,
    ::System::Threading::CancellationTokenSource* _lcts_5__2, ::System::Net::Http::HttpResponseMessage* _response_5__3,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage*> __u__1,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->request = request;
  this->completionOption = completionOption;
  this->_lcts_5__2 = _lcts_5__2;
  this->_response_5__3 = _response_5__3;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::System::Net::Http::HttpClient__SendAsyncWorker_d__47::HttpClient__SendAsyncWorker_d__47() {}
//  Writing Method size for method: ::System::Net::Http::HttpClient__GetStringAsync_d__53.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::HttpClient__GetStringAsync_d__53::*)()>(&::System::Net::Http::HttpClient__GetStringAsync_d__53::MoveNext)> {
  constexpr static std::size_t size = 0x588;
  constexpr static std::size_t addrs = 0x60dca44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClient__GetStringAsync_d__53>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClient__GetStringAsync_d__53.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::HttpClient__GetStringAsync_d__53::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::System::Net::Http::HttpClient__GetStringAsync_d__53::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x60dd14c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClient__GetStringAsync_d__53>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void System::Net::Http::HttpClient__GetStringAsync_d__53::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClient__GetStringAsync_d__53>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::Net::Http::HttpClient__GetStringAsync_d__53::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClient__GetStringAsync_d__53>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::Http::HttpClient__GetStringAsync_d__53::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::Net::Http::HttpClient__GetStringAsync_d__53::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::Http::HttpClient*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "requestUri", ty: "::System::Uri*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_resp_5__2", ty:
// "::System::Net::Http::HttpResponseMessage*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2",
// ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::StringW>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Http::HttpClient__GetStringAsync_d__53::HttpClient__GetStringAsync_d__53(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder, ::System::Net::Http::HttpClient* __4__this, ::System::Uri* requestUri,
    ::System::Net::Http::HttpResponseMessage* _resp_5__2, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage*> __u__1,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::StringW> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->requestUri = requestUri;
  this->_resp_5__2 = _resp_5__2;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::System::Net::Http::HttpClient__GetStringAsync_d__53::HttpClient__GetStringAsync_d__53() {}
//  Writing Method size for method: ::System::Net::Http::HttpClient._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::HttpClient::*)()>(&::System::Net::Http::HttpClient::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x60db4fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClient*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClient._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::HttpClient::*)(::System::Net::Http::HttpMessageHandler*)>(&::System::Net::Http::HttpClient::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60db634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClient*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::Http::HttpMessageHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClient._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::HttpClient::*)(::System::Net::Http::HttpMessageHandler*, bool)>(&::System::Net::Http::HttpClient::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x60db56c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClient*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Net::Http::HttpMessageHandler*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClient.get_MaxResponseContentBufferSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Net::Http::HttpClient::*)()>(&::System::Net::Http::HttpClient::get_MaxResponseContentBufferSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60db69c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClient*>(), { "get_MaxResponseContentBufferSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClient.set_Timeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::HttpClient::*)(::System::TimeSpan)>(&::System::Net::Http::HttpClient::set_Timeout)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x60db6a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClient*>(), { "set_Timeout", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClient.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::HttpClient::*)(bool)>(&::System::Net::Http::HttpClient::Dispose)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x60db7ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClient*>(), { ::i2c::class_of<::System::Net::Http::HttpClient*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClient.GetAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* (
    ::System::Net::Http::HttpClient::*)(::System::Uri*, ::System::Net::Http::HttpCompletionOption)>(&::System::Net::Http::HttpClient::GetAsync)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x60db8a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClient*>(),
                                                             { "GetAsync", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Net::Http::HttpCompletionOption>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClient.PostAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* (
    ::System::Net::Http::HttpClient::*)(::System::Uri*, ::System::Net::Http::HttpContent*, ::System::Threading::CancellationToken)>(&::System::Net::Http::HttpClient::PostAsync)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x60dba34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClient*>(),
                            { "PostAsync", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Net::Http::HttpContent*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClient.SendAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* (
    ::System::Net::Http::HttpClient::*)(::System::Net::Http::HttpRequestMessage*, ::System::Net::Http::HttpCompletionOption)>(&::System::Net::Http::HttpClient::SendAsync)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x60db9c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClient*>(),
                                                { "SendAsync", {}, { ::i2c::type_of<::System::Net::Http::HttpRequestMessage*>(), ::i2c::type_of<::System::Net::Http::HttpCompletionOption>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClient.SendAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* (
    ::System::Net::Http::HttpClient::*)(::System::Net::Http::HttpRequestMessage*, ::System::Threading::CancellationToken)>(&::System::Net::Http::HttpClient::SendAsync)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x60dbd98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClient*>(), { ::i2c::class_of<::System::Net::Http::HttpClient*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClient.SendAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* (
    ::System::Net::Http::HttpClient::*)(::System::Net::Http::HttpRequestMessage*, ::System::Net::Http::HttpCompletionOption, ::System::Threading::CancellationToken)>(
    &::System::Net::Http::HttpClient::SendAsync)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x60dbb40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClient*>(),
                                                             { "SendAsync",
                                                               {},
                                                               { ::i2c::type_of<::System::Net::Http::HttpRequestMessage*>(), ::i2c::type_of<::System::Net::Http::HttpCompletionOption>(),
                                                                 ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClient.SendAsyncWorker
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* (
    ::System::Net::Http::HttpClient::*)(::System::Net::Http::HttpRequestMessage*, ::System::Net::Http::HttpCompletionOption, ::System::Threading::CancellationToken)>(
    &::System::Net::Http::HttpClient::SendAsyncWorker)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x60dc038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClient*>(),
                                                             { "SendAsyncWorker",
                                                               {},
                                                               { ::i2c::type_of<::System::Net::Http::HttpRequestMessage*>(), ::i2c::type_of<::System::Net::Http::HttpCompletionOption>(),
                                                                 ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClient.GetStringAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::System::Net::Http::HttpClient::*)(::System::Uri*)>(
    &::System::Net::Http::HttpClient::GetStringAsync)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x60dc144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClient*>(), { "GetStringAsync", {}, { ::i2c::type_of<::System::Uri*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClient.__n__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* (
    ::System::Net::Http::HttpClient::*)(::System::Net::Http::HttpRequestMessage*, ::System::Threading::CancellationToken)>(&::System::Net::Http::HttpClient::__n__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x60dc2bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClient*>(),
                                                { "<>n__0", {}, { ::i2c::type_of<::System::Net::Http::HttpRequestMessage*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Uri*& System::Net::Http::HttpClient::__cordl_internal_get_base_address() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___base_address;
}
constexpr ::System::Uri* const& System::Net::Http::HttpClient::__cordl_internal_get_base_address() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___base_address;
}
constexpr void System::Net::Http::HttpClient::__cordl_internal_set_base_address(::System::Uri* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___base_address = value;
}
constexpr ::System::Threading::CancellationTokenSource*& System::Net::Http::HttpClient::__cordl_internal_get_cts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cts;
}
constexpr ::System::Threading::CancellationTokenSource* const& System::Net::Http::HttpClient::__cordl_internal_get_cts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cts;
}
constexpr void System::Net::Http::HttpClient::__cordl_internal_set_cts(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cts = value;
}
constexpr bool& System::Net::Http::HttpClient::__cordl_internal_get_disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr bool const& System::Net::Http::HttpClient::__cordl_internal_get_disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr void System::Net::Http::HttpClient::__cordl_internal_set_disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disposed = value;
}
constexpr ::System::Net::Http::Headers::HttpRequestHeaders*& System::Net::Http::HttpClient::__cordl_internal_get_headers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headers;
}
constexpr ::System::Net::Http::Headers::HttpRequestHeaders* const& System::Net::Http::HttpClient::__cordl_internal_get_headers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headers;
}
constexpr void System::Net::Http::HttpClient::__cordl_internal_set_headers(::System::Net::Http::Headers::HttpRequestHeaders* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headers = value;
}
constexpr int64_t& System::Net::Http::HttpClient::__cordl_internal_get_buffer_size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer_size;
}
constexpr int64_t const& System::Net::Http::HttpClient::__cordl_internal_get_buffer_size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer_size;
}
constexpr void System::Net::Http::HttpClient::__cordl_internal_set_buffer_size(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buffer_size = value;
}
constexpr ::System::TimeSpan& System::Net::Http::HttpClient::__cordl_internal_get_timeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeout;
}
constexpr ::System::TimeSpan const& System::Net::Http::HttpClient::__cordl_internal_get_timeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeout;
}
constexpr void System::Net::Http::HttpClient::__cordl_internal_set_timeout(::System::TimeSpan value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___timeout = value;
}
inline void System::Net::Http::HttpClient::setStaticF_TimeoutDefault(::System::TimeSpan value) {
  ::cordl_internals::setStaticField<::System::TimeSpan, "TimeoutDefault", ::System::Net::Http::HttpClient*>(std::forward<::System::TimeSpan>(value));
}
inline ::System::TimeSpan System::Net::Http::HttpClient::getStaticF_TimeoutDefault() {
  return ::cordl_internals::getStaticField<::System::TimeSpan, "TimeoutDefault", ::System::Net::Http::HttpClient*>();
}
inline void System::Net::Http::HttpClient::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClient*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::Http::HttpClient::_ctor(::System::Net::Http::HttpMessageHandler* handler) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClient*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::Http::HttpMessageHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handler);
}
inline void System::Net::Http::HttpClient::_ctor(::System::Net::Http::HttpMessageHandler* handler, bool disposeHandler) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClient*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::Http::HttpMessageHandler*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handler, disposeHandler);
}
inline int64_t System::Net::Http::HttpClient::get_MaxResponseContentBufferSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClient*>(), { "get_MaxResponseContentBufferSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void System::Net::Http::HttpClient::set_Timeout(::System::TimeSpan value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClient*>(), { "set_Timeout", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::Http::HttpClient::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::HttpClient*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* System::Net::Http::HttpClient::GetAsync(::System::Uri* requestUri,
                                                                                                                              ::System::Net::Http::HttpCompletionOption completionOption) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClient*>(), { "GetAsync", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Net::Http::HttpCompletionOption>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*>(this, ___internal_method, requestUri, completionOption);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* System::Net::Http::HttpClient::PostAsync(::System::Uri* requestUri, ::System::Net::Http::HttpContent* content,
                                                                                                                               ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClient*>(),
                          { "PostAsync", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Net::Http::HttpContent*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*>(this, ___internal_method, requestUri, content, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* System::Net::Http::HttpClient::SendAsync(::System::Net::Http::HttpRequestMessage* request,
                                                                                                                               ::System::Net::Http::HttpCompletionOption completionOption) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClient*>(),
                                              { "SendAsync", {}, { ::i2c::type_of<::System::Net::Http::HttpRequestMessage*>(), ::i2c::type_of<::System::Net::Http::HttpCompletionOption>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*>(this, ___internal_method, request, completionOption);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* System::Net::Http::HttpClient::SendAsync(::System::Net::Http::HttpRequestMessage* request,
                                                                                                                               ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::HttpClient*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*>(this, ___internal_method, request, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* System::Net::Http::HttpClient::SendAsync(::System::Net::Http::HttpRequestMessage* request,
                                                                                                                               ::System::Net::Http::HttpCompletionOption completionOption,
                                                                                                                               ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClient*>(),
                                                           { "SendAsync",
                                                             {},
                                                             { ::i2c::type_of<::System::Net::Http::HttpRequestMessage*>(), ::i2c::type_of<::System::Net::Http::HttpCompletionOption>(),
                                                               ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*>(this, ___internal_method, request, completionOption, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* System::Net::Http::HttpClient::SendAsyncWorker(::System::Net::Http::HttpRequestMessage* request,
                                                                                                                                     ::System::Net::Http::HttpCompletionOption completionOption,
                                                                                                                                     ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClient*>(),
                                                           { "SendAsyncWorker",
                                                             {},
                                                             { ::i2c::type_of<::System::Net::Http::HttpRequestMessage*>(), ::i2c::type_of<::System::Net::Http::HttpCompletionOption>(),
                                                               ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*>(this, ___internal_method, request, completionOption, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* System::Net::Http::HttpClient::GetStringAsync(::System::Uri* requestUri) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClient*>(), { "GetStringAsync", {}, { ::i2c::type_of<::System::Uri*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method, requestUri);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* System::Net::Http::HttpClient::__n__0(::System::Net::Http::HttpRequestMessage* request,
                                                                                                                            ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClient*>(),
                                              { "<>n__0", {}, { ::i2c::type_of<::System::Net::Http::HttpRequestMessage*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*>(this, ___internal_method, request, cancellationToken);
}
inline ::System::Net::Http::HttpClient* System::Net::Http::HttpClient::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::HttpClient*>());
}
inline ::System::Net::Http::HttpClient* System::Net::Http::HttpClient::New_ctor(::System::Net::Http::HttpMessageHandler* handler) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::HttpClient*>(handler));
}
inline ::System::Net::Http::HttpClient* System::Net::Http::HttpClient::New_ctor(::System::Net::Http::HttpMessageHandler* handler, bool disposeHandler) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::HttpClient*>(handler, disposeHandler));
}
// Ctor Parameters []
constexpr ::System::Net::Http::HttpClient::HttpClient() {}
