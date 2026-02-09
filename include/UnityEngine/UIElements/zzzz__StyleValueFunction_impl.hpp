#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleValueFunction.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueFunction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::StyleValueFunction::StyleValueFunction(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleValueFunction::StyleValueFunction()   {
}
constexpr ::UnityEngine::UIElements::StyleValueFunction  UnityEngine::UIElements::StyleValueFunction::Unknown{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UIElements::StyleValueFunction  UnityEngine::UIElements::StyleValueFunction::Var{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UIElements::StyleValueFunction  UnityEngine::UIElements::StyleValueFunction::Env{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::UIElements::StyleValueFunction  UnityEngine::UIElements::StyleValueFunction::LinearGradient{static_cast<int32_t>(0x3)};
