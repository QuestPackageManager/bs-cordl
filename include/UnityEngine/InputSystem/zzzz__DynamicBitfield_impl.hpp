#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/DynamicBitfield.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__DynamicBitfield_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::DynamicBitfield.SetLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::DynamicBitfield::*)(int32_t)>(&::UnityEngine::InputSystem::DynamicBitfield::SetLength)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6570b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DynamicBitfield>(), { "SetLength", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DynamicBitfield.SetBit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::DynamicBitfield::*)(int32_t)>(&::UnityEngine::InputSystem::DynamicBitfield::SetBit)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6581244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DynamicBitfield>(), { "SetBit", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DynamicBitfield.TestBit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::DynamicBitfield::*)(int32_t)>(&::UnityEngine::InputSystem::DynamicBitfield::TestBit)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x65812e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DynamicBitfield>(), { "TestBit", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DynamicBitfield.ClearBit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::DynamicBitfield::*)(int32_t)>(&::UnityEngine::InputSystem::DynamicBitfield::ClearBit)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6570cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DynamicBitfield>(), { "ClearBit", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DynamicBitfield.AnyBitIsSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::DynamicBitfield::*)()>(&::UnityEngine::InputSystem::DynamicBitfield::AnyBitIsSet)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6581358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DynamicBitfield>(), { "AnyBitIsSet", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DynamicBitfield.BitCountToULongCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::InputSystem::DynamicBitfield::BitCountToULongCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x658122c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DynamicBitfield>(), { "BitCountToULongCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::DynamicBitfield::SetLength(int32_t newLength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DynamicBitfield>(), { "SetLength", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, newLength);
}
inline void UnityEngine::InputSystem::DynamicBitfield::SetBit(int32_t bitIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DynamicBitfield>(), { "SetBit", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bitIndex);
}
inline bool UnityEngine::InputSystem::DynamicBitfield::TestBit(int32_t bitIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DynamicBitfield>(), { "TestBit", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, bitIndex);
}
inline void UnityEngine::InputSystem::DynamicBitfield::ClearBit(int32_t bitIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DynamicBitfield>(), { "ClearBit", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bitIndex);
}
inline bool UnityEngine::InputSystem::DynamicBitfield::AnyBitIsSet() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DynamicBitfield>(), { "AnyBitIsSet", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::DynamicBitfield::BitCountToULongCount(int32_t bitCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DynamicBitfield>(), { "BitCountToULongCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, bitCount);
}
// Ctor Parameters [CppParam { name: "array", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<uint64_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "length", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::DynamicBitfield::DynamicBitfield(::UnityEngine::InputSystem::Utilities::InlinedArray_1<uint64_t> array, int32_t length) noexcept {
  this->array = array;
  this->length = length;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::DynamicBitfield::DynamicBitfield() {}
