#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Cms\KeyTransRecipientInfoGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__KeyTransRecipientInfoGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__IssuerAndSerialNumber_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__RecipientInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__SubjectPublicKeyInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__TbsCertificateStructure_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsEnvelopedHelper_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__RecipientInfoGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::*)()>(&::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36cfab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::*)(::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber*)>(
    &::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36cfab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x36cfac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator.set_RecipientCert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::*)(::Org::BouncyCastle::X509::X509Certificate*)>(
    &::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::set_RecipientCert)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x36cfb28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*>(),
                                                                                           { "set_RecipientCert", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator.set_RecipientPublicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
    &::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::set_RecipientPublicKey)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x36cfb80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*>(),
                                                             { "set_RecipientPublicKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator.set_SubjectKeyIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::*)(::Org::BouncyCastle::Asn1::Asn1OctetString*)>(
    &::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::set_SubjectKeyIdentifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36cfc5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*>(),
                                                                                           { "set_SubjectKeyIdentifier", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1OctetString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::RecipientInfo* (
    ::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::*)(::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::Generate)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x36cfc64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*>(),
                            { "Generate", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator.get_AlgorithmDetails
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::*)()>(
    &::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::get_AlgorithmDetails)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x36cfe00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator.GenerateWrappedKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::*)(::Org::BouncyCastle::Crypto::Parameters::KeyParameter*)>(
    &::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::GenerateWrappedKey)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x36cfe18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*>(), 6 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure*& Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::__cordl_internal_get_recipientTbsCert() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recipientTbsCert;
}
constexpr ::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* const& Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::__cordl_internal_get_recipientTbsCert() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recipientTbsCert;
}
constexpr void Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::__cordl_internal_set_recipientTbsCert(::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___recipientTbsCert = value;
}
constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::__cordl_internal_get_recipientPublicKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recipientPublicKey;
}
constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* const& Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::__cordl_internal_get_recipientPublicKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recipientPublicKey;
}
constexpr void Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::__cordl_internal_set_recipientPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___recipientPublicKey = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::__cordl_internal_get_subjectKeyIdentifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subjectKeyIdentifier;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::__cordl_internal_get_subjectKeyIdentifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subjectKeyIdentifier;
}
constexpr void Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::__cordl_internal_set_subjectKeyIdentifier(::Org::BouncyCastle::Asn1::Asn1OctetString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___subjectKeyIdentifier = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*& Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::__cordl_internal_get_info() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___info;
}
constexpr ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* const& Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::__cordl_internal_get_info() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___info;
}
constexpr void Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::__cordl_internal_set_info(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___info = value;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber*& Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::__cordl_internal_get_issuerAndSerialNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuerAndSerialNumber;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber* const& Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::__cordl_internal_get_issuerAndSerialNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuerAndSerialNumber;
}
constexpr void Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::__cordl_internal_set_issuerAndSerialNumber(::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___issuerAndSerialNumber = value;
}
constexpr ::Org::BouncyCastle::Security::SecureRandom*& Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::__cordl_internal_get_random() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___random;
}
constexpr ::Org::BouncyCastle::Security::SecureRandom* const& Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::__cordl_internal_get_random() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___random;
}
constexpr void Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::__cordl_internal_set_random(::Org::BouncyCastle::Security::SecureRandom* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___random = value;
}
inline void Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::setStaticF_Helper(::Org::BouncyCastle::Cms::CmsEnvelopedHelper* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*, "Helper", ::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*>(
      std::forward<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>(value));
}
inline ::Org::BouncyCastle::Cms::CmsEnvelopedHelper* Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::getStaticF_Helper() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*, "Helper", ::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*>();
}
inline void Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::_ctor(::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber* issuerAndSerialNumber) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, issuerAndSerialNumber);
}
inline void Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::_ctor(::ArrayW<uint8_t> subjectKeyIdentifier) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subjectKeyIdentifier);
}
inline void Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::set_RecipientCert(::Org::BouncyCastle::X509::X509Certificate* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*>(),
                                                                                         { "set_RecipientCert", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::set_RecipientPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*>(),
                                                           { "set_RecipientPublicKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::set_SubjectKeyIdentifier(::Org::BouncyCastle::Asn1::Asn1OctetString* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*>(),
                                                                                         { "set_SubjectKeyIdentifier", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1OctetString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Asn1::Cms::RecipientInfo* Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::Generate(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* contentEncryptionKey,
                                                                                                                       ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*>(),
                          { "Generate", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::RecipientInfo*>(this, ___internal_method, contentEncryptionKey, random);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::get_AlgorithmDetails() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::GenerateWrappedKey(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* contentEncryptionKey) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, contentEncryptionKey);
}
inline ::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator* Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*>());
}
inline ::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*
Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::New_ctor(::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber* issuerAndSerialNumber) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*>(issuerAndSerialNumber));
}
inline ::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator* Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::New_ctor(::ArrayW<uint8_t> subjectKeyIdentifier) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*>(subjectKeyIdentifier));
}
/// @brief Convert operator to "::Org::BouncyCastle::Cms::RecipientInfoGenerator"
constexpr Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::operator ::Org::BouncyCastle::Cms::RecipientInfoGenerator*() noexcept {
  return static_cast<::Org::BouncyCastle::Cms::RecipientInfoGenerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Cms::RecipientInfoGenerator"
constexpr ::Org::BouncyCastle::Cms::RecipientInfoGenerator* Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::i___Org__BouncyCastle__Cms__RecipientInfoGenerator() noexcept {
  return static_cast<::Org::BouncyCastle::Cms::RecipientInfoGenerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::KeyTransRecipientInfoGenerator() {}
