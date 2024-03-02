#pragma once
#include "UnityEngine/Rendering/zzzz__ReflectionProbeMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ReflectionProbeMode::ReflectionProbeMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ReflectionProbeMode::ReflectionProbeMode() {}
constexpr ::UnityEngine::Rendering::ReflectionProbeMode UnityEngine::Rendering::ReflectionProbeMode::Baked{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::ReflectionProbeMode UnityEngine::Rendering::ReflectionProbeMode::Realtime{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::ReflectionProbeMode UnityEngine::Rendering::ReflectionProbeMode::Custom{ static_cast<int32_t>(0x2) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
