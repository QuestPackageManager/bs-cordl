#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/FlexDirection.hpp"
#include "UnityEngine/UIElements/zzzz__FlexDirection_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::FlexDirection::FlexDirection(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::FlexDirection::FlexDirection()   {
}
constexpr ::UnityEngine::UIElements::FlexDirection  UnityEngine::UIElements::FlexDirection::Column{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UIElements::FlexDirection  UnityEngine::UIElements::FlexDirection::ColumnReverse{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UIElements::FlexDirection  UnityEngine::UIElements::FlexDirection::Row{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::UIElements::FlexDirection  UnityEngine::UIElements::FlexDirection::RowReverse{static_cast<int32_t>(0x3)};
