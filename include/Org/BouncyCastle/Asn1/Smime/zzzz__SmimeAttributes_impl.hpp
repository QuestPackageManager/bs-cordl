#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Smime/SmimeAttributes.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/Smime/zzzz__SmimeAttributes_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Smime::SmimeAttributes._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Smime::SmimeAttributes::*)()>(&::Org::BouncyCastle::Asn1::Smime::SmimeAttributes::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3548998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Smime::SmimeAttributes*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Smime::SmimeAttributes::setStaticF_SmimeCapabilities(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "SmimeCapabilities", ::Org::BouncyCastle::Asn1::Smime::SmimeAttributes*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Smime::SmimeAttributes::getStaticF_SmimeCapabilities() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "SmimeCapabilities", ::Org::BouncyCastle::Asn1::Smime::SmimeAttributes*>();
}
inline void Org::BouncyCastle::Asn1::Smime::SmimeAttributes::setStaticF_EncrypKeyPref(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "EncrypKeyPref", ::Org::BouncyCastle::Asn1::Smime::SmimeAttributes*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Smime::SmimeAttributes::getStaticF_EncrypKeyPref() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "EncrypKeyPref", ::Org::BouncyCastle::Asn1::Smime::SmimeAttributes*>();
}
inline void Org::BouncyCastle::Asn1::Smime::SmimeAttributes::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Smime::SmimeAttributes*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Smime::SmimeAttributes* Org::BouncyCastle::Asn1::Smime::SmimeAttributes::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Smime::SmimeAttributes*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Smime::SmimeAttributes::SmimeAttributes() {}
