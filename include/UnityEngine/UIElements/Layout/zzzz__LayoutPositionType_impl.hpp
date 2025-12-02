#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutPositionType.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutPositionType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::Layout::LayoutPositionType::LayoutPositionType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Layout::LayoutPositionType::LayoutPositionType() {}
constexpr ::UnityEngine::UIElements::Layout::LayoutPositionType UnityEngine::UIElements::Layout::LayoutPositionType::Relative{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::Layout::LayoutPositionType UnityEngine::UIElements::Layout::LayoutPositionType::Absolute{ static_cast<int32_t>(0x1) };
