#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\X509\KeyPurposeID.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__KeyPurposeID_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::KeyPurposeID._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::KeyPurposeID::*)(::StringW)>(&::Org::BouncyCastle::Asn1::X509::KeyPurposeID::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3660d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::X509::KeyPurposeID::setStaticF_AnyExtendedKeyUsage(::Org::BouncyCastle::Asn1::X509::KeyPurposeID* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*, "AnyExtendedKeyUsage", ::Org::BouncyCastle::Asn1::X509::KeyPurposeID*>(
      std::forward<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*>(value));
}
inline ::Org::BouncyCastle::Asn1::X509::KeyPurposeID* Org::BouncyCastle::Asn1::X509::KeyPurposeID::getStaticF_AnyExtendedKeyUsage() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*, "AnyExtendedKeyUsage", ::Org::BouncyCastle::Asn1::X509::KeyPurposeID*>();
}
inline void Org::BouncyCastle::Asn1::X509::KeyPurposeID::setStaticF_IdKPServerAuth(::Org::BouncyCastle::Asn1::X509::KeyPurposeID* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*, "IdKPServerAuth", ::Org::BouncyCastle::Asn1::X509::KeyPurposeID*>(
      std::forward<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*>(value));
}
inline ::Org::BouncyCastle::Asn1::X509::KeyPurposeID* Org::BouncyCastle::Asn1::X509::KeyPurposeID::getStaticF_IdKPServerAuth() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*, "IdKPServerAuth", ::Org::BouncyCastle::Asn1::X509::KeyPurposeID*>();
}
inline void Org::BouncyCastle::Asn1::X509::KeyPurposeID::setStaticF_IdKPClientAuth(::Org::BouncyCastle::Asn1::X509::KeyPurposeID* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*, "IdKPClientAuth", ::Org::BouncyCastle::Asn1::X509::KeyPurposeID*>(
      std::forward<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*>(value));
}
inline ::Org::BouncyCastle::Asn1::X509::KeyPurposeID* Org::BouncyCastle::Asn1::X509::KeyPurposeID::getStaticF_IdKPClientAuth() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*, "IdKPClientAuth", ::Org::BouncyCastle::Asn1::X509::KeyPurposeID*>();
}
inline void Org::BouncyCastle::Asn1::X509::KeyPurposeID::setStaticF_IdKPCodeSigning(::Org::BouncyCastle::Asn1::X509::KeyPurposeID* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*, "IdKPCodeSigning", ::Org::BouncyCastle::Asn1::X509::KeyPurposeID*>(
      std::forward<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*>(value));
}
inline ::Org::BouncyCastle::Asn1::X509::KeyPurposeID* Org::BouncyCastle::Asn1::X509::KeyPurposeID::getStaticF_IdKPCodeSigning() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*, "IdKPCodeSigning", ::Org::BouncyCastle::Asn1::X509::KeyPurposeID*>();
}
inline void Org::BouncyCastle::Asn1::X509::KeyPurposeID::setStaticF_IdKPEmailProtection(::Org::BouncyCastle::Asn1::X509::KeyPurposeID* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*, "IdKPEmailProtection", ::Org::BouncyCastle::Asn1::X509::KeyPurposeID*>(
      std::forward<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*>(value));
}
inline ::Org::BouncyCastle::Asn1::X509::KeyPurposeID* Org::BouncyCastle::Asn1::X509::KeyPurposeID::getStaticF_IdKPEmailProtection() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*, "IdKPEmailProtection", ::Org::BouncyCastle::Asn1::X509::KeyPurposeID*>();
}
inline void Org::BouncyCastle::Asn1::X509::KeyPurposeID::setStaticF_IdKPIpsecEndSystem(::Org::BouncyCastle::Asn1::X509::KeyPurposeID* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*, "IdKPIpsecEndSystem", ::Org::BouncyCastle::Asn1::X509::KeyPurposeID*>(
      std::forward<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*>(value));
}
inline ::Org::BouncyCastle::Asn1::X509::KeyPurposeID* Org::BouncyCastle::Asn1::X509::KeyPurposeID::getStaticF_IdKPIpsecEndSystem() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*, "IdKPIpsecEndSystem", ::Org::BouncyCastle::Asn1::X509::KeyPurposeID*>();
}
inline void Org::BouncyCastle::Asn1::X509::KeyPurposeID::setStaticF_IdKPIpsecTunnel(::Org::BouncyCastle::Asn1::X509::KeyPurposeID* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*, "IdKPIpsecTunnel", ::Org::BouncyCastle::Asn1::X509::KeyPurposeID*>(
      std::forward<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*>(value));
}
inline ::Org::BouncyCastle::Asn1::X509::KeyPurposeID* Org::BouncyCastle::Asn1::X509::KeyPurposeID::getStaticF_IdKPIpsecTunnel() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*, "IdKPIpsecTunnel", ::Org::BouncyCastle::Asn1::X509::KeyPurposeID*>();
}
inline void Org::BouncyCastle::Asn1::X509::KeyPurposeID::setStaticF_IdKPIpsecUser(::Org::BouncyCastle::Asn1::X509::KeyPurposeID* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*, "IdKPIpsecUser", ::Org::BouncyCastle::Asn1::X509::KeyPurposeID*>(
      std::forward<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*>(value));
}
inline ::Org::BouncyCastle::Asn1::X509::KeyPurposeID* Org::BouncyCastle::Asn1::X509::KeyPurposeID::getStaticF_IdKPIpsecUser() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*, "IdKPIpsecUser", ::Org::BouncyCastle::Asn1::X509::KeyPurposeID*>();
}
inline void Org::BouncyCastle::Asn1::X509::KeyPurposeID::setStaticF_IdKPTimeStamping(::Org::BouncyCastle::Asn1::X509::KeyPurposeID* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*, "IdKPTimeStamping", ::Org::BouncyCastle::Asn1::X509::KeyPurposeID*>(
      std::forward<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*>(value));
}
inline ::Org::BouncyCastle::Asn1::X509::KeyPurposeID* Org::BouncyCastle::Asn1::X509::KeyPurposeID::getStaticF_IdKPTimeStamping() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*, "IdKPTimeStamping", ::Org::BouncyCastle::Asn1::X509::KeyPurposeID*>();
}
inline void Org::BouncyCastle::Asn1::X509::KeyPurposeID::setStaticF_IdKPOcspSigning(::Org::BouncyCastle::Asn1::X509::KeyPurposeID* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*, "IdKPOcspSigning", ::Org::BouncyCastle::Asn1::X509::KeyPurposeID*>(
      std::forward<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*>(value));
}
inline ::Org::BouncyCastle::Asn1::X509::KeyPurposeID* Org::BouncyCastle::Asn1::X509::KeyPurposeID::getStaticF_IdKPOcspSigning() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*, "IdKPOcspSigning", ::Org::BouncyCastle::Asn1::X509::KeyPurposeID*>();
}
inline void Org::BouncyCastle::Asn1::X509::KeyPurposeID::setStaticF_IdKPSmartCardLogon(::Org::BouncyCastle::Asn1::X509::KeyPurposeID* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*, "IdKPSmartCardLogon", ::Org::BouncyCastle::Asn1::X509::KeyPurposeID*>(
      std::forward<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*>(value));
}
inline ::Org::BouncyCastle::Asn1::X509::KeyPurposeID* Org::BouncyCastle::Asn1::X509::KeyPurposeID::getStaticF_IdKPSmartCardLogon() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*, "IdKPSmartCardLogon", ::Org::BouncyCastle::Asn1::X509::KeyPurposeID*>();
}
inline void Org::BouncyCastle::Asn1::X509::KeyPurposeID::setStaticF_IdKPMacAddress(::Org::BouncyCastle::Asn1::X509::KeyPurposeID* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*, "IdKPMacAddress", ::Org::BouncyCastle::Asn1::X509::KeyPurposeID*>(
      std::forward<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*>(value));
}
inline ::Org::BouncyCastle::Asn1::X509::KeyPurposeID* Org::BouncyCastle::Asn1::X509::KeyPurposeID::getStaticF_IdKPMacAddress() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*, "IdKPMacAddress", ::Org::BouncyCastle::Asn1::X509::KeyPurposeID*>();
}
inline void Org::BouncyCastle::Asn1::X509::KeyPurposeID::_ctor(::StringW id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline ::Org::BouncyCastle::Asn1::X509::KeyPurposeID* Org::BouncyCastle::Asn1::X509::KeyPurposeID::New_ctor(::StringW id) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*>(id));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::KeyPurposeID::KeyPurposeID() {}
