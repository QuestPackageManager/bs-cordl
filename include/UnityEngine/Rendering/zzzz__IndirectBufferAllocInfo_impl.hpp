#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\IndirectBufferAllocInfo.hpp"
#include "UnityEngine/Rendering/zzzz__IndirectBufferAllocInfo_def.hpp"
#include "UnityEngine/Rendering/zzzz__IndirectBufferLimits_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::IndirectBufferAllocInfo.IsEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::IndirectBufferAllocInfo::*)()>(&::UnityEngine::Rendering::IndirectBufferAllocInfo::IsEmpty)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x682e9c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferAllocInfo>(), { "IsEmpty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IndirectBufferAllocInfo.IsWithinLimits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::IndirectBufferAllocInfo::*)(::by_ref<::UnityEngine::Rendering::IndirectBufferLimits>)>(
    &::UnityEngine::Rendering::IndirectBufferAllocInfo::IsWithinLimits)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x682e9d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferAllocInfo>(),
                                                                                           { "IsWithinLimits", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::IndirectBufferLimits>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IndirectBufferAllocInfo.GetExtraDrawInfoSlotIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::IndirectBufferAllocInfo::*)()>(
    &::UnityEngine::Rendering::IndirectBufferAllocInfo::GetExtraDrawInfoSlotIndex)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x682ea0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferAllocInfo>(), { "GetExtraDrawInfoSlotIndex", {}, {} })));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::IndirectBufferAllocInfo::IsEmpty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferAllocInfo>(), { "IsEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::IndirectBufferAllocInfo::IsWithinLimits(::by_ref<::UnityEngine::Rendering::IndirectBufferLimits> limits) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferAllocInfo>(),
                                                                                         { "IsWithinLimits", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::IndirectBufferLimits>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, limits);
}
inline int32_t UnityEngine::Rendering::IndirectBufferAllocInfo::GetExtraDrawInfoSlotIndex() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IndirectBufferAllocInfo>(), { "GetExtraDrawInfoSlotIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "drawAllocIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "drawCount", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "instanceAllocIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "instanceCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::IndirectBufferAllocInfo::IndirectBufferAllocInfo(int32_t drawAllocIndex, int32_t drawCount, int32_t instanceAllocIndex, int32_t instanceCount) noexcept {
  this->drawAllocIndex = drawAllocIndex;
  this->drawCount = drawCount;
  this->instanceAllocIndex = instanceAllocIndex;
  this->instanceCount = instanceCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::IndirectBufferAllocInfo::IndirectBufferAllocInfo() {}
