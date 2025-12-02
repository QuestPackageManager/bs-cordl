#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SRPLensFlareColorType.hpp"
#include "UnityEngine/Rendering/zzzz__SRPLensFlareColorType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::SRPLensFlareColorType::SRPLensFlareColorType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::SRPLensFlareColorType::SRPLensFlareColorType() {}
constexpr ::UnityEngine::Rendering::SRPLensFlareColorType UnityEngine::Rendering::SRPLensFlareColorType::Constant{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::SRPLensFlareColorType UnityEngine::Rendering::SRPLensFlareColorType::RadialGradient{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::SRPLensFlareColorType UnityEngine::Rendering::SRPLensFlareColorType::AngularGradient{ static_cast<int32_t>(0x2) };
