#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\IEntropySourceProvider.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IEntropySourceProvider_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IEntropySource_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IEntropySourceProvider.Get
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IEntropySource* (::Org::BouncyCastle::Crypto::IEntropySourceProvider::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::IEntropySourceProvider::Get)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IEntropySourceProvider*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::IEntropySourceProvider*>(), 0 }));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Crypto::IEntropySource* Org::BouncyCastle::Crypto::IEntropySourceProvider::Get(int32_t bitsRequired) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::IEntropySourceProvider*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IEntropySource*>(this, ___internal_method, bitsRequired);
}
