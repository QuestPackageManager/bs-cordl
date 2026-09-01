#pragma once
// IWYU pragma private; include "Mono\Net\Security\SystemCertificateValidator.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509KeyUsageFlags_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Net/Security/zzzz__SystemCertificateValidator_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoTlsSettings_def.hpp"
//  Writing Method size for method: ::Mono::Net::Security::SystemCertificateValidator.NeedsChain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Mono::Security::Interface::MonoTlsSettings*)>(&::Mono::Net::Security::SystemCertificateValidator::NeedsChain)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd9728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::SystemCertificateValidator*>(),
                                                                                           { "NeedsChain", {}, { ::i2c::type_of<::Mono::Security::Interface::MonoTlsSettings*>() } })));
    return ___internal_method;
  }
};
inline void Mono::Net::Security::SystemCertificateValidator::setStaticF_is_macosx(bool value) {
  ::cordl_internals::setStaticField<bool, "is_macosx", ::Mono::Net::Security::SystemCertificateValidator*>(std::forward<bool>(value));
}
inline bool Mono::Net::Security::SystemCertificateValidator::getStaticF_is_macosx() {
  return ::cordl_internals::getStaticField<bool, "is_macosx", ::Mono::Net::Security::SystemCertificateValidator*>();
}
inline void Mono::Net::Security::SystemCertificateValidator::setStaticF_s_flags(::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags value) {
  ::cordl_internals::setStaticField<::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags, "s_flags", ::Mono::Net::Security::SystemCertificateValidator*>(
      std::forward<::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags>(value));
}
inline ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags Mono::Net::Security::SystemCertificateValidator::getStaticF_s_flags() {
  return ::cordl_internals::getStaticField<::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags, "s_flags", ::Mono::Net::Security::SystemCertificateValidator*>();
}
inline bool Mono::Net::Security::SystemCertificateValidator::NeedsChain(::Mono::Security::Interface::MonoTlsSettings* settings) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::SystemCertificateValidator*>(),
                                                                                         { "NeedsChain", {}, { ::i2c::type_of<::Mono::Security::Interface::MonoTlsSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, settings);
}
// Ctor Parameters []
constexpr ::Mono::Net::Security::SystemCertificateValidator::SystemCertificateValidator() {}
