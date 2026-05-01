#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SRPLensFlareBlendMode.hpp"
#include "UnityEngine/Rendering/zzzz__SRPLensFlareBlendMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::SRPLensFlareBlendMode::SRPLensFlareBlendMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::SRPLensFlareBlendMode::SRPLensFlareBlendMode() {}
constexpr ::UnityEngine::Rendering::SRPLensFlareBlendMode UnityEngine::Rendering::SRPLensFlareBlendMode::Additive{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::SRPLensFlareBlendMode UnityEngine::Rendering::SRPLensFlareBlendMode::Screen{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::SRPLensFlareBlendMode UnityEngine::Rendering::SRPLensFlareBlendMode::Premultiply{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::SRPLensFlareBlendMode UnityEngine::Rendering::SRPLensFlareBlendMode::Lerp{ static_cast<int32_t>(0x3) };
