#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Prng/zzzz__BasicEntropySourceProvider_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IEntropySourceProvider_def.hpp"
#include "Org/BouncyCastle/Crypto/Prng/zzzz__BasicEntropySourceProvider_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IEntropySource_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::__BasicEntropySourceProvider__BasicEntropySource._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::__BasicEntropySourceProvider__BasicEntropySource::*)(
    ::Org::BouncyCastle::Security::SecureRandom*, bool, int32_t)>(&::Org::BouncyCastle::Crypto::Prng::__BasicEntropySourceProvider__BasicEntropySource::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xf41b04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::__BasicEntropySourceProvider__BasicEntropySource*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::__BasicEntropySourceProvider__BasicEntropySource.Org_BouncyCastle_Crypto_IEntropySource_get_IsPredictionResistant
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Prng::__BasicEntropySourceProvider__BasicEntropySource::*)()>(
    &::Org::BouncyCastle::Crypto::Prng::__BasicEntropySourceProvider__BasicEntropySource::Org_BouncyCastle_Crypto_IEntropySource_get_IsPredictionResistant)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf41b44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::__BasicEntropySourceProvider__BasicEntropySource*>::get(),
                                                 "Org.BouncyCastle.Crypto.IEntropySource.get_IsPredictionResistant", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::__BasicEntropySourceProvider__BasicEntropySource.Org_BouncyCastle_Crypto_IEntropySource_GetEntropy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Prng::__BasicEntropySourceProvider__BasicEntropySource::*)()>(
        &::Org::BouncyCastle::Crypto::Prng::__BasicEntropySourceProvider__BasicEntropySource::Org_BouncyCastle_Crypto_IEntropySource_GetEntropy)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xf41b4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::__BasicEntropySourceProvider__BasicEntropySource*>::get(),
                                                 "Org.BouncyCastle.Crypto.IEntropySource.GetEntropy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::__BasicEntropySourceProvider__BasicEntropySource.Org_BouncyCastle_Crypto_IEntropySource_get_EntropySize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Prng::__BasicEntropySourceProvider__BasicEntropySource::*)()>(
    &::Org::BouncyCastle::Crypto::Prng::__BasicEntropySourceProvider__BasicEntropySource::Org_BouncyCastle_Crypto_IEntropySource_get_EntropySize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf41c38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::__BasicEntropySourceProvider__BasicEntropySource*>::get(),
                                                 "Org.BouncyCastle.Crypto.IEntropySource.get_EntropySize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IEntropySource"
constexpr Org::BouncyCastle::Crypto::Prng::__BasicEntropySourceProvider__BasicEntropySource::operator ::Org::BouncyCastle::Crypto::IEntropySource*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IEntropySource*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Security::SecureRandom*& Org::BouncyCastle::Crypto::Prng::__BasicEntropySourceProvider__BasicEntropySource::__get_mSecureRandom() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSecureRandom;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const&
Org::BouncyCastle::Crypto::Prng::__BasicEntropySourceProvider__BasicEntropySource::__get_mSecureRandom() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSecureRandom;
}
constexpr void Org::BouncyCastle::Crypto::Prng::__BasicEntropySourceProvider__BasicEntropySource::__set_mSecureRandom(::Org::BouncyCastle::Security::SecureRandom* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mSecureRandom)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Org::BouncyCastle::Crypto::Prng::__BasicEntropySourceProvider__BasicEntropySource::__get_mPredictionResistant() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPredictionResistant;
}
constexpr bool const& Org::BouncyCastle::Crypto::Prng::__BasicEntropySourceProvider__BasicEntropySource::__get_mPredictionResistant() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPredictionResistant;
}
constexpr void Org::BouncyCastle::Crypto::Prng::__BasicEntropySourceProvider__BasicEntropySource::__set_mPredictionResistant(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mPredictionResistant = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Prng::__BasicEntropySourceProvider__BasicEntropySource::__get_mEntropySize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mEntropySize;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Prng::__BasicEntropySourceProvider__BasicEntropySource::__get_mEntropySize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mEntropySize;
}
constexpr void Org::BouncyCastle::Crypto::Prng::__BasicEntropySourceProvider__BasicEntropySource::__set_mEntropySize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mEntropySize = value;
}
inline ::Org::BouncyCastle::Crypto::Prng::__BasicEntropySourceProvider__BasicEntropySource*
Org::BouncyCastle::Crypto::Prng::__BasicEntropySourceProvider__BasicEntropySource::New_ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom, bool predictionResistant, int32_t entropySize) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Prng::__BasicEntropySourceProvider__BasicEntropySource*>(secureRandom, predictionResistant, entropySize));
}
inline void Org::BouncyCastle::Crypto::Prng::__BasicEntropySourceProvider__BasicEntropySource::_ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom, bool predictionResistant,
                                                                                                     int32_t entropySize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::__BasicEntropySourceProvider__BasicEntropySource*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, secureRandom, predictionResistant, entropySize);
}
inline bool Org::BouncyCastle::Crypto::Prng::__BasicEntropySourceProvider__BasicEntropySource::Org_BouncyCastle_Crypto_IEntropySource_get_IsPredictionResistant() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::__BasicEntropySourceProvider__BasicEntropySource*>::get(),
                                               "Org.BouncyCastle.Crypto.IEntropySource.get_IsPredictionResistant", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Prng::__BasicEntropySourceProvider__BasicEntropySource::Org_BouncyCastle_Crypto_IEntropySource_GetEntropy() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::__BasicEntropySourceProvider__BasicEntropySource*>::get(),
                                               "Org.BouncyCastle.Crypto.IEntropySource.GetEntropy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Prng::__BasicEntropySourceProvider__BasicEntropySource::Org_BouncyCastle_Crypto_IEntropySource_get_EntropySize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::__BasicEntropySourceProvider__BasicEntropySource*>::get(),
                                               "Org.BouncyCastle.Crypto.IEntropySource.get_EntropySize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Prng::__BasicEntropySourceProvider__BasicEntropySource::__BasicEntropySourceProvider__BasicEntropySource() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider::*)(
    ::Org::BouncyCastle::Security::SecureRandom*, bool)>(&::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xf41a54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IEntropySource* (
    ::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider::*)(int32_t)>(&::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider::Get)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xf41a84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider*>::get(), "Get",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IEntropySourceProvider"
constexpr Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider::operator ::Org::BouncyCastle::Crypto::IEntropySourceProvider*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IEntropySourceProvider*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Security::SecureRandom*& Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider::__get_mSecureRandom() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSecureRandom;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider::__get_mSecureRandom() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSecureRandom;
}
constexpr void Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider::__set_mSecureRandom(::Org::BouncyCastle::Security::SecureRandom* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mSecureRandom)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider::__get_mPredictionResistant() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPredictionResistant;
}
constexpr bool const& Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider::__get_mPredictionResistant() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPredictionResistant;
}
constexpr void Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider::__set_mPredictionResistant(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mPredictionResistant = value;
}
inline ::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider* Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider::New_ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom,
                                                                                                                                            bool isPredictionResistant) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider*>(secureRandom, isPredictionResistant));
}
inline void Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider::_ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom, bool isPredictionResistant) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, secureRandom, isPredictionResistant);
}
inline ::Org::BouncyCastle::Crypto::IEntropySource* Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider::Get(int32_t bitsRequired) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider*>::get(), "Get",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IEntropySource*, false>(this, ___internal_method, bitsRequired);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider::BasicEntropySourceProvider() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
