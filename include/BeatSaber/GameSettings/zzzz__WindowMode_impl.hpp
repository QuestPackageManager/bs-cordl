#pragma once
#include "BeatSaber/GameSettings/zzzz__WindowMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::GameSettings::WindowMode::WindowMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::GameSettings::WindowMode::WindowMode() {}
constexpr ::BeatSaber::GameSettings::WindowMode BeatSaber::GameSettings::WindowMode::Windowed{ static_cast<int32_t>(0x0) };
constexpr ::BeatSaber::GameSettings::WindowMode BeatSaber::GameSettings::WindowMode::Fullscreen{ static_cast<int32_t>(0x1) };
