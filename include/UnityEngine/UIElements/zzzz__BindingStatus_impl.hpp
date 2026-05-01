#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BindingStatus.hpp"
#include "UnityEngine/UIElements/zzzz__BindingStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::BindingStatus::BindingStatus(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::BindingStatus::BindingStatus() {}
constexpr ::UnityEngine::UIElements::BindingStatus UnityEngine::UIElements::BindingStatus::Success{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::BindingStatus UnityEngine::UIElements::BindingStatus::Failure{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::BindingStatus UnityEngine::UIElements::BindingStatus::Pending{ static_cast<int32_t>(0x2) };
