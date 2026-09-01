#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\BerApplicationSpecific.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerApplicationSpecific_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__BerApplicationSpecific_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1EncodableVector_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerApplicationSpecific._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::BerApplicationSpecific::*)(int32_t, ::Org::BouncyCastle::Asn1::Asn1EncodableVector*)>(
    &::Org::BouncyCastle::Asn1::BerApplicationSpecific::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36890b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerApplicationSpecific*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1EncodableVector*>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::BerApplicationSpecific::_ctor(int32_t tagNo, ::Org::BouncyCastle::Asn1::Asn1EncodableVector* vec) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerApplicationSpecific*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1EncodableVector*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tagNo, vec);
}
inline ::Org::BouncyCastle::Asn1::BerApplicationSpecific* Org::BouncyCastle::Asn1::BerApplicationSpecific::New_ctor(int32_t tagNo, ::Org::BouncyCastle::Asn1::Asn1EncodableVector* vec) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::BerApplicationSpecific*>(tagNo, vec));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::BerApplicationSpecific::BerApplicationSpecific() {}
