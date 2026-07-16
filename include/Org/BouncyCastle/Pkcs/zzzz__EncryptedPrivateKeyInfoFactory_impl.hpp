#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Pkcs/EncryptedPrivateKeyInfoFactory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Pkcs/zzzz__EncryptedPrivateKeyInfoFactory_def.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/zzzz__EncryptedPrivateKeyInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/zzzz__PrivateKeyInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory::*)()>(&::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35a963c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory.CreateEncryptedPrivateKeyInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::ArrayW<char16_t>,
                                                                                                                     ::ArrayW<uint8_t>, int32_t, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
    &::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory::CreateEncryptedPrivateKeyInfo)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x35a9640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory*>(),
                                                { "CreateEncryptedPrivateKeyInfo",
                                                  {},
                                                  { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory.CreateEncryptedPrivateKeyInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* (*)(::StringW, ::ArrayW<char16_t>, ::ArrayW<uint8_t>, int32_t, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
        &::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory::CreateEncryptedPrivateKeyInfo)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x35a8828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory*>(),
                                                                                           { "CreateEncryptedPrivateKeyInfo",
                                                                                             {},
                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory.CreateEncryptedPrivateKeyInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* (*)(::StringW, ::ArrayW<char16_t>, ::ArrayW<uint8_t>, int32_t, ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*)>(
        &::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory::CreateEncryptedPrivateKeyInfo)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x35a9694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory*>(),
                                                                                           { "CreateEncryptedPrivateKeyInfo",
                                                                                             {},
                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory.CreateEncryptedPrivateKeyInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::ArrayW<char16_t>,
                                                                  ::ArrayW<uint8_t>, int32_t, ::Org::BouncyCastle::Security::SecureRandom*, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
    &::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory::CreateEncryptedPrivateKeyInfo)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x35a992c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory*>(),
                                                { "CreateEncryptedPrivateKeyInfo",
                                                  {},
                                                  { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(),
                                                    ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory.CreateEncryptedPrivateKeyInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::ArrayW<char16_t>,
                                                                  ::ArrayW<uint8_t>, int32_t, ::Org::BouncyCastle::Security::SecureRandom*, ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*)>(
    &::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory::CreateEncryptedPrivateKeyInfo)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x35a9990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory*>(),
                                                { "CreateEncryptedPrivateKeyInfo",
                                                  {},
                                                  { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(),
                                                    ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*
Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory::CreateEncryptedPrivateKeyInfo(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithm, ::ArrayW<char16_t> passPhrase, ::ArrayW<uint8_t> salt,
                                                                                       int32_t iterationCount, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory*>(),
                                              { "CreateEncryptedPrivateKeyInfo",
                                                {},
                                                { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*>(nullptr, ___internal_method, algorithm, passPhrase, salt, iterationCount, key);
}
inline ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*
Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory::CreateEncryptedPrivateKeyInfo(::StringW algorithm, ::ArrayW<char16_t> passPhrase, ::ArrayW<uint8_t> salt, int32_t iterationCount,
                                                                                       ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory*>(),
                                                                                         { "CreateEncryptedPrivateKeyInfo",
                                                                                           {},
                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*>(nullptr, ___internal_method, algorithm, passPhrase, salt, iterationCount, key);
}
inline ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*
Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory::CreateEncryptedPrivateKeyInfo(::StringW algorithm, ::ArrayW<char16_t> passPhrase, ::ArrayW<uint8_t> salt, int32_t iterationCount,
                                                                                       ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* keyInfo) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory*>(),
                                                                                         { "CreateEncryptedPrivateKeyInfo",
                                                                                           {},
                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*>(nullptr, ___internal_method, algorithm, passPhrase, salt, iterationCount, keyInfo);
}
inline ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory::CreateEncryptedPrivateKeyInfo(
    ::Org::BouncyCastle::Asn1::DerObjectIdentifier* cipherAlgorithm, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* prfAlgorithm, ::ArrayW<char16_t> passPhrase, ::ArrayW<uint8_t> salt,
    int32_t iterationCount, ::Org::BouncyCastle::Security::SecureRandom* random, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory*>(),
                                              { "CreateEncryptedPrivateKeyInfo",
                                                {},
                                                { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(),
                                                  ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*>(nullptr, ___internal_method, cipherAlgorithm, prfAlgorithm, passPhrase, salt, iterationCount,
                                                                                                        random, key);
}
inline ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory::CreateEncryptedPrivateKeyInfo(
    ::Org::BouncyCastle::Asn1::DerObjectIdentifier* cipherAlgorithm, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* prfAlgorithm, ::ArrayW<char16_t> passPhrase, ::ArrayW<uint8_t> salt,
    int32_t iterationCount, ::Org::BouncyCastle::Security::SecureRandom* random, ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* keyInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory*>(),
                                              { "CreateEncryptedPrivateKeyInfo",
                                                {},
                                                { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(),
                                                  ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*>(nullptr, ___internal_method, cipherAlgorithm, prfAlgorithm, passPhrase, salt, iterationCount,
                                                                                                        random, keyInfo);
}
inline ::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory* Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory::EncryptedPrivateKeyInfoFactory() {}
