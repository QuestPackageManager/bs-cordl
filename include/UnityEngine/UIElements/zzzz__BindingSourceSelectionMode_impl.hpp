#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BindingSourceSelectionMode.hpp"
#include "UnityEngine/UIElements/zzzz__BindingSourceSelectionMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::BindingSourceSelectionMode::BindingSourceSelectionMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::BindingSourceSelectionMode::BindingSourceSelectionMode() {}
constexpr ::UnityEngine::UIElements::BindingSourceSelectionMode UnityEngine::UIElements::BindingSourceSelectionMode::Manual{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::BindingSourceSelectionMode UnityEngine::UIElements::BindingSourceSelectionMode::AutoAssign{ static_cast<int32_t>(0x1) };
