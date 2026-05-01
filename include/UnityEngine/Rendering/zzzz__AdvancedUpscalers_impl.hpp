#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/AdvancedUpscalers.hpp"
#include "UnityEngine/Rendering/zzzz__AdvancedUpscalers_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::AdvancedUpscalers::AdvancedUpscalers(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::AdvancedUpscalers::AdvancedUpscalers() {}
constexpr ::UnityEngine::Rendering::AdvancedUpscalers UnityEngine::Rendering::AdvancedUpscalers::DLSS{ static_cast<uint8_t>(0x0u) };
constexpr ::UnityEngine::Rendering::AdvancedUpscalers UnityEngine::Rendering::AdvancedUpscalers::FSR2{ static_cast<uint8_t>(0x1u) };
constexpr ::UnityEngine::Rendering::AdvancedUpscalers UnityEngine::Rendering::AdvancedUpscalers::STP{ static_cast<uint8_t>(0x2u) };
