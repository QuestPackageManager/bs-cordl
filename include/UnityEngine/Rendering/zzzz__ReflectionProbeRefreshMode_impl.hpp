#pragma once
#include "UnityEngine/Rendering/zzzz__ReflectionProbeRefreshMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ReflectionProbeRefreshMode::ReflectionProbeRefreshMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ReflectionProbeRefreshMode::ReflectionProbeRefreshMode() {}
constexpr ::UnityEngine::Rendering::ReflectionProbeRefreshMode UnityEngine::Rendering::ReflectionProbeRefreshMode::OnAwake{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::ReflectionProbeRefreshMode UnityEngine::Rendering::ReflectionProbeRefreshMode::EveryFrame{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::ReflectionProbeRefreshMode UnityEngine::Rendering::ReflectionProbeRefreshMode::ViaScripting{ static_cast<int32_t>(0x2) };
