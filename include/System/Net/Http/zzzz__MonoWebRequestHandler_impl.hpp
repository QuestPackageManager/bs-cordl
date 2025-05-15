#pragma once
// IWYU pragma private; include "System/Net/Http/MonoWebRequestHandler.hpp"
#include "System/Net/Http/zzzz__IMonoHttpClientHandler_impl.hpp"
#include "System/Net/Security/zzzz__AuthenticationLevel_impl.hpp"
#include "System/Net/zzzz__DecompressionMethods_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Security/Principal/zzzz__TokenImpersonationLevel_impl.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
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
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Net::Http::MonoWebRequestHandler___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::MonoWebRequestHandler___c::*)()>(&::System::Net::Http::MonoWebRequestHandler___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x421502c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler___c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MonoWebRequestHandler___c._GetConnectionKeepAlive_b__95_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Http::MonoWebRequestHandler___c::*)(::StringW)>(
    &::System::Net::Http::MonoWebRequestHandler___c::_GetConnectionKeepAlive_b__95_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x4215034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler___c*>::get(), "<GetConnectionKeepAlive>b__95_0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MonoWebRequestHandler___c._CreateWebRequest_b__96_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Http::MonoWebRequestHandler___c::*)(::StringW)>(
    &::System::Net::Http::MonoWebRequestHandler___c::_CreateWebRequest_b__96_1)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x4215084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler___c*>::get(), "<CreateWebRequest>b__96_1",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MonoWebRequestHandler___c._SendAsync_b__99_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::MonoWebRequestHandler___c::*)(::System::Object*)>(
    &::System::Net::Http::MonoWebRequestHandler___c::_SendAsync_b__99_0)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x42150d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler___c*>::get(), "<SendAsync>b__99_0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
inline void System::Net::Http::MonoWebRequestHandler___c::setStaticF___9(::System::Net::Http::MonoWebRequestHandler___c* value) {
  ::cordl_internals::setStaticField<::System::Net::Http::MonoWebRequestHandler___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler___c*>::get>(
      std::forward<::System::Net::Http::MonoWebRequestHandler___c*>(value));
}
inline ::System::Net::Http::MonoWebRequestHandler___c* System::Net::Http::MonoWebRequestHandler___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Net::Http::MonoWebRequestHandler___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler___c*>::get>();
}
inline void System::Net::Http::MonoWebRequestHandler___c::setStaticF___9__95_0(::System::Func_2<::StringW, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::StringW, bool>*, "<>9__95_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler___c*>::get>(
      std::forward<::System::Func_2<::StringW, bool>*>(value));
}
inline ::System::Func_2<::StringW, bool>* System::Net::Http::MonoWebRequestHandler___c::getStaticF___9__95_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::StringW, bool>*, "<>9__95_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler___c*>::get>();
}
inline void System::Net::Http::MonoWebRequestHandler___c::setStaticF___9__96_1(::System::Func_2<::StringW, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::StringW, bool>*, "<>9__96_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler___c*>::get>(
      std::forward<::System::Func_2<::StringW, bool>*>(value));
}
inline ::System::Func_2<::StringW, bool>* System::Net::Http::MonoWebRequestHandler___c::getStaticF___9__96_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::StringW, bool>*, "<>9__96_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler___c*>::get>();
}
inline void System::Net::Http::MonoWebRequestHandler___c::setStaticF___9__99_0(::System::Action_1<::System::Object*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "<>9__99_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler___c*>::get>(
      std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* System::Net::Http::MonoWebRequestHandler___c::getStaticF___9__99_0() {
  return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "<>9__99_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler___c*>::get>();
}
inline void System::Net::Http::MonoWebRequestHandler___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler___c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Net::Http::MonoWebRequestHandler___c::_GetConnectionKeepAlive_b__95_0(::StringW l) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler___c*>::get(), "<GetConnectionKeepAlive>b__95_0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, l);
}
inline bool System::Net::Http::MonoWebRequestHandler___c::_CreateWebRequest_b__96_1(::StringW l) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler___c*>::get(), "<CreateWebRequest>b__96_1",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, l);
}
inline void System::Net::Http::MonoWebRequestHandler___c::_SendAsync_b__99_0(::System::Object* l) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler___c*>::get(), "<SendAsync>b__99_0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, l);
}
inline ::System::Net::Http::MonoWebRequestHandler___c* System::Net::Http::MonoWebRequestHandler___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Http::MonoWebRequestHandler___c*>());
}
// Ctor Parameters []
constexpr ::System::Net::Http::MonoWebRequestHandler___c::MonoWebRequestHandler___c() {}
//  Writing Method size for method: ::System::Net::Http::MonoWebRequestHandler__SendAsync_d__99.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::MonoWebRequestHandler__SendAsync_d__99::*)()>(
    &::System::Net::Http::MonoWebRequestHandler__SendAsync_d__99::MoveNext)> {
  constexpr static std::size_t size = 0x17ec;
  constexpr static std::size_t addrs = 0x4215158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler__SendAsync_d__99>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MonoWebRequestHandler__SendAsync_d__99.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::MonoWebRequestHandler__SendAsync_d__99::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::Net::Http::MonoWebRequestHandler__SendAsync_d__99::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x4216d20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler__SendAsync_d__99>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void System::Net::Http::MonoWebRequestHandler__SendAsync_d__99::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler__SendAsync_d__99>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::Http::MonoWebRequestHandler__SendAsync_d__99::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler__SendAsync_d__99>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::Http::MonoWebRequestHandler__SendAsync_d__99::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::Net::Http::MonoWebRequestHandler__SendAsync_d__99::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::MonoWebRequestHandler::*)()>(&::System::Net::Http::MonoWebRequestHandler::_ctor)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x4212cd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MonoWebRequestHandler.EnsureModifiability
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::MonoWebRequestHandler::*)()>(
    &::System::Net::Http::MonoWebRequestHandler::EnsureModifiability)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x42136f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler*>::get(),
                                                                               "EnsureModifiability", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MonoWebRequestHandler.get_CookieContainer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::CookieContainer* (::System::Net::Http::MonoWebRequestHandler::*)()>(
    &::System::Net::Http::MonoWebRequestHandler::get_CookieContainer)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x4213750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler*>::get(),
                                                                               "get_CookieContainer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MonoWebRequestHandler.get_MaxRequestContentBufferSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Net::Http::MonoWebRequestHandler::*)()>(
    &::System::Net::Http::MonoWebRequestHandler::get_MaxRequestContentBufferSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x42137b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler*>::get(), "get_MaxRequestContentBufferSize",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MonoWebRequestHandler.get_SslOptions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Security::SslClientAuthenticationOptions* (::System::Net::Http::MonoWebRequestHandler::*)()>(
    &::System::Net::Http::MonoWebRequestHandler::get_SslOptions)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x42137bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler*>::get(),
                                                                               "get_SslOptions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MonoWebRequestHandler.set_SslOptions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::MonoWebRequestHandler::*)(::System::Net::Security::SslClientAuthenticationOptions*)>(
    &::System::Net::Http::MonoWebRequestHandler::set_SslOptions)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4213820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler*>::get(), "set_SslOptions", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Security::SslClientAuthenticationOptions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MonoWebRequestHandler.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::MonoWebRequestHandler::*)()>(&::System::Net::Http::MonoWebRequestHandler::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4213844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MonoWebRequestHandler.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::MonoWebRequestHandler::*)(bool)>(&::System::Net::Http::MonoWebRequestHandler::Dispose)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4213854;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MonoWebRequestHandler.GetConnectionKeepAlive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Http::MonoWebRequestHandler::*)(::System::Net::Http::Headers::HttpRequestHeaders*)>(
    &::System::Net::Http::MonoWebRequestHandler::GetConnectionKeepAlive)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x42138d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler*>::get(), "GetConnectionKeepAlive", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::Headers::HttpRequestHeaders*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MonoWebRequestHandler.CreateWebRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::HttpWebRequest* (
    ::System::Net::Http::MonoWebRequestHandler::*)(::System::Net::Http::HttpRequestMessage*)>(&::System::Net::Http::MonoWebRequestHandler::CreateWebRequest)> {
  constexpr static std::size_t size = 0x8bc;
  constexpr static std::size_t addrs = 0x4213a4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MonoWebRequestHandler.CreateResponseMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Http::HttpResponseMessage* (
    ::System::Net::Http::MonoWebRequestHandler::*)(::System::Net::HttpWebResponse*, ::System::Net::Http::HttpRequestMessage*, ::System::Threading::CancellationToken)>(
    &::System::Net::Http::MonoWebRequestHandler::CreateResponseMessage)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x42147e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler*>::get(), "CreateResponseMessage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpWebResponse*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpRequestMessage*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MonoWebRequestHandler.MethodHasBody
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Net::Http::HttpMethod*)>(&::System::Net::Http::MonoWebRequestHandler::MethodHasBody)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x4214cec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler*>::get(), "MethodHasBody", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpMethod*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MonoWebRequestHandler.SendAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* (
    ::System::Net::Http::MonoWebRequestHandler::*)(::System::Net::Http::HttpRequestMessage*, ::System::Threading::CancellationToken)>(&::System::Net::Http::MonoWebRequestHandler::SendAsync)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x4214df8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler*>::get(), "SendAsync", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpRequestMessage*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MonoWebRequestHandler.System_Net_Http_IMonoHttpClientHandler_SetWebRequestTimeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::MonoWebRequestHandler::*)(::System::TimeSpan)>(
    &::System::Net::Http::MonoWebRequestHandler::System_Net_Http_IMonoHttpClientHandler_SetWebRequestTimeout)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x4214efc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler*>::get(), "System.Net.Http.IMonoHttpClientHandler.SetWebRequestTimeout",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MonoWebRequestHandler._CreateWebRequest_b__96_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate* (
    ::System::Net::Http::MonoWebRequestHandler::*)(::StringW, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*,
                                                   ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::System::Net::Http::MonoWebRequestHandler::_CreateWebRequest_b__96_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x4214f6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler*>::get(), "<CreateWebRequest>b__96_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cookieContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___credentials)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___proxy)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sslOptions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cachePolicy)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serverCertificateValidationCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___connectionGroupName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  ::cordl_internals::setStaticField<int64_t, "groupCounter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler*>::get>(std::forward<int64_t>(value));
}
inline int64_t System::Net::Http::MonoWebRequestHandler::getStaticF_groupCounter() {
  return ::cordl_internals::getStaticField<int64_t, "groupCounter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler*>::get>();
}
inline void System::Net::Http::MonoWebRequestHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::Http::MonoWebRequestHandler::EnsureModifiability() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler*>::get(),
                                                                             "EnsureModifiability", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Net::CookieContainer* System::Net::Http::MonoWebRequestHandler::get_CookieContainer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler*>::get(),
                                                                             "get_CookieContainer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::CookieContainer*, false>(this, ___internal_method);
}
inline int64_t System::Net::Http::MonoWebRequestHandler::get_MaxRequestContentBufferSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler*>::get(),
                                                                             "get_MaxRequestContentBufferSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline ::System::Net::Security::SslClientAuthenticationOptions* System::Net::Http::MonoWebRequestHandler::get_SslOptions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler*>::get(),
                                                                             "get_SslOptions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Security::SslClientAuthenticationOptions*, false>(this, ___internal_method);
}
inline void System::Net::Http::MonoWebRequestHandler::set_SslOptions(::System::Net::Security::SslClientAuthenticationOptions* value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler*>::get(), "set_SslOptions", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Security::SslClientAuthenticationOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Net::Http::MonoWebRequestHandler::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::Http::MonoWebRequestHandler::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline bool System::Net::Http::MonoWebRequestHandler::GetConnectionKeepAlive(::System::Net::Http::Headers::HttpRequestHeaders* headers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler*>::get(), "GetConnectionKeepAlive", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::Headers::HttpRequestHeaders*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, headers);
}
inline ::System::Net::HttpWebRequest* System::Net::Http::MonoWebRequestHandler::CreateWebRequest(::System::Net::Http::HttpRequestMessage* request) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::System::Net::HttpWebRequest*, false>(this, ___internal_method, request);
}
inline ::System::Net::Http::HttpResponseMessage* System::Net::Http::MonoWebRequestHandler::CreateResponseMessage(::System::Net::HttpWebResponse* wr,
                                                                                                                 ::System::Net::Http::HttpRequestMessage* requestMessage,
                                                                                                                 ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler*>::get(), "CreateResponseMessage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpWebResponse*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpRequestMessage*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Http::HttpResponseMessage*, false>(this, ___internal_method, wr, requestMessage, cancellationToken);
}
inline bool System::Net::Http::MonoWebRequestHandler::MethodHasBody(::System::Net::Http::HttpMethod* method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler*>::get(), "MethodHasBody", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpMethod*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, method);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* System::Net::Http::MonoWebRequestHandler::SendAsync(::System::Net::Http::HttpRequestMessage* request,
                                                                                                                                          ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler*>::get(), "SendAsync", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpRequestMessage*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*, false>(this, ___internal_method, request, cancellationToken);
}
inline void System::Net::Http::MonoWebRequestHandler::System_Net_Http_IMonoHttpClientHandler_SetWebRequestTimeout(::System::TimeSpan timeout) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler*>::get(),
                                                                             "System.Net.Http.IMonoHttpClientHandler.SetWebRequestTimeout", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, timeout);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate*
System::Net::Http::MonoWebRequestHandler::_CreateWebRequest_b__96_0(::StringW t, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* lc,
                                                                    ::System::Security::Cryptography::X509Certificates::X509Certificate* rc, ::ArrayW<::StringW, ::Array<::StringW>*> ai) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MonoWebRequestHandler*>::get(), "<CreateWebRequest>b__96_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate*, false>(this, ___internal_method, t, lc, rc, ai);
}
inline ::System::Net::Http::MonoWebRequestHandler* System::Net::Http::MonoWebRequestHandler::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Http::MonoWebRequestHandler*>());
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
