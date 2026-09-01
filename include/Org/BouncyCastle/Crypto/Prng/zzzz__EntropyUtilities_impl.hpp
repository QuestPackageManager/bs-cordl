#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Prng\EntropyUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Prng/zzzz__EntropyUtilities_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IEntropySource_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::EntropyUtilities.GenerateSeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::Org::BouncyCastle::Crypto::IEntropySource*, int32_t)>(
    &::Org::BouncyCastle::Crypto::Prng::EntropyUtilities::GenerateSeed)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x341e510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::EntropyUtilities*>(),
                                                             { "GenerateSeed", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IEntropySource*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::EntropyUtilities._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::EntropyUtilities::*)()>(&::Org::BouncyCastle::Crypto::Prng::EntropyUtilities::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x341e674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::EntropyUtilities*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Prng::EntropyUtilities::GenerateSeed(::Org::BouncyCastle::Crypto::IEntropySource* entropySource, int32_t numBytes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::EntropyUtilities*>(),
                                                           { "GenerateSeed", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IEntropySource*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, entropySource, numBytes);
}
inline void Org::BouncyCastle::Crypto::Prng::EntropyUtilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::EntropyUtilities*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Prng::EntropyUtilities* Org::BouncyCastle::Crypto::Prng::EntropyUtilities::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Prng::EntropyUtilities*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Prng::EntropyUtilities::EntropyUtilities() {}
