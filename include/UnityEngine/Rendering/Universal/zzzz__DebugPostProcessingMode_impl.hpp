#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DebugPostProcessingMode.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugPostProcessingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::DebugPostProcessingMode::DebugPostProcessingMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DebugPostProcessingMode::DebugPostProcessingMode() {}
constexpr ::UnityEngine::Rendering::Universal::DebugPostProcessingMode UnityEngine::Rendering::Universal::DebugPostProcessingMode::Disabled{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::DebugPostProcessingMode UnityEngine::Rendering::Universal::DebugPostProcessingMode::Auto{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::DebugPostProcessingMode UnityEngine::Rendering::Universal::DebugPostProcessingMode::Enabled{ static_cast<int32_t>(0x2) };
