#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\EdEC\EdECObjectIdentifiers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/EdEC/zzzz__EdECObjectIdentifiers_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::EdEC::EdECObjectIdentifiers._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::EdEC::EdECObjectIdentifiers::*)()>(&::Org::BouncyCastle::Asn1::EdEC::EdECObjectIdentifiers::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x336f8a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::EdEC::EdECObjectIdentifiers*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::EdEC::EdECObjectIdentifiers::setStaticF_id_edwards_curve_algs(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "id_edwards_curve_algs", ::Org::BouncyCastle::Asn1::EdEC::EdECObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::EdEC::EdECObjectIdentifiers::getStaticF_id_edwards_curve_algs() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "id_edwards_curve_algs", ::Org::BouncyCastle::Asn1::EdEC::EdECObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::EdEC::EdECObjectIdentifiers::setStaticF_id_X25519(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "id_X25519", ::Org::BouncyCastle::Asn1::EdEC::EdECObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::EdEC::EdECObjectIdentifiers::getStaticF_id_X25519() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "id_X25519", ::Org::BouncyCastle::Asn1::EdEC::EdECObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::EdEC::EdECObjectIdentifiers::setStaticF_id_X448(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "id_X448", ::Org::BouncyCastle::Asn1::EdEC::EdECObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::EdEC::EdECObjectIdentifiers::getStaticF_id_X448() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "id_X448", ::Org::BouncyCastle::Asn1::EdEC::EdECObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::EdEC::EdECObjectIdentifiers::setStaticF_id_Ed25519(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "id_Ed25519", ::Org::BouncyCastle::Asn1::EdEC::EdECObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::EdEC::EdECObjectIdentifiers::getStaticF_id_Ed25519() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "id_Ed25519", ::Org::BouncyCastle::Asn1::EdEC::EdECObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::EdEC::EdECObjectIdentifiers::setStaticF_id_Ed448(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "id_Ed448", ::Org::BouncyCastle::Asn1::EdEC::EdECObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::EdEC::EdECObjectIdentifiers::getStaticF_id_Ed448() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "id_Ed448", ::Org::BouncyCastle::Asn1::EdEC::EdECObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::EdEC::EdECObjectIdentifiers::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::EdEC::EdECObjectIdentifiers*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::EdEC::EdECObjectIdentifiers* Org::BouncyCastle::Asn1::EdEC::EdECObjectIdentifiers::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::EdEC::EdECObjectIdentifiers*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::EdEC::EdECObjectIdentifiers::EdECObjectIdentifiers() {}
