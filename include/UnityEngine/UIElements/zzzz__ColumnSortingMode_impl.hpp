#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ColumnSortingMode.hpp"
#include "UnityEngine/UIElements/zzzz__ColumnSortingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::ColumnSortingMode::ColumnSortingMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ColumnSortingMode::ColumnSortingMode() {}
constexpr ::UnityEngine::UIElements::ColumnSortingMode UnityEngine::UIElements::ColumnSortingMode::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::ColumnSortingMode UnityEngine::UIElements::ColumnSortingMode::Default{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::ColumnSortingMode UnityEngine::UIElements::ColumnSortingMode::Custom{ static_cast<int32_t>(0x2) };
