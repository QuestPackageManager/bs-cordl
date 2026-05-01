#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutWrap.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutWrap_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::Layout::LayoutWrap::LayoutWrap(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Layout::LayoutWrap::LayoutWrap() {}
constexpr ::UnityEngine::UIElements::Layout::LayoutWrap UnityEngine::UIElements::Layout::LayoutWrap::NoWrap{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::Layout::LayoutWrap UnityEngine::UIElements::Layout::LayoutWrap::Wrap{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::Layout::LayoutWrap UnityEngine::UIElements::Layout::LayoutWrap::WrapReverse{ static_cast<int32_t>(0x2) };
