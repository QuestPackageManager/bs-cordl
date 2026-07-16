#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Ocsp/CertificateStatus.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__CertificateStatus_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::CertificateStatus._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Ocsp::CertificateStatus::*)()>(&::Org::BouncyCastle::Ocsp::CertificateStatus::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x357325c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::CertificateStatus*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Ocsp::CertificateStatus::setStaticF_Good(::Org::BouncyCastle::Ocsp::CertificateStatus* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Ocsp::CertificateStatus*, "Good", ::Org::BouncyCastle::Ocsp::CertificateStatus*>(
      std::forward<::Org::BouncyCastle::Ocsp::CertificateStatus*>(value));
}
inline ::Org::BouncyCastle::Ocsp::CertificateStatus* Org::BouncyCastle::Ocsp::CertificateStatus::getStaticF_Good() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Ocsp::CertificateStatus*, "Good", ::Org::BouncyCastle::Ocsp::CertificateStatus*>();
}
inline void Org::BouncyCastle::Ocsp::CertificateStatus::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::CertificateStatus*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Ocsp::CertificateStatus* Org::BouncyCastle::Ocsp::CertificateStatus::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Ocsp::CertificateStatus*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Ocsp::CertificateStatus::CertificateStatus() {}
