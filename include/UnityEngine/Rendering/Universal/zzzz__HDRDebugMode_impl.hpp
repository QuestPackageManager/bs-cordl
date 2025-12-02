#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/HDRDebugMode.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__HDRDebugMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::HDRDebugMode::HDRDebugMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::HDRDebugMode::HDRDebugMode() {}
constexpr ::UnityEngine::Rendering::Universal::HDRDebugMode UnityEngine::Rendering::Universal::HDRDebugMode::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::HDRDebugMode UnityEngine::Rendering::Universal::HDRDebugMode::GamutView{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::HDRDebugMode UnityEngine::Rendering::Universal::HDRDebugMode::GamutClip{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::Universal::HDRDebugMode UnityEngine::Rendering::Universal::HDRDebugMode::ValuesAbovePaperWhite{ static_cast<int32_t>(0x3) };
