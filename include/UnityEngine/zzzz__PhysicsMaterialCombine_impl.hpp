#pragma once
// IWYU pragma private; include "UnityEngine/PhysicsMaterialCombine.hpp"
#include "UnityEngine/zzzz__PhysicsMaterialCombine_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::PhysicsMaterialCombine::PhysicsMaterialCombine(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::PhysicsMaterialCombine::PhysicsMaterialCombine() {}
constexpr ::UnityEngine::PhysicsMaterialCombine UnityEngine::PhysicsMaterialCombine::Average{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::PhysicsMaterialCombine UnityEngine::PhysicsMaterialCombine::Multiply{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::PhysicsMaterialCombine UnityEngine::PhysicsMaterialCombine::Minimum{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::PhysicsMaterialCombine UnityEngine::PhysicsMaterialCombine::Maximum{ static_cast<int32_t>(0x3) };
