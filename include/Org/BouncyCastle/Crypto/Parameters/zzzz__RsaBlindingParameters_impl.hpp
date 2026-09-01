#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Parameters\RsaBlindingParameters.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__RsaBlindingParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__RsaKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::*)(
    ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*, ::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3415538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters.get_PublicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* (::Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::get_PublicKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34155a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters*>(), { "get_PublicKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters.get_BlindingFactor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::get_BlindingFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34155a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters*>(), { "get_BlindingFactor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*& Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::__cordl_internal_get_publicKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicKey;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* const& Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::__cordl_internal_get_publicKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicKey;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::__cordl_internal_set_publicKey(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___publicKey = value;
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::__cordl_internal_get_blindingFactor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blindingFactor;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::__cordl_internal_get_blindingFactor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blindingFactor;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::__cordl_internal_set_blindingFactor(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blindingFactor = value;
}
inline void Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::_ctor(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* publicKey,
                                                                                ::Org::BouncyCastle::Math::BigInteger* blindingFactor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, publicKey, blindingFactor);
}
inline ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::get_PublicKey() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters*>(), { "get_PublicKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::get_BlindingFactor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters*>(), { "get_BlindingFactor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters*
Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::New_ctor(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* publicKey, ::Org::BouncyCastle::Math::BigInteger* blindingFactor) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters*>(publicKey, blindingFactor));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherParameters"
constexpr Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::operator ::Org::BouncyCastle::Crypto::ICipherParameters*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::ICipherParameters*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::ICipherParameters"
constexpr ::Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::i___Org__BouncyCastle__Crypto__ICipherParameters() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::ICipherParameters*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::RsaBlindingParameters() {}
