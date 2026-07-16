#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Parameters/IesWithCipherParameters.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__IesParameters_impl.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__IesWithCipherParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3411b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters.get_CipherKeySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters::get_CipherKeySize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3411b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters*>(), { "get_CipherKeySize", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters::__cordl_internal_get_cipherKeySize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cipherKeySize;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters::__cordl_internal_get_cipherKeySize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cipherKeySize;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters::__cordl_internal_set_cipherKeySize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cipherKeySize = value;
}
inline void Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters::_ctor(::ArrayW<uint8_t> derivation, ::ArrayW<uint8_t> encoding, int32_t macKeySize, int32_t cipherKeySize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, derivation, encoding, macKeySize, cipherKeySize);
}
inline int32_t Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters::get_CipherKeySize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters*>(), { "get_CipherKeySize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters*
Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters::New_ctor(::ArrayW<uint8_t> derivation, ::ArrayW<uint8_t> encoding, int32_t macKeySize, int32_t cipherKeySize) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters*>(derivation, encoding, macKeySize, cipherKeySize));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters::IesWithCipherParameters() {}
