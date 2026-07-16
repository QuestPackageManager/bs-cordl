#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Kisa/KisaObjectIdentifiers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/Kisa/zzzz__KisaObjectIdentifiers_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Kisa::KisaObjectIdentifiers._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Kisa::KisaObjectIdentifiers::*)()>(&::Org::BouncyCastle::Asn1::Kisa::KisaObjectIdentifiers::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3453cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Kisa::KisaObjectIdentifiers*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Kisa::KisaObjectIdentifiers::setStaticF_IdSeedCbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdSeedCbc", ::Org::BouncyCastle::Asn1::Kisa::KisaObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Kisa::KisaObjectIdentifiers::getStaticF_IdSeedCbc() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdSeedCbc", ::Org::BouncyCastle::Asn1::Kisa::KisaObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Kisa::KisaObjectIdentifiers::setStaticF_IdNpkiAppCmsSeedWrap(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdNpkiAppCmsSeedWrap", ::Org::BouncyCastle::Asn1::Kisa::KisaObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Kisa::KisaObjectIdentifiers::getStaticF_IdNpkiAppCmsSeedWrap() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdNpkiAppCmsSeedWrap", ::Org::BouncyCastle::Asn1::Kisa::KisaObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Kisa::KisaObjectIdentifiers::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Kisa::KisaObjectIdentifiers*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Kisa::KisaObjectIdentifiers* Org::BouncyCastle::Asn1::Kisa::KisaObjectIdentifiers::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Kisa::KisaObjectIdentifiers*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Kisa::KisaObjectIdentifiers::KisaObjectIdentifiers() {}
