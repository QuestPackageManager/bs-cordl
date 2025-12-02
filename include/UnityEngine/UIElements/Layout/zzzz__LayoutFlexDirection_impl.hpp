#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutFlexDirection.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutFlexDirection_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::Layout::LayoutFlexDirection::LayoutFlexDirection(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Layout::LayoutFlexDirection::LayoutFlexDirection() {}
constexpr ::UnityEngine::UIElements::Layout::LayoutFlexDirection UnityEngine::UIElements::Layout::LayoutFlexDirection::Column{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::Layout::LayoutFlexDirection UnityEngine::UIElements::Layout::LayoutFlexDirection::ColumnReverse{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::Layout::LayoutFlexDirection UnityEngine::UIElements::Layout::LayoutFlexDirection::Row{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UIElements::Layout::LayoutFlexDirection UnityEngine::UIElements::Layout::LayoutFlexDirection::RowReverse{ static_cast<int32_t>(0x3) };
