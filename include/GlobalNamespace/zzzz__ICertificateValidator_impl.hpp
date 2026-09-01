#pragma once
// IWYU pragma private; include "GlobalNamespace\ICertificateValidator.hpp"
#include "GlobalNamespace/zzzz__ICertificateValidator_def.hpp"
#include "GlobalNamespace/zzzz__DnsEndPoint_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ICertificateValidator.ValidateCertificateChain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ICertificateValidator::*)(
    ::GlobalNamespace::DnsEndPoint*, ::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::ArrayW<::ArrayW<uint8_t>>)>(
    &::GlobalNamespace::ICertificateValidator::ValidateCertificateChain)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ICertificateValidator*>(), { ::i2c::class_of<::GlobalNamespace::ICertificateValidator*>(), 0 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ICertificateValidator::ValidateCertificateChain(::GlobalNamespace::DnsEndPoint* endPoint,
                                                                             ::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate,
                                                                             ::ArrayW<::ArrayW<uint8_t>> certificateChain) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ICertificateValidator*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, endPoint, certificate, certificateChain);
}
