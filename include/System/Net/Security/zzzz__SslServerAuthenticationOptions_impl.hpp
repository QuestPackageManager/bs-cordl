#pragma once
// IWYU pragma private; include "System/Net/Security/SslServerAuthenticationOptions.hpp"
#include "System/Net/Security/zzzz__EncryptionPolicy_impl.hpp"
#include "System/Security/Authentication/zzzz__SslProtocols_impl.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509RevocationMode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Security/zzzz__SslServerAuthenticationOptions_def.hpp"
#include "System/Net/Security/zzzz__EncryptionPolicy_def.hpp"
#include "System/Security/Authentication/zzzz__SslProtocols_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509RevocationMode_def.hpp"
//  Writing Method size for method: ::System::Net::Security::SslServerAuthenticationOptions.get_ClientCertificateRequired
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Security::SslServerAuthenticationOptions::*)()>(
    &::System::Net::Security::SslServerAuthenticationOptions::get_ClientCertificateRequired)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x636aea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::SslServerAuthenticationOptions*>(), { "get_ClientCertificateRequired", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SslServerAuthenticationOptions.set_ClientCertificateRequired
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Security::SslServerAuthenticationOptions::*)(bool)>(
    &::System::Net::Security::SslServerAuthenticationOptions::set_ClientCertificateRequired)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x636aeb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::SslServerAuthenticationOptions*>(), { "set_ClientCertificateRequired", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SslServerAuthenticationOptions.get_ServerCertificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate* (::System::Net::Security::SslServerAuthenticationOptions::*)()>(
    &::System::Net::Security::SslServerAuthenticationOptions::get_ServerCertificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x636aeb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::SslServerAuthenticationOptions*>(), { "get_ServerCertificate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SslServerAuthenticationOptions.set_ServerCertificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Security::SslServerAuthenticationOptions::*)(::System::Security::Cryptography::X509Certificates::X509Certificate*)>(
    &::System::Net::Security::SslServerAuthenticationOptions::set_ServerCertificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x636aec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::SslServerAuthenticationOptions*>(),
                                                             { "set_ServerCertificate", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SslServerAuthenticationOptions.get_EnabledSslProtocols
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Authentication::SslProtocols (::System::Net::Security::SslServerAuthenticationOptions::*)()>(
    &::System::Net::Security::SslServerAuthenticationOptions::get_EnabledSslProtocols)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x636aec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::SslServerAuthenticationOptions*>(), { "get_EnabledSslProtocols", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SslServerAuthenticationOptions.set_EnabledSslProtocols
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Security::SslServerAuthenticationOptions::*)(::System::Security::Authentication::SslProtocols)>(
    &::System::Net::Security::SslServerAuthenticationOptions::set_EnabledSslProtocols)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x636aed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::SslServerAuthenticationOptions*>(),
                                                                                           { "set_EnabledSslProtocols", {}, { ::i2c::type_of<::System::Security::Authentication::SslProtocols>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SslServerAuthenticationOptions.set_CertificateRevocationCheckMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Security::SslServerAuthenticationOptions::*)(::System::Security::Cryptography::X509Certificates::X509RevocationMode)>(
    &::System::Net::Security::SslServerAuthenticationOptions::set_CertificateRevocationCheckMode)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x636aed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::SslServerAuthenticationOptions*>(),
                                                { "set_CertificateRevocationCheckMode", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509RevocationMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SslServerAuthenticationOptions.set_EncryptionPolicy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Security::SslServerAuthenticationOptions::*)(::System::Net::Security::EncryptionPolicy)>(
    &::System::Net::Security::SslServerAuthenticationOptions::set_EncryptionPolicy)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x636af6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::SslServerAuthenticationOptions*>(),
                                                                                           { "set_EncryptionPolicy", {}, { ::i2c::type_of<::System::Net::Security::EncryptionPolicy>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SslServerAuthenticationOptions._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Security::SslServerAuthenticationOptions::*)()>(&::System::Net::Security::SslServerAuthenticationOptions::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x636b000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::SslServerAuthenticationOptions*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Security::Cryptography::X509Certificates::X509RevocationMode& System::Net::Security::SslServerAuthenticationOptions::__cordl_internal_get__checkCertificateRevocation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____checkCertificateRevocation;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509RevocationMode const&
System::Net::Security::SslServerAuthenticationOptions::__cordl_internal_get__checkCertificateRevocation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____checkCertificateRevocation;
}
constexpr void System::Net::Security::SslServerAuthenticationOptions::__cordl_internal_set__checkCertificateRevocation(::System::Security::Cryptography::X509Certificates::X509RevocationMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____checkCertificateRevocation = value;
}
constexpr ::System::Security::Authentication::SslProtocols& System::Net::Security::SslServerAuthenticationOptions::__cordl_internal_get__enabledSslProtocols() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enabledSslProtocols;
}
constexpr ::System::Security::Authentication::SslProtocols const& System::Net::Security::SslServerAuthenticationOptions::__cordl_internal_get__enabledSslProtocols() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enabledSslProtocols;
}
constexpr void System::Net::Security::SslServerAuthenticationOptions::__cordl_internal_set__enabledSslProtocols(::System::Security::Authentication::SslProtocols value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enabledSslProtocols = value;
}
constexpr ::System::Net::Security::EncryptionPolicy& System::Net::Security::SslServerAuthenticationOptions::__cordl_internal_get__encryptionPolicy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encryptionPolicy;
}
constexpr ::System::Net::Security::EncryptionPolicy const& System::Net::Security::SslServerAuthenticationOptions::__cordl_internal_get__encryptionPolicy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encryptionPolicy;
}
constexpr void System::Net::Security::SslServerAuthenticationOptions::__cordl_internal_set__encryptionPolicy(::System::Net::Security::EncryptionPolicy value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____encryptionPolicy = value;
}
constexpr bool& System::Net::Security::SslServerAuthenticationOptions::__cordl_internal_get__allowRenegotiation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowRenegotiation;
}
constexpr bool const& System::Net::Security::SslServerAuthenticationOptions::__cordl_internal_get__allowRenegotiation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowRenegotiation;
}
constexpr void System::Net::Security::SslServerAuthenticationOptions::__cordl_internal_set__allowRenegotiation(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allowRenegotiation = value;
}
constexpr bool& System::Net::Security::SslServerAuthenticationOptions::__cordl_internal_get__ClientCertificateRequired_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ClientCertificateRequired_k__BackingField;
}
constexpr bool const& System::Net::Security::SslServerAuthenticationOptions::__cordl_internal_get__ClientCertificateRequired_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ClientCertificateRequired_k__BackingField;
}
constexpr void System::Net::Security::SslServerAuthenticationOptions::__cordl_internal_set__ClientCertificateRequired_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ClientCertificateRequired_k__BackingField = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate*& System::Net::Security::SslServerAuthenticationOptions::__cordl_internal_get__ServerCertificate_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ServerCertificate_k__BackingField;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate* const&
System::Net::Security::SslServerAuthenticationOptions::__cordl_internal_get__ServerCertificate_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ServerCertificate_k__BackingField;
}
constexpr void
System::Net::Security::SslServerAuthenticationOptions::__cordl_internal_set__ServerCertificate_k__BackingField(::System::Security::Cryptography::X509Certificates::X509Certificate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ServerCertificate_k__BackingField = value;
}
inline bool System::Net::Security::SslServerAuthenticationOptions::get_ClientCertificateRequired() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::SslServerAuthenticationOptions*>(), { "get_ClientCertificateRequired", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::Security::SslServerAuthenticationOptions::set_ClientCertificateRequired(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::SslServerAuthenticationOptions*>(), { "set_ClientCertificateRequired", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate* System::Net::Security::SslServerAuthenticationOptions::get_ServerCertificate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::SslServerAuthenticationOptions*>(), { "get_ServerCertificate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate*>(this, ___internal_method);
}
inline void System::Net::Security::SslServerAuthenticationOptions::set_ServerCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::SslServerAuthenticationOptions*>(),
                                                           { "set_ServerCertificate", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Security::Authentication::SslProtocols System::Net::Security::SslServerAuthenticationOptions::get_EnabledSslProtocols() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::SslServerAuthenticationOptions*>(), { "get_EnabledSslProtocols", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Authentication::SslProtocols>(this, ___internal_method);
}
inline void System::Net::Security::SslServerAuthenticationOptions::set_EnabledSslProtocols(::System::Security::Authentication::SslProtocols value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::SslServerAuthenticationOptions*>(),
                                                                                         { "set_EnabledSslProtocols", {}, { ::i2c::type_of<::System::Security::Authentication::SslProtocols>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::Security::SslServerAuthenticationOptions::set_CertificateRevocationCheckMode(::System::Security::Cryptography::X509Certificates::X509RevocationMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::SslServerAuthenticationOptions*>(),
                                              { "set_CertificateRevocationCheckMode", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509RevocationMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::Security::SslServerAuthenticationOptions::set_EncryptionPolicy(::System::Net::Security::EncryptionPolicy value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::SslServerAuthenticationOptions*>(),
                                                                                         { "set_EncryptionPolicy", {}, { ::i2c::type_of<::System::Net::Security::EncryptionPolicy>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::Security::SslServerAuthenticationOptions::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::SslServerAuthenticationOptions*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::Security::SslServerAuthenticationOptions* System::Net::Security::SslServerAuthenticationOptions::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Security::SslServerAuthenticationOptions*>());
}
// Ctor Parameters []
constexpr ::System::Net::Security::SslServerAuthenticationOptions::SslServerAuthenticationOptions() {}
