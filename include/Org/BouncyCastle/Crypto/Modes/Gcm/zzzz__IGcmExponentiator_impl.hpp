#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Modes/Gcm/IGcmExponentiator.hpp"
#include "Org/BouncyCastle/Crypto/Modes/Gcm/zzzz__IGcmExponentiator_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator::Init)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator.ExponentiateX
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator::*)(int64_t, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator::ExponentiateX)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator*>(), 1 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator::Init(::ArrayW<uint8_t> x) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline void Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator::ExponentiateX(int64_t pow, ::ArrayW<uint8_t> output) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pow, output);
}
