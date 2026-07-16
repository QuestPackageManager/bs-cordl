#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Pkcs/PkcsObjectIdentifiers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/zzzz__PkcsObjectIdentifiers_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::*)()>(&::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3464a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_Pkcs1Oid(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Pkcs1Oid", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_Pkcs1Oid() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Pkcs1Oid", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_RsaEncryption(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "RsaEncryption", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_RsaEncryption() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "RsaEncryption", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_MD2WithRsaEncryption(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "MD2WithRsaEncryption", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_MD2WithRsaEncryption() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "MD2WithRsaEncryption", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_MD4WithRsaEncryption(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "MD4WithRsaEncryption", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_MD4WithRsaEncryption() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "MD4WithRsaEncryption", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_MD5WithRsaEncryption(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "MD5WithRsaEncryption", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_MD5WithRsaEncryption() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "MD5WithRsaEncryption", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_Sha1WithRsaEncryption(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Sha1WithRsaEncryption", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_Sha1WithRsaEncryption() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Sha1WithRsaEncryption", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_SrsaOaepEncryptionSet(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "SrsaOaepEncryptionSet", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_SrsaOaepEncryptionSet() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "SrsaOaepEncryptionSet", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdRsaesOaep(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdRsaesOaep", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdRsaesOaep() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdRsaesOaep", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdMgf1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdMgf1", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdMgf1() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdMgf1", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdPSpecified(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdPSpecified", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdPSpecified() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdPSpecified", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdRsassaPss(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdRsassaPss", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdRsassaPss() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdRsassaPss", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_Sha256WithRsaEncryption(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Sha256WithRsaEncryption", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_Sha256WithRsaEncryption() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Sha256WithRsaEncryption", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_Sha384WithRsaEncryption(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Sha384WithRsaEncryption", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_Sha384WithRsaEncryption() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Sha384WithRsaEncryption", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_Sha512WithRsaEncryption(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Sha512WithRsaEncryption", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_Sha512WithRsaEncryption() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Sha512WithRsaEncryption", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_Sha224WithRsaEncryption(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Sha224WithRsaEncryption", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_Sha224WithRsaEncryption() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Sha224WithRsaEncryption", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_Sha512_224WithRSAEncryption(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Sha512_224WithRSAEncryption", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_Sha512_224WithRSAEncryption() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Sha512_224WithRSAEncryption", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_Sha512_256WithRSAEncryption(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Sha512_256WithRSAEncryption", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_Sha512_256WithRSAEncryption() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Sha512_256WithRSAEncryption", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_DhKeyAgreement(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "DhKeyAgreement", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_DhKeyAgreement() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "DhKeyAgreement", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_PbeWithMD2AndDesCbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "PbeWithMD2AndDesCbc", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_PbeWithMD2AndDesCbc() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "PbeWithMD2AndDesCbc", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_PbeWithMD2AndRC2Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "PbeWithMD2AndRC2Cbc", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_PbeWithMD2AndRC2Cbc() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "PbeWithMD2AndRC2Cbc", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_PbeWithMD5AndDesCbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "PbeWithMD5AndDesCbc", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_PbeWithMD5AndDesCbc() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "PbeWithMD5AndDesCbc", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_PbeWithMD5AndRC2Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "PbeWithMD5AndRC2Cbc", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_PbeWithMD5AndRC2Cbc() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "PbeWithMD5AndRC2Cbc", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_PbeWithSha1AndDesCbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "PbeWithSha1AndDesCbc", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_PbeWithSha1AndDesCbc() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "PbeWithSha1AndDesCbc", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_PbeWithSha1AndRC2Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "PbeWithSha1AndRC2Cbc", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_PbeWithSha1AndRC2Cbc() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "PbeWithSha1AndRC2Cbc", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdPbeS2(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdPbeS2", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdPbeS2() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdPbeS2", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdPbkdf2(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdPbkdf2", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdPbkdf2() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdPbkdf2", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_DesEde3Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "DesEde3Cbc", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_DesEde3Cbc() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "DesEde3Cbc", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_RC2Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "RC2Cbc", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_RC2Cbc() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "RC2Cbc", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_rc4(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "rc4", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_rc4() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "rc4", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_MD2(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "MD2", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_MD2() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "MD2", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_MD4(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "MD4", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_MD4() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "MD4", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_MD5(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "MD5", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_MD5() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "MD5", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdHmacWithSha1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdHmacWithSha1", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdHmacWithSha1() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdHmacWithSha1", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdHmacWithSha224(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdHmacWithSha224", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdHmacWithSha224() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdHmacWithSha224", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdHmacWithSha256(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdHmacWithSha256", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdHmacWithSha256() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdHmacWithSha256", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdHmacWithSha384(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdHmacWithSha384", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdHmacWithSha384() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdHmacWithSha384", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdHmacWithSha512(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdHmacWithSha512", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdHmacWithSha512() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdHmacWithSha512", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_Data(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Data", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_Data() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Data", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_SignedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "SignedData", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_SignedData() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "SignedData", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_EnvelopedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "EnvelopedData", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_EnvelopedData() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "EnvelopedData", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_SignedAndEnvelopedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "SignedAndEnvelopedData", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_SignedAndEnvelopedData() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "SignedAndEnvelopedData", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_DigestedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "DigestedData", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_DigestedData() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "DigestedData", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_EncryptedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "EncryptedData", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_EncryptedData() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "EncryptedData", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_Pkcs9AtEmailAddress(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Pkcs9AtEmailAddress", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_Pkcs9AtEmailAddress() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Pkcs9AtEmailAddress", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_Pkcs9AtUnstructuredName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Pkcs9AtUnstructuredName", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_Pkcs9AtUnstructuredName() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Pkcs9AtUnstructuredName", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_Pkcs9AtContentType(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Pkcs9AtContentType", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_Pkcs9AtContentType() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Pkcs9AtContentType", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_Pkcs9AtMessageDigest(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Pkcs9AtMessageDigest", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_Pkcs9AtMessageDigest() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Pkcs9AtMessageDigest", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_Pkcs9AtSigningTime(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Pkcs9AtSigningTime", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_Pkcs9AtSigningTime() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Pkcs9AtSigningTime", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_Pkcs9AtCounterSignature(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Pkcs9AtCounterSignature", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_Pkcs9AtCounterSignature() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Pkcs9AtCounterSignature", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_Pkcs9AtChallengePassword(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Pkcs9AtChallengePassword", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_Pkcs9AtChallengePassword() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Pkcs9AtChallengePassword", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_Pkcs9AtUnstructuredAddress(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Pkcs9AtUnstructuredAddress", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_Pkcs9AtUnstructuredAddress() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Pkcs9AtUnstructuredAddress", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_Pkcs9AtExtendedCertificateAttributes(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Pkcs9AtExtendedCertificateAttributes", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_Pkcs9AtExtendedCertificateAttributes() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Pkcs9AtExtendedCertificateAttributes", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_Pkcs9AtSigningDescription(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Pkcs9AtSigningDescription", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_Pkcs9AtSigningDescription() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Pkcs9AtSigningDescription", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_Pkcs9AtExtensionRequest(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Pkcs9AtExtensionRequest", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_Pkcs9AtExtensionRequest() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Pkcs9AtExtensionRequest", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_Pkcs9AtSmimeCapabilities(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Pkcs9AtSmimeCapabilities", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_Pkcs9AtSmimeCapabilities() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Pkcs9AtSmimeCapabilities", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdSmime(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdSmime", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdSmime() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdSmime", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_Pkcs9AtFriendlyName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Pkcs9AtFriendlyName", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_Pkcs9AtFriendlyName() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Pkcs9AtFriendlyName", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_Pkcs9AtLocalKeyID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Pkcs9AtLocalKeyID", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_Pkcs9AtLocalKeyID() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Pkcs9AtLocalKeyID", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_X509CertType(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "X509CertType", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_X509CertType() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "X509CertType", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_X509Certificate(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "X509Certificate", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_X509Certificate() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "X509Certificate", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_SdsiCertificate(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "SdsiCertificate", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_SdsiCertificate() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "SdsiCertificate", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_X509Crl(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "X509Crl", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_X509Crl() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "X509Crl", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdAlg(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAlg", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdAlg() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAlg", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdAlgEsdh(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAlgEsdh", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdAlgEsdh() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAlgEsdh", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdAlgCms3DesWrap(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAlgCms3DesWrap", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdAlgCms3DesWrap() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAlgCms3DesWrap", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdAlgCmsRC2Wrap(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAlgCmsRC2Wrap", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdAlgCmsRC2Wrap() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAlgCmsRC2Wrap", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdAlgPwriKek(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAlgPwriKek", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdAlgPwriKek() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAlgPwriKek", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdAlgSsdh(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAlgSsdh", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdAlgSsdh() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAlgSsdh", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdRsaKem(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdRsaKem", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdRsaKem() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdRsaKem", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdAlgAeadChaCha20Poly1305(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAlgAeadChaCha20Poly1305", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdAlgAeadChaCha20Poly1305() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAlgAeadChaCha20Poly1305", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_PreferSignedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "PreferSignedData", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_PreferSignedData() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "PreferSignedData", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_CannotDecryptAny(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "CannotDecryptAny", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_CannotDecryptAny() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "CannotDecryptAny", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_SmimeCapabilitiesVersions(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "SmimeCapabilitiesVersions", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_SmimeCapabilitiesVersions() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "SmimeCapabilitiesVersions", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdAAReceiptRequest(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAAReceiptRequest", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdAAReceiptRequest() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAAReceiptRequest", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdCTAuthData(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdCTAuthData", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdCTAuthData() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdCTAuthData", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdCTTstInfo(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdCTTstInfo", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdCTTstInfo() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdCTTstInfo", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdCTCompressedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdCTCompressedData", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdCTCompressedData() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdCTCompressedData", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdCTAuthEnvelopedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdCTAuthEnvelopedData", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdCTAuthEnvelopedData() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdCTAuthEnvelopedData", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdCTTimestampedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdCTTimestampedData", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdCTTimestampedData() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdCTTimestampedData", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdCtiEtsProofOfOrigin(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdCtiEtsProofOfOrigin", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdCtiEtsProofOfOrigin() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdCtiEtsProofOfOrigin", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdCtiEtsProofOfReceipt(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdCtiEtsProofOfReceipt", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdCtiEtsProofOfReceipt() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdCtiEtsProofOfReceipt", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdCtiEtsProofOfDelivery(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdCtiEtsProofOfDelivery", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdCtiEtsProofOfDelivery() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdCtiEtsProofOfDelivery", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdCtiEtsProofOfSender(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdCtiEtsProofOfSender", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdCtiEtsProofOfSender() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdCtiEtsProofOfSender", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdCtiEtsProofOfApproval(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdCtiEtsProofOfApproval", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdCtiEtsProofOfApproval() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdCtiEtsProofOfApproval", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdCtiEtsProofOfCreation(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdCtiEtsProofOfCreation", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdCtiEtsProofOfCreation() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdCtiEtsProofOfCreation", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdAAOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAAOid", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdAAOid() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAAOid", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdAAContentHint(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAAContentHint", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdAAContentHint() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAAContentHint", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdAAMsgSigDigest(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAAMsgSigDigest", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdAAMsgSigDigest() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAAMsgSigDigest", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdAAContentReference(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAAContentReference", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdAAContentReference() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAAContentReference", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdAAEncrypKeyPref(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAAEncrypKeyPref", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdAAEncrypKeyPref() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAAEncrypKeyPref", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdAASigningCertificate(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAASigningCertificate", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdAASigningCertificate() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAASigningCertificate", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdAASigningCertificateV2(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAASigningCertificateV2", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdAASigningCertificateV2() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAASigningCertificateV2", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdAAContentIdentifier(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAAContentIdentifier", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdAAContentIdentifier() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAAContentIdentifier", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdAASignatureTimeStampToken(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAASignatureTimeStampToken", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdAASignatureTimeStampToken() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAASignatureTimeStampToken", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdAAEtsSigPolicyID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAAEtsSigPolicyID", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdAAEtsSigPolicyID() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAAEtsSigPolicyID", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdAAEtsCommitmentType(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAAEtsCommitmentType", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdAAEtsCommitmentType() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAAEtsCommitmentType", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdAAEtsSignerLocation(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAAEtsSignerLocation", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdAAEtsSignerLocation() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAAEtsSignerLocation", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdAAEtsSignerAttr(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAAEtsSignerAttr", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdAAEtsSignerAttr() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAAEtsSignerAttr", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdAAEtsOtherSigCert(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAAEtsOtherSigCert", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdAAEtsOtherSigCert() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAAEtsOtherSigCert", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdAAEtsContentTimestamp(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAAEtsContentTimestamp", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdAAEtsContentTimestamp() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAAEtsContentTimestamp", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdAAEtsCertificateRefs(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAAEtsCertificateRefs", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdAAEtsCertificateRefs() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAAEtsCertificateRefs", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdAAEtsRevocationRefs(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAAEtsRevocationRefs", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdAAEtsRevocationRefs() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAAEtsRevocationRefs", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdAAEtsCertValues(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAAEtsCertValues", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdAAEtsCertValues() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAAEtsCertValues", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdAAEtsRevocationValues(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAAEtsRevocationValues", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdAAEtsRevocationValues() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAAEtsRevocationValues", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdAAEtsEscTimeStamp(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAAEtsEscTimeStamp", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdAAEtsEscTimeStamp() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAAEtsEscTimeStamp", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdAAEtsCertCrlTimestamp(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAAEtsCertCrlTimestamp", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdAAEtsCertCrlTimestamp() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAAEtsCertCrlTimestamp", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdAAEtsArchiveTimestamp(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAAEtsArchiveTimestamp", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdAAEtsArchiveTimestamp() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAAEtsArchiveTimestamp", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdAADecryptKeyID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAADecryptKeyID", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdAADecryptKeyID() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAADecryptKeyID", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdAAImplCryptoAlgs(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAAImplCryptoAlgs", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdAAImplCryptoAlgs() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAAImplCryptoAlgs", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdAAAsymmDecryptKeyID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAAAsymmDecryptKeyID", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdAAAsymmDecryptKeyID() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAAAsymmDecryptKeyID", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdAAImplCompressAlgs(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAAImplCompressAlgs", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdAAImplCompressAlgs() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAAImplCompressAlgs", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdAACommunityIdentifiers(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAACommunityIdentifiers", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdAACommunityIdentifiers() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAACommunityIdentifiers", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdAASigPolicyID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAASigPolicyID", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdAASigPolicyID() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAASigPolicyID", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdAACommitmentType(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAACommitmentType", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdAACommitmentType() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAACommitmentType", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdAASignerLocation(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAASignerLocation", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdAASignerLocation() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAASignerLocation", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdAAOtherSigCert(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAAOtherSigCert", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdAAOtherSigCert() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdAAOtherSigCert", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdSpqEtsUri(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdSpqEtsUri", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdSpqEtsUri() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdSpqEtsUri", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_IdSpqEtsUNotice(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdSpqEtsUNotice", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_IdSpqEtsUNotice() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IdSpqEtsUNotice", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_KeyBag(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "KeyBag", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_KeyBag() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "KeyBag", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_Pkcs8ShroudedKeyBag(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Pkcs8ShroudedKeyBag", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_Pkcs8ShroudedKeyBag() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Pkcs8ShroudedKeyBag", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_CertBag(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "CertBag", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_CertBag() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "CertBag", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_CrlBag(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "CrlBag", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_CrlBag() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "CrlBag", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_SecretBag(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "SecretBag", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_SecretBag() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "SecretBag", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_SafeContentsBag(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "SafeContentsBag", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_SafeContentsBag() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "SafeContentsBag", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_PbeWithShaAnd128BitRC4(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "PbeWithShaAnd128BitRC4", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_PbeWithShaAnd128BitRC4() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "PbeWithShaAnd128BitRC4", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_PbeWithShaAnd40BitRC4(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "PbeWithShaAnd40BitRC4", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_PbeWithShaAnd40BitRC4() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "PbeWithShaAnd40BitRC4", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_PbeWithShaAnd3KeyTripleDesCbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "PbeWithShaAnd3KeyTripleDesCbc", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_PbeWithShaAnd3KeyTripleDesCbc() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "PbeWithShaAnd3KeyTripleDesCbc", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_PbeWithShaAnd2KeyTripleDesCbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "PbeWithShaAnd2KeyTripleDesCbc", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_PbeWithShaAnd2KeyTripleDesCbc() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "PbeWithShaAnd2KeyTripleDesCbc", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_PbeWithShaAnd128BitRC2Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "PbeWithShaAnd128BitRC2Cbc", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_PbeWithShaAnd128BitRC2Cbc() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "PbeWithShaAnd128BitRC2Cbc", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::setStaticF_PbewithShaAnd40BitRC2Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "PbewithShaAnd40BitRC2Cbc", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::getStaticF_PbewithShaAnd40BitRC2Cbc() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "PbewithShaAnd40BitRC2Cbc", ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>();
}
inline void Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers* Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers::PkcsObjectIdentifiers() {}
