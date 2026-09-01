#pragma once
// IWYU pragma private; include "Mono\Unity\UnityTlsConversions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Unity/zzzz__UnityTlsConversions_def.hpp"
#include "Mono/Security/Interface/zzzz__AlertDescription_def.hpp"
#include "Mono/Security/Interface/zzzz__TlsProtocols_def.hpp"
#include "Mono/Unity/zzzz__UnityTls_def.hpp"
#include "System/Net/Security/zzzz__SslPolicyErrors_def.hpp"
#include "System/Security/Authentication/zzzz__SslProtocols_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainStatusFlags_def.hpp"
//  Writing Method size for method: ::Mono::Unity::UnityTlsConversions.GetMinProtocol
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Unity::UnityTls_unitytls_protocol (*)(::System::Security::Authentication::SslProtocols)>(
    &::Mono::Unity::UnityTlsConversions::GetMinProtocol)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5fd3324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Mono::Unity::UnityTlsConversions*>(), { "GetMinProtocol", {}, { ::i2c::type_of<::System::Security::Authentication::SslProtocols>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsConversions.GetMaxProtocol
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Unity::UnityTls_unitytls_protocol (*)(::System::Security::Authentication::SslProtocols)>(
    &::Mono::Unity::UnityTlsConversions::GetMaxProtocol)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5fd3354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Mono::Unity::UnityTlsConversions*>(), { "GetMaxProtocol", {}, { ::i2c::type_of<::System::Security::Authentication::SslProtocols>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsConversions.ConvertProtocolVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::Interface::TlsProtocols (*)(::Mono::Unity::UnityTls_unitytls_protocol)>(
    &::Mono::Unity::UnityTlsConversions::ConvertProtocolVersion)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fd3f88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Mono::Unity::UnityTlsConversions*>(), { "ConvertProtocolVersion", {}, { ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_protocol>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsConversions.VerifyResultToAlertDescription
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::Interface::AlertDescription (*)(
    ::Mono::Unity::UnityTls_unitytls_x509verify_result, ::Mono::Security::Interface::AlertDescription)>(&::Mono::Unity::UnityTlsConversions::VerifyResultToAlertDescription)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5fd1120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Mono::Unity::UnityTlsConversions*>(),
            { "VerifyResultToAlertDescription", {}, { ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_x509verify_result>(), ::i2c::type_of<::Mono::Security::Interface::AlertDescription>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsConversions.VerifyResultToPolicyErrror
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Security::SslPolicyErrors (*)(::Mono::Unity::UnityTls_unitytls_x509verify_result)>(
    &::Mono::Unity::UnityTlsConversions::VerifyResultToPolicyErrror)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5fd5390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Mono::Unity::UnityTlsConversions*>(), { "VerifyResultToPolicyErrror", {}, { ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_x509verify_result>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsConversions.VerifyResultToChainStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags (*)(::Mono::Unity::UnityTls_unitytls_x509verify_result)>(
    &::Mono::Unity::UnityTlsConversions::VerifyResultToChainStatus)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5fd53c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Mono::Unity::UnityTlsConversions*>(), { "VerifyResultToChainStatus", {}, { ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_x509verify_result>() } })));
    return ___internal_method;
  }
};
inline ::Mono::Unity::UnityTls_unitytls_protocol Mono::Unity::UnityTlsConversions::GetMinProtocol(::System::Security::Authentication::SslProtocols protocols) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Mono::Unity::UnityTlsConversions*>(), { "GetMinProtocol", {}, { ::i2c::type_of<::System::Security::Authentication::SslProtocols>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Unity::UnityTls_unitytls_protocol>(nullptr, ___internal_method, protocols);
}
inline ::Mono::Unity::UnityTls_unitytls_protocol Mono::Unity::UnityTlsConversions::GetMaxProtocol(::System::Security::Authentication::SslProtocols protocols) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Mono::Unity::UnityTlsConversions*>(), { "GetMaxProtocol", {}, { ::i2c::type_of<::System::Security::Authentication::SslProtocols>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Unity::UnityTls_unitytls_protocol>(nullptr, ___internal_method, protocols);
}
inline ::Mono::Security::Interface::TlsProtocols Mono::Unity::UnityTlsConversions::ConvertProtocolVersion(::Mono::Unity::UnityTls_unitytls_protocol protocol) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Mono::Unity::UnityTlsConversions*>(), { "ConvertProtocolVersion", {}, { ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_protocol>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::Interface::TlsProtocols>(nullptr, ___internal_method, protocol);
}
inline ::Mono::Security::Interface::AlertDescription Mono::Unity::UnityTlsConversions::VerifyResultToAlertDescription(::Mono::Unity::UnityTls_unitytls_x509verify_result verifyResult,
                                                                                                                      ::Mono::Security::Interface::AlertDescription defaultAlert) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Mono::Unity::UnityTlsConversions*>(),
          { "VerifyResultToAlertDescription", {}, { ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_x509verify_result>(), ::i2c::type_of<::Mono::Security::Interface::AlertDescription>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::Interface::AlertDescription>(nullptr, ___internal_method, verifyResult, defaultAlert);
}
inline ::System::Net::Security::SslPolicyErrors Mono::Unity::UnityTlsConversions::VerifyResultToPolicyErrror(::Mono::Unity::UnityTls_unitytls_x509verify_result verifyResult) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Mono::Unity::UnityTlsConversions*>(), { "VerifyResultToPolicyErrror", {}, { ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_x509verify_result>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Security::SslPolicyErrors>(nullptr, ___internal_method, verifyResult);
}
inline ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags
Mono::Unity::UnityTlsConversions::VerifyResultToChainStatus(::Mono::Unity::UnityTls_unitytls_x509verify_result verifyResult) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Mono::Unity::UnityTlsConversions*>(), { "VerifyResultToChainStatus", {}, { ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_x509verify_result>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags>(nullptr, ___internal_method, verifyResult);
}
// Ctor Parameters []
constexpr ::Mono::Unity::UnityTlsConversions::UnityTlsConversions() {}
