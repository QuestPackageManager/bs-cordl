#pragma once
// IWYU pragma private; include "Mono/Net/Security/MobileAuthenticatedStream.hpp"
#include "System/Net/Security/zzzz__AuthenticatedStream_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Net/Security/zzzz__MobileAuthenticatedStream_def.hpp"
#include "Mono/Net/Security/zzzz__AsyncOperationStatus_def.hpp"
#include "Mono/Net/Security/zzzz__AsyncProtocolRequest_def.hpp"
#include "Mono/Net/Security/zzzz__AsyncProtocolResult_def.hpp"
#include "Mono/Net/Security/zzzz__BufferOffsetSize2_def.hpp"
#include "Mono/Net/Security/zzzz__BufferOffsetSize_def.hpp"
#include "Mono/Net/Security/zzzz__MobileAuthenticatedStream_def.hpp"
#include "Mono/Net/Security/zzzz__MobileTlsContext_def.hpp"
#include "Mono/Net/Security/zzzz__MobileTlsProvider_def.hpp"
#include "Mono/Net/Security/zzzz__MonoSslAuthenticationOptions_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoTlsSettings_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/Security/zzzz__SslStream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/ExceptionServices/zzzz__ExceptionDispatchInfo_def.hpp"
#include "System/Security/Authentication/zzzz__SslProtocols_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Net::Security::MobileAuthenticatedStream_Operation::MobileAuthenticatedStream_Operation(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mono::Net::Security::MobileAuthenticatedStream_Operation::MobileAuthenticatedStream_Operation() {}
constexpr ::Mono::Net::Security::MobileAuthenticatedStream_Operation Mono::Net::Security::MobileAuthenticatedStream_Operation::None{ static_cast<int32_t>(0x0) };
constexpr ::Mono::Net::Security::MobileAuthenticatedStream_Operation Mono::Net::Security::MobileAuthenticatedStream_Operation::Handshake{ static_cast<int32_t>(0x1) };
constexpr ::Mono::Net::Security::MobileAuthenticatedStream_Operation Mono::Net::Security::MobileAuthenticatedStream_Operation::Authenticated{ static_cast<int32_t>(0x2) };
constexpr ::Mono::Net::Security::MobileAuthenticatedStream_Operation Mono::Net::Security::MobileAuthenticatedStream_Operation::Renegotiate{ static_cast<int32_t>(0x3) };
constexpr ::Mono::Net::Security::MobileAuthenticatedStream_Operation Mono::Net::Security::MobileAuthenticatedStream_Operation::Read{ static_cast<int32_t>(0x4) };
constexpr ::Mono::Net::Security::MobileAuthenticatedStream_Operation Mono::Net::Security::MobileAuthenticatedStream_Operation::Write{ static_cast<int32_t>(0x5) };
constexpr ::Mono::Net::Security::MobileAuthenticatedStream_Operation Mono::Net::Security::MobileAuthenticatedStream_Operation::Close{ static_cast<int32_t>(0x6) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Net::Security::MobileAuthenticatedStream_OperationType::MobileAuthenticatedStream_OperationType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mono::Net::Security::MobileAuthenticatedStream_OperationType::MobileAuthenticatedStream_OperationType() {}
constexpr ::Mono::Net::Security::MobileAuthenticatedStream_OperationType Mono::Net::Security::MobileAuthenticatedStream_OperationType::Read{ static_cast<int32_t>(0x0) };
constexpr ::Mono::Net::Security::MobileAuthenticatedStream_OperationType Mono::Net::Security::MobileAuthenticatedStream_OperationType::Write{ static_cast<int32_t>(0x1) };
constexpr ::Mono::Net::Security::MobileAuthenticatedStream_OperationType Mono::Net::Security::MobileAuthenticatedStream_OperationType::Renegotiate{ static_cast<int32_t>(0x2) };
constexpr ::Mono::Net::Security::MobileAuthenticatedStream_OperationType Mono::Net::Security::MobileAuthenticatedStream_OperationType::Shutdown{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream__ProcessAuthentication_d__48.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::MobileAuthenticatedStream__ProcessAuthentication_d__48::*)()>(
    &::Mono::Net::Security::MobileAuthenticatedStream__ProcessAuthentication_d__48::MoveNext)> {
  constexpr static std::size_t size = 0x9b4;
  constexpr static std::size_t addrs = 0x5fd581c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream__ProcessAuthentication_d__48>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream__ProcessAuthentication_d__48.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::MobileAuthenticatedStream__ProcessAuthentication_d__48::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Mono::Net::Security::MobileAuthenticatedStream__ProcessAuthentication_d__48::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5fd61d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream__ProcessAuthentication_d__48>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Mono::Net::Security::MobileAuthenticatedStream__ProcessAuthentication_d__48::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream__ProcessAuthentication_d__48>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Mono::Net::Security::MobileAuthenticatedStream__ProcessAuthentication_d__48::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream__ProcessAuthentication_d__48>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Mono::Net::Security::MobileAuthenticatedStream__ProcessAuthentication_d__48::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Mono::Net::Security::MobileAuthenticatedStream__ProcessAuthentication_d__48::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "options", ty: "::Mono::Net::Security::MonoSslAuthenticationOptions*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Mono::Net::Security::MobileAuthenticatedStream*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "runSynchronously", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") },
// CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Mono::Net::Security::AsyncProtocolResult*>", modifiers: "", def_value:
// Some("{}") }]
constexpr ::Mono::Net::Security::MobileAuthenticatedStream__ProcessAuthentication_d__48::MobileAuthenticatedStream__ProcessAuthentication_d__48(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Mono::Net::Security::MonoSslAuthenticationOptions* options,
    ::Mono::Net::Security::MobileAuthenticatedStream* __4__this, bool runSynchronously, ::System::Threading::CancellationToken cancellationToken,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Mono::Net::Security::AsyncProtocolResult*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->options = options;
  this->__4__this = __4__this;
  this->runSynchronously = runSynchronously;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Mono::Net::Security::MobileAuthenticatedStream__ProcessAuthentication_d__48::MobileAuthenticatedStream__ProcessAuthentication_d__48() {}
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream__StartOperation_d__57.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::MobileAuthenticatedStream__StartOperation_d__57::*)()>(
    &::Mono::Net::Security::MobileAuthenticatedStream__StartOperation_d__57::MoveNext)> {
  constexpr static std::size_t size = 0x7ec;
  constexpr static std::size_t addrs = 0x5fd623c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream__StartOperation_d__57>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream__StartOperation_d__57.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::MobileAuthenticatedStream__StartOperation_d__57::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Mono::Net::Security::MobileAuthenticatedStream__StartOperation_d__57::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5fd6a28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream__StartOperation_d__57>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Mono::Net::Security::MobileAuthenticatedStream__StartOperation_d__57::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream__StartOperation_d__57>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Mono::Net::Security::MobileAuthenticatedStream__StartOperation_d__57::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream__StartOperation_d__57>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Mono::Net::Security::MobileAuthenticatedStream__StartOperation_d__57::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Mono::Net::Security::MobileAuthenticatedStream__StartOperation_d__57::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Mono::Net::Security::MobileAuthenticatedStream*", modifiers: "", def_value: Some("{}") }, CppParam { name: "type", ty: "::Mono::Net::Security::MobileAuthenticatedStream_OperationType",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "asyncRequest", ty: "::Mono::Net::Security::AsyncProtocolRequest*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Mono::Net::Security::AsyncProtocolResult*>", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Net::Security::MobileAuthenticatedStream__StartOperation_d__57::MobileAuthenticatedStream__StartOperation_d__57(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder, ::Mono::Net::Security::MobileAuthenticatedStream* __4__this,
    ::Mono::Net::Security::MobileAuthenticatedStream_OperationType type, ::Mono::Net::Security::AsyncProtocolRequest* asyncRequest, ::System::Threading::CancellationToken cancellationToken,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Mono::Net::Security::AsyncProtocolResult*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->type = type;
  this->asyncRequest = asyncRequest;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Mono::Net::Security::MobileAuthenticatedStream__StartOperation_d__57::MobileAuthenticatedStream__StartOperation_d__57() {}
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream___c__DisplayClass66_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::MobileAuthenticatedStream___c__DisplayClass66_0::*)()>(
    &::Mono::Net::Security::MobileAuthenticatedStream___c__DisplayClass66_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fd6aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream___c__DisplayClass66_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream___c__DisplayClass66_0._InnerRead_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Net::Security::MobileAuthenticatedStream___c__DisplayClass66_0::*)()>(
    &::Mono::Net::Security::MobileAuthenticatedStream___c__DisplayClass66_0::_InnerRead_b__0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5fd6aac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream___c__DisplayClass66_0*>(), { "<InnerRead>b__0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Mono::Net::Security::MobileAuthenticatedStream*& Mono::Net::Security::MobileAuthenticatedStream___c__DisplayClass66_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::Mono::Net::Security::MobileAuthenticatedStream* const& Mono::Net::Security::MobileAuthenticatedStream___c__DisplayClass66_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Mono::Net::Security::MobileAuthenticatedStream___c__DisplayClass66_0::__cordl_internal_set___4__this(::Mono::Net::Security::MobileAuthenticatedStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr int32_t& Mono::Net::Security::MobileAuthenticatedStream___c__DisplayClass66_0::__cordl_internal_get_len() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___len;
}
constexpr int32_t const& Mono::Net::Security::MobileAuthenticatedStream___c__DisplayClass66_0::__cordl_internal_get_len() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___len;
}
constexpr void Mono::Net::Security::MobileAuthenticatedStream___c__DisplayClass66_0::__cordl_internal_set_len(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___len = value;
}
inline void Mono::Net::Security::MobileAuthenticatedStream___c__DisplayClass66_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream___c__DisplayClass66_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Mono::Net::Security::MobileAuthenticatedStream___c__DisplayClass66_0::_InnerRead_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream___c__DisplayClass66_0*>(), { "<InnerRead>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Mono::Net::Security::MobileAuthenticatedStream___c__DisplayClass66_0* Mono::Net::Security::MobileAuthenticatedStream___c__DisplayClass66_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Net::Security::MobileAuthenticatedStream___c__DisplayClass66_0*>());
}
// Ctor Parameters []
constexpr ::Mono::Net::Security::MobileAuthenticatedStream___c__DisplayClass66_0::MobileAuthenticatedStream___c__DisplayClass66_0() {}
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream__InnerRead_d__66.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::MobileAuthenticatedStream__InnerRead_d__66::*)()>(
    &::Mono::Net::Security::MobileAuthenticatedStream__InnerRead_d__66::MoveNext)> {
  constexpr static std::size_t size = 0x538;
  constexpr static std::size_t addrs = 0x5fd6af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream__InnerRead_d__66>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream__InnerRead_d__66.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::MobileAuthenticatedStream__InnerRead_d__66::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Mono::Net::Security::MobileAuthenticatedStream__InnerRead_d__66::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5fd702c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream__InnerRead_d__66>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Mono::Net::Security::MobileAuthenticatedStream__InnerRead_d__66::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream__InnerRead_d__66>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Mono::Net::Security::MobileAuthenticatedStream__InnerRead_d__66::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream__InnerRead_d__66>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Mono::Net::Security::MobileAuthenticatedStream__InnerRead_d__66::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Mono::Net::Security::MobileAuthenticatedStream__InnerRead_d__66::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Mono::Net::Security::MobileAuthenticatedStream*", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "requestedSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sync", ty: "bool", modifiers: "", def_value: Some("{}") },
// CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Net::Security::MobileAuthenticatedStream__InnerRead_d__66::MobileAuthenticatedStream__InnerRead_d__66(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder, ::Mono::Net::Security::MobileAuthenticatedStream* __4__this,
    ::System::Threading::CancellationToken cancellationToken, int32_t requestedSize, bool sync,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->requestedSize = requestedSize;
  this->sync = sync;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Mono::Net::Security::MobileAuthenticatedStream__InnerRead_d__66::MobileAuthenticatedStream__InnerRead_d__66() {}
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream__InnerWrite_d__67.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::MobileAuthenticatedStream__InnerWrite_d__67::*)()>(
    &::Mono::Net::Security::MobileAuthenticatedStream__InnerWrite_d__67::MoveNext)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x5fd70ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream__InnerWrite_d__67>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream__InnerWrite_d__67.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::MobileAuthenticatedStream__InnerWrite_d__67::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Mono::Net::Security::MobileAuthenticatedStream__InnerWrite_d__67::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5fd73f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream__InnerWrite_d__67>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Mono::Net::Security::MobileAuthenticatedStream__InnerWrite_d__67::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream__InnerWrite_d__67>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Mono::Net::Security::MobileAuthenticatedStream__InnerWrite_d__67::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream__InnerWrite_d__67>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Mono::Net::Security::MobileAuthenticatedStream__InnerWrite_d__67::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Mono::Net::Security::MobileAuthenticatedStream__InnerWrite_d__67::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Mono::Net::Security::MobileAuthenticatedStream*", modifiers: "", def_value: Some("{}") }, CppParam { name: "sync", ty: "bool",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Net::Security::MobileAuthenticatedStream__InnerWrite_d__67::MobileAuthenticatedStream__InnerWrite_d__67(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Threading::CancellationToken cancellationToken,
    ::Mono::Net::Security::MobileAuthenticatedStream* __4__this, bool sync, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->cancellationToken = cancellationToken;
  this->__4__this = __4__this;
  this->sync = sync;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Mono::Net::Security::MobileAuthenticatedStream__InnerWrite_d__67::MobileAuthenticatedStream__InnerWrite_d__67() {}
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::MobileAuthenticatedStream::*)(
    ::System::IO::Stream*, bool, ::System::Net::Security::SslStream*, ::Mono::Security::Interface::MonoTlsSettings*, ::Mono::Net::Security::MobileTlsProvider*)>(
    &::Mono::Net::Security::MobileAuthenticatedStream::_ctor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5fd077c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Net::Security::SslStream*>(),
                                                                 ::i2c::type_of<::Mono::Security::Interface::MonoTlsSettings*>(), ::i2c::type_of<::Mono::Net::Security::MobileTlsProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.get_SslStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Security::SslStream* (::Mono::Net::Security::MobileAuthenticatedStream::*)()>(
    &::Mono::Net::Security::MobileAuthenticatedStream::get_SslStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd4080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), { "get_SslStream", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.get_Settings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::Interface::MonoTlsSettings* (::Mono::Net::Security::MobileAuthenticatedStream::*)()>(
    &::Mono::Net::Security::MobileAuthenticatedStream::get_Settings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd4088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), { "get_Settings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.get_Provider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Net::Security::MobileTlsProvider* (::Mono::Net::Security::MobileAuthenticatedStream::*)()>(
    &::Mono::Net::Security::MobileAuthenticatedStream::get_Provider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd4090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), { "get_Provider", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.get_TargetHost
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Net::Security::MobileAuthenticatedStream::*)()>(&::Mono::Net::Security::MobileAuthenticatedStream::get_TargetHost)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd4098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), { "get_TargetHost", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.set_TargetHost
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::MobileAuthenticatedStream::*)(::StringW)>(&::Mono::Net::Security::MobileAuthenticatedStream::set_TargetHost)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd40a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), { "set_TargetHost", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.CheckThrow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::MobileAuthenticatedStream::*)(bool, bool)>(&::Mono::Net::Security::MobileAuthenticatedStream::CheckThrow)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5fd40a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), { "CheckThrow", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.GetSSPIException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::System::Exception*)>(&::Mono::Net::Security::MobileAuthenticatedStream::GetSSPIException)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5fd2054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), { "GetSSPIException", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.GetIOException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::System::Exception*, ::StringW)>(&::Mono::Net::Security::MobileAuthenticatedStream::GetIOException)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5fd4164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(),
                                                                                           { "GetIOException", {}, { ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.GetInternalError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::Mono::Net::Security::MobileAuthenticatedStream::GetInternalError)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5fd430c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), { "GetInternalError", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.GetInvalidNestedCallException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::Mono::Net::Security::MobileAuthenticatedStream::GetInvalidNestedCallException)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5fd4358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), { "GetInvalidNestedCallException", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.SetException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::ExceptionServices::ExceptionDispatchInfo* (::Mono::Net::Security::MobileAuthenticatedStream::*)(::System::Exception*)>(
    &::Mono::Net::Security::MobileAuthenticatedStream::SetException)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5fd19d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), { "SetException", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.AuthenticateAsClient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::MobileAuthenticatedStream::*)(
    ::StringW, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Authentication::SslProtocols, bool)>(
    &::Mono::Net::Security::MobileAuthenticatedStream::AuthenticateAsClient)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5fd43a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(),
                                                             { "AuthenticateAsClient",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>(),
                                                                 ::i2c::type_of<::System::Security::Authentication::SslProtocols>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.AuthenticateAsServer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::MobileAuthenticatedStream::*)(::System::Security::Cryptography::X509Certificates::X509Certificate*, bool,
                                                                                                                  ::System::Security::Authentication::SslProtocols, bool)>(
    &::Mono::Net::Security::MobileAuthenticatedStream::AuthenticateAsServer)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5fd46bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(),
                                                             { "AuthenticateAsServer",
                                                               {},
                                                               { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<::System::Security::Authentication::SslProtocols>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.AuthenticateAsClientAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Mono::Net::Security::MobileAuthenticatedStream::*)(::StringW, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Authentication::SslProtocols,
                                                         bool)>(&::Mono::Net::Security::MobileAuthenticatedStream::AuthenticateAsClientAsync)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5fd48f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(),
                                                             { "AuthenticateAsClientAsync",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>(),
                                                                 ::i2c::type_of<::System::Security::Authentication::SslProtocols>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.ProcessAuthentication
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Mono::Net::Security::MobileAuthenticatedStream::*)(bool, ::Mono::Net::Security::MonoSslAuthenticationOptions*, ::System::Threading::CancellationToken)>(
    &::Mono::Net::Security::MobileAuthenticatedStream::ProcessAuthentication)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5fd45dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(),
                            { "ProcessAuthentication",
                              {},
                              { ::i2c::type_of<bool>(), ::i2c::type_of<::Mono::Net::Security::MonoSslAuthenticationOptions*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.CreateContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Net::Security::MobileTlsContext* (
    ::Mono::Net::Security::MobileAuthenticatedStream::*)(::Mono::Net::Security::MonoSslAuthenticationOptions*)>(&::Mono::Net::Security::MobileAuthenticatedStream::CreateContext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), { ::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Net::Security::MobileAuthenticatedStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Mono::Net::Security::MobileAuthenticatedStream::Read)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5fd4a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), { ::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::MobileAuthenticatedStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Mono::Net::Security::MobileAuthenticatedStream::Write)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5fd4c2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), { ::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.ReadAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (
    ::Mono::Net::Security::MobileAuthenticatedStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::Mono::Net::Security::MobileAuthenticatedStream::ReadAsync)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5fd4cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), { ::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.WriteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::Mono::Net::Security::MobileAuthenticatedStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::Mono::Net::Security::MobileAuthenticatedStream::WriteAsync)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5fd4d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), { ::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.StartOperation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (
    ::Mono::Net::Security::MobileAuthenticatedStream::*)(::Mono::Net::Security::MobileAuthenticatedStream_OperationType, ::Mono::Net::Security::AsyncProtocolRequest*,
                                                         ::System::Threading::CancellationToken)>(&::Mono::Net::Security::MobileAuthenticatedStream::StartOperation)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5fd4b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(),
                                                             { "StartOperation",
                                                               {},
                                                               { ::i2c::type_of<::Mono::Net::Security::MobileAuthenticatedStream_OperationType>(),
                                                                 ::i2c::type_of<::Mono::Net::Security::AsyncProtocolRequest*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.InternalRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Net::Security::MobileAuthenticatedStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::by_ref<bool>)>(
    &::Mono::Net::Security::MobileAuthenticatedStream::InternalRead)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5fcee00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(),
                                         { "InternalRead", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.InternalRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<int32_t, bool> (::Mono::Net::Security::MobileAuthenticatedStream::*)(
    ::Mono::Net::Security::AsyncProtocolRequest*, ::Mono::Net::Security::BufferOffsetSize*, ::ArrayW<uint8_t>, int32_t, int32_t)>(&::Mono::Net::Security::MobileAuthenticatedStream::InternalRead)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5fd4e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(),
                                                             { "InternalRead",
                                                               {},
                                                               { ::i2c::type_of<::Mono::Net::Security::AsyncProtocolRequest*>(), ::i2c::type_of<::Mono::Net::Security::BufferOffsetSize*>(),
                                                                 ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.InternalWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Net::Security::MobileAuthenticatedStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Mono::Net::Security::MobileAuthenticatedStream::InternalWrite)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5fce980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(),
                                                             { "InternalWrite", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.InternalWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Net::Security::MobileAuthenticatedStream::*)(
    ::Mono::Net::Security::AsyncProtocolRequest*, ::Mono::Net::Security::BufferOffsetSize2*, ::ArrayW<uint8_t>, int32_t, int32_t)>(&::Mono::Net::Security::MobileAuthenticatedStream::InternalWrite)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5fd4f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(),
                                                             { "InternalWrite",
                                                               {},
                                                               { ::i2c::type_of<::Mono::Net::Security::AsyncProtocolRequest*>(), ::i2c::type_of<::Mono::Net::Security::BufferOffsetSize2*>(),
                                                                 ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.InnerRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (
    ::Mono::Net::Security::MobileAuthenticatedStream::*)(bool, int32_t, ::System::Threading::CancellationToken)>(&::Mono::Net::Security::MobileAuthenticatedStream::InnerRead)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5fd2704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(),
                                                             { "InnerRead", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.InnerWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Mono::Net::Security::MobileAuthenticatedStream::*)(bool, ::System::Threading::CancellationToken)>(
    &::Mono::Net::Security::MobileAuthenticatedStream::InnerWrite)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5fd21fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(),
                                                             { "InnerWrite", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.ProcessHandshake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Net::Security::AsyncOperationStatus (::Mono::Net::Security::MobileAuthenticatedStream::*)(
    ::Mono::Net::Security::AsyncOperationStatus, bool)>(&::Mono::Net::Security::MobileAuthenticatedStream::ProcessHandshake)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x5fd28ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(),
                                                             { "ProcessHandshake", {}, { ::i2c::type_of<::Mono::Net::Security::AsyncOperationStatus>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.ProcessRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<int32_t, bool> (::Mono::Net::Security::MobileAuthenticatedStream::*)(::Mono::Net::Security::BufferOffsetSize*)>(
    &::Mono::Net::Security::MobileAuthenticatedStream::ProcessRead)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5fd2e38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), { "ProcessRead", {}, { ::i2c::type_of<::Mono::Net::Security::BufferOffsetSize*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.ProcessWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<int32_t, bool> (::Mono::Net::Security::MobileAuthenticatedStream::*)(::Mono::Net::Security::BufferOffsetSize*)>(
    &::Mono::Net::Security::MobileAuthenticatedStream::ProcessWrite)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5fd3000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(),
                                                                                           { "ProcessWrite", {}, { ::i2c::type_of<::Mono::Net::Security::BufferOffsetSize*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.get_IsAuthenticated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Net::Security::MobileAuthenticatedStream::*)()>(&::Mono::Net::Security::MobileAuthenticatedStream::get_IsAuthenticated)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5fd5060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), { ::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::MobileAuthenticatedStream::*)(bool)>(&::Mono::Net::Security::MobileAuthenticatedStream::Dispose)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x5fd5144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), { ::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.Flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::MobileAuthenticatedStream::*)()>(&::Mono::Net::Security::MobileAuthenticatedStream::Flush)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fd5390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), { ::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.get_LocalCertificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate* (::Mono::Net::Security::MobileAuthenticatedStream::*)()>(
    &::Mono::Net::Security::MobileAuthenticatedStream::get_LocalCertificate)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5fd53b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), { "get_LocalCertificate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.get_InternalLocalCertificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate* (::Mono::Net::Security::MobileAuthenticatedStream::*)()>(
    &::Mono::Net::Security::MobileAuthenticatedStream::get_InternalLocalCertificate)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5fd5484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), { "get_InternalLocalCertificate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.Seek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Mono::Net::Security::MobileAuthenticatedStream::*)(int64_t, ::System::IO::SeekOrigin)>(
    &::Mono::Net::Security::MobileAuthenticatedStream::Seek)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5fd5580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), { ::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.SetLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::MobileAuthenticatedStream::*)(int64_t)>(&::Mono::Net::Security::MobileAuthenticatedStream::SetLength)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fd55b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), { ::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.get_CanRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Net::Security::MobileAuthenticatedStream::*)()>(&::Mono::Net::Security::MobileAuthenticatedStream::get_CanRead)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5fd55d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), { ::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.get_CanTimeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Net::Security::MobileAuthenticatedStream::*)()>(&::Mono::Net::Security::MobileAuthenticatedStream::get_CanTimeout)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fd561c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), { ::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.get_CanWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Net::Security::MobileAuthenticatedStream::*)()>(&::Mono::Net::Security::MobileAuthenticatedStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5fd5638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), { ::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.get_CanSeek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Net::Security::MobileAuthenticatedStream::*)()>(&::Mono::Net::Security::MobileAuthenticatedStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd569c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), { ::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.get_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Mono::Net::Security::MobileAuthenticatedStream::*)()>(&::Mono::Net::Security::MobileAuthenticatedStream::get_Length)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fd56a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), { ::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.get_Position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Mono::Net::Security::MobileAuthenticatedStream::*)()>(&::Mono::Net::Security::MobileAuthenticatedStream::get_Position)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fd56c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), { ::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.set_Position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::MobileAuthenticatedStream::*)(int64_t)>(&::Mono::Net::Security::MobileAuthenticatedStream::set_Position)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5fd56e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), { ::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.get_ReadTimeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Net::Security::MobileAuthenticatedStream::*)()>(&::Mono::Net::Security::MobileAuthenticatedStream::get_ReadTimeout)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fd5718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), { ::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.set_ReadTimeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::MobileAuthenticatedStream::*)(int32_t)>(&::Mono::Net::Security::MobileAuthenticatedStream::set_ReadTimeout)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fd5738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), { ::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.get_WriteTimeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Net::Security::MobileAuthenticatedStream::*)()>(&::Mono::Net::Security::MobileAuthenticatedStream::get_WriteTimeout)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fd5758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), { ::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.set_WriteTimeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::MobileAuthenticatedStream::*)(int32_t)>(&::Mono::Net::Security::MobileAuthenticatedStream::set_WriteTimeout)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fd5778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), { ::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream._InnerWrite_b__67_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::MobileAuthenticatedStream::*)()>(&::Mono::Net::Security::MobileAuthenticatedStream::_InnerWrite_b__67_0)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5fd57e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), { "<InnerWrite>b__67_0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Mono::Net::Security::MobileTlsContext*& Mono::Net::Security::MobileAuthenticatedStream::__cordl_internal_get_xobileTlsContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xobileTlsContext;
}
constexpr ::Mono::Net::Security::MobileTlsContext* const& Mono::Net::Security::MobileAuthenticatedStream::__cordl_internal_get_xobileTlsContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xobileTlsContext;
}
constexpr void Mono::Net::Security::MobileAuthenticatedStream::__cordl_internal_set_xobileTlsContext(::Mono::Net::Security::MobileTlsContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xobileTlsContext = value;
}
constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*& Mono::Net::Security::MobileAuthenticatedStream::__cordl_internal_get_lastException() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastException;
}
constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* const& Mono::Net::Security::MobileAuthenticatedStream::__cordl_internal_get_lastException() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastException;
}
constexpr void Mono::Net::Security::MobileAuthenticatedStream::__cordl_internal_set_lastException(::System::Runtime::ExceptionServices::ExceptionDispatchInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastException = value;
}
constexpr ::Mono::Net::Security::AsyncProtocolRequest*& Mono::Net::Security::MobileAuthenticatedStream::__cordl_internal_get_asyncHandshakeRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___asyncHandshakeRequest;
}
constexpr ::Mono::Net::Security::AsyncProtocolRequest* const& Mono::Net::Security::MobileAuthenticatedStream::__cordl_internal_get_asyncHandshakeRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___asyncHandshakeRequest;
}
constexpr void Mono::Net::Security::MobileAuthenticatedStream::__cordl_internal_set_asyncHandshakeRequest(::Mono::Net::Security::AsyncProtocolRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___asyncHandshakeRequest = value;
}
constexpr ::Mono::Net::Security::AsyncProtocolRequest*& Mono::Net::Security::MobileAuthenticatedStream::__cordl_internal_get_asyncReadRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___asyncReadRequest;
}
constexpr ::Mono::Net::Security::AsyncProtocolRequest* const& Mono::Net::Security::MobileAuthenticatedStream::__cordl_internal_get_asyncReadRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___asyncReadRequest;
}
constexpr void Mono::Net::Security::MobileAuthenticatedStream::__cordl_internal_set_asyncReadRequest(::Mono::Net::Security::AsyncProtocolRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___asyncReadRequest = value;
}
constexpr ::Mono::Net::Security::AsyncProtocolRequest*& Mono::Net::Security::MobileAuthenticatedStream::__cordl_internal_get_asyncWriteRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___asyncWriteRequest;
}
constexpr ::Mono::Net::Security::AsyncProtocolRequest* const& Mono::Net::Security::MobileAuthenticatedStream::__cordl_internal_get_asyncWriteRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___asyncWriteRequest;
}
constexpr void Mono::Net::Security::MobileAuthenticatedStream::__cordl_internal_set_asyncWriteRequest(::Mono::Net::Security::AsyncProtocolRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___asyncWriteRequest = value;
}
constexpr ::Mono::Net::Security::BufferOffsetSize2*& Mono::Net::Security::MobileAuthenticatedStream::__cordl_internal_get_readBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readBuffer;
}
constexpr ::Mono::Net::Security::BufferOffsetSize2* const& Mono::Net::Security::MobileAuthenticatedStream::__cordl_internal_get_readBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readBuffer;
}
constexpr void Mono::Net::Security::MobileAuthenticatedStream::__cordl_internal_set_readBuffer(::Mono::Net::Security::BufferOffsetSize2* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___readBuffer = value;
}
constexpr ::Mono::Net::Security::BufferOffsetSize2*& Mono::Net::Security::MobileAuthenticatedStream::__cordl_internal_get_writeBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writeBuffer;
}
constexpr ::Mono::Net::Security::BufferOffsetSize2* const& Mono::Net::Security::MobileAuthenticatedStream::__cordl_internal_get_writeBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writeBuffer;
}
constexpr void Mono::Net::Security::MobileAuthenticatedStream::__cordl_internal_set_writeBuffer(::Mono::Net::Security::BufferOffsetSize2* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___writeBuffer = value;
}
constexpr ::System::Object*& Mono::Net::Security::MobileAuthenticatedStream::__cordl_internal_get_ioLock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ioLock;
}
constexpr ::System::Object* const& Mono::Net::Security::MobileAuthenticatedStream::__cordl_internal_get_ioLock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ioLock;
}
constexpr void Mono::Net::Security::MobileAuthenticatedStream::__cordl_internal_set_ioLock(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ioLock = value;
}
constexpr int32_t& Mono::Net::Security::MobileAuthenticatedStream::__cordl_internal_get_closeRequested() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___closeRequested;
}
constexpr int32_t const& Mono::Net::Security::MobileAuthenticatedStream::__cordl_internal_get_closeRequested() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___closeRequested;
}
constexpr void Mono::Net::Security::MobileAuthenticatedStream::__cordl_internal_set_closeRequested(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___closeRequested = value;
}
constexpr bool& Mono::Net::Security::MobileAuthenticatedStream::__cordl_internal_get_shutdown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shutdown;
}
constexpr bool const& Mono::Net::Security::MobileAuthenticatedStream::__cordl_internal_get_shutdown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shutdown;
}
constexpr void Mono::Net::Security::MobileAuthenticatedStream::__cordl_internal_set_shutdown(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shutdown = value;
}
constexpr ::Mono::Net::Security::MobileAuthenticatedStream_Operation& Mono::Net::Security::MobileAuthenticatedStream::__cordl_internal_get_operation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___operation;
}
constexpr ::Mono::Net::Security::MobileAuthenticatedStream_Operation const& Mono::Net::Security::MobileAuthenticatedStream::__cordl_internal_get_operation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___operation;
}
constexpr void Mono::Net::Security::MobileAuthenticatedStream::__cordl_internal_set_operation(::Mono::Net::Security::MobileAuthenticatedStream_Operation value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___operation = value;
}
constexpr ::System::Net::Security::SslStream*& Mono::Net::Security::MobileAuthenticatedStream::__cordl_internal_get__SslStream_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SslStream_k__BackingField;
}
constexpr ::System::Net::Security::SslStream* const& Mono::Net::Security::MobileAuthenticatedStream::__cordl_internal_get__SslStream_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SslStream_k__BackingField;
}
constexpr void Mono::Net::Security::MobileAuthenticatedStream::__cordl_internal_set__SslStream_k__BackingField(::System::Net::Security::SslStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____SslStream_k__BackingField = value;
}
constexpr ::Mono::Security::Interface::MonoTlsSettings*& Mono::Net::Security::MobileAuthenticatedStream::__cordl_internal_get__Settings_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Settings_k__BackingField;
}
constexpr ::Mono::Security::Interface::MonoTlsSettings* const& Mono::Net::Security::MobileAuthenticatedStream::__cordl_internal_get__Settings_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Settings_k__BackingField;
}
constexpr void Mono::Net::Security::MobileAuthenticatedStream::__cordl_internal_set__Settings_k__BackingField(::Mono::Security::Interface::MonoTlsSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Settings_k__BackingField = value;
}
constexpr ::Mono::Net::Security::MobileTlsProvider*& Mono::Net::Security::MobileAuthenticatedStream::__cordl_internal_get__Provider_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Provider_k__BackingField;
}
constexpr ::Mono::Net::Security::MobileTlsProvider* const& Mono::Net::Security::MobileAuthenticatedStream::__cordl_internal_get__Provider_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Provider_k__BackingField;
}
constexpr void Mono::Net::Security::MobileAuthenticatedStream::__cordl_internal_set__Provider_k__BackingField(::Mono::Net::Security::MobileTlsProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Provider_k__BackingField = value;
}
constexpr ::StringW& Mono::Net::Security::MobileAuthenticatedStream::__cordl_internal_get__TargetHost_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TargetHost_k__BackingField;
}
constexpr ::StringW const& Mono::Net::Security::MobileAuthenticatedStream::__cordl_internal_get__TargetHost_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TargetHost_k__BackingField;
}
constexpr void Mono::Net::Security::MobileAuthenticatedStream::__cordl_internal_set__TargetHost_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____TargetHost_k__BackingField = value;
}
constexpr int32_t& Mono::Net::Security::MobileAuthenticatedStream::__cordl_internal_get__cordl_ID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_ID;
}
constexpr int32_t const& Mono::Net::Security::MobileAuthenticatedStream::__cordl_internal_get__cordl_ID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_ID;
}
constexpr void Mono::Net::Security::MobileAuthenticatedStream::__cordl_internal_set__cordl_ID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cordl_ID = value;
}
inline void Mono::Net::Security::MobileAuthenticatedStream::setStaticF_uniqueNameInteger(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "uniqueNameInteger", ::Mono::Net::Security::MobileAuthenticatedStream*>(std::forward<int32_t>(value));
}
inline int32_t Mono::Net::Security::MobileAuthenticatedStream::getStaticF_uniqueNameInteger() {
  return ::cordl_internals::getStaticField<int32_t, "uniqueNameInteger", ::Mono::Net::Security::MobileAuthenticatedStream*>();
}
inline void Mono::Net::Security::MobileAuthenticatedStream::setStaticF_nextId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "nextId", ::Mono::Net::Security::MobileAuthenticatedStream*>(std::forward<int32_t>(value));
}
inline int32_t Mono::Net::Security::MobileAuthenticatedStream::getStaticF_nextId() {
  return ::cordl_internals::getStaticField<int32_t, "nextId", ::Mono::Net::Security::MobileAuthenticatedStream*>();
}
inline void Mono::Net::Security::MobileAuthenticatedStream::_ctor(::System::IO::Stream* innerStream, bool leaveInnerStreamOpen, ::System::Net::Security::SslStream* owner,
                                                                  ::Mono::Security::Interface::MonoTlsSettings* settings, ::Mono::Net::Security::MobileTlsProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Net::Security::SslStream*>(),
                                                               ::i2c::type_of<::Mono::Security::Interface::MonoTlsSettings*>(), ::i2c::type_of<::Mono::Net::Security::MobileTlsProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerStream, leaveInnerStreamOpen, owner, settings, provider);
}
inline ::System::Net::Security::SslStream* Mono::Net::Security::MobileAuthenticatedStream::get_SslStream() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), { "get_SslStream", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Security::SslStream*>(this, ___internal_method);
}
inline ::Mono::Security::Interface::MonoTlsSettings* Mono::Net::Security::MobileAuthenticatedStream::get_Settings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), { "get_Settings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::Interface::MonoTlsSettings*>(this, ___internal_method);
}
inline ::Mono::Net::Security::MobileTlsProvider* Mono::Net::Security::MobileAuthenticatedStream::get_Provider() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), { "get_Provider", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Net::Security::MobileTlsProvider*>(this, ___internal_method);
}
inline ::StringW Mono::Net::Security::MobileAuthenticatedStream::get_TargetHost() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), { "get_TargetHost", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Mono::Net::Security::MobileAuthenticatedStream::set_TargetHost(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), { "set_TargetHost", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mono::Net::Security::MobileAuthenticatedStream::CheckThrow(bool authSuccessCheck, bool shutdownCheck) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), { "CheckThrow", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, authSuccessCheck, shutdownCheck);
}
inline ::System::Exception* Mono::Net::Security::MobileAuthenticatedStream::GetSSPIException(::System::Exception* e) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), { "GetSSPIException", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, e);
}
inline ::System::Exception* Mono::Net::Security::MobileAuthenticatedStream::GetIOException(::System::Exception* e, ::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(),
                                                                                         { "GetIOException", {}, { ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, e, message);
}
inline ::System::Exception* Mono::Net::Security::MobileAuthenticatedStream::GetInternalError() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), { "GetInternalError", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* Mono::Net::Security::MobileAuthenticatedStream::GetInvalidNestedCallException() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), { "GetInvalidNestedCallException", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* Mono::Net::Security::MobileAuthenticatedStream::SetException(::System::Exception* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), { "SetException", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>(this, ___internal_method, e);
}
inline void Mono::Net::Security::MobileAuthenticatedStream::AuthenticateAsClient(::StringW targetHost,
                                                                                 ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates,
                                                                                 ::System::Security::Authentication::SslProtocols enabledSslProtocols, bool checkCertificateRevocation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(),
                                                           { "AuthenticateAsClient",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>(),
                                                               ::i2c::type_of<::System::Security::Authentication::SslProtocols>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetHost, clientCertificates, enabledSslProtocols, checkCertificateRevocation);
}
inline void Mono::Net::Security::MobileAuthenticatedStream::AuthenticateAsServer(::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, bool clientCertificateRequired,
                                                                                 ::System::Security::Authentication::SslProtocols enabledSslProtocols, bool checkCertificateRevocation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(),
                                                           { "AuthenticateAsServer",
                                                             {},
                                                             { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<::System::Security::Authentication::SslProtocols>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serverCertificate, clientCertificateRequired, enabledSslProtocols, checkCertificateRevocation);
}
inline ::System::Threading::Tasks::Task*
Mono::Net::Security::MobileAuthenticatedStream::AuthenticateAsClientAsync(::StringW targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates,
                                                                          ::System::Security::Authentication::SslProtocols enabledSslProtocols, bool checkCertificateRevocation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(),
                                                           { "AuthenticateAsClientAsync",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>(),
                                                               ::i2c::type_of<::System::Security::Authentication::SslProtocols>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, targetHost, clientCertificates, enabledSslProtocols, checkCertificateRevocation);
}
inline ::System::Threading::Tasks::Task* Mono::Net::Security::MobileAuthenticatedStream::ProcessAuthentication(bool runSynchronously, ::Mono::Net::Security::MonoSslAuthenticationOptions* options,
                                                                                                               ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(),
                          { "ProcessAuthentication",
                            {},
                            { ::i2c::type_of<bool>(), ::i2c::type_of<::Mono::Net::Security::MonoSslAuthenticationOptions*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, runSynchronously, options, cancellationToken);
}
inline ::Mono::Net::Security::MobileTlsContext* Mono::Net::Security::MobileAuthenticatedStream::CreateContext(::Mono::Net::Security::MonoSslAuthenticationOptions* options) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Net::Security::MobileTlsContext*>(this, ___internal_method, options);
}
inline int32_t Mono::Net::Security::MobileAuthenticatedStream::Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline void Mono::Net::Security::MobileAuthenticatedStream::Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* Mono::Net::Security::MobileAuthenticatedStream::ReadAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count,
                                                                                                              ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*>(this, ___internal_method, buffer, offset, count, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Mono::Net::Security::MobileAuthenticatedStream::WriteAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count,
                                                                                                    ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, buffer, offset, count, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* Mono::Net::Security::MobileAuthenticatedStream::StartOperation(::Mono::Net::Security::MobileAuthenticatedStream_OperationType type,
                                                                                                                   ::Mono::Net::Security::AsyncProtocolRequest* asyncRequest,
                                                                                                                   ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(),
                                                           { "StartOperation",
                                                             {},
                                                             { ::i2c::type_of<::Mono::Net::Security::MobileAuthenticatedStream_OperationType>(),
                                                               ::i2c::type_of<::Mono::Net::Security::AsyncProtocolRequest*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*>(this, ___internal_method, type, asyncRequest, cancellationToken);
}
inline int32_t Mono::Net::Security::MobileAuthenticatedStream::InternalRead(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::by_ref<bool> outWantMore) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(),
                                       { "InternalRead", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, size, outWantMore);
}
inline ::System::ValueTuple_2<int32_t, bool> Mono::Net::Security::MobileAuthenticatedStream::InternalRead(::Mono::Net::Security::AsyncProtocolRequest* asyncRequest,
                                                                                                          ::Mono::Net::Security::BufferOffsetSize* internalBuffer, ::ArrayW<uint8_t> buffer,
                                                                                                          int32_t offset, int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(),
                                                           { "InternalRead",
                                                             {},
                                                             { ::i2c::type_of<::Mono::Net::Security::AsyncProtocolRequest*>(), ::i2c::type_of<::Mono::Net::Security::BufferOffsetSize*>(),
                                                               ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<int32_t, bool>>(this, ___internal_method, asyncRequest, internalBuffer, buffer, offset, size);
}
inline bool Mono::Net::Security::MobileAuthenticatedStream::InternalWrite(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(),
                                                           { "InternalWrite", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, buffer, offset, size);
}
inline bool Mono::Net::Security::MobileAuthenticatedStream::InternalWrite(::Mono::Net::Security::AsyncProtocolRequest* asyncRequest, ::Mono::Net::Security::BufferOffsetSize2* internalBuffer,
                                                                          ::ArrayW<uint8_t> buffer, int32_t offset, int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(),
                                                           { "InternalWrite",
                                                             {},
                                                             { ::i2c::type_of<::Mono::Net::Security::AsyncProtocolRequest*>(), ::i2c::type_of<::Mono::Net::Security::BufferOffsetSize2*>(),
                                                               ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, asyncRequest, internalBuffer, buffer, offset, size);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* Mono::Net::Security::MobileAuthenticatedStream::InnerRead(bool sync, int32_t requestedSize,
                                                                                                              ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(),
                                                           { "InnerRead", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*>(this, ___internal_method, sync, requestedSize, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Mono::Net::Security::MobileAuthenticatedStream::InnerWrite(bool sync, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(),
                                                                                         { "InnerWrite", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, sync, cancellationToken);
}
inline ::Mono::Net::Security::AsyncOperationStatus Mono::Net::Security::MobileAuthenticatedStream::ProcessHandshake(::Mono::Net::Security::AsyncOperationStatus status, bool renegotiate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(),
                                                           { "ProcessHandshake", {}, { ::i2c::type_of<::Mono::Net::Security::AsyncOperationStatus>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Net::Security::AsyncOperationStatus>(this, ___internal_method, status, renegotiate);
}
inline ::System::ValueTuple_2<int32_t, bool> Mono::Net::Security::MobileAuthenticatedStream::ProcessRead(::Mono::Net::Security::BufferOffsetSize* userBuffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), { "ProcessRead", {}, { ::i2c::type_of<::Mono::Net::Security::BufferOffsetSize*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<int32_t, bool>>(this, ___internal_method, userBuffer);
}
inline ::System::ValueTuple_2<int32_t, bool> Mono::Net::Security::MobileAuthenticatedStream::ProcessWrite(::Mono::Net::Security::BufferOffsetSize* userBuffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), { "ProcessWrite", {}, { ::i2c::type_of<::Mono::Net::Security::BufferOffsetSize*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<int32_t, bool>>(this, ___internal_method, userBuffer);
}
inline bool Mono::Net::Security::MobileAuthenticatedStream::get_IsAuthenticated() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mono::Net::Security::MobileAuthenticatedStream::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void Mono::Net::Security::MobileAuthenticatedStream::Flush() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate* Mono::Net::Security::MobileAuthenticatedStream::get_LocalCertificate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), { "get_LocalCertificate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate*>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate* Mono::Net::Security::MobileAuthenticatedStream::get_InternalLocalCertificate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), { "get_InternalLocalCertificate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate*>(this, ___internal_method);
}
inline int64_t Mono::Net::Security::MobileAuthenticatedStream::Seek(int64_t offset, ::System::IO::SeekOrigin origin) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, offset, origin);
}
inline void Mono::Net::Security::MobileAuthenticatedStream::SetLength(int64_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Mono::Net::Security::MobileAuthenticatedStream::get_CanRead() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Mono::Net::Security::MobileAuthenticatedStream::get_CanTimeout() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Mono::Net::Security::MobileAuthenticatedStream::get_CanWrite() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Mono::Net::Security::MobileAuthenticatedStream::get_CanSeek() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int64_t Mono::Net::Security::MobileAuthenticatedStream::get_Length() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t Mono::Net::Security::MobileAuthenticatedStream::get_Position() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Mono::Net::Security::MobileAuthenticatedStream::set_Position(int64_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Mono::Net::Security::MobileAuthenticatedStream::get_ReadTimeout() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Mono::Net::Security::MobileAuthenticatedStream::set_ReadTimeout(int32_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Mono::Net::Security::MobileAuthenticatedStream::get_WriteTimeout() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Mono::Net::Security::MobileAuthenticatedStream::set_WriteTimeout(int32_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mono::Net::Security::MobileAuthenticatedStream::_InnerWrite_b__67_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), { "<InnerWrite>b__67_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mono::Net::Security::MobileAuthenticatedStream* Mono::Net::Security::MobileAuthenticatedStream::New_ctor(::System::IO::Stream* innerStream, bool leaveInnerStreamOpen,
                                                                                                                  ::System::Net::Security::SslStream* owner,
                                                                                                                  ::Mono::Security::Interface::MonoTlsSettings* settings,
                                                                                                                  ::Mono::Net::Security::MobileTlsProvider* provider) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Net::Security::MobileAuthenticatedStream*>(innerStream, leaveInnerStreamOpen, owner, settings, provider));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Mono::Net::Security::MobileAuthenticatedStream::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Mono::Net::Security::MobileAuthenticatedStream::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Mono::Net::Security::MobileAuthenticatedStream::MobileAuthenticatedStream() {}
