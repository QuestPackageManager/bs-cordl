#pragma once
// IWYU pragma private; include "System\Net\Http\MonoWebRequestHandler.hpp"
#include "System/Net/Security/zzzz__AuthenticationLevel_impl.hpp"
#include "System/Net/zzzz__DecompressionMethods_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Security/Principal/zzzz__TokenImpersonationLevel_impl.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "System/Net/Http/zzzz__MonoWebRequestHandler_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/Cache/zzzz__RequestCachePolicy_def.hpp"
#include "System/Net/Http/Headers/zzzz__HttpRequestHeaders_def.hpp"
#include "System/Net/Http/zzzz__HttpContent_def.hpp"
#include "System/Net/Http/zzzz__HttpMethod_def.hpp"
#include "System/Net/Http/zzzz__HttpRequestMessage_def.hpp"
#include "System/Net/Http/zzzz__HttpResponseMessage_def.hpp"
#include "System/Net/Http/zzzz__IMonoHttpClientHandler_def.hpp"
#include "System/Net/Http/zzzz__MonoWebRequestHandler_def.hpp"
#include "System/Net/Security/zzzz__RemoteCertificateValidationCallback_def.hpp"
#include "System/Net/Security/zzzz__SslClientAuthenticationOptions_def.hpp"
#include "System/Net/zzzz__CookieContainer_def.hpp"
#include "System/Net/zzzz__HttpWebRequest_def.hpp"
#include "System/Net/zzzz__HttpWebResponse_def.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/Net/zzzz__IWebProxy_def.hpp"
#include "System/Net/zzzz__WebResponse_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Net::Http::MonoWebRequestHandler___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::MonoWebRequestHandler___c::*)()>(&::System::Net::Http::MonoWebRequestHandler___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60d8908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::MonoWebRequestHandler___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MonoWebRequestHandler___c._GetConnectionKeepAlive_b__95_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Http::MonoWebRequestHandler___c::*)(::StringW)>(
    &::System::Net::Http::MonoWebRequestHandler___c::_GetConnectionKeepAlive_b__95_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x60d890c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::MonoWebRequestHandler___c*>(), { "<GetConnectionKeepAlive>b__95_0", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MonoWebRequestHandler___c._CreateWebRequest_b__96_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Http::MonoWebRequestHandler___c::*)(::StringW)>(
    &::System::Net::Http::MonoWebRequestHandler___c::_CreateWebRequest_b__96_1)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x60d8960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::MonoWebRequestHandler___c*>(), { "<CreateWebRequest>b__96_1", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MonoWebRequestHandler___c._SendAsync_b__99_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::MonoWebRequestHandler___c::*)(::System::Object*)>(
    &::System::Net::Http::MonoWebRequestHandler___c::_SendAsync_b__99_0)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x60d89b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::MonoWebRequestHandler___c*>(), { "<SendAsync>b__99_0", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
inline void System::Net::Http::MonoWebRequestHandler___c::setStaticF___9(::System::Net::Http::MonoWebRequestHandler___c* value) {
  ::cordl_internals::setStaticField<::System::Net::Http::MonoWebRequestHandler___c*, "<>9", ::System::Net::Http::MonoWebRequestHandler___c*>(
      std::forward<::System::Net::Http::MonoWebRequestHandler___c*>(value));
}
inline ::System::Net::Http::MonoWebRequestHandler___c* System::Net::Http::MonoWebRequestHandler___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Net::Http::MonoWebRequestHandler___c*, "<>9", ::System::Net::Http::MonoWebRequestHandler___c*>();
}
inline void System::Net::Http::MonoWebRequestHandler___c::setStaticF___9__95_0(::System::Func_2<::StringW, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::StringW, bool>*, "<>9__95_0", ::System::Net::Http::MonoWebRequestHandler___c*>(std::forward<::System::Func_2<::StringW, bool>*>(value));
}
inline ::System::Func_2<::StringW, bool>* System::Net::Http::MonoWebRequestHandler___c::getStaticF___9__95_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::StringW, bool>*, "<>9__95_0", ::System::Net::Http::MonoWebRequestHandler___c*>();
}
inline void System::Net::Http::MonoWebRequestHandler___c::setStaticF___9__96_1(::System::Func_2<::StringW, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::StringW, bool>*, "<>9__96_1", ::System::Net::Http::MonoWebRequestHandler___c*>(std::forward<::System::Func_2<::StringW, bool>*>(value));
}
inline ::System::Func_2<::StringW, bool>* System::Net::Http::MonoWebRequestHandler___c::getStaticF___9__96_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::StringW, bool>*, "<>9__96_1", ::System::Net::Http::MonoWebRequestHandler___c*>();
}
inline void System::Net::Http::MonoWebRequestHandler___c::setStaticF___9__99_0(::System::Action_1<::System::Object*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "<>9__99_0", ::System::Net::Http::MonoWebRequestHandler___c*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* System::Net::Http::MonoWebRequestHandler___c::getStaticF___9__99_0() {
  return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "<>9__99_0", ::System::Net::Http::MonoWebRequestHandler___c*>();
}
inline void System::Net::Http::MonoWebRequestHandler___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::MonoWebRequestHandler___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Net::Http::MonoWebRequestHandler___c::_GetConnectionKeepAlive_b__95_0(::StringW l) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::MonoWebRequestHandler___c*>(), { "<GetConnectionKeepAlive>b__95_0", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, l);
}
inline bool System::Net::Http::MonoWebRequestHandler___c::_CreateWebRequest_b__96_1(::StringW l) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::MonoWebRequestHandler___c*>(), { "<CreateWebRequest>b__96_1", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, l);
}
inline void System::Net::Http::MonoWebRequestHandler___c::_SendAsync_b__99_0(::System::Object* l) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::MonoWebRequestHandler___c*>(), { "<SendAsync>b__99_0", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, l);
}
inline ::System::Net::Http::MonoWebRequestHandler___c* System::Net::Http::MonoWebRequestHandler___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::MonoWebRequestHandler___c*>());
}
// Ctor Parameters []
constexpr ::System::Net::Http::MonoWebRequestHandler___c::MonoWebRequestHandler___c() {}
//  Writing Method size for method: ::System::Net::Http::MonoWebRequestHandler__SendAsync_d__99.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::MonoWebRequestHandler__SendAsync_d__99::*)()>(
    &::System::Net::Http::MonoWebRequestHandler__SendAsync_d__99::MoveNext)> {
  constexpr static std::size_t size = 0x1860;
  constexpr static std::size_t addrs = 0x60d8a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::MonoWebRequestHandler__SendAsync_d__99>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MonoWebRequestHandler__SendAsync_d__99.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::MonoWebRequestHandler__SendAsync_d__99::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::System::Net::Http::MonoWebRequestHandler__SendAsync_d__99::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x60da67c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::MonoWebRequestHandler__SendAsync_d__99>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void System::Net::Http::MonoWebRequestHandler__SendAsync_d__99::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::MonoWebRequestHandler__SendAsync_d__99>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::Net::Http::MonoWebRequestHandler__SendAsync_d__99::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::MonoWebRequestHandler__SendAsync_d__99>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::Http::MonoWebRequestHandler__SendAsync_d__99::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::Net::Http::MonoWebRequestHandler__SendAsync_d__99::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::Http::HttpResponseMessage*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::System::Net::Http::MonoWebRequestHandler*", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "request", ty: "::System::Net::Http::HttpRequestMessage*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_wrequest_5__2", ty:
// "::System::Net::HttpWebRequest*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_wresponse_5__3", ty: "::System::Net::HttpWebResponse*", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "__7__wrap3", ty: "::System::Threading::CancellationTokenRegistration", modifiers: "", def_value: Some("{}") }, CppParam { name: "_content_5__5", ty: "::System::Net::Http::HttpContent*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_stream_5__6", ty: "::System::IO::Stream*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::IO::Stream*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__3", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::WebResponse*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__4", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Http::MonoWebRequestHandler__SendAsync_d__99::MonoWebRequestHandler__SendAsync_d__99(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::Http::HttpResponseMessage*> __t__builder, ::System::Net::Http::MonoWebRequestHandler* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Net::Http::HttpRequestMessage* request, ::System::Net::HttpWebRequest* _wrequest_5__2,
    ::System::Net::HttpWebResponse* _wresponse_5__3, ::System::Threading::CancellationTokenRegistration __7__wrap3, ::System::Net::Http::HttpContent* _content_5__5,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1, ::System::IO::Stream* _stream_5__6,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::IO::Stream*> __u__2,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::WebResponse*> __u__3,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*> __u__4) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->request = request;
  this->_wrequest_5__2 = _wrequest_5__2;
  this->_wresponse_5__3 = _wresponse_5__3;
  this->__7__wrap3 = __7__wrap3;
  this->_content_5__5 = _content_5__5;
  this->__u__1 = __u__1;
  this->_stream_5__6 = _stream_5__6;
  this->__u__2 = __u__2;
  this->__u__3 = __u__3;
  this->__u__4 = __u__4;
}
// Ctor Parameters []
constexpr ::System::Net::Http::MonoWebRequestHandler__SendAsync_d__99::MonoWebRequestHandler__SendAsync_d__99() {}
//  Writing Method size for method: ::System::Net::Http::MonoWebRequestHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::MonoWebRequestHandler::*)()>(&::System::Net::Http::MonoWebRequestHandler::_ctor)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x60d6420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::MonoWebRequestHandler*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MonoWebRequestHandler.EnsureModifiability
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::MonoWebRequestHandler::*)()>(&::System::Net::Http::MonoWebRequestHandler::EnsureModifiability)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x60d6fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::MonoWebRequestHandler*>(), { "EnsureModifiability", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MonoWebRequestHandler.set_AllowAutoRedirect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::MonoWebRequestHandler::*)(bool)>(&::System::Net::Http::MonoWebRequestHandler::set_AllowAutoRedirect)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x60d7018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::MonoWebRequestHandler*>(), { "set_AllowAutoRedirect", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MonoWebRequestHandler.get_CookieContainer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::CookieContainer* (::System::Net::Http::MonoWebRequestHandler::*)()>(
    &::System::Net::Http::MonoWebRequestHandler::get_CookieContainer)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x60d703c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::MonoWebRequestHandler*>(), { "get_CookieContainer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MonoWebRequestHandler.get_MaxRequestContentBufferSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Net::Http::MonoWebRequestHandler::*)()>(&::System::Net::Http::MonoWebRequestHandler::get_MaxRequestContentBufferSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60d70a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::MonoWebRequestHandler*>(), { "get_MaxRequestContentBufferSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MonoWebRequestHandler.set_UseProxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::MonoWebRequestHandler::*)(bool)>(&::System::Net::Http::MonoWebRequestHandler::set_UseProxy)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x60d70ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::MonoWebRequestHandler*>(), { "set_UseProxy", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MonoWebRequestHandler.get_SslOptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Security::SslClientAuthenticationOptions* (::System::Net::Http::MonoWebRequestHandler::*)()>(
    &::System::Net::Http::MonoWebRequestHandler::get_SslOptions)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x60d70d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::MonoWebRequestHandler*>(), { "get_SslOptions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MonoWebRequestHandler.set_SslOptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::MonoWebRequestHandler::*)(::System::Net::Security::SslClientAuthenticationOptions*)>(
    &::System::Net::Http::MonoWebRequestHandler::set_SslOptions)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x60d7130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::MonoWebRequestHandler*>(),
                                                                                           { "set_SslOptions", {}, { ::i2c::type_of<::System::Net::Security::SslClientAuthenticationOptions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MonoWebRequestHandler.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::MonoWebRequestHandler::*)()>(&::System::Net::Http::MonoWebRequestHandler::Dispose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x60d7154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::MonoWebRequestHandler*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MonoWebRequestHandler.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::MonoWebRequestHandler::*)(bool)>(&::System::Net::Http::MonoWebRequestHandler::Dispose)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x60d7168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::MonoWebRequestHandler*>(), { ::i2c::class_of<::System::Net::Http::MonoWebRequestHandler*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MonoWebRequestHandler.GetConnectionKeepAlive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Http::MonoWebRequestHandler::*)(::System::Net::Http::Headers::HttpRequestHeaders*)>(
    &::System::Net::Http::MonoWebRequestHandler::GetConnectionKeepAlive)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x60d71fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::MonoWebRequestHandler*>(),
                                                                                           { "GetConnectionKeepAlive", {}, { ::i2c::type_of<::System::Net::Http::Headers::HttpRequestHeaders*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MonoWebRequestHandler.CreateWebRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::HttpWebRequest* (::System::Net::Http::MonoWebRequestHandler::*)(::System::Net::Http::HttpRequestMessage*)>(
    &::System::Net::Http::MonoWebRequestHandler::CreateWebRequest)> {
  constexpr static std::size_t size = 0x8c8;
  constexpr static std::size_t addrs = 0x60d7380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::MonoWebRequestHandler*>(), { ::i2c::class_of<::System::Net::Http::MonoWebRequestHandler*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MonoWebRequestHandler.CreateResponseMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Http::HttpResponseMessage* (
    ::System::Net::Http::MonoWebRequestHandler::*)(::System::Net::HttpWebResponse*, ::System::Net::Http::HttpRequestMessage*, ::System::Threading::CancellationToken)>(
    &::System::Net::Http::MonoWebRequestHandler::CreateResponseMessage)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x60d811c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::MonoWebRequestHandler*>(),
                                                             { "CreateResponseMessage",
                                                               {},
                                                               { ::i2c::type_of<::System::Net::HttpWebResponse*>(), ::i2c::type_of<::System::Net::Http::HttpRequestMessage*>(),
                                                                 ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MonoWebRequestHandler.MethodHasBody
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Net::Http::HttpMethod*)>(&::System::Net::Http::MonoWebRequestHandler::MethodHasBody)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x60d85ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::MonoWebRequestHandler*>(), { "MethodHasBody", {}, { ::i2c::type_of<::System::Net::Http::HttpMethod*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MonoWebRequestHandler.SendAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* (
    ::System::Net::Http::MonoWebRequestHandler::*)(::System::Net::Http::HttpRequestMessage*, ::System::Threading::CancellationToken)>(&::System::Net::Http::MonoWebRequestHandler::SendAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x60d86f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::MonoWebRequestHandler*>(),
                                                { "SendAsync", {}, { ::i2c::type_of<::System::Net::Http::HttpRequestMessage*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MonoWebRequestHandler.System_Net_Http_IMonoHttpClientHandler_SetWebRequestTimeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::MonoWebRequestHandler::*)(::System::TimeSpan)>(
    &::System::Net::Http::MonoWebRequestHandler::System_Net_Http_IMonoHttpClientHandler_SetWebRequestTimeout)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x60d87f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::MonoWebRequestHandler*>(),
                                                             { "System.Net.Http.IMonoHttpClientHandler.SetWebRequestTimeout", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MonoWebRequestHandler._CreateWebRequest_b__96_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate* (
    ::System::Net::Http::MonoWebRequestHandler::*)(::StringW, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*,
                                                   ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::ArrayW<::StringW>)>(
    &::System::Net::Http::MonoWebRequestHandler::_CreateWebRequest_b__96_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x60d8850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::MonoWebRequestHandler*>(),
                                                             { "<CreateWebRequest>b__96_0",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>(),
                                                                 ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
constexpr bool& System::Net::Http::MonoWebRequestHandler::__cordl_internal_get_allowAutoRedirect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowAutoRedirect;
}
constexpr bool const& System::Net::Http::MonoWebRequestHandler::__cordl_internal_get_allowAutoRedirect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowAutoRedirect;
}
constexpr void System::Net::Http::MonoWebRequestHandler::__cordl_internal_set_allowAutoRedirect(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allowAutoRedirect = value;
}
constexpr ::System::Net::DecompressionMethods& System::Net::Http::MonoWebRequestHandler::__cordl_internal_get_automaticDecompression() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___automaticDecompression;
}
constexpr ::System::Net::DecompressionMethods const& System::Net::Http::MonoWebRequestHandler::__cordl_internal_get_automaticDecompression() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___automaticDecompression;
}
constexpr void System::Net::Http::MonoWebRequestHandler::__cordl_internal_set_automaticDecompression(::System::Net::DecompressionMethods value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___automaticDecompression = value;
}
constexpr ::System::Net::CookieContainer*& System::Net::Http::MonoWebRequestHandler::__cordl_internal_get_cookieContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cookieContainer;
}
constexpr ::System::Net::CookieContainer* const& System::Net::Http::MonoWebRequestHandler::__cordl_internal_get_cookieContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cookieContainer;
}
constexpr void System::Net::Http::MonoWebRequestHandler::__cordl_internal_set_cookieContainer(::System::Net::CookieContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cookieContainer = value;
}
constexpr ::System::Net::ICredentials*& System::Net::Http::MonoWebRequestHandler::__cordl_internal_get_credentials() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___credentials;
}
constexpr ::System::Net::ICredentials* const& System::Net::Http::MonoWebRequestHandler::__cordl_internal_get_credentials() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___credentials;
}
constexpr void System::Net::Http::MonoWebRequestHandler::__cordl_internal_set_credentials(::System::Net::ICredentials* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___credentials = value;
}
constexpr int32_t& System::Net::Http::MonoWebRequestHandler::__cordl_internal_get_maxAutomaticRedirections() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxAutomaticRedirections;
}
constexpr int32_t const& System::Net::Http::MonoWebRequestHandler::__cordl_internal_get_maxAutomaticRedirections() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxAutomaticRedirections;
}
constexpr void System::Net::Http::MonoWebRequestHandler::__cordl_internal_set_maxAutomaticRedirections(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxAutomaticRedirections = value;
}
constexpr int64_t& System::Net::Http::MonoWebRequestHandler::__cordl_internal_get_maxRequestContentBufferSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxRequestContentBufferSize;
}
constexpr int64_t const& System::Net::Http::MonoWebRequestHandler::__cordl_internal_get_maxRequestContentBufferSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxRequestContentBufferSize;
}
constexpr void System::Net::Http::MonoWebRequestHandler::__cordl_internal_set_maxRequestContentBufferSize(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxRequestContentBufferSize = value;
}
constexpr bool& System::Net::Http::MonoWebRequestHandler::__cordl_internal_get_preAuthenticate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preAuthenticate;
}
constexpr bool const& System::Net::Http::MonoWebRequestHandler::__cordl_internal_get_preAuthenticate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preAuthenticate;
}
constexpr void System::Net::Http::MonoWebRequestHandler::__cordl_internal_set_preAuthenticate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___preAuthenticate = value;
}
constexpr ::System::Net::IWebProxy*& System::Net::Http::MonoWebRequestHandler::__cordl_internal_get_proxy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___proxy;
}
constexpr ::System::Net::IWebProxy* const& System::Net::Http::MonoWebRequestHandler::__cordl_internal_get_proxy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___proxy;
}
constexpr void System::Net::Http::MonoWebRequestHandler::__cordl_internal_set_proxy(::System::Net::IWebProxy* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___proxy = value;
}
constexpr bool& System::Net::Http::MonoWebRequestHandler::__cordl_internal_get_useCookies() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useCookies;
}
constexpr bool const& System::Net::Http::MonoWebRequestHandler::__cordl_internal_get_useCookies() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useCookies;
}
constexpr void System::Net::Http::MonoWebRequestHandler::__cordl_internal_set_useCookies(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useCookies = value;
}
constexpr bool& System::Net::Http::MonoWebRequestHandler::__cordl_internal_get_useProxy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useProxy;
}
constexpr bool const& System::Net::Http::MonoWebRequestHandler::__cordl_internal_get_useProxy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useProxy;
}
constexpr void System::Net::Http::MonoWebRequestHandler::__cordl_internal_set_useProxy(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useProxy = value;
}
constexpr ::System::Net::Security::SslClientAuthenticationOptions*& System::Net::Http::MonoWebRequestHandler::__cordl_internal_get_sslOptions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sslOptions;
}
constexpr ::System::Net::Security::SslClientAuthenticationOptions* const& System::Net::Http::MonoWebRequestHandler::__cordl_internal_get_sslOptions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sslOptions;
}
constexpr void System::Net::Http::MonoWebRequestHandler::__cordl_internal_set_sslOptions(::System::Net::Security::SslClientAuthenticationOptions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sslOptions = value;
}
constexpr bool& System::Net::Http::MonoWebRequestHandler::__cordl_internal_get_allowPipelining() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowPipelining;
}
constexpr bool const& System::Net::Http::MonoWebRequestHandler::__cordl_internal_get_allowPipelining() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowPipelining;
}
constexpr void System::Net::Http::MonoWebRequestHandler::__cordl_internal_set_allowPipelining(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allowPipelining = value;
}
constexpr ::System::Net::Cache::RequestCachePolicy*& System::Net::Http::MonoWebRequestHandler::__cordl_internal_get_cachePolicy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cachePolicy;
}
constexpr ::System::Net::Cache::RequestCachePolicy* const& System::Net::Http::MonoWebRequestHandler::__cordl_internal_get_cachePolicy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cachePolicy;
}
constexpr void System::Net::Http::MonoWebRequestHandler::__cordl_internal_set_cachePolicy(::System::Net::Cache::RequestCachePolicy* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cachePolicy = value;
}
constexpr ::System::Net::Security::AuthenticationLevel& System::Net::Http::MonoWebRequestHandler::__cordl_internal_get_authenticationLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___authenticationLevel;
}
constexpr ::System::Net::Security::AuthenticationLevel const& System::Net::Http::MonoWebRequestHandler::__cordl_internal_get_authenticationLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___authenticationLevel;
}
constexpr void System::Net::Http::MonoWebRequestHandler::__cordl_internal_set_authenticationLevel(::System::Net::Security::AuthenticationLevel value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___authenticationLevel = value;
}
constexpr ::System::TimeSpan& System::Net::Http::MonoWebRequestHandler::__cordl_internal_get_continueTimeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___continueTimeout;
}
constexpr ::System::TimeSpan const& System::Net::Http::MonoWebRequestHandler::__cordl_internal_get_continueTimeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___continueTimeout;
}
constexpr void System::Net::Http::MonoWebRequestHandler::__cordl_internal_set_continueTimeout(::System::TimeSpan value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___continueTimeout = value;
}
constexpr ::System::Security::Principal::TokenImpersonationLevel& System::Net::Http::MonoWebRequestHandler::__cordl_internal_get_impersonationLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___impersonationLevel;
}
constexpr ::System::Security::Principal::TokenImpersonationLevel const& System::Net::Http::MonoWebRequestHandler::__cordl_internal_get_impersonationLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___impersonationLevel;
}
constexpr void System::Net::Http::MonoWebRequestHandler::__cordl_internal_set_impersonationLevel(::System::Security::Principal::TokenImpersonationLevel value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___impersonationLevel = value;
}
constexpr int32_t& System::Net::Http::MonoWebRequestHandler::__cordl_internal_get_maxResponseHeadersLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxResponseHeadersLength;
}
constexpr int32_t const& System::Net::Http::MonoWebRequestHandler::__cordl_internal_get_maxResponseHeadersLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxResponseHeadersLength;
}
constexpr void System::Net::Http::MonoWebRequestHandler::__cordl_internal_set_maxResponseHeadersLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxResponseHeadersLength = value;
}
constexpr int32_t& System::Net::Http::MonoWebRequestHandler::__cordl_internal_get_readWriteTimeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readWriteTimeout;
}
constexpr int32_t const& System::Net::Http::MonoWebRequestHandler::__cordl_internal_get_readWriteTimeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readWriteTimeout;
}
constexpr void System::Net::Http::MonoWebRequestHandler::__cordl_internal_set_readWriteTimeout(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___readWriteTimeout = value;
}
constexpr ::System::Net::Security::RemoteCertificateValidationCallback*& System::Net::Http::MonoWebRequestHandler::__cordl_internal_get_serverCertificateValidationCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serverCertificateValidationCallback;
}
constexpr ::System::Net::Security::RemoteCertificateValidationCallback* const& System::Net::Http::MonoWebRequestHandler::__cordl_internal_get_serverCertificateValidationCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serverCertificateValidationCallback;
}
constexpr void System::Net::Http::MonoWebRequestHandler::__cordl_internal_set_serverCertificateValidationCallback(::System::Net::Security::RemoteCertificateValidationCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___serverCertificateValidationCallback = value;
}
constexpr bool& System::Net::Http::MonoWebRequestHandler::__cordl_internal_get_unsafeAuthenticatedConnectionSharing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unsafeAuthenticatedConnectionSharing;
}
constexpr bool const& System::Net::Http::MonoWebRequestHandler::__cordl_internal_get_unsafeAuthenticatedConnectionSharing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unsafeAuthenticatedConnectionSharing;
}
constexpr void System::Net::Http::MonoWebRequestHandler::__cordl_internal_set_unsafeAuthenticatedConnectionSharing(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___unsafeAuthenticatedConnectionSharing = value;
}
constexpr bool& System::Net::Http::MonoWebRequestHandler::__cordl_internal_get_sentRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sentRequest;
}
constexpr bool const& System::Net::Http::MonoWebRequestHandler::__cordl_internal_get_sentRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sentRequest;
}
constexpr void System::Net::Http::MonoWebRequestHandler::__cordl_internal_set_sentRequest(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sentRequest = value;
}
constexpr ::StringW& System::Net::Http::MonoWebRequestHandler::__cordl_internal_get_connectionGroupName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionGroupName;
}
constexpr ::StringW const& System::Net::Http::MonoWebRequestHandler::__cordl_internal_get_connectionGroupName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionGroupName;
}
constexpr void System::Net::Http::MonoWebRequestHandler::__cordl_internal_set_connectionGroupName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___connectionGroupName = value;
}
constexpr ::System::Nullable_1<::System::TimeSpan>& System::Net::Http::MonoWebRequestHandler::__cordl_internal_get_timeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeout;
}
constexpr ::System::Nullable_1<::System::TimeSpan> const& System::Net::Http::MonoWebRequestHandler::__cordl_internal_get_timeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeout;
}
constexpr void System::Net::Http::MonoWebRequestHandler::__cordl_internal_set_timeout(::System::Nullable_1<::System::TimeSpan> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___timeout = value;
}
constexpr bool& System::Net::Http::MonoWebRequestHandler::__cordl_internal_get_disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr bool const& System::Net::Http::MonoWebRequestHandler::__cordl_internal_get_disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr void System::Net::Http::MonoWebRequestHandler::__cordl_internal_set_disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disposed = value;
}
inline void System::Net::Http::MonoWebRequestHandler::setStaticF_groupCounter(int64_t value) {
  ::cordl_internals::setStaticField<int64_t, "groupCounter", ::System::Net::Http::MonoWebRequestHandler*>(std::forward<int64_t>(value));
}
inline int64_t System::Net::Http::MonoWebRequestHandler::getStaticF_groupCounter() {
  return ::cordl_internals::getStaticField<int64_t, "groupCounter", ::System::Net::Http::MonoWebRequestHandler*>();
}
inline void System::Net::Http::MonoWebRequestHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::MonoWebRequestHandler*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::Http::MonoWebRequestHandler::EnsureModifiability() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::MonoWebRequestHandler*>(), { "EnsureModifiability", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::Http::MonoWebRequestHandler::set_AllowAutoRedirect(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::MonoWebRequestHandler*>(), { "set_AllowAutoRedirect", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::CookieContainer* System::Net::Http::MonoWebRequestHandler::get_CookieContainer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::MonoWebRequestHandler*>(), { "get_CookieContainer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::CookieContainer*>(this, ___internal_method);
}
inline int64_t System::Net::Http::MonoWebRequestHandler::get_MaxRequestContentBufferSize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::MonoWebRequestHandler*>(), { "get_MaxRequestContentBufferSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void System::Net::Http::MonoWebRequestHandler::set_UseProxy(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::MonoWebRequestHandler*>(), { "set_UseProxy", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::Security::SslClientAuthenticationOptions* System::Net::Http::MonoWebRequestHandler::get_SslOptions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::MonoWebRequestHandler*>(), { "get_SslOptions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Security::SslClientAuthenticationOptions*>(this, ___internal_method);
}
inline void System::Net::Http::MonoWebRequestHandler::set_SslOptions(::System::Net::Security::SslClientAuthenticationOptions* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::MonoWebRequestHandler*>(),
                                                                                         { "set_SslOptions", {}, { ::i2c::type_of<::System::Net::Security::SslClientAuthenticationOptions*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::Http::MonoWebRequestHandler::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::MonoWebRequestHandler*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::Http::MonoWebRequestHandler::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::MonoWebRequestHandler*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline bool System::Net::Http::MonoWebRequestHandler::GetConnectionKeepAlive(::System::Net::Http::Headers::HttpRequestHeaders* headers) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::MonoWebRequestHandler*>(),
                                                                                         { "GetConnectionKeepAlive", {}, { ::i2c::type_of<::System::Net::Http::Headers::HttpRequestHeaders*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, headers);
}
inline ::System::Net::HttpWebRequest* System::Net::Http::MonoWebRequestHandler::CreateWebRequest(::System::Net::Http::HttpRequestMessage* request) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::MonoWebRequestHandler*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::HttpWebRequest*>(this, ___internal_method, request);
}
inline ::System::Net::Http::HttpResponseMessage* System::Net::Http::MonoWebRequestHandler::CreateResponseMessage(::System::Net::HttpWebResponse* wr,
                                                                                                                 ::System::Net::Http::HttpRequestMessage* requestMessage,
                                                                                                                 ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::MonoWebRequestHandler*>(),
                                                           { "CreateResponseMessage",
                                                             {},
                                                             { ::i2c::type_of<::System::Net::HttpWebResponse*>(), ::i2c::type_of<::System::Net::Http::HttpRequestMessage*>(),
                                                               ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Http::HttpResponseMessage*>(this, ___internal_method, wr, requestMessage, cancellationToken);
}
inline bool System::Net::Http::MonoWebRequestHandler::MethodHasBody(::System::Net::Http::HttpMethod* method) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::MonoWebRequestHandler*>(), { "MethodHasBody", {}, { ::i2c::type_of<::System::Net::Http::HttpMethod*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, method);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* System::Net::Http::MonoWebRequestHandler::SendAsync(::System::Net::Http::HttpRequestMessage* request,
                                                                                                                                          ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::MonoWebRequestHandler*>(),
                                              { "SendAsync", {}, { ::i2c::type_of<::System::Net::Http::HttpRequestMessage*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*>(this, ___internal_method, request, cancellationToken);
}
inline void System::Net::Http::MonoWebRequestHandler::System_Net_Http_IMonoHttpClientHandler_SetWebRequestTimeout(::System::TimeSpan timeout) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::MonoWebRequestHandler*>(),
                                                           { "System.Net.Http.IMonoHttpClientHandler.SetWebRequestTimeout", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeout);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate*
System::Net::Http::MonoWebRequestHandler::_CreateWebRequest_b__96_0(::StringW t, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* lc,
                                                                    ::System::Security::Cryptography::X509Certificates::X509Certificate* rc, ::ArrayW<::StringW> ai) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::MonoWebRequestHandler*>(),
                                                           { "<CreateWebRequest>b__96_0",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>(),
                                                               ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate*>(this, ___internal_method, t, lc, rc, ai);
}
inline ::System::Net::Http::MonoWebRequestHandler* System::Net::Http::MonoWebRequestHandler::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::MonoWebRequestHandler*>());
}
/// @brief Convert operator to "::System::Net::Http::IMonoHttpClientHandler"
constexpr System::Net::Http::MonoWebRequestHandler::operator ::System::Net::Http::IMonoHttpClientHandler*() noexcept {
  return static_cast<::System::Net::Http::IMonoHttpClientHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Net::Http::IMonoHttpClientHandler"
constexpr ::System::Net::Http::IMonoHttpClientHandler* System::Net::Http::MonoWebRequestHandler::i___System__Net__Http__IMonoHttpClientHandler() noexcept {
  return static_cast<::System::Net::Http::IMonoHttpClientHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Net::Http::MonoWebRequestHandler::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Net::Http::MonoWebRequestHandler::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::Http::MonoWebRequestHandler::MonoWebRequestHandler() {}
