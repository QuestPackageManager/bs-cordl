#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUDrivenLODGroupDataNative.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenLODGroupDataNative_def.hpp"
#include "UnityEngine/zzzz__LODFadeMode_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "lodGroupID", ty: "int32_t*", modifiers: "", def_value: Some("{}") }, CppParam { name: "lodOffset", ty: "int32_t*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "lodCount", ty: "int32_t*", modifiers: "", def_value: Some("{}") }, CppParam { name: "fadeMode", ty: "::UnityEngine::LODFadeMode*", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "worldSpaceReferencePoint", ty: "::UnityEngine::Vector3*", modifiers: "", def_value: Some("{}") }, CppParam { name: "worldSpaceSize", ty: "float_t*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "renderersCount", ty: "int16_t*", modifiers: "", def_value: Some("{}") }, CppParam { name: "lastLODIsBillboard", ty: "bool*", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "lodGroupCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "invalidLODGroupID", ty: "int32_t*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "invalidLODGroupCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lodRenderersCount", ty: "int16_t*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "lodScreenRelativeTransitionHeight", ty: "float_t*", modifiers: "", def_value: Some("{}") }, CppParam { name: "lodFadeTransitionWidth", ty: "float_t*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "lodDataCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::GPUDrivenLODGroupDataNative::GPUDrivenLODGroupDataNative(int32_t* lodGroupID, int32_t* lodOffset, int32_t* lodCount, ::UnityEngine::LODFadeMode* fadeMode,
                                                                                             ::UnityEngine::Vector3* worldSpaceReferencePoint, float_t* worldSpaceSize, int16_t* renderersCount,
                                                                                             bool* lastLODIsBillboard, int32_t lodGroupCount, int32_t* invalidLODGroupID, int32_t invalidLODGroupCount,
                                                                                             int16_t* lodRenderersCount, float_t* lodScreenRelativeTransitionHeight, float_t* lodFadeTransitionWidth,
                                                                                             int32_t lodDataCount) noexcept {
  this->lodGroupID = lodGroupID;
  this->lodOffset = lodOffset;
  this->lodCount = lodCount;
  this->fadeMode = fadeMode;
  this->worldSpaceReferencePoint = worldSpaceReferencePoint;
  this->worldSpaceSize = worldSpaceSize;
  this->renderersCount = renderersCount;
  this->lastLODIsBillboard = lastLODIsBillboard;
  this->lodGroupCount = lodGroupCount;
  this->invalidLODGroupID = invalidLODGroupID;
  this->invalidLODGroupCount = invalidLODGroupCount;
  this->lodRenderersCount = lodRenderersCount;
  this->lodScreenRelativeTransitionHeight = lodScreenRelativeTransitionHeight;
  this->lodFadeTransitionWidth = lodFadeTransitionWidth;
  this->lodDataCount = lodDataCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUDrivenLODGroupDataNative::GPUDrivenLODGroupDataNative() {}
