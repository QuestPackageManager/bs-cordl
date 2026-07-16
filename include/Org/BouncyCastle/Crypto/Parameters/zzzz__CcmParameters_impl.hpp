#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Parameters/CcmParameters.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__AeadParameters_impl.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__CcmParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::CcmParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::CcmParameters::*)(
    ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, int32_t, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Parameters::CcmParameters::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x340a71c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::CcmParameters*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Parameters::CcmParameters::_ctor(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key, int32_t macSize, ::ArrayW<uint8_t> nonce,
                                                                        ::ArrayW<uint8_t> associatedText) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::CcmParameters*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, macSize, nonce, associatedText);
}
inline ::Org::BouncyCastle::Crypto::Parameters::CcmParameters*
Org::BouncyCastle::Crypto::Parameters::CcmParameters::New_ctor(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key, int32_t macSize, ::ArrayW<uint8_t> nonce, ::ArrayW<uint8_t> associatedText) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Parameters::CcmParameters*>(key, macSize, nonce, associatedText));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Parameters::CcmParameters::CcmParameters() {}
