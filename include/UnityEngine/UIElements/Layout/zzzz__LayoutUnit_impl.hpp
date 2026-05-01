#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutUnit.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutUnit_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::Layout::LayoutUnit::LayoutUnit(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Layout::LayoutUnit::LayoutUnit() {}
constexpr ::UnityEngine::UIElements::Layout::LayoutUnit UnityEngine::UIElements::Layout::LayoutUnit::Undefined{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::Layout::LayoutUnit UnityEngine::UIElements::Layout::LayoutUnit::Point{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::Layout::LayoutUnit UnityEngine::UIElements::Layout::LayoutUnit::Percent{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UIElements::Layout::LayoutUnit UnityEngine::UIElements::Layout::LayoutUnit::Auto{ static_cast<int32_t>(0x3) };
