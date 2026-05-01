#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/OcclusionCullingDebugShaderVariables.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionCullingDebugShaderVariables_def.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionCullingDebugShaderVariables_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::OcclusionCullingDebugShaderVariables___OccluderMipBounds_e__FixedBuffer::OcclusionCullingDebugShaderVariables___OccluderMipBounds_e__FixedBuffer(
    uint32_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::OcclusionCullingDebugShaderVariables___OccluderMipBounds_e__FixedBuffer::OcclusionCullingDebugShaderVariables___OccluderMipBounds_e__FixedBuffer() {}
// Ctor Parameters [CppParam { name: "_DepthSizeInOccluderPixels", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "_OccluderMipBounds", ty:
// "::UnityEngine::Rendering::OcclusionCullingDebugShaderVariables___OccluderMipBounds_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "_OccluderMipLayoutSizeX", ty:
// "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_OccluderMipLayoutSizeY", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_OcclusionCullingDebugPad0", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_OcclusionCullingDebugPad1", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::OcclusionCullingDebugShaderVariables::OcclusionCullingDebugShaderVariables(
    ::UnityEngine::Vector4 _DepthSizeInOccluderPixels, ::UnityEngine::Rendering::OcclusionCullingDebugShaderVariables___OccluderMipBounds_e__FixedBuffer _OccluderMipBounds,
    uint32_t _OccluderMipLayoutSizeX, uint32_t _OccluderMipLayoutSizeY, uint32_t _OcclusionCullingDebugPad0, uint32_t _OcclusionCullingDebugPad1) noexcept {
  this->_DepthSizeInOccluderPixels = _DepthSizeInOccluderPixels;
  this->_OccluderMipBounds = _OccluderMipBounds;
  this->_OccluderMipLayoutSizeX = _OccluderMipLayoutSizeX;
  this->_OccluderMipLayoutSizeY = _OccluderMipLayoutSizeY;
  this->_OcclusionCullingDebugPad0 = _OcclusionCullingDebugPad0;
  this->_OcclusionCullingDebugPad1 = _OcclusionCullingDebugPad1;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::OcclusionCullingDebugShaderVariables::OcclusionCullingDebugShaderVariables() {}
