#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\CountingBloomFilter.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CountingBloomFilter::*)(uint32_t, bool)>(&::UnityEngine::UIElements::CountingBloomFilter::AdjustSlot)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6d826b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CountingBloomFilter>(), { "AdjustSlot", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CountingBloomFilter.Hash1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::UIElements::CountingBloomFilter::*)(uint32_t)>(&::UnityEngine::UIElements::CountingBloomFilter::Hash1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d826dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CountingBloomFilter>(), { "Hash1", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CountingBloomFilter.Hash2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::UIElements::CountingBloomFilter::*)(uint32_t)>(&::UnityEngine::UIElements::CountingBloomFilter::Hash2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d826e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CountingBloomFilter>(), { "Hash2", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CountingBloomFilter.IsSlotEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::CountingBloomFilter::*)(uint32_t)>(&::UnityEngine::UIElements::CountingBloomFilter::IsSlotEmpty)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6d826ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CountingBloomFilter>(), { "IsSlotEmpty", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CountingBloomFilter.InsertHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CountingBloomFilter::*)(uint32_t)>(&::UnityEngine::UIElements::CountingBloomFilter::InsertHash)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6d826fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CountingBloomFilter>(), { "InsertHash", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CountingBloomFilter.RemoveHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CountingBloomFilter::*)(uint32_t)>(&::UnityEngine::UIElements::CountingBloomFilter::RemoveHash)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6d82734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CountingBloomFilter>(), { "RemoveHash", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CountingBloomFilter.ContainsHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::CountingBloomFilter::*)(uint32_t)>(&::UnityEngine::UIElements::CountingBloomFilter::ContainsHash)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6d82764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CountingBloomFilter>(), { "ContainsHash", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::CountingBloomFilter::AdjustSlot(uint32_t index, bool increment) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CountingBloomFilter>(), { "AdjustSlot", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, increment);
}
inline uint32_t UnityEngine::UIElements::CountingBloomFilter::Hash1(uint32_t hash) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CountingBloomFilter>(), { "Hash1", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method, hash);
}
inline uint32_t UnityEngine::UIElements::CountingBloomFilter::Hash2(uint32_t hash) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CountingBloomFilter>(), { "Hash2", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method, hash);
}
inline bool UnityEngine::UIElements::CountingBloomFilter::IsSlotEmpty(uint32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CountingBloomFilter>(), { "IsSlotEmpty", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, index);
}
inline void UnityEngine::UIElements::CountingBloomFilter::InsertHash(uint32_t hash) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CountingBloomFilter>(), { "InsertHash", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, hash);
}
inline void UnityEngine::UIElements::CountingBloomFilter::RemoveHash(uint32_t hash) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CountingBloomFilter>(), { "RemoveHash", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, hash);
}
inline bool UnityEngine::UIElements::CountingBloomFilter::ContainsHash(uint32_t hash) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CountingBloomFilter>(), { "ContainsHash", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, hash);
}
// Ctor Parameters [CppParam { name: "m_Counters", ty: "::UnityEngine::UIElements::CountingBloomFilter__m_Counters_e__FixedBuffer", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::CountingBloomFilter::CountingBloomFilter(::UnityEngine::UIElements::CountingBloomFilter__m_Counters_e__FixedBuffer m_Counters) noexcept {
  this->m_Counters = m_Counters;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::CountingBloomFilter::CountingBloomFilter() {}
