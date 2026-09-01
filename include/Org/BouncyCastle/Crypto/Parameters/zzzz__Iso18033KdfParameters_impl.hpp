#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Parameters\Iso18033KdfParameters.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__Iso18033KdfParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDerivationParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3413f0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters.GetSeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters::GetSeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3413f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters*>(), { "GetSeed", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters::__cordl_internal_get_seed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seed;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters::__cordl_internal_get_seed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seed;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters::__cordl_internal_set_seed(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___seed = value;
}
inline void Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters::_ctor(::ArrayW<uint8_t> seed) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seed);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters::GetSeed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters*>(), { "GetSeed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters* Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters::New_ctor(::ArrayW<uint8_t> seed) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters*>(seed));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDerivationParameters"
constexpr Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters::operator ::Org::BouncyCastle::Crypto::IDerivationParameters*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IDerivationParameters*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IDerivationParameters"
constexpr ::Org::BouncyCastle::Crypto::IDerivationParameters* Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters::i___Org__BouncyCastle__Crypto__IDerivationParameters() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IDerivationParameters*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters::Iso18033KdfParameters() {}
