#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SRPLensFlareType.hpp"
#include "UnityEngine/Rendering/zzzz__SRPLensFlareType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::SRPLensFlareType::SRPLensFlareType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::SRPLensFlareType::SRPLensFlareType() {}
constexpr ::UnityEngine::Rendering::SRPLensFlareType UnityEngine::Rendering::SRPLensFlareType::Image{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::SRPLensFlareType UnityEngine::Rendering::SRPLensFlareType::Circle{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::SRPLensFlareType UnityEngine::Rendering::SRPLensFlareType::Polygon{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::SRPLensFlareType UnityEngine::Rendering::SRPLensFlareType::Ring{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Rendering::SRPLensFlareType UnityEngine::Rendering::SRPLensFlareType::LensFlareDataSRP{ static_cast<int32_t>(0x4) };
