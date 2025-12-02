#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GizmoSubset.hpp"
#include "UnityEngine/Rendering/zzzz__GizmoSubset_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::GizmoSubset::GizmoSubset(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GizmoSubset::GizmoSubset() {}
constexpr ::UnityEngine::Rendering::GizmoSubset UnityEngine::Rendering::GizmoSubset::PreImageEffects{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::GizmoSubset UnityEngine::Rendering::GizmoSubset::PostImageEffects{ static_cast<int32_t>(0x1) };
