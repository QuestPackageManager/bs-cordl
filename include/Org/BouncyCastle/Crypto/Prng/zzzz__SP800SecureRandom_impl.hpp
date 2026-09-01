#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Prng\SP800SecureRandom.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_impl.hpp"
#include "Org/BouncyCastle/Crypto/Prng/zzzz__SP800SecureRandom_def.hpp"
#include "Org/BouncyCastle/Crypto/Prng/Drbg/zzzz__ISP80090Drbg_def.hpp"
#include "Org/BouncyCastle/Crypto/Prng/zzzz__IDrbgProvider_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IEntropySource_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom::*)(
    ::Org::BouncyCastle::Security::SecureRandom*, ::Org::BouncyCastle::Crypto::IEntropySource*, ::Org::BouncyCastle::Crypto::Prng::IDrbgProvider*, bool)>(
    &::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x341fa2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IEntropySource*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Crypto::Prng::IDrbgProvider*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom.SetSeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom::SetSeed)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x341fabc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom.SetSeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom::*)(int64_t)>(&::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom::SetSeed)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x341fb60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom.NextBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom::NextBytes)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x341fc04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom.NextBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom::NextBytes)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x341fed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom.GenerateSeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom::GenerateSeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x341ff74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom.Reseed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom::Reseed)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x341ff7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom*>(), 16 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Prng::IDrbgProvider*& Org::BouncyCastle::Crypto::Prng::SP800SecureRandom::__cordl_internal_get_mDrbgProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mDrbgProvider;
}
constexpr ::Org::BouncyCastle::Crypto::Prng::IDrbgProvider* const& Org::BouncyCastle::Crypto::Prng::SP800SecureRandom::__cordl_internal_get_mDrbgProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mDrbgProvider;
}
constexpr void Org::BouncyCastle::Crypto::Prng::SP800SecureRandom::__cordl_internal_set_mDrbgProvider(::Org::BouncyCastle::Crypto::Prng::IDrbgProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mDrbgProvider = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Prng::SP800SecureRandom::__cordl_internal_get_mPredictionResistant() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPredictionResistant;
}
constexpr bool const& Org::BouncyCastle::Crypto::Prng::SP800SecureRandom::__cordl_internal_get_mPredictionResistant() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPredictionResistant;
}
constexpr void Org::BouncyCastle::Crypto::Prng::SP800SecureRandom::__cordl_internal_set_mPredictionResistant(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mPredictionResistant = value;
}
constexpr ::Org::BouncyCastle::Security::SecureRandom*& Org::BouncyCastle::Crypto::Prng::SP800SecureRandom::__cordl_internal_get_mRandomSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mRandomSource;
}
constexpr ::Org::BouncyCastle::Security::SecureRandom* const& Org::BouncyCastle::Crypto::Prng::SP800SecureRandom::__cordl_internal_get_mRandomSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mRandomSource;
}
constexpr void Org::BouncyCastle::Crypto::Prng::SP800SecureRandom::__cordl_internal_set_mRandomSource(::Org::BouncyCastle::Security::SecureRandom* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mRandomSource = value;
}
constexpr ::Org::BouncyCastle::Crypto::IEntropySource*& Org::BouncyCastle::Crypto::Prng::SP800SecureRandom::__cordl_internal_get_mEntropySource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mEntropySource;
}
constexpr ::Org::BouncyCastle::Crypto::IEntropySource* const& Org::BouncyCastle::Crypto::Prng::SP800SecureRandom::__cordl_internal_get_mEntropySource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mEntropySource;
}
constexpr void Org::BouncyCastle::Crypto::Prng::SP800SecureRandom::__cordl_internal_set_mEntropySource(::Org::BouncyCastle::Crypto::IEntropySource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mEntropySource = value;
}
constexpr ::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg*& Org::BouncyCastle::Crypto::Prng::SP800SecureRandom::__cordl_internal_get_mDrbg() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mDrbg;
}
constexpr ::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg* const& Org::BouncyCastle::Crypto::Prng::SP800SecureRandom::__cordl_internal_get_mDrbg() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mDrbg;
}
constexpr void Org::BouncyCastle::Crypto::Prng::SP800SecureRandom::__cordl_internal_set_mDrbg(::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mDrbg = value;
}
inline void Org::BouncyCastle::Crypto::Prng::SP800SecureRandom::_ctor(::Org::BouncyCastle::Security::SecureRandom* randomSource, ::Org::BouncyCastle::Crypto::IEntropySource* entropySource,
                                                                      ::Org::BouncyCastle::Crypto::Prng::IDrbgProvider* drbgProvider, bool predictionResistant) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IEntropySource*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Crypto::Prng::IDrbgProvider*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, randomSource, entropySource, drbgProvider, predictionResistant);
}
inline void Org::BouncyCastle::Crypto::Prng::SP800SecureRandom::SetSeed(::ArrayW<uint8_t> seed) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seed);
}
inline void Org::BouncyCastle::Crypto::Prng::SP800SecureRandom::SetSeed(int64_t seed) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seed);
}
inline void Org::BouncyCastle::Crypto::Prng::SP800SecureRandom::NextBytes(::ArrayW<uint8_t> bytes) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes);
}
inline void Org::BouncyCastle::Crypto::Prng::SP800SecureRandom::NextBytes(::ArrayW<uint8_t> buf, int32_t off, int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf, off, len);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Prng::SP800SecureRandom::GenerateSeed(int32_t numBytes) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, numBytes);
}
inline void Org::BouncyCastle::Crypto::Prng::SP800SecureRandom::Reseed(::ArrayW<uint8_t> additionalInput) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, additionalInput);
}
inline ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom* Org::BouncyCastle::Crypto::Prng::SP800SecureRandom::New_ctor(::Org::BouncyCastle::Security::SecureRandom* randomSource,
                                                                                                                          ::Org::BouncyCastle::Crypto::IEntropySource* entropySource,
                                                                                                                          ::Org::BouncyCastle::Crypto::Prng::IDrbgProvider* drbgProvider,
                                                                                                                          bool predictionResistant) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom*>(randomSource, entropySource, drbgProvider, predictionResistant));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom::SP800SecureRandom() {}
