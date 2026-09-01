#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\IXof.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IXof_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IXof.DoFinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::IXof::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::IXof::DoFinal)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IXof*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::IXof*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IXof.DoOutput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::IXof::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::IXof::DoOutput)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IXof*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::IXof*>(), 1 }));
    return ___internal_method;
  }
};
inline int32_t Org::BouncyCastle::Crypto::IXof::DoFinal(::ArrayW<uint8_t> output, int32_t outOff, int32_t outLen) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::IXof*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, output, outOff, outLen);
}
inline int32_t Org::BouncyCastle::Crypto::IXof::DoOutput(::ArrayW<uint8_t> output, int32_t outOff, int32_t outLen) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::IXof*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, output, outOff, outLen);
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDigest"
constexpr Org::BouncyCastle::Crypto::IXof::operator ::Org::BouncyCastle::Crypto::IDigest*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IDigest*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IDigest"
constexpr ::Org::BouncyCastle::Crypto::IDigest* Org::BouncyCastle::Crypto::IXof::i___Org__BouncyCastle__Crypto__IDigest() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IDigest*>(static_cast<void*>(this));
}
