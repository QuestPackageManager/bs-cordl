#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Generators\DHKeyPairGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Generators/zzzz__DHKeyPairGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DHKeyGenerationParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricCipherKeyPair_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IAsymmetricCipherKeyPairGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator::*)(::Org::BouncyCastle::Crypto::KeyGenerationParameters*)>(
    &::Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator::Init)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x33d5ce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator.GenerateKeyPair
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* (::Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator::*)()>(
    &::Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator::GenerateKeyPair)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x33d5d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator::*)()>(&::Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x33d5ee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters*& Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator::__cordl_internal_get_param() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___param;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters* const& Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator::__cordl_internal_get_param() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___param;
}
constexpr void Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator::__cordl_internal_set_param(::Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___param = value;
}
inline void Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator::Init(::Org::BouncyCastle::Crypto::KeyGenerationParameters* parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator::GenerateKeyPair() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator* Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator*>());
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator"
constexpr Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator::operator ::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator"
constexpr ::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator*
Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator::i___Org__BouncyCastle__Crypto__IAsymmetricCipherKeyPairGenerator() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator::DHKeyPairGenerator() {}
