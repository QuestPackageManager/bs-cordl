#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Prng/zzzz__CryptoApiEntropySourceProvider_def.hpp"
#include "System/Security/Cryptography/zzzz__RandomNumberGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IEntropySource_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IEntropySourceProvider_def.hpp"
#include "Org/BouncyCastle/Crypto/Prng/zzzz__CryptoApiEntropySourceProvider_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::__CryptoApiEntropySourceProvider__CryptoApiEntropySource._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::__CryptoApiEntropySourceProvider__CryptoApiEntropySource::*)(
    ::System::Security::Cryptography::RandomNumberGenerator*, bool, int32_t)>(&::Org::BouncyCastle::Crypto::Prng::__CryptoApiEntropySourceProvider__CryptoApiEntropySource::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xf41d68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::__CryptoApiEntropySourceProvider__CryptoApiEntropySource*>::get(), ".ctor",
        std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::RandomNumberGenerator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::__CryptoApiEntropySourceProvider__CryptoApiEntropySource.Org_BouncyCastle_Crypto_IEntropySource_get_IsPredictionResistant
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Prng::__CryptoApiEntropySourceProvider__CryptoApiEntropySource::*)()>(
    &::Org::BouncyCastle::Crypto::Prng::__CryptoApiEntropySourceProvider__CryptoApiEntropySource::Org_BouncyCastle_Crypto_IEntropySource_get_IsPredictionResistant)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf41da8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::__CryptoApiEntropySourceProvider__CryptoApiEntropySource*>::get(),
                                    "Org.BouncyCastle.Crypto.IEntropySource.get_IsPredictionResistant", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::__CryptoApiEntropySourceProvider__CryptoApiEntropySource.Org_BouncyCastle_Crypto_IEntropySource_GetEntropy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Prng::__CryptoApiEntropySourceProvider__CryptoApiEntropySource::*)()>(
        &::Org::BouncyCastle::Crypto::Prng::__CryptoApiEntropySourceProvider__CryptoApiEntropySource::Org_BouncyCastle_Crypto_IEntropySource_GetEntropy)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xf41db0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::__CryptoApiEntropySourceProvider__CryptoApiEntropySource*>::get(),
                                    "Org.BouncyCastle.Crypto.IEntropySource.GetEntropy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::__CryptoApiEntropySourceProvider__CryptoApiEntropySource.Org_BouncyCastle_Crypto_IEntropySource_get_EntropySize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Prng::__CryptoApiEntropySourceProvider__CryptoApiEntropySource::*)()>(
    &::Org::BouncyCastle::Crypto::Prng::__CryptoApiEntropySourceProvider__CryptoApiEntropySource::Org_BouncyCastle_Crypto_IEntropySource_get_EntropySize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf41e38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::__CryptoApiEntropySourceProvider__CryptoApiEntropySource*>::get(),
                                    "Org.BouncyCastle.Crypto.IEntropySource.get_EntropySize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IEntropySource"
constexpr Org::BouncyCastle::Crypto::Prng::__CryptoApiEntropySourceProvider__CryptoApiEntropySource::operator ::Org::BouncyCastle::Crypto::IEntropySource*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IEntropySource*>(static_cast<void*>(this));
}
constexpr ::System::Security::Cryptography::RandomNumberGenerator*& Org::BouncyCastle::Crypto::Prng::__CryptoApiEntropySourceProvider__CryptoApiEntropySource::__get_mRng() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mRng;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::RandomNumberGenerator*> const&
Org::BouncyCastle::Crypto::Prng::__CryptoApiEntropySourceProvider__CryptoApiEntropySource::__get_mRng() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mRng;
}
constexpr void Org::BouncyCastle::Crypto::Prng::__CryptoApiEntropySourceProvider__CryptoApiEntropySource::__set_mRng(::System::Security::Cryptography::RandomNumberGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mRng)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Org::BouncyCastle::Crypto::Prng::__CryptoApiEntropySourceProvider__CryptoApiEntropySource::__get_mPredictionResistant() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mPredictionResistant;
}
constexpr bool const& Org::BouncyCastle::Crypto::Prng::__CryptoApiEntropySourceProvider__CryptoApiEntropySource::__get_mPredictionResistant() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mPredictionResistant;
}
constexpr void Org::BouncyCastle::Crypto::Prng::__CryptoApiEntropySourceProvider__CryptoApiEntropySource::__set_mPredictionResistant(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___mPredictionResistant = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Prng::__CryptoApiEntropySourceProvider__CryptoApiEntropySource::__get_mEntropySize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mEntropySize;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Prng::__CryptoApiEntropySourceProvider__CryptoApiEntropySource::__get_mEntropySize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mEntropySize;
}
constexpr void Org::BouncyCastle::Crypto::Prng::__CryptoApiEntropySourceProvider__CryptoApiEntropySource::__set_mEntropySize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___mEntropySize = value;
}
inline ::Org::BouncyCastle::Crypto::Prng::__CryptoApiEntropySourceProvider__CryptoApiEntropySource*
Org::BouncyCastle::Crypto::Prng::__CryptoApiEntropySourceProvider__CryptoApiEntropySource::New_ctor(::System::Security::Cryptography::RandomNumberGenerator* rng, bool predictionResistant,
                                                                                                    int32_t entropySize) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Prng::__CryptoApiEntropySourceProvider__CryptoApiEntropySource*>(rng, predictionResistant, entropySize));
}
inline void Org::BouncyCastle::Crypto::Prng::__CryptoApiEntropySourceProvider__CryptoApiEntropySource::_ctor(::System::Security::Cryptography::RandomNumberGenerator* rng, bool predictionResistant,
                                                                                                             int32_t entropySize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::__CryptoApiEntropySourceProvider__CryptoApiEntropySource*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::RandomNumberGenerator*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rng, predictionResistant, entropySize);
}
inline bool Org::BouncyCastle::Crypto::Prng::__CryptoApiEntropySourceProvider__CryptoApiEntropySource::Org_BouncyCastle_Crypto_IEntropySource_get_IsPredictionResistant() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::__CryptoApiEntropySourceProvider__CryptoApiEntropySource*>::get(),
                                  "Org.BouncyCastle.Crypto.IEntropySource.get_IsPredictionResistant", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Prng::__CryptoApiEntropySourceProvider__CryptoApiEntropySource::Org_BouncyCastle_Crypto_IEntropySource_GetEntropy() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::__CryptoApiEntropySourceProvider__CryptoApiEntropySource*>::get(),
                                  "Org.BouncyCastle.Crypto.IEntropySource.GetEntropy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Prng::__CryptoApiEntropySourceProvider__CryptoApiEntropySource::Org_BouncyCastle_Crypto_IEntropySource_get_EntropySize() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::__CryptoApiEntropySourceProvider__CryptoApiEntropySource*>::get(),
                                  "Org.BouncyCastle.Crypto.IEntropySource.get_EntropySize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Prng::__CryptoApiEntropySourceProvider__CryptoApiEntropySource::__CryptoApiEntropySourceProvider__CryptoApiEntropySource() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider::*)()>(
    &::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xf41c40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider::*)(
    ::System::Security::Cryptography::RandomNumberGenerator*, bool)>(&::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xf41c64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::RandomNumberGenerator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IEntropySource* (
    ::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider::*)(int32_t)>(&::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider::Get)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xf41ce8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider*>::get(), "Get",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IEntropySourceProvider"
constexpr Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider::operator ::Org::BouncyCastle::Crypto::IEntropySourceProvider*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IEntropySourceProvider*>(static_cast<void*>(this));
}
constexpr ::System::Security::Cryptography::RandomNumberGenerator*& Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider::__get_mRng() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mRng;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::RandomNumberGenerator*> const& Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider::__get_mRng() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mRng;
}
constexpr void Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider::__set_mRng(::System::Security::Cryptography::RandomNumberGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mRng)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider::__get_mPredictionResistant() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mPredictionResistant;
}
constexpr bool const& Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider::__get_mPredictionResistant() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mPredictionResistant;
}
constexpr void Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider::__set_mPredictionResistant(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___mPredictionResistant = value;
}
inline ::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider* Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider*>());
}
inline void Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider*
Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider::New_ctor(::System::Security::Cryptography::RandomNumberGenerator* rng, bool isPredictionResistant) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider*>(rng, isPredictionResistant));
}
inline void Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider::_ctor(::System::Security::Cryptography::RandomNumberGenerator* rng, bool isPredictionResistant) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::RandomNumberGenerator*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rng, isPredictionResistant);
}
inline ::Org::BouncyCastle::Crypto::IEntropySource* Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider::Get(int32_t bitsRequired) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider*>::get(), "Get",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IEntropySource*, false>(this, ___internal_method, bitsRequired);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider::CryptoApiEntropySourceProvider() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
