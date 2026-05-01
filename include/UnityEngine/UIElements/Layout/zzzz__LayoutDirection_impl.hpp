#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutDirection.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutDirection_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::Layout::LayoutDirection::LayoutDirection(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Layout::LayoutDirection::LayoutDirection() {}
constexpr ::UnityEngine::UIElements::Layout::LayoutDirection UnityEngine::UIElements::Layout::LayoutDirection::Inherit{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::Layout::LayoutDirection UnityEngine::UIElements::Layout::LayoutDirection::LTR{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::Layout::LayoutDirection UnityEngine::UIElements::Layout::LayoutDirection::RTL{ static_cast<int32_t>(0x2) };
