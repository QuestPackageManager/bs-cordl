#pragma once
// IWYU pragma private; include "UnityEngine/CullingQueryOptions.hpp"
#include "UnityEngine/zzzz__CullingQueryOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::CullingQueryOptions::CullingQueryOptions(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::CullingQueryOptions::CullingQueryOptions() {}
constexpr ::UnityEngine::CullingQueryOptions UnityEngine::CullingQueryOptions::Normal{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::CullingQueryOptions UnityEngine::CullingQueryOptions::IgnoreVisibility{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::CullingQueryOptions UnityEngine::CullingQueryOptions::IgnoreDistance{ static_cast<int32_t>(0x2) };
