#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MouseButton.hpp"
#include "UnityEngine/UIElements/zzzz__MouseButton_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::MouseButton::MouseButton(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::MouseButton::MouseButton()   {
}
constexpr ::UnityEngine::UIElements::MouseButton  UnityEngine::UIElements::MouseButton::LeftMouse{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UIElements::MouseButton  UnityEngine::UIElements::MouseButton::RightMouse{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UIElements::MouseButton  UnityEngine::UIElements::MouseButton::MiddleMouse{static_cast<int32_t>(0x2)};
