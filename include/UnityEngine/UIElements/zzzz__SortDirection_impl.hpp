#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/SortDirection.hpp"
#include "UnityEngine/UIElements/zzzz__SortDirection_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::SortDirection::SortDirection(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::SortDirection::SortDirection()   {
}
constexpr ::UnityEngine::UIElements::SortDirection  UnityEngine::UIElements::SortDirection::Ascending{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UIElements::SortDirection  UnityEngine::UIElements::SortDirection::Descending{static_cast<int32_t>(0x1)};
