#pragma once
#include "Mono/Net/Security/zzzz__AsyncProtocolResult_impl.hpp"
#include "Mono/Net/Security/zzzz__MobileAuthenticatedStream_impl.hpp"
#include "System/Net/Security/zzzz__AuthenticatedStream_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Net/Security/zzzz__MobileAuthenticatedStream_def.hpp"
#include "Mono/Net/Security/zzzz__MobileAuthenticatedStream_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Security/Authentication/zzzz__SslProtocols_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
#include "Mono/Net/Security/zzzz__AsyncProtocolRequest_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "Mono/Net/Security/zzzz__BufferOffsetSize_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Mono/Net/Security/zzzz__MobileTlsContext_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoTlsSettings_def.hpp"
#include "Mono/Net/Security/zzzz__MonoSslAuthenticationOptions_def.hpp"
#include "Mono/Net/Security/zzzz__BufferOffsetSize2_def.hpp"
#include "System/Net/Security/zzzz__SslStream_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "Mono/Net/Security/zzzz__MobileTlsProvider_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Mono/Net/Security/zzzz__AsyncOperationStatus_def.hpp"
#include "System/Runtime/ExceptionServices/zzzz__ExceptionDispatchInfo_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "Mono/Net/Security/zzzz__AsyncProtocolResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Net::Security::__MobileAuthenticatedStream__Operation::__MobileAuthenticatedStream__Operation(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mono::Net::Security::__MobileAuthenticatedStream__Operation::__MobileAuthenticatedStream__Operation() {}
constexpr ::Mono::Net::Security::__MobileAuthenticatedStream__Operation Mono::Net::Security::__MobileAuthenticatedStream__Operation::None{ static_cast<int32_t>(0x0) };
constexpr ::Mono::Net::Security::__MobileAuthenticatedStream__Operation Mono::Net::Security::__MobileAuthenticatedStream__Operation::Handshake{ static_cast<int32_t>(0x1) };
constexpr ::Mono::Net::Security::__MobileAuthenticatedStream__Operation Mono::Net::Security::__MobileAuthenticatedStream__Operation::Authenticated{ static_cast<int32_t>(0x2) };
constexpr ::Mono::Net::Security::__MobileAuthenticatedStream__Operation Mono::Net::Security::__MobileAuthenticatedStream__Operation::Renegotiate{ static_cast<int32_t>(0x3) };
constexpr ::Mono::Net::Security::__MobileAuthenticatedStream__Operation Mono::Net::Security::__MobileAuthenticatedStream__Operation::Read{ static_cast<int32_t>(0x4) };
constexpr ::Mono::Net::Security::__MobileAuthenticatedStream__Operation Mono::Net::Security::__MobileAuthenticatedStream__Operation::Write{ static_cast<int32_t>(0x5) };
constexpr ::Mono::Net::Security::__MobileAuthenticatedStream__Operation Mono::Net::Security::__MobileAuthenticatedStream__Operation::Close{ static_cast<int32_t>(0x6) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Net::Security::__MobileAuthenticatedStream__OperationType::__MobileAuthenticatedStream__OperationType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mono::Net::Security::__MobileAuthenticatedStream__OperationType::__MobileAuthenticatedStream__OperationType() {}
constexpr ::Mono::Net::Security::__MobileAuthenticatedStream__OperationType Mono::Net::Security::__MobileAuthenticatedStream__OperationType::Read{ static_cast<int32_t>(0x0) };
constexpr ::Mono::Net::Security::__MobileAuthenticatedStream__OperationType Mono::Net::Security::__MobileAuthenticatedStream__OperationType::Write{ static_cast<int32_t>(0x1) };
constexpr ::Mono::Net::Security::__MobileAuthenticatedStream__OperationType Mono::Net::Security::__MobileAuthenticatedStream__OperationType::Renegotiate{ static_cast<int32_t>(0x2) };
constexpr ::Mono::Net::Security::__MobileAuthenticatedStream__OperationType Mono::Net::Security::__MobileAuthenticatedStream__OperationType::Shutdown{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::Mono::Net::Security::__MobileAuthenticatedStream___ProcessAuthentication_d__48.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::__MobileAuthenticatedStream___ProcessAuthentication_d__48::*)()>(
    &::Mono::Net::Security::__MobileAuthenticatedStream___ProcessAuthentication_d__48::MoveNext)> {
  constexpr static std::size_t size = 0x904;
  constexpr static std::size_t addrs = 0x2822654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::__MobileAuthenticatedStream___ProcessAuthentication_d__48>::get(),
                                                 "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::__MobileAuthenticatedStream___ProcessAuthentication_d__48.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::__MobileAuthenticatedStream___ProcessAuthentication_d__48::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Mono::Net::Security::__MobileAuthenticatedStream___ProcessAuthentication_d__48::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2822f58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::__MobileAuthenticatedStream___ProcessAuthentication_d__48>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Mono::Net::Security::__MobileAuthenticatedStream___ProcessAuthentication_d__48::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void Mono::Net::Security::__MobileAuthenticatedStream___ProcessAuthentication_d__48::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::__MobileAuthenticatedStream___ProcessAuthentication_d__48>::get(),
                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Mono::Net::Security::__MobileAuthenticatedStream___ProcessAuthentication_d__48::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::__MobileAuthenticatedStream___ProcessAuthentication_d__48>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "options", ty: "::Mono::Net::Security::MonoSslAuthenticationOptions*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__4__this", ty: "::Mono::Net::Security::MobileAuthenticatedStream*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "runSynchronously", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") },
// CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Mono::Net::Security::AsyncProtocolResult*>", modifiers: "", def_value:
// Some("{}") }]
constexpr ::Mono::Net::Security::__MobileAuthenticatedStream___ProcessAuthentication_d__48::__MobileAuthenticatedStream___ProcessAuthentication_d__48(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Mono::Net::Security::MonoSslAuthenticationOptions* options,
    ::Mono::Net::Security::MobileAuthenticatedStream* __4__this, bool runSynchronously, ::System::Threading::CancellationToken cancellationToken,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Mono::Net::Security::AsyncProtocolResult*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->options = options;
  this->__4__this = __4__this;
  this->runSynchronously = runSynchronously;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Mono::Net::Security::__MobileAuthenticatedStream___ProcessAuthentication_d__48::__MobileAuthenticatedStream___ProcessAuthentication_d__48() {}
//  Writing Method size for method: ::Mono::Net::Security::__MobileAuthenticatedStream___StartOperation_d__57.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::__MobileAuthenticatedStream___StartOperation_d__57::*)()>(
    &::Mono::Net::Security::__MobileAuthenticatedStream___StartOperation_d__57::MoveNext)> {
  constexpr static std::size_t size = 0x758;
  constexpr static std::size_t addrs = 0x2822f64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::__MobileAuthenticatedStream___StartOperation_d__57>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::__MobileAuthenticatedStream___StartOperation_d__57.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::__MobileAuthenticatedStream___StartOperation_d__57::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Mono::Net::Security::__MobileAuthenticatedStream___StartOperation_d__57::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x28236bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::__MobileAuthenticatedStream___StartOperation_d__57>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Mono::Net::Security::__MobileAuthenticatedStream___StartOperation_d__57::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void Mono::Net::Security::__MobileAuthenticatedStream___StartOperation_d__57::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::__MobileAuthenticatedStream___StartOperation_d__57>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Mono::Net::Security::__MobileAuthenticatedStream___StartOperation_d__57::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::__MobileAuthenticatedStream___StartOperation_d__57>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Mono::Net::Security::MobileAuthenticatedStream*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "type", ty: "::Mono::Net::Security::__MobileAuthenticatedStream__OperationType",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "asyncRequest", ty: "::Mono::Net::Security::AsyncProtocolRequest*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Mono::Net::Security::AsyncProtocolResult*>", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Net::Security::__MobileAuthenticatedStream___StartOperation_d__57::__MobileAuthenticatedStream___StartOperation_d__57(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder, ::Mono::Net::Security::MobileAuthenticatedStream* __4__this,
    ::Mono::Net::Security::__MobileAuthenticatedStream__OperationType type, ::Mono::Net::Security::AsyncProtocolRequest* asyncRequest, ::System::Threading::CancellationToken cancellationToken,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Mono::Net::Security::AsyncProtocolResult*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->type = type;
  this->asyncRequest = asyncRequest;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Mono::Net::Security::__MobileAuthenticatedStream___StartOperation_d__57::__MobileAuthenticatedStream___StartOperation_d__57() {}
//  Writing Method size for method: ::Mono::Net::Security::__MobileAuthenticatedStream____c__DisplayClass66_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::__MobileAuthenticatedStream____c__DisplayClass66_0::*)()>(
    &::Mono::Net::Security::__MobileAuthenticatedStream____c__DisplayClass66_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2823714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::__MobileAuthenticatedStream____c__DisplayClass66_0*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::__MobileAuthenticatedStream____c__DisplayClass66_0._InnerRead_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Net::Security::__MobileAuthenticatedStream____c__DisplayClass66_0::*)()>(
    &::Mono::Net::Security::__MobileAuthenticatedStream____c__DisplayClass66_0::_InnerRead_b__0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x282371c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::__MobileAuthenticatedStream____c__DisplayClass66_0*>::get(),
                                                 "<InnerRead>b__0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::Mono::Net::Security::MobileAuthenticatedStream*& Mono::Net::Security::__MobileAuthenticatedStream____c__DisplayClass66_0::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Net::Security::MobileAuthenticatedStream*> const&
Mono::Net::Security::__MobileAuthenticatedStream____c__DisplayClass66_0::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Mono::Net::Security::__MobileAuthenticatedStream____c__DisplayClass66_0::__set___4__this(::Mono::Net::Security::MobileAuthenticatedStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Mono::Net::Security::__MobileAuthenticatedStream____c__DisplayClass66_0::__get_len() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___len;
}
constexpr int32_t const& Mono::Net::Security::__MobileAuthenticatedStream____c__DisplayClass66_0::__get_len() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___len;
}
constexpr void Mono::Net::Security::__MobileAuthenticatedStream____c__DisplayClass66_0::__set_len(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___len = value;
}
inline ::Mono::Net::Security::__MobileAuthenticatedStream____c__DisplayClass66_0* Mono::Net::Security::__MobileAuthenticatedStream____c__DisplayClass66_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Mono::Net::Security::__MobileAuthenticatedStream____c__DisplayClass66_0*>());
}
inline void Mono::Net::Security::__MobileAuthenticatedStream____c__DisplayClass66_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::__MobileAuthenticatedStream____c__DisplayClass66_0*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t Mono::Net::Security::__MobileAuthenticatedStream____c__DisplayClass66_0::_InnerRead_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::__MobileAuthenticatedStream____c__DisplayClass66_0*>::get(),
                                               "<InnerRead>b__0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Mono::Net::Security::__MobileAuthenticatedStream____c__DisplayClass66_0::__MobileAuthenticatedStream____c__DisplayClass66_0() {}
//  Writing Method size for method: ::Mono::Net::Security::__MobileAuthenticatedStream___InnerRead_d__66.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::__MobileAuthenticatedStream___InnerRead_d__66::*)()>(
    &::Mono::Net::Security::__MobileAuthenticatedStream___InnerRead_d__66::MoveNext)> {
  constexpr static std::size_t size = 0x444;
  constexpr static std::size_t addrs = 0x2823764;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::__MobileAuthenticatedStream___InnerRead_d__66>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::__MobileAuthenticatedStream___InnerRead_d__66.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::__MobileAuthenticatedStream___InnerRead_d__66::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Mono::Net::Security::__MobileAuthenticatedStream___InnerRead_d__66::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2823ba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::__MobileAuthenticatedStream___InnerRead_d__66>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Mono::Net::Security::__MobileAuthenticatedStream___InnerRead_d__66::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void Mono::Net::Security::__MobileAuthenticatedStream___InnerRead_d__66::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::__MobileAuthenticatedStream___InnerRead_d__66>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Mono::Net::Security::__MobileAuthenticatedStream___InnerRead_d__66::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::__MobileAuthenticatedStream___InnerRead_d__66>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Mono::Net::Security::MobileAuthenticatedStream*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "requestedSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sync", ty: "bool", modifiers: "", def_value: Some("{}") },
// CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Net::Security::__MobileAuthenticatedStream___InnerRead_d__66::__MobileAuthenticatedStream___InnerRead_d__66(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder, ::Mono::Net::Security::MobileAuthenticatedStream* __4__this,
    ::System::Threading::CancellationToken cancellationToken, int32_t requestedSize, bool sync,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->requestedSize = requestedSize;
  this->sync = sync;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Mono::Net::Security::__MobileAuthenticatedStream___InnerRead_d__66::__MobileAuthenticatedStream___InnerRead_d__66() {}
//  Writing Method size for method: ::Mono::Net::Security::__MobileAuthenticatedStream___InnerWrite_d__67.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::__MobileAuthenticatedStream___InnerWrite_d__67::*)()>(
    &::Mono::Net::Security::__MobileAuthenticatedStream___InnerWrite_d__67::MoveNext)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x2823c00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::__MobileAuthenticatedStream___InnerWrite_d__67>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::__MobileAuthenticatedStream___InnerWrite_d__67.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::__MobileAuthenticatedStream___InnerWrite_d__67::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Mono::Net::Security::__MobileAuthenticatedStream___InnerWrite_d__67::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2823e90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::__MobileAuthenticatedStream___InnerWrite_d__67>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Mono::Net::Security::__MobileAuthenticatedStream___InnerWrite_d__67::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void Mono::Net::Security::__MobileAuthenticatedStream___InnerWrite_d__67::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::__MobileAuthenticatedStream___InnerWrite_d__67>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Mono::Net::Security::__MobileAuthenticatedStream___InnerWrite_d__67::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::__MobileAuthenticatedStream___InnerWrite_d__67>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Mono::Net::Security::MobileAuthenticatedStream*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "sync", ty: "bool",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}")
// }]
constexpr ::Mono::Net::Security::__MobileAuthenticatedStream___InnerWrite_d__67::__MobileAuthenticatedStream___InnerWrite_d__67(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Threading::CancellationToken cancellationToken,
    ::Mono::Net::Security::MobileAuthenticatedStream* __4__this, bool sync, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->cancellationToken = cancellationToken;
  this->__4__this = __4__this;
  this->sync = sync;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Mono::Net::Security::__MobileAuthenticatedStream___InnerWrite_d__67::__MobileAuthenticatedStream___InnerWrite_d__67() {}
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MobileAuthenticatedStream::*)(
    ::System::IO::Stream*, bool, ::System::Net::Security::SslStream*, ::Mono::Security::Interface::MonoTlsSettings*, ::Mono::Net::Security::MobileTlsProvider*)>(
    &::Mono::Net::Security::MobileAuthenticatedStream::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x281d6e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Security::SslStream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Interface::MonoTlsSettings*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::MobileTlsProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.get_SslStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Security::SslStream* (::Mono::Net::Security::MobileAuthenticatedStream::*)()>(
    &::Mono::Net::Security::MobileAuthenticatedStream::get_SslStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2820e20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                                               "get_SslStream", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.get_Settings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Interface::MonoTlsSettings* (::Mono::Net::Security::MobileAuthenticatedStream::*)()>(
    &::Mono::Net::Security::MobileAuthenticatedStream::get_Settings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2820e28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                                               "get_Settings", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.get_Provider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Net::Security::MobileTlsProvider* (::Mono::Net::Security::MobileAuthenticatedStream::*)()>(
    &::Mono::Net::Security::MobileAuthenticatedStream::get_Provider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2820e30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                                               "get_Provider", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.get_TargetHost
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Mono::Net::Security::MobileAuthenticatedStream::*)()>(
    &::Mono::Net::Security::MobileAuthenticatedStream::get_TargetHost)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2820e38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                                               "get_TargetHost", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.set_TargetHost
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MobileAuthenticatedStream::*)(::StringW)>(
    &::Mono::Net::Security::MobileAuthenticatedStream::set_TargetHost)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2820e40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), "set_TargetHost",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.CheckThrow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MobileAuthenticatedStream::*)(bool, bool)>(
    &::Mono::Net::Security::MobileAuthenticatedStream::CheckThrow)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2820e48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), "CheckThrow", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.GetSSPIException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)(::System::Exception*)>(
    &::Mono::Net::Security::MobileAuthenticatedStream::GetSSPIException)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x281ef14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), "GetSSPIException",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.GetIOException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)(::System::Exception*, ::StringW)>(
    &::Mono::Net::Security::MobileAuthenticatedStream::GetIOException)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x2820f10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), "GetIOException", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.GetInternalError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)()>(&::Mono::Net::Security::MobileAuthenticatedStream::GetInternalError)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2821094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                                               "GetInternalError", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.GetInvalidNestedCallException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)()>(&::Mono::Net::Security::MobileAuthenticatedStream::GetInvalidNestedCallException)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x28210e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                                               "GetInvalidNestedCallException", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.SetException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::ExceptionServices::ExceptionDispatchInfo* (
    ::Mono::Net::Security::MobileAuthenticatedStream::*)(::System::Exception*)>(&::Mono::Net::Security::MobileAuthenticatedStream::SetException)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x281e9e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), "SetException",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.AuthenticateAsClient
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MobileAuthenticatedStream::*)(
    ::StringW, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Authentication::SslProtocols, bool)>(
    &::Mono::Net::Security::MobileAuthenticatedStream::AuthenticateAsClient)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x2821134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), "AuthenticateAsClient", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Authentication::SslProtocols>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.AuthenticateAsServer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MobileAuthenticatedStream::*)(
    ::System::Security::Cryptography::X509Certificates::X509Certificate*, bool, ::System::Security::Authentication::SslProtocols, bool)>(
    &::Mono::Net::Security::MobileAuthenticatedStream::AuthenticateAsServer)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x282146c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), "AuthenticateAsServer", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Authentication::SslProtocols>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.AuthenticateAsClientAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::Mono::Net::Security::MobileAuthenticatedStream::*)(::StringW, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Authentication::SslProtocols,
                                                         bool)>(&::Mono::Net::Security::MobileAuthenticatedStream::AuthenticateAsClientAsync)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x28216b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), "AuthenticateAsClientAsync", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Authentication::SslProtocols>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.ProcessAuthentication
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::Mono::Net::Security::MobileAuthenticatedStream::*)(bool, ::Mono::Net::Security::MonoSslAuthenticationOptions*, ::System::Threading::CancellationToken)>(
    &::Mono::Net::Security::MobileAuthenticatedStream::ProcessAuthentication)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2821378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), "ProcessAuthentication", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::MonoSslAuthenticationOptions*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.CreateContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Net::Security::MobileTlsContext* (
    ::Mono::Net::Security::MobileAuthenticatedStream::*)(::Mono::Net::Security::MonoSslAuthenticationOptions*)>(&::Mono::Net::Security::MobileAuthenticatedStream::CreateContext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), 45));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::Mono::Net::Security::MobileAuthenticatedStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Mono::Net::Security::MobileAuthenticatedStream::Read)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x28217cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), 35));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MobileAuthenticatedStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::Mono::Net::Security::MobileAuthenticatedStream::Write)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x28219cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), 38));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.ReadAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (
    ::Mono::Net::Security::MobileAuthenticatedStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::System::Threading::CancellationToken)>(
    &::Mono::Net::Security::MobileAuthenticatedStream::ReadAsync)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2821a9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.WriteAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::Mono::Net::Security::MobileAuthenticatedStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::System::Threading::CancellationToken)>(
    &::Mono::Net::Security::MobileAuthenticatedStream::WriteAsync)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2821b38;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.StartOperation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (
    ::Mono::Net::Security::MobileAuthenticatedStream::*)(::Mono::Net::Security::__MobileAuthenticatedStream__OperationType, ::Mono::Net::Security::AsyncProtocolRequest*,
                                                         ::System::Threading::CancellationToken)>(&::Mono::Net::Security::MobileAuthenticatedStream::StartOperation)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x28218b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), "StartOperation", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::__MobileAuthenticatedStream__OperationType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::AsyncProtocolRequest*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.InternalRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Net::Security::MobileAuthenticatedStream::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ByRef<bool>)>(&::Mono::Net::Security::MobileAuthenticatedStream::InternalRead)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x281bd3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), "InternalRead", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.InternalRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<int32_t, bool> (::Mono::Net::Security::MobileAuthenticatedStream::*)(
    ::Mono::Net::Security::AsyncProtocolRequest*, ::Mono::Net::Security::BufferOffsetSize*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::Mono::Net::Security::MobileAuthenticatedStream::InternalRead)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x2821bd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), "InternalRead", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::AsyncProtocolRequest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::BufferOffsetSize*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.InternalWrite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Net::Security::MobileAuthenticatedStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::Mono::Net::Security::MobileAuthenticatedStream::InternalWrite)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x281b854;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), "InternalWrite", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.InternalWrite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Net::Security::MobileAuthenticatedStream::*)(
    ::Mono::Net::Security::AsyncProtocolRequest*, ::Mono::Net::Security::BufferOffsetSize2*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::Mono::Net::Security::MobileAuthenticatedStream::InternalWrite)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2821d54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), "InternalWrite", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::AsyncProtocolRequest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::BufferOffsetSize2*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.InnerRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (
    ::Mono::Net::Security::MobileAuthenticatedStream::*)(bool, int32_t, ::System::Threading::CancellationToken)>(&::Mono::Net::Security::MobileAuthenticatedStream::InnerRead)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x281f4e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), "InnerRead", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.InnerWrite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::Mono::Net::Security::MobileAuthenticatedStream::*)(bool, ::System::Threading::CancellationToken)>(&::Mono::Net::Security::MobileAuthenticatedStream::InnerWrite)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x281f0a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), "InnerWrite", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.ProcessHandshake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Net::Security::AsyncOperationStatus (::Mono::Net::Security::MobileAuthenticatedStream::*)(
    ::Mono::Net::Security::AsyncOperationStatus, bool)>(&::Mono::Net::Security::MobileAuthenticatedStream::ProcessHandshake)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x281f680;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), "ProcessHandshake", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::AsyncOperationStatus>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.ProcessRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<int32_t, bool> (::Mono::Net::Security::MobileAuthenticatedStream::*)(
    ::Mono::Net::Security::BufferOffsetSize*)>(&::Mono::Net::Security::MobileAuthenticatedStream::ProcessRead)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x281fbe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), "ProcessRead", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::BufferOffsetSize*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.ProcessWrite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<int32_t, bool> (::Mono::Net::Security::MobileAuthenticatedStream::*)(
    ::Mono::Net::Security::BufferOffsetSize*)>(&::Mono::Net::Security::MobileAuthenticatedStream::ProcessWrite)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x281fdc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), "ProcessWrite", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::BufferOffsetSize*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.get_IsAuthenticated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Net::Security::MobileAuthenticatedStream::*)()>(
    &::Mono::Net::Security::MobileAuthenticatedStream::get_IsAuthenticated)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2821e50;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), 42));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MobileAuthenticatedStream::*)(bool)>(
    &::Mono::Net::Security::MobileAuthenticatedStream::Dispose)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x2821f38;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.Flush
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MobileAuthenticatedStream::*)()>(
    &::Mono::Net::Security::MobileAuthenticatedStream::Flush)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x282218c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.get_LocalCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate* (
    ::Mono::Net::Security::MobileAuthenticatedStream::*)()>(&::Mono::Net::Security::MobileAuthenticatedStream::get_LocalCertificate)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x28221b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                                               "get_LocalCertificate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.get_InternalLocalCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate* (
    ::Mono::Net::Security::MobileAuthenticatedStream::*)()>(&::Mono::Net::Security::MobileAuthenticatedStream::get_InternalLocalCertificate)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x282228c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                                               "get_InternalLocalCertificate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.Seek
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Mono::Net::Security::MobileAuthenticatedStream::*)(int64_t, ::System::IO::SeekOrigin)>(
    &::Mono::Net::Security::MobileAuthenticatedStream::Seek)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x282238c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.SetLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MobileAuthenticatedStream::*)(int64_t)>(
    &::Mono::Net::Security::MobileAuthenticatedStream::SetLength)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x28223cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.get_CanRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Net::Security::MobileAuthenticatedStream::*)()>(
    &::Mono::Net::Security::MobileAuthenticatedStream::get_CanRead)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x28223f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.get_CanTimeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Net::Security::MobileAuthenticatedStream::*)()>(
    &::Mono::Net::Security::MobileAuthenticatedStream::get_CanTimeout)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2822434;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.get_CanWrite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Net::Security::MobileAuthenticatedStream::*)()>(
    &::Mono::Net::Security::MobileAuthenticatedStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2822454;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.get_CanSeek
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Net::Security::MobileAuthenticatedStream::*)()>(
    &::Mono::Net::Security::MobileAuthenticatedStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28224b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.get_Length
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Mono::Net::Security::MobileAuthenticatedStream::*)()>(
    &::Mono::Net::Security::MobileAuthenticatedStream::get_Length)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x28224c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.get_Position
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Mono::Net::Security::MobileAuthenticatedStream::*)()>(
    &::Mono::Net::Security::MobileAuthenticatedStream::get_Position)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x28224e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.set_Position
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MobileAuthenticatedStream::*)(int64_t)>(
    &::Mono::Net::Security::MobileAuthenticatedStream::set_Position)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2822504;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.get_ReadTimeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Net::Security::MobileAuthenticatedStream::*)()>(
    &::Mono::Net::Security::MobileAuthenticatedStream::get_ReadTimeout)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2822544;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.set_ReadTimeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MobileAuthenticatedStream::*)(int32_t)>(
    &::Mono::Net::Security::MobileAuthenticatedStream::set_ReadTimeout)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2822568;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.get_WriteTimeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Net::Security::MobileAuthenticatedStream::*)()>(
    &::Mono::Net::Security::MobileAuthenticatedStream::get_WriteTimeout)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x282258c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.set_WriteTimeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MobileAuthenticatedStream::*)(int32_t)>(
    &::Mono::Net::Security::MobileAuthenticatedStream::set_WriteTimeout)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x28225b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream._InnerWrite_b__67_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MobileAuthenticatedStream::*)()>(
    &::Mono::Net::Security::MobileAuthenticatedStream::_InnerWrite_b__67_0)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2822620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                                               "<InnerWrite>b__67_0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr Mono::Net::Security::MobileAuthenticatedStream::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::Mono::Net::Security::MobileTlsContext*& Mono::Net::Security::MobileAuthenticatedStream::__get_xobileTlsContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xobileTlsContext;
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Net::Security::MobileTlsContext*> const& Mono::Net::Security::MobileAuthenticatedStream::__get_xobileTlsContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xobileTlsContext;
}
constexpr void Mono::Net::Security::MobileAuthenticatedStream::__set_xobileTlsContext(::Mono::Net::Security::MobileTlsContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___xobileTlsContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*& Mono::Net::Security::MobileAuthenticatedStream::__get_lastException() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastException;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*> const& Mono::Net::Security::MobileAuthenticatedStream::__get_lastException() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastException;
}
constexpr void Mono::Net::Security::MobileAuthenticatedStream::__set_lastException(::System::Runtime::ExceptionServices::ExceptionDispatchInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lastException)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Net::Security::AsyncProtocolRequest*& Mono::Net::Security::MobileAuthenticatedStream::__get_asyncHandshakeRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___asyncHandshakeRequest;
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Net::Security::AsyncProtocolRequest*> const& Mono::Net::Security::MobileAuthenticatedStream::__get_asyncHandshakeRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___asyncHandshakeRequest;
}
constexpr void Mono::Net::Security::MobileAuthenticatedStream::__set_asyncHandshakeRequest(::Mono::Net::Security::AsyncProtocolRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___asyncHandshakeRequest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Net::Security::AsyncProtocolRequest*& Mono::Net::Security::MobileAuthenticatedStream::__get_asyncReadRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___asyncReadRequest;
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Net::Security::AsyncProtocolRequest*> const& Mono::Net::Security::MobileAuthenticatedStream::__get_asyncReadRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___asyncReadRequest;
}
constexpr void Mono::Net::Security::MobileAuthenticatedStream::__set_asyncReadRequest(::Mono::Net::Security::AsyncProtocolRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___asyncReadRequest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Net::Security::AsyncProtocolRequest*& Mono::Net::Security::MobileAuthenticatedStream::__get_asyncWriteRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___asyncWriteRequest;
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Net::Security::AsyncProtocolRequest*> const& Mono::Net::Security::MobileAuthenticatedStream::__get_asyncWriteRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___asyncWriteRequest;
}
constexpr void Mono::Net::Security::MobileAuthenticatedStream::__set_asyncWriteRequest(::Mono::Net::Security::AsyncProtocolRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___asyncWriteRequest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Net::Security::BufferOffsetSize2*& Mono::Net::Security::MobileAuthenticatedStream::__get_readBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readBuffer;
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Net::Security::BufferOffsetSize2*> const& Mono::Net::Security::MobileAuthenticatedStream::__get_readBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readBuffer;
}
constexpr void Mono::Net::Security::MobileAuthenticatedStream::__set_readBuffer(::Mono::Net::Security::BufferOffsetSize2* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___readBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Net::Security::BufferOffsetSize2*& Mono::Net::Security::MobileAuthenticatedStream::__get_writeBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writeBuffer;
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Net::Security::BufferOffsetSize2*> const& Mono::Net::Security::MobileAuthenticatedStream::__get_writeBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writeBuffer;
}
constexpr void Mono::Net::Security::MobileAuthenticatedStream::__set_writeBuffer(::Mono::Net::Security::BufferOffsetSize2* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___writeBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& Mono::Net::Security::MobileAuthenticatedStream::__get_ioLock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ioLock;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& Mono::Net::Security::MobileAuthenticatedStream::__get_ioLock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ioLock;
}
constexpr void Mono::Net::Security::MobileAuthenticatedStream::__set_ioLock(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ioLock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Mono::Net::Security::MobileAuthenticatedStream::__get_closeRequested() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___closeRequested;
}
constexpr int32_t const& Mono::Net::Security::MobileAuthenticatedStream::__get_closeRequested() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___closeRequested;
}
constexpr void Mono::Net::Security::MobileAuthenticatedStream::__set_closeRequested(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___closeRequested = value;
}
constexpr bool& Mono::Net::Security::MobileAuthenticatedStream::__get_shutdown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shutdown;
}
constexpr bool const& Mono::Net::Security::MobileAuthenticatedStream::__get_shutdown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shutdown;
}
constexpr void Mono::Net::Security::MobileAuthenticatedStream::__set_shutdown(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shutdown = value;
}
constexpr ::Mono::Net::Security::__MobileAuthenticatedStream__Operation& Mono::Net::Security::MobileAuthenticatedStream::__get_operation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___operation;
}
constexpr ::Mono::Net::Security::__MobileAuthenticatedStream__Operation const& Mono::Net::Security::MobileAuthenticatedStream::__get_operation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___operation;
}
constexpr void Mono::Net::Security::MobileAuthenticatedStream::__set_operation(::Mono::Net::Security::__MobileAuthenticatedStream__Operation value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___operation = value;
}
constexpr ::System::Net::Security::SslStream*& Mono::Net::Security::MobileAuthenticatedStream::__get__SslStream_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SslStream_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Security::SslStream*> const& Mono::Net::Security::MobileAuthenticatedStream::__get__SslStream_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SslStream_k__BackingField;
}
constexpr void Mono::Net::Security::MobileAuthenticatedStream::__set__SslStream_k__BackingField(::System::Net::Security::SslStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____SslStream_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Security::Interface::MonoTlsSettings*& Mono::Net::Security::MobileAuthenticatedStream::__get__Settings_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Settings_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Security::Interface::MonoTlsSettings*> const& Mono::Net::Security::MobileAuthenticatedStream::__get__Settings_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Settings_k__BackingField;
}
constexpr void Mono::Net::Security::MobileAuthenticatedStream::__set__Settings_k__BackingField(::Mono::Security::Interface::MonoTlsSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Settings_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Net::Security::MobileTlsProvider*& Mono::Net::Security::MobileAuthenticatedStream::__get__Provider_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Provider_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Net::Security::MobileTlsProvider*> const& Mono::Net::Security::MobileAuthenticatedStream::__get__Provider_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Provider_k__BackingField;
}
constexpr void Mono::Net::Security::MobileAuthenticatedStream::__set__Provider_k__BackingField(::Mono::Net::Security::MobileTlsProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Provider_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Mono::Net::Security::MobileAuthenticatedStream::__get__TargetHost_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TargetHost_k__BackingField;
}
constexpr ::StringW const& Mono::Net::Security::MobileAuthenticatedStream::__get__TargetHost_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TargetHost_k__BackingField;
}
constexpr void Mono::Net::Security::MobileAuthenticatedStream::__set__TargetHost_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____TargetHost_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Mono::Net::Security::MobileAuthenticatedStream::__get__cordl_ID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_ID;
}
constexpr int32_t const& Mono::Net::Security::MobileAuthenticatedStream::__get__cordl_ID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_ID;
}
constexpr void Mono::Net::Security::MobileAuthenticatedStream::__set__cordl_ID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cordl_ID = value;
}
inline void Mono::Net::Security::MobileAuthenticatedStream::setStaticF_uniqueNameInteger(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "uniqueNameInteger", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t Mono::Net::Security::MobileAuthenticatedStream::getStaticF_uniqueNameInteger() {
  return ::cordl_internals::getStaticField<int32_t, "uniqueNameInteger", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get>();
}
inline void Mono::Net::Security::MobileAuthenticatedStream::setStaticF_nextId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "nextId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get>(std::forward<int32_t>(value));
}
inline int32_t Mono::Net::Security::MobileAuthenticatedStream::getStaticF_nextId() {
  return ::cordl_internals::getStaticField<int32_t, "nextId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get>();
}
inline ::Mono::Net::Security::MobileAuthenticatedStream* Mono::Net::Security::MobileAuthenticatedStream::New_ctor(::System::IO::Stream* innerStream, bool leaveInnerStreamOpen,
                                                                                                                  ::System::Net::Security::SslStream* owner,
                                                                                                                  ::Mono::Security::Interface::MonoTlsSettings* settings,
                                                                                                                  ::Mono::Net::Security::MobileTlsProvider* provider) {
  return THROW_UNLESS(::il2cpp_utils::New<::Mono::Net::Security::MobileAuthenticatedStream*>(innerStream, leaveInnerStreamOpen, owner, settings, provider));
}
inline void Mono::Net::Security::MobileAuthenticatedStream::_ctor(::System::IO::Stream* innerStream, bool leaveInnerStreamOpen, ::System::Net::Security::SslStream* owner,
                                                                  ::Mono::Security::Interface::MonoTlsSettings* settings, ::Mono::Net::Security::MobileTlsProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Security::SslStream*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Interface::MonoTlsSettings*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::MobileTlsProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, innerStream, leaveInnerStreamOpen, owner, settings, provider);
}
inline ::System::Net::Security::SslStream* Mono::Net::Security::MobileAuthenticatedStream::get_SslStream() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                                             "get_SslStream", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Security::SslStream*, false>(this, ___internal_method);
}
inline ::Mono::Security::Interface::MonoTlsSettings* Mono::Net::Security::MobileAuthenticatedStream::get_Settings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                                             "get_Settings", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::Interface::MonoTlsSettings*, false>(this, ___internal_method);
}
inline ::Mono::Net::Security::MobileTlsProvider* Mono::Net::Security::MobileAuthenticatedStream::get_Provider() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                                             "get_Provider", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Mono::Net::Security::MobileTlsProvider*, false>(this, ___internal_method);
}
inline ::StringW Mono::Net::Security::MobileAuthenticatedStream::get_TargetHost() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                                             "get_TargetHost", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Mono::Net::Security::MobileAuthenticatedStream::set_TargetHost(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), "set_TargetHost",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
/// @param shutdownCheck: bool (default: false)
inline void Mono::Net::Security::MobileAuthenticatedStream::CheckThrow(bool authSuccessCheck, bool shutdownCheck) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), "CheckThrow", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, authSuccessCheck, shutdownCheck);
}
inline ::System::Exception* Mono::Net::Security::MobileAuthenticatedStream::GetSSPIException(::System::Exception* e) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), "GetSSPIException",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(nullptr, ___internal_method, e);
}
inline ::System::Exception* Mono::Net::Security::MobileAuthenticatedStream::GetIOException(::System::Exception* e, ::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), "GetIOException", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(nullptr, ___internal_method, e, message);
}
inline ::System::Exception* Mono::Net::Security::MobileAuthenticatedStream::GetInternalError() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                                             "GetInternalError", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(nullptr, ___internal_method);
}
inline ::System::Exception* Mono::Net::Security::MobileAuthenticatedStream::GetInvalidNestedCallException() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                                             "GetInvalidNestedCallException", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(nullptr, ___internal_method);
}
inline ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* Mono::Net::Security::MobileAuthenticatedStream::SetException(::System::Exception* e) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), "SetException",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*, false>(this, ___internal_method, e);
}
inline void Mono::Net::Security::MobileAuthenticatedStream::AuthenticateAsClient(::StringW targetHost,
                                                                                 ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates,
                                                                                 ::System::Security::Authentication::SslProtocols enabledSslProtocols, bool checkCertificateRevocation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), "AuthenticateAsClient", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Authentication::SslProtocols>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, targetHost, clientCertificates, enabledSslProtocols, checkCertificateRevocation);
}
inline void Mono::Net::Security::MobileAuthenticatedStream::AuthenticateAsServer(::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, bool clientCertificateRequired,
                                                                                 ::System::Security::Authentication::SslProtocols enabledSslProtocols, bool checkCertificateRevocation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), "AuthenticateAsServer", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Authentication::SslProtocols>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serverCertificate, clientCertificateRequired, enabledSslProtocols, checkCertificateRevocation);
}
inline ::System::Threading::Tasks::Task*
Mono::Net::Security::MobileAuthenticatedStream::AuthenticateAsClientAsync(::StringW targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates,
                                                                          ::System::Security::Authentication::SslProtocols enabledSslProtocols, bool checkCertificateRevocation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), "AuthenticateAsClientAsync", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Authentication::SslProtocols>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, targetHost, clientCertificates, enabledSslProtocols, checkCertificateRevocation);
}
inline ::System::Threading::Tasks::Task* Mono::Net::Security::MobileAuthenticatedStream::ProcessAuthentication(bool runSynchronously, ::Mono::Net::Security::MonoSslAuthenticationOptions* options,
                                                                                                               ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), "ProcessAuthentication", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::MonoSslAuthenticationOptions*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, runSynchronously, options, cancellationToken);
}
inline ::Mono::Net::Security::MobileTlsContext* Mono::Net::Security::MobileAuthenticatedStream::CreateContext(::Mono::Net::Security::MonoSslAuthenticationOptions* options) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), "CreateContext", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::MonoSslAuthenticationOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Net::Security::MobileTlsContext*, false>(this, ___internal_method, options);
}
inline int32_t Mono::Net::Security::MobileAuthenticatedStream::Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), "Read", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, offset, count);
}
inline void Mono::Net::Security::MobileAuthenticatedStream::Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), "Write", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, offset, count);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* Mono::Net::Security::MobileAuthenticatedStream::ReadAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count,
                                                                                                              ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), "ReadAsync", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*, false>(this, ___internal_method, buffer, offset, count, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Mono::Net::Security::MobileAuthenticatedStream::WriteAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count,
                                                                                                    ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), "WriteAsync", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, buffer, offset, count, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* Mono::Net::Security::MobileAuthenticatedStream::StartOperation(::Mono::Net::Security::__MobileAuthenticatedStream__OperationType type,
                                                                                                                   ::Mono::Net::Security::AsyncProtocolRequest* asyncRequest,
                                                                                                                   ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), "StartOperation", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::__MobileAuthenticatedStream__OperationType>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::AsyncProtocolRequest*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*, false>(this, ___internal_method, type, asyncRequest, cancellationToken);
}
inline int32_t Mono::Net::Security::MobileAuthenticatedStream::InternalRead(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ByRef<bool> outWantMore) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), "InternalRead", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, offset, size, outWantMore);
}
inline ::System::ValueTuple_2<int32_t, bool> Mono::Net::Security::MobileAuthenticatedStream::InternalRead(::Mono::Net::Security::AsyncProtocolRequest* asyncRequest,
                                                                                                          ::Mono::Net::Security::BufferOffsetSize* internalBuffer,
                                                                                                          ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), "InternalRead", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::AsyncProtocolRequest*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::BufferOffsetSize*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<int32_t, bool>, false>(this, ___internal_method, asyncRequest, internalBuffer, buffer, offset, size);
}
inline bool Mono::Net::Security::MobileAuthenticatedStream::InternalWrite(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), "InternalWrite", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, buffer, offset, size);
}
inline bool Mono::Net::Security::MobileAuthenticatedStream::InternalWrite(::Mono::Net::Security::AsyncProtocolRequest* asyncRequest, ::Mono::Net::Security::BufferOffsetSize2* internalBuffer,
                                                                          ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), "InternalWrite", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::AsyncProtocolRequest*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::BufferOffsetSize2*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, asyncRequest, internalBuffer, buffer, offset, size);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* Mono::Net::Security::MobileAuthenticatedStream::InnerRead(bool sync, int32_t requestedSize,
                                                                                                              ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), "InnerRead", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*, false>(this, ___internal_method, sync, requestedSize, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Mono::Net::Security::MobileAuthenticatedStream::InnerWrite(bool sync, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), "InnerWrite", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, sync, cancellationToken);
}
inline ::Mono::Net::Security::AsyncOperationStatus Mono::Net::Security::MobileAuthenticatedStream::ProcessHandshake(::Mono::Net::Security::AsyncOperationStatus status, bool renegotiate) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), "ProcessHandshake", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::AsyncOperationStatus>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Net::Security::AsyncOperationStatus, false>(this, ___internal_method, status, renegotiate);
}
inline ::System::ValueTuple_2<int32_t, bool> Mono::Net::Security::MobileAuthenticatedStream::ProcessRead(::Mono::Net::Security::BufferOffsetSize* userBuffer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), "ProcessRead", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::BufferOffsetSize*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<int32_t, bool>, false>(this, ___internal_method, userBuffer);
}
inline ::System::ValueTuple_2<int32_t, bool> Mono::Net::Security::MobileAuthenticatedStream::ProcessWrite(::Mono::Net::Security::BufferOffsetSize* userBuffer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), "ProcessWrite", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::BufferOffsetSize*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<int32_t, bool>, false>(this, ___internal_method, userBuffer);
}
inline bool Mono::Net::Security::MobileAuthenticatedStream::get_IsAuthenticated() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                                             "get_IsAuthenticated", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Mono::Net::Security::MobileAuthenticatedStream::Dispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), "Dispose", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void Mono::Net::Security::MobileAuthenticatedStream::Flush() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), "Flush",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate* Mono::Net::Security::MobileAuthenticatedStream::get_LocalCertificate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                                             "get_LocalCertificate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate*, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate* Mono::Net::Security::MobileAuthenticatedStream::get_InternalLocalCertificate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                                             "get_InternalLocalCertificate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate*, false>(this, ___internal_method);
}
inline int64_t Mono::Net::Security::MobileAuthenticatedStream::Seek(int64_t offset, ::System::IO::SeekOrigin origin) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), "Seek", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::SeekOrigin>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method, offset, origin);
}
inline void Mono::Net::Security::MobileAuthenticatedStream::SetLength(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), "SetLength",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Mono::Net::Security::MobileAuthenticatedStream::get_CanRead() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                                             "get_CanRead", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Mono::Net::Security::MobileAuthenticatedStream::get_CanTimeout() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                                             "get_CanTimeout", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Mono::Net::Security::MobileAuthenticatedStream::get_CanWrite() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                                             "get_CanWrite", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Mono::Net::Security::MobileAuthenticatedStream::get_CanSeek() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                                             "get_CanSeek", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int64_t Mono::Net::Security::MobileAuthenticatedStream::get_Length() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                                             "get_Length", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline int64_t Mono::Net::Security::MobileAuthenticatedStream::get_Position() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                                             "get_Position", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void Mono::Net::Security::MobileAuthenticatedStream::set_Position(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), "set_Position",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t Mono::Net::Security::MobileAuthenticatedStream::get_ReadTimeout() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                                             "get_ReadTimeout", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Mono::Net::Security::MobileAuthenticatedStream::set_ReadTimeout(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), "set_ReadTimeout",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t Mono::Net::Security::MobileAuthenticatedStream::get_WriteTimeout() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                                             "get_WriteTimeout", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Mono::Net::Security::MobileAuthenticatedStream::set_WriteTimeout(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), "set_WriteTimeout",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Mono::Net::Security::MobileAuthenticatedStream::_InnerWrite_b__67_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                                             "<InnerWrite>b__67_0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Mono::Net::Security::MobileAuthenticatedStream::MobileAuthenticatedStream() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
