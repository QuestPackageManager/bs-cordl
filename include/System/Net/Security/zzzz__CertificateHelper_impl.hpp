#pragma once
// IWYU pragma private; include "System/Net/Security/CertificateHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Security/zzzz__CertificateHelper_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2Collection_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509EnhancedKeyUsageExtension_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509KeyUsageExtension_def.hpp"
//  Writing Method size for method: ::System::Net::Security::CertificateHelper.GetEligibleClientCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2* (*)(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*)>(
        &::System::Net::Security::CertificateHelper::GetEligibleClientCertificate)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x4405a70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::CertificateHelper*>::get(), "GetEligibleClientCertificate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::CertificateHelper.GetEligibleClientCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2* (*)(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*)>(
        &::System::Net::Security::CertificateHelper::GetEligibleClientCertificate)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x4405b04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::CertificateHelper*>::get(), "GetEligibleClientCertificate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::CertificateHelper.IsValidClientCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*)>(
    &::System::Net::Security::CertificateHelper::IsValidClientCertificate)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x4405b98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::CertificateHelper*>::get(), "IsValidClientCertificate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::CertificateHelper.IsValidForClientAuthenticationEKU
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension*)>(
    &::System::Net::Security::CertificateHelper::IsValidForClientAuthenticationEKU)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x4405c90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::CertificateHelper*>::get(), "IsValidForClientAuthenticationEKU", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::CertificateHelper.IsValidForDigitalSignatureUsage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension*)>(
    &::System::Net::Security::CertificateHelper::IsValidForDigitalSignatureUsage)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4405d34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::CertificateHelper*>::get(), "IsValidForDigitalSignatureUsage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::CertificateHelper.GetEligibleClientCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2* (*)()>(
    &::System::Net::Security::CertificateHelper::GetEligibleClientCertificate)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x4405d54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::CertificateHelper*>::get(),
                                                                               "GetEligibleClientCertificate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2*
System::Net::Security::CertificateHelper::GetEligibleClientCertificate(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* candidateCerts) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::CertificateHelper*>::get(), "GetEligibleClientCertificate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2*, false>(nullptr, ___internal_method, candidateCerts);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2*
System::Net::Security::CertificateHelper::GetEligibleClientCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* candidateCerts) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::CertificateHelper*>::get(), "GetEligibleClientCertificate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2*, false>(nullptr, ___internal_method, candidateCerts);
}
inline bool System::Net::Security::CertificateHelper::IsValidClientCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate2* cert) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::CertificateHelper*>::get(), "IsValidClientCertificate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, cert);
}
inline bool System::Net::Security::CertificateHelper::IsValidForClientAuthenticationEKU(::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension* eku) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::CertificateHelper*>::get(), "IsValidForClientAuthenticationEKU", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, eku);
}
inline bool System::Net::Security::CertificateHelper::IsValidForDigitalSignatureUsage(::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension* ku) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::CertificateHelper*>::get(), "IsValidForDigitalSignatureUsage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ku);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* System::Net::Security::CertificateHelper::GetEligibleClientCertificate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::CertificateHelper*>::get(),
                                                                             "GetEligibleClientCertificate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::Security::CertificateHelper::CertificateHelper() {}
