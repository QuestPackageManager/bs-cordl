#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Esf\EsfAttributes.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/Esf/zzzz__EsfAttributes_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::EsfAttributes._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::EsfAttributes::*)()>(&::Org::BouncyCastle::Asn1::Esf::EsfAttributes::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3374008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::EsfAttributes*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Esf::EsfAttributes::setStaticF_SigPolicyId(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "SigPolicyId", ::Org::BouncyCastle::Asn1::Esf::EsfAttributes*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Esf::EsfAttributes::getStaticF_SigPolicyId() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "SigPolicyId", ::Org::BouncyCastle::Asn1::Esf::EsfAttributes*>();
}
inline void Org::BouncyCastle::Asn1::Esf::EsfAttributes::setStaticF_CommitmentType(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "CommitmentType", ::Org::BouncyCastle::Asn1::Esf::EsfAttributes*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Esf::EsfAttributes::getStaticF_CommitmentType() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "CommitmentType", ::Org::BouncyCastle::Asn1::Esf::EsfAttributes*>();
}
inline void Org::BouncyCastle::Asn1::Esf::EsfAttributes::setStaticF_SignerLocation(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "SignerLocation", ::Org::BouncyCastle::Asn1::Esf::EsfAttributes*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Esf::EsfAttributes::getStaticF_SignerLocation() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "SignerLocation", ::Org::BouncyCastle::Asn1::Esf::EsfAttributes*>();
}
inline void Org::BouncyCastle::Asn1::Esf::EsfAttributes::setStaticF_SignerAttr(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "SignerAttr", ::Org::BouncyCastle::Asn1::Esf::EsfAttributes*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Esf::EsfAttributes::getStaticF_SignerAttr() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "SignerAttr", ::Org::BouncyCastle::Asn1::Esf::EsfAttributes*>();
}
inline void Org::BouncyCastle::Asn1::Esf::EsfAttributes::setStaticF_OtherSigCert(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "OtherSigCert", ::Org::BouncyCastle::Asn1::Esf::EsfAttributes*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Esf::EsfAttributes::getStaticF_OtherSigCert() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "OtherSigCert", ::Org::BouncyCastle::Asn1::Esf::EsfAttributes*>();
}
inline void Org::BouncyCastle::Asn1::Esf::EsfAttributes::setStaticF_ContentTimestamp(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ContentTimestamp", ::Org::BouncyCastle::Asn1::Esf::EsfAttributes*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Esf::EsfAttributes::getStaticF_ContentTimestamp() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ContentTimestamp", ::Org::BouncyCastle::Asn1::Esf::EsfAttributes*>();
}
inline void Org::BouncyCastle::Asn1::Esf::EsfAttributes::setStaticF_CertificateRefs(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "CertificateRefs", ::Org::BouncyCastle::Asn1::Esf::EsfAttributes*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Esf::EsfAttributes::getStaticF_CertificateRefs() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "CertificateRefs", ::Org::BouncyCastle::Asn1::Esf::EsfAttributes*>();
}
inline void Org::BouncyCastle::Asn1::Esf::EsfAttributes::setStaticF_RevocationRefs(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "RevocationRefs", ::Org::BouncyCastle::Asn1::Esf::EsfAttributes*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Esf::EsfAttributes::getStaticF_RevocationRefs() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "RevocationRefs", ::Org::BouncyCastle::Asn1::Esf::EsfAttributes*>();
}
inline void Org::BouncyCastle::Asn1::Esf::EsfAttributes::setStaticF_CertValues(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "CertValues", ::Org::BouncyCastle::Asn1::Esf::EsfAttributes*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Esf::EsfAttributes::getStaticF_CertValues() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "CertValues", ::Org::BouncyCastle::Asn1::Esf::EsfAttributes*>();
}
inline void Org::BouncyCastle::Asn1::Esf::EsfAttributes::setStaticF_RevocationValues(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "RevocationValues", ::Org::BouncyCastle::Asn1::Esf::EsfAttributes*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Esf::EsfAttributes::getStaticF_RevocationValues() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "RevocationValues", ::Org::BouncyCastle::Asn1::Esf::EsfAttributes*>();
}
inline void Org::BouncyCastle::Asn1::Esf::EsfAttributes::setStaticF_EscTimeStamp(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "EscTimeStamp", ::Org::BouncyCastle::Asn1::Esf::EsfAttributes*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Esf::EsfAttributes::getStaticF_EscTimeStamp() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "EscTimeStamp", ::Org::BouncyCastle::Asn1::Esf::EsfAttributes*>();
}
inline void Org::BouncyCastle::Asn1::Esf::EsfAttributes::setStaticF_CertCrlTimestamp(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "CertCrlTimestamp", ::Org::BouncyCastle::Asn1::Esf::EsfAttributes*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Esf::EsfAttributes::getStaticF_CertCrlTimestamp() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "CertCrlTimestamp", ::Org::BouncyCastle::Asn1::Esf::EsfAttributes*>();
}
inline void Org::BouncyCastle::Asn1::Esf::EsfAttributes::setStaticF_ArchiveTimestamp(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ArchiveTimestamp", ::Org::BouncyCastle::Asn1::Esf::EsfAttributes*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Esf::EsfAttributes::getStaticF_ArchiveTimestamp() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ArchiveTimestamp", ::Org::BouncyCastle::Asn1::Esf::EsfAttributes*>();
}
inline void Org::BouncyCastle::Asn1::Esf::EsfAttributes::setStaticF_ArchiveTimestampV2(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ArchiveTimestampV2", ::Org::BouncyCastle::Asn1::Esf::EsfAttributes*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Esf::EsfAttributes::getStaticF_ArchiveTimestampV2() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ArchiveTimestampV2", ::Org::BouncyCastle::Asn1::Esf::EsfAttributes*>();
}
inline void Org::BouncyCastle::Asn1::Esf::EsfAttributes::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::EsfAttributes*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Esf::EsfAttributes* Org::BouncyCastle::Asn1::Esf::EsfAttributes::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::EsfAttributes*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Esf::EsfAttributes::EsfAttributes() {}
