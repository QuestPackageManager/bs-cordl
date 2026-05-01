#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugActionRepeatMode.hpp"
#include "UnityEngine/Rendering/zzzz__DebugActionRepeatMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::DebugActionRepeatMode::DebugActionRepeatMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugActionRepeatMode::DebugActionRepeatMode() {}
constexpr ::UnityEngine::Rendering::DebugActionRepeatMode UnityEngine::Rendering::DebugActionRepeatMode::Never{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::DebugActionRepeatMode UnityEngine::Rendering::DebugActionRepeatMode::Delay{ static_cast<int32_t>(0x1) };
