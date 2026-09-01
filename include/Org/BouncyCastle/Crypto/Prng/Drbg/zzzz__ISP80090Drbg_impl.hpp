#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Prng\Drbg\ISP80090Drbg.hpp"
#include "Org/BouncyCastle/Crypto/Prng/Drbg/zzzz__ISP80090Drbg_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg.get_BlockSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg::*)()>(&::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg::get_BlockSize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, bool)>(
    &::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg::Generate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg.Reseed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg::Reseed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg*>(), 2 }));
    return ___internal_method;
  }
};
inline int32_t Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg::get_BlockSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg::Generate(::ArrayW<uint8_t> output, ::ArrayW<uint8_t> additionalInput, bool predictionResistant) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, output, additionalInput, predictionResistant);
}
inline void Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg::Reseed(::ArrayW<uint8_t> additionalInput) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, additionalInput);
}
