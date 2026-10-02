#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/CallbackOptions.hpp"
#include "UnityEngine/UIElements/zzzz__CallbackOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::CallbackOptions::CallbackOptions(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::CallbackOptions::CallbackOptions() {}
constexpr ::UnityEngine::UIElements::CallbackOptions UnityEngine::UIElements::CallbackOptions::Default{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::CallbackOptions UnityEngine::UIElements::CallbackOptions::TrickleDown{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::CallbackOptions UnityEngine::UIElements::CallbackOptions::IncludeDisabled{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UIElements::CallbackOptions UnityEngine::UIElements::CallbackOptions::Once{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::UIElements::CallbackOptions UnityEngine::UIElements::CallbackOptions::Removable{ static_cast<int32_t>(0x8) };
