#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/SliderDirection.hpp"
#include "UnityEngine/UIElements/zzzz__SliderDirection_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::SliderDirection::SliderDirection(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::SliderDirection::SliderDirection()   {
}
constexpr ::UnityEngine::UIElements::SliderDirection  UnityEngine::UIElements::SliderDirection::Horizontal{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UIElements::SliderDirection  UnityEngine::UIElements::SliderDirection::Vertical{static_cast<int32_t>(0x1)};
