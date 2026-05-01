#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DebugOverdrawMode.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugOverdrawMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::DebugOverdrawMode::DebugOverdrawMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DebugOverdrawMode::DebugOverdrawMode() {}
constexpr ::UnityEngine::Rendering::Universal::DebugOverdrawMode UnityEngine::Rendering::Universal::DebugOverdrawMode::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::DebugOverdrawMode UnityEngine::Rendering::Universal::DebugOverdrawMode::Opaque{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::DebugOverdrawMode UnityEngine::Rendering::Universal::DebugOverdrawMode::Transparent{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::Universal::DebugOverdrawMode UnityEngine::Rendering::Universal::DebugOverdrawMode::All{ static_cast<int32_t>(0x3) };
