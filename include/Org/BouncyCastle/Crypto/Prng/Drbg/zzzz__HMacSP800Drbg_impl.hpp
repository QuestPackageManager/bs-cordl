#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Prng\Drbg\HMacSP800Drbg.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Prng/Drbg/zzzz__HMacSP800Drbg_def.hpp"
#include "Org/BouncyCastle/Crypto/Prng/Drbg/zzzz__ISP80090Drbg_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IEntropySource_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg::*)(
    ::Org::BouncyCastle::Crypto::IMac*, int32_t, ::Org::BouncyCastle::Crypto::IEntropySource*, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg::_ctor)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x341ca04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::Org::BouncyCastle::Crypto::IMac*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IEntropySource*>(),
                                                    ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg.hmac_DRBG_Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg::hmac_DRBG_Update)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x341ce18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg*>(), { "hmac_DRBG_Update", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg.hmac_DRBG_Update_Func
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg::*)(::ArrayW<uint8_t>, uint8_t)>(
    &::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg::hmac_DRBG_Update_Func)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x341ce58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg*>(),
                                                                                           { "hmac_DRBG_Update_Func", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg.get_BlockSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg::*)()>(&::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg::get_BlockSize)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x341d28c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg*>(), { "get_BlockSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, bool)>(
    &::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg::Generate)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0x341d2a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg*>(),
                                                             { "Generate", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg.Reseed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg::Reseed)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x341d7d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg*>(), { "Reseed", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg.GetEntropy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg::*)()>(
    &::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg::GetEntropy)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x341cd00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg*>(), { "GetEntropy", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg::__cordl_internal_get_mK() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mK;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg::__cordl_internal_get_mK() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mK;
}
constexpr void Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg::__cordl_internal_set_mK(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mK = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg::__cordl_internal_get_mV() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mV;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg::__cordl_internal_get_mV() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mV;
}
constexpr void Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg::__cordl_internal_set_mV(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mV = value;
}
constexpr ::Org::BouncyCastle::Crypto::IEntropySource*& Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg::__cordl_internal_get_mEntropySource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mEntropySource;
}
constexpr ::Org::BouncyCastle::Crypto::IEntropySource* const& Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg::__cordl_internal_get_mEntropySource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mEntropySource;
}
constexpr void Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg::__cordl_internal_set_mEntropySource(::Org::BouncyCastle::Crypto::IEntropySource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mEntropySource = value;
}
constexpr ::Org::BouncyCastle::Crypto::IMac*& Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg::__cordl_internal_get_mHMac() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mHMac;
}
constexpr ::Org::BouncyCastle::Crypto::IMac* const& Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg::__cordl_internal_get_mHMac() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mHMac;
}
constexpr void Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg::__cordl_internal_set_mHMac(::Org::BouncyCastle::Crypto::IMac* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mHMac = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg::__cordl_internal_get_mSecurityStrength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSecurityStrength;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg::__cordl_internal_get_mSecurityStrength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSecurityStrength;
}
constexpr void Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg::__cordl_internal_set_mSecurityStrength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mSecurityStrength = value;
}
constexpr int64_t& Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg::__cordl_internal_get_mReseedCounter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mReseedCounter;
}
constexpr int64_t const& Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg::__cordl_internal_get_mReseedCounter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mReseedCounter;
}
constexpr void Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg::__cordl_internal_set_mReseedCounter(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mReseedCounter = value;
}
inline void Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg::setStaticF_RESEED_MAX(int64_t value) {
  ::cordl_internals::setStaticField<int64_t, "RESEED_MAX", ::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg*>(std::forward<int64_t>(value));
}
inline int64_t Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg::getStaticF_RESEED_MAX() {
  return ::cordl_internals::getStaticField<int64_t, "RESEED_MAX", ::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg*>();
}
inline void Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg::setStaticF_MAX_BITS_REQUEST(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "MAX_BITS_REQUEST", ::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg::getStaticF_MAX_BITS_REQUEST() {
  return ::cordl_internals::getStaticField<int32_t, "MAX_BITS_REQUEST", ::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg*>();
}
inline void Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg::_ctor(::Org::BouncyCastle::Crypto::IMac* hMac, int32_t securityStrength, ::Org::BouncyCastle::Crypto::IEntropySource* entropySource,
                                                                        ::ArrayW<uint8_t> personalizationString, ::ArrayW<uint8_t> nonce) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::Org::BouncyCastle::Crypto::IMac*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IEntropySource*>(),
                                                  ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hMac, securityStrength, entropySource, personalizationString, nonce);
}
inline void Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg::hmac_DRBG_Update(::ArrayW<uint8_t> seedMaterial) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg*>(), { "hmac_DRBG_Update", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seedMaterial);
}
inline void Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg::hmac_DRBG_Update_Func(::ArrayW<uint8_t> seedMaterial, uint8_t vValue) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg*>(),
                                                                                         { "hmac_DRBG_Update_Func", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seedMaterial, vValue);
}
inline int32_t Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg::get_BlockSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg*>(), { "get_BlockSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg::Generate(::ArrayW<uint8_t> output, ::ArrayW<uint8_t> additionalInput, bool predictionResistant) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg*>(),
                                                           { "Generate", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, output, additionalInput, predictionResistant);
}
inline void Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg::Reseed(::ArrayW<uint8_t> additionalInput) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg*>(), { "Reseed", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, additionalInput);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg::GetEntropy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg*>(), { "GetEntropy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg* Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg::New_ctor(::Org::BouncyCastle::Crypto::IMac* hMac, int32_t securityStrength,
                                                                                                                              ::Org::BouncyCastle::Crypto::IEntropySource* entropySource,
                                                                                                                              ::ArrayW<uint8_t> personalizationString, ::ArrayW<uint8_t> nonce) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg*>(hMac, securityStrength, entropySource, personalizationString, nonce));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg"
constexpr Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg::operator ::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg"
constexpr ::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg* Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg::i___Org__BouncyCastle__Crypto__Prng__Drbg__ISP80090Drbg() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg::HMacSP800Drbg() {}
