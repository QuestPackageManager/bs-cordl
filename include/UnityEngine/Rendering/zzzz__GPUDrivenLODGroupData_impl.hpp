#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUDrivenLODGroupData.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/zzzz__LODFadeMode_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenLODGroupData_def.hpp"
// Ctor Parameters [CppParam { name: "lodGroupID", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "lodOffset", ty:
// "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "lodCount", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "fadeMode", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::LODFadeMode>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "worldSpaceReferencePoint", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: Some("{}") }, CppParam { name: "worldSpaceSize", ty:
// "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "renderersCount", ty: "::Unity::Collections::NativeArray_1<int16_t>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "lastLODIsBillboard", ty: "::Unity::Collections::NativeArray_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "invalidLODGroupID", ty:
// "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "lodRenderersCount", ty: "::Unity::Collections::NativeArray_1<int16_t>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "lodScreenRelativeTransitionHeight", ty: "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "lodFadeTransitionWidth", ty: "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::GPUDrivenLODGroupData::GPUDrivenLODGroupData(
    ::Unity::Collections::NativeArray_1<int32_t> lodGroupID, ::Unity::Collections::NativeArray_1<int32_t> lodOffset, ::Unity::Collections::NativeArray_1<int32_t> lodCount,
    ::Unity::Collections::NativeArray_1<::UnityEngine::LODFadeMode> fadeMode, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> worldSpaceReferencePoint,
    ::Unity::Collections::NativeArray_1<float_t> worldSpaceSize, ::Unity::Collections::NativeArray_1<int16_t> renderersCount, ::Unity::Collections::NativeArray_1<bool> lastLODIsBillboard,
    ::Unity::Collections::NativeArray_1<int32_t> invalidLODGroupID, ::Unity::Collections::NativeArray_1<int16_t> lodRenderersCount,
    ::Unity::Collections::NativeArray_1<float_t> lodScreenRelativeTransitionHeight, ::Unity::Collections::NativeArray_1<float_t> lodFadeTransitionWidth) noexcept {
  this->lodGroupID = lodGroupID;
  this->lodOffset = lodOffset;
  this->lodCount = lodCount;
  this->fadeMode = fadeMode;
  this->worldSpaceReferencePoint = worldSpaceReferencePoint;
  this->worldSpaceSize = worldSpaceSize;
  this->renderersCount = renderersCount;
  this->lastLODIsBillboard = lastLODIsBillboard;
  this->invalidLODGroupID = invalidLODGroupID;
  this->lodRenderersCount = lodRenderersCount;
  this->lodScreenRelativeTransitionHeight = lodScreenRelativeTransitionHeight;
  this->lodFadeTransitionWidth = lodFadeTransitionWidth;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUDrivenLODGroupData::GPUDrivenLODGroupData() {}
