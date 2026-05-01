#pragma once
// IWYU pragma private; include "UnityEngine/PhysicMaterialCombine.hpp"
#include "UnityEngine/zzzz__PhysicMaterialCombine_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::PhysicMaterialCombine::PhysicMaterialCombine(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::PhysicMaterialCombine::PhysicMaterialCombine() {}
constexpr ::UnityEngine::PhysicMaterialCombine UnityEngine::PhysicMaterialCombine::Average{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::PhysicMaterialCombine UnityEngine::PhysicMaterialCombine::Minimum{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::PhysicMaterialCombine UnityEngine::PhysicMaterialCombine::Multiply{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::PhysicMaterialCombine UnityEngine::PhysicMaterialCombine::Maximum{ static_cast<int32_t>(0x3) };
