#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Security/zzzz__CertificateHelper_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2Collection_def.hpp"
//  Writing Method size for method: ::System::Net::Security::CertificateHelper.GetEligibleClientCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2* (*)()>(
    &::System::Net::Security::CertificateHelper::GetEligibleClientCertificate)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x28ff090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::CertificateHelper*>::get(),
                                                                               "GetEligibleClientCertificate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::CertificateHelper.GetEligibleClientCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2* (*)(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*)>(
        &::System::Net::Security::CertificateHelper::GetEligibleClientCertificate)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x28ff3c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::CertificateHelper*>::get(), "GetEligibleClientCertificate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::CertificateHelper.GetEligibleClientCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2* (*)(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*)>(
        &::System::Net::Security::CertificateHelper::GetEligibleClientCertificate)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x28ff23c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::CertificateHelper*>::get(), "GetEligibleClientCertificate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*>::get() })));
    return ___internal_method;
  }
};
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* System::Net::Security::CertificateHelper::GetEligibleClientCertificate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::CertificateHelper*>::get(),
                                                                             "GetEligibleClientCertificate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2*, false>(nullptr, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2*
System::Net::Security::CertificateHelper::GetEligibleClientCertificate(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* candidateCerts) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::CertificateHelper*>::get(), "GetEligibleClientCertificate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2*, false>(nullptr, ___internal_method, candidateCerts);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2*
System::Net::Security::CertificateHelper::GetEligibleClientCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* candidateCerts) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::CertificateHelper*>::get(), "GetEligibleClientCertificate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2*, false>(nullptr, ___internal_method, candidateCerts);
}
// Ctor Parameters []
constexpr ::System::Net::Security::CertificateHelper::CertificateHelper() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
