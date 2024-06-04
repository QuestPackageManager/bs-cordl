#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Generators/KdfDoublePipelineIterationBytesGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Generators/zzzz__KdfDoublePipelineIterationBytesGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDerivationFunction_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDerivationParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMacDerivationFunction_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::*)(
    ::Org::BouncyCastle::Crypto::IMac*)>(&::Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1163da4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IMac*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::*)(
    ::Org::BouncyCastle::Crypto::IDerivationParameters*)>(&::Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::Init)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x1163e94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator*>::get(), "Init",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDerivationParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator.generateNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::*)()>(
    &::Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::generateNext)> {
  constexpr static std::size_t size = 0x4ec;
  constexpr static std::size_t addrs = 0x1164150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator*>::get(),
                                                 "generateNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator.get_Digest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IDigest* (
    ::Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::*)()>(&::Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::get_Digest)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x116463c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator*>::get(),
                                                 "get_Digest", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator.GenerateBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::GenerateBytes)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x11646c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator*>::get(), "GenerateBytes",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator.GetMac
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IMac* (
    ::Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::*)()>(&::Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::GetMac)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11648cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator*>::get(),
                                                 "GetMac", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IMacDerivationFunction"
constexpr Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::operator ::Org::BouncyCastle::Crypto::IMacDerivationFunction*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IMacDerivationFunction*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IMacDerivationFunction"
constexpr ::Org::BouncyCastle::Crypto::IMacDerivationFunction*
Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::i___Org__BouncyCastle__Crypto__IMacDerivationFunction() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IMacDerivationFunction*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDerivationFunction"
constexpr Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::operator ::Org::BouncyCastle::Crypto::IDerivationFunction*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IDerivationFunction*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IDerivationFunction"
constexpr ::Org::BouncyCastle::Crypto::IDerivationFunction*
Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::i___Org__BouncyCastle__Crypto__IDerivationFunction() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IDerivationFunction*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Crypto::IMac*& Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::__cordl_internal_get_prf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prf;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IMac*> const&
Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::__cordl_internal_get_prf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prf;
}
constexpr void Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::__cordl_internal_set_prf(::Org::BouncyCastle::Crypto::IMac* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___prf)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::__cordl_internal_get_h() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___h;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::__cordl_internal_get_h() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___h;
}
constexpr void Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::__cordl_internal_set_h(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___h = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::__cordl_internal_get_fixedInputData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fixedInputData;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::__cordl_internal_get_fixedInputData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fixedInputData;
}
constexpr void Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::__cordl_internal_set_fixedInputData(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fixedInputData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::__cordl_internal_get_maxSizeExcl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxSizeExcl;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::__cordl_internal_get_maxSizeExcl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxSizeExcl;
}
constexpr void Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::__cordl_internal_set_maxSizeExcl(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxSizeExcl = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::__cordl_internal_get_ios() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ios;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::__cordl_internal_get_ios() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ios;
}
constexpr void Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::__cordl_internal_set_ios(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ios)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::__cordl_internal_get_useCounter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useCounter;
}
constexpr bool const& Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::__cordl_internal_get_useCounter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useCounter;
}
constexpr void Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::__cordl_internal_set_useCounter(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useCounter = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::__cordl_internal_get_generatedBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___generatedBytes;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::__cordl_internal_get_generatedBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___generatedBytes;
}
constexpr void Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::__cordl_internal_set_generatedBytes(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___generatedBytes = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::__cordl_internal_get_a() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___a;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::__cordl_internal_get_a() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___a;
}
constexpr void Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::__cordl_internal_set_a(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___a)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::__cordl_internal_get_k() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___k;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::__cordl_internal_get_k() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___k;
}
constexpr void Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::__cordl_internal_set_k(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___k)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::setStaticF_IntegerMax(::Org::BouncyCastle::Math::BigInteger* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Math::BigInteger*, "IntegerMax",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator*>::get>(
      std::forward<::Org::BouncyCastle::Math::BigInteger*>(value));
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::getStaticF_IntegerMax() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Math::BigInteger*, "IntegerMax",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator*>::get>();
}
inline void Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::setStaticF_Two(::Org::BouncyCastle::Math::BigInteger* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Math::BigInteger*, "Two",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator*>::get>(
      std::forward<::Org::BouncyCastle::Math::BigInteger*>(value));
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::getStaticF_Two() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Math::BigInteger*, "Two",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator*>::get>();
}
inline ::Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator*
Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::New_ctor(::Org::BouncyCastle::Crypto::IMac* prf) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator*>(prf));
}
inline void Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::_ctor(::Org::BouncyCastle::Crypto::IMac* prf) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IMac*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prf);
}
inline void Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::Init(::Org::BouncyCastle::Crypto::IDerivationParameters* parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator*>::get(), "Init",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDerivationParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parameters);
}
inline void Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::generateNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator*>::get(),
                                               "generateNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::IDigest* Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::get_Digest() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator*>::get(),
                                               "get_Digest", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IDigest*, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::GenerateBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator*>::get(), "GenerateBytes",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, output, outOff, length);
}
inline ::Org::BouncyCastle::Crypto::IMac* Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::GetMac() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator*>::get(),
                                               "GetMac", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IMac*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator::KdfDoublePipelineIterationBytesGenerator() {}
