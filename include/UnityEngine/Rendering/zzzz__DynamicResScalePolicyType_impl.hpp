#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DynamicResScalePolicyType.hpp"
#include "UnityEngine/Rendering/zzzz__DynamicResScalePolicyType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::DynamicResScalePolicyType::DynamicResScalePolicyType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DynamicResScalePolicyType::DynamicResScalePolicyType() {}
constexpr ::UnityEngine::Rendering::DynamicResScalePolicyType UnityEngine::Rendering::DynamicResScalePolicyType::ReturnsPercentage{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::DynamicResScalePolicyType UnityEngine::Rendering::DynamicResScalePolicyType::ReturnsMinMaxLerpFactor{ static_cast<int32_t>(0x1) };
