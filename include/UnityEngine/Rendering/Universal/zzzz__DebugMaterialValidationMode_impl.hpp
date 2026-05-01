#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DebugMaterialValidationMode.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugMaterialValidationMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::DebugMaterialValidationMode::DebugMaterialValidationMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DebugMaterialValidationMode::DebugMaterialValidationMode() {}
constexpr ::UnityEngine::Rendering::Universal::DebugMaterialValidationMode UnityEngine::Rendering::Universal::DebugMaterialValidationMode::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::DebugMaterialValidationMode UnityEngine::Rendering::Universal::DebugMaterialValidationMode::Albedo{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::DebugMaterialValidationMode UnityEngine::Rendering::Universal::DebugMaterialValidationMode::Metallic{ static_cast<int32_t>(0x2) };
