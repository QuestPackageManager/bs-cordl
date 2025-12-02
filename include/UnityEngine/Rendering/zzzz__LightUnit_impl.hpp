#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LightUnit.hpp"
#include "UnityEngine/Rendering/zzzz__LightUnit_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::LightUnit::LightUnit(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::LightUnit::LightUnit() {}
constexpr ::UnityEngine::Rendering::LightUnit UnityEngine::Rendering::LightUnit::Lumen{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::LightUnit UnityEngine::Rendering::LightUnit::Candela{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::LightUnit UnityEngine::Rendering::LightUnit::Lux{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::LightUnit UnityEngine::Rendering::LightUnit::Nits{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Rendering::LightUnit UnityEngine::Rendering::LightUnit::Ev100{ static_cast<int32_t>(0x4) };
