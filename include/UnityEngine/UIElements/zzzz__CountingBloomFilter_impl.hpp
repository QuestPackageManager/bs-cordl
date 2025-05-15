#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/CountingBloomFilter.hpp"
#include "UnityEngine/UIElements/zzzz__CountingBloomFilter_def.hpp"
#include "UnityEngine/UIElements/zzzz__CountingBloomFilter_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::CountingBloomFilter__m_Counters_e__FixedBuffer::CountingBloomFilter__m_Counters_e__FixedBuffer(uint8_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::CountingBloomFilter__m_Counters_e__FixedBuffer::CountingBloomFilter__m_Counters_e__FixedBuffer() {}
//  Writing Method size for method: ::UnityEngine::UIElements::CountingBloomFilter.AdjustSlot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::CountingBloomFilter::*)(uint32_t, bool)>(
    &::UnityEngine::UIElements::CountingBloomFilter::AdjustSlot)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4a13fd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CountingBloomFilter>::get(), "AdjustSlot", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CountingBloomFilter.Hash1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::UIElements::CountingBloomFilter::*)(uint32_t)>(
    &::UnityEngine::UIElements::CountingBloomFilter::Hash1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a14000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CountingBloomFilter>::get(), "Hash1", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CountingBloomFilter.Hash2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::UIElements::CountingBloomFilter::*)(uint32_t)>(
    &::UnityEngine::UIElements::CountingBloomFilter::Hash2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a14008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CountingBloomFilter>::get(), "Hash2", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CountingBloomFilter.IsSlotEmpty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::CountingBloomFilter::*)(uint32_t)>(
    &::UnityEngine::UIElements::CountingBloomFilter::IsSlotEmpty)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4a14010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CountingBloomFilter>::get(), "IsSlotEmpty",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CountingBloomFilter.InsertHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::CountingBloomFilter::*)(uint32_t)>(
    &::UnityEngine::UIElements::CountingBloomFilter::InsertHash)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x4a14020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CountingBloomFilter>::get(), "InsertHash",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CountingBloomFilter.RemoveHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::CountingBloomFilter::*)(uint32_t)>(
    &::UnityEngine::UIElements::CountingBloomFilter::RemoveHash)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x4a14058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CountingBloomFilter>::get(), "RemoveHash",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CountingBloomFilter.ContainsHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::CountingBloomFilter::*)(uint32_t)>(
    &::UnityEngine::UIElements::CountingBloomFilter::ContainsHash)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4a14088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CountingBloomFilter>::get(), "ContainsHash",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::CountingBloomFilter::AdjustSlot(uint32_t index, bool increment) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CountingBloomFilter>::get(), "AdjustSlot", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, increment);
}
inline uint32_t UnityEngine::UIElements::CountingBloomFilter::Hash1(uint32_t hash) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CountingBloomFilter>::get(), "Hash1", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, hash);
}
inline uint32_t UnityEngine::UIElements::CountingBloomFilter::Hash2(uint32_t hash) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CountingBloomFilter>::get(), "Hash2", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, hash);
}
inline bool UnityEngine::UIElements::CountingBloomFilter::IsSlotEmpty(uint32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CountingBloomFilter>::get(), "IsSlotEmpty",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, index);
}
inline void UnityEngine::UIElements::CountingBloomFilter::InsertHash(uint32_t hash) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CountingBloomFilter>::get(), "InsertHash", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hash);
}
inline void UnityEngine::UIElements::CountingBloomFilter::RemoveHash(uint32_t hash) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CountingBloomFilter>::get(), "RemoveHash", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hash);
}
inline bool UnityEngine::UIElements::CountingBloomFilter::ContainsHash(uint32_t hash) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CountingBloomFilter>::get(), "ContainsHash",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, hash);
}
// Ctor Parameters [CppParam { name: "m_Counters", ty: "::UnityEngine::UIElements::CountingBloomFilter__m_Counters_e__FixedBuffer", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::CountingBloomFilter::CountingBloomFilter(::UnityEngine::UIElements::CountingBloomFilter__m_Counters_e__FixedBuffer m_Counters) noexcept {
  this->m_Counters = m_Counters;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::CountingBloomFilter::CountingBloomFilter() {}
