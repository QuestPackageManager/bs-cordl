#pragma once
// IWYU pragma private; include "System/Net/HttpWebRequest.hpp"
#include "System/Net/zzzz__DecompressionMethods_impl.hpp"
#include "System/Net/zzzz__WebRequest_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ValueTuple_5_impl.hpp"
#include "System/Net/zzzz__HttpWebRequest_def.hpp"
#include "Mono/Net/Security/zzzz__MobileTlsProvider_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoTlsSettings_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/Cache/zzzz__RequestCachePolicy_def.hpp"
#include "System/Net/Security/zzzz__RemoteCertificateValidationCallback_def.hpp"
#include "System/Net/zzzz__BufferOffsetSize_def.hpp"
#include "System/Net/zzzz__CookieContainer_def.hpp"
#include "System/Net/zzzz__DecompressionMethods_def.hpp"
#include "System/Net/zzzz__HttpContinueDelegate_def.hpp"
#include "System/Net/zzzz__HttpStatusCode_def.hpp"
#include "System/Net/zzzz__HttpWebRequest_def.hpp"
#include "System/Net/zzzz__HttpWebResponse_def.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/Net/zzzz__IWebProxy_def.hpp"
#include "System/Net/zzzz__ServerCertValidationCallback_def.hpp"
#include "System/Net/zzzz__ServicePoint_def.hpp"
#include "System/Net/zzzz__WebCompletionSource_def.hpp"
#include "System/Net/zzzz__WebException_def.hpp"
#include "System/Net/zzzz__WebHeaderCollection_def.hpp"
#include "System/Net/zzzz__WebOperation_def.hpp"
#include "System/Net/zzzz__WebRequestStream_def.hpp"
#include "System/Net/zzzz__WebResponseStream_def.hpp"
#include "System/Net/zzzz__WebResponse_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/zzzz__ValueTuple_4_def.hpp"
#include "System/zzzz__ValueTuple_5_def.hpp"
#include "System/zzzz__Version_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::HttpWebRequest_NtlmAuthState::HttpWebRequest_NtlmAuthState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::HttpWebRequest_NtlmAuthState::HttpWebRequest_NtlmAuthState() {}
constexpr ::System::Net::HttpWebRequest_NtlmAuthState System::Net::HttpWebRequest_NtlmAuthState::None{ static_cast<int32_t>(0x0) };
constexpr ::System::Net::HttpWebRequest_NtlmAuthState System::Net::HttpWebRequest_NtlmAuthState::Challenge{ static_cast<int32_t>(0x1) };
constexpr ::System::Net::HttpWebRequest_NtlmAuthState System::Net::HttpWebRequest_NtlmAuthState::Response{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::System::Net::HttpWebRequest_AuthorizationState.get_IsCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpWebRequest_AuthorizationState::*)()>(
    &::System::Net::HttpWebRequest_AuthorizationState::get_IsCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43cde6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest_AuthorizationState>::get(),
                                                                               "get_IsCompleted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest_AuthorizationState.get_NtlmAuthState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::HttpWebRequest_NtlmAuthState (::System::Net::HttpWebRequest_AuthorizationState::*)()>(
    &::System::Net::HttpWebRequest_AuthorizationState::get_NtlmAuthState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43cde74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest_AuthorizationState>::get(),
                                                                               "get_NtlmAuthState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest_AuthorizationState.get_IsNtlmAuthenticated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpWebRequest_AuthorizationState::*)()>(
    &::System::Net::HttpWebRequest_AuthorizationState::get_IsNtlmAuthenticated)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x43cde7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest_AuthorizationState>::get(),
                                                                               "get_IsNtlmAuthenticated", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest_AuthorizationState._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest_AuthorizationState::*)(::System::Net::HttpWebRequest*, bool)>(
    &::System::Net::HttpWebRequest_AuthorizationState::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x43c95c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest_AuthorizationState>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpWebRequest*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest_AuthorizationState.CheckAuthorization
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpWebRequest_AuthorizationState::*)(
    ::System::Net::WebResponse*, ::System::Net::HttpStatusCode)>(&::System::Net::HttpWebRequest_AuthorizationState::CheckAuthorization)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x43cd314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest_AuthorizationState>::get(), "CheckAuthorization", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebResponse*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpStatusCode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest_AuthorizationState.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest_AuthorizationState::*)()>(
    &::System::Net::HttpWebRequest_AuthorizationState::Reset)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x43cdcd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest_AuthorizationState>::get(), "Reset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest_AuthorizationState.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::HttpWebRequest_AuthorizationState::*)()>(
    &::System::Net::HttpWebRequest_AuthorizationState::ToString)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x43cde9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest_AuthorizationState>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest_AuthorizationState>::get(), 3));
    return ___internal_method;
  }
};
inline bool System::Net::HttpWebRequest_AuthorizationState::get_IsCompleted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest_AuthorizationState>::get(),
                                                                             "get_IsCompleted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Net::HttpWebRequest_NtlmAuthState System::Net::HttpWebRequest_AuthorizationState::get_NtlmAuthState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest_AuthorizationState>::get(),
                                                                             "get_NtlmAuthState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::HttpWebRequest_NtlmAuthState, false>(this, ___internal_method);
}
inline bool System::Net::HttpWebRequest_AuthorizationState::get_IsNtlmAuthenticated() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest_AuthorizationState>::get(),
                                                                             "get_IsNtlmAuthenticated", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest_AuthorizationState::_ctor(::System::Net::HttpWebRequest* request, bool isProxy) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest_AuthorizationState>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpWebRequest*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, request, isProxy);
}
inline bool System::Net::HttpWebRequest_AuthorizationState::CheckAuthorization(::System::Net::WebResponse* response, ::System::Net::HttpStatusCode code) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest_AuthorizationState>::get(), "CheckAuthorization", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebResponse*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpStatusCode>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, response, code);
}
inline void System::Net::HttpWebRequest_AuthorizationState::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest_AuthorizationState>::get(), "Reset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW System::Net::HttpWebRequest_AuthorizationState::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest_AuthorizationState>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "request", ty: "::System::Net::HttpWebRequest*", modifiers: "", def_value: Some("{}") }, CppParam { name: "isProxy", ty: "bool", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "isCompleted", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "ntlm_auth_state", ty: "::System::Net::HttpWebRequest_NtlmAuthState", modifiers:
// "", def_value: Some("{}") }]
constexpr ::System::Net::HttpWebRequest_AuthorizationState::HttpWebRequest_AuthorizationState(::System::Net::HttpWebRequest* request, bool isProxy, bool isCompleted,
                                                                                              ::System::Net::HttpWebRequest_NtlmAuthState ntlm_auth_state) noexcept {
  this->request = request;
  this->isProxy = isProxy;
  this->isCompleted = isCompleted;
  this->ntlm_auth_state = ntlm_auth_state;
}
// Ctor Parameters []
constexpr ::System::Net::HttpWebRequest_AuthorizationState::HttpWebRequest_AuthorizationState() {}
template <typename T> inline void System::Net::HttpWebRequest___c__241_1<T>::setStaticF___9(::System::Net::HttpWebRequest___c__241_1<T>* value) {
  ::cordl_internals::setStaticField<::System::Net::HttpWebRequest___c__241_1<T>*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest___c__241_1<T>*>::get>(
      std::forward<::System::Net::HttpWebRequest___c__241_1<T>*>(value));
}
template <typename T> inline ::System::Net::HttpWebRequest___c__241_1<T>* System::Net::HttpWebRequest___c__241_1<T>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Net::HttpWebRequest___c__241_1<T>*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest___c__241_1<T>*>::get>();
}
template <typename T> inline void System::Net::HttpWebRequest___c__241_1<T>::setStaticF___9__241_0(::System::Func_2<::System::Threading::Tasks::Task_1<T>*, ::System::Nullable_1<int32_t>>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Threading::Tasks::Task_1<T>*, ::System::Nullable_1<int32_t>>*, "<>9__241_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest___c__241_1<T>*>::get>(
      std::forward<::System::Func_2<::System::Threading::Tasks::Task_1<T>*, ::System::Nullable_1<int32_t>>*>(value));
}
template <typename T> inline ::System::Func_2<::System::Threading::Tasks::Task_1<T>*, ::System::Nullable_1<int32_t>>* System::Net::HttpWebRequest___c__241_1<T>::getStaticF___9__241_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Threading::Tasks::Task_1<T>*, ::System::Nullable_1<int32_t>>*, "<>9__241_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest___c__241_1<T>*>::get>();
}
template <typename T> inline void System::Net::HttpWebRequest___c__241_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest___c__241_1<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::System::Nullable_1<int32_t> System::Net::HttpWebRequest___c__241_1<T>::_RunWithTimeoutWorker_b__241_0(::System::Threading::Tasks::Task_1<T>* t) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest___c__241_1<T>*>::get(), "<RunWithTimeoutWorker>b__241_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>, false>(this, ___internal_method, t);
}
template <typename T> inline ::System::Net::HttpWebRequest___c__241_1<T>* System::Net::HttpWebRequest___c__241_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::HttpWebRequest___c__241_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::System::Net::HttpWebRequest___c__241_1<T>::HttpWebRequest___c__241_1() {}
template <typename T> inline void System::Net::HttpWebRequest__RunWithTimeoutWorker_d__241_1<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest__RunWithTimeoutWorker_d__241_1<T>>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void System::Net::HttpWebRequest__RunWithTimeoutWorker_d__241_1<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest__RunWithTimeoutWorker_d__241_1<T>>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T> constexpr System::Net::HttpWebRequest__RunWithTimeoutWorker_d__241_1<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::Net::HttpWebRequest__RunWithTimeoutWorker_d__241_1<T>::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "workerTask", ty: "::System::Threading::Tasks::Task_1<T>*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "timeout", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cts", ty: "::System::Threading::CancellationTokenSource*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "abort", ty: "::System::Action*", modifiers: "", def_value: Some("{}") }, CppParam { name: "aborted", ty: "::System::Func_1<bool>*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value:
// Some("{}") }]
template <typename T>
constexpr ::System::Net::HttpWebRequest__RunWithTimeoutWorker_d__241_1<T>::HttpWebRequest__RunWithTimeoutWorker_d__241_1(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder, ::System::Threading::Tasks::Task_1<T>* workerTask, int32_t timeout,
    ::System::Threading::CancellationTokenSource* cts, ::System::Action* abort, ::System::Func_1<bool>* aborted,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->workerTask = workerTask;
  this->timeout = timeout;
  this->cts = cts;
  this->abort = abort;
  this->aborted = aborted;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
template <typename T> constexpr ::System::Net::HttpWebRequest__RunWithTimeoutWorker_d__241_1<T>::HttpWebRequest__RunWithTimeoutWorker_d__241_1() {}
//  Writing Method size for method: ::System::Net::HttpWebRequest__MyGetResponseAsync_d__243.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest__MyGetResponseAsync_d__243::*)()>(
    &::System::Net::HttpWebRequest__MyGetResponseAsync_d__243::MoveNext)> {
  constexpr static std::size_t size = 0xed8;
  constexpr static std::size_t addrs = 0x43cdf9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest__MyGetResponseAsync_d__243>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest__MyGetResponseAsync_d__243.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest__MyGetResponseAsync_d__243::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::Net::HttpWebRequest__MyGetResponseAsync_d__243::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x43ceec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest__MyGetResponseAsync_d__243>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void System::Net::HttpWebRequest__MyGetResponseAsync_d__243::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest__MyGetResponseAsync_d__243>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest__MyGetResponseAsync_d__243::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest__MyGetResponseAsync_d__243>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::HttpWebRequest__MyGetResponseAsync_d__243::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::Net::HttpWebRequest__MyGetResponseAsync_d__243::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::HttpWebResponse*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::System::Net::HttpWebRequest*", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_completion_5__2", ty: "::System::Net::WebCompletionSource*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_operation_5__3", ty: "::System::Net::WebOperation*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_throwMe_5__4", ty: "::System::Net::WebException*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_response_5__5", ty:
// "::System::Net::HttpWebResponse*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_stream_5__6", ty: "::System::Net::WebResponseStream*", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "_redirect_5__7", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_mustReadAll_5__8", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_ntlm_5__9", ty: "::System::Net::WebOperation*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_writeBuffer_5__10", ty: "::System::Net::BufferOffsetSize*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::WebRequestStream*>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__3",
// ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::WebResponseStream*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__4", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::ValueTuple_5<::System::Net::HttpWebResponse*,bool,bool,::System::Net::BufferOffsetSize*,::System::Net::WebOperation*>>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::HttpWebRequest__MyGetResponseAsync_d__243::HttpWebRequest__MyGetResponseAsync_d__243(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::HttpWebResponse*> __t__builder, ::System::Net::HttpWebRequest* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Net::WebCompletionSource* _completion_5__2, ::System::Net::WebOperation* _operation_5__3,
    ::System::Net::WebException* _throwMe_5__4, ::System::Net::HttpWebResponse* _response_5__5, ::System::Net::WebResponseStream* _stream_5__6, bool _redirect_5__7, bool _mustReadAll_5__8,
    ::System::Net::WebOperation* _ntlm_5__9, ::System::Net::BufferOffsetSize* _writeBuffer_5__10,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::WebRequestStream*> __u__1,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::WebResponseStream*> __u__3,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<
        ::System::ValueTuple_5<::System::Net::HttpWebResponse*, bool, bool, ::System::Net::BufferOffsetSize*, ::System::Net::WebOperation*>>
        __u__4) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->_completion_5__2 = _completion_5__2;
  this->_operation_5__3 = _operation_5__3;
  this->_throwMe_5__4 = _throwMe_5__4;
  this->_response_5__5 = _response_5__5;
  this->_stream_5__6 = _stream_5__6;
  this->_redirect_5__7 = _redirect_5__7;
  this->_mustReadAll_5__8 = _mustReadAll_5__8;
  this->_ntlm_5__9 = _ntlm_5__9;
  this->_writeBuffer_5__10 = _writeBuffer_5__10;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
  this->__u__3 = __u__3;
  this->__u__4 = __u__4;
}
// Ctor Parameters []
constexpr ::System::Net::HttpWebRequest__MyGetResponseAsync_d__243::HttpWebRequest__MyGetResponseAsync_d__243() {}
//  Writing Method size for method: ::System::Net::HttpWebRequest__GetResponseFromData_d__244.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest__GetResponseFromData_d__244::*)()>(
    &::System::Net::HttpWebRequest__GetResponseFromData_d__244::MoveNext)> {
  constexpr static std::size_t size = 0x7d4;
  constexpr static std::size_t addrs = 0x43cef3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest__GetResponseFromData_d__244>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest__GetResponseFromData_d__244.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest__GetResponseFromData_d__244::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::Net::HttpWebRequest__GetResponseFromData_d__244::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x43cf9f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest__GetResponseFromData_d__244>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void System::Net::HttpWebRequest__GetResponseFromData_d__244::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest__GetResponseFromData_d__244>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest__GetResponseFromData_d__244::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest__GetResponseFromData_d__244>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::HttpWebRequest__GetResponseFromData_d__244::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::Net::HttpWebRequest__GetResponseFromData_d__244::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_5<::System::Net::HttpWebResponse*,bool,bool,::System::Net::BufferOffsetSize*,::System::Net::WebOperation*>>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::HttpWebRequest*", modifiers: "", def_value: Some("{}") }, CppParam { name: "stream", ty:
// "::System::Net::WebResponseStream*", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "_response_5__2", ty: "::System::Net::HttpWebResponse*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_throwMe_5__3", ty: "::System::Net::WebException*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "_redirect_5__4", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_mustReadAll_5__5", ty: "bool", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2",
// ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::BufferOffsetSize*>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::HttpWebRequest__GetResponseFromData_d__244::HttpWebRequest__GetResponseFromData_d__244(
    int32_t __1__state,
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_5<::System::Net::HttpWebResponse*, bool, bool, ::System::Net::BufferOffsetSize*, ::System::Net::WebOperation*>>
        __t__builder,
    ::System::Net::HttpWebRequest* __4__this, ::System::Net::WebResponseStream* stream, ::System::Threading::CancellationToken cancellationToken, ::System::Net::HttpWebResponse* _response_5__2,
    ::System::Net::WebException* _throwMe_5__3, bool _redirect_5__4, bool _mustReadAll_5__5, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::BufferOffsetSize*> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->stream = stream;
  this->cancellationToken = cancellationToken;
  this->_response_5__2 = _response_5__2;
  this->_throwMe_5__3 = _throwMe_5__3;
  this->_redirect_5__4 = _redirect_5__4;
  this->_mustReadAll_5__5 = _mustReadAll_5__5;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::System::Net::HttpWebRequest__GetResponseFromData_d__244::HttpWebRequest__GetResponseFromData_d__244() {}
//  Writing Method size for method: ::System::Net::HttpWebRequest___GetRewriteHandler_b__271_0_d.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest___GetRewriteHandler_b__271_0_d::*)()>(
    &::System::Net::HttpWebRequest___GetRewriteHandler_b__271_0_d::MoveNext)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x43cfa6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest___GetRewriteHandler_b__271_0_d>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest___GetRewriteHandler_b__271_0_d.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest___GetRewriteHandler_b__271_0_d::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::Net::HttpWebRequest___GetRewriteHandler_b__271_0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x43cfec4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest___GetRewriteHandler_b__271_0_d>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void System::Net::HttpWebRequest___GetRewriteHandler_b__271_0_d::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest___GetRewriteHandler_b__271_0_d>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest___GetRewriteHandler_b__271_0_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest___GetRewriteHandler_b__271_0_d>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::HttpWebRequest___GetRewriteHandler_b__271_0_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::Net::HttpWebRequest___GetRewriteHandler_b__271_0_d::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::BufferOffsetSize*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::System::Net::HttpWebRequest*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ms_5__2", ty: "::System::IO::MemoryStream*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::HttpWebRequest___GetRewriteHandler_b__271_0_d::HttpWebRequest___GetRewriteHandler_b__271_0_d(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::BufferOffsetSize*> __t__builder, ::System::Net::HttpWebRequest* __4__this,
    ::System::IO::MemoryStream* _ms_5__2, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_ms_5__2 = _ms_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::System::Net::HttpWebRequest___GetRewriteHandler_b__271_0_d::HttpWebRequest___GetRewriteHandler_b__271_0_d() {}
//  Writing Method size for method: ::System::Net::HttpWebRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)(::System::Uri*)>(&::System::Net::HttpWebRequest::_ctor)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x43c8ec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)(
    ::System::Uri*, ::Mono::Net::Security::MobileTlsProvider*, ::Mono::Security::Interface::MonoTlsSettings*)>(&::System::Net::HttpWebRequest::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x43c9474;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::MobileTlsProvider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Interface::MonoTlsSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Net::HttpWebRequest::_ctor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x43c949c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.ResetAuthorization
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::ResetAuthorization)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x43c9464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "ResetAuthorization",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_Address
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_Address)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43c95dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "get_Address",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_AllowAutoRedirect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)(bool)>(&::System::Net::HttpWebRequest::set_AllowAutoRedirect)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x43c95e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_AllowWriteStreamBuffering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_AllowWriteStreamBuffering)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43c95f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_AllowWriteStreamBuffering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)(bool)>(&::System::Net::HttpWebRequest::set_AllowWriteStreamBuffering)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x43c95f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_AutomaticDecompression
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::DecompressionMethods (::System::Net::HttpWebRequest::*)()>(
    &::System::Net::HttpWebRequest::get_AutomaticDecompression)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43c9604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(),
                                                                               "get_AutomaticDecompression", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_AutomaticDecompression
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)(::System::Net::DecompressionMethods)>(
    &::System::Net::HttpWebRequest::set_AutomaticDecompression)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x43c960c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "set_AutomaticDecompression", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::DecompressionMethods>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_InternalAllowBuffering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_InternalAllowBuffering)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x43c968c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(),
                                                                               "get_InternalAllowBuffering", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_MethodWithBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_MethodWithBuffer)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x43c96a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "get_MethodWithBuffer",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_TlsProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Net::Security::MobileTlsProvider* (::System::Net::HttpWebRequest::*)()>(
    &::System::Net::HttpWebRequest::get_TlsProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43c979c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "get_TlsProvider",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_TlsSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Interface::MonoTlsSettings* (::System::Net::HttpWebRequest::*)()>(
    &::System::Net::HttpWebRequest::get_TlsSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43c97a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "get_TlsSettings",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_ClientCertificates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateCollection* (::System::Net::HttpWebRequest::*)()>(
    &::System::Net::HttpWebRequest::get_ClientCertificates)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x43c97ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "get_ClientCertificates",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_ConnectionGroupName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)(::StringW)>(&::System::Net::HttpWebRequest::set_ConnectionGroupName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43c9810;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_ContentLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_ContentLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43c9818;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_ContentLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)(int64_t)>(&::System::Net::HttpWebRequest::set_ContentLength)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x43c9820;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_InternalContentLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)(int64_t)>(&::System::Net::HttpWebRequest::set_InternalContentLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43c98ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "set_InternalContentLength",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_ThrowOnError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_ThrowOnError)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43c98b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "get_ThrowOnError",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_ThrowOnError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)(bool)>(&::System::Net::HttpWebRequest::set_ThrowOnError)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x43c98bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "set_ThrowOnError",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_CookieContainer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)(::System::Net::CookieContainer*)>(
    &::System::Net::HttpWebRequest::set_CookieContainer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43c98c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 35));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_Credentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::ICredentials* (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_Credentials)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43c98d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_Credentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)(::System::Net::ICredentials*)>(
    &::System::Net::HttpWebRequest::set_Credentials)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43c98d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_DefaultMaximumErrorResponseLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::System::Net::HttpWebRequest::get_DefaultMaximumErrorResponseLength)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x43c98e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "get_DefaultMaximumErrorResponseLength",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_Headers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebHeaderCollection* (::System::Net::HttpWebRequest::*)()>(
    &::System::Net::HttpWebRequest::get_Headers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43c9938;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_Host
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_Host)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x43c9940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "get_Host",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_Host
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)(::StringW)>(&::System::Net::HttpWebRequest::set_Host)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x43c9a48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "set_Host", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.TryGetHostUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpWebRequest::*)(::StringW, ::ByRef<::System::Uri*>)>(
    &::System::Net::HttpWebRequest::TryGetHostUri)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x43c9bb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "TryGetHostUri", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Uri*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_KeepAlive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_KeepAlive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43c9c80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "get_KeepAlive",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_KeepAlive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)(bool)>(&::System::Net::HttpWebRequest::set_KeepAlive)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x43c9c88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "set_KeepAlive",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_MaximumAutomaticRedirections
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)(int32_t)>(&::System::Net::HttpWebRequest::set_MaximumAutomaticRedirections)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x43c9c94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "set_MaximumAutomaticRedirections",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_DefaultMaximumResponseHeadersLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::System::Net::HttpWebRequest::get_DefaultMaximumResponseHeadersLength)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x43c9d10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "get_DefaultMaximumResponseHeadersLength",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_ReadWriteTimeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_ReadWriteTimeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43c9d68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "get_ReadWriteTimeout",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_Method
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_Method)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43c9d70;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_Method
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)(::StringW)>(&::System::Net::HttpWebRequest::set_Method)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x43c9d78;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_PreAuthenticate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)(bool)>(&::System::Net::HttpWebRequest::set_PreAuthenticate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x43c9fa0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_ProtocolVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Version* (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_ProtocolVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43c9fac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "get_ProtocolVersion",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_ProtocolVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)(::System::Version*)>(&::System::Net::HttpWebRequest::set_ProtocolVersion)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x43c9fb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "set_ProtocolVersion", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Version*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_Proxy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IWebProxy* (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_Proxy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43ca0c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_Proxy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)(::System::Net::IWebProxy*)>(&::System::Net::HttpWebRequest::set_Proxy)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x43ca0c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_RequestUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_RequestUri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43ca220;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_SendChunked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_SendChunked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43ca228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "get_SendChunked",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_SendChunked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)(bool)>(&::System::Net::HttpWebRequest::set_SendChunked)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x43ca230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "set_SendChunked",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_ServicePoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::ServicePoint* (::System::Net::HttpWebRequest::*)()>(
    &::System::Net::HttpWebRequest::get_ServicePoint)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x43ca254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "get_ServicePoint",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_ServicePointNoLock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::ServicePoint* (::System::Net::HttpWebRequest::*)()>(
    &::System::Net::HttpWebRequest::get_ServicePointNoLock)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43ca258;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "get_ServicePointNoLock",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_Timeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_Timeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43ca260;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_Timeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)(int32_t)>(&::System::Net::HttpWebRequest::set_Timeout)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x43ca268;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_TransferEncoding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_TransferEncoding)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x43ca2c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "get_TransferEncoding",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_UseDefaultCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_UseDefaultCredentials)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x43ca31c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_UnsafeAuthenticatedConnectionSharing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpWebRequest::*)()>(
    &::System::Net::HttpWebRequest::get_UnsafeAuthenticatedConnectionSharing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43ca394;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "get_UnsafeAuthenticatedConnectionSharing",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_ExpectContinue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_ExpectContinue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43ca39c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "get_ExpectContinue",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_ExpectContinue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)(bool)>(&::System::Net::HttpWebRequest::set_ExpectContinue)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x43ca3a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "set_ExpectContinue",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_AuthUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_AuthUri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43ca3b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "get_AuthUri",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_ProxyQuery
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_ProxyQuery)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x43ca3b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "get_ProxyQuery",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_ServerCertValidationCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::ServerCertValidationCallback* (::System::Net::HttpWebRequest::*)()>(
    &::System::Net::HttpWebRequest::get_ServerCertValidationCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43ca3ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "get_ServerCertValidationCallback",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_ServerCertificateValidationCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Security::RemoteCertificateValidationCallback* (::System::Net::HttpWebRequest::*)()>(
    &::System::Net::HttpWebRequest::get_ServerCertificateValidationCallback)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x43ca3f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "get_ServerCertificateValidationCallback",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_ServerCertificateValidationCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)(::System::Net::Security::RemoteCertificateValidationCallback*)>(
    &::System::Net::HttpWebRequest::set_ServerCertificateValidationCallback)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x43ca40c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "set_ServerCertificateValidationCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Security::RemoteCertificateValidationCallback*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.GetServicePoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::ServicePoint* (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::GetServicePoint)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x43ca0f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "GetServicePoint",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.SendRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebOperation* (
    ::System::Net::HttpWebRequest::*)(bool, ::System::Net::BufferOffsetSize*, ::System::Threading::CancellationToken)>(&::System::Net::HttpWebRequest::SendRequest)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x43caaec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "SendRequest", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::BufferOffsetSize*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.MyGetRequestStreamAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::IO::Stream*>* (
    ::System::Net::HttpWebRequest::*)(::System::Threading::CancellationToken)>(&::System::Net::HttpWebRequest::MyGetRequestStreamAsync)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x43cae78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "MyGetRequestStreamAsync", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.BeginGetRequestStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::System::Net::HttpWebRequest::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::System::Net::HttpWebRequest::BeginGetRequestStream)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x43cb2bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.EndGetRequestStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::System::Net::HttpWebRequest::*)(::System::IAsyncResult*)>(
    &::System::Net::HttpWebRequest::EndGetRequestStream)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x43cb374;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.GetRequestStreamAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::IO::Stream*>* (::System::Net::HttpWebRequest::*)()>(
    &::System::Net::HttpWebRequest::GetRequestStreamAsync)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x43cb518;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.MyGetResponseAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::HttpWebResponse*>* (
    ::System::Net::HttpWebRequest::*)(::System::Threading::CancellationToken)>(&::System::Net::HttpWebRequest::MyGetResponseAsync)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x43cb5b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "MyGetResponseAsync", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.GetResponseFromData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_5<::System::Net::HttpWebResponse*, bool, bool, ::System::Net::BufferOffsetSize*, ::System::Net::WebOperation*>>* (
        ::System::Net::HttpWebRequest::*)(::System::Net::WebResponseStream*, ::System::Threading::CancellationToken)>(&::System::Net::HttpWebRequest::GetResponseFromData)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x43cb6a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "GetResponseFromData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebResponseStream*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.FlattenException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)(::System::Exception*)>(&::System::Net::HttpWebRequest::FlattenException)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x43cb79c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "FlattenException", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.GetWebException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebException* (::System::Net::HttpWebRequest::*)(::System::Exception*)>(
    &::System::Net::HttpWebRequest::GetWebException)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x43cb494;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "GetWebException", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.GetWebException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebException* (*)(::System::Exception*, bool)>(&::System::Net::HttpWebRequest::GetWebException)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x43cb858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "GetWebException", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.CreateRequestAbortedException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebException* (*)()>(&::System::Net::HttpWebRequest::CreateRequestAbortedException)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x43cb200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(),
                                                                               "CreateRequestAbortedException", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.BeginGetResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::System::Net::HttpWebRequest::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::System::Net::HttpWebRequest::BeginGetResponse)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x43cb9fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.EndGetResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebResponse* (::System::Net::HttpWebRequest::*)(::System::IAsyncResult*)>(
    &::System::Net::HttpWebRequest::EndGetResponse)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x43cbb6c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.GetResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebResponse* (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::GetResponse)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x43cbc8c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_FinishedReading
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)(bool)>(&::System::Net::HttpWebRequest::set_FinishedReading)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x43cbd8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "set_FinishedReading",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_Aborted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_Aborted)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x43cb1d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "get_Aborted",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.Abort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::Abort)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x43cbd98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.System_Runtime_Serialization_ISerializable_GetObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Net::HttpWebRequest::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
        &::System::Net::HttpWebRequest::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x43cbea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "System.Runtime.Serialization.ISerializable.GetObjectData",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.GetObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Net::HttpWebRequest::GetObjectData)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x43cbee0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.CheckRequestStarted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::CheckRequestStarted)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x43c9630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "CheckRequestStarted",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.DoContinueDelegate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)(int32_t, ::System::Net::WebHeaderCollection*)>(
    &::System::Net::HttpWebRequest::DoContinueDelegate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x43cbf18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "DoContinueDelegate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebHeaderCollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.RewriteRedirectToGet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::RewriteRedirectToGet)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x43cbf34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "RewriteRedirectToGet",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.Redirect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpWebRequest::*)(::System::Net::HttpStatusCode, ::System::Net::WebResponse*)>(
    &::System::Net::HttpWebRequest::Redirect)> {
  constexpr static std::size_t size = 0x4c8;
  constexpr static std::size_t addrs = 0x43cbfac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "Redirect", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpStatusCode>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebResponse*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.GetHeaders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::GetHeaders)> {
  constexpr static std::size_t size = 0x654;
  constexpr static std::size_t addrs = 0x43cc474;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "GetHeaders",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.DoPreAuthenticate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::DoPreAuthenticate)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x43ccb64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "DoPreAuthenticate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.GetRequestHeaders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Net::HttpWebRequest::*)()>(
    &::System::Net::HttpWebRequest::GetRequestHeaders)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x43ccd64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "GetRequestHeaders",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.HandleNtlmAuth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<::System::Net::WebOperation*, bool> (::System::Net::HttpWebRequest::*)(
    ::System::Net::WebResponseStream*, ::System::Net::HttpWebResponse*, ::System::Net::BufferOffsetSize*, ::System::Threading::CancellationToken)>(&::System::Net::HttpWebRequest::HandleNtlmAuth)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x43cd070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "HandleNtlmAuth", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebResponseStream*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpWebResponse*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::BufferOffsetSize*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.CheckAuthorization
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpWebRequest::*)(::System::Net::WebResponse*, ::System::Net::HttpStatusCode)>(
    &::System::Net::HttpWebRequest::CheckAuthorization)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x43cd2fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "CheckAuthorization", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebResponse*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpStatusCode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.GetRewriteHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ValueTuple_2<::System::Threading::Tasks::Task_1<::System::Net::BufferOffsetSize*>*, ::System::Net::WebException*> (::System::Net::HttpWebRequest::*)(
        ::System::Net::HttpWebResponse*, bool)>(&::System::Net::HttpWebRequest::GetRewriteHandler)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x43cd630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "GetRewriteHandler", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpWebResponse*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.CheckFinalStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ValueTuple_4<bool, bool, ::System::Threading::Tasks::Task_1<::System::Net::BufferOffsetSize*>*, ::System::Net::WebException*> (::System::Net::HttpWebRequest::*)(
        ::System::Net::HttpWebResponse*)>(&::System::Net::HttpWebRequest::CheckFinalStatus)> {
  constexpr static std::size_t size = 0x4a4;
  constexpr static std::size_t addrs = 0x43cd830;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "CheckFinalStatus", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpWebResponse*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest._GetRewriteHandler_b__271_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::BufferOffsetSize*>* (::System::Net::HttpWebRequest::*)()>(
    &::System::Net::HttpWebRequest::_GetRewriteHandler_b__271_0)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x43cdd58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(),
                                                                               "<GetRewriteHandler>b__271_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x43cde34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Uri*& System::Net::HttpWebRequest::__cordl_internal_get_requestUri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestUri;
}
constexpr ::System::Uri* const& System::Net::HttpWebRequest::__cordl_internal_get_requestUri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestUri;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_requestUri(::System::Uri* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___requestUri)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Uri*& System::Net::HttpWebRequest::__cordl_internal_get_actualUri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___actualUri;
}
constexpr ::System::Uri* const& System::Net::HttpWebRequest::__cordl_internal_get_actualUri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___actualUri;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_actualUri(::System::Uri* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___actualUri)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::HttpWebRequest::__cordl_internal_get_hostChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hostChanged;
}
constexpr bool const& System::Net::HttpWebRequest::__cordl_internal_get_hostChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hostChanged;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_hostChanged(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hostChanged = value;
}
constexpr bool& System::Net::HttpWebRequest::__cordl_internal_get_allowAutoRedirect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowAutoRedirect;
}
constexpr bool const& System::Net::HttpWebRequest::__cordl_internal_get_allowAutoRedirect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowAutoRedirect;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_allowAutoRedirect(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allowAutoRedirect = value;
}
constexpr bool& System::Net::HttpWebRequest::__cordl_internal_get_allowBuffering() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowBuffering;
}
constexpr bool const& System::Net::HttpWebRequest::__cordl_internal_get_allowBuffering() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowBuffering;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_allowBuffering(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allowBuffering = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*& System::Net::HttpWebRequest::__cordl_internal_get_certificates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certificates;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* const& System::Net::HttpWebRequest::__cordl_internal_get_certificates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certificates;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_certificates(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___certificates)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Net::HttpWebRequest::__cordl_internal_get_connectionGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionGroup;
}
constexpr ::StringW const& System::Net::HttpWebRequest::__cordl_internal_get_connectionGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionGroup;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_connectionGroup(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___connectionGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::HttpWebRequest::__cordl_internal_get_haveContentLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___haveContentLength;
}
constexpr bool const& System::Net::HttpWebRequest::__cordl_internal_get_haveContentLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___haveContentLength;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_haveContentLength(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___haveContentLength = value;
}
constexpr int64_t& System::Net::HttpWebRequest::__cordl_internal_get_contentLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentLength;
}
constexpr int64_t const& System::Net::HttpWebRequest::__cordl_internal_get_contentLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentLength;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_contentLength(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___contentLength = value;
}
constexpr ::System::Net::HttpContinueDelegate*& System::Net::HttpWebRequest::__cordl_internal_get_continueDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___continueDelegate;
}
constexpr ::System::Net::HttpContinueDelegate* const& System::Net::HttpWebRequest::__cordl_internal_get_continueDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___continueDelegate;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_continueDelegate(::System::Net::HttpContinueDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___continueDelegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::CookieContainer*& System::Net::HttpWebRequest::__cordl_internal_get_cookieContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cookieContainer;
}
constexpr ::System::Net::CookieContainer* const& System::Net::HttpWebRequest::__cordl_internal_get_cookieContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cookieContainer;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_cookieContainer(::System::Net::CookieContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cookieContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::ICredentials*& System::Net::HttpWebRequest::__cordl_internal_get_credentials() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___credentials;
}
constexpr ::System::Net::ICredentials* const& System::Net::HttpWebRequest::__cordl_internal_get_credentials() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___credentials;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_credentials(::System::Net::ICredentials* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___credentials)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::HttpWebRequest::__cordl_internal_get_haveResponse() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___haveResponse;
}
constexpr bool const& System::Net::HttpWebRequest::__cordl_internal_get_haveResponse() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___haveResponse;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_haveResponse(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___haveResponse = value;
}
constexpr bool& System::Net::HttpWebRequest::__cordl_internal_get_requestSent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestSent;
}
constexpr bool const& System::Net::HttpWebRequest::__cordl_internal_get_requestSent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestSent;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_requestSent(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___requestSent = value;
}
constexpr ::System::Net::WebHeaderCollection*& System::Net::HttpWebRequest::__cordl_internal_get_webHeaders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___webHeaders;
}
constexpr ::System::Net::WebHeaderCollection* const& System::Net::HttpWebRequest::__cordl_internal_get_webHeaders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___webHeaders;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_webHeaders(::System::Net::WebHeaderCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___webHeaders)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::HttpWebRequest::__cordl_internal_get_keepAlive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keepAlive;
}
constexpr bool const& System::Net::HttpWebRequest::__cordl_internal_get_keepAlive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keepAlive;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_keepAlive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keepAlive = value;
}
constexpr int32_t& System::Net::HttpWebRequest::__cordl_internal_get_maxAutoRedirect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxAutoRedirect;
}
constexpr int32_t const& System::Net::HttpWebRequest::__cordl_internal_get_maxAutoRedirect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxAutoRedirect;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_maxAutoRedirect(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxAutoRedirect = value;
}
constexpr ::StringW& System::Net::HttpWebRequest::__cordl_internal_get_mediaType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mediaType;
}
constexpr ::StringW const& System::Net::HttpWebRequest::__cordl_internal_get_mediaType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mediaType;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_mediaType(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mediaType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Net::HttpWebRequest::__cordl_internal_get_method() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
constexpr ::StringW const& System::Net::HttpWebRequest::__cordl_internal_get_method() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_method(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___method)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Net::HttpWebRequest::__cordl_internal_get_initialMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initialMethod;
}
constexpr ::StringW const& System::Net::HttpWebRequest::__cordl_internal_get_initialMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initialMethod;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_initialMethod(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___initialMethod)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::HttpWebRequest::__cordl_internal_get_pipelined() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pipelined;
}
constexpr bool const& System::Net::HttpWebRequest::__cordl_internal_get_pipelined() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pipelined;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_pipelined(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pipelined = value;
}
constexpr bool& System::Net::HttpWebRequest::__cordl_internal_get_preAuthenticate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preAuthenticate;
}
constexpr bool const& System::Net::HttpWebRequest::__cordl_internal_get_preAuthenticate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preAuthenticate;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_preAuthenticate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___preAuthenticate = value;
}
constexpr bool& System::Net::HttpWebRequest::__cordl_internal_get_usedPreAuth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usedPreAuth;
}
constexpr bool const& System::Net::HttpWebRequest::__cordl_internal_get_usedPreAuth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usedPreAuth;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_usedPreAuth(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___usedPreAuth = value;
}
constexpr ::System::Version*& System::Net::HttpWebRequest::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::System::Version* const& System::Net::HttpWebRequest::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_version(::System::Version* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___version)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::HttpWebRequest::__cordl_internal_get_force_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___force_version;
}
constexpr bool const& System::Net::HttpWebRequest::__cordl_internal_get_force_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___force_version;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_force_version(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___force_version = value;
}
constexpr ::System::Version*& System::Net::HttpWebRequest::__cordl_internal_get_actualVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___actualVersion;
}
constexpr ::System::Version* const& System::Net::HttpWebRequest::__cordl_internal_get_actualVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___actualVersion;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_actualVersion(::System::Version* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___actualVersion)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::IWebProxy*& System::Net::HttpWebRequest::__cordl_internal_get_proxy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___proxy;
}
constexpr ::System::Net::IWebProxy* const& System::Net::HttpWebRequest::__cordl_internal_get_proxy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___proxy;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_proxy(::System::Net::IWebProxy* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___proxy)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::HttpWebRequest::__cordl_internal_get_sendChunked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sendChunked;
}
constexpr bool const& System::Net::HttpWebRequest::__cordl_internal_get_sendChunked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sendChunked;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_sendChunked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sendChunked = value;
}
constexpr ::System::Net::ServicePoint*& System::Net::HttpWebRequest::__cordl_internal_get_servicePoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___servicePoint;
}
constexpr ::System::Net::ServicePoint* const& System::Net::HttpWebRequest::__cordl_internal_get_servicePoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___servicePoint;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_servicePoint(::System::Net::ServicePoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___servicePoint)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Net::HttpWebRequest::__cordl_internal_get_timeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeout;
}
constexpr int32_t const& System::Net::HttpWebRequest::__cordl_internal_get_timeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeout;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_timeout(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___timeout = value;
}
constexpr int32_t& System::Net::HttpWebRequest::__cordl_internal_get_continueTimeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___continueTimeout;
}
constexpr int32_t const& System::Net::HttpWebRequest::__cordl_internal_get_continueTimeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___continueTimeout;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_continueTimeout(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___continueTimeout = value;
}
constexpr ::System::Net::WebRequestStream*& System::Net::HttpWebRequest::__cordl_internal_get_writeStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writeStream;
}
constexpr ::System::Net::WebRequestStream* const& System::Net::HttpWebRequest::__cordl_internal_get_writeStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writeStream;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_writeStream(::System::Net::WebRequestStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___writeStream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::HttpWebResponse*& System::Net::HttpWebRequest::__cordl_internal_get_webResponse() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___webResponse;
}
constexpr ::System::Net::HttpWebResponse* const& System::Net::HttpWebRequest::__cordl_internal_get_webResponse() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___webResponse;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_webResponse(::System::Net::HttpWebResponse* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___webResponse)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::WebCompletionSource*& System::Net::HttpWebRequest::__cordl_internal_get_responseTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___responseTask;
}
constexpr ::System::Net::WebCompletionSource* const& System::Net::HttpWebRequest::__cordl_internal_get_responseTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___responseTask;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_responseTask(::System::Net::WebCompletionSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___responseTask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::WebOperation*& System::Net::HttpWebRequest::__cordl_internal_get_currentOperation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentOperation;
}
constexpr ::System::Net::WebOperation* const& System::Net::HttpWebRequest::__cordl_internal_get_currentOperation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentOperation;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_currentOperation(::System::Net::WebOperation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___currentOperation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Net::HttpWebRequest::__cordl_internal_get_aborted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___aborted;
}
constexpr int32_t const& System::Net::HttpWebRequest::__cordl_internal_get_aborted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___aborted;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_aborted(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___aborted = value;
}
constexpr bool& System::Net::HttpWebRequest::__cordl_internal_get_gotRequestStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gotRequestStream;
}
constexpr bool const& System::Net::HttpWebRequest::__cordl_internal_get_gotRequestStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gotRequestStream;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_gotRequestStream(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gotRequestStream = value;
}
constexpr int32_t& System::Net::HttpWebRequest::__cordl_internal_get_redirects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___redirects;
}
constexpr int32_t const& System::Net::HttpWebRequest::__cordl_internal_get_redirects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___redirects;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_redirects(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___redirects = value;
}
constexpr bool& System::Net::HttpWebRequest::__cordl_internal_get_expectContinue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expectContinue;
}
constexpr bool const& System::Net::HttpWebRequest::__cordl_internal_get_expectContinue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expectContinue;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_expectContinue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___expectContinue = value;
}
constexpr bool& System::Net::HttpWebRequest::__cordl_internal_get_getResponseCalled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getResponseCalled;
}
constexpr bool const& System::Net::HttpWebRequest::__cordl_internal_get_getResponseCalled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getResponseCalled;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_getResponseCalled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___getResponseCalled = value;
}
constexpr ::System::Object*& System::Net::HttpWebRequest::__cordl_internal_get_locker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___locker;
}
constexpr ::System::Object* const& System::Net::HttpWebRequest::__cordl_internal_get_locker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___locker;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_locker(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___locker)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::HttpWebRequest::__cordl_internal_get_finished_reading() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finished_reading;
}
constexpr bool const& System::Net::HttpWebRequest::__cordl_internal_get_finished_reading() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finished_reading;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_finished_reading(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___finished_reading = value;
}
constexpr ::System::Net::DecompressionMethods& System::Net::HttpWebRequest::__cordl_internal_get_auto_decomp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___auto_decomp;
}
constexpr ::System::Net::DecompressionMethods const& System::Net::HttpWebRequest::__cordl_internal_get_auto_decomp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___auto_decomp;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_auto_decomp(::System::Net::DecompressionMethods value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___auto_decomp = value;
}
constexpr int32_t& System::Net::HttpWebRequest::__cordl_internal_get_readWriteTimeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readWriteTimeout;
}
constexpr int32_t const& System::Net::HttpWebRequest::__cordl_internal_get_readWriteTimeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readWriteTimeout;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_readWriteTimeout(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___readWriteTimeout = value;
}
constexpr ::Mono::Net::Security::MobileTlsProvider*& System::Net::HttpWebRequest::__cordl_internal_get_tlsProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tlsProvider;
}
constexpr ::Mono::Net::Security::MobileTlsProvider* const& System::Net::HttpWebRequest::__cordl_internal_get_tlsProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tlsProvider;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_tlsProvider(::Mono::Net::Security::MobileTlsProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tlsProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Security::Interface::MonoTlsSettings*& System::Net::HttpWebRequest::__cordl_internal_get_tlsSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tlsSettings;
}
constexpr ::Mono::Security::Interface::MonoTlsSettings* const& System::Net::HttpWebRequest::__cordl_internal_get_tlsSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tlsSettings;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_tlsSettings(::Mono::Security::Interface::MonoTlsSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tlsSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::ServerCertValidationCallback*& System::Net::HttpWebRequest::__cordl_internal_get_certValidationCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certValidationCallback;
}
constexpr ::System::Net::ServerCertValidationCallback* const& System::Net::HttpWebRequest::__cordl_internal_get_certValidationCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certValidationCallback;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_certValidationCallback(::System::Net::ServerCertValidationCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___certValidationCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::HttpWebRequest::__cordl_internal_get_hostHasPort() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hostHasPort;
}
constexpr bool const& System::Net::HttpWebRequest::__cordl_internal_get_hostHasPort() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hostHasPort;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_hostHasPort(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hostHasPort = value;
}
constexpr ::System::Uri*& System::Net::HttpWebRequest::__cordl_internal_get_hostUri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hostUri;
}
constexpr ::System::Uri* const& System::Net::HttpWebRequest::__cordl_internal_get_hostUri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hostUri;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_hostUri(::System::Uri* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___hostUri)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::HttpWebRequest_AuthorizationState& System::Net::HttpWebRequest::__cordl_internal_get_auth_state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___auth_state;
}
constexpr ::System::Net::HttpWebRequest_AuthorizationState const& System::Net::HttpWebRequest::__cordl_internal_get_auth_state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___auth_state;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_auth_state(::System::Net::HttpWebRequest_AuthorizationState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___auth_state = value;
}
constexpr ::System::Net::HttpWebRequest_AuthorizationState& System::Net::HttpWebRequest::__cordl_internal_get_proxy_auth_state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___proxy_auth_state;
}
constexpr ::System::Net::HttpWebRequest_AuthorizationState const& System::Net::HttpWebRequest::__cordl_internal_get_proxy_auth_state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___proxy_auth_state;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_proxy_auth_state(::System::Net::HttpWebRequest_AuthorizationState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___proxy_auth_state = value;
}
constexpr ::System::Func_2<::System::IO::Stream*, ::System::Threading::Tasks::Task*>*& System::Net::HttpWebRequest::__cordl_internal_get_ResendContentFactory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ResendContentFactory;
}
constexpr ::System::Func_2<::System::IO::Stream*, ::System::Threading::Tasks::Task*>* const& System::Net::HttpWebRequest::__cordl_internal_get_ResendContentFactory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ResendContentFactory;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_ResendContentFactory(::System::Func_2<::System::IO::Stream*, ::System::Threading::Tasks::Task*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ResendContentFactory)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::HttpWebRequest::__cordl_internal_get__ThrowOnError_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ThrowOnError_k__BackingField;
}
constexpr bool const& System::Net::HttpWebRequest::__cordl_internal_get__ThrowOnError_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ThrowOnError_k__BackingField;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set__ThrowOnError_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ThrowOnError_k__BackingField = value;
}
constexpr bool& System::Net::HttpWebRequest::__cordl_internal_get_unsafe_auth_blah() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unsafe_auth_blah;
}
constexpr bool const& System::Net::HttpWebRequest::__cordl_internal_get_unsafe_auth_blah() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unsafe_auth_blah;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_unsafe_auth_blah(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___unsafe_auth_blah = value;
}
inline void System::Net::HttpWebRequest::setStaticF_defaultMaxResponseHeadersLength(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "defaultMaxResponseHeadersLength", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t System::Net::HttpWebRequest::getStaticF_defaultMaxResponseHeadersLength() {
  return ::cordl_internals::getStaticField<int32_t, "defaultMaxResponseHeadersLength", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get>();
}
inline void System::Net::HttpWebRequest::setStaticF_defaultMaximumErrorResponseLength(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "defaultMaximumErrorResponseLength", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t System::Net::HttpWebRequest::getStaticF_defaultMaximumErrorResponseLength() {
  return ::cordl_internals::getStaticField<int32_t, "defaultMaximumErrorResponseLength", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get>();
}
inline void System::Net::HttpWebRequest::setStaticF_defaultCachePolicy(::System::Net::Cache::RequestCachePolicy* value) {
  ::cordl_internals::setStaticField<::System::Net::Cache::RequestCachePolicy*, "defaultCachePolicy", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get>(
      std::forward<::System::Net::Cache::RequestCachePolicy*>(value));
}
inline ::System::Net::Cache::RequestCachePolicy* System::Net::HttpWebRequest::getStaticF_defaultCachePolicy() {
  return ::cordl_internals::getStaticField<::System::Net::Cache::RequestCachePolicy*, "defaultCachePolicy",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get>();
}
inline void System::Net::HttpWebRequest::_ctor(::System::Uri* uri) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, uri);
}
inline void System::Net::HttpWebRequest::_ctor(::System::Uri* uri, ::Mono::Net::Security::MobileTlsProvider* tlsProvider, ::Mono::Security::Interface::MonoTlsSettings* settings) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::MobileTlsProvider*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Interface::MonoTlsSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, uri, tlsProvider, settings);
}
inline void System::Net::HttpWebRequest::_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializationInfo, streamingContext);
}
inline void System::Net::HttpWebRequest::ResetAuthorization() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "ResetAuthorization",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Uri* System::Net::HttpWebRequest::get_Address() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "get_Address",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*, false>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_AllowAutoRedirect(bool value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 32)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Net::HttpWebRequest::get_AllowWriteStreamBuffering() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 33)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_AllowWriteStreamBuffering(bool value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 34)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Net::DecompressionMethods System::Net::HttpWebRequest::get_AutomaticDecompression() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(),
                                                                             "get_AutomaticDecompression", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::DecompressionMethods, false>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_AutomaticDecompression(::System::Net::DecompressionMethods value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "set_AutomaticDecompression", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::DecompressionMethods>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Net::HttpWebRequest::get_InternalAllowBuffering() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(),
                                                                             "get_InternalAllowBuffering", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Net::HttpWebRequest::get_MethodWithBuffer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "get_MethodWithBuffer",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Mono::Net::Security::MobileTlsProvider* System::Net::HttpWebRequest::get_TlsProvider() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "get_TlsProvider",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Mono::Net::Security::MobileTlsProvider*, false>(this, ___internal_method);
}
inline ::Mono::Security::Interface::MonoTlsSettings* System::Net::HttpWebRequest::get_TlsSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "get_TlsSettings",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::Interface::MonoTlsSettings*, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* System::Net::HttpWebRequest::get_ClientCertificates() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "get_ClientCertificates",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, false>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_ConnectionGroupName(::StringW value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int64_t System::Net::HttpWebRequest::get_ContentLength() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_ContentLength(int64_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Net::HttpWebRequest::set_InternalContentLength(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "set_InternalContentLength",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Net::HttpWebRequest::get_ThrowOnError() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "get_ThrowOnError",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_ThrowOnError(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "set_ThrowOnError",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Net::HttpWebRequest::set_CookieContainer(::System::Net::CookieContainer* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 35)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Net::ICredentials* System::Net::HttpWebRequest::get_Credentials() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<::System::Net::ICredentials*, false>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_Credentials(::System::Net::ICredentials* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t System::Net::HttpWebRequest::get_DefaultMaximumErrorResponseLength() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "get_DefaultMaximumErrorResponseLength",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline ::System::Net::WebHeaderCollection* System::Net::HttpWebRequest::get_Headers() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebHeaderCollection*, false>(this, ___internal_method);
}
inline ::StringW System::Net::HttpWebRequest::get_Host() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "get_Host",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_Host(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "set_Host", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Net::HttpWebRequest::TryGetHostUri(::StringW hostName, ::ByRef<::System::Uri*> hostUri) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "TryGetHostUri", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Uri*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, hostName, hostUri);
}
inline bool System::Net::HttpWebRequest::get_KeepAlive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "get_KeepAlive",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_KeepAlive(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "set_KeepAlive", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Net::HttpWebRequest::set_MaximumAutomaticRedirections(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "set_MaximumAutomaticRedirections",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t System::Net::HttpWebRequest::get_DefaultMaximumResponseHeadersLength() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "get_DefaultMaximumResponseHeadersLength",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline int32_t System::Net::HttpWebRequest::get_ReadWriteTimeout() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "get_ReadWriteTimeout",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW System::Net::HttpWebRequest::get_Method() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_Method(::StringW value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Net::HttpWebRequest::set_PreAuthenticate(bool value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Version* System::Net::HttpWebRequest::get_ProtocolVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "get_ProtocolVersion",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Version*, false>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_ProtocolVersion(::System::Version* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "set_ProtocolVersion", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Version*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Net::IWebProxy* System::Net::HttpWebRequest::get_Proxy() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IWebProxy*, false>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_Proxy(::System::Net::IWebProxy* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Uri* System::Net::HttpWebRequest::get_RequestUri() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*, false>(this, ___internal_method);
}
inline bool System::Net::HttpWebRequest::get_SendChunked() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "get_SendChunked",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_SendChunked(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "set_SendChunked",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Net::ServicePoint* System::Net::HttpWebRequest::get_ServicePoint() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "get_ServicePoint",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::ServicePoint*, false>(this, ___internal_method);
}
inline ::System::Net::ServicePoint* System::Net::HttpWebRequest::get_ServicePointNoLock() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "get_ServicePointNoLock",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::ServicePoint*, false>(this, ___internal_method);
}
inline int32_t System::Net::HttpWebRequest::get_Timeout() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_Timeout(int32_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW System::Net::HttpWebRequest::get_TransferEncoding() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "get_TransferEncoding",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::Net::HttpWebRequest::get_UseDefaultCredentials() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Net::HttpWebRequest::get_UnsafeAuthenticatedConnectionSharing() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "get_UnsafeAuthenticatedConnectionSharing",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Net::HttpWebRequest::get_ExpectContinue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "get_ExpectContinue",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_ExpectContinue(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "set_ExpectContinue",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Uri* System::Net::HttpWebRequest::get_AuthUri() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "get_AuthUri",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*, false>(this, ___internal_method);
}
inline bool System::Net::HttpWebRequest::get_ProxyQuery() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "get_ProxyQuery",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Net::ServerCertValidationCallback* System::Net::HttpWebRequest::get_ServerCertValidationCallback() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(),
                                                                             "get_ServerCertValidationCallback", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::ServerCertValidationCallback*, false>(this, ___internal_method);
}
inline ::System::Net::Security::RemoteCertificateValidationCallback* System::Net::HttpWebRequest::get_ServerCertificateValidationCallback() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "get_ServerCertificateValidationCallback",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Security::RemoteCertificateValidationCallback*, false>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_ServerCertificateValidationCallback(::System::Net::Security::RemoteCertificateValidationCallback* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "set_ServerCertificateValidationCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Security::RemoteCertificateValidationCallback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Net::ServicePoint* System::Net::HttpWebRequest::GetServicePoint() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "GetServicePoint",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::ServicePoint*, false>(this, ___internal_method);
}
inline ::System::Net::WebOperation* System::Net::HttpWebRequest::SendRequest(bool redirecting, ::System::Net::BufferOffsetSize* writeBuffer, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "SendRequest", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::BufferOffsetSize*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebOperation*, false>(this, ___internal_method, redirecting, writeBuffer, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* System::Net::HttpWebRequest::MyGetRequestStreamAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "MyGetRequestStreamAsync", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::IO::Stream*>*, false>(this, ___internal_method, cancellationToken);
}
inline ::System::IAsyncResult* System::Net::HttpWebRequest::BeginGetRequestStream(::System::AsyncCallback* callback, ::System::Object* state) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, state);
}
inline ::System::IO::Stream* System::Net::HttpWebRequest::EndGetRequestStream(::System::IAsyncResult* asyncResult) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method, asyncResult);
}
inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* System::Net::HttpWebRequest::GetRequestStreamAsync() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::IO::Stream*>*, false>(this, ___internal_method);
}
template <typename T>
inline ::System::Threading::Tasks::Task_1<T>* System::Net::HttpWebRequest::RunWithTimeout(::System::Func_2<::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<T>*>* func,
                                                                                          int32_t timeout, ::System::Action* abort, ::System::Func_1<bool>* aborted,
                                                                                          ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "RunWithTimeout",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 5>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<T>*>*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<bool>*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(nullptr, ___internal_method, func, timeout, abort, aborted, cancellationToken);
}
template <typename T>
inline ::System::Threading::Tasks::Task_1<T>* System::Net::HttpWebRequest::RunWithTimeoutWorker(::System::Threading::Tasks::Task_1<T>* workerTask, int32_t timeout, ::System::Action* abort,
                                                                                                ::System::Func_1<bool>* aborted, ::System::Threading::CancellationTokenSource* cts) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "RunWithTimeoutWorker",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<T>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<bool>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationTokenSource*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(nullptr, ___internal_method, workerTask, timeout, abort, aborted, cts);
}
template <typename T>
inline ::System::Threading::Tasks::Task_1<T>* System::Net::HttpWebRequest::RunWithTimeout(::System::Func_2<::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<T>*>* func) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "RunWithTimeout",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<T>*>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(this, ___internal_method, func);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::HttpWebResponse*>* System::Net::HttpWebRequest::MyGetResponseAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "MyGetResponseAsync", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::HttpWebResponse*>*, false>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_5<::System::Net::HttpWebResponse*, bool, bool, ::System::Net::BufferOffsetSize*, ::System::Net::WebOperation*>>*
System::Net::HttpWebRequest::GetResponseFromData(::System::Net::WebResponseStream* stream, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "GetResponseFromData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebResponseStream*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Threading::Tasks::Task_1<::System::ValueTuple_5<::System::Net::HttpWebResponse*, bool, bool, ::System::Net::BufferOffsetSize*, ::System::Net::WebOperation*>>*, false>(
      this, ___internal_method, stream, cancellationToken);
}
inline ::System::Exception* System::Net::HttpWebRequest::FlattenException(::System::Exception* e) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "FlattenException", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(nullptr, ___internal_method, e);
}
inline ::System::Net::WebException* System::Net::HttpWebRequest::GetWebException(::System::Exception* e) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "GetWebException", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebException*, false>(this, ___internal_method, e);
}
inline ::System::Net::WebException* System::Net::HttpWebRequest::GetWebException(::System::Exception* e, bool aborted) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "GetWebException", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebException*, false>(nullptr, ___internal_method, e, aborted);
}
inline ::System::Net::WebException* System::Net::HttpWebRequest::CreateRequestAbortedException() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(),
                                                                             "CreateRequestAbortedException", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebException*, false>(nullptr, ___internal_method);
}
inline ::System::IAsyncResult* System::Net::HttpWebRequest::BeginGetResponse(::System::AsyncCallback* callback, ::System::Object* state) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, state);
}
inline ::System::Net::WebResponse* System::Net::HttpWebRequest::EndGetResponse(::System::IAsyncResult* asyncResult) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebResponse*, false>(this, ___internal_method, asyncResult);
}
inline ::System::Net::WebResponse* System::Net::HttpWebRequest::GetResponse() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebResponse*, false>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_FinishedReading(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "set_FinishedReading",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Net::HttpWebRequest::get_Aborted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "get_Aborted",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::Abort() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                                                  ::System::Runtime::Serialization::StreamingContext streamingContext) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "System.Runtime.Serialization.ISerializable.GetObjectData",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializationInfo, streamingContext);
}
inline void System::Net::HttpWebRequest::GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializationInfo, streamingContext);
}
inline void System::Net::HttpWebRequest::CheckRequestStarted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "CheckRequestStarted",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::DoContinueDelegate(int32_t statusCode, ::System::Net::WebHeaderCollection* headers) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "DoContinueDelegate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebHeaderCollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, statusCode, headers);
}
inline void System::Net::HttpWebRequest::RewriteRedirectToGet() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "RewriteRedirectToGet",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Net::HttpWebRequest::Redirect(::System::Net::HttpStatusCode code, ::System::Net::WebResponse* response) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "Redirect", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpStatusCode>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebResponse*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, code, response);
}
inline ::StringW System::Net::HttpWebRequest::GetHeaders() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "GetHeaders",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::DoPreAuthenticate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "DoPreAuthenticate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Net::HttpWebRequest::GetRequestHeaders() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "GetRequestHeaders",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::System::ValueTuple_2<::System::Net::WebOperation*, bool> System::Net::HttpWebRequest::HandleNtlmAuth(::System::Net::WebResponseStream* stream, ::System::Net::HttpWebResponse* response,
                                                                                                              ::System::Net::BufferOffsetSize* writeBuffer,
                                                                                                              ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "HandleNtlmAuth", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebResponseStream*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpWebResponse*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::BufferOffsetSize*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::System::Net::WebOperation*, bool>, false>(this, ___internal_method, stream, response, writeBuffer, cancellationToken);
}
inline bool System::Net::HttpWebRequest::CheckAuthorization(::System::Net::WebResponse* response, ::System::Net::HttpStatusCode code) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "CheckAuthorization", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebResponse*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpStatusCode>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, response, code);
}
inline ::System::ValueTuple_2<::System::Threading::Tasks::Task_1<::System::Net::BufferOffsetSize*>*, ::System::Net::WebException*>
System::Net::HttpWebRequest::GetRewriteHandler(::System::Net::HttpWebResponse* response, bool redirect) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "GetRewriteHandler", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpWebResponse*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::System::Threading::Tasks::Task_1<::System::Net::BufferOffsetSize*>*, ::System::Net::WebException*>, false>(
      this, ___internal_method, response, redirect);
}
inline ::System::ValueTuple_4<bool, bool, ::System::Threading::Tasks::Task_1<::System::Net::BufferOffsetSize*>*, ::System::Net::WebException*>
System::Net::HttpWebRequest::CheckFinalStatus(::System::Net::HttpWebResponse* response) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "CheckFinalStatus", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpWebResponse*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_4<bool, bool, ::System::Threading::Tasks::Task_1<::System::Net::BufferOffsetSize*>*, ::System::Net::WebException*>, false>(
      this, ___internal_method, response);
}
template <typename T> inline bool System::Net::HttpWebRequest::_RunWithTimeout_b__242_0() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), "<RunWithTimeout>b__242_0",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::BufferOffsetSize*>* System::Net::HttpWebRequest::_GetRewriteHandler_b__271_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(),
                                                                             "<GetRewriteHandler>b__271_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::BufferOffsetSize*>*, false>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Net::HttpWebRequest* System::Net::HttpWebRequest::New_ctor(::System::Uri* uri) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::HttpWebRequest*>(uri));
}
inline ::System::Net::HttpWebRequest* System::Net::HttpWebRequest::New_ctor(::System::Uri* uri, ::Mono::Net::Security::MobileTlsProvider* tlsProvider,
                                                                            ::Mono::Security::Interface::MonoTlsSettings* settings) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::HttpWebRequest*>(uri, tlsProvider, settings));
}
inline ::System::Net::HttpWebRequest* System::Net::HttpWebRequest::New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                            ::System::Runtime::Serialization::StreamingContext streamingContext) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::HttpWebRequest*>(serializationInfo, streamingContext));
}
inline ::System::Net::HttpWebRequest* System::Net::HttpWebRequest::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::HttpWebRequest*>());
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Net::HttpWebRequest::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Net::HttpWebRequest::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::HttpWebRequest::HttpWebRequest() {}
