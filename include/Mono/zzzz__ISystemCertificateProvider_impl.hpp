#pragma once
// IWYU pragma private; include "Mono/ISystemCertificateProvider.hpp"
#include "Mono/zzzz__ISystemCertificateProvider_def.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafePasswordHandle_def.hpp"
#include "Mono/zzzz__CertificateImportFlags_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateImpl_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509KeyStorageFlags_def.hpp"
//  Writing Method size for method: ::Mono::ISystemCertificateProvider.Import
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateImpl* (
    ::Mono::ISystemCertificateProvider::*)(::ArrayW<uint8_t>, ::Mono::CertificateImportFlags)>(&::Mono::ISystemCertificateProvider::Import)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::ISystemCertificateProvider*>(), { ::i2c::class_of<::Mono::ISystemCertificateProvider*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::ISystemCertificateProvider.Import
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateImpl* (
    ::Mono::ISystemCertificateProvider::*)(::ArrayW<uint8_t>, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags,
                                           ::Mono::CertificateImportFlags)>(&::Mono::ISystemCertificateProvider::Import)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::ISystemCertificateProvider*>(), { ::i2c::class_of<::Mono::ISystemCertificateProvider*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::ISystemCertificateProvider.Import
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateImpl* (
    ::Mono::ISystemCertificateProvider::*)(::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Mono::CertificateImportFlags)>(&::Mono::ISystemCertificateProvider::Import)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::ISystemCertificateProvider*>(), { ::i2c::class_of<::Mono::ISystemCertificateProvider*>(), 2 }));
    return ___internal_method;
  }
};
inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Mono::ISystemCertificateProvider::Import(::ArrayW<uint8_t> data, ::Mono::CertificateImportFlags importFlags) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::ISystemCertificateProvider*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(this, ___internal_method, data, importFlags);
}
inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl*
Mono::ISystemCertificateProvider::Import(::ArrayW<uint8_t> data, ::Microsoft::Win32::SafeHandles::SafePasswordHandle* password,
                                         ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags, ::Mono::CertificateImportFlags importFlags) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::ISystemCertificateProvider*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(this, ___internal_method, data, password, keyStorageFlags, importFlags);
}
inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Mono::ISystemCertificateProvider::Import(::System::Security::Cryptography::X509Certificates::X509Certificate* cert,
                                                                                                                         ::Mono::CertificateImportFlags importFlags) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::ISystemCertificateProvider*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(this, ___internal_method, cert, importFlags);
}
