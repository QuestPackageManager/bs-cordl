#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Prng/Drbg/HashSP800Drbg.hpp"
#include "Org/BouncyCastle/Crypto/Prng/Drbg/zzzz__ISP80090Drbg_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Prng/Drbg/zzzz__HashSP800Drbg_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IEntropySource_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::*)(
    ::Org::BouncyCastle::Crypto::IDigest*, int32_t, ::Org::BouncyCastle::Crypto::IEntropySource*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::_ctor)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x23c75dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IEntropySource*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg.get_BlockSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::*)()>(
    &::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::get_BlockSize)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x23c7afc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>::get(),
                                                                               "get_BlockSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg.Generate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, bool)>(&::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::Generate)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x23c7ba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>::get(), "Generate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg.GetEntropy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::*)()>(
    &::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::GetEntropy)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x23c79e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>::get(),
                                                                               "GetEntropy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg.AddTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::AddTo)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x23c81bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>::get(), "AddTo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg.Reseed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::Reseed)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x23c7f00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>::get(), "Reseed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg.Hash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::Hash)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x23c80cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>::get(), "Hash", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg.DoHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::DoHash)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x23c84c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>::get(), "DoHash", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg.hashgen
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::hashgen)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x23c8284;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>::get(), "hashgen", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::IDigest*& Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::__cordl_internal_get_mDigest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mDigest;
}
constexpr ::Org::BouncyCastle::Crypto::IDigest* const& Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::__cordl_internal_get_mDigest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mDigest;
}
constexpr void Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::__cordl_internal_set_mDigest(::Org::BouncyCastle::Crypto::IDigest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mDigest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::IEntropySource*& Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::__cordl_internal_get_mEntropySource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mEntropySource;
}
constexpr ::Org::BouncyCastle::Crypto::IEntropySource* const& Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::__cordl_internal_get_mEntropySource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mEntropySource;
}
constexpr void Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::__cordl_internal_set_mEntropySource(::Org::BouncyCastle::Crypto::IEntropySource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mEntropySource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::__cordl_internal_get_mSecurityStrength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSecurityStrength;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::__cordl_internal_get_mSecurityStrength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSecurityStrength;
}
constexpr void Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::__cordl_internal_set_mSecurityStrength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mSecurityStrength = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::__cordl_internal_get_mSeedLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSeedLength;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::__cordl_internal_get_mSeedLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSeedLength;
}
constexpr void Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::__cordl_internal_set_mSeedLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mSeedLength = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::__cordl_internal_get_mV() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mV;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::__cordl_internal_get_mV() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mV;
}
constexpr void Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::__cordl_internal_set_mV(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mV)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::__cordl_internal_get_mC() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mC;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::__cordl_internal_get_mC() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mC;
}
constexpr void Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::__cordl_internal_set_mC(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mC)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::__cordl_internal_get_mReseedCounter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mReseedCounter;
}
constexpr int64_t const& Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::__cordl_internal_get_mReseedCounter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mReseedCounter;
}
constexpr void Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::__cordl_internal_set_mReseedCounter(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mReseedCounter = value;
}
inline void Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::setStaticF_ONE(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "ONE", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::getStaticF_ONE() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "ONE",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>::get>();
}
inline void Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::setStaticF_RESEED_MAX(int64_t value) {
  ::cordl_internals::setStaticField<int64_t, "RESEED_MAX", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>::get>(
      std::forward<int64_t>(value));
}
inline int64_t Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::getStaticF_RESEED_MAX() {
  return ::cordl_internals::getStaticField<int64_t, "RESEED_MAX", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>::get>();
}
inline void Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::setStaticF_MAX_BITS_REQUEST(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "MAX_BITS_REQUEST", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::getStaticF_MAX_BITS_REQUEST() {
  return ::cordl_internals::getStaticField<int32_t, "MAX_BITS_REQUEST", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>::get>();
}
inline void Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::setStaticF_seedlens(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "seedlens",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>::get>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::getStaticF_seedlens() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "seedlens",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>::get>();
}
inline void Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::_ctor(::Org::BouncyCastle::Crypto::IDigest* digest, int32_t securityStrength,
                                                                        ::Org::BouncyCastle::Crypto::IEntropySource* entropySource, ::ArrayW<uint8_t, ::Array<uint8_t>*> personalizationString,
                                                                        ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IEntropySource*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, digest, securityStrength, entropySource, personalizationString, nonce);
}
inline int32_t Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::get_BlockSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>::get(),
                                                                             "get_BlockSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::Generate(::ArrayW<uint8_t, ::Array<uint8_t>*> output, ::ArrayW<uint8_t, ::Array<uint8_t>*> additionalInput,
                                                                              bool predictionResistant) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>::get(), "Generate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, output, additionalInput, predictionResistant);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::GetEntropy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>::get(),
                                                                             "GetEntropy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::AddTo(::ArrayW<uint8_t, ::Array<uint8_t>*> longer, ::ArrayW<uint8_t, ::Array<uint8_t>*> shorter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>::get(), "AddTo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, longer, shorter);
}
inline void Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::Reseed(::ArrayW<uint8_t, ::Array<uint8_t>*> additionalInput) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>::get(), "Reseed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, additionalInput);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::Hash(::ArrayW<uint8_t, ::Array<uint8_t>*> input) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>::get(), "Hash", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, input);
}
inline void Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::DoHash(::ArrayW<uint8_t, ::Array<uint8_t>*> input, ::ArrayW<uint8_t, ::Array<uint8_t>*> output) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>::get(), "DoHash", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input, output);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::hashgen(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t lengthInBits) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>::get(), "hashgen", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, input, lengthInBits);
}
inline ::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg* Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest, int32_t securityStrength,
                                                                                                                              ::Org::BouncyCastle::Crypto::IEntropySource* entropySource,
                                                                                                                              ::ArrayW<uint8_t, ::Array<uint8_t>*> personalizationString,
                                                                                                                              ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>(digest, securityStrength, entropySource, personalizationString, nonce));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg"
constexpr Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::operator ::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg"
constexpr ::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg* Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::i___Org__BouncyCastle__Crypto__Prng__Drbg__ISP80090Drbg() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::HashSP800Drbg() {}
