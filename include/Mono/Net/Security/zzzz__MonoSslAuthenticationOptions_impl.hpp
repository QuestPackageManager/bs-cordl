#pragma once
// IWYU pragma private; include "Mono\Net\Security\MonoSslAuthenticationOptions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Net/Security/zzzz__MonoSslAuthenticationOptions_def.hpp"
#include "System/Net/Security/zzzz__EncryptionPolicy_def.hpp"
#include "System/Net/Security/zzzz__ServerCertSelectionCallback_def.hpp"
#include "System/Security/Authentication/zzzz__SslProtocols_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509RevocationMode_def.hpp"
//  Writing Method size for method: ::Mono::Net::Security::MonoSslAuthenticationOptions.get_ServerMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Net::Security::MonoSslAuthenticationOptions::*)()>(&::Mono::Net::Security::MonoSslAuthenticationOptions::get_ServerMode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoSslAuthenticationOptions*>(),
                                                                                          { ::i2c::class_of<::Mono::Net::Security::MonoSslAuthenticationOptions*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslAuthenticationOptions.get_EnabledSslProtocols
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Authentication::SslProtocols (::Mono::Net::Security::MonoSslAuthenticationOptions::*)()>(
    &::Mono::Net::Security::MonoSslAuthenticationOptions::get_EnabledSslProtocols)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoSslAuthenticationOptions*>(),
                                                                                          { ::i2c::class_of<::Mono::Net::Security::MonoSslAuthenticationOptions*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslAuthenticationOptions.set_EnabledSslProtocols
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::MonoSslAuthenticationOptions::*)(::System::Security::Authentication::SslProtocols)>(
    &::Mono::Net::Security::MonoSslAuthenticationOptions::set_EnabledSslProtocols)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoSslAuthenticationOptions*>(),
                                                                                          { ::i2c::class_of<::Mono::Net::Security::MonoSslAuthenticationOptions*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslAuthenticationOptions.set_EncryptionPolicy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::MonoSslAuthenticationOptions::*)(::System::Net::Security::EncryptionPolicy)>(
    &::Mono::Net::Security::MonoSslAuthenticationOptions::set_EncryptionPolicy)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoSslAuthenticationOptions*>(),
                                                                                          { ::i2c::class_of<::Mono::Net::Security::MonoSslAuthenticationOptions*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslAuthenticationOptions.set_CertificateRevocationCheckMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::MonoSslAuthenticationOptions::*)(::System::Security::Cryptography::X509Certificates::X509RevocationMode)>(
    &::Mono::Net::Security::MonoSslAuthenticationOptions::set_CertificateRevocationCheckMode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoSslAuthenticationOptions*>(),
                                                                                          { ::i2c::class_of<::Mono::Net::Security::MonoSslAuthenticationOptions*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslAuthenticationOptions.get_TargetHost
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Net::Security::MonoSslAuthenticationOptions::*)()>(&::Mono::Net::Security::MonoSslAuthenticationOptions::get_TargetHost)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoSslAuthenticationOptions*>(),
                                                                                          { ::i2c::class_of<::Mono::Net::Security::MonoSslAuthenticationOptions*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslAuthenticationOptions.set_TargetHost
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::MonoSslAuthenticationOptions::*)(::StringW)>(
    &::Mono::Net::Security::MonoSslAuthenticationOptions::set_TargetHost)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoSslAuthenticationOptions*>(),
                                                                                          { ::i2c::class_of<::Mono::Net::Security::MonoSslAuthenticationOptions*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslAuthenticationOptions.get_ServerCertificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate* (::Mono::Net::Security::MonoSslAuthenticationOptions::*)()>(
    &::Mono::Net::Security::MonoSslAuthenticationOptions::get_ServerCertificate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoSslAuthenticationOptions*>(),
                                                                                          { ::i2c::class_of<::Mono::Net::Security::MonoSslAuthenticationOptions*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslAuthenticationOptions.set_ServerCertificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::MonoSslAuthenticationOptions::*)(::System::Security::Cryptography::X509Certificates::X509Certificate*)>(
    &::Mono::Net::Security::MonoSslAuthenticationOptions::set_ServerCertificate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoSslAuthenticationOptions*>(),
                                                                                          { ::i2c::class_of<::Mono::Net::Security::MonoSslAuthenticationOptions*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslAuthenticationOptions.get_ClientCertificates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateCollection* (::Mono::Net::Security::MonoSslAuthenticationOptions::*)()>(
    &::Mono::Net::Security::MonoSslAuthenticationOptions::get_ClientCertificates)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoSslAuthenticationOptions*>(),
                                                                                          { ::i2c::class_of<::Mono::Net::Security::MonoSslAuthenticationOptions*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslAuthenticationOptions.set_ClientCertificates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::MonoSslAuthenticationOptions::*)(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*)>(
    &::Mono::Net::Security::MonoSslAuthenticationOptions::set_ClientCertificates)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoSslAuthenticationOptions*>(),
                                                                                          { ::i2c::class_of<::Mono::Net::Security::MonoSslAuthenticationOptions*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslAuthenticationOptions.get_ClientCertificateRequired
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Net::Security::MonoSslAuthenticationOptions::*)()>(
    &::Mono::Net::Security::MonoSslAuthenticationOptions::get_ClientCertificateRequired)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoSslAuthenticationOptions*>(),
                                                                                          { ::i2c::class_of<::Mono::Net::Security::MonoSslAuthenticationOptions*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslAuthenticationOptions.set_ClientCertificateRequired
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::MonoSslAuthenticationOptions::*)(bool)>(
    &::Mono::Net::Security::MonoSslAuthenticationOptions::set_ClientCertificateRequired)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoSslAuthenticationOptions*>(),
                                                                                          { ::i2c::class_of<::Mono::Net::Security::MonoSslAuthenticationOptions*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslAuthenticationOptions.get_ServerCertSelectionDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Security::ServerCertSelectionCallback* (::Mono::Net::Security::MonoSslAuthenticationOptions::*)()>(
    &::Mono::Net::Security::MonoSslAuthenticationOptions::get_ServerCertSelectionDelegate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fdcd14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoSslAuthenticationOptions*>(), { "get_ServerCertSelectionDelegate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslAuthenticationOptions._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::MonoSslAuthenticationOptions::*)()>(&::Mono::Net::Security::MonoSslAuthenticationOptions::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fdcd1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoSslAuthenticationOptions*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Net::Security::ServerCertSelectionCallback*& Mono::Net::Security::MonoSslAuthenticationOptions::__cordl_internal_get__ServerCertSelectionDelegate_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ServerCertSelectionDelegate_k__BackingField;
}
constexpr ::System::Net::Security::ServerCertSelectionCallback* const& Mono::Net::Security::MonoSslAuthenticationOptions::__cordl_internal_get__ServerCertSelectionDelegate_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ServerCertSelectionDelegate_k__BackingField;
}
constexpr void Mono::Net::Security::MonoSslAuthenticationOptions::__cordl_internal_set__ServerCertSelectionDelegate_k__BackingField(::System::Net::Security::ServerCertSelectionCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ServerCertSelectionDelegate_k__BackingField = value;
}
inline bool Mono::Net::Security::MonoSslAuthenticationOptions::get_ServerMode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Net::Security::MonoSslAuthenticationOptions*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Security::Authentication::SslProtocols Mono::Net::Security::MonoSslAuthenticationOptions::get_EnabledSslProtocols() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Net::Security::MonoSslAuthenticationOptions*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Authentication::SslProtocols>(this, ___internal_method);
}
inline void Mono::Net::Security::MonoSslAuthenticationOptions::set_EnabledSslProtocols(::System::Security::Authentication::SslProtocols value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Net::Security::MonoSslAuthenticationOptions*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mono::Net::Security::MonoSslAuthenticationOptions::set_EncryptionPolicy(::System::Net::Security::EncryptionPolicy value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Net::Security::MonoSslAuthenticationOptions*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mono::Net::Security::MonoSslAuthenticationOptions::set_CertificateRevocationCheckMode(::System::Security::Cryptography::X509Certificates::X509RevocationMode value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Net::Security::MonoSslAuthenticationOptions*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Mono::Net::Security::MonoSslAuthenticationOptions::get_TargetHost() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Net::Security::MonoSslAuthenticationOptions*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Mono::Net::Security::MonoSslAuthenticationOptions::set_TargetHost(::StringW value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Net::Security::MonoSslAuthenticationOptions*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate* Mono::Net::Security::MonoSslAuthenticationOptions::get_ServerCertificate() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Net::Security::MonoSslAuthenticationOptions*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate*>(this, ___internal_method);
}
inline void Mono::Net::Security::MonoSslAuthenticationOptions::set_ServerCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Net::Security::MonoSslAuthenticationOptions*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* Mono::Net::Security::MonoSslAuthenticationOptions::get_ClientCertificates() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Net::Security::MonoSslAuthenticationOptions*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>(this, ___internal_method);
}
inline void Mono::Net::Security::MonoSslAuthenticationOptions::set_ClientCertificates(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Net::Security::MonoSslAuthenticationOptions*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Mono::Net::Security::MonoSslAuthenticationOptions::get_ClientCertificateRequired() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Net::Security::MonoSslAuthenticationOptions*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mono::Net::Security::MonoSslAuthenticationOptions::set_ClientCertificateRequired(bool value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Net::Security::MonoSslAuthenticationOptions*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::Security::ServerCertSelectionCallback* Mono::Net::Security::MonoSslAuthenticationOptions::get_ServerCertSelectionDelegate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoSslAuthenticationOptions*>(), { "get_ServerCertSelectionDelegate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Security::ServerCertSelectionCallback*>(this, ___internal_method);
}
inline void Mono::Net::Security::MonoSslAuthenticationOptions::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoSslAuthenticationOptions*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mono::Net::Security::MonoSslAuthenticationOptions* Mono::Net::Security::MonoSslAuthenticationOptions::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Net::Security::MonoSslAuthenticationOptions*>());
}
// Ctor Parameters []
constexpr ::Mono::Net::Security::MonoSslAuthenticationOptions::MonoSslAuthenticationOptions() {}
