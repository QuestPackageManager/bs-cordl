#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Visibility.hpp"
#include "UnityEngine/UIElements/zzzz__Visibility_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::Visibility::Visibility(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Visibility::Visibility()   {
}
constexpr ::UnityEngine::UIElements::Visibility  UnityEngine::UIElements::Visibility::Visible{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UIElements::Visibility  UnityEngine::UIElements::Visibility::Hidden{static_cast<int32_t>(0x1)};
