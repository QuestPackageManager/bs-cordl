#pragma once
#include "UnityEngine/Rendering/zzzz__ShaderHardwareTier_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ShaderHardwareTier::ShaderHardwareTier(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ShaderHardwareTier::ShaderHardwareTier() {}
constexpr ::UnityEngine::Rendering::ShaderHardwareTier UnityEngine::Rendering::ShaderHardwareTier::Tier1{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::ShaderHardwareTier UnityEngine::Rendering::ShaderHardwareTier::Tier2{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::ShaderHardwareTier UnityEngine::Rendering::ShaderHardwareTier::Tier3{ static_cast<int32_t>(0x2) };
