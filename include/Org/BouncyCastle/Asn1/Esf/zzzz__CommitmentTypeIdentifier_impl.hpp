#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Esf/CommitmentTypeIdentifier.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/Esf/zzzz__CommitmentTypeIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIdentifier._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIdentifier::*)()>(&::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIdentifier::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x336ddc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIdentifier*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Esf::CommitmentTypeIdentifier::setStaticF_ProofOfOrigin(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ProofOfOrigin", ::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIdentifier*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Esf::CommitmentTypeIdentifier::getStaticF_ProofOfOrigin() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ProofOfOrigin", ::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIdentifier*>();
}
inline void Org::BouncyCastle::Asn1::Esf::CommitmentTypeIdentifier::setStaticF_ProofOfReceipt(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ProofOfReceipt", ::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIdentifier*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Esf::CommitmentTypeIdentifier::getStaticF_ProofOfReceipt() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ProofOfReceipt", ::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIdentifier*>();
}
inline void Org::BouncyCastle::Asn1::Esf::CommitmentTypeIdentifier::setStaticF_ProofOfDelivery(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ProofOfDelivery", ::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIdentifier*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Esf::CommitmentTypeIdentifier::getStaticF_ProofOfDelivery() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ProofOfDelivery", ::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIdentifier*>();
}
inline void Org::BouncyCastle::Asn1::Esf::CommitmentTypeIdentifier::setStaticF_ProofOfSender(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ProofOfSender", ::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIdentifier*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Esf::CommitmentTypeIdentifier::getStaticF_ProofOfSender() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ProofOfSender", ::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIdentifier*>();
}
inline void Org::BouncyCastle::Asn1::Esf::CommitmentTypeIdentifier::setStaticF_ProofOfApproval(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ProofOfApproval", ::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIdentifier*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Esf::CommitmentTypeIdentifier::getStaticF_ProofOfApproval() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ProofOfApproval", ::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIdentifier*>();
}
inline void Org::BouncyCastle::Asn1::Esf::CommitmentTypeIdentifier::setStaticF_ProofOfCreation(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ProofOfCreation", ::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIdentifier*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Esf::CommitmentTypeIdentifier::getStaticF_ProofOfCreation() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ProofOfCreation", ::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIdentifier*>();
}
inline void Org::BouncyCastle::Asn1::Esf::CommitmentTypeIdentifier::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIdentifier*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIdentifier* Org::BouncyCastle::Asn1::Esf::CommitmentTypeIdentifier::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIdentifier*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIdentifier::CommitmentTypeIdentifier() {}
