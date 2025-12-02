#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/OccluderSubviewUpdate.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Vector2Int_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderSubviewUpdate_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::OccluderSubviewUpdate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::OccluderSubviewUpdate::*)(int32_t)>(
    &::UnityEngine::Rendering::OccluderSubviewUpdate::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x65f7924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OccluderSubviewUpdate>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::OccluderSubviewUpdate::_ctor(int32_t subviewIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OccluderSubviewUpdate>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, subviewIndex);
}
// Ctor Parameters [CppParam { name: "subviewIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "depthSliceIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "depthOffset", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: Some("{}") }, CppParam { name: "viewMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "invViewMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "gpuProjMatrix", ty: "::UnityEngine::Matrix4x4", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "viewOffsetWorldSpace", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::OccluderSubviewUpdate::OccluderSubviewUpdate(int32_t subviewIndex, int32_t depthSliceIndex, ::UnityEngine::Vector2Int depthOffset,
                                                                                 ::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 invViewMatrix, ::UnityEngine::Matrix4x4 gpuProjMatrix,
                                                                                 ::UnityEngine::Vector3 viewOffsetWorldSpace) noexcept {
  this->subviewIndex = subviewIndex;
  this->depthSliceIndex = depthSliceIndex;
  this->depthOffset = depthOffset;
  this->viewMatrix = viewMatrix;
  this->invViewMatrix = invViewMatrix;
  this->gpuProjMatrix = gpuProjMatrix;
  this->viewOffsetWorldSpace = viewOffsetWorldSpace;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::OccluderSubviewUpdate::OccluderSubviewUpdate() {}
