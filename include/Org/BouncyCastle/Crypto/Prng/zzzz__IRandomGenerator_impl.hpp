#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Prng\IRandomGenerator.hpp"
#include "Org/BouncyCastle/Crypto/Prng/zzzz__IRandomGenerator_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator.AddSeedMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::IRandomGenerator::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Prng::IRandomGenerator::AddSeedMaterial)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator.AddSeedMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::IRandomGenerator::*)(int64_t)>(&::Org::BouncyCastle::Crypto::Prng::IRandomGenerator::AddSeedMaterial)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator.NextBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::IRandomGenerator::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Prng::IRandomGenerator::NextBytes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator.NextBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::IRandomGenerator::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Prng::IRandomGenerator::NextBytes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*>(), 3 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Prng::IRandomGenerator::AddSeedMaterial(::ArrayW<uint8_t> seed) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seed);
}
inline void Org::BouncyCastle::Crypto::Prng::IRandomGenerator::AddSeedMaterial(int64_t seed) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seed);
}
inline void Org::BouncyCastle::Crypto::Prng::IRandomGenerator::NextBytes(::ArrayW<uint8_t> bytes) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes);
}
inline void Org::BouncyCastle::Crypto::Prng::IRandomGenerator::NextBytes(::ArrayW<uint8_t> bytes, int32_t start, int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes, start, len);
}
