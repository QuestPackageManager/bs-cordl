#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Prng\CryptoApiEntropySourceProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Prng/zzzz__CryptoApiEntropySourceProvider_def.hpp"
#include "Org/BouncyCastle/Crypto/Prng/zzzz__CryptoApiEntropySourceProvider_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IEntropySourceProvider_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IEntropySource_def.hpp"
#include "System/Security/Cryptography/zzzz__RandomNumberGenerator_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider_CryptoApiEntropySource._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider_CryptoApiEntropySource::*)(
    ::System::Security::Cryptography::RandomNumberGenerator*, bool, int32_t)>(&::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider_CryptoApiEntropySource::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x341db38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider_CryptoApiEntropySource*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::RandomNumberGenerator*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider_CryptoApiEntropySource.Org_BouncyCastle_Crypto_IEntropySource_get_IsPredictionResistant
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider_CryptoApiEntropySource::*)()>(
    &::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider_CryptoApiEntropySource::Org_BouncyCastle_Crypto_IEntropySource_get_IsPredictionResistant)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x341db48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider_CryptoApiEntropySource*>(),
                                                                                           { "Org.BouncyCastle.Crypto.IEntropySource.get_IsPredictionResistant", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider_CryptoApiEntropySource.Org_BouncyCastle_Crypto_IEntropySource_GetEntropy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider_CryptoApiEntropySource::*)()>(
    &::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider_CryptoApiEntropySource::Org_BouncyCastle_Crypto_IEntropySource_GetEntropy)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x341db50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider_CryptoApiEntropySource*>(),
                                                                                           { "Org.BouncyCastle.Crypto.IEntropySource.GetEntropy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider_CryptoApiEntropySource.Org_BouncyCastle_Crypto_IEntropySource_get_EntropySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider_CryptoApiEntropySource::*)()>(
    &::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider_CryptoApiEntropySource::Org_BouncyCastle_Crypto_IEntropySource_get_EntropySize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x341dbdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider_CryptoApiEntropySource*>(),
                                                                                           { "Org.BouncyCastle.Crypto.IEntropySource.get_EntropySize", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Security::Cryptography::RandomNumberGenerator*& Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider_CryptoApiEntropySource::__cordl_internal_get_mRng() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mRng;
}
constexpr ::System::Security::Cryptography::RandomNumberGenerator* const& Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider_CryptoApiEntropySource::__cordl_internal_get_mRng() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mRng;
}
constexpr void Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider_CryptoApiEntropySource::__cordl_internal_set_mRng(::System::Security::Cryptography::RandomNumberGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mRng = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider_CryptoApiEntropySource::__cordl_internal_get_mPredictionResistant() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPredictionResistant;
}
constexpr bool const& Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider_CryptoApiEntropySource::__cordl_internal_get_mPredictionResistant() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPredictionResistant;
}
constexpr void Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider_CryptoApiEntropySource::__cordl_internal_set_mPredictionResistant(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mPredictionResistant = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider_CryptoApiEntropySource::__cordl_internal_get_mEntropySize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mEntropySize;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider_CryptoApiEntropySource::__cordl_internal_get_mEntropySize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mEntropySize;
}
constexpr void Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider_CryptoApiEntropySource::__cordl_internal_set_mEntropySize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mEntropySize = value;
}
inline void Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider_CryptoApiEntropySource::_ctor(::System::Security::Cryptography::RandomNumberGenerator* rng, bool predictionResistant,
                                                                                                          int32_t entropySize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider_CryptoApiEntropySource*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::RandomNumberGenerator*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rng, predictionResistant, entropySize);
}
inline bool Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider_CryptoApiEntropySource::Org_BouncyCastle_Crypto_IEntropySource_get_IsPredictionResistant() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider_CryptoApiEntropySource*>(),
                                                                                         { "Org.BouncyCastle.Crypto.IEntropySource.get_IsPredictionResistant", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider_CryptoApiEntropySource::Org_BouncyCastle_Crypto_IEntropySource_GetEntropy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider_CryptoApiEntropySource*>(),
                                                                                         { "Org.BouncyCastle.Crypto.IEntropySource.GetEntropy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider_CryptoApiEntropySource::Org_BouncyCastle_Crypto_IEntropySource_get_EntropySize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider_CryptoApiEntropySource*>(),
                                                                                         { "Org.BouncyCastle.Crypto.IEntropySource.get_EntropySize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider_CryptoApiEntropySource*
Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider_CryptoApiEntropySource::New_ctor(::System::Security::Cryptography::RandomNumberGenerator* rng, bool predictionResistant,
                                                                                                 int32_t entropySize) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider_CryptoApiEntropySource*>(rng, predictionResistant, entropySize));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IEntropySource"
constexpr Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider_CryptoApiEntropySource::operator ::Org::BouncyCastle::Crypto::IEntropySource*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IEntropySource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IEntropySource"
constexpr ::Org::BouncyCastle::Crypto::IEntropySource*
Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider_CryptoApiEntropySource::i___Org__BouncyCastle__Crypto__IEntropySource() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IEntropySource*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider_CryptoApiEntropySource::CryptoApiEntropySourceProvider_CryptoApiEntropySource() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider::*)()>(
    &::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x341da48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider::*)(::System::Security::Cryptography::RandomNumberGenerator*, bool)>(
    &::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x341da6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::RandomNumberGenerator*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider.Get
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IEntropySource* (::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider::Get)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x341dacc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider*>(), { "Get", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Security::Cryptography::RandomNumberGenerator*& Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider::__cordl_internal_get_mRng() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mRng;
}
constexpr ::System::Security::Cryptography::RandomNumberGenerator* const& Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider::__cordl_internal_get_mRng() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mRng;
}
constexpr void Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider::__cordl_internal_set_mRng(::System::Security::Cryptography::RandomNumberGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mRng = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider::__cordl_internal_get_mPredictionResistant() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPredictionResistant;
}
constexpr bool const& Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider::__cordl_internal_get_mPredictionResistant() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPredictionResistant;
}
constexpr void Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider::__cordl_internal_set_mPredictionResistant(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mPredictionResistant = value;
}
inline void Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider::_ctor(::System::Security::Cryptography::RandomNumberGenerator* rng, bool isPredictionResistant) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::RandomNumberGenerator*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rng, isPredictionResistant);
}
inline ::Org::BouncyCastle::Crypto::IEntropySource* Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider::Get(int32_t bitsRequired) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider*>(), { "Get", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IEntropySource*>(this, ___internal_method, bitsRequired);
}
inline ::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider* Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider*>());
}
inline ::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider*
Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider::New_ctor(::System::Security::Cryptography::RandomNumberGenerator* rng, bool isPredictionResistant) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider*>(rng, isPredictionResistant));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IEntropySourceProvider"
constexpr Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider::operator ::Org::BouncyCastle::Crypto::IEntropySourceProvider*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IEntropySourceProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IEntropySourceProvider"
constexpr ::Org::BouncyCastle::Crypto::IEntropySourceProvider* Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider::i___Org__BouncyCastle__Crypto__IEntropySourceProvider() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IEntropySourceProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider::CryptoApiEntropySourceProvider() {}
