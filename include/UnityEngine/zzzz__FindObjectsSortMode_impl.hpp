#pragma once
// IWYU pragma private; include "UnityEngine/FindObjectsSortMode.hpp"
#include "UnityEngine/zzzz__FindObjectsSortMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::FindObjectsSortMode::FindObjectsSortMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::FindObjectsSortMode::FindObjectsSortMode() {}
constexpr ::UnityEngine::FindObjectsSortMode UnityEngine::FindObjectsSortMode::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::FindObjectsSortMode UnityEngine::FindObjectsSortMode::InstanceID{ static_cast<int32_t>(0x1) };
