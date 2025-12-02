#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/StoreActionsOptimization.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__StoreActionsOptimization_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::StoreActionsOptimization::StoreActionsOptimization(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::StoreActionsOptimization::StoreActionsOptimization() {}
constexpr ::UnityEngine::Rendering::Universal::StoreActionsOptimization UnityEngine::Rendering::Universal::StoreActionsOptimization::Auto{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::StoreActionsOptimization UnityEngine::Rendering::Universal::StoreActionsOptimization::Discard{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::StoreActionsOptimization UnityEngine::Rendering::Universal::StoreActionsOptimization::Store{ static_cast<int32_t>(0x2) };
