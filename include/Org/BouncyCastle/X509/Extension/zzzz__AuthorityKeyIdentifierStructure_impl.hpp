#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/Extension/AuthorityKeyIdentifierStructure.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AuthorityKeyIdentifier_impl.hpp"
#include "Org/BouncyCastle/X509/Extension/zzzz__AuthorityKeyIdentifierStructure_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::X509::Extension::AuthorityKeyIdentifierStructure._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Extension::AuthorityKeyIdentifierStructure::*)(::Org::BouncyCastle::Asn1::Asn1OctetString*)>(
    &::Org::BouncyCastle::X509::Extension::AuthorityKeyIdentifierStructure::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x363cb58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Extension::AuthorityKeyIdentifierStructure*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1OctetString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Extension::AuthorityKeyIdentifierStructure.FromCertificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Sequence* (*)(::Org::BouncyCastle::X509::X509Certificate*)>(
    &::Org::BouncyCastle::X509::Extension::AuthorityKeyIdentifierStructure::FromCertificate)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x363cc1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Extension::AuthorityKeyIdentifierStructure*>(),
                                                                                           { "FromCertificate", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Extension::AuthorityKeyIdentifierStructure.FromKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Sequence* (*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
    &::Org::BouncyCastle::X509::Extension::AuthorityKeyIdentifierStructure::FromKey)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x363d020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Extension::AuthorityKeyIdentifierStructure*>(),
                                                                                           { "FromKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Extension::AuthorityKeyIdentifierStructure._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Extension::AuthorityKeyIdentifierStructure::*)(::Org::BouncyCastle::X509::X509Certificate*)>(
    &::Org::BouncyCastle::X509::Extension::AuthorityKeyIdentifierStructure::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x363d1c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Extension::AuthorityKeyIdentifierStructure*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Extension::AuthorityKeyIdentifierStructure._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Extension::AuthorityKeyIdentifierStructure::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
    &::Org::BouncyCastle::X509::Extension::AuthorityKeyIdentifierStructure::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x363d1e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Extension::AuthorityKeyIdentifierStructure*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::X509::Extension::AuthorityKeyIdentifierStructure::_ctor(::Org::BouncyCastle::Asn1::Asn1OctetString* encodedValue) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Extension::AuthorityKeyIdentifierStructure*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1OctetString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encodedValue);
}
inline ::Org::BouncyCastle::Asn1::Asn1Sequence* Org::BouncyCastle::X509::Extension::AuthorityKeyIdentifierStructure::FromCertificate(::Org::BouncyCastle::X509::X509Certificate* certificate) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Extension::AuthorityKeyIdentifierStructure*>(),
                                                                                         { "FromCertificate", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Sequence*>(nullptr, ___internal_method, certificate);
}
inline ::Org::BouncyCastle::Asn1::Asn1Sequence* Org::BouncyCastle::X509::Extension::AuthorityKeyIdentifierStructure::FromKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Extension::AuthorityKeyIdentifierStructure*>(),
                                                                                         { "FromKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Sequence*>(nullptr, ___internal_method, pubKey);
}
inline void Org::BouncyCastle::X509::Extension::AuthorityKeyIdentifierStructure::_ctor(::Org::BouncyCastle::X509::X509Certificate* certificate) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Extension::AuthorityKeyIdentifierStructure*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certificate);
}
inline void Org::BouncyCastle::X509::Extension::AuthorityKeyIdentifierStructure::_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Extension::AuthorityKeyIdentifierStructure*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pubKey);
}
inline ::Org::BouncyCastle::X509::Extension::AuthorityKeyIdentifierStructure*
Org::BouncyCastle::X509::Extension::AuthorityKeyIdentifierStructure::New_ctor(::Org::BouncyCastle::Asn1::Asn1OctetString* encodedValue) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::X509::Extension::AuthorityKeyIdentifierStructure*>(encodedValue));
}
inline ::Org::BouncyCastle::X509::Extension::AuthorityKeyIdentifierStructure*
Org::BouncyCastle::X509::Extension::AuthorityKeyIdentifierStructure::New_ctor(::Org::BouncyCastle::X509::X509Certificate* certificate) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::X509::Extension::AuthorityKeyIdentifierStructure*>(certificate));
}
inline ::Org::BouncyCastle::X509::Extension::AuthorityKeyIdentifierStructure*
Org::BouncyCastle::X509::Extension::AuthorityKeyIdentifierStructure::New_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::X509::Extension::AuthorityKeyIdentifierStructure*>(pubKey));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::X509::Extension::AuthorityKeyIdentifierStructure::AuthorityKeyIdentifierStructure() {}
