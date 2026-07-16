#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Prng/BasicEntropySourceProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Prng/zzzz__BasicEntropySourceProvider_def.hpp"
#include "Org/BouncyCastle/Crypto/Prng/zzzz__BasicEntropySourceProvider_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IEntropySourceProvider_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IEntropySource_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider_BasicEntropySource._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider_BasicEntropySource::*)(
    ::Org::BouncyCastle::Security::SecureRandom*, bool, int32_t)>(&::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider_BasicEntropySource::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x341b5ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider_BasicEntropySource*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider_BasicEntropySource.Org_BouncyCastle_Crypto_IEntropySource_get_IsPredictionResistant
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider_BasicEntropySource::*)()>(
    &::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider_BasicEntropySource::Org_BouncyCastle_Crypto_IEntropySource_get_IsPredictionResistant)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x341b5bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider_BasicEntropySource*>(),
                                                                                           { "Org.BouncyCastle.Crypto.IEntropySource.get_IsPredictionResistant", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider_BasicEntropySource.Org_BouncyCastle_Crypto_IEntropySource_GetEntropy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider_BasicEntropySource::*)()>(
    &::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider_BasicEntropySource::Org_BouncyCastle_Crypto_IEntropySource_GetEntropy)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x341b5c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider_BasicEntropySource*>(),
                                                                                           { "Org.BouncyCastle.Crypto.IEntropySource.GetEntropy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider_BasicEntropySource.Org_BouncyCastle_Crypto_IEntropySource_get_EntropySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider_BasicEntropySource::*)()>(
    &::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider_BasicEntropySource::Org_BouncyCastle_Crypto_IEntropySource_get_EntropySize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x341b6b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider_BasicEntropySource*>(),
                                                                                           { "Org.BouncyCastle.Crypto.IEntropySource.get_EntropySize", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Security::SecureRandom*& Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider_BasicEntropySource::__cordl_internal_get_mSecureRandom() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSecureRandom;
}
constexpr ::Org::BouncyCastle::Security::SecureRandom* const& Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider_BasicEntropySource::__cordl_internal_get_mSecureRandom() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSecureRandom;
}
constexpr void Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider_BasicEntropySource::__cordl_internal_set_mSecureRandom(::Org::BouncyCastle::Security::SecureRandom* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mSecureRandom = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider_BasicEntropySource::__cordl_internal_get_mPredictionResistant() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPredictionResistant;
}
constexpr bool const& Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider_BasicEntropySource::__cordl_internal_get_mPredictionResistant() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPredictionResistant;
}
constexpr void Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider_BasicEntropySource::__cordl_internal_set_mPredictionResistant(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mPredictionResistant = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider_BasicEntropySource::__cordl_internal_get_mEntropySize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mEntropySize;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider_BasicEntropySource::__cordl_internal_get_mEntropySize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mEntropySize;
}
constexpr void Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider_BasicEntropySource::__cordl_internal_set_mEntropySize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mEntropySize = value;
}
inline void Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider_BasicEntropySource::_ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom, bool predictionResistant,
                                                                                                  int32_t entropySize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider_BasicEntropySource*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, secureRandom, predictionResistant, entropySize);
}
inline bool Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider_BasicEntropySource::Org_BouncyCastle_Crypto_IEntropySource_get_IsPredictionResistant() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider_BasicEntropySource*>(),
                                                                                         { "Org.BouncyCastle.Crypto.IEntropySource.get_IsPredictionResistant", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider_BasicEntropySource::Org_BouncyCastle_Crypto_IEntropySource_GetEntropy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider_BasicEntropySource*>(),
                                                                                         { "Org.BouncyCastle.Crypto.IEntropySource.GetEntropy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider_BasicEntropySource::Org_BouncyCastle_Crypto_IEntropySource_get_EntropySize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider_BasicEntropySource*>(),
                                                                                         { "Org.BouncyCastle.Crypto.IEntropySource.get_EntropySize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider_BasicEntropySource*
Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider_BasicEntropySource::New_ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom, bool predictionResistant, int32_t entropySize) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider_BasicEntropySource*>(secureRandom, predictionResistant, entropySize));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IEntropySource"
constexpr Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider_BasicEntropySource::operator ::Org::BouncyCastle::Crypto::IEntropySource*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IEntropySource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IEntropySource"
constexpr ::Org::BouncyCastle::Crypto::IEntropySource* Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider_BasicEntropySource::i___Org__BouncyCastle__Crypto__IEntropySource() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IEntropySource*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider_BasicEntropySource::BasicEntropySourceProvider_BasicEntropySource() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider::*)(::Org::BouncyCastle::Security::SecureRandom*, bool)>(
    &::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x341b534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider.Get
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IEntropySource* (::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider::Get)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x341b540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider*>(), { "Get", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Security::SecureRandom*& Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider::__cordl_internal_get_mSecureRandom() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSecureRandom;
}
constexpr ::Org::BouncyCastle::Security::SecureRandom* const& Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider::__cordl_internal_get_mSecureRandom() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSecureRandom;
}
constexpr void Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider::__cordl_internal_set_mSecureRandom(::Org::BouncyCastle::Security::SecureRandom* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mSecureRandom = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider::__cordl_internal_get_mPredictionResistant() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPredictionResistant;
}
constexpr bool const& Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider::__cordl_internal_get_mPredictionResistant() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPredictionResistant;
}
constexpr void Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider::__cordl_internal_set_mPredictionResistant(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mPredictionResistant = value;
}
inline void Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider::_ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom, bool isPredictionResistant) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, secureRandom, isPredictionResistant);
}
inline ::Org::BouncyCastle::Crypto::IEntropySource* Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider::Get(int32_t bitsRequired) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider*>(), { "Get", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IEntropySource*>(this, ___internal_method, bitsRequired);
}
inline ::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider* Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider::New_ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom,
                                                                                                                                            bool isPredictionResistant) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider*>(secureRandom, isPredictionResistant));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IEntropySourceProvider"
constexpr Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider::operator ::Org::BouncyCastle::Crypto::IEntropySourceProvider*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IEntropySourceProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IEntropySourceProvider"
constexpr ::Org::BouncyCastle::Crypto::IEntropySourceProvider* Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider::i___Org__BouncyCastle__Crypto__IEntropySourceProvider() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IEntropySourceProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider::BasicEntropySourceProvider() {}
