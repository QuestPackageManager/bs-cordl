#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\KeyGenerationParameters.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::KeyGenerationParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::KeyGenerationParameters::*)(::Org::BouncyCastle::Security::SecureRandom*, int32_t)>(
    &::Org::BouncyCastle::Crypto::KeyGenerationParameters::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x340d6ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::KeyGenerationParameters*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::KeyGenerationParameters.get_Random
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Security::SecureRandom* (::Org::BouncyCastle::Crypto::KeyGenerationParameters::*)()>(
    &::Org::BouncyCastle::Crypto::KeyGenerationParameters::get_Random)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x340d7a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::KeyGenerationParameters*>(), { "get_Random", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::KeyGenerationParameters.get_Strength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::KeyGenerationParameters::*)()>(&::Org::BouncyCastle::Crypto::KeyGenerationParameters::get_Strength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x340d7ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::KeyGenerationParameters*>(), { "get_Strength", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Security::SecureRandom*& Org::BouncyCastle::Crypto::KeyGenerationParameters::__cordl_internal_get_random() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___random;
}
constexpr ::Org::BouncyCastle::Security::SecureRandom* const& Org::BouncyCastle::Crypto::KeyGenerationParameters::__cordl_internal_get_random() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___random;
}
constexpr void Org::BouncyCastle::Crypto::KeyGenerationParameters::__cordl_internal_set_random(::Org::BouncyCastle::Security::SecureRandom* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___random = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::KeyGenerationParameters::__cordl_internal_get_strength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strength;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::KeyGenerationParameters::__cordl_internal_get_strength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strength;
}
constexpr void Org::BouncyCastle::Crypto::KeyGenerationParameters::__cordl_internal_set_strength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___strength = value;
}
inline void Org::BouncyCastle::Crypto::KeyGenerationParameters::_ctor(::Org::BouncyCastle::Security::SecureRandom* random, int32_t strength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::KeyGenerationParameters*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, random, strength);
}
inline ::Org::BouncyCastle::Security::SecureRandom* Org::BouncyCastle::Crypto::KeyGenerationParameters::get_Random() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::KeyGenerationParameters*>(), { "get_Random", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Security::SecureRandom*>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::KeyGenerationParameters::get_Strength() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::KeyGenerationParameters*>(), { "get_Strength", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::KeyGenerationParameters* Org::BouncyCastle::Crypto::KeyGenerationParameters::New_ctor(::Org::BouncyCastle::Security::SecureRandom* random, int32_t strength) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::KeyGenerationParameters*>(random, strength));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::KeyGenerationParameters::KeyGenerationParameters() {}
