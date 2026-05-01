#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DynamicResolutionType.hpp"
#include "UnityEngine/Rendering/zzzz__DynamicResolutionType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::DynamicResolutionType::DynamicResolutionType(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DynamicResolutionType::DynamicResolutionType() {}
constexpr ::UnityEngine::Rendering::DynamicResolutionType UnityEngine::Rendering::DynamicResolutionType::Software{ static_cast<uint8_t>(0x0u) };
constexpr ::UnityEngine::Rendering::DynamicResolutionType UnityEngine::Rendering::DynamicResolutionType::Hardware{ static_cast<uint8_t>(0x1u) };
