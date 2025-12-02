#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VFXCameraXRSettings.hpp"
#include "UnityEngine/VFX/zzzz__VFXCameraXRSettings_def.hpp"
// Ctor Parameters [CppParam { name: "viewTotal", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "viewCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "viewOffset", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::VFX::VFXCameraXRSettings::VFXCameraXRSettings(uint32_t viewTotal, uint32_t viewCount, uint32_t viewOffset) noexcept {
  this->viewTotal = viewTotal;
  this->viewCount = viewCount;
  this->viewOffset = viewOffset;
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::VFXCameraXRSettings::VFXCameraXRSettings() {}
