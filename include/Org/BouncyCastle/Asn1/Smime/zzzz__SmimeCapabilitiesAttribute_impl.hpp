#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Smime\SmimeCapabilitiesAttribute.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AttributeX509_impl.hpp"
#include "Org/BouncyCastle/Asn1/Smime/zzzz__SmimeCapabilitiesAttribute_def.hpp"
#include "Org/BouncyCastle/Asn1/Smime/zzzz__SmimeCapabilityVector_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilitiesAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Smime::SmimeCapabilitiesAttribute::*)(::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector*)>(
    &::Org::BouncyCastle::Asn1::Smime::SmimeCapabilitiesAttribute::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x354becc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Smime::SmimeCapabilitiesAttribute*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector*>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Smime::SmimeCapabilitiesAttribute::_ctor(::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector* capabilities) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Smime::SmimeCapabilitiesAttribute*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capabilities);
}
inline ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilitiesAttribute*
Org::BouncyCastle::Asn1::Smime::SmimeCapabilitiesAttribute::New_ctor(::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector* capabilities) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Smime::SmimeCapabilitiesAttribute*>(capabilities));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilitiesAttribute::SmimeCapabilitiesAttribute() {}
