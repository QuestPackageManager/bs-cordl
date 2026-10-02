#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/FilterParameterType.hpp"
#include "UnityEngine/UIElements/zzzz__FilterParameterType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::FilterParameterType::FilterParameterType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::FilterParameterType::FilterParameterType() {}
constexpr ::UnityEngine::UIElements::FilterParameterType UnityEngine::UIElements::FilterParameterType::Float{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::FilterParameterType UnityEngine::UIElements::FilterParameterType::Color{ static_cast<int32_t>(0x1) };
