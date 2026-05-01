#pragma once
// IWYU pragma private; include "UnityEngine/FindObjectsInactive.hpp"
#include "UnityEngine/zzzz__FindObjectsInactive_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::FindObjectsInactive::FindObjectsInactive(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::FindObjectsInactive::FindObjectsInactive() {}
constexpr ::UnityEngine::FindObjectsInactive UnityEngine::FindObjectsInactive::Exclude{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::FindObjectsInactive UnityEngine::FindObjectsInactive::Include{ static_cast<int32_t>(0x1) };
