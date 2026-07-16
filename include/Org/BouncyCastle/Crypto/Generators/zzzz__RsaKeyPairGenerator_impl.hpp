#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Generators/RsaKeyPairGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Generators/zzzz__RsaKeyPairGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__RsaKeyGenerationParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricCipherKeyPair_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IAsymmetricCipherKeyPairGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::*)(::Org::BouncyCastle::Crypto::KeyGenerationParameters*)>(
    &::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::Init)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x33e1c08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator.GenerateKeyPair
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* (::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::*)()>(
    &::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::GenerateKeyPair)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x33e1d28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator.ChooseRandomPrime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::*)(int32_t, ::Org::BouncyCastle::Math::BigInteger*)>(
        &::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::ChooseRandomPrime)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x33e20a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::*)()>(
    &::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x33e2418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters*& Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::__cordl_internal_get_parameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parameters;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters* const& Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::__cordl_internal_get_parameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parameters;
}
constexpr void Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::__cordl_internal_set_parameters(::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___parameters = value;
}
inline void Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::setStaticF_SPECIAL_E_VALUES(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "SPECIAL_E_VALUES", ::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::getStaticF_SPECIAL_E_VALUES() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "SPECIAL_E_VALUES", ::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator*>();
}
inline void Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::setStaticF_SPECIAL_E_HIGHEST(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "SPECIAL_E_HIGHEST", ::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::getStaticF_SPECIAL_E_HIGHEST() {
  return ::cordl_internals::getStaticField<int32_t, "SPECIAL_E_HIGHEST", ::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator*>();
}
inline void Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::setStaticF_SPECIAL_E_BITS(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "SPECIAL_E_BITS", ::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::getStaticF_SPECIAL_E_BITS() {
  return ::cordl_internals::getStaticField<int32_t, "SPECIAL_E_BITS", ::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator*>();
}
inline void Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::setStaticF_One(::Org::BouncyCastle::Math::BigInteger* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Math::BigInteger*, "One", ::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator*>(
      std::forward<::Org::BouncyCastle::Math::BigInteger*>(value));
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::getStaticF_One() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Math::BigInteger*, "One", ::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator*>();
}
inline void Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::setStaticF_DefaultPublicExponent(::Org::BouncyCastle::Math::BigInteger* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Math::BigInteger*, "DefaultPublicExponent", ::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator*>(
      std::forward<::Org::BouncyCastle::Math::BigInteger*>(value));
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::getStaticF_DefaultPublicExponent() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Math::BigInteger*, "DefaultPublicExponent", ::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator*>();
}
inline void Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::Init(::Org::BouncyCastle::Crypto::KeyGenerationParameters* parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::GenerateKeyPair() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::ChooseRandomPrime(int32_t bitlength, ::Org::BouncyCastle::Math::BigInteger* e) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method, bitlength, e);
}
inline void Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator* Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator*>());
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator"
constexpr Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::operator ::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator"
constexpr ::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator*
Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::i___Org__BouncyCastle__Crypto__IAsymmetricCipherKeyPairGenerator() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::RsaKeyPairGenerator() {}
