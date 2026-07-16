#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/EnvelopedDataHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__EnvelopedDataHelper_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__CipherKeyGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::EnvelopedDataHelper.CreateContentCipher
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*)>(
    &::Org::BouncyCastle::Cms::EnvelopedDataHelper::CreateContentCipher)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x36ca46c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::EnvelopedDataHelper*>(),
                                                                                           { "CreateContentCipher",
                                                                                             {},
                                                                                             { ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>(),
                                                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::EnvelopedDataHelper.GenerateEncryptionAlgID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (
    ::Org::BouncyCastle::Cms::EnvelopedDataHelper::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*,
                                                      ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Cms::EnvelopedDataHelper::GenerateEncryptionAlgID)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x36ca4e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::EnvelopedDataHelper*>(),
                                                { "GenerateEncryptionAlgID",
                                                  {},
                                                  { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>(),
                                                    ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::EnvelopedDataHelper.CreateKeyGenerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::CipherKeyGenerator* (
    ::Org::BouncyCastle::Cms::EnvelopedDataHelper::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Cms::EnvelopedDataHelper::CreateKeyGenerator)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x36ca574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::EnvelopedDataHelper*>(),
                            { "CreateKeyGenerator", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::EnvelopedDataHelper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::EnvelopedDataHelper::*)()>(&::Org::BouncyCastle::Cms::EnvelopedDataHelper::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36ca584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::EnvelopedDataHelper*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Cms::EnvelopedDataHelper::setStaticF_BaseCipherNames(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "BaseCipherNames", ::Org::BouncyCastle::Cms::EnvelopedDataHelper*>(std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Cms::EnvelopedDataHelper::getStaticF_BaseCipherNames() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "BaseCipherNames", ::Org::BouncyCastle::Cms::EnvelopedDataHelper*>();
}
inline void Org::BouncyCastle::Cms::EnvelopedDataHelper::setStaticF_MacAlgNames(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "MacAlgNames", ::Org::BouncyCastle::Cms::EnvelopedDataHelper*>(std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Cms::EnvelopedDataHelper::getStaticF_MacAlgNames() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "MacAlgNames", ::Org::BouncyCastle::Cms::EnvelopedDataHelper*>();
}
inline ::System::Object* Org::BouncyCastle::Cms::EnvelopedDataHelper::CreateContentCipher(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* encKey,
                                                                                          ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* encryptionAlgID) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::EnvelopedDataHelper*>(),
                          { "CreateContentCipher",
                            {},
                            { ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, forEncryption, encKey, encryptionAlgID);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Cms::EnvelopedDataHelper::GenerateEncryptionAlgID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* encryptionOID,
                                                                                                                                  ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* encKey,
                                                                                                                                  ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::EnvelopedDataHelper*>(),
                                              { "GenerateEncryptionAlgID",
                                                {},
                                                { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>(),
                                                  ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(this, ___internal_method, encryptionOID, encKey, random);
}
inline ::Org::BouncyCastle::Crypto::CipherKeyGenerator* Org::BouncyCastle::Cms::EnvelopedDataHelper::CreateKeyGenerator(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithm,
                                                                                                                        ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::EnvelopedDataHelper*>(),
                          { "CreateKeyGenerator", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::CipherKeyGenerator*>(this, ___internal_method, algorithm, random);
}
inline void Org::BouncyCastle::Cms::EnvelopedDataHelper::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::EnvelopedDataHelper*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::EnvelopedDataHelper* Org::BouncyCastle::Cms::EnvelopedDataHelper::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::EnvelopedDataHelper*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::EnvelopedDataHelper::EnvelopedDataHelper() {}
