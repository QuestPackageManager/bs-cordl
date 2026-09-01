#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\IVerifier.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IVerifier_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IVerifier.IsVerified
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::IVerifier::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::IVerifier::IsVerified)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IVerifier*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::IVerifier*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IVerifier.IsVerified
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::IVerifier::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::IVerifier::IsVerified)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IVerifier*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::IVerifier*>(), 1 }));
    return ___internal_method;
  }
};
inline bool Org::BouncyCastle::Crypto::IVerifier::IsVerified(::ArrayW<uint8_t> data) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::IVerifier*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data);
}
inline bool Org::BouncyCastle::Crypto::IVerifier::IsVerified(::ArrayW<uint8_t> source, int32_t off, int32_t length) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::IVerifier*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, source, off, length);
}
