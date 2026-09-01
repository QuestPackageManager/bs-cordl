#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Generators\DsaKeyPairGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Generators/zzzz__DsaKeyPairGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DsaKeyGenerationParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricCipherKeyPair_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IAsymmetricCipherKeyPairGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::DsaKeyPairGenerator.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::DsaKeyPairGenerator::*)(::Org::BouncyCastle::Crypto::KeyGenerationParameters*)>(
    &::Org::BouncyCastle::Crypto::Generators::DsaKeyPairGenerator::Init)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x33d679c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::DsaKeyPairGenerator*>(),
                                                                                           { "Init", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::KeyGenerationParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::DsaKeyPairGenerator.GenerateKeyPair
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* (::Org::BouncyCastle::Crypto::Generators::DsaKeyPairGenerator::*)()>(
    &::Org::BouncyCastle::Crypto::Generators::DsaKeyPairGenerator::GenerateKeyPair)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x33d6894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::DsaKeyPairGenerator*>(), { "GenerateKeyPair", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::DsaKeyPairGenerator.GeneratePrivateKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (*)(::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Crypto::Generators::DsaKeyPairGenerator::GeneratePrivateKey)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x33d69e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::DsaKeyPairGenerator*>(),
                                         { "GeneratePrivateKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::DsaKeyPairGenerator.CalculatePublicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Math::BigInteger* (*)(::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*)>(
        &::Org::BouncyCastle::Crypto::Generators::DsaKeyPairGenerator::CalculatePublicKey)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x33d6ad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::DsaKeyPairGenerator*>(),
                                                             { "CalculatePublicKey",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::DsaKeyPairGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::DsaKeyPairGenerator::*)()>(
    &::Org::BouncyCastle::Crypto::Generators::DsaKeyPairGenerator::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x33d6b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::DsaKeyPairGenerator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Parameters::DsaKeyGenerationParameters*& Org::BouncyCastle::Crypto::Generators::DsaKeyPairGenerator::__cordl_internal_get_param() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___param;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::DsaKeyGenerationParameters* const& Org::BouncyCastle::Crypto::Generators::DsaKeyPairGenerator::__cordl_internal_get_param() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___param;
}
constexpr void Org::BouncyCastle::Crypto::Generators::DsaKeyPairGenerator::__cordl_internal_set_param(::Org::BouncyCastle::Crypto::Parameters::DsaKeyGenerationParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___param = value;
}
inline void Org::BouncyCastle::Crypto::Generators::DsaKeyPairGenerator::setStaticF_One(::Org::BouncyCastle::Math::BigInteger* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Math::BigInteger*, "One", ::Org::BouncyCastle::Crypto::Generators::DsaKeyPairGenerator*>(
      std::forward<::Org::BouncyCastle::Math::BigInteger*>(value));
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Generators::DsaKeyPairGenerator::getStaticF_One() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Math::BigInteger*, "One", ::Org::BouncyCastle::Crypto::Generators::DsaKeyPairGenerator*>();
}
inline void Org::BouncyCastle::Crypto::Generators::DsaKeyPairGenerator::Init(::Org::BouncyCastle::Crypto::KeyGenerationParameters* parameters) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::DsaKeyPairGenerator*>(),
                                                                                         { "Init", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::KeyGenerationParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* Org::BouncyCastle::Crypto::Generators::DsaKeyPairGenerator::GenerateKeyPair() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::DsaKeyPairGenerator*>(), { "GenerateKeyPair", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Generators::DsaKeyPairGenerator::GeneratePrivateKey(::Org::BouncyCastle::Math::BigInteger* q,
                                                                                                                             ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::DsaKeyPairGenerator*>(),
                                       { "GeneratePrivateKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(nullptr, ___internal_method, q, random);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Generators::DsaKeyPairGenerator::CalculatePublicKey(::Org::BouncyCastle::Math::BigInteger* p,
                                                                                                                             ::Org::BouncyCastle::Math::BigInteger* g,
                                                                                                                             ::Org::BouncyCastle::Math::BigInteger* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::DsaKeyPairGenerator*>(),
                                                           { "CalculatePublicKey",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(nullptr, ___internal_method, p, g, x);
}
inline void Org::BouncyCastle::Crypto::Generators::DsaKeyPairGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::DsaKeyPairGenerator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Generators::DsaKeyPairGenerator* Org::BouncyCastle::Crypto::Generators::DsaKeyPairGenerator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Generators::DsaKeyPairGenerator*>());
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator"
constexpr Org::BouncyCastle::Crypto::Generators::DsaKeyPairGenerator::operator ::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator"
constexpr ::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator*
Org::BouncyCastle::Crypto::Generators::DsaKeyPairGenerator::i___Org__BouncyCastle__Crypto__IAsymmetricCipherKeyPairGenerator() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Generators::DsaKeyPairGenerator::DsaKeyPairGenerator() {}
