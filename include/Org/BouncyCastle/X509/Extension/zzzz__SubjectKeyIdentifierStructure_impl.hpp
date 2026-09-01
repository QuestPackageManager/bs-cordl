#pragma once
// IWYU pragma private; include "Org\BouncyCastle\X509\Extension\SubjectKeyIdentifierStructure.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__SubjectKeyIdentifier_impl.hpp"
#include "Org/BouncyCastle/X509/Extension/zzzz__SubjectKeyIdentifierStructure_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure::*)(::Org::BouncyCastle::Asn1::Asn1OctetString*)>(
    &::Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x363f594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1OctetString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure.FromPublicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1OctetString* (*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
    &::Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure::FromPublicKey)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x363f634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure*>(),
                                                                                           { "FromPublicKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
    &::Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x363f7e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure::_ctor(::Org::BouncyCastle::Asn1::Asn1OctetString* encodedValue) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1OctetString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encodedValue);
}
inline ::Org::BouncyCastle::Asn1::Asn1OctetString* Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure::FromPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure*>(),
                                                                                         { "FromPublicKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1OctetString*>(nullptr, ___internal_method, pubKey);
}
inline void Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure::_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pubKey);
}
inline ::Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure*
Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure::New_ctor(::Org::BouncyCastle::Asn1::Asn1OctetString* encodedValue) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure*>(encodedValue));
}
inline ::Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure*
Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure::New_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure*>(pubKey));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure::SubjectKeyIdentifierStructure() {}
