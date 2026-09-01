#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Ocsp\OcspResponseStatus.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerEnumerated_impl.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__OcspResponseStatus_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerEnumerated_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus::*)(int32_t)>(&::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x345c50c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus::*)(::Org::BouncyCastle::Asn1::DerEnumerated*)>(
    &::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x345b9bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerEnumerated*>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus::_ctor(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus::_ctor(::Org::BouncyCastle::Asn1::DerEnumerated* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerEnumerated*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus* Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus::New_ctor(int32_t value) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus*>(value));
}
inline ::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus* Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus::New_ctor(::Org::BouncyCastle::Asn1::DerEnumerated* value) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus*>(value));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus::OcspResponseStatus() {}
