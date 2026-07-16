#pragma once
// IWYU pragma private; include "Mono/Net/Security/MonoTlsStream.hpp"
#include "System/Net/zzzz__WebExceptionStatus_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Net/Security/zzzz__MonoTlsStream_def.hpp"
#include "Mono/Net/Security/zzzz__MobileTlsProvider_def.hpp"
#include "Mono/Net/Security/zzzz__MonoTlsStream_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoTlsSettings_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/Security/zzzz__SslStream_def.hpp"
#include "System/Net/Sockets/zzzz__NetworkStream_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "System/Net/zzzz__HttpWebRequest_def.hpp"
#include "System/Net/zzzz__WebConnectionTunnel_def.hpp"
#include "System/Net/zzzz__WebExceptionStatus_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Mono::Net::Security::MonoTlsStream__CreateStream_d__18.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::MonoTlsStream__CreateStream_d__18::*)()>(&::Mono::Net::Security::MonoTlsStream__CreateStream_d__18::MoveNext)> {
  constexpr static std::size_t size = 0x724;
  constexpr static std::size_t addrs = 0x5fd8d24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoTlsStream__CreateStream_d__18>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoTlsStream__CreateStream_d__18.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::MonoTlsStream__CreateStream_d__18::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Mono::Net::Security::MonoTlsStream__CreateStream_d__18::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5fd9448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoTlsStream__CreateStream_d__18>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Mono::Net::Security::MonoTlsStream__CreateStream_d__18::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoTlsStream__CreateStream_d__18>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Mono::Net::Security::MonoTlsStream__CreateStream_d__18::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoTlsStream__CreateStream_d__18>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Mono::Net::Security::MonoTlsStream__CreateStream_d__18::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Mono::Net::Security::MonoTlsStream__CreateStream_d__18::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Mono::Net::Security::MonoTlsStream*", modifiers: "", def_value: Some("{}") }, CppParam { name: "tunnel", ty: "::System::Net::WebConnectionTunnel*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_socket_5__2", ty: "::System::Net::Sockets::Socket*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Net::Security::MonoTlsStream__CreateStream_d__18::MonoTlsStream__CreateStream_d__18(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*> __t__builder, ::Mono::Net::Security::MonoTlsStream* __4__this,
    ::System::Net::WebConnectionTunnel* tunnel, ::System::Threading::CancellationToken cancellationToken, ::System::Net::Sockets::Socket* _socket_5__2,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->tunnel = tunnel;
  this->cancellationToken = cancellationToken;
  this->_socket_5__2 = _socket_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Mono::Net::Security::MonoTlsStream__CreateStream_d__18::MonoTlsStream__CreateStream_d__18() {}
//  Writing Method size for method: ::Mono::Net::Security::MonoTlsStream.get_Request
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::HttpWebRequest* (::Mono::Net::Security::MonoTlsStream::*)()>(&::Mono::Net::Security::MonoTlsStream::get_Request)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd8988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoTlsStream*>(), { "get_Request", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoTlsStream.get_ExceptionStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebExceptionStatus (::Mono::Net::Security::MonoTlsStream::*)()>(&::Mono::Net::Security::MonoTlsStream::get_ExceptionStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd8990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoTlsStream*>(), { "get_ExceptionStatus", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoTlsStream.get_CertificateValidationFailed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Net::Security::MonoTlsStream::*)()>(&::Mono::Net::Security::MonoTlsStream::get_CertificateValidationFailed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd8998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoTlsStream*>(), { "get_CertificateValidationFailed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoTlsStream.set_CertificateValidationFailed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::MonoTlsStream::*)(bool)>(&::Mono::Net::Security::MonoTlsStream::set_CertificateValidationFailed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd89a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoTlsStream*>(), { "set_CertificateValidationFailed", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoTlsStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::MonoTlsStream::*)(::System::Net::HttpWebRequest*, ::System::Net::Sockets::NetworkStream*)>(
    &::Mono::Net::Security::MonoTlsStream::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5fd89a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoTlsStream*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Net::HttpWebRequest*>(), ::i2c::type_of<::System::Net::Sockets::NetworkStream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoTlsStream.CreateStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::IO::Stream*>* (
    ::Mono::Net::Security::MonoTlsStream::*)(::System::Net::WebConnectionTunnel*, ::System::Threading::CancellationToken)>(&::Mono::Net::Security::MonoTlsStream::CreateStream)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5fd8b54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoTlsStream*>(),
                                                { "CreateStream", {}, { ::i2c::type_of<::System::Net::WebConnectionTunnel*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoTlsStream.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::MonoTlsStream::*)()>(&::Mono::Net::Security::MonoTlsStream::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fd8c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoTlsStream*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoTlsStream.CloseSslStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::MonoTlsStream::*)()>(&::Mono::Net::Security::MonoTlsStream::CloseSslStream)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5fd8c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoTlsStream*>(), { "CloseSslStream", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Mono::Net::Security::MobileTlsProvider*& Mono::Net::Security::MonoTlsStream::__cordl_internal_get_provider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___provider;
}
constexpr ::Mono::Net::Security::MobileTlsProvider* const& Mono::Net::Security::MonoTlsStream::__cordl_internal_get_provider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___provider;
}
constexpr void Mono::Net::Security::MonoTlsStream::__cordl_internal_set_provider(::Mono::Net::Security::MobileTlsProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___provider = value;
}
constexpr ::System::Net::Sockets::NetworkStream*& Mono::Net::Security::MonoTlsStream::__cordl_internal_get_networkStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___networkStream;
}
constexpr ::System::Net::Sockets::NetworkStream* const& Mono::Net::Security::MonoTlsStream::__cordl_internal_get_networkStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___networkStream;
}
constexpr void Mono::Net::Security::MonoTlsStream::__cordl_internal_set_networkStream(::System::Net::Sockets::NetworkStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___networkStream = value;
}
constexpr ::System::Net::HttpWebRequest*& Mono::Net::Security::MonoTlsStream::__cordl_internal_get_request() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
constexpr ::System::Net::HttpWebRequest* const& Mono::Net::Security::MonoTlsStream::__cordl_internal_get_request() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
constexpr void Mono::Net::Security::MonoTlsStream::__cordl_internal_set_request(::System::Net::HttpWebRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___request = value;
}
constexpr ::Mono::Security::Interface::MonoTlsSettings*& Mono::Net::Security::MonoTlsStream::__cordl_internal_get_settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___settings;
}
constexpr ::Mono::Security::Interface::MonoTlsSettings* const& Mono::Net::Security::MonoTlsStream::__cordl_internal_get_settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___settings;
}
constexpr void Mono::Net::Security::MonoTlsStream::__cordl_internal_set_settings(::Mono::Security::Interface::MonoTlsSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___settings = value;
}
constexpr ::System::Net::Security::SslStream*& Mono::Net::Security::MonoTlsStream::__cordl_internal_get_sslStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sslStream;
}
constexpr ::System::Net::Security::SslStream* const& Mono::Net::Security::MonoTlsStream::__cordl_internal_get_sslStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sslStream;
}
constexpr void Mono::Net::Security::MonoTlsStream::__cordl_internal_set_sslStream(::System::Net::Security::SslStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sslStream = value;
}
constexpr ::System::Object*& Mono::Net::Security::MonoTlsStream::__cordl_internal_get_sslStreamLock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sslStreamLock;
}
constexpr ::System::Object* const& Mono::Net::Security::MonoTlsStream::__cordl_internal_get_sslStreamLock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sslStreamLock;
}
constexpr void Mono::Net::Security::MonoTlsStream::__cordl_internal_set_sslStreamLock(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sslStreamLock = value;
}
constexpr ::System::Net::WebExceptionStatus& Mono::Net::Security::MonoTlsStream::__cordl_internal_get_status() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___status;
}
constexpr ::System::Net::WebExceptionStatus const& Mono::Net::Security::MonoTlsStream::__cordl_internal_get_status() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___status;
}
constexpr void Mono::Net::Security::MonoTlsStream::__cordl_internal_set_status(::System::Net::WebExceptionStatus value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___status = value;
}
constexpr bool& Mono::Net::Security::MonoTlsStream::__cordl_internal_get__CertificateValidationFailed_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CertificateValidationFailed_k__BackingField;
}
constexpr bool const& Mono::Net::Security::MonoTlsStream::__cordl_internal_get__CertificateValidationFailed_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CertificateValidationFailed_k__BackingField;
}
constexpr void Mono::Net::Security::MonoTlsStream::__cordl_internal_set__CertificateValidationFailed_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CertificateValidationFailed_k__BackingField = value;
}
inline ::System::Net::HttpWebRequest* Mono::Net::Security::MonoTlsStream::get_Request() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoTlsStream*>(), { "get_Request", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::HttpWebRequest*>(this, ___internal_method);
}
inline ::System::Net::WebExceptionStatus Mono::Net::Security::MonoTlsStream::get_ExceptionStatus() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoTlsStream*>(), { "get_ExceptionStatus", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebExceptionStatus>(this, ___internal_method);
}
inline bool Mono::Net::Security::MonoTlsStream::get_CertificateValidationFailed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoTlsStream*>(), { "get_CertificateValidationFailed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mono::Net::Security::MonoTlsStream::set_CertificateValidationFailed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoTlsStream*>(), { "set_CertificateValidationFailed", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mono::Net::Security::MonoTlsStream::_ctor(::System::Net::HttpWebRequest* request, ::System::Net::Sockets::NetworkStream* networkStream) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoTlsStream*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Net::HttpWebRequest*>(), ::i2c::type_of<::System::Net::Sockets::NetworkStream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, networkStream);
}
inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* Mono::Net::Security::MonoTlsStream::CreateStream(::System::Net::WebConnectionTunnel* tunnel,
                                                                                                                   ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoTlsStream*>(),
                                              { "CreateStream", {}, { ::i2c::type_of<::System::Net::WebConnectionTunnel*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::IO::Stream*>*>(this, ___internal_method, tunnel, cancellationToken);
}
inline void Mono::Net::Security::MonoTlsStream::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoTlsStream*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Net::Security::MonoTlsStream::CloseSslStream() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoTlsStream*>(), { "CloseSslStream", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mono::Net::Security::MonoTlsStream* Mono::Net::Security::MonoTlsStream::New_ctor(::System::Net::HttpWebRequest* request, ::System::Net::Sockets::NetworkStream* networkStream) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Net::Security::MonoTlsStream*>(request, networkStream));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Mono::Net::Security::MonoTlsStream::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Mono::Net::Security::MonoTlsStream::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Mono::Net::Security::MonoTlsStream::MonoTlsStream() {}
