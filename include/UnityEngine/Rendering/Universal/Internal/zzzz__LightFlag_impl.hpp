#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Internal/LightFlag.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__LightFlag_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::Internal::LightFlag::LightFlag(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::LightFlag::LightFlag() {}
constexpr ::UnityEngine::Rendering::Universal::Internal::LightFlag UnityEngine::Rendering::Universal::Internal::LightFlag::SubtractiveMixedLighting{ static_cast<int32_t>(0x4) };
