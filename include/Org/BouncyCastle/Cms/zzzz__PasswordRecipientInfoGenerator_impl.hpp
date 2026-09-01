#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Cms\PasswordRecipientInfoGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__PasswordRecipientInfoGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__RecipientInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsEnvelopedHelper_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__RecipientInfoGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::*)()>(&::Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36d2484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator.set_KeyDerivationAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::*)(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*)>(
    &::Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::set_KeyDerivationAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36d2488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator*>(),
                                                             { "set_KeyDerivationAlgorithm", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator.set_KeyEncryptionKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::*)(::Org::BouncyCastle::Crypto::Parameters::KeyParameter*)>(
    &::Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::set_KeyEncryptionKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36d2490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator*>(),
                                                             { "set_KeyEncryptionKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator.set_KeyEncryptionKeyOID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::*)(::StringW)>(
    &::Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::set_KeyEncryptionKeyOID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36d2498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator*>(), { "set_KeyEncryptionKeyOID", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::RecipientInfo* (
    ::Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::*)(::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::Generate)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x36d24a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator*>(),
                            { "Generate", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::__cordl_internal_get_keyDerivationAlgorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyDerivationAlgorithm;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::__cordl_internal_get_keyDerivationAlgorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyDerivationAlgorithm;
}
constexpr void Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::__cordl_internal_set_keyDerivationAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyDerivationAlgorithm = value;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*& Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::__cordl_internal_get_keyEncryptionKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyEncryptionKey;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* const& Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::__cordl_internal_get_keyEncryptionKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyEncryptionKey;
}
constexpr void Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::__cordl_internal_set_keyEncryptionKey(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyEncryptionKey = value;
}
constexpr ::StringW& Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::__cordl_internal_get_keyEncryptionKeyOID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyEncryptionKeyOID;
}
constexpr ::StringW const& Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::__cordl_internal_get_keyEncryptionKeyOID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyEncryptionKeyOID;
}
constexpr void Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::__cordl_internal_set_keyEncryptionKeyOID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyEncryptionKeyOID = value;
}
inline void Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::setStaticF_Helper(::Org::BouncyCastle::Cms::CmsEnvelopedHelper* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*, "Helper", ::Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator*>(
      std::forward<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>(value));
}
inline ::Org::BouncyCastle::Cms::CmsEnvelopedHelper* Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::getStaticF_Helper() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*, "Helper", ::Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator*>();
}
inline void Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::set_KeyDerivationAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator*>(),
                                                           { "set_KeyDerivationAlgorithm", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::set_KeyEncryptionKey(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator*>(),
                                                           { "set_KeyEncryptionKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::set_KeyEncryptionKeyOID(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator*>(), { "set_KeyEncryptionKeyOID", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Asn1::Cms::RecipientInfo* Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::Generate(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* contentEncryptionKey,
                                                                                                                       ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator*>(),
                          { "Generate", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::RecipientInfo*>(this, ___internal_method, contentEncryptionKey, random);
}
inline ::Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator* Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator*>());
}
/// @brief Convert operator to "::Org::BouncyCastle::Cms::RecipientInfoGenerator"
constexpr Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::operator ::Org::BouncyCastle::Cms::RecipientInfoGenerator*() noexcept {
  return static_cast<::Org::BouncyCastle::Cms::RecipientInfoGenerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Cms::RecipientInfoGenerator"
constexpr ::Org::BouncyCastle::Cms::RecipientInfoGenerator* Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::i___Org__BouncyCastle__Cms__RecipientInfoGenerator() noexcept {
  return static_cast<::Org::BouncyCastle::Cms::RecipientInfoGenerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::PasswordRecipientInfoGenerator() {}
