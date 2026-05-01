#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DebugValidationMode.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugValidationMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::DebugValidationMode::DebugValidationMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DebugValidationMode::DebugValidationMode() {}
constexpr ::UnityEngine::Rendering::Universal::DebugValidationMode UnityEngine::Rendering::Universal::DebugValidationMode::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::DebugValidationMode UnityEngine::Rendering::Universal::DebugValidationMode::HighlightNanInfNegative{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::DebugValidationMode UnityEngine::Rendering::Universal::DebugValidationMode::HighlightOutsideOfRange{ static_cast<int32_t>(0x2) };
