#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualTreeUpdatePhase.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeUpdatePhase_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::VisualTreeUpdatePhase::VisualTreeUpdatePhase(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VisualTreeUpdatePhase::VisualTreeUpdatePhase() {}
constexpr ::UnityEngine::UIElements::VisualTreeUpdatePhase UnityEngine::UIElements::VisualTreeUpdatePhase::Bindings{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::VisualTreeUpdatePhase UnityEngine::UIElements::VisualTreeUpdatePhase::DataBinding{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::VisualTreeUpdatePhase UnityEngine::UIElements::VisualTreeUpdatePhase::Animation{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UIElements::VisualTreeUpdatePhase UnityEngine::UIElements::VisualTreeUpdatePhase::Styles{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::UIElements::VisualTreeUpdatePhase UnityEngine::UIElements::VisualTreeUpdatePhase::Layout{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::UIElements::VisualTreeUpdatePhase UnityEngine::UIElements::VisualTreeUpdatePhase::TransformClip{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::UIElements::VisualTreeUpdatePhase UnityEngine::UIElements::VisualTreeUpdatePhase::Repaint{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::UIElements::VisualTreeUpdatePhase UnityEngine::UIElements::VisualTreeUpdatePhase::Count{ static_cast<int32_t>(0x7) };
