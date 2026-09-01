#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Prng\IDrbgProvider.hpp"
#include "Org/BouncyCastle/Crypto/Prng/zzzz__IDrbgProvider_def.hpp"
#include "Org/BouncyCastle/Crypto/Prng/Drbg/zzzz__ISP80090Drbg_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IEntropySource_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::IDrbgProvider.Get
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg* (
    ::Org::BouncyCastle::Crypto::Prng::IDrbgProvider::*)(::Org::BouncyCastle::Crypto::IEntropySource*)>(&::Org::BouncyCastle::Crypto::Prng::IDrbgProvider::Get)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::IDrbgProvider*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::IDrbgProvider*>(), 0 }));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg* Org::BouncyCastle::Crypto::Prng::IDrbgProvider::Get(::Org::BouncyCastle::Crypto::IEntropySource* entropySource) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::IDrbgProvider*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg*>(this, ___internal_method, entropySource);
}
