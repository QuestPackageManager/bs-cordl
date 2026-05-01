#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutMeasureMode.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutMeasureMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::Layout::LayoutMeasureMode::LayoutMeasureMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Layout::LayoutMeasureMode::LayoutMeasureMode() {}
constexpr ::UnityEngine::UIElements::Layout::LayoutMeasureMode UnityEngine::UIElements::Layout::LayoutMeasureMode::Undefined{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::Layout::LayoutMeasureMode UnityEngine::UIElements::Layout::LayoutMeasureMode::Exactly{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::Layout::LayoutMeasureMode UnityEngine::UIElements::Layout::LayoutMeasureMode::AtMost{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UIElements::Layout::LayoutMeasureMode UnityEngine::UIElements::Layout::LayoutMeasureMode::Invalid{ static_cast<int32_t>(0xffffffff) };
