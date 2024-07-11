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
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HashDrbgProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HashDrbgProvider::*)(
    ::Org::BouncyCastle::Crypto::IDigest*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HashDrbgProvider::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x11b59e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HashDrbgProvider*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HashDrbgProvider.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg* (
    ::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HashDrbgProvider::*)(::Org::BouncyCastle::Crypto::IEntropySource*)>(
    &::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HashDrbgProvider::Get)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x11b5d84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HashDrbgProvider*>::get(), "Get",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IEntropySource*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Prng::IDrbgProvider"
constexpr Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HashDrbgProvider::operator ::Org::BouncyCastle::Crypto::Prng::IDrbgProvider*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Prng::IDrbgProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Prng::IDrbgProvider"
constexpr ::Org::BouncyCastle::Crypto::Prng::IDrbgProvider*
Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HashDrbgProvider::i___Org__BouncyCastle__Crypto__Prng__IDrbgProvider() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Prng::IDrbgProvider*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Crypto::IDigest*& Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HashDrbgProvider::__cordl_internal_get_mDigest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mDigest;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> const&
Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HashDrbgProvider::__cordl_internal_get_mDigest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mDigest;
}
constexpr void Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HashDrbgProvider::__cordl_internal_set_mDigest(::Org::BouncyCastle::Crypto::IDigest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mDigest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HashDrbgProvider::__cordl_internal_get_mNonce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mNonce;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HashDrbgProvider::__cordl_internal_get_mNonce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mNonce;
}
constexpr void Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HashDrbgProvider::__cordl_internal_set_mNonce(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mNonce)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HashDrbgProvider::__cordl_internal_get_mPersonalizationString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPersonalizationString;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HashDrbgProvider::__cordl_internal_get_mPersonalizationString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPersonalizationString;
}
constexpr void Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HashDrbgProvider::__cordl_internal_set_mPersonalizationString(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mPersonalizationString)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HashDrbgProvider::__cordl_internal_get_mSecurityStrength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSecurityStrength;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HashDrbgProvider::__cordl_internal_get_mSecurityStrength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSecurityStrength;
}
constexpr void Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HashDrbgProvider::__cordl_internal_set_mSecurityStrength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mSecurityStrength = value;
}
inline ::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HashDrbgProvider*
Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HashDrbgProvider::New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest, ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce,
                                                                                        ::ArrayW<uint8_t, ::Array<uint8_t>*> personalizationString, int32_t securityStrength) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HashDrbgProvider*>(digest, nonce, personalizationString, securityStrength));
}
inline void Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HashDrbgProvider::_ctor(::Org::BouncyCastle::Crypto::IDigest* digest, ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce,
                                                                                                 ::ArrayW<uint8_t, ::Array<uint8_t>*> personalizationString, int32_t securityStrength) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HashDrbgProvider*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, digest, nonce, personalizationString, securityStrength);
}
inline ::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg*
Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HashDrbgProvider::Get(::Org::BouncyCastle::Crypto::IEntropySource* entropySource) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HashDrbgProvider*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IEntropySource*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg*, false>(this, ___internal_method, entropySource);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HashDrbgProvider::__SP800SecureRandomBuilder__HashDrbgProvider() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HMacDrbgProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HMacDrbgProvider::*)(
    ::Org::BouncyCastle::Crypto::IMac*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HMacDrbgProvider::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x11b5d40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HMacDrbgProvider*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IMac*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HMacDrbgProvider.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg* (
    ::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HMacDrbgProvider::*)(::Org::BouncyCastle::Crypto::IEntropySource*)>(
    &::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HMacDrbgProvider::Get)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x11b5e14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HMacDrbgProvider*>::get(), "Get",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IEntropySource*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Prng::IDrbgProvider"
constexpr Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HMacDrbgProvider::operator ::Org::BouncyCastle::Crypto::Prng::IDrbgProvider*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Prng::IDrbgProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Prng::IDrbgProvider"
constexpr ::Org::BouncyCastle::Crypto::Prng::IDrbgProvider*
Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HMacDrbgProvider::i___Org__BouncyCastle__Crypto__Prng__IDrbgProvider() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Prng::IDrbgProvider*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Crypto::IMac*& Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HMacDrbgProvider::__cordl_internal_get_mHMac() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mHMac;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IMac*> const&
Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HMacDrbgProvider::__cordl_internal_get_mHMac() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mHMac;
}
constexpr void Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HMacDrbgProvider::__cordl_internal_set_mHMac(::Org::BouncyCastle::Crypto::IMac* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mHMac)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HMacDrbgProvider::__cordl_internal_get_mNonce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mNonce;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HMacDrbgProvider::__cordl_internal_get_mNonce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mNonce;
}
constexpr void Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HMacDrbgProvider::__cordl_internal_set_mNonce(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mNonce)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HMacDrbgProvider::__cordl_internal_get_mPersonalizationString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPersonalizationString;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HMacDrbgProvider::__cordl_internal_get_mPersonalizationString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPersonalizationString;
}
constexpr void Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HMacDrbgProvider::__cordl_internal_set_mPersonalizationString(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mPersonalizationString)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HMacDrbgProvider::__cordl_internal_get_mSecurityStrength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSecurityStrength;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HMacDrbgProvider::__cordl_internal_get_mSecurityStrength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSecurityStrength;
}
constexpr void Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HMacDrbgProvider::__cordl_internal_set_mSecurityStrength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mSecurityStrength = value;
}
inline ::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HMacDrbgProvider*
Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HMacDrbgProvider::New_ctor(::Org::BouncyCastle::Crypto::IMac* hMac, ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce,
                                                                                        ::ArrayW<uint8_t, ::Array<uint8_t>*> personalizationString, int32_t securityStrength) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HMacDrbgProvider*>(hMac, nonce, personalizationString, securityStrength));
}
inline void Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HMacDrbgProvider::_ctor(::Org::BouncyCastle::Crypto::IMac* hMac, ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce,
                                                                                                 ::ArrayW<uint8_t, ::Array<uint8_t>*> personalizationString, int32_t securityStrength) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HMacDrbgProvider*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IMac*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hMac, nonce, personalizationString, securityStrength);
}
inline ::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg*
Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HMacDrbgProvider::Get(::Org::BouncyCastle::Crypto::IEntropySource* entropySource) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HMacDrbgProvider*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IEntropySource*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg*, false>(this, ___internal_method, entropySource);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HMacDrbgProvider::__SP800SecureRandomBuilder__HMacDrbgProvider() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__CtrDrbgProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__CtrDrbgProvider::*)(
    ::Org::BouncyCastle::Crypto::IBlockCipher*, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__CtrDrbgProvider::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x11b5b94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__CtrDrbgProvider*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IBlockCipher*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__CtrDrbgProvider.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg* (
    ::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__CtrDrbgProvider::*)(::Org::BouncyCastle::Crypto::IEntropySource*)>(
    &::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__CtrDrbgProvider::Get)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x11b5ea4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__CtrDrbgProvider*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IEntropySource*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Prng::IDrbgProvider"
constexpr Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__CtrDrbgProvider::operator ::Org::BouncyCastle::Crypto::Prng::IDrbgProvider*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Prng::IDrbgProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Prng::IDrbgProvider"
constexpr ::Org::BouncyCastle::Crypto::Prng::IDrbgProvider*
Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__CtrDrbgProvider::i___Org__BouncyCastle__Crypto__Prng__IDrbgProvider() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Prng::IDrbgProvider*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher*& Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__CtrDrbgProvider::__cordl_internal_get_mBlockCipher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mBlockCipher;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IBlockCipher*> const&
Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__CtrDrbgProvider::__cordl_internal_get_mBlockCipher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mBlockCipher;
}
constexpr void Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__CtrDrbgProvider::__cordl_internal_set_mBlockCipher(::Org::BouncyCastle::Crypto::IBlockCipher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mBlockCipher)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__CtrDrbgProvider::__cordl_internal_get_mKeySizeInBits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mKeySizeInBits;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__CtrDrbgProvider::__cordl_internal_get_mKeySizeInBits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mKeySizeInBits;
}
constexpr void Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__CtrDrbgProvider::__cordl_internal_set_mKeySizeInBits(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mKeySizeInBits = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__CtrDrbgProvider::__cordl_internal_get_mNonce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mNonce;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__CtrDrbgProvider::__cordl_internal_get_mNonce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mNonce;
}
constexpr void Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__CtrDrbgProvider::__cordl_internal_set_mNonce(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mNonce)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__CtrDrbgProvider::__cordl_internal_get_mPersonalizationString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPersonalizationString;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__CtrDrbgProvider::__cordl_internal_get_mPersonalizationString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPersonalizationString;
}
constexpr void Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__CtrDrbgProvider::__cordl_internal_set_mPersonalizationString(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mPersonalizationString)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__CtrDrbgProvider::__cordl_internal_get_mSecurityStrength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSecurityStrength;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__CtrDrbgProvider::__cordl_internal_get_mSecurityStrength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSecurityStrength;
}
constexpr void Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__CtrDrbgProvider::__cordl_internal_set_mSecurityStrength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mSecurityStrength = value;
}
inline ::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__CtrDrbgProvider*
Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__CtrDrbgProvider::New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* blockCipher, int32_t keySizeInBits,
                                                                                       ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce, ::ArrayW<uint8_t, ::Array<uint8_t>*> personalizationString,
                                                                                       int32_t securityStrength) {
  return THROW_UNLESS(
      ::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__CtrDrbgProvider*>(blockCipher, keySizeInBits, nonce, personalizationString, securityStrength));
}
inline void Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__CtrDrbgProvider::_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* blockCipher, int32_t keySizeInBits,
                                                                                                ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce, ::ArrayW<uint8_t, ::Array<uint8_t>*> personalizationString,
                                                                                                int32_t securityStrength) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__CtrDrbgProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IBlockCipher*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, blockCipher, keySizeInBits, nonce, personalizationString, securityStrength);
}
inline ::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg*
Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__CtrDrbgProvider::Get(::Org::BouncyCastle::Crypto::IEntropySource* entropySource) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__CtrDrbgProvider*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IEntropySource*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg*, false>(this, ___internal_method, entropySource);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__CtrDrbgProvider::__SP800SecureRandomBuilder__CtrDrbgProvider() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::*)()>(
    &::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x11b5748;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::*)(
    ::Org::BouncyCastle::Security::SecureRandom*, bool)>(&::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x11b57ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::*)(
    ::Org::BouncyCastle::Crypto::IEntropySourceProvider*)>(&::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x11b5844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IEntropySourceProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder.SetPersonalizationString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder* (
    ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::SetPersonalizationString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11b5878;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*>::get(), "SetPersonalizationString",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder.SetSecurityStrength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder* (
    ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::*)(int32_t)>(&::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::SetSecurityStrength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11b5880;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*>::get(), "SetSecurityStrength",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder.SetEntropyBitsRequired
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder* (
    ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::*)(int32_t)>(&::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::SetEntropyBitsRequired)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11b5888;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*>::get(), "SetEntropyBitsRequired",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder.BuildHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom* (
    ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::*)(::Org::BouncyCastle::Crypto::IDigest*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, bool)>(
    &::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::BuildHash)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x11b5890;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*>::get(), "BuildHash", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder.BuildCtr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom* (
    ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::*)(::Org::BouncyCastle::Crypto::IBlockCipher*, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, bool)>(
    &::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::BuildCtr)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x11b5a2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*>::get(), "BuildCtr", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IBlockCipher*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder.BuildHMac
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom* (
    ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::*)(::Org::BouncyCastle::Crypto::IMac*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, bool)>(
    &::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::BuildHMac)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x11b5be8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*>::get(), "BuildHMac", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IMac*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Security::SecureRandom*& Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::__cordl_internal_get_mRandom() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mRandom;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::__cordl_internal_get_mRandom() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mRandom;
}
constexpr void Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::__cordl_internal_set_mRandom(::Org::BouncyCastle::Security::SecureRandom* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mRandom)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::IEntropySourceProvider*& Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::__cordl_internal_get_mEntropySourceProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mEntropySourceProvider;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IEntropySourceProvider*> const&
Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::__cordl_internal_get_mEntropySourceProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mEntropySourceProvider;
}
constexpr void Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::__cordl_internal_set_mEntropySourceProvider(::Org::BouncyCastle::Crypto::IEntropySourceProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mEntropySourceProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::__cordl_internal_get_mPersonalizationString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPersonalizationString;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::__cordl_internal_get_mPersonalizationString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPersonalizationString;
}
constexpr void Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::__cordl_internal_set_mPersonalizationString(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mPersonalizationString)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
inline ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder* Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*>());
}
inline void Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder* Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::New_ctor(::Org::BouncyCastle::Security::SecureRandom* entropySource,
                                                                                                                                        bool predictionResistant) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*>(entropySource, predictionResistant));
}
inline void Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::_ctor(::Org::BouncyCastle::Security::SecureRandom* entropySource, bool predictionResistant) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, entropySource, predictionResistant);
}
inline ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*
Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::New_ctor(::Org::BouncyCastle::Crypto::IEntropySourceProvider* entropySourceProvider) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*>(entropySourceProvider));
}
inline void Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::_ctor(::Org::BouncyCastle::Crypto::IEntropySourceProvider* entropySourceProvider) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IEntropySourceProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, entropySourceProvider);
}
inline ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*
Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::SetPersonalizationString(::ArrayW<uint8_t, ::Array<uint8_t>*> personalizationString) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*>::get(), "SetPersonalizationString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*, false>(this, ___internal_method, personalizationString);
}
inline ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder* Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::SetSecurityStrength(int32_t securityStrength) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*>::get(), "SetSecurityStrength",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*, false>(this, ___internal_method, securityStrength);
}
inline ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder* Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::SetEntropyBitsRequired(int32_t entropyBitsRequired) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*>::get(), "SetEntropyBitsRequired",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*, false>(this, ___internal_method, entropyBitsRequired);
}
inline ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom*
Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::BuildHash(::Org::BouncyCastle::Crypto::IDigest* digest, ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce, bool predictionResistant) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*>::get(), "BuildHash", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom*, false>(this, ___internal_method, digest, nonce, predictionResistant);
}
inline ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom* Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::BuildCtr(::Org::BouncyCastle::Crypto::IBlockCipher* cipher,
                                                                                                                                 int32_t keySizeInBits, ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce,
                                                                                                                                 bool predictionResistant) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*>::get(), "BuildCtr", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IBlockCipher*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom*, false>(this, ___internal_method, cipher, keySizeInBits, nonce, predictionResistant);
}
inline ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom*
Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::BuildHMac(::Org::BouncyCastle::Crypto::IMac* hMac, ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce, bool predictionResistant) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*>::get(), "BuildHMac", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IMac*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom*, false>(this, ___internal_method, hMac, nonce, predictionResistant);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::SP800SecureRandomBuilder() {}
