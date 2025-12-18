#pragma once
// IWYU pragma private; include "Mono/Unity/CertHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Unity/zzzz__CertHelper_def.hpp"
#include "Mono/Unity/zzzz__UnityTls_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
//  Writing Method size for method: ::Mono::Unity::CertHelper.AddCertificatesToNativeChain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::Mono::Unity::UnityTls_unitytls_x509list*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::Mono::Unity::UnityTls_unitytls_errorstate*)>(
        &::Mono::Unity::CertHelper::AddCertificatesToNativeChain)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5e1c054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::CertHelper*>::get(), "AddCertificatesToNativeChain", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Unity::UnityTls_unitytls_x509list*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Unity::UnityTls_unitytls_errorstate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::CertHelper.AddCertificateToNativeChain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::Mono::Unity::UnityTls_unitytls_x509list*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Mono::Unity::UnityTls_unitytls_errorstate*)>(
        &::Mono::Unity::CertHelper::AddCertificateToNativeChain)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5e1c1f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::CertHelper*>::get(), "AddCertificateToNativeChain", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Unity::UnityTls_unitytls_x509list*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Unity::UnityTls_unitytls_errorstate*>::get() })));
    return ___internal_method;
  }
};
inline void Mono::Unity::CertHelper::AddCertificatesToNativeChain(::Mono::Unity::UnityTls_unitytls_x509list* nativeCertificateChain,
                                                                  ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* certificates,
                                                                  ::Mono::Unity::UnityTls_unitytls_errorstate* errorState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::CertHelper*>::get(), "AddCertificatesToNativeChain", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Unity::UnityTls_unitytls_x509list*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Unity::UnityTls_unitytls_errorstate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, nativeCertificateChain, certificates, errorState);
}
inline void Mono::Unity::CertHelper::AddCertificateToNativeChain(::Mono::Unity::UnityTls_unitytls_x509list* nativeCertificateChain,
                                                                 ::System::Security::Cryptography::X509Certificates::X509Certificate* certificate,
                                                                 ::Mono::Unity::UnityTls_unitytls_errorstate* errorState) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::CertHelper*>::get(), "AddCertificateToNativeChain", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Unity::UnityTls_unitytls_x509list*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Unity::UnityTls_unitytls_errorstate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, nativeCertificateChain, certificate, errorState);
}
// Ctor Parameters []
constexpr ::Mono::Unity::CertHelper::CertHelper() {}
