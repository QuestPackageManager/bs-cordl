#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/MaterialQuality.hpp"
#include "UnityEngine/Rendering/zzzz__MaterialQuality_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::MaterialQuality::MaterialQuality(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::MaterialQuality::MaterialQuality() {}
constexpr ::UnityEngine::Rendering::MaterialQuality UnityEngine::Rendering::MaterialQuality::Low{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::MaterialQuality UnityEngine::Rendering::MaterialQuality::Medium{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::MaterialQuality UnityEngine::Rendering::MaterialQuality::High{ static_cast<int32_t>(0x4) };
