#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Generators\Kdf1BytesGenerator.hpp"
#include "Org/BouncyCastle/Crypto/Generators/zzzz__BaseKdfBytesGenerator_impl.hpp"
#include "Org/BouncyCastle/Crypto/Generators/zzzz__Kdf1BytesGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::Kdf1BytesGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::Kdf1BytesGenerator::*)(::Org::BouncyCastle::Crypto::IDigest*)>(
    &::Org::BouncyCastle::Crypto::Generators::Kdf1BytesGenerator::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x33db8b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Kdf1BytesGenerator*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Generators::Kdf1BytesGenerator::_ctor(::Org::BouncyCastle::Crypto::IDigest* digest) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Kdf1BytesGenerator*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, digest);
}
inline ::Org::BouncyCastle::Crypto::Generators::Kdf1BytesGenerator* Org::BouncyCastle::Crypto::Generators::Kdf1BytesGenerator::New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Generators::Kdf1BytesGenerator*>(digest));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Generators::Kdf1BytesGenerator::Kdf1BytesGenerator() {}
