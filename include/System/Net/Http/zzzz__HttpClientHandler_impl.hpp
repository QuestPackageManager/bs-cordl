#pragma once
// IWYU pragma private; include "System/Net/Http/HttpClientHandler.hpp"
#include "System/Net/Http/zzzz__ClientCertificateOption_impl.hpp"
#include "System/Net/Http/zzzz__HttpMessageHandler_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Http/zzzz__HttpClientHandler_def.hpp"
#include "System/Net/Http/zzzz__ClientCertificateOption_def.hpp"
#include "System/Net/Http/zzzz__HttpClientHandler_def.hpp"
#include "System/Net/Http/zzzz__HttpRequestMessage_def.hpp"
#include "System/Net/Http/zzzz__HttpResponseMessage_def.hpp"
#include "System/Net/Http/zzzz__IMonoHttpClientHandler_def.hpp"
#include "System/Net/Security/zzzz__LocalCertificateSelectionCallback_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Net::Http::HttpClientHandler___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::HttpClientHandler___c::*)()>(&::System::Net::Http::HttpClientHandler___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60d179c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClientHandler___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClientHandler___c._set_ClientCertificateOptions_b__23_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate* (
    ::System::Net::Http::HttpClientHandler___c::*)(::System::Object*, ::StringW, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*,
                                                   ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::ArrayW<::StringW>)>(
    &::System::Net::Http::HttpClientHandler___c::_set_ClientCertificateOptions_b__23_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60d17a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClientHandler___c*>(),
                            { "<set_ClientCertificateOptions>b__23_1",
                              {},
                              { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>(),
                                ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
inline void System::Net::Http::HttpClientHandler___c::setStaticF___9(::System::Net::Http::HttpClientHandler___c* value) {
  ::cordl_internals::setStaticField<::System::Net::Http::HttpClientHandler___c*, "<>9", ::System::Net::Http::HttpClientHandler___c*>(std::forward<::System::Net::Http::HttpClientHandler___c*>(value));
}
inline ::System::Net::Http::HttpClientHandler___c* System::Net::Http::HttpClientHandler___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Net::Http::HttpClientHandler___c*, "<>9", ::System::Net::Http::HttpClientHandler___c*>();
}
inline void System::Net::Http::HttpClientHandler___c::setStaticF___9__23_1(::System::Net::Security::LocalCertificateSelectionCallback* value) {
  ::cordl_internals::setStaticField<::System::Net::Security::LocalCertificateSelectionCallback*, "<>9__23_1", ::System::Net::Http::HttpClientHandler___c*>(
      std::forward<::System::Net::Security::LocalCertificateSelectionCallback*>(value));
}
inline ::System::Net::Security::LocalCertificateSelectionCallback* System::Net::Http::HttpClientHandler___c::getStaticF___9__23_1() {
  return ::cordl_internals::getStaticField<::System::Net::Security::LocalCertificateSelectionCallback*, "<>9__23_1", ::System::Net::Http::HttpClientHandler___c*>();
}
inline void System::Net::Http::HttpClientHandler___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClientHandler___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate* System::Net::Http::HttpClientHandler___c::_set_ClientCertificateOptions_b__23_1(
    ::System::Object* sender, ::StringW targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* localCertificates,
    ::System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate, ::ArrayW<::StringW> acceptableIssuers) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClientHandler___c*>(),
                          { "<set_ClientCertificateOptions>b__23_1",
                            {},
                            { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>(),
                              ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate*>(this, ___internal_method, sender, targetHost, localCertificates, remoteCertificate,
                                                                                                                   acceptableIssuers);
}
inline ::System::Net::Http::HttpClientHandler___c* System::Net::Http::HttpClientHandler___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::HttpClientHandler___c*>());
}
// Ctor Parameters []
constexpr ::System::Net::Http::HttpClientHandler___c::HttpClientHandler___c() {}
//  Writing Method size for method: ::System::Net::Http::HttpClientHandler.CreateDefaultHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Http::IMonoHttpClientHandler* (*)()>(&::System::Net::Http::HttpClientHandler::CreateDefaultHandler)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x60d0bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClientHandler*>(), { "CreateDefaultHandler", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClientHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::HttpClientHandler::*)()>(&::System::Net::Http::HttpClientHandler::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x60d0ddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClientHandler*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClientHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::HttpClientHandler::*)(::System::Net::Http::IMonoHttpClientHandler*)>(
    &::System::Net::Http::HttpClientHandler::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x60d0e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClientHandler*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::Http::IMonoHttpClientHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClientHandler.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::HttpClientHandler::*)(bool)>(&::System::Net::Http::HttpClientHandler::Dispose)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x60d109c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClientHandler*>(), { ::i2c::class_of<::System::Net::Http::HttpClientHandler*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClientHandler.ThrowForModifiedManagedSslOptionsIfStarted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::HttpClientHandler::*)()>(&::System::Net::Http::HttpClientHandler::ThrowForModifiedManagedSslOptionsIfStarted)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x60d1164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClientHandler*>(), { "ThrowForModifiedManagedSslOptionsIfStarted", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClientHandler.get_ClientCertificateOptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Http::ClientCertificateOption (::System::Net::Http::HttpClientHandler::*)()>(
    &::System::Net::Http::HttpClientHandler::get_ClientCertificateOptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60d126c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClientHandler*>(), { "get_ClientCertificateOptions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClientHandler.set_ClientCertificateOptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::HttpClientHandler::*)(::System::Net::Http::ClientCertificateOption)>(
    &::System::Net::Http::HttpClientHandler::set_ClientCertificateOptions)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x60d0e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClientHandler*>(), { "set_ClientCertificateOptions", {}, { ::i2c::type_of<::System::Net::Http::ClientCertificateOption>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClientHandler.get_ClientCertificates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateCollection* (::System::Net::Http::HttpClientHandler::*)()>(
    &::System::Net::Http::HttpClientHandler::get_ClientCertificates)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x60d1274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClientHandler*>(), { "get_ClientCertificates", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClientHandler.set_UseProxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::HttpClientHandler::*)(bool)>(&::System::Net::Http::HttpClientHandler::set_UseProxy)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x60d144c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClientHandler*>(), { "set_UseProxy", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClientHandler.set_AllowAutoRedirect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::HttpClientHandler::*)(bool)>(&::System::Net::Http::HttpClientHandler::set_AllowAutoRedirect)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x60d1504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClientHandler*>(), { "set_AllowAutoRedirect", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClientHandler.SetWebRequestTimeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::HttpClientHandler::*)(::System::TimeSpan)>(&::System::Net::Http::HttpClientHandler::SetWebRequestTimeout)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x60d15bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClientHandler*>(), { "SetWebRequestTimeout", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClientHandler.SendAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* (
    ::System::Net::Http::HttpClientHandler::*)(::System::Net::Http::HttpRequestMessage*, ::System::Threading::CancellationToken)>(&::System::Net::Http::HttpClientHandler::SendAsync)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x60d1674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClientHandler*>(), { ::i2c::class_of<::System::Net::Http::HttpClientHandler*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClientHandler._set_ClientCertificateOptions_b__23_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate* (
    ::System::Net::Http::HttpClientHandler::*)(::System::Object*, ::StringW, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*,
                                               ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::ArrayW<::StringW>)>(
    &::System::Net::Http::HttpClientHandler::_set_ClientCertificateOptions_b__23_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x60d1734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClientHandler*>(),
                            { "<set_ClientCertificateOptions>b__23_0",
                              {},
                              { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>(),
                                ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Net::Http::IMonoHttpClientHandler*& System::Net::Http::HttpClientHandler::__cordl_internal_get__delegatingHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delegatingHandler;
}
constexpr ::System::Net::Http::IMonoHttpClientHandler* const& System::Net::Http::HttpClientHandler::__cordl_internal_get__delegatingHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delegatingHandler;
}
constexpr void System::Net::Http::HttpClientHandler::__cordl_internal_set__delegatingHandler(::System::Net::Http::IMonoHttpClientHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____delegatingHandler = value;
}
constexpr ::System::Net::Http::ClientCertificateOption& System::Net::Http::HttpClientHandler::__cordl_internal_get__clientCertificateOptions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clientCertificateOptions;
}
constexpr ::System::Net::Http::ClientCertificateOption const& System::Net::Http::HttpClientHandler::__cordl_internal_get__clientCertificateOptions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clientCertificateOptions;
}
constexpr void System::Net::Http::HttpClientHandler::__cordl_internal_set__clientCertificateOptions(::System::Net::Http::ClientCertificateOption value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clientCertificateOptions = value;
}
inline ::System::Net::Http::IMonoHttpClientHandler* System::Net::Http::HttpClientHandler::CreateDefaultHandler() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClientHandler*>(), { "CreateDefaultHandler", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Http::IMonoHttpClientHandler*>(nullptr, ___internal_method);
}
inline void System::Net::Http::HttpClientHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClientHandler*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::Http::HttpClientHandler::_ctor(::System::Net::Http::IMonoHttpClientHandler* handler) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClientHandler*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::Http::IMonoHttpClientHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handler);
}
inline void System::Net::Http::HttpClientHandler::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::HttpClientHandler*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void System::Net::Http::HttpClientHandler::ThrowForModifiedManagedSslOptionsIfStarted() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClientHandler*>(), { "ThrowForModifiedManagedSslOptionsIfStarted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::Http::ClientCertificateOption System::Net::Http::HttpClientHandler::get_ClientCertificateOptions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClientHandler*>(), { "get_ClientCertificateOptions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Http::ClientCertificateOption>(this, ___internal_method);
}
inline void System::Net::Http::HttpClientHandler::set_ClientCertificateOptions(::System::Net::Http::ClientCertificateOption value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClientHandler*>(),
                                                                                         { "set_ClientCertificateOptions", {}, { ::i2c::type_of<::System::Net::Http::ClientCertificateOption>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* System::Net::Http::HttpClientHandler::get_ClientCertificates() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClientHandler*>(), { "get_ClientCertificates", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>(this, ___internal_method);
}
inline void System::Net::Http::HttpClientHandler::set_UseProxy(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClientHandler*>(), { "set_UseProxy", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::Http::HttpClientHandler::set_AllowAutoRedirect(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClientHandler*>(), { "set_AllowAutoRedirect", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::Http::HttpClientHandler::SetWebRequestTimeout(::System::TimeSpan timeout) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClientHandler*>(), { "SetWebRequestTimeout", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeout);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* System::Net::Http::HttpClientHandler::SendAsync(::System::Net::Http::HttpRequestMessage* request,
                                                                                                                                      ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::HttpClientHandler*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*>(this, ___internal_method, request, cancellationToken);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate* System::Net::Http::HttpClientHandler::_set_ClientCertificateOptions_b__23_0(
    ::System::Object* sender, ::StringW targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* localCertificates,
    ::System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate, ::ArrayW<::StringW> acceptableIssuers) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpClientHandler*>(),
                          { "<set_ClientCertificateOptions>b__23_0",
                            {},
                            { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>(),
                              ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate*>(this, ___internal_method, sender, targetHost, localCertificates, remoteCertificate,
                                                                                                                   acceptableIssuers);
}
inline ::System::Net::Http::HttpClientHandler* System::Net::Http::HttpClientHandler::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::HttpClientHandler*>());
}
inline ::System::Net::Http::HttpClientHandler* System::Net::Http::HttpClientHandler::New_ctor(::System::Net::Http::IMonoHttpClientHandler* handler) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::HttpClientHandler*>(handler));
}
// Ctor Parameters []
constexpr ::System::Net::Http::HttpClientHandler::HttpClientHandler() {}
