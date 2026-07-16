#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Utilities/CipherKeyGeneratorFactory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Utilities/zzzz__CipherKeyGeneratorFactory_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__CipherKeyGenerator_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Utilities::CipherKeyGeneratorFactory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Utilities::CipherKeyGeneratorFactory::*)()>(
    &::Org::BouncyCastle::Crypto::Utilities::CipherKeyGeneratorFactory::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x349864c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Utilities::CipherKeyGeneratorFactory*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Utilities::CipherKeyGeneratorFactory.CreateKeyGenerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Crypto::CipherKeyGenerator* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Security::SecureRandom*)>(
        &::Org::BouncyCastle::Crypto::Utilities::CipherKeyGeneratorFactory::CreateKeyGenerator)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x3498650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Utilities::CipherKeyGeneratorFactory*>(),
                            { "CreateKeyGenerator", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Utilities::CipherKeyGeneratorFactory.CreateCipherKeyGenerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::CipherKeyGenerator* (*)(::Org::BouncyCastle::Security::SecureRandom*, int32_t)>(
    &::Org::BouncyCastle::Crypto::Utilities::CipherKeyGeneratorFactory::CreateCipherKeyGenerator)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3498a9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Utilities::CipherKeyGeneratorFactory*>(),
                                                             { "CreateCipherKeyGenerator", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Utilities::CipherKeyGeneratorFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Utilities::CipherKeyGeneratorFactory*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::CipherKeyGenerator* Org::BouncyCastle::Crypto::Utilities::CipherKeyGeneratorFactory::CreateKeyGenerator(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithm,
                                                                                                                                            ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Utilities::CipherKeyGeneratorFactory*>(),
                          { "CreateKeyGenerator", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::CipherKeyGenerator*>(nullptr, ___internal_method, algorithm, random);
}
inline ::Org::BouncyCastle::Crypto::CipherKeyGenerator* Org::BouncyCastle::Crypto::Utilities::CipherKeyGeneratorFactory::CreateCipherKeyGenerator(::Org::BouncyCastle::Security::SecureRandom* random,
                                                                                                                                                  int32_t keySize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Utilities::CipherKeyGeneratorFactory*>(),
                                                           { "CreateCipherKeyGenerator", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::CipherKeyGenerator*>(nullptr, ___internal_method, random, keySize);
}
inline ::Org::BouncyCastle::Crypto::Utilities::CipherKeyGeneratorFactory* Org::BouncyCastle::Crypto::Utilities::CipherKeyGeneratorFactory::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Utilities::CipherKeyGeneratorFactory*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Utilities::CipherKeyGeneratorFactory::CipherKeyGeneratorFactory() {}
