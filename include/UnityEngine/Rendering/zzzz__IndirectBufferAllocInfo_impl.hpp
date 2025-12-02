#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IndirectBufferAllocInfo.hpp"
#include "UnityEngine/Rendering/zzzz__IndirectBufferAllocInfo_def.hpp"
#include "UnityEngine/Rendering/zzzz__IndirectBufferLimits_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::IndirectBufferAllocInfo.IsEmpty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::IndirectBufferAllocInfo::*)()>(
    &::UnityEngine::Rendering::IndirectBufferAllocInfo::IsEmpty)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x660fcd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IndirectBufferAllocInfo>::get(),
                                                                               "IsEmpty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IndirectBufferAllocInfo.IsWithinLimits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::IndirectBufferAllocInfo::*)(::ByRef<::UnityEngine::Rendering::IndirectBufferLimits>)>(
    &::UnityEngine::Rendering::IndirectBufferAllocInfo::IsWithinLimits)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x660fce4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IndirectBufferAllocInfo>::get(), "IsWithinLimits", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::IndirectBufferLimits>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IndirectBufferAllocInfo.GetExtraDrawInfoSlotIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::IndirectBufferAllocInfo::*)()>(
    &::UnityEngine::Rendering::IndirectBufferAllocInfo::GetExtraDrawInfoSlotIndex)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x660fd18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IndirectBufferAllocInfo>::get(),
                                                                               "GetExtraDrawInfoSlotIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::IndirectBufferAllocInfo::IsEmpty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IndirectBufferAllocInfo>::get(),
                                                                             "IsEmpty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::IndirectBufferAllocInfo::IsWithinLimits(::ByRef<::UnityEngine::Rendering::IndirectBufferLimits> limits) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IndirectBufferAllocInfo>::get(), "IsWithinLimits", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::IndirectBufferLimits>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, limits);
}
inline int32_t UnityEngine::Rendering::IndirectBufferAllocInfo::GetExtraDrawInfoSlotIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IndirectBufferAllocInfo>::get(),
                                                                             "GetExtraDrawInfoSlotIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
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
