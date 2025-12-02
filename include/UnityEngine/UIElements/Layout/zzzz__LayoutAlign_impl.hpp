#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutAlign.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutAlign_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::Layout::LayoutAlign::LayoutAlign(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Layout::LayoutAlign::LayoutAlign() {}
constexpr ::UnityEngine::UIElements::Layout::LayoutAlign UnityEngine::UIElements::Layout::LayoutAlign::Auto{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::Layout::LayoutAlign UnityEngine::UIElements::Layout::LayoutAlign::FlexStart{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::Layout::LayoutAlign UnityEngine::UIElements::Layout::LayoutAlign::Center{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UIElements::Layout::LayoutAlign UnityEngine::UIElements::Layout::LayoutAlign::FlexEnd{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::UIElements::Layout::LayoutAlign UnityEngine::UIElements::Layout::LayoutAlign::Stretch{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::UIElements::Layout::LayoutAlign UnityEngine::UIElements::Layout::LayoutAlign::Baseline{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::UIElements::Layout::LayoutAlign UnityEngine::UIElements::Layout::LayoutAlign::SpaceBetween{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::UIElements::Layout::LayoutAlign UnityEngine::UIElements::Layout::LayoutAlign::SpaceAround{ static_cast<int32_t>(0x7) };
