#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Prng/X931SecureRandom.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_impl.hpp"
#include "Org/BouncyCastle/Crypto/Prng/zzzz__X931SecureRandom_def.hpp"
#include "Org/BouncyCastle/Crypto/Prng/zzzz__X931Rng_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::X931SecureRandom._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::X931SecureRandom::*)(
    ::Org::BouncyCastle::Security::SecureRandom*, ::Org::BouncyCastle::Crypto::Prng::X931Rng*, bool)>(&::Org::BouncyCastle::Crypto::Prng::X931SecureRandom::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x341f5c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::X931SecureRandom*>(),
                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Prng::X931Rng*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::X931SecureRandom.SetSeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::X931SecureRandom::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Prng::X931SecureRandom::SetSeed)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x341f64c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::X931SecureRandom*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::X931SecureRandom*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::X931SecureRandom.SetSeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::X931SecureRandom::*)(int64_t)>(&::Org::BouncyCastle::Crypto::Prng::X931SecureRandom::SetSeed)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x341f6f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::X931SecureRandom*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::X931SecureRandom*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::X931SecureRandom.NextBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::X931SecureRandom::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Prng::X931SecureRandom::NextBytes)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x341f794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::X931SecureRandom*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::X931SecureRandom*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::X931SecureRandom.NextBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::X931SecureRandom::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Prng::X931SecureRandom::NextBytes)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x341f870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::X931SecureRandom*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::X931SecureRandom*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::X931SecureRandom.GenerateSeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Prng::X931SecureRandom::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Prng::X931SecureRandom::GenerateSeed)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x341f90c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::X931SecureRandom*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::X931SecureRandom*>(), 10 }));
    return ___internal_method;
  }
};
constexpr bool& Org::BouncyCastle::Crypto::Prng::X931SecureRandom::__cordl_internal_get_mPredictionResistant() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPredictionResistant;
}
constexpr bool const& Org::BouncyCastle::Crypto::Prng::X931SecureRandom::__cordl_internal_get_mPredictionResistant() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPredictionResistant;
}
constexpr void Org::BouncyCastle::Crypto::Prng::X931SecureRandom::__cordl_internal_set_mPredictionResistant(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mPredictionResistant = value;
}
constexpr ::Org::BouncyCastle::Security::SecureRandom*& Org::BouncyCastle::Crypto::Prng::X931SecureRandom::__cordl_internal_get_mRandomSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mRandomSource;
}
constexpr ::Org::BouncyCastle::Security::SecureRandom* const& Org::BouncyCastle::Crypto::Prng::X931SecureRandom::__cordl_internal_get_mRandomSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mRandomSource;
}
constexpr void Org::BouncyCastle::Crypto::Prng::X931SecureRandom::__cordl_internal_set_mRandomSource(::Org::BouncyCastle::Security::SecureRandom* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mRandomSource = value;
}
constexpr ::Org::BouncyCastle::Crypto::Prng::X931Rng*& Org::BouncyCastle::Crypto::Prng::X931SecureRandom::__cordl_internal_get_mDrbg() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mDrbg;
}
constexpr ::Org::BouncyCastle::Crypto::Prng::X931Rng* const& Org::BouncyCastle::Crypto::Prng::X931SecureRandom::__cordl_internal_get_mDrbg() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mDrbg;
}
constexpr void Org::BouncyCastle::Crypto::Prng::X931SecureRandom::__cordl_internal_set_mDrbg(::Org::BouncyCastle::Crypto::Prng::X931Rng* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mDrbg = value;
}
inline void Org::BouncyCastle::Crypto::Prng::X931SecureRandom::_ctor(::Org::BouncyCastle::Security::SecureRandom* randomSource, ::Org::BouncyCastle::Crypto::Prng::X931Rng* drbg,
                                                                     bool predictionResistant) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::X931SecureRandom*>(),
                          { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Prng::X931Rng*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, randomSource, drbg, predictionResistant);
}
inline void Org::BouncyCastle::Crypto::Prng::X931SecureRandom::SetSeed(::ArrayW<uint8_t> seed) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::X931SecureRandom*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seed);
}
inline void Org::BouncyCastle::Crypto::Prng::X931SecureRandom::SetSeed(int64_t seed) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::X931SecureRandom*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seed);
}
inline void Org::BouncyCastle::Crypto::Prng::X931SecureRandom::NextBytes(::ArrayW<uint8_t> bytes) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::X931SecureRandom*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes);
}
inline void Org::BouncyCastle::Crypto::Prng::X931SecureRandom::NextBytes(::ArrayW<uint8_t> buf, int32_t off, int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::X931SecureRandom*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf, off, len);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Prng::X931SecureRandom::GenerateSeed(int32_t numBytes) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::X931SecureRandom*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, numBytes);
}
inline ::Org::BouncyCastle::Crypto::Prng::X931SecureRandom* Org::BouncyCastle::Crypto::Prng::X931SecureRandom::New_ctor(::Org::BouncyCastle::Security::SecureRandom* randomSource,
                                                                                                                        ::Org::BouncyCastle::Crypto::Prng::X931Rng* drbg, bool predictionResistant) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Prng::X931SecureRandom*>(randomSource, drbg, predictionResistant));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Prng::X931SecureRandom::X931SecureRandom() {}
