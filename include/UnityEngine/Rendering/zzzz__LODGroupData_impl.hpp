#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LODGroupData.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupData_def.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupData_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::LODGroupData__fadeTransitionWidth_e__FixedBuffer::LODGroupData__fadeTransitionWidth_e__FixedBuffer(float_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::LODGroupData__fadeTransitionWidth_e__FixedBuffer::LODGroupData__fadeTransitionWidth_e__FixedBuffer() {}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::LODGroupData__screenRelativeTransitionHeights_e__FixedBuffer::LODGroupData__screenRelativeTransitionHeights_e__FixedBuffer(float_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::LODGroupData__screenRelativeTransitionHeights_e__FixedBuffer::LODGroupData__screenRelativeTransitionHeights_e__FixedBuffer() {}
// Ctor Parameters [CppParam { name: "valid", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "lodCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "rendererCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "screenRelativeTransitionHeights", ty:
// "::UnityEngine::Rendering::LODGroupData__screenRelativeTransitionHeights_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "fadeTransitionWidth", ty:
// "::UnityEngine::Rendering::LODGroupData__fadeTransitionWidth_e__FixedBuffer", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::LODGroupData::LODGroupData(bool valid, int32_t lodCount, int32_t rendererCount,
                                                               ::UnityEngine::Rendering::LODGroupData__screenRelativeTransitionHeights_e__FixedBuffer screenRelativeTransitionHeights,
                                                               ::UnityEngine::Rendering::LODGroupData__fadeTransitionWidth_e__FixedBuffer fadeTransitionWidth) noexcept {
  this->valid = valid;
  this->lodCount = lodCount;
  this->rendererCount = rendererCount;
  this->screenRelativeTransitionHeights = screenRelativeTransitionHeights;
  this->fadeTransitionWidth = fadeTransitionWidth;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::LODGroupData::LODGroupData() {}
