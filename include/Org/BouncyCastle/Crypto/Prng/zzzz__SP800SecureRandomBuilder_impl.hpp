#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Prng/SP800SecureRandomBuilder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Prng/zzzz__SP800SecureRandomBuilder_def.hpp"
#include "Org/BouncyCastle/Crypto/Prng/Drbg/zzzz__ISP80090Drbg_def.hpp"
#include "Org/BouncyCastle/Crypto/Prng/zzzz__IDrbgProvider_def.hpp"
#include "Org/BouncyCastle/Crypto/Prng/zzzz__SP800SecureRandomBuilder_def.hpp"
#include "Org/BouncyCastle/Crypto/Prng/zzzz__SP800SecureRandom_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IEntropySourceProvider_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IEntropySource_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HashDrbgProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HashDrbgProvider::*)(
    ::Org::BouncyCastle::Crypto::IDigest*, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HashDrbgProvider::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x341e018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HashDrbgProvider*>(),
            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HashDrbgProvider.Get
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg* (::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HashDrbgProvider::*)(::Org::BouncyCastle::Crypto::IEntropySource*)>(
        &::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HashDrbgProvider::Get)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x341e2fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HashDrbgProvider*>(),
                                                                                           { "Get", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IEntropySource*>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::IDigest*& Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HashDrbgProvider::__cordl_internal_get_mDigest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mDigest;
}
constexpr ::Org::BouncyCastle::Crypto::IDigest* const& Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HashDrbgProvider::__cordl_internal_get_mDigest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mDigest;
}
constexpr void Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HashDrbgProvider::__cordl_internal_set_mDigest(::Org::BouncyCastle::Crypto::IDigest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mDigest = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HashDrbgProvider::__cordl_internal_get_mNonce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mNonce;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HashDrbgProvider::__cordl_internal_get_mNonce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mNonce;
}
constexpr void Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HashDrbgProvider::__cordl_internal_set_mNonce(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mNonce = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HashDrbgProvider::__cordl_internal_get_mPersonalizationString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPersonalizationString;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HashDrbgProvider::__cordl_internal_get_mPersonalizationString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPersonalizationString;
}
constexpr void Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HashDrbgProvider::__cordl_internal_set_mPersonalizationString(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mPersonalizationString = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HashDrbgProvider::__cordl_internal_get_mSecurityStrength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSecurityStrength;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HashDrbgProvider::__cordl_internal_get_mSecurityStrength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSecurityStrength;
}
constexpr void Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HashDrbgProvider::__cordl_internal_set_mSecurityStrength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mSecurityStrength = value;
}
inline void Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HashDrbgProvider::_ctor(::Org::BouncyCastle::Crypto::IDigest* digest, ::ArrayW<uint8_t> nonce,
                                                                                              ::ArrayW<uint8_t> personalizationString, int32_t securityStrength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HashDrbgProvider*>(),
          { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, digest, nonce, personalizationString, securityStrength);
}
inline ::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg*
Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HashDrbgProvider::Get(::Org::BouncyCastle::Crypto::IEntropySource* entropySource) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HashDrbgProvider*>(),
                                                                                         { "Get", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IEntropySource*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg*>(this, ___internal_method, entropySource);
}
inline ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HashDrbgProvider*
Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HashDrbgProvider::New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest, ::ArrayW<uint8_t> nonce, ::ArrayW<uint8_t> personalizationString,
                                                                                     int32_t securityStrength) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HashDrbgProvider*>(digest, nonce, personalizationString, securityStrength));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Prng::IDrbgProvider"
constexpr Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HashDrbgProvider::operator ::Org::BouncyCastle::Crypto::Prng::IDrbgProvider*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Prng::IDrbgProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Prng::IDrbgProvider"
constexpr ::Org::BouncyCastle::Crypto::Prng::IDrbgProvider* Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HashDrbgProvider::i___Org__BouncyCastle__Crypto__Prng__IDrbgProvider() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Prng::IDrbgProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HashDrbgProvider::SP800SecureRandomBuilder_HashDrbgProvider() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HMacDrbgProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HMacDrbgProvider::*)(
    ::Org::BouncyCastle::Crypto::IMac*, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HMacDrbgProvider::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x341e2ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HMacDrbgProvider*>(),
            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IMac*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HMacDrbgProvider.Get
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg* (::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HMacDrbgProvider::*)(::Org::BouncyCastle::Crypto::IEntropySource*)>(
        &::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HMacDrbgProvider::Get)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x341e388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HMacDrbgProvider*>(),
                                                                                           { "Get", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IEntropySource*>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::IMac*& Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HMacDrbgProvider::__cordl_internal_get_mHMac() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mHMac;
}
constexpr ::Org::BouncyCastle::Crypto::IMac* const& Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HMacDrbgProvider::__cordl_internal_get_mHMac() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mHMac;
}
constexpr void Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HMacDrbgProvider::__cordl_internal_set_mHMac(::Org::BouncyCastle::Crypto::IMac* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mHMac = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HMacDrbgProvider::__cordl_internal_get_mNonce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mNonce;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HMacDrbgProvider::__cordl_internal_get_mNonce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mNonce;
}
constexpr void Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HMacDrbgProvider::__cordl_internal_set_mNonce(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mNonce = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HMacDrbgProvider::__cordl_internal_get_mPersonalizationString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPersonalizationString;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HMacDrbgProvider::__cordl_internal_get_mPersonalizationString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPersonalizationString;
}
constexpr void Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HMacDrbgProvider::__cordl_internal_set_mPersonalizationString(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mPersonalizationString = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HMacDrbgProvider::__cordl_internal_get_mSecurityStrength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSecurityStrength;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HMacDrbgProvider::__cordl_internal_get_mSecurityStrength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSecurityStrength;
}
constexpr void Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HMacDrbgProvider::__cordl_internal_set_mSecurityStrength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mSecurityStrength = value;
}
inline void Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HMacDrbgProvider::_ctor(::Org::BouncyCastle::Crypto::IMac* hMac, ::ArrayW<uint8_t> nonce, ::ArrayW<uint8_t> personalizationString,
                                                                                              int32_t securityStrength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HMacDrbgProvider*>(),
          { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IMac*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hMac, nonce, personalizationString, securityStrength);
}
inline ::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg*
Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HMacDrbgProvider::Get(::Org::BouncyCastle::Crypto::IEntropySource* entropySource) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HMacDrbgProvider*>(),
                                                                                         { "Get", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IEntropySource*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg*>(this, ___internal_method, entropySource);
}
inline ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HMacDrbgProvider*
Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HMacDrbgProvider::New_ctor(::Org::BouncyCastle::Crypto::IMac* hMac, ::ArrayW<uint8_t> nonce, ::ArrayW<uint8_t> personalizationString,
                                                                                     int32_t securityStrength) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HMacDrbgProvider*>(hMac, nonce, personalizationString, securityStrength));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Prng::IDrbgProvider"
constexpr Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HMacDrbgProvider::operator ::Org::BouncyCastle::Crypto::Prng::IDrbgProvider*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Prng::IDrbgProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Prng::IDrbgProvider"
constexpr ::Org::BouncyCastle::Crypto::Prng::IDrbgProvider* Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HMacDrbgProvider::i___Org__BouncyCastle__Crypto__Prng__IDrbgProvider() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Prng::IDrbgProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HMacDrbgProvider::SP800SecureRandomBuilder_HMacDrbgProvider() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_CtrDrbgProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_CtrDrbgProvider::*)(
    ::Org::BouncyCastle::Crypto::IBlockCipher*, int32_t, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_CtrDrbgProvider::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x341e184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_CtrDrbgProvider*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Crypto::IBlockCipher*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                 ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_CtrDrbgProvider.Get
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg* (::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_CtrDrbgProvider::*)(::Org::BouncyCastle::Crypto::IEntropySource*)>(
        &::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_CtrDrbgProvider::Get)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x341e414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_CtrDrbgProvider*>(),
                                                                                           { "Get", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IEntropySource*>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher*& Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_CtrDrbgProvider::__cordl_internal_get_mBlockCipher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mBlockCipher;
}
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* const& Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_CtrDrbgProvider::__cordl_internal_get_mBlockCipher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mBlockCipher;
}
constexpr void Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_CtrDrbgProvider::__cordl_internal_set_mBlockCipher(::Org::BouncyCastle::Crypto::IBlockCipher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mBlockCipher = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_CtrDrbgProvider::__cordl_internal_get_mKeySizeInBits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mKeySizeInBits;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_CtrDrbgProvider::__cordl_internal_get_mKeySizeInBits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mKeySizeInBits;
}
constexpr void Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_CtrDrbgProvider::__cordl_internal_set_mKeySizeInBits(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mKeySizeInBits = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_CtrDrbgProvider::__cordl_internal_get_mNonce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mNonce;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_CtrDrbgProvider::__cordl_internal_get_mNonce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mNonce;
}
constexpr void Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_CtrDrbgProvider::__cordl_internal_set_mNonce(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mNonce = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_CtrDrbgProvider::__cordl_internal_get_mPersonalizationString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPersonalizationString;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_CtrDrbgProvider::__cordl_internal_get_mPersonalizationString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPersonalizationString;
}
constexpr void Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_CtrDrbgProvider::__cordl_internal_set_mPersonalizationString(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mPersonalizationString = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_CtrDrbgProvider::__cordl_internal_get_mSecurityStrength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSecurityStrength;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_CtrDrbgProvider::__cordl_internal_get_mSecurityStrength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSecurityStrength;
}
constexpr void Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_CtrDrbgProvider::__cordl_internal_set_mSecurityStrength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mSecurityStrength = value;
}
inline void Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_CtrDrbgProvider::_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* blockCipher, int32_t keySizeInBits, ::ArrayW<uint8_t> nonce,
                                                                                             ::ArrayW<uint8_t> personalizationString, int32_t securityStrength) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_CtrDrbgProvider*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::Org::BouncyCastle::Crypto::IBlockCipher*>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, blockCipher, keySizeInBits, nonce, personalizationString, securityStrength);
}
inline ::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg*
Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_CtrDrbgProvider::Get(::Org::BouncyCastle::Crypto::IEntropySource* entropySource) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_CtrDrbgProvider*>(),
                                                                                         { "Get", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IEntropySource*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg*>(this, ___internal_method, entropySource);
}
inline ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_CtrDrbgProvider*
Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_CtrDrbgProvider::New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* blockCipher, int32_t keySizeInBits, ::ArrayW<uint8_t> nonce,
                                                                                    ::ArrayW<uint8_t> personalizationString, int32_t securityStrength) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_CtrDrbgProvider*>(blockCipher, keySizeInBits, nonce, personalizationString, securityStrength));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Prng::IDrbgProvider"
constexpr Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_CtrDrbgProvider::operator ::Org::BouncyCastle::Crypto::Prng::IDrbgProvider*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Prng::IDrbgProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Prng::IDrbgProvider"
constexpr ::Org::BouncyCastle::Crypto::Prng::IDrbgProvider* Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_CtrDrbgProvider::i___Org__BouncyCastle__Crypto__Prng__IDrbgProvider() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Prng::IDrbgProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_CtrDrbgProvider::SP800SecureRandomBuilder_CtrDrbgProvider() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::*)()>(&::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x341ddbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::*)(::Org::BouncyCastle::Security::SecureRandom*, bool)>(
    &::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x341de1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::*)(::Org::BouncyCastle::Crypto::IEntropySourceProvider*)>(
    &::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x341de98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IEntropySourceProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder.SetPersonalizationString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder* (
    ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::SetPersonalizationString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x341deac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*>(),
                                                                                           { "SetPersonalizationString", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder.SetSecurityStrength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder* (::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::SetSecurityStrength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x341deb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*>(), { "SetSecurityStrength", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder.SetEntropyBitsRequired
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder* (::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::SetEntropyBitsRequired)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x341debc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*>(), { "SetEntropyBitsRequired", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder.BuildHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom* (::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::*)(::Org::BouncyCastle::Crypto::IDigest*, ::ArrayW<uint8_t>, bool)>(
        &::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::BuildHash)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x341dec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*>(),
                                                { "BuildHash", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder.BuildCtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom* (
    ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::*)(::Org::BouncyCastle::Crypto::IBlockCipher*, int32_t, ::ArrayW<uint8_t>, bool)>(
    &::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::BuildCtr)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x341e028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*>(),
            { "BuildCtr", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IBlockCipher*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder.BuildHMac
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom* (::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::*)(::Org::BouncyCastle::Crypto::IMac*, ::ArrayW<uint8_t>, bool)>(
        &::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::BuildHMac)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x341e198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*>(),
                                                { "BuildHMac", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IMac*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Security::SecureRandom*& Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::__cordl_internal_get_mRandom() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mRandom;
}
constexpr ::Org::BouncyCastle::Security::SecureRandom* const& Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::__cordl_internal_get_mRandom() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mRandom;
}
constexpr void Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::__cordl_internal_set_mRandom(::Org::BouncyCastle::Security::SecureRandom* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mRandom = value;
}
constexpr ::Org::BouncyCastle::Crypto::IEntropySourceProvider*& Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::__cordl_internal_get_mEntropySourceProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mEntropySourceProvider;
}
constexpr ::Org::BouncyCastle::Crypto::IEntropySourceProvider* const& Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::__cordl_internal_get_mEntropySourceProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mEntropySourceProvider;
}
constexpr void Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::__cordl_internal_set_mEntropySourceProvider(::Org::BouncyCastle::Crypto::IEntropySourceProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mEntropySourceProvider = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::__cordl_internal_get_mPersonalizationString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPersonalizationString;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::__cordl_internal_get_mPersonalizationString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPersonalizationString;
}
constexpr void Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::__cordl_internal_set_mPersonalizationString(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mPersonalizationString = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::__cordl_internal_get_mSecurityStrength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSecurityStrength;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::__cordl_internal_get_mSecurityStrength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSecurityStrength;
}
constexpr void Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::__cordl_internal_set_mSecurityStrength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mSecurityStrength = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::__cordl_internal_get_mEntropyBitsRequired() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mEntropyBitsRequired;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::__cordl_internal_get_mEntropyBitsRequired() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mEntropyBitsRequired;
}
constexpr void Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::__cordl_internal_set_mEntropyBitsRequired(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mEntropyBitsRequired = value;
}
inline void Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::_ctor(::Org::BouncyCastle::Security::SecureRandom* entropySource, bool predictionResistant) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entropySource, predictionResistant);
}
inline void Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::_ctor(::Org::BouncyCastle::Crypto::IEntropySourceProvider* entropySourceProvider) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IEntropySourceProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entropySourceProvider);
}
inline ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder* Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::SetPersonalizationString(::ArrayW<uint8_t> personalizationString) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*>(), { "SetPersonalizationString", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*>(this, ___internal_method, personalizationString);
}
inline ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder* Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::SetSecurityStrength(int32_t securityStrength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*>(), { "SetSecurityStrength", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*>(this, ___internal_method, securityStrength);
}
inline ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder* Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::SetEntropyBitsRequired(int32_t entropyBitsRequired) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*>(), { "SetEntropyBitsRequired", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*>(this, ___internal_method, entropyBitsRequired);
}
inline ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom* Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::BuildHash(::Org::BouncyCastle::Crypto::IDigest* digest, ::ArrayW<uint8_t> nonce,
                                                                                                                                  bool predictionResistant) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*>(),
                                              { "BuildHash", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom*>(this, ___internal_method, digest, nonce, predictionResistant);
}
inline ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom*
Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::BuildCtr(::Org::BouncyCastle::Crypto::IBlockCipher* cipher, int32_t keySizeInBits, ::ArrayW<uint8_t> nonce, bool predictionResistant) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*>(),
                       { "BuildCtr", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IBlockCipher*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom*>(this, ___internal_method, cipher, keySizeInBits, nonce, predictionResistant);
}
inline ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom* Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::BuildHMac(::Org::BouncyCastle::Crypto::IMac* hMac, ::ArrayW<uint8_t> nonce,
                                                                                                                                  bool predictionResistant) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*>(),
                                              { "BuildHMac", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IMac*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom*>(this, ___internal_method, hMac, nonce, predictionResistant);
}
inline ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder* Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*>());
}
inline ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder* Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::New_ctor(::Org::BouncyCastle::Security::SecureRandom* entropySource,
                                                                                                                                        bool predictionResistant) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*>(entropySource, predictionResistant));
}
inline ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*
Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::New_ctor(::Org::BouncyCastle::Crypto::IEntropySourceProvider* entropySourceProvider) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*>(entropySourceProvider));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::SP800SecureRandomBuilder() {}
