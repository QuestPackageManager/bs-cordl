#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BindingMode.hpp"
#include "UnityEngine/UIElements/zzzz__BindingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::BindingMode::BindingMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::BindingMode::BindingMode() {}
constexpr ::UnityEngine::UIElements::BindingMode UnityEngine::UIElements::BindingMode::TwoWay{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::BindingMode UnityEngine::UIElements::BindingMode::ToSource{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::BindingMode UnityEngine::UIElements::BindingMode::ToTarget{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UIElements::BindingMode UnityEngine::UIElements::BindingMode::ToTargetOnce{ static_cast<int32_t>(0x3) };
