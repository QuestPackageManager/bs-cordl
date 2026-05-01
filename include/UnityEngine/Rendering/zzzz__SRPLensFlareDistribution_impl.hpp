#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SRPLensFlareDistribution.hpp"
#include "UnityEngine/Rendering/zzzz__SRPLensFlareDistribution_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::SRPLensFlareDistribution::SRPLensFlareDistribution(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::SRPLensFlareDistribution::SRPLensFlareDistribution() {}
constexpr ::UnityEngine::Rendering::SRPLensFlareDistribution UnityEngine::Rendering::SRPLensFlareDistribution::Uniform{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::SRPLensFlareDistribution UnityEngine::Rendering::SRPLensFlareDistribution::Curve{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::SRPLensFlareDistribution UnityEngine::Rendering::SRPLensFlareDistribution::Random{ static_cast<int32_t>(0x2) };
