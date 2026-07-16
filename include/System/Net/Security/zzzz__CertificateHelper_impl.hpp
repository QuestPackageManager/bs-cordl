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

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2* (*)(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*)>(
        &::System::Net::Security::CertificateHelper::GetEligibleClientCertificate)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x636a89c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::CertificateHelper*>(),
                                                { "GetEligibleClientCertificate", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::CertificateHelper.GetEligibleClientCertificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2* (*)(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*)>(
        &::System::Net::Security::CertificateHelper::GetEligibleClientCertificate)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x636a940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::CertificateHelper*>(),
                                                { "GetEligibleClientCertificate", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::CertificateHelper.IsValidClientCertificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*)>(
    &::System::Net::Security::CertificateHelper::IsValidClientCertificate)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x636a9e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::CertificateHelper*>(),
                                                             { "IsValidClientCertificate", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::CertificateHelper.IsValidForClientAuthenticationEKU
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension*)>(
    &::System::Net::Security::CertificateHelper::IsValidForClientAuthenticationEKU)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x636aae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::Security::CertificateHelper*>(),
                                         { "IsValidForClientAuthenticationEKU", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::CertificateHelper.IsValidForDigitalSignatureUsage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension*)>(
    &::System::Net::Security::CertificateHelper::IsValidForDigitalSignatureUsage)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x636ab8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::CertificateHelper*>(),
                                                { "IsValidForDigitalSignatureUsage", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::CertificateHelper.GetEligibleClientCertificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2* (*)()>(
    &::System::Net::Security::CertificateHelper::GetEligibleClientCertificate)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x636abac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::CertificateHelper*>(), { "GetEligibleClientCertificate", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2*
System::Net::Security::CertificateHelper::GetEligibleClientCertificate(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* candidateCerts) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::CertificateHelper*>(),
                                              { "GetEligibleClientCertificate", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(nullptr, ___internal_method, candidateCerts);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2*
System::Net::Security::CertificateHelper::GetEligibleClientCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* candidateCerts) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::CertificateHelper*>(),
                                              { "GetEligibleClientCertificate", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(nullptr, ___internal_method, candidateCerts);
}
inline bool System::Net::Security::CertificateHelper::IsValidClientCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate2* cert) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::CertificateHelper*>(),
                                                           { "IsValidClientCertificate", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cert);
}
inline bool System::Net::Security::CertificateHelper::IsValidForClientAuthenticationEKU(::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension* eku) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::CertificateHelper*>(),
                                              { "IsValidForClientAuthenticationEKU", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, eku);
}
inline bool System::Net::Security::CertificateHelper::IsValidForDigitalSignatureUsage(::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension* ku) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::CertificateHelper*>(),
                                              { "IsValidForDigitalSignatureUsage", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ku);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* System::Net::Security::CertificateHelper::GetEligibleClientCertificate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::CertificateHelper*>(), { "GetEligibleClientCertificate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::Security::CertificateHelper::CertificateHelper() {}
