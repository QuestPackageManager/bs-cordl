#pragma once
// IWYU pragma private; include "BeatSaber/Settings/DebugSettings.hpp"
#include "BeatSaber/Settings/zzzz__DebugSettings_def.hpp"
// Ctor Parameters [CppParam { name: "showBeatmapLevelVersion", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "disableVRTrackingInAutoplayPS4", ty: "bool", modifiers: "",
// def_value: Some("{}") }]
constexpr ::BeatSaber::Settings::DebugSettings::DebugSettings(bool showBeatmapLevelVersion, bool disableVRTrackingInAutoplayPS4) noexcept {
  this->showBeatmapLevelVersion = showBeatmapLevelVersion;
  this->disableVRTrackingInAutoplayPS4 = disableVRTrackingInAutoplayPS4;
}
// Ctor Parameters []
constexpr ::BeatSaber::Settings::DebugSettings::DebugSettings() {}
