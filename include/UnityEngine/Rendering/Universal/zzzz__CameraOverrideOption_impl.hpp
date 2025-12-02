#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/CameraOverrideOption.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CameraOverrideOption_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::CameraOverrideOption::CameraOverrideOption(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::CameraOverrideOption::CameraOverrideOption() {}
constexpr ::UnityEngine::Rendering::Universal::CameraOverrideOption UnityEngine::Rendering::Universal::CameraOverrideOption::Off{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::CameraOverrideOption UnityEngine::Rendering::Universal::CameraOverrideOption::On{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::CameraOverrideOption UnityEngine::Rendering::Universal::CameraOverrideOption::UsePipelineSettings{ static_cast<int32_t>(0x2) };
