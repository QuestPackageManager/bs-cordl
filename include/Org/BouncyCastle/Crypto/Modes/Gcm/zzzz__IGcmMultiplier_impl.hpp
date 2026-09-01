#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Modes\Gcm\IGcmMultiplier.hpp"
#include "Org/BouncyCastle/Crypto/Modes/Gcm/zzzz__IGcmMultiplier_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier::Init)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier.MultiplyH
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier::MultiplyH)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier*>(), 1 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier::Init(::ArrayW<uint8_t> H) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, H);
}
inline void Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier::MultiplyH(::ArrayW<uint8_t> x) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
