#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Parameters\KdfParameters.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KdfParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDerivationParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::KdfParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::KdfParameters::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Parameters::KdfParameters::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34149c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::KdfParameters*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::KdfParameters.GetSharedSecret
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Parameters::KdfParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::KdfParameters::GetSharedSecret)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34149c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::KdfParameters*>(), { "GetSharedSecret", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::KdfParameters.GetIV
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Parameters::KdfParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::KdfParameters::GetIV)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34149d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::KdfParameters*>(), { "GetIV", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Parameters::KdfParameters::__cordl_internal_get_iv() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iv;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Parameters::KdfParameters::__cordl_internal_get_iv() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iv;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::KdfParameters::__cordl_internal_set_iv(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___iv = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Parameters::KdfParameters::__cordl_internal_get_shared() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shared;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Parameters::KdfParameters::__cordl_internal_get_shared() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shared;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::KdfParameters::__cordl_internal_set_shared(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shared = value;
}
inline void Org::BouncyCastle::Crypto::Parameters::KdfParameters::_ctor(::ArrayW<uint8_t> shared, ::ArrayW<uint8_t> iv) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::KdfParameters*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shared, iv);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Parameters::KdfParameters::GetSharedSecret() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::KdfParameters*>(), { "GetSharedSecret", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Parameters::KdfParameters::GetIV() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::KdfParameters*>(), { "GetIV", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Parameters::KdfParameters* Org::BouncyCastle::Crypto::Parameters::KdfParameters::New_ctor(::ArrayW<uint8_t> shared, ::ArrayW<uint8_t> iv) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Parameters::KdfParameters*>(shared, iv));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDerivationParameters"
constexpr Org::BouncyCastle::Crypto::Parameters::KdfParameters::operator ::Org::BouncyCastle::Crypto::IDerivationParameters*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IDerivationParameters*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IDerivationParameters"
constexpr ::Org::BouncyCastle::Crypto::IDerivationParameters* Org::BouncyCastle::Crypto::Parameters::KdfParameters::i___Org__BouncyCastle__Crypto__IDerivationParameters() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IDerivationParameters*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Parameters::KdfParameters::KdfParameters() {}
