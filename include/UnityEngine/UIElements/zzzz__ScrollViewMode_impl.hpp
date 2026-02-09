#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ScrollViewMode.hpp"
#include "UnityEngine/UIElements/zzzz__ScrollViewMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::ScrollViewMode::ScrollViewMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ScrollViewMode::ScrollViewMode()   {
}
constexpr ::UnityEngine::UIElements::ScrollViewMode  UnityEngine::UIElements::ScrollViewMode::Vertical{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UIElements::ScrollViewMode  UnityEngine::UIElements::ScrollViewMode::Horizontal{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UIElements::ScrollViewMode  UnityEngine::UIElements::ScrollViewMode::VerticalAndHorizontal{static_cast<int32_t>(0x2)};
