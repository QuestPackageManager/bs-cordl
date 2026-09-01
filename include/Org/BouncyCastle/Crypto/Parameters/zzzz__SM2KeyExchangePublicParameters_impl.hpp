#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Parameters\SM2KeyExchangePublicParameters.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__SM2KeyExchangePublicParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECPublicKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters::*)(
    ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*, ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*)>(
    &::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x34176bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>(),
                                                                                               ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters.get_StaticPublicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* (::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters::get_StaticPublicKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34177a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters.get_EphemeralPublicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* (::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters::get_EphemeralPublicKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34177ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*& Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters::__cordl_internal_get_mStaticPublicKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mStaticPublicKey;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* const& Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters::__cordl_internal_get_mStaticPublicKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mStaticPublicKey;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters::__cordl_internal_set_mStaticPublicKey(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mStaticPublicKey = value;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*& Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters::__cordl_internal_get_mEphemeralPublicKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mEphemeralPublicKey;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* const&
Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters::__cordl_internal_get_mEphemeralPublicKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mEphemeralPublicKey;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters::__cordl_internal_set_mEphemeralPublicKey(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mEphemeralPublicKey = value;
}
inline void Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters::_ctor(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* staticPublicKey,
                                                                                         ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* ephemeralPublicKey) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters*>(),
          { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, staticPublicKey, ephemeralPublicKey);
}
inline ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters::get_StaticPublicKey() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters::get_EphemeralPublicKey() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters*
Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters::New_ctor(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* staticPublicKey,
                                                                                ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* ephemeralPublicKey) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters*>(staticPublicKey, ephemeralPublicKey));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherParameters"
constexpr Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters::operator ::Org::BouncyCastle::Crypto::ICipherParameters*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::ICipherParameters*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::ICipherParameters"
constexpr ::Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters::i___Org__BouncyCastle__Crypto__ICipherParameters() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::ICipherParameters*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters::SM2KeyExchangePublicParameters() {}
