#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Ocsp\OcscpRespStatus.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__OcspRespStatus_impl.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__OcscpRespStatus_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OcscpRespStatus._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Ocsp::OcscpRespStatus::*)()>(&::Org::BouncyCastle::Ocsp::OcscpRespStatus::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35784e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcscpRespStatus*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Ocsp::OcscpRespStatus::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcscpRespStatus*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Ocsp::OcscpRespStatus* Org::BouncyCastle::Ocsp::OcscpRespStatus::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Ocsp::OcscpRespStatus*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Ocsp::OcscpRespStatus::OcscpRespStatus() {}
