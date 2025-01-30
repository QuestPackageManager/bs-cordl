#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Prng/X931Rng.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Prng/zzzz__X931Rng_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IEntropySource_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::X931Rng._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::X931Rng::*)(
    ::Org::BouncyCastle::Crypto::IBlockCipher*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Org::BouncyCastle::Crypto::IEntropySource*)>(&::Org::BouncyCastle::Crypto::Prng::X931Rng::_ctor)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x23cb97c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::X931Rng*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IBlockCipher*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IEntropySource*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::X931Rng.Generate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Prng::X931Rng::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, bool)>(
    &::Org::BouncyCastle::Crypto::Prng::X931Rng::Generate)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x23cbb74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::X931Rng*>::get(), "Generate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::X931Rng.Reseed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::X931Rng::*)()>(&::Org::BouncyCastle::Crypto::Prng::X931Rng::Reseed)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x23cc190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::X931Rng*>::get(), "Reseed",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::X931Rng.get_EntropySource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IEntropySource* (::Org::BouncyCastle::Crypto::Prng::X931Rng::*)()>(
    &::Org::BouncyCastle::Crypto::Prng::X931Rng::get_EntropySource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23cc318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::X931Rng*>::get(),
                                                                               "get_EntropySource", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::X931Rng.Process
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::X931Rng::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Prng::X931Rng::Process)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x23cc018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::X931Rng*>::get(), "Process", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::X931Rng.Increment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::X931Rng::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Crypto::Prng::X931Rng::Increment)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x23cc14c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::X931Rng*>::get(), "Increment", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::X931Rng.IsTooLarge
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::Org::BouncyCastle::Crypto::Prng::X931Rng::IsTooLarge)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x23cc004;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::X931Rng*>::get(), "IsTooLarge", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher*& Org::BouncyCastle::Crypto::Prng::X931Rng::__cordl_internal_get_mEngine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mEngine;
}
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* const& Org::BouncyCastle::Crypto::Prng::X931Rng::__cordl_internal_get_mEngine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mEngine;
}
constexpr void Org::BouncyCastle::Crypto::Prng::X931Rng::__cordl_internal_set_mEngine(::Org::BouncyCastle::Crypto::IBlockCipher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mEngine)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::IEntropySource*& Org::BouncyCastle::Crypto::Prng::X931Rng::__cordl_internal_get_mEntropySource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mEntropySource;
}
constexpr ::Org::BouncyCastle::Crypto::IEntropySource* const& Org::BouncyCastle::Crypto::Prng::X931Rng::__cordl_internal_get_mEntropySource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mEntropySource;
}
constexpr void Org::BouncyCastle::Crypto::Prng::X931Rng::__cordl_internal_set_mEntropySource(::Org::BouncyCastle::Crypto::IEntropySource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mEntropySource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Prng::X931Rng::__cordl_internal_get_mDT() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mDT;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Prng::X931Rng::__cordl_internal_get_mDT() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mDT;
}
constexpr void Org::BouncyCastle::Crypto::Prng::X931Rng::__cordl_internal_set_mDT(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mDT)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Prng::X931Rng::__cordl_internal_get_mI() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mI;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Prng::X931Rng::__cordl_internal_get_mI() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mI;
}
constexpr void Org::BouncyCastle::Crypto::Prng::X931Rng::__cordl_internal_set_mI(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mI)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Prng::X931Rng::__cordl_internal_get_mR() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mR;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Prng::X931Rng::__cordl_internal_get_mR() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mR;
}
constexpr void Org::BouncyCastle::Crypto::Prng::X931Rng::__cordl_internal_set_mR(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mR)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Prng::X931Rng::__cordl_internal_get_mV() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mV;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Prng::X931Rng::__cordl_internal_get_mV() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mV;
}
constexpr void Org::BouncyCastle::Crypto::Prng::X931Rng::__cordl_internal_set_mV(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mV)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& Org::BouncyCastle::Crypto::Prng::X931Rng::__cordl_internal_get_mReseedCounter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mReseedCounter;
}
constexpr int64_t const& Org::BouncyCastle::Crypto::Prng::X931Rng::__cordl_internal_get_mReseedCounter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mReseedCounter;
}
constexpr void Org::BouncyCastle::Crypto::Prng::X931Rng::__cordl_internal_set_mReseedCounter(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mReseedCounter = value;
}
inline void Org::BouncyCastle::Crypto::Prng::X931Rng::_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* engine, ::ArrayW<uint8_t, ::Array<uint8_t>*> dateTimeVector,
                                                            ::Org::BouncyCastle::Crypto::IEntropySource* entropySource) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::X931Rng*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IBlockCipher*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IEntropySource*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, engine, dateTimeVector, entropySource);
}
inline int32_t Org::BouncyCastle::Crypto::Prng::X931Rng::Generate(::ArrayW<uint8_t, ::Array<uint8_t>*> output, bool predictionResistant) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::X931Rng*>::get(), "Generate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, output, predictionResistant);
}
inline void Org::BouncyCastle::Crypto::Prng::X931Rng::Reseed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::X931Rng*>::get(), "Reseed",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::IEntropySource* Org::BouncyCastle::Crypto::Prng::X931Rng::get_EntropySource() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::X931Rng*>::get(),
                                                                             "get_EntropySource", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IEntropySource*, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Prng::X931Rng::Process(::ArrayW<uint8_t, ::Array<uint8_t>*> res, ::ArrayW<uint8_t, ::Array<uint8_t>*> a, ::ArrayW<uint8_t, ::Array<uint8_t>*> b) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::X931Rng*>::get(), "Process", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, res, a, b);
}
inline void Org::BouncyCastle::Crypto::Prng::X931Rng::Increment(::ArrayW<uint8_t, ::Array<uint8_t>*> val) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::X931Rng*>::get(), "Increment", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, val);
}
inline bool Org::BouncyCastle::Crypto::Prng::X931Rng::IsTooLarge(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t maxBytes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::X931Rng*>::get(), "IsTooLarge", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, bytes, maxBytes);
}
inline ::Org::BouncyCastle::Crypto::Prng::X931Rng* Org::BouncyCastle::Crypto::Prng::X931Rng::New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* engine,
                                                                                                      ::ArrayW<uint8_t, ::Array<uint8_t>*> dateTimeVector,
                                                                                                      ::Org::BouncyCastle::Crypto::IEntropySource* entropySource) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Prng::X931Rng*>(engine, dateTimeVector, entropySource));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Prng::X931Rng::X931Rng() {}
