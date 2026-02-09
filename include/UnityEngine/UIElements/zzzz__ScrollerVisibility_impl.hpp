#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ScrollerVisibility.hpp"
#include "UnityEngine/UIElements/zzzz__ScrollerVisibility_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::ScrollerVisibility::ScrollerVisibility(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ScrollerVisibility::ScrollerVisibility()   {
}
constexpr ::UnityEngine::UIElements::ScrollerVisibility  UnityEngine::UIElements::ScrollerVisibility::Auto{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UIElements::ScrollerVisibility  UnityEngine::UIElements::ScrollerVisibility::AlwaysVisible{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UIElements::ScrollerVisibility  UnityEngine::UIElements::ScrollerVisibility::Hidden{static_cast<int32_t>(0x2)};
