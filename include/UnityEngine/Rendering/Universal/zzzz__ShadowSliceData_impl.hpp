#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ShadowSliceData.hpp"
#include "UnityEngine/Rendering/zzzz__ShadowSplitData_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShadowSliceData_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowSliceData.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ShadowSliceData::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowSliceData::Clear)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x669bfb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowSliceData>::get(),
                                                                               "Clear", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::ShadowSliceData::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowSliceData>::get(),
                                                                             "Clear", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "viewMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "projectionMatrix", ty: "::UnityEngine::Matrix4x4",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "shadowTransform", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "offsetX", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "offsetY", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "resolution", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "splitData", ty: "::UnityEngine::Rendering::ShadowSplitData", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::ShadowSliceData::ShadowSliceData(::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projectionMatrix,
                                                                                ::UnityEngine::Matrix4x4 shadowTransform, int32_t offsetX, int32_t offsetY, int32_t resolution,
                                                                                ::UnityEngine::Rendering::ShadowSplitData splitData) noexcept {
  this->viewMatrix = viewMatrix;
  this->projectionMatrix = projectionMatrix;
  this->shadowTransform = shadowTransform;
  this->offsetX = offsetX;
  this->offsetY = offsetY;
  this->resolution = resolution;
  this->splitData = splitData;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ShadowSliceData::ShadowSliceData() {}
