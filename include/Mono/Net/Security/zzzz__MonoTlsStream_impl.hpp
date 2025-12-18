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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MonoTlsStream__CreateStream_d__18::*)()>(
    &::Mono::Net::Security::MonoTlsStream__CreateStream_d__18::MoveNext)> {
  constexpr static std::size_t size = 0x724;
  constexpr static std::size_t addrs = 0x5e299e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoTlsStream__CreateStream_d__18>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoTlsStream__CreateStream_d__18.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MonoTlsStream__CreateStream_d__18::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Mono::Net::Security::MonoTlsStream__CreateStream_d__18::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e2a108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoTlsStream__CreateStream_d__18>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void Mono::Net::Security::MonoTlsStream__CreateStream_d__18::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoTlsStream__CreateStream_d__18>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Mono::Net::Security::MonoTlsStream__CreateStream_d__18::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoTlsStream__CreateStream_d__18>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Mono::Net::Security::MonoTlsStream__CreateStream_d__18::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Mono::Net::Security::MonoTlsStream__CreateStream_d__18::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::HttpWebRequest* (::Mono::Net::Security::MonoTlsStream::*)()>(
    &::Mono::Net::Security::MonoTlsStream::get_Request)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e29648;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoTlsStream*>::get(), "get_Request",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoTlsStream.get_ExceptionStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebExceptionStatus (::Mono::Net::Security::MonoTlsStream::*)()>(
    &::Mono::Net::Security::MonoTlsStream::get_ExceptionStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e29650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoTlsStream*>::get(),
                                                                               "get_ExceptionStatus", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoTlsStream.get_CertificateValidationFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Net::Security::MonoTlsStream::*)()>(
    &::Mono::Net::Security::MonoTlsStream::get_CertificateValidationFailed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e29658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoTlsStream*>::get(), "get_CertificateValidationFailed",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoTlsStream.set_CertificateValidationFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MonoTlsStream::*)(bool)>(
    &::Mono::Net::Security::MonoTlsStream::set_CertificateValidationFailed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e29660;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoTlsStream*>::get(), "set_CertificateValidationFailed",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoTlsStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Mono::Net::Security::MonoTlsStream::*)(::System::Net::HttpWebRequest*, ::System::Net::Sockets::NetworkStream*)>(&::Mono::Net::Security::MonoTlsStream::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5e29668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoTlsStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpWebRequest*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::NetworkStream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoTlsStream.CreateStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::IO::Stream*>* (
    ::Mono::Net::Security::MonoTlsStream::*)(::System::Net::WebConnectionTunnel*, ::System::Threading::CancellationToken)>(&::Mono::Net::Security::MonoTlsStream::CreateStream)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5e29814;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoTlsStream*>::get(), "CreateStream", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebConnectionTunnel*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoTlsStream.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MonoTlsStream::*)()>(&::Mono::Net::Security::MonoTlsStream::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e2990c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoTlsStream*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoTlsStream.CloseSslStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MonoTlsStream::*)()>(&::Mono::Net::Security::MonoTlsStream::CloseSslStream)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5e29910;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoTlsStream*>::get(), "CloseSslStream",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___provider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___networkStream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___request)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___settings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sslStream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sslStreamLock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoTlsStream*>::get(), "get_Request",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::HttpWebRequest*, false>(this, ___internal_method);
}
inline ::System::Net::WebExceptionStatus Mono::Net::Security::MonoTlsStream::get_ExceptionStatus() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoTlsStream*>::get(),
                                                                             "get_ExceptionStatus", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebExceptionStatus, false>(this, ___internal_method);
}
inline bool Mono::Net::Security::MonoTlsStream::get_CertificateValidationFailed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoTlsStream*>::get(),
                                                                             "get_CertificateValidationFailed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Mono::Net::Security::MonoTlsStream::set_CertificateValidationFailed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoTlsStream*>::get(), "set_CertificateValidationFailed",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Mono::Net::Security::MonoTlsStream::_ctor(::System::Net::HttpWebRequest* request, ::System::Net::Sockets::NetworkStream* networkStream) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoTlsStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpWebRequest*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::NetworkStream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, request, networkStream);
}
inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* Mono::Net::Security::MonoTlsStream::CreateStream(::System::Net::WebConnectionTunnel* tunnel,
                                                                                                                   ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoTlsStream*>::get(), "CreateStream", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebConnectionTunnel*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::IO::Stream*>*, false>(this, ___internal_method, tunnel, cancellationToken);
}
inline void Mono::Net::Security::MonoTlsStream::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoTlsStream*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Mono::Net::Security::MonoTlsStream::CloseSslStream() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoTlsStream*>::get(), "CloseSslStream",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Mono::Net::Security::MonoTlsStream* Mono::Net::Security::MonoTlsStream::New_ctor(::System::Net::HttpWebRequest* request, ::System::Net::Sockets::NetworkStream* networkStream) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Net::Security::MonoTlsStream*>(request, networkStream));
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
