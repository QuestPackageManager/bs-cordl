#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\OccluderSubviewUpdate.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Vector2Int_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderSubviewUpdate_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::OccluderSubviewUpdate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::OccluderSubviewUpdate::*)(int32_t)>(&::UnityEngine::Rendering::OccluderSubviewUpdate::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6816618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::OccluderSubviewUpdate>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::OccluderSubviewUpdate::_ctor(int32_t subviewIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::OccluderSubviewUpdate>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, subviewIndex);
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
