#pragma once
// IWYU pragma private; include "System/Net/Security/SslClientAuthenticationOptions.hpp"
#include "System/Net/Security/zzzz__EncryptionPolicy_impl.hpp"
#include "System/Security/Authentication/zzzz__SslProtocols_impl.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509RevocationMode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Security/zzzz__SslClientAuthenticationOptions_def.hpp"
#include "System/Net/Security/zzzz__EncryptionPolicy_def.hpp"
#include "System/Net/Security/zzzz__LocalCertificateSelectionCallback_def.hpp"
#include "System/Net/Security/zzzz__RemoteCertificateValidationCallback_def.hpp"
#include "System/Security/Authentication/zzzz__SslProtocols_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509RevocationMode_def.hpp"
//  Writing Method size for method: ::System::Net::Security::SslClientAuthenticationOptions.get_LocalCertificateSelectionCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Security::LocalCertificateSelectionCallback* (::System::Net::Security::SslClientAuthenticationOptions::*)()>(
    &::System::Net::Security::SslClientAuthenticationOptions::get_LocalCertificateSelectionCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x636ad2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::SslClientAuthenticationOptions*>(), { "get_LocalCertificateSelectionCallback", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SslClientAuthenticationOptions.set_LocalCertificateSelectionCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Security::SslClientAuthenticationOptions::*)(::System::Net::Security::LocalCertificateSelectionCallback*)>(
    &::System::Net::Security::SslClientAuthenticationOptions::set_LocalCertificateSelectionCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x636ad34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::SslClientAuthenticationOptions*>(),
                                                             { "set_LocalCertificateSelectionCallback", {}, { ::i2c::type_of<::System::Net::Security::LocalCertificateSelectionCallback*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SslClientAuthenticationOptions.get_RemoteCertificateValidationCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Security::RemoteCertificateValidationCallback* (::System::Net::Security::SslClientAuthenticationOptions::*)()>(
    &::System::Net::Security::SslClientAuthenticationOptions::get_RemoteCertificateValidationCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x636ad3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::SslClientAuthenticationOptions*>(), { "get_RemoteCertificateValidationCallback", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SslClientAuthenticationOptions.get_TargetHost
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::Security::SslClientAuthenticationOptions::*)()>(
    &::System::Net::Security::SslClientAuthenticationOptions::get_TargetHost)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x636ad44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::SslClientAuthenticationOptions*>(), { "get_TargetHost", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SslClientAuthenticationOptions.set_TargetHost
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Security::SslClientAuthenticationOptions::*)(::StringW)>(
    &::System::Net::Security::SslClientAuthenticationOptions::set_TargetHost)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x636ad4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::SslClientAuthenticationOptions*>(), { "set_TargetHost", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SslClientAuthenticationOptions.get_ClientCertificates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateCollection* (::System::Net::Security::SslClientAuthenticationOptions::*)()>(
    &::System::Net::Security::SslClientAuthenticationOptions::get_ClientCertificates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x636ad54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::SslClientAuthenticationOptions*>(), { "get_ClientCertificates", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SslClientAuthenticationOptions.set_ClientCertificates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Security::SslClientAuthenticationOptions::*)(
    ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*)>(&::System::Net::Security::SslClientAuthenticationOptions::set_ClientCertificates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x636ad5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::SslClientAuthenticationOptions*>(),
                                                             { "set_ClientCertificates", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SslClientAuthenticationOptions.set_CertificateRevocationCheckMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Security::SslClientAuthenticationOptions::*)(::System::Security::Cryptography::X509Certificates::X509RevocationMode)>(
    &::System::Net::Security::SslClientAuthenticationOptions::set_CertificateRevocationCheckMode)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x636ad64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::SslClientAuthenticationOptions*>(),
                                                { "set_CertificateRevocationCheckMode", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509RevocationMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SslClientAuthenticationOptions.set_EncryptionPolicy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Security::SslClientAuthenticationOptions::*)(::System::Net::Security::EncryptionPolicy)>(
    &::System::Net::Security::SslClientAuthenticationOptions::set_EncryptionPolicy)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x636adf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::SslClientAuthenticationOptions*>(),
                                                                                           { "set_EncryptionPolicy", {}, { ::i2c::type_of<::System::Net::Security::EncryptionPolicy>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SslClientAuthenticationOptions.get_EnabledSslProtocols
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Authentication::SslProtocols (::System::Net::Security::SslClientAuthenticationOptions::*)()>(
    &::System::Net::Security::SslClientAuthenticationOptions::get_EnabledSslProtocols)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x636ae8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::SslClientAuthenticationOptions*>(), { "get_EnabledSslProtocols", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SslClientAuthenticationOptions.set_EnabledSslProtocols
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Security::SslClientAuthenticationOptions::*)(::System::Security::Authentication::SslProtocols)>(
    &::System::Net::Security::SslClientAuthenticationOptions::set_EnabledSslProtocols)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x636ae94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::SslClientAuthenticationOptions*>(),
                                                                                           { "set_EnabledSslProtocols", {}, { ::i2c::type_of<::System::Security::Authentication::SslProtocols>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SslClientAuthenticationOptions._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Security::SslClientAuthenticationOptions::*)()>(&::System::Net::Security::SslClientAuthenticationOptions::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x636ae9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::SslClientAuthenticationOptions*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Net::Security::EncryptionPolicy& System::Net::Security::SslClientAuthenticationOptions::__cordl_internal_get__encryptionPolicy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encryptionPolicy;
}
constexpr ::System::Net::Security::EncryptionPolicy const& System::Net::Security::SslClientAuthenticationOptions::__cordl_internal_get__encryptionPolicy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encryptionPolicy;
}
constexpr void System::Net::Security::SslClientAuthenticationOptions::__cordl_internal_set__encryptionPolicy(::System::Net::Security::EncryptionPolicy value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____encryptionPolicy = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509RevocationMode& System::Net::Security::SslClientAuthenticationOptions::__cordl_internal_get__checkCertificateRevocation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____checkCertificateRevocation;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509RevocationMode const&
System::Net::Security::SslClientAuthenticationOptions::__cordl_internal_get__checkCertificateRevocation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____checkCertificateRevocation;
}
constexpr void System::Net::Security::SslClientAuthenticationOptions::__cordl_internal_set__checkCertificateRevocation(::System::Security::Cryptography::X509Certificates::X509RevocationMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____checkCertificateRevocation = value;
}
constexpr ::System::Security::Authentication::SslProtocols& System::Net::Security::SslClientAuthenticationOptions::__cordl_internal_get__enabledSslProtocols() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enabledSslProtocols;
}
constexpr ::System::Security::Authentication::SslProtocols const& System::Net::Security::SslClientAuthenticationOptions::__cordl_internal_get__enabledSslProtocols() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enabledSslProtocols;
}
constexpr void System::Net::Security::SslClientAuthenticationOptions::__cordl_internal_set__enabledSslProtocols(::System::Security::Authentication::SslProtocols value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enabledSslProtocols = value;
}
constexpr bool& System::Net::Security::SslClientAuthenticationOptions::__cordl_internal_get__allowRenegotiation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowRenegotiation;
}
constexpr bool const& System::Net::Security::SslClientAuthenticationOptions::__cordl_internal_get__allowRenegotiation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowRenegotiation;
}
constexpr void System::Net::Security::SslClientAuthenticationOptions::__cordl_internal_set__allowRenegotiation(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allowRenegotiation = value;
}
constexpr ::System::Net::Security::LocalCertificateSelectionCallback*&
System::Net::Security::SslClientAuthenticationOptions::__cordl_internal_get__LocalCertificateSelectionCallback_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LocalCertificateSelectionCallback_k__BackingField;
}
constexpr ::System::Net::Security::LocalCertificateSelectionCallback* const&
System::Net::Security::SslClientAuthenticationOptions::__cordl_internal_get__LocalCertificateSelectionCallback_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LocalCertificateSelectionCallback_k__BackingField;
}
constexpr void
System::Net::Security::SslClientAuthenticationOptions::__cordl_internal_set__LocalCertificateSelectionCallback_k__BackingField(::System::Net::Security::LocalCertificateSelectionCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____LocalCertificateSelectionCallback_k__BackingField = value;
}
constexpr ::System::Net::Security::RemoteCertificateValidationCallback*&
System::Net::Security::SslClientAuthenticationOptions::__cordl_internal_get__RemoteCertificateValidationCallback_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RemoteCertificateValidationCallback_k__BackingField;
}
constexpr ::System::Net::Security::RemoteCertificateValidationCallback* const&
System::Net::Security::SslClientAuthenticationOptions::__cordl_internal_get__RemoteCertificateValidationCallback_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RemoteCertificateValidationCallback_k__BackingField;
}
constexpr void
System::Net::Security::SslClientAuthenticationOptions::__cordl_internal_set__RemoteCertificateValidationCallback_k__BackingField(::System::Net::Security::RemoteCertificateValidationCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____RemoteCertificateValidationCallback_k__BackingField = value;
}
constexpr ::StringW& System::Net::Security::SslClientAuthenticationOptions::__cordl_internal_get__TargetHost_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TargetHost_k__BackingField;
}
constexpr ::StringW const& System::Net::Security::SslClientAuthenticationOptions::__cordl_internal_get__TargetHost_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TargetHost_k__BackingField;
}
constexpr void System::Net::Security::SslClientAuthenticationOptions::__cordl_internal_set__TargetHost_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____TargetHost_k__BackingField = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*&
System::Net::Security::SslClientAuthenticationOptions::__cordl_internal_get__ClientCertificates_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ClientCertificates_k__BackingField;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* const&
System::Net::Security::SslClientAuthenticationOptions::__cordl_internal_get__ClientCertificates_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ClientCertificates_k__BackingField;
}
constexpr void
System::Net::Security::SslClientAuthenticationOptions::__cordl_internal_set__ClientCertificates_k__BackingField(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ClientCertificates_k__BackingField = value;
}
inline ::System::Net::Security::LocalCertificateSelectionCallback* System::Net::Security::SslClientAuthenticationOptions::get_LocalCertificateSelectionCallback() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::SslClientAuthenticationOptions*>(), { "get_LocalCertificateSelectionCallback", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Security::LocalCertificateSelectionCallback*>(this, ___internal_method);
}
inline void System::Net::Security::SslClientAuthenticationOptions::set_LocalCertificateSelectionCallback(::System::Net::Security::LocalCertificateSelectionCallback* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::SslClientAuthenticationOptions*>(),
                                                           { "set_LocalCertificateSelectionCallback", {}, { ::i2c::type_of<::System::Net::Security::LocalCertificateSelectionCallback*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::Security::RemoteCertificateValidationCallback* System::Net::Security::SslClientAuthenticationOptions::get_RemoteCertificateValidationCallback() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::SslClientAuthenticationOptions*>(), { "get_RemoteCertificateValidationCallback", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Security::RemoteCertificateValidationCallback*>(this, ___internal_method);
}
inline ::StringW System::Net::Security::SslClientAuthenticationOptions::get_TargetHost() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::SslClientAuthenticationOptions*>(), { "get_TargetHost", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Net::Security::SslClientAuthenticationOptions::set_TargetHost(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::SslClientAuthenticationOptions*>(), { "set_TargetHost", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* System::Net::Security::SslClientAuthenticationOptions::get_ClientCertificates() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::SslClientAuthenticationOptions*>(), { "get_ClientCertificates", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>(this, ___internal_method);
}
inline void System::Net::Security::SslClientAuthenticationOptions::set_ClientCertificates(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::SslClientAuthenticationOptions*>(),
                                                           { "set_ClientCertificates", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::Security::SslClientAuthenticationOptions::set_CertificateRevocationCheckMode(::System::Security::Cryptography::X509Certificates::X509RevocationMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::SslClientAuthenticationOptions*>(),
                                              { "set_CertificateRevocationCheckMode", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509RevocationMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::Security::SslClientAuthenticationOptions::set_EncryptionPolicy(::System::Net::Security::EncryptionPolicy value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::SslClientAuthenticationOptions*>(),
                                                                                         { "set_EncryptionPolicy", {}, { ::i2c::type_of<::System::Net::Security::EncryptionPolicy>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Security::Authentication::SslProtocols System::Net::Security::SslClientAuthenticationOptions::get_EnabledSslProtocols() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::SslClientAuthenticationOptions*>(), { "get_EnabledSslProtocols", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Authentication::SslProtocols>(this, ___internal_method);
}
inline void System::Net::Security::SslClientAuthenticationOptions::set_EnabledSslProtocols(::System::Security::Authentication::SslProtocols value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::SslClientAuthenticationOptions*>(),
                                                                                         { "set_EnabledSslProtocols", {}, { ::i2c::type_of<::System::Security::Authentication::SslProtocols>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::Security::SslClientAuthenticationOptions::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::SslClientAuthenticationOptions*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::Security::SslClientAuthenticationOptions* System::Net::Security::SslClientAuthenticationOptions::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Security::SslClientAuthenticationOptions*>());
}
// Ctor Parameters []
constexpr ::System::Net::Security::SslClientAuthenticationOptions::SslClientAuthenticationOptions() {}
