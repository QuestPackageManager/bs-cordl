#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Anssi\AnssiObjectIdentifiers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/Anssi/zzzz__AnssiObjectIdentifiers_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers::*)()>(&::Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3345818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers::setStaticF_FRP256v1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "FRP256v1", ::Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers::getStaticF_FRP256v1() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "FRP256v1", ::Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers* Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers::AnssiObjectIdentifiers() {}
