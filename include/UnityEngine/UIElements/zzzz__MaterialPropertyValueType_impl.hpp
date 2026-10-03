#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MaterialPropertyValueType.hpp"
#include "UnityEngine/UIElements/zzzz__MaterialPropertyValueType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::MaterialPropertyValueType::MaterialPropertyValueType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::MaterialPropertyValueType::MaterialPropertyValueType() {}
constexpr ::UnityEngine::UIElements::MaterialPropertyValueType UnityEngine::UIElements::MaterialPropertyValueType::Float{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::MaterialPropertyValueType UnityEngine::UIElements::MaterialPropertyValueType::Vector{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::MaterialPropertyValueType UnityEngine::UIElements::MaterialPropertyValueType::Color{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UIElements::MaterialPropertyValueType UnityEngine::UIElements::MaterialPropertyValueType::Texture{ static_cast<int32_t>(0x3) };
