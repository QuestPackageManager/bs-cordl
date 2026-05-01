#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutOverflow.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutOverflow_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::Layout::LayoutOverflow::LayoutOverflow(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Layout::LayoutOverflow::LayoutOverflow() {}
constexpr ::UnityEngine::UIElements::Layout::LayoutOverflow UnityEngine::UIElements::Layout::LayoutOverflow::Visible{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::Layout::LayoutOverflow UnityEngine::UIElements::Layout::LayoutOverflow::Hidden{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::Layout::LayoutOverflow UnityEngine::UIElements::Layout::LayoutOverflow::Scroll{ static_cast<int32_t>(0x2) };
