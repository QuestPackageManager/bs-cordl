#pragma once
// IWYU pragma private; include "UnityEngine/ShadowmaskMode.hpp"
#include "UnityEngine/zzzz__ShadowmaskMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ShadowmaskMode::ShadowmaskMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ShadowmaskMode::ShadowmaskMode() {}
constexpr ::UnityEngine::ShadowmaskMode UnityEngine::ShadowmaskMode::Shadowmask{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ShadowmaskMode UnityEngine::ShadowmaskMode::DistanceShadowmask{ static_cast<int32_t>(0x1) };
