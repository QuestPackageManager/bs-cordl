#pragma once
#include "System/IO/zzzz__Stream_impl.hpp"
#include "System/Net/zzzz__WebExceptionStatus_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Net/Security/zzzz__MonoTlsStream_def.hpp"
#include "Mono/Net/Security/zzzz__MobileTlsProvider_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoTlsSettings_def.hpp"
#include "System/Net/zzzz__WebExceptionStatus_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "Mono/Net/Security/zzzz__MonoTlsStream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/Security/zzzz__SslStream_def.hpp"
#include "System/Net/Sockets/zzzz__NetworkStream_def.hpp"
#include "System/Net/zzzz__WebConnectionTunnel_def.hpp"
#include "System/Net/zzzz__HttpWebRequest_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::Mono::Net::Security::__MonoTlsStream___CreateStream_d__18.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::__MonoTlsStream___CreateStream_d__18::*)()>(
    &::Mono::Net::Security::__MonoTlsStream___CreateStream_d__18::MoveNext)> {
  constexpr static std::size_t size = 0x6a4;
  constexpr static std::size_t addrs = 0x2825634;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::__MonoTlsStream___CreateStream_d__18>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::__MonoTlsStream___CreateStream_d__18.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::__MonoTlsStream___CreateStream_d__18::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Mono::Net::Security::__MonoTlsStream___CreateStream_d__18::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2825cd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::__MonoTlsStream___CreateStream_d__18>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Mono::Net::Security::__MonoTlsStream___CreateStream_d__18::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void Mono::Net::Security::__MonoTlsStream___CreateStream_d__18::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::__MonoTlsStream___CreateStream_d__18>::get(),
                                                                             "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Mono::Net::Security::__MonoTlsStream___CreateStream_d__18::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::__MonoTlsStream___CreateStream_d__18>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Mono::Net::Security::MonoTlsStream*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "tunnel", ty: "::System::Net::WebConnectionTunnel*", modifiers: "", def_value: Some("nullptr")
// }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_socket_5__2", ty:
// "::System::Net::Sockets::Socket*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Net::Security::__MonoTlsStream___CreateStream_d__18::__MonoTlsStream___CreateStream_d__18(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*> __t__builder, ::Mono::Net::Security::MonoTlsStream* __4__this,
    ::System::Net::WebConnectionTunnel* tunnel, ::System::Threading::CancellationToken cancellationToken, ::System::Net::Sockets::Socket* _socket_5__2,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->tunnel = tunnel;
  this->cancellationToken = cancellationToken;
  this->_socket_5__2 = _socket_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Mono::Net::Security::__MonoTlsStream___CreateStream_d__18::__MonoTlsStream___CreateStream_d__18() {}
//  Writing Method size for method: ::Mono::Net::Security::MonoTlsStream.get_Request
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::HttpWebRequest* (::Mono::Net::Security::MonoTlsStream::*)()>(
    &::Mono::Net::Security::MonoTlsStream::get_Request)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2825360;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoTlsStream*>::get(), "get_Request",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoTlsStream.get_ExceptionStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebExceptionStatus (::Mono::Net::Security::MonoTlsStream::*)()>(
    &::Mono::Net::Security::MonoTlsStream::get_ExceptionStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2825368;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoTlsStream*>::get(),
                                                                               "get_ExceptionStatus", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoTlsStream.get_CertificateValidationFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Net::Security::MonoTlsStream::*)()>(
    &::Mono::Net::Security::MonoTlsStream::get_CertificateValidationFailed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2825370;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoTlsStream*>::get(),
                                                                               "get_CertificateValidationFailed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoTlsStream.set_CertificateValidationFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MonoTlsStream::*)(bool)>(
    &::Mono::Net::Security::MonoTlsStream::set_CertificateValidationFailed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2825378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoTlsStream*>::get(), "set_CertificateValidationFailed",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoTlsStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Mono::Net::Security::MonoTlsStream::*)(::System::Net::HttpWebRequest*, ::System::Net::Sockets::NetworkStream*)>(&::Mono::Net::Security::MonoTlsStream::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2825384;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoTlsStream*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpWebRequest*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::NetworkStream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoTlsStream.CreateStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::IO::Stream*>* (
    ::Mono::Net::Security::MonoTlsStream::*)(::System::Net::WebConnectionTunnel*, ::System::Threading::CancellationToken)>(&::Mono::Net::Security::MonoTlsStream::CreateStream)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2825458;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoTlsStream*>::get(), "CreateStream", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebConnectionTunnel*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoTlsStream.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MonoTlsStream::*)()>(&::Mono::Net::Security::MonoTlsStream::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x282555c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoTlsStream*>::get(), "Dispose",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoTlsStream.CloseSslStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MonoTlsStream::*)()>(&::Mono::Net::Security::MonoTlsStream::CloseSslStream)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2825560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoTlsStream*>::get(), "CloseSslStream",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr Mono::Net::Security::MonoTlsStream::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::Mono::Net::Security::MobileTlsProvider*& Mono::Net::Security::MonoTlsStream::__get_provider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___provider;
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Net::Security::MobileTlsProvider*> const& Mono::Net::Security::MonoTlsStream::__get_provider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___provider;
}
constexpr void Mono::Net::Security::MonoTlsStream::__set_provider(::Mono::Net::Security::MobileTlsProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___provider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::Sockets::NetworkStream*& Mono::Net::Security::MonoTlsStream::__get_networkStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___networkStream;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::NetworkStream*> const& Mono::Net::Security::MonoTlsStream::__get_networkStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___networkStream;
}
constexpr void Mono::Net::Security::MonoTlsStream::__set_networkStream(::System::Net::Sockets::NetworkStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___networkStream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::HttpWebRequest*& Mono::Net::Security::MonoTlsStream::__get_request() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___request;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::HttpWebRequest*> const& Mono::Net::Security::MonoTlsStream::__get_request() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___request;
}
constexpr void Mono::Net::Security::MonoTlsStream::__set_request(::System::Net::HttpWebRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___request)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Security::Interface::MonoTlsSettings*& Mono::Net::Security::MonoTlsStream::__get_settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___settings;
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Security::Interface::MonoTlsSettings*> const& Mono::Net::Security::MonoTlsStream::__get_settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___settings;
}
constexpr void Mono::Net::Security::MonoTlsStream::__set_settings(::Mono::Security::Interface::MonoTlsSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___settings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::Security::SslStream*& Mono::Net::Security::MonoTlsStream::__get_sslStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___sslStream;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Security::SslStream*> const& Mono::Net::Security::MonoTlsStream::__get_sslStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___sslStream;
}
constexpr void Mono::Net::Security::MonoTlsStream::__set_sslStream(::System::Net::Security::SslStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sslStream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& Mono::Net::Security::MonoTlsStream::__get_sslStreamLock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___sslStreamLock;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& Mono::Net::Security::MonoTlsStream::__get_sslStreamLock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___sslStreamLock;
}
constexpr void Mono::Net::Security::MonoTlsStream::__set_sslStreamLock(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sslStreamLock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::WebExceptionStatus& Mono::Net::Security::MonoTlsStream::__get_status() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___status;
}
constexpr ::System::Net::WebExceptionStatus const& Mono::Net::Security::MonoTlsStream::__get_status() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___status;
}
constexpr void Mono::Net::Security::MonoTlsStream::__set_status(::System::Net::WebExceptionStatus value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___status = value;
}
constexpr bool& Mono::Net::Security::MonoTlsStream::__get__CertificateValidationFailed_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____CertificateValidationFailed_k__BackingField;
}
constexpr bool const& Mono::Net::Security::MonoTlsStream::__get__CertificateValidationFailed_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____CertificateValidationFailed_k__BackingField;
}
constexpr void Mono::Net::Security::MonoTlsStream::__set__CertificateValidationFailed_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____CertificateValidationFailed_k__BackingField = value;
}
inline ::System::Net::HttpWebRequest* Mono::Net::Security::MonoTlsStream::get_Request() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoTlsStream*>::get(), "get_Request",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::HttpWebRequest*, false>(this, ___internal_method);
}
inline ::System::Net::WebExceptionStatus Mono::Net::Security::MonoTlsStream::get_ExceptionStatus() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoTlsStream*>::get(),
                                                                             "get_ExceptionStatus", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebExceptionStatus, false>(this, ___internal_method);
}
inline bool Mono::Net::Security::MonoTlsStream::get_CertificateValidationFailed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoTlsStream*>::get(),
                                                                             "get_CertificateValidationFailed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Mono::Net::Security::MonoTlsStream::set_CertificateValidationFailed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoTlsStream*>::get(), "set_CertificateValidationFailed",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Mono::Net::Security::MonoTlsStream* Mono::Net::Security::MonoTlsStream::New_ctor(::System::Net::HttpWebRequest* request, ::System::Net::Sockets::NetworkStream* networkStream) {
  return THROW_UNLESS(::il2cpp_utils::New<::Mono::Net::Security::MonoTlsStream*>(request, networkStream));
}
inline void Mono::Net::Security::MonoTlsStream::_ctor(::System::Net::HttpWebRequest* request, ::System::Net::Sockets::NetworkStream* networkStream) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoTlsStream*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpWebRequest*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::NetworkStream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, request, networkStream);
}
inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* Mono::Net::Security::MonoTlsStream::CreateStream(::System::Net::WebConnectionTunnel* tunnel,
                                                                                                                   ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoTlsStream*>::get(), "CreateStream", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebConnectionTunnel*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::IO::Stream*>*, false>(this, ___internal_method, tunnel, cancellationToken);
}
inline void Mono::Net::Security::MonoTlsStream::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoTlsStream*>::get(), "Dispose",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Mono::Net::Security::MonoTlsStream::CloseSslStream() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoTlsStream*>::get(), "CloseSslStream",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Mono::Net::Security::MonoTlsStream::MonoTlsStream() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
