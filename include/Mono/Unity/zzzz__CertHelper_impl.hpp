#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Unity/zzzz__CertHelper_def.hpp"
#include "Mono/Unity/zzzz__UnityTls_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
//  Writing Method size for method: ::Mono::Unity::CertHelper.AddCertificatesToNativeChain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list>, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*,
                         ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>)>(&::Mono::Unity::CertHelper::AddCertificatesToNativeChain)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x2901244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::CertHelper*>::get(), "AddCertificatesToNativeChain", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::CertHelper.AddCertificateToNativeChain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list>, ::System::Security::Cryptography::X509Certificates::X509Certificate*,
                         ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>)>(&::Mono::Unity::CertHelper::AddCertificateToNativeChain)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x290141c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::CertHelper*>::get(), "AddCertificateToNativeChain", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>>::get() })));
    return ___internal_method;
  }
};
inline void Mono::Unity::CertHelper::AddCertificatesToNativeChain(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list> nativeCertificateChain,
                                                                  ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* certificates,
                                                                  ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::CertHelper*>::get(), "AddCertificatesToNativeChain", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, nativeCertificateChain, certificates, errorState);
}
inline void Mono::Unity::CertHelper::AddCertificateToNativeChain(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list> nativeCertificateChain,
                                                                 ::System::Security::Cryptography::X509Certificates::X509Certificate* certificate,
                                                                 ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::CertHelper*>::get(), "AddCertificateToNativeChain", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, nativeCertificateChain, certificate, errorState);
}
// Ctor Parameters []
constexpr ::Mono::Unity::CertHelper::CertHelper() {}
