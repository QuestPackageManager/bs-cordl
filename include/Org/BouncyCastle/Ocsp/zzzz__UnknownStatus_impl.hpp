#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Ocsp/UnknownStatus.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__CertificateStatus_impl.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__UnknownStatus_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::UnknownStatus._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Ocsp::UnknownStatus::*)()>(&::Org::BouncyCastle::Ocsp::UnknownStatus::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3578d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::UnknownStatus*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Ocsp::UnknownStatus::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::UnknownStatus*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Ocsp::UnknownStatus* Org::BouncyCastle::Ocsp::UnknownStatus::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Ocsp::UnknownStatus*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Ocsp::UnknownStatus::UnknownStatus() {}
