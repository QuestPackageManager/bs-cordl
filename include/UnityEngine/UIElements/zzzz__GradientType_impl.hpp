#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/GradientType.hpp"
#include "UnityEngine/UIElements/zzzz__GradientType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::GradientType::GradientType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::GradientType::GradientType()   {
}
constexpr ::UnityEngine::UIElements::GradientType  UnityEngine::UIElements::GradientType::Linear{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UIElements::GradientType  UnityEngine::UIElements::GradientType::Radial{static_cast<int32_t>(0x1)};
