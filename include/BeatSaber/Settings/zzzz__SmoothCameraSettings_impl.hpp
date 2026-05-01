#pragma once
// IWYU pragma private; include "BeatSaber/Settings/SmoothCameraSettings.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "BeatSaber/Settings/zzzz__SmoothCameraSettings_def.hpp"
// Ctor Parameters [CppParam { name: "enabled", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "fov", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "smoothPosition", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "smoothRotation", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "thirdPersonEnabled", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "thirdPersonPosition", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") },
// CppParam { name: "thirdPersonRotation", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Settings::SmoothCameraSettings::SmoothCameraSettings(bool enabled, float_t fov, float_t smoothPosition, float_t smoothRotation, bool thirdPersonEnabled,
                                                                            ::Unity::Mathematics::float3 thirdPersonPosition, ::Unity::Mathematics::float3 thirdPersonRotation) noexcept {
  this->enabled = enabled;
  this->fov = fov;
  this->smoothPosition = smoothPosition;
  this->smoothRotation = smoothRotation;
  this->thirdPersonEnabled = thirdPersonEnabled;
  this->thirdPersonPosition = thirdPersonPosition;
  this->thirdPersonRotation = thirdPersonRotation;
}
// Ctor Parameters []
constexpr ::BeatSaber::Settings::SmoothCameraSettings::SmoothCameraSettings() {}
