#pragma once
// IWYU pragma private; include "Mono\Net\Security\MonoSslClientAuthenticationOptions.hpp"
#include "Mono/Net/Security/zzzz__MonoSslAuthenticationOptions_impl.hpp"
#include "Mono/Net/Security/zzzz__MonoSslClientAuthenticationOptions_def.hpp"
#include "System/Net/Security/zzzz__EncryptionPolicy_def.hpp"
#include "System/Net/Security/zzzz__SslClientAuthenticationOptions_def.hpp"
#include "System/Security/Authentication/zzzz__SslProtocols_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509RevocationMode_def.hpp"
//  Writing Method size for method: ::Mono::Net::Security::MonoSslClientAuthenticationOptions.get_Options
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Security::SslClientAuthenticationOptions* (::Mono::Net::Security::MonoSslClientAuthenticationOptions::*)()>(
    &::Mono::Net::Security::MonoSslClientAuthenticationOptions::get_Options)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fdcd20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>(), { "get_Options", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslClientAuthenticationOptions.get_ServerMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Net::Security::MonoSslClientAuthenticationOptions::*)()>(
    &::Mono::Net::Security::MonoSslClientAuthenticationOptions::get_ServerMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fdcd28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>(),
                                                                                          { ::i2c::class_of<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslClientAuthenticationOptions._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::MonoSslClientAuthenticationOptions::*)()>(&::Mono::Net::Security::MonoSslClientAuthenticationOptions::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5fd9d9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslClientAuthenticationOptions.set_CertificateRevocationCheckMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::MonoSslClientAuthenticationOptions::*)(::System::Security::Cryptography::X509Certificates::X509RevocationMode)>(
    &::Mono::Net::Security::MonoSslClientAuthenticationOptions::set_CertificateRevocationCheckMode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5fdcd30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>(),
                                                                                          { ::i2c::class_of<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslClientAuthenticationOptions.set_EncryptionPolicy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::MonoSslClientAuthenticationOptions::*)(::System::Net::Security::EncryptionPolicy)>(
    &::Mono::Net::Security::MonoSslClientAuthenticationOptions::set_EncryptionPolicy)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5fdcd48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>(),
                                                                                          { ::i2c::class_of<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslClientAuthenticationOptions.get_EnabledSslProtocols
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Authentication::SslProtocols (::Mono::Net::Security::MonoSslClientAuthenticationOptions::*)()>(
    &::Mono::Net::Security::MonoSslClientAuthenticationOptions::get_EnabledSslProtocols)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5fdcd60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>(),
                                                                                          { ::i2c::class_of<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslClientAuthenticationOptions.set_EnabledSslProtocols
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::MonoSslClientAuthenticationOptions::*)(::System::Security::Authentication::SslProtocols)>(
    &::Mono::Net::Security::MonoSslClientAuthenticationOptions::set_EnabledSslProtocols)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5fdcd78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>(),
                                                                                          { ::i2c::class_of<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslClientAuthenticationOptions.get_TargetHost
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Net::Security::MonoSslClientAuthenticationOptions::*)()>(
    &::Mono::Net::Security::MonoSslClientAuthenticationOptions::get_TargetHost)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5fdcd90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>(),
                                                                                          { ::i2c::class_of<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslClientAuthenticationOptions.set_TargetHost
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::MonoSslClientAuthenticationOptions::*)(::StringW)>(
    &::Mono::Net::Security::MonoSslClientAuthenticationOptions::set_TargetHost)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5fdcda8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>(),
                                                                                          { ::i2c::class_of<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslClientAuthenticationOptions.get_ClientCertificateRequired
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Net::Security::MonoSslClientAuthenticationOptions::*)()>(
    &::Mono::Net::Security::MonoSslClientAuthenticationOptions::get_ClientCertificateRequired)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5fdcdc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>(),
                                                                                          { ::i2c::class_of<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslClientAuthenticationOptions.set_ClientCertificateRequired
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::MonoSslClientAuthenticationOptions::*)(bool)>(
    &::Mono::Net::Security::MonoSslClientAuthenticationOptions::set_ClientCertificateRequired)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5fdcdf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>(),
                                                                                          { ::i2c::class_of<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslClientAuthenticationOptions.get_ClientCertificates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateCollection* (::Mono::Net::Security::MonoSslClientAuthenticationOptions::*)()>(
    &::Mono::Net::Security::MonoSslClientAuthenticationOptions::get_ClientCertificates)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5fdce30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>(),
                                                                                          { ::i2c::class_of<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslClientAuthenticationOptions.set_ClientCertificates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::MonoSslClientAuthenticationOptions::*)(
    ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*)>(&::Mono::Net::Security::MonoSslClientAuthenticationOptions::set_ClientCertificates)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5fdce48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>(),
                                                                                          { ::i2c::class_of<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslClientAuthenticationOptions.get_ServerCertificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate* (::Mono::Net::Security::MonoSslClientAuthenticationOptions::*)()>(
    &::Mono::Net::Security::MonoSslClientAuthenticationOptions::get_ServerCertificate)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5fdce60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>(),
                                                                                          { ::i2c::class_of<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslClientAuthenticationOptions.set_ServerCertificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::MonoSslClientAuthenticationOptions::*)(::System::Security::Cryptography::X509Certificates::X509Certificate*)>(
    &::Mono::Net::Security::MonoSslClientAuthenticationOptions::set_ServerCertificate)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5fdce98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>(),
                                                                                          { ::i2c::class_of<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>(), 12 }));
    return ___internal_method;
  }
};
constexpr ::System::Net::Security::SslClientAuthenticationOptions*& Mono::Net::Security::MonoSslClientAuthenticationOptions::__cordl_internal_get__Options_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Options_k__BackingField;
}
constexpr ::System::Net::Security::SslClientAuthenticationOptions* const& Mono::Net::Security::MonoSslClientAuthenticationOptions::__cordl_internal_get__Options_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Options_k__BackingField;
}
constexpr void Mono::Net::Security::MonoSslClientAuthenticationOptions::__cordl_internal_set__Options_k__BackingField(::System::Net::Security::SslClientAuthenticationOptions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Options_k__BackingField = value;
}
inline ::System::Net::Security::SslClientAuthenticationOptions* Mono::Net::Security::MonoSslClientAuthenticationOptions::get_Options() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>(), { "get_Options", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Security::SslClientAuthenticationOptions*>(this, ___internal_method);
}
inline bool Mono::Net::Security::MonoSslClientAuthenticationOptions::get_ServerMode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mono::Net::Security::MonoSslClientAuthenticationOptions::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Net::Security::MonoSslClientAuthenticationOptions::set_CertificateRevocationCheckMode(::System::Security::Cryptography::X509Certificates::X509RevocationMode value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mono::Net::Security::MonoSslClientAuthenticationOptions::set_EncryptionPolicy(::System::Net::Security::EncryptionPolicy value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Security::Authentication::SslProtocols Mono::Net::Security::MonoSslClientAuthenticationOptions::get_EnabledSslProtocols() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Authentication::SslProtocols>(this, ___internal_method);
}
inline void Mono::Net::Security::MonoSslClientAuthenticationOptions::set_EnabledSslProtocols(::System::Security::Authentication::SslProtocols value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Mono::Net::Security::MonoSslClientAuthenticationOptions::get_TargetHost() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Mono::Net::Security::MonoSslClientAuthenticationOptions::set_TargetHost(::StringW value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Mono::Net::Security::MonoSslClientAuthenticationOptions::get_ClientCertificateRequired() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mono::Net::Security::MonoSslClientAuthenticationOptions::set_ClientCertificateRequired(bool value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* Mono::Net::Security::MonoSslClientAuthenticationOptions::get_ClientCertificates() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>(this, ___internal_method);
}
inline void Mono::Net::Security::MonoSslClientAuthenticationOptions::set_ClientCertificates(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate* Mono::Net::Security::MonoSslClientAuthenticationOptions::get_ServerCertificate() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate*>(this, ___internal_method);
}
inline void Mono::Net::Security::MonoSslClientAuthenticationOptions::set_ServerCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Mono::Net::Security::MonoSslClientAuthenticationOptions* Mono::Net::Security::MonoSslClientAuthenticationOptions::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>());
}
// Ctor Parameters []
constexpr ::Mono::Net::Security::MonoSslClientAuthenticationOptions::MonoSslClientAuthenticationOptions() {}
