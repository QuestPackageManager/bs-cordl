#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BindingLogLevel.hpp"
#include "UnityEngine/UIElements/zzzz__BindingLogLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::BindingLogLevel::BindingLogLevel(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::BindingLogLevel::BindingLogLevel() {}
constexpr ::UnityEngine::UIElements::BindingLogLevel UnityEngine::UIElements::BindingLogLevel::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::BindingLogLevel UnityEngine::UIElements::BindingLogLevel::Once{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::BindingLogLevel UnityEngine::UIElements::BindingLogLevel::All{ static_cast<int32_t>(0x2) };
