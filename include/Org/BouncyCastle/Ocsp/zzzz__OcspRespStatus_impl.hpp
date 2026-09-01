#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Ocsp\OcspRespStatus.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__OcspRespStatus_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OcspRespStatus._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Ocsp::OcspRespStatus::*)()>(&::Org::BouncyCastle::Ocsp::OcspRespStatus::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35784dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspRespStatus*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Ocsp::OcspRespStatus::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspRespStatus*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Ocsp::OcspRespStatus* Org::BouncyCastle::Ocsp::OcspRespStatus::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Ocsp::OcspRespStatus*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Ocsp::OcspRespStatus::OcspRespStatus() {}
