#pragma once
// IWYU pragma private; include "System\Net\ServerCertValidationCallback.hpp"
#include "System/Net/Security/zzzz__SslPolicyErrors_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__ServerCertValidationCallback_def.hpp"
#include "System/Net/Security/zzzz__RemoteCertificateValidationCallback_def.hpp"
#include "System/Net/Security/zzzz__SslPolicyErrors_def.hpp"
#include "System/Net/zzzz__ServerCertValidationCallback_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Chain_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::ServerCertValidationCallback_CallbackContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ServerCertValidationCallback_CallbackContext::*)(
    ::System::Object*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors)>(
    &::System::Net::ServerCertValidationCallback_CallbackContext::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6427284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServerCertValidationCallback_CallbackContext*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                                                    ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Chain*>(), ::i2c::type_of<::System::Net::Security::SslPolicyErrors>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::Net::ServerCertValidationCallback_CallbackContext::__cordl_internal_get_request() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
constexpr ::System::Object* const& System::Net::ServerCertValidationCallback_CallbackContext::__cordl_internal_get_request() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
constexpr void System::Net::ServerCertValidationCallback_CallbackContext::__cordl_internal_set_request(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___request = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate*& System::Net::ServerCertValidationCallback_CallbackContext::__cordl_internal_get_certificate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certificate;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate* const& System::Net::ServerCertValidationCallback_CallbackContext::__cordl_internal_get_certificate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certificate;
}
constexpr void System::Net::ServerCertValidationCallback_CallbackContext::__cordl_internal_set_certificate(::System::Security::Cryptography::X509Certificates::X509Certificate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certificate = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Chain*& System::Net::ServerCertValidationCallback_CallbackContext::__cordl_internal_get_chain() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chain;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Chain* const& System::Net::ServerCertValidationCallback_CallbackContext::__cordl_internal_get_chain() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chain;
}
constexpr void System::Net::ServerCertValidationCallback_CallbackContext::__cordl_internal_set_chain(::System::Security::Cryptography::X509Certificates::X509Chain* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chain = value;
}
constexpr ::System::Net::Security::SslPolicyErrors& System::Net::ServerCertValidationCallback_CallbackContext::__cordl_internal_get_sslPolicyErrors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sslPolicyErrors;
}
constexpr ::System::Net::Security::SslPolicyErrors const& System::Net::ServerCertValidationCallback_CallbackContext::__cordl_internal_get_sslPolicyErrors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sslPolicyErrors;
}
constexpr void System::Net::ServerCertValidationCallback_CallbackContext::__cordl_internal_set_sslPolicyErrors(::System::Net::Security::SslPolicyErrors value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sslPolicyErrors = value;
}
constexpr bool& System::Net::ServerCertValidationCallback_CallbackContext::__cordl_internal_get_result() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___result;
}
constexpr bool const& System::Net::ServerCertValidationCallback_CallbackContext::__cordl_internal_get_result() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___result;
}
constexpr void System::Net::ServerCertValidationCallback_CallbackContext::__cordl_internal_set_result(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___result = value;
}
inline void System::Net::ServerCertValidationCallback_CallbackContext::_ctor(::System::Object* request, ::System::Security::Cryptography::X509Certificates::X509Certificate* certificate,
                                                                             ::System::Security::Cryptography::X509Certificates::X509Chain* chain,
                                                                             ::System::Net::Security::SslPolicyErrors sslPolicyErrors) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServerCertValidationCallback_CallbackContext*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                                                  ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Chain*>(), ::i2c::type_of<::System::Net::Security::SslPolicyErrors>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, certificate, chain, sslPolicyErrors);
}
inline ::System::Net::ServerCertValidationCallback_CallbackContext*
System::Net::ServerCertValidationCallback_CallbackContext::New_ctor(::System::Object* request, ::System::Security::Cryptography::X509Certificates::X509Certificate* certificate,
                                                                    ::System::Security::Cryptography::X509Certificates::X509Chain* chain, ::System::Net::Security::SslPolicyErrors sslPolicyErrors) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::ServerCertValidationCallback_CallbackContext*>(request, certificate, chain, sslPolicyErrors));
}
// Ctor Parameters []
constexpr ::System::Net::ServerCertValidationCallback_CallbackContext::ServerCertValidationCallback_CallbackContext() {}
//  Writing Method size for method: ::System::Net::ServerCertValidationCallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ServerCertValidationCallback::*)(::System::Net::Security::RemoteCertificateValidationCallback*)>(
    &::System::Net::ServerCertValidationCallback::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6426ff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServerCertValidationCallback*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Net::Security::RemoteCertificateValidationCallback*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServerCertValidationCallback.get_ValidationCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Security::RemoteCertificateValidationCallback* (::System::Net::ServerCertValidationCallback::*)()>(
    &::System::Net::ServerCertValidationCallback::get_ValidationCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6427068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServerCertValidationCallback*>(), { "get_ValidationCallback", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServerCertValidationCallback.Callback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ServerCertValidationCallback::*)(::System::Object*)>(&::System::Net::ServerCertValidationCallback::Callback)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6427070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServerCertValidationCallback*>(), { "Callback", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServerCertValidationCallback.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::ServerCertValidationCallback::*)(
    ::System::Object*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors)>(
    &::System::Net::ServerCertValidationCallback::Invoke)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x6427128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServerCertValidationCallback*>(),
                                                { "Invoke",
                                                  {},
                                                  { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                                                    ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Chain*>(), ::i2c::type_of<::System::Net::Security::SslPolicyErrors>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Net::Security::RemoteCertificateValidationCallback*& System::Net::ServerCertValidationCallback::__cordl_internal_get_m_ValidationCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ValidationCallback;
}
constexpr ::System::Net::Security::RemoteCertificateValidationCallback* const& System::Net::ServerCertValidationCallback::__cordl_internal_get_m_ValidationCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ValidationCallback;
}
constexpr void System::Net::ServerCertValidationCallback::__cordl_internal_set_m_ValidationCallback(::System::Net::Security::RemoteCertificateValidationCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ValidationCallback = value;
}
constexpr ::System::Threading::ExecutionContext*& System::Net::ServerCertValidationCallback::__cordl_internal_get_m_Context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Context;
}
constexpr ::System::Threading::ExecutionContext* const& System::Net::ServerCertValidationCallback::__cordl_internal_get_m_Context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Context;
}
constexpr void System::Net::ServerCertValidationCallback::__cordl_internal_set_m_Context(::System::Threading::ExecutionContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Context = value;
}
inline void System::Net::ServerCertValidationCallback::_ctor(::System::Net::Security::RemoteCertificateValidationCallback* validationCallback) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServerCertValidationCallback*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Net::Security::RemoteCertificateValidationCallback*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, validationCallback);
}
inline ::System::Net::Security::RemoteCertificateValidationCallback* System::Net::ServerCertValidationCallback::get_ValidationCallback() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServerCertValidationCallback*>(), { "get_ValidationCallback", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Security::RemoteCertificateValidationCallback*>(this, ___internal_method);
}
inline void System::Net::ServerCertValidationCallback::Callback(::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServerCertValidationCallback*>(), { "Callback", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline bool System::Net::ServerCertValidationCallback::Invoke(::System::Object* request, ::System::Security::Cryptography::X509Certificates::X509Certificate* certificate,
                                                              ::System::Security::Cryptography::X509Certificates::X509Chain* chain, ::System::Net::Security::SslPolicyErrors sslPolicyErrors) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServerCertValidationCallback*>(),
                                              { "Invoke",
                                                {},
                                                { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                                                  ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Chain*>(), ::i2c::type_of<::System::Net::Security::SslPolicyErrors>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, request, certificate, chain, sslPolicyErrors);
}
inline ::System::Net::ServerCertValidationCallback* System::Net::ServerCertValidationCallback::New_ctor(::System::Net::Security::RemoteCertificateValidationCallback* validationCallback) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::ServerCertValidationCallback*>(validationCallback));
}
// Ctor Parameters []
constexpr ::System::Net::ServerCertValidationCallback::ServerCertValidationCallback() {}
