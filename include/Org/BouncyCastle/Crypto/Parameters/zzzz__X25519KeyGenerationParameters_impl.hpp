#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Parameters\X25519KeyGenerationParameters.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_impl.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__X25519KeyGenerationParameters_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::X25519KeyGenerationParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::X25519KeyGenerationParameters::*)(::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Crypto::Parameters::X25519KeyGenerationParameters::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3417854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::X25519KeyGenerationParameters*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Parameters::X25519KeyGenerationParameters::_ctor(::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::X25519KeyGenerationParameters*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, random);
}
inline ::Org::BouncyCastle::Crypto::Parameters::X25519KeyGenerationParameters*
Org::BouncyCastle::Crypto::Parameters::X25519KeyGenerationParameters::New_ctor(::Org::BouncyCastle::Security::SecureRandom* random) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Parameters::X25519KeyGenerationParameters*>(random));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Parameters::X25519KeyGenerationParameters::X25519KeyGenerationParameters() {}
