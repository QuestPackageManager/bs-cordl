#pragma once
// IWYU pragma private; include "OculusStudios\GraphQL\Client\HttpRequestManager.hpp"
#include "System/Net/zzzz__HttpStatusCode_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__HttpRequestManager_def.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__HttpRequestManager_def.hpp"
#include "System/Net/Http/zzzz__HttpClient_def.hpp"
#include "System/Net/Http/zzzz__HttpMessageHandler_def.hpp"
#include "System/Net/Http/zzzz__HttpMethod_def.hpp"
#include "System/Net/Http/zzzz__HttpRequestMessage_def.hpp"
#include "System/Net/Http/zzzz__HttpResponseMessage_def.hpp"
#include "System/Net/Security/zzzz__SslPolicyErrors_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "System/Net/zzzz__HttpStatusCode_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/Net/zzzz__ServicePoint_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Chain_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Uri_def.hpp"
inline void OculusStudios::GraphQL::Client::HttpRequestManager_GlobalConfig::setStaticF_DEFAULT(::OculusStudios::GraphQL::Client::HttpRequestManager_GlobalConfig value) {
  ::cordl_internals::setStaticField<::OculusStudios::GraphQL::Client::HttpRequestManager_GlobalConfig, "DEFAULT", ::OculusStudios::GraphQL::Client::HttpRequestManager_GlobalConfig>(
      std::forward<::OculusStudios::GraphQL::Client::HttpRequestManager_GlobalConfig>(value));
}
inline ::OculusStudios::GraphQL::Client::HttpRequestManager_GlobalConfig OculusStudios::GraphQL::Client::HttpRequestManager_GlobalConfig::getStaticF_DEFAULT() {
  return ::cordl_internals::getStaticField<::OculusStudios::GraphQL::Client::HttpRequestManager_GlobalConfig, "DEFAULT", ::OculusStudios::GraphQL::Client::HttpRequestManager_GlobalConfig>();
}
// Ctor Parameters [CppParam { name: "connectionLimit", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "defaultRequestTimeout", ty: "::System::TimeSpan", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "forceIPV6", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::OculusStudios::GraphQL::Client::HttpRequestManager_GlobalConfig::HttpRequestManager_GlobalConfig(int32_t connectionLimit, ::System::TimeSpan defaultRequestTimeout,
                                                                                                             bool forceIPV6) noexcept {
  this->connectionLimit = connectionLimit;
  this->defaultRequestTimeout = defaultRequestTimeout;
  this->forceIPV6 = forceIPV6;
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::HttpRequestManager_GlobalConfig::HttpRequestManager_GlobalConfig() {}
inline void OculusStudios::GraphQL::Client::HttpRequestManager_SessionConfig::setStaticF_DEFAULT(::OculusStudios::GraphQL::Client::HttpRequestManager_SessionConfig value) {
  ::cordl_internals::setStaticField<::OculusStudios::GraphQL::Client::HttpRequestManager_SessionConfig, "DEFAULT", ::OculusStudios::GraphQL::Client::HttpRequestManager_SessionConfig>(
      std::forward<::OculusStudios::GraphQL::Client::HttpRequestManager_SessionConfig>(value));
}
inline ::OculusStudios::GraphQL::Client::HttpRequestManager_SessionConfig OculusStudios::GraphQL::Client::HttpRequestManager_SessionConfig::getStaticF_DEFAULT() {
  return ::cordl_internals::getStaticField<::OculusStudios::GraphQL::Client::HttpRequestManager_SessionConfig, "DEFAULT", ::OculusStudios::GraphQL::Client::HttpRequestManager_SessionConfig>();
}
// Ctor Parameters [CppParam { name: "baseAddress", ty: "::System::Uri*", modifiers: "", def_value: Some("{}") }, CppParam { name: "requestTimeout", ty: "::System::TimeSpan", modifiers: "", def_value:
// Some("{}") }]
constexpr ::OculusStudios::GraphQL::Client::HttpRequestManager_SessionConfig::HttpRequestManager_SessionConfig(::System::Uri* baseAddress, ::System::TimeSpan requestTimeout) noexcept {
  this->baseAddress = baseAddress;
  this->requestTimeout = requestTimeout;
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::HttpRequestManager_SessionConfig::HttpRequestManager_SessionConfig() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OculusStudios::GraphQL::Client::HttpRequestManager_fastFallbackState::HttpRequestManager_fastFallbackState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::HttpRequestManager_fastFallbackState::HttpRequestManager_fastFallbackState() {}
constexpr ::OculusStudios::GraphQL::Client::HttpRequestManager_fastFallbackState OculusStudios::GraphQL::Client::HttpRequestManager_fastFallbackState::NEEDS_CHECK{ static_cast<int32_t>(0x0) };
constexpr ::OculusStudios::GraphQL::Client::HttpRequestManager_fastFallbackState OculusStudios::GraphQL::Client::HttpRequestManager_fastFallbackState::CHECKING{ static_cast<int32_t>(0x1) };
constexpr ::OculusStudios::GraphQL::Client::HttpRequestManager_fastFallbackState OculusStudios::GraphQL::Client::HttpRequestManager_fastFallbackState::NOT_REQUIRED_IPV6_OK{ static_cast<int32_t>(
    0x2) };
constexpr ::OculusStudios::GraphQL::Client::HttpRequestManager_fastFallbackState OculusStudios::GraphQL::Client::HttpRequestManager_fastFallbackState::NOT_REQUIRED_DNS_ONLY_IPV4{ static_cast<int32_t>(
    0x3) };
constexpr ::OculusStudios::GraphQL::Client::HttpRequestManager_fastFallbackState OculusStudios::GraphQL::Client::HttpRequestManager_fastFallbackState::NOT_REQUIRED_DNS_ONLY_IPV6{ static_cast<int32_t>(
    0x4) };
constexpr ::OculusStudios::GraphQL::Client::HttpRequestManager_fastFallbackState OculusStudios::GraphQL::Client::HttpRequestManager_fastFallbackState::NOT_REQUIRED_NO_IPV6{ static_cast<int32_t>(
    0x5) };
constexpr ::OculusStudios::GraphQL::Client::HttpRequestManager_fastFallbackState OculusStudios::GraphQL::Client::HttpRequestManager_fastFallbackState::IPV4{ static_cast<int32_t>(0x6) };
constexpr ::OculusStudios::GraphQL::Client::HttpRequestManager_fastFallbackState OculusStudios::GraphQL::Client::HttpRequestManager_fastFallbackState::ERROR_DNS{ static_cast<int32_t>(0x7) };
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpRequestManager_ByteArrayResultCallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::HttpRequestManager_ByteArrayResultCallback::*)(::System::Object*, ::System::IntPtr)>(
    &::OculusStudios::GraphQL::Client::HttpRequestManager_ByteArrayResultCallback::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f28700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager_ByteArrayResultCallback*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpRequestManager_ByteArrayResultCallback.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::HttpRequestManager_ByteArrayResultCallback::*)(
    ::ArrayW<uint8_t>, ::System::Net::HttpStatusCode, ::StringW, ::System::Exception*)>(&::OculusStudios::GraphQL::Client::HttpRequestManager_ByteArrayResultCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f28780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager_ByteArrayResultCallback*>(),
                                                                                          { ::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager_ByteArrayResultCallback*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpRequestManager_ByteArrayResultCallback.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OculusStudios::GraphQL::Client::HttpRequestManager_ByteArrayResultCallback::*)(::ArrayW<uint8_t>, ::System::Net::HttpStatusCode, ::StringW, ::System::Exception*, ::System::AsyncCallback*,
                                                                                     ::System::Object*)>(&::OculusStudios::GraphQL::Client::HttpRequestManager_ByteArrayResultCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5f28794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager_ByteArrayResultCallback*>(),
                                                                                          { ::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager_ByteArrayResultCallback*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpRequestManager_ByteArrayResultCallback.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::HttpRequestManager_ByteArrayResultCallback::*)(::System::IAsyncResult*)>(
    &::OculusStudios::GraphQL::Client::HttpRequestManager_ByteArrayResultCallback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f28840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager_ByteArrayResultCallback*>(),
                                                                                          { ::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager_ByteArrayResultCallback*>(), 15 }));
    return ___internal_method;
  }
};
inline void OculusStudios::GraphQL::Client::HttpRequestManager_ByteArrayResultCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager_ByteArrayResultCallback*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OculusStudios::GraphQL::Client::HttpRequestManager_ByteArrayResultCallback::Invoke(::ArrayW<uint8_t> result, ::System::Net::HttpStatusCode statusCode, ::StringW reasonPhrase,
                                                                                               ::System::Exception* exception) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager_ByteArrayResultCallback*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, statusCode, reasonPhrase, exception);
}
inline ::System::IAsyncResult* OculusStudios::GraphQL::Client::HttpRequestManager_ByteArrayResultCallback::BeginInvoke(::ArrayW<uint8_t> result, ::System::Net::HttpStatusCode statusCode,
                                                                                                                       ::StringW reasonPhrase, ::System::Exception* exception,
                                                                                                                       ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager_ByteArrayResultCallback*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, result, statusCode, reasonPhrase, exception, callback, object);
}
inline void OculusStudios::GraphQL::Client::HttpRequestManager_ByteArrayResultCallback::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager_ByteArrayResultCallback*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::OculusStudios::GraphQL::Client::HttpRequestManager_ByteArrayResultCallback* OculusStudios::GraphQL::Client::HttpRequestManager_ByteArrayResultCallback::New_ctor(::System::Object* object,
                                                                                                                                                                          ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::GraphQL::Client::HttpRequestManager_ByteArrayResultCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::HttpRequestManager_ByteArrayResultCallback::HttpRequestManager_ByteArrayResultCallback() {}
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpRequestManager___c__DisplayClass30_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::HttpRequestManager___c__DisplayClass30_0::*)()>(
    &::OculusStudios::GraphQL::Client::HttpRequestManager___c__DisplayClass30_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f2884c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager___c__DisplayClass30_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpRequestManager___c__DisplayClass30_0._CheckFastFallbackAsync_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::HttpRequestManager___c__DisplayClass30_0::*)(::System::IAsyncResult*)>(
    &::OculusStudios::GraphQL::Client::HttpRequestManager___c__DisplayClass30_0::_CheckFastFallbackAsync_b__0)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5f28850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager___c__DisplayClass30_0*>(),
                                                                                           { "<CheckFastFallbackAsync>b__0", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
    return ___internal_method;
  }
};
constexpr ::OculusStudios::GraphQL::Client::HttpRequestManager_fastFallbackState& OculusStudios::GraphQL::Client::HttpRequestManager___c__DisplayClass30_0::__cordl_internal_get_tmpState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tmpState;
}
constexpr ::OculusStudios::GraphQL::Client::HttpRequestManager_fastFallbackState const&
OculusStudios::GraphQL::Client::HttpRequestManager___c__DisplayClass30_0::__cordl_internal_get_tmpState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tmpState;
}
constexpr void OculusStudios::GraphQL::Client::HttpRequestManager___c__DisplayClass30_0::__cordl_internal_set_tmpState(::OculusStudios::GraphQL::Client::HttpRequestManager_fastFallbackState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tmpState = value;
}
inline void OculusStudios::GraphQL::Client::HttpRequestManager___c__DisplayClass30_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager___c__DisplayClass30_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::HttpRequestManager___c__DisplayClass30_0::_CheckFastFallbackAsync_b__0(::System::IAsyncResult* a) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager___c__DisplayClass30_0*>(),
                                                                                         { "<CheckFastFallbackAsync>b__0", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, a);
}
inline ::OculusStudios::GraphQL::Client::HttpRequestManager___c__DisplayClass30_0* OculusStudios::GraphQL::Client::HttpRequestManager___c__DisplayClass30_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::GraphQL::Client::HttpRequestManager___c__DisplayClass30_0*>());
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::HttpRequestManager___c__DisplayClass30_0::HttpRequestManager___c__DisplayClass30_0() {}
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpRequestManager__CheckAndConsiderFastFallbackAsync_d__35.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::HttpRequestManager__CheckAndConsiderFastFallbackAsync_d__35::*)()>(
    &::OculusStudios::GraphQL::Client::HttpRequestManager__CheckAndConsiderFastFallbackAsync_d__35::MoveNext)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x5f28a2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager__CheckAndConsiderFastFallbackAsync_d__35>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpRequestManager__CheckAndConsiderFastFallbackAsync_d__35.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::HttpRequestManager__CheckAndConsiderFastFallbackAsync_d__35::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::OculusStudios::GraphQL::Client::HttpRequestManager__CheckAndConsiderFastFallbackAsync_d__35::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f28c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager__CheckAndConsiderFastFallbackAsync_d__35>(),
                                                             { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void OculusStudios::GraphQL::Client::HttpRequestManager__CheckAndConsiderFastFallbackAsync_d__35::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager__CheckAndConsiderFastFallbackAsync_d__35>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::HttpRequestManager__CheckAndConsiderFastFallbackAsync_d__35::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager__CheckAndConsiderFastFallbackAsync_d__35>(),
                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr OculusStudios::GraphQL::Client::HttpRequestManager__CheckAndConsiderFastFallbackAsync_d__35::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
OculusStudios::GraphQL::Client::HttpRequestManager__CheckAndConsiderFastFallbackAsync_d__35::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "uri", ty: "::System::Uri*", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::OculusStudios::GraphQL::Client::HttpRequestManager__CheckAndConsiderFastFallbackAsync_d__35::HttpRequestManager__CheckAndConsiderFastFallbackAsync_d__35(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Uri* uri, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->uri = uri;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::HttpRequestManager__CheckAndConsiderFastFallbackAsync_d__35::HttpRequestManager__CheckAndConsiderFastFallbackAsync_d__35() {}
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpRequestManager__CheckFastFallbackAsync_d__30.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::HttpRequestManager__CheckFastFallbackAsync_d__30::*)()>(
    &::OculusStudios::GraphQL::Client::HttpRequestManager__CheckFastFallbackAsync_d__30::MoveNext)> {
  constexpr static std::size_t size = 0xb94;
  constexpr static std::size_t addrs = 0x5f28ca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager__CheckFastFallbackAsync_d__30>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpRequestManager__CheckFastFallbackAsync_d__30.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::HttpRequestManager__CheckFastFallbackAsync_d__30::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::OculusStudios::GraphQL::Client::HttpRequestManager__CheckFastFallbackAsync_d__30::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f2983c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager__CheckFastFallbackAsync_d__30>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void OculusStudios::GraphQL::Client::HttpRequestManager__CheckFastFallbackAsync_d__30::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager__CheckFastFallbackAsync_d__30>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::HttpRequestManager__CheckFastFallbackAsync_d__30::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager__CheckFastFallbackAsync_d__30>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr OculusStudios::GraphQL::Client::HttpRequestManager__CheckFastFallbackAsync_d__30::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
OculusStudios::GraphQL::Client::HttpRequestManager__CheckFastFallbackAsync_d__30::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__8__1", ty:
// "::OculusStudios::GraphQL::Client::HttpRequestManager___c__DisplayClass30_0*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ipv4_5__2", ty: "::System::Net::IPAddress*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "_ipv6_5__3", ty: "::System::Net::IPAddress*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::Net::IPAddress*>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_socket_5__4", ty:
// "::System::Net::Sockets::Socket*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::OculusStudios::GraphQL::Client::HttpRequestManager__CheckFastFallbackAsync_d__30::HttpRequestManager__CheckFastFallbackAsync_d__30(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::OculusStudios::GraphQL::Client::HttpRequestManager___c__DisplayClass30_0* __8__1,
    ::System::Net::IPAddress* _ipv4_5__2, ::System::Net::IPAddress* _ipv6_5__3, ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::Net::IPAddress*>> __u__2, ::System::Net::Sockets::Socket* _socket_5__4,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*> __u__3) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__8__1 = __8__1;
  this->_ipv4_5__2 = _ipv4_5__2;
  this->_ipv6_5__3 = _ipv6_5__3;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
  this->_socket_5__4 = _socket_5__4;
  this->__u__3 = __u__3;
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::HttpRequestManager__CheckFastFallbackAsync_d__30::HttpRequestManager__CheckFastFallbackAsync_d__30() {}
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpRequestManager__CheckFastFallbackNoWait_d__29.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::HttpRequestManager__CheckFastFallbackNoWait_d__29::*)()>(
    &::OculusStudios::GraphQL::Client::HttpRequestManager__CheckFastFallbackNoWait_d__29::MoveNext)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5f298a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager__CheckFastFallbackNoWait_d__29>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpRequestManager__CheckFastFallbackNoWait_d__29.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::HttpRequestManager__CheckFastFallbackNoWait_d__29::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::OculusStudios::GraphQL::Client::HttpRequestManager__CheckFastFallbackNoWait_d__29::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f29a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager__CheckFastFallbackNoWait_d__29>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void OculusStudios::GraphQL::Client::HttpRequestManager__CheckFastFallbackNoWait_d__29::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager__CheckFastFallbackNoWait_d__29>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::HttpRequestManager__CheckFastFallbackNoWait_d__29::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager__CheckFastFallbackNoWait_d__29>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr OculusStudios::GraphQL::Client::HttpRequestManager__CheckFastFallbackNoWait_d__29::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
OculusStudios::GraphQL::Client::HttpRequestManager__CheckFastFallbackNoWait_d__29::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers:
// "", def_value: Some("{}") }]
constexpr ::OculusStudios::GraphQL::Client::HttpRequestManager__CheckFastFallbackNoWait_d__29::HttpRequestManager__CheckFastFallbackNoWait_d__29(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::HttpRequestManager__CheckFastFallbackNoWait_d__29::HttpRequestManager__CheckFastFallbackNoWait_d__29() {}
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncInternal_d__39.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncInternal_d__39::*)()>(
    &::OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncInternal_d__39::MoveNext)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x5f29a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncInternal_d__39>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncInternal_d__39.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncInternal_d__39::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncInternal_d__39::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f29e7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncInternal_d__39>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncInternal_d__39::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncInternal_d__39>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncInternal_d__39::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncInternal_d__39>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncInternal_d__39::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncInternal_d__39::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::Http::HttpResponseMessage*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "request", ty:
// "::System::Net::Http::HttpRequestMessage*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*>", modifiers: "", def_value: Some("{}") }]
constexpr ::OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncInternal_d__39::HttpRequestManager__SendAsyncInternal_d__39(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::Http::HttpResponseMessage*> __t__builder, ::System::Net::Http::HttpRequestMessage* request,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->request = request;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncInternal_d__39::HttpRequestManager__SendAsyncInternal_d__39() {}
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncReceiveByteArray_d__41.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncReceiveByteArray_d__41::*)()>(
    &::OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncReceiveByteArray_d__41::MoveNext)> {
  constexpr static std::size_t size = 0x6b4;
  constexpr static std::size_t addrs = 0x5f29efc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncReceiveByteArray_d__41>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncReceiveByteArray_d__41.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncReceiveByteArray_d__41::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncReceiveByteArray_d__41::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f2a5b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncReceiveByteArray_d__41>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncReceiveByteArray_d__41::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncReceiveByteArray_d__41>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncReceiveByteArray_d__41::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncReceiveByteArray_d__41>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncReceiveByteArray_d__41::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncReceiveByteArray_d__41::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "callback", ty:
// "::OculusStudios::GraphQL::Client::HttpRequestManager_ByteArrayResultCallback*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::OculusStudios::GraphQL::Client::HttpRequestManager*", modifiers: "", def_value: Some("{}") }, CppParam { name: "request", ty: "::System::Net::Http::HttpRequestMessage*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "_responseTask_5__2", ty: "::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_response_5__3", ty: "::System::Net::Http::HttpResponseMessage*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_statusCode_5__4", ty: "::System::Net::HttpStatusCode",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_reasonPhrase_5__5", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "_exception_5__6", ty:
// "::System::Exception*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_resultTask_5__7", ty: "::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>>", modifiers: "", def_value: Some("{}") }]
constexpr ::OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncReceiveByteArray_d__41::HttpRequestManager__SendAsyncReceiveByteArray_d__41(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::OculusStudios::GraphQL::Client::HttpRequestManager_ByteArrayResultCallback* callback,
    ::OculusStudios::GraphQL::Client::HttpRequestManager* __4__this, ::System::Net::Http::HttpRequestMessage* request,
    ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* _responseTask_5__2, ::System::Net::Http::HttpResponseMessage* _response_5__3,
    ::System::Net::HttpStatusCode _statusCode_5__4, ::StringW _reasonPhrase_5__5, ::System::Exception* _exception_5__6,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*> __u__1, ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* _resultTask_5__7,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->callback = callback;
  this->__4__this = __4__this;
  this->request = request;
  this->_responseTask_5__2 = _responseTask_5__2;
  this->_response_5__3 = _response_5__3;
  this->_statusCode_5__4 = _statusCode_5__4;
  this->_reasonPhrase_5__5 = _reasonPhrase_5__5;
  this->_exception_5__6 = _exception_5__6;
  this->__u__1 = __u__1;
  this->_resultTask_5__7 = _resultTask_5__7;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::HttpRequestManager__SendAsyncReceiveByteArray_d__41::HttpRequestManager__SendAsyncReceiveByteArray_d__41() {}
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpRequestManager.get_currentFastFallbackState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OculusStudios::GraphQL::Client::HttpRequestManager_fastFallbackState (*)()>(
    &::OculusStudios::GraphQL::Client::HttpRequestManager::get_currentFastFallbackState)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f273cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager*>(), { "get_currentFastFallbackState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpRequestManager.get_globalConfig
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OculusStudios::GraphQL::Client::HttpRequestManager_GlobalConfig (*)()>(
    &::OculusStudios::GraphQL::Client::HttpRequestManager::get_globalConfig)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f27428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager*>(), { "get_globalConfig", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpRequestManager.get_sessionConfig
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OculusStudios::GraphQL::Client::HttpRequestManager_SessionConfig (::OculusStudios::GraphQL::Client::HttpRequestManager::*)()>(
    &::OculusStudios::GraphQL::Client::HttpRequestManager::get_sessionConfig)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f27494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager*>(), { "get_sessionConfig", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpRequestManager.CreateHttpClient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::OculusStudios::GraphQL::Client::HttpRequestManager::CreateHttpClient)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x5f274a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager*>(), { "CreateHttpClient", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpRequestManager.MyCertHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*, ::System::Security::Cryptography::X509Certificates::X509Certificate*,
                                                                ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors)>(
    &::OculusStudios::GraphQL::Client::HttpRequestManager::MyCertHandler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f278ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager*>(),
                                                { "MyCertHandler",
                                                  {},
                                                  { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                                                    ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Chain*>(), ::i2c::type_of<::System::Net::Security::SslPolicyErrors>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpRequestManager.UpdateGlobalConfig
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::OculusStudios::GraphQL::Client::HttpRequestManager_GlobalConfig)>(
    &::OculusStudios::GraphQL::Client::HttpRequestManager::UpdateGlobalConfig)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5f277cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager*>(),
                                                             { "UpdateGlobalConfig", {}, { ::i2c::type_of<::OculusStudios::GraphQL::Client::HttpRequestManager_GlobalConfig>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpRequestManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::HttpRequestManager::*)()>(&::OculusStudios::GraphQL::Client::HttpRequestManager::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5f23f58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpRequestManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::HttpRequestManager::*)(::OculusStudios::GraphQL::Client::HttpRequestManager_SessionConfig)>(
    &::OculusStudios::GraphQL::Client::HttpRequestManager::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f279a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::OculusStudios::GraphQL::Client::HttpRequestManager_SessionConfig>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpRequestManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::HttpRequestManager::*)(::System::Net::Http::HttpMessageHandler*)>(
    &::OculusStudios::GraphQL::Client::HttpRequestManager::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5f27a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::Http::HttpMessageHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpRequestManager.UpdateSessionConfig
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::HttpRequestManager::*)(::OculusStudios::GraphQL::Client::HttpRequestManager_SessionConfig)>(
    &::OculusStudios::GraphQL::Client::HttpRequestManager::UpdateSessionConfig)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5f278b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager*>(),
                                                             { "UpdateSessionConfig", {}, { ::i2c::type_of<::OculusStudios::GraphQL::Client::HttpRequestManager_SessionConfig>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpRequestManager.ResetFastFallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::OculusStudios::GraphQL::Client::HttpRequestManager::ResetFastFallback)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5f27750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager*>(), { "ResetFastFallback", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpRequestManager.CheckFastFallbackNoWait
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::OculusStudios::GraphQL::Client::HttpRequestManager::CheckFastFallbackNoWait)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5f27b08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager*>(), { "CheckFastFallbackNoWait", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpRequestManager.CheckFastFallbackAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)()>(&::OculusStudios::GraphQL::Client::HttpRequestManager::CheckFastFallbackAsync)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5f27ba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager*>(), { "CheckFastFallbackAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpRequestManager.BindTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPEndPoint* (*)(::System::Net::ServicePoint*, ::System::Net::IPEndPoint*, int32_t)>(
    &::OculusStudios::GraphQL::Client::HttpRequestManager::BindTo)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5f27c54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager*>(),
                                                { "BindTo", {}, { ::i2c::type_of<::System::Net::ServicePoint*>(), ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpRequestManager.get_fastFallbackChecked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::OculusStudios::GraphQL::Client::HttpRequestManager::get_fastFallbackChecked)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f27dd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager*>(), { "get_fastFallbackChecked", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpRequestManager.ConsiderFastFallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Uri*)>(&::OculusStudios::GraphQL::Client::HttpRequestManager::ConsiderFastFallback)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5f27e38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager*>(), { "ConsiderFastFallback", {}, { ::i2c::type_of<::System::Uri*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpRequestManager.CheckAndConsiderFastFallbackAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::System::Uri*)>(
    &::OculusStudios::GraphQL::Client::HttpRequestManager::CheckAndConsiderFastFallbackAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5f27f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager*>(), { "CheckAndConsiderFastFallbackAsync", {}, { ::i2c::type_of<::System::Uri*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpRequestManager.CreateRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Http::HttpRequestMessage* (
    ::OculusStudios::GraphQL::Client::HttpRequestManager::*)(::System::Net::Http::HttpMethod*, ::System::Uri*)>(&::OculusStudios::GraphQL::Client::HttpRequestManager::CreateRequest)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5f28000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager*>(),
                                                             { "CreateRequest", {}, { ::i2c::type_of<::System::Net::Http::HttpMethod*>(), ::i2c::type_of<::System::Uri*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpRequestManager.CreateByteArrayRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Http::HttpRequestMessage* (
    ::OculusStudios::GraphQL::Client::HttpRequestManager::*)(::System::Net::Http::HttpMethod*, ::System::Uri*, ::StringW, ::StringW, ::ArrayW<uint8_t>)>(
    &::OculusStudios::GraphQL::Client::HttpRequestManager::CreateByteArrayRequest)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5f28150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager*>(),
                                                                                           { "CreateByteArrayRequest",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Net::Http::HttpMethod*>(), ::i2c::type_of<::System::Uri*>(),
                                                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpRequestManager.SendAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* (
    ::OculusStudios::GraphQL::Client::HttpRequestManager::*)(::System::Net::Http::HttpRequestMessage*)>(&::OculusStudios::GraphQL::Client::HttpRequestManager::SendAsync)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f2830c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager*>(),
                                                                                           { "SendAsync", {}, { ::i2c::type_of<::System::Net::Http::HttpRequestMessage*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpRequestManager.SendAsyncInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* (
    ::OculusStudios::GraphQL::Client::HttpRequestManager::*)(::System::Net::Http::HttpRequestMessage*)>(&::OculusStudios::GraphQL::Client::HttpRequestManager::SendAsyncInternal)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5f28310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager*>(),
                                                                                           { "SendAsyncInternal", {}, { ::i2c::type_of<::System::Net::Http::HttpRequestMessage*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpRequestManager.OpenPersistentStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* (
    ::OculusStudios::GraphQL::Client::HttpRequestManager::*)(::System::Net::Http::HttpRequestMessage*)>(&::OculusStudios::GraphQL::Client::HttpRequestManager::OpenPersistentStream)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f2655c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager*>(),
                                                                                           { "OpenPersistentStream", {}, { ::i2c::type_of<::System::Net::Http::HttpRequestMessage*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::HttpRequestManager.SendAsyncReceiveByteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::HttpRequestManager::*)(::System::Net::Http::HttpRequestMessage*,
                                                                                                                      ::OculusStudios::GraphQL::Client::HttpRequestManager_ByteArrayResultCallback*)>(
    &::OculusStudios::GraphQL::Client::HttpRequestManager::SendAsyncReceiveByteArray)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5f283f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager*>(),
                            { "SendAsyncReceiveByteArray",
                              {},
                              { ::i2c::type_of<::System::Net::Http::HttpRequestMessage*>(), ::i2c::type_of<::OculusStudios::GraphQL::Client::HttpRequestManager_ByteArrayResultCallback*>() } })));
    return ___internal_method;
  }
};
constexpr ::OculusStudios::GraphQL::Client::HttpRequestManager_SessionConfig& OculusStudios::GraphQL::Client::HttpRequestManager::__cordl_internal_get_sessionConfig_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sessionConfig_;
}
constexpr ::OculusStudios::GraphQL::Client::HttpRequestManager_SessionConfig const& OculusStudios::GraphQL::Client::HttpRequestManager::__cordl_internal_get_sessionConfig_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sessionConfig_;
}
constexpr void OculusStudios::GraphQL::Client::HttpRequestManager::__cordl_internal_set_sessionConfig_(::OculusStudios::GraphQL::Client::HttpRequestManager_SessionConfig value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sessionConfig_ = value;
}
inline void OculusStudios::GraphQL::Client::HttpRequestManager::setStaticF_httpClient_(::System::Net::Http::HttpClient* value) {
  ::cordl_internals::setStaticField<::System::Net::Http::HttpClient*, "httpClient_", ::OculusStudios::GraphQL::Client::HttpRequestManager*>(std::forward<::System::Net::Http::HttpClient*>(value));
}
inline ::System::Net::Http::HttpClient* OculusStudios::GraphQL::Client::HttpRequestManager::getStaticF_httpClient_() {
  return ::cordl_internals::getStaticField<::System::Net::Http::HttpClient*, "httpClient_", ::OculusStudios::GraphQL::Client::HttpRequestManager*>();
}
inline void OculusStudios::GraphQL::Client::HttpRequestManager::setStaticF_fastFallback(::OculusStudios::GraphQL::Client::HttpRequestManager_fastFallbackState value) {
  ::cordl_internals::setStaticField<::OculusStudios::GraphQL::Client::HttpRequestManager_fastFallbackState, "fastFallback", ::OculusStudios::GraphQL::Client::HttpRequestManager*>(
      std::forward<::OculusStudios::GraphQL::Client::HttpRequestManager_fastFallbackState>(value));
}
inline ::OculusStudios::GraphQL::Client::HttpRequestManager_fastFallbackState OculusStudios::GraphQL::Client::HttpRequestManager::getStaticF_fastFallback() {
  return ::cordl_internals::getStaticField<::OculusStudios::GraphQL::Client::HttpRequestManager_fastFallbackState, "fastFallback", ::OculusStudios::GraphQL::Client::HttpRequestManager*>();
}
inline void OculusStudios::GraphQL::Client::HttpRequestManager::setStaticF_anyIPv4(::System::Net::IPEndPoint* value) {
  ::cordl_internals::setStaticField<::System::Net::IPEndPoint*, "anyIPv4", ::OculusStudios::GraphQL::Client::HttpRequestManager*>(std::forward<::System::Net::IPEndPoint*>(value));
}
inline ::System::Net::IPEndPoint* OculusStudios::GraphQL::Client::HttpRequestManager::getStaticF_anyIPv4() {
  return ::cordl_internals::getStaticField<::System::Net::IPEndPoint*, "anyIPv4", ::OculusStudios::GraphQL::Client::HttpRequestManager*>();
}
inline void OculusStudios::GraphQL::Client::HttpRequestManager::setStaticF_anyIPv6(::System::Net::IPEndPoint* value) {
  ::cordl_internals::setStaticField<::System::Net::IPEndPoint*, "anyIPv6", ::OculusStudios::GraphQL::Client::HttpRequestManager*>(std::forward<::System::Net::IPEndPoint*>(value));
}
inline ::System::Net::IPEndPoint* OculusStudios::GraphQL::Client::HttpRequestManager::getStaticF_anyIPv6() {
  return ::cordl_internals::getStaticField<::System::Net::IPEndPoint*, "anyIPv6", ::OculusStudios::GraphQL::Client::HttpRequestManager*>();
}
inline void OculusStudios::GraphQL::Client::HttpRequestManager::setStaticF_globalConfig_(::OculusStudios::GraphQL::Client::HttpRequestManager_GlobalConfig value) {
  ::cordl_internals::setStaticField<::OculusStudios::GraphQL::Client::HttpRequestManager_GlobalConfig, "globalConfig_", ::OculusStudios::GraphQL::Client::HttpRequestManager*>(
      std::forward<::OculusStudios::GraphQL::Client::HttpRequestManager_GlobalConfig>(value));
}
inline ::OculusStudios::GraphQL::Client::HttpRequestManager_GlobalConfig OculusStudios::GraphQL::Client::HttpRequestManager::getStaticF_globalConfig_() {
  return ::cordl_internals::getStaticField<::OculusStudios::GraphQL::Client::HttpRequestManager_GlobalConfig, "globalConfig_", ::OculusStudios::GraphQL::Client::HttpRequestManager*>();
}
inline ::OculusStudios::GraphQL::Client::HttpRequestManager_fastFallbackState OculusStudios::GraphQL::Client::HttpRequestManager::get_currentFastFallbackState() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager*>(), { "get_currentFastFallbackState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::OculusStudios::GraphQL::Client::HttpRequestManager_fastFallbackState>(nullptr, ___internal_method);
}
inline ::OculusStudios::GraphQL::Client::HttpRequestManager_GlobalConfig OculusStudios::GraphQL::Client::HttpRequestManager::get_globalConfig() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager*>(), { "get_globalConfig", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::OculusStudios::GraphQL::Client::HttpRequestManager_GlobalConfig>(nullptr, ___internal_method);
}
inline ::OculusStudios::GraphQL::Client::HttpRequestManager_SessionConfig OculusStudios::GraphQL::Client::HttpRequestManager::get_sessionConfig() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager*>(), { "get_sessionConfig", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::OculusStudios::GraphQL::Client::HttpRequestManager_SessionConfig>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::HttpRequestManager::CreateHttpClient() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager*>(), { "CreateHttpClient", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool OculusStudios::GraphQL::Client::HttpRequestManager::MyCertHandler(::System::Object* sender, ::System::Security::Cryptography::X509Certificates::X509Certificate* certificate,
                                                                              ::System::Security::Cryptography::X509Certificates::X509Chain* chain, ::System::Net::Security::SslPolicyErrors error) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager*>(),
                                              { "MyCertHandler",
                                                {},
                                                { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                                                  ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Chain*>(), ::i2c::type_of<::System::Net::Security::SslPolicyErrors>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sender, certificate, chain, error);
}
inline void OculusStudios::GraphQL::Client::HttpRequestManager::UpdateGlobalConfig(::OculusStudios::GraphQL::Client::HttpRequestManager_GlobalConfig config) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager*>(),
                                                           { "UpdateGlobalConfig", {}, { ::i2c::type_of<::OculusStudios::GraphQL::Client::HttpRequestManager_GlobalConfig>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, config);
}
inline void OculusStudios::GraphQL::Client::HttpRequestManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::HttpRequestManager::_ctor(::OculusStudios::GraphQL::Client::HttpRequestManager_SessionConfig config) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::OculusStudios::GraphQL::Client::HttpRequestManager_SessionConfig>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, config);
}
inline void OculusStudios::GraphQL::Client::HttpRequestManager::_ctor(::System::Net::Http::HttpMessageHandler* handler) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::Http::HttpMessageHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handler);
}
inline void OculusStudios::GraphQL::Client::HttpRequestManager::UpdateSessionConfig(::OculusStudios::GraphQL::Client::HttpRequestManager_SessionConfig config) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager*>(),
                                                           { "UpdateSessionConfig", {}, { ::i2c::type_of<::OculusStudios::GraphQL::Client::HttpRequestManager_SessionConfig>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, config);
}
inline void OculusStudios::GraphQL::Client::HttpRequestManager::ResetFastFallback() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager*>(), { "ResetFastFallback", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::HttpRequestManager::CheckFastFallbackNoWait() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager*>(), { "CheckFastFallbackNoWait", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task* OculusStudios::GraphQL::Client::HttpRequestManager::CheckFastFallbackAsync() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager*>(), { "CheckFastFallbackAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method);
}
inline ::System::Net::IPEndPoint* OculusStudios::GraphQL::Client::HttpRequestManager::BindTo(::System::Net::ServicePoint* servicePoint, ::System::Net::IPEndPoint* remoteEndPoint, int32_t retryCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager*>(),
                                              { "BindTo", {}, { ::i2c::type_of<::System::Net::ServicePoint*>(), ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IPEndPoint*>(nullptr, ___internal_method, servicePoint, remoteEndPoint, retryCount);
}
inline bool OculusStudios::GraphQL::Client::HttpRequestManager::get_fastFallbackChecked() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager*>(), { "get_fastFallbackChecked", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::HttpRequestManager::ConsiderFastFallback(::System::Uri* uri) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager*>(), { "ConsiderFastFallback", {}, { ::i2c::type_of<::System::Uri*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, uri);
}
inline ::System::Threading::Tasks::Task* OculusStudios::GraphQL::Client::HttpRequestManager::CheckAndConsiderFastFallbackAsync(::System::Uri* uri) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager*>(), { "CheckAndConsiderFastFallbackAsync", {}, { ::i2c::type_of<::System::Uri*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, uri);
}
inline ::System::Net::Http::HttpRequestMessage* OculusStudios::GraphQL::Client::HttpRequestManager::CreateRequest(::System::Net::Http::HttpMethod* method, ::System::Uri* uri) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager*>(),
                                                           { "CreateRequest", {}, { ::i2c::type_of<::System::Net::Http::HttpMethod*>(), ::i2c::type_of<::System::Uri*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Http::HttpRequestMessage*>(this, ___internal_method, method, uri);
}
inline ::System::Net::Http::HttpRequestMessage* OculusStudios::GraphQL::Client::HttpRequestManager::CreateByteArrayRequest(::System::Net::Http::HttpMethod* method, ::System::Uri* uri,
                                                                                                                           ::StringW accept, ::StringW contentType, ::ArrayW<uint8_t> content) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager*>(),
                                                                                         { "CreateByteArrayRequest",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Net::Http::HttpMethod*>(), ::i2c::type_of<::System::Uri*>(),
                                                                                             ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Http::HttpRequestMessage*>(this, ___internal_method, method, uri, accept, contentType, content);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* OculusStudios::GraphQL::Client::HttpRequestManager::SendAsync(::System::Net::Http::HttpRequestMessage* request) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager*>(), { "SendAsync", {}, { ::i2c::type_of<::System::Net::Http::HttpRequestMessage*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*>(this, ___internal_method, request);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*
OculusStudios::GraphQL::Client::HttpRequestManager::SendAsyncInternal(::System::Net::Http::HttpRequestMessage* request) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager*>(),
                                                                                         { "SendAsyncInternal", {}, { ::i2c::type_of<::System::Net::Http::HttpRequestMessage*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*>(this, ___internal_method, request);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*
OculusStudios::GraphQL::Client::HttpRequestManager::OpenPersistentStream(::System::Net::Http::HttpRequestMessage* request) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager*>(),
                                                                                         { "OpenPersistentStream", {}, { ::i2c::type_of<::System::Net::Http::HttpRequestMessage*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*>(this, ___internal_method, request);
}
inline void OculusStudios::GraphQL::Client::HttpRequestManager::SendAsyncReceiveByteArray(::System::Net::Http::HttpRequestMessage* request,
                                                                                          ::OculusStudios::GraphQL::Client::HttpRequestManager_ByteArrayResultCallback* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::HttpRequestManager*>(),
                          { "SendAsyncReceiveByteArray",
                            {},
                            { ::i2c::type_of<::System::Net::Http::HttpRequestMessage*>(), ::i2c::type_of<::OculusStudios::GraphQL::Client::HttpRequestManager_ByteArrayResultCallback*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, callback);
}
inline ::OculusStudios::GraphQL::Client::HttpRequestManager* OculusStudios::GraphQL::Client::HttpRequestManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::GraphQL::Client::HttpRequestManager*>());
}
inline ::OculusStudios::GraphQL::Client::HttpRequestManager* OculusStudios::GraphQL::Client::HttpRequestManager::New_ctor(::OculusStudios::GraphQL::Client::HttpRequestManager_SessionConfig config) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::GraphQL::Client::HttpRequestManager*>(config));
}
inline ::OculusStudios::GraphQL::Client::HttpRequestManager* OculusStudios::GraphQL::Client::HttpRequestManager::New_ctor(::System::Net::Http::HttpMessageHandler* handler) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::GraphQL::Client::HttpRequestManager*>(handler));
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::HttpRequestManager::HttpRequestManager() {}
