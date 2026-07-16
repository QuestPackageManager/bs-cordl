#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Smime/SmimeEncryptionKeyPreferenceAttribute.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AttributeX509_impl.hpp"
#include "Org/BouncyCastle/Asn1/Smime/zzzz__SmimeEncryptionKeyPreferenceAttribute_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__IssuerAndSerialNumber_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__RecipientKeyIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute::*)(::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber*)>(
    &::Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x354a330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute::*)(::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier*)>(
    &::Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x354a400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute::*)(::Org::BouncyCastle::Asn1::Asn1OctetString*)>(
    &::Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x354a4d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1OctetString*>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute::_ctor(::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber* issAndSer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, issAndSer);
}
inline void Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute::_ctor(::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier* rKeyID) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rKeyID);
}
inline void Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute::_ctor(::Org::BouncyCastle::Asn1::Asn1OctetString* sKeyID) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1OctetString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sKeyID);
}
inline ::Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute*
Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute::New_ctor(::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber* issAndSer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute*>(issAndSer));
}
inline ::Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute*
Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute::New_ctor(::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier* rKeyID) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute*>(rKeyID));
}
inline ::Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute*
Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute::New_ctor(::Org::BouncyCastle::Asn1::Asn1OctetString* sKeyID) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute*>(sKeyID));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute::SmimeEncryptionKeyPreferenceAttribute() {}
