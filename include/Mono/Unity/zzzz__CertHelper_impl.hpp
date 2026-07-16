#pragma once
// IWYU pragma private; include "Mono/Unity/CertHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Unity/zzzz__CertHelper_def.hpp"
#include "Mono/Unity/zzzz__UnityTls_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
//  Writing Method size for method: ::Mono::Unity::CertHelper.AddCertificatesToNativeChain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mono::Unity::UnityTls_unitytls_x509list*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*,
                                                                ::Mono::Unity::UnityTls_unitytls_errorstate*)>(&::Mono::Unity::CertHelper::AddCertificatesToNativeChain)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5fcb394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Unity::CertHelper*>(), { "AddCertificatesToNativeChain",
                                                                                                 {},
                                                                                                 { ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_x509list*>(),
                                                                                                   ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>(),
                                                                                                   ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_errorstate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::CertHelper.AddCertificateToNativeChain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mono::Unity::UnityTls_unitytls_x509list*, ::System::Security::Cryptography::X509Certificates::X509Certificate*,
                                                                ::Mono::Unity::UnityTls_unitytls_errorstate*)>(&::Mono::Unity::CertHelper::AddCertificateToNativeChain)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5fcb534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Unity::CertHelper*>(), { "AddCertificateToNativeChain",
                                                                                                              {},
                                                                                                              { ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_x509list*>(),
                                                                                                                ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                                                                                                                ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_errorstate*>() } })));
    return ___internal_method;
  }
};
inline void Mono::Unity::CertHelper::AddCertificatesToNativeChain(::Mono::Unity::UnityTls_unitytls_x509list* nativeCertificateChain,
                                                                  ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* certificates,
                                                                  ::Mono::Unity::UnityTls_unitytls_errorstate* errorState) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Unity::CertHelper*>(), { "AddCertificatesToNativeChain",
                                                                                               {},
                                                                                               { ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_x509list*>(),
                                                                                                 ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>(),
                                                                                                 ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_errorstate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nativeCertificateChain, certificates, errorState);
}
inline void Mono::Unity::CertHelper::AddCertificateToNativeChain(::Mono::Unity::UnityTls_unitytls_x509list* nativeCertificateChain,
                                                                 ::System::Security::Cryptography::X509Certificates::X509Certificate* certificate,
                                                                 ::Mono::Unity::UnityTls_unitytls_errorstate* errorState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Unity::CertHelper*>(), { "AddCertificateToNativeChain",
                                                                                                            {},
                                                                                                            { ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_x509list*>(),
                                                                                                              ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                                                                                                              ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_errorstate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nativeCertificateChain, certificate, errorState);
}
// Ctor Parameters []
constexpr ::Mono::Unity::CertHelper::CertHelper() {}
