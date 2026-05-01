#pragma once
// IWYU pragma private; include "BeatSaber/Settings/WindowSettings.hpp"
#include "Unity/Mathematics/zzzz__int2_impl.hpp"
#include "BeatSaber/Settings/zzzz__WindowSettings_def.hpp"
// Ctor Parameters [CppParam { name: "fullscreen", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "resolution", ty: "::Unity::Mathematics::int2", modifiers: "", def_value:
// Some("{}") }]
constexpr ::BeatSaber::Settings::WindowSettings::WindowSettings(bool fullscreen, ::Unity::Mathematics::int2 resolution) noexcept {
  this->fullscreen = fullscreen;
  this->resolution = resolution;
}
// Ctor Parameters []
constexpr ::BeatSaber::Settings::WindowSettings::WindowSettings() {}
