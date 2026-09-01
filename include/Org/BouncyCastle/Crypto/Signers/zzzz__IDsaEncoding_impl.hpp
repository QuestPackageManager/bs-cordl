#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Signers\IDsaEncoding.hpp"
#include "Org/BouncyCastle/Crypto/Signers/zzzz__IDsaEncoding_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::IDsaEncoding.Decode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Math::BigInteger*> (::Org::BouncyCastle::Crypto::Signers::IDsaEncoding::*)(
    ::Org::BouncyCastle::Math::BigInteger*, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Signers::IDsaEncoding::Decode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::IDsaEncoding*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::IDsaEncoding*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::IDsaEncoding.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Signers::IDsaEncoding::*)(
    ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Crypto::Signers::IDsaEncoding::Encode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::IDsaEncoding*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::IDsaEncoding*>(), 1 }));
    return ___internal_method;
  }
};
inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*> Org::BouncyCastle::Crypto::Signers::IDsaEncoding::Decode(::Org::BouncyCastle::Math::BigInteger* n, ::ArrayW<uint8_t> encoding) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::IDsaEncoding*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Math::BigInteger*>>(this, ___internal_method, n, encoding);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Signers::IDsaEncoding::Encode(::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Math::BigInteger* r,
                                                                                  ::Org::BouncyCastle::Math::BigInteger* s) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::IDsaEncoding*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, n, r, s);
}
