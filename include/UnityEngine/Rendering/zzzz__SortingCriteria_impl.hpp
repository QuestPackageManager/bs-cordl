#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SortingCriteria.hpp"
#include "UnityEngine/Rendering/zzzz__SortingCriteria_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::SortingCriteria::SortingCriteria(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::SortingCriteria::SortingCriteria() {}
constexpr ::UnityEngine::Rendering::SortingCriteria UnityEngine::Rendering::SortingCriteria::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::SortingCriteria UnityEngine::Rendering::SortingCriteria::SortingLayer{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::SortingCriteria UnityEngine::Rendering::SortingCriteria::RenderQueue{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::SortingCriteria UnityEngine::Rendering::SortingCriteria::BackToFront{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Rendering::SortingCriteria UnityEngine::Rendering::SortingCriteria::QuantizedFrontToBack{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::Rendering::SortingCriteria UnityEngine::Rendering::SortingCriteria::OptimizeStateChanges{ static_cast<int32_t>(0x10) };
constexpr ::UnityEngine::Rendering::SortingCriteria UnityEngine::Rendering::SortingCriteria::CanvasOrder{ static_cast<int32_t>(0x20) };
constexpr ::UnityEngine::Rendering::SortingCriteria UnityEngine::Rendering::SortingCriteria::RendererPriority{ static_cast<int32_t>(0x40) };
constexpr ::UnityEngine::Rendering::SortingCriteria UnityEngine::Rendering::SortingCriteria::CommonOpaque{ static_cast<int32_t>(0x3b) };
constexpr ::UnityEngine::Rendering::SortingCriteria UnityEngine::Rendering::SortingCriteria::CommonTransparent{ static_cast<int32_t>(0x17) };
