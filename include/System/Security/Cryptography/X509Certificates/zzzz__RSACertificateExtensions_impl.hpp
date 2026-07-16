#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/RSACertificateExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__RSACertificateExtensions_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2_def.hpp"
#include "System/Security/Cryptography/zzzz__RSA_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::RSACertificateExtensions.GetRSAPublicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::RSA* (*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*)>(
    &::System::Security::Cryptography::X509Certificates::RSACertificateExtensions::GetRSAPublicKey)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5f577a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::RSACertificateExtensions*>(),
                                                             { "GetRSAPublicKey", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>() } })));
    return ___internal_method;
  }
};
inline ::System::Security::Cryptography::RSA*
System::Security::Cryptography::X509Certificates::RSACertificateExtensions::GetRSAPublicKey(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::RSACertificateExtensions*>(),
                                                           { "GetRSAPublicKey", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSA*>(nullptr, ___internal_method, certificate);
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::X509Certificates::RSACertificateExtensions::RSACertificateExtensions() {}
