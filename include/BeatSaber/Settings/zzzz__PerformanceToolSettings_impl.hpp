#pragma once
// IWYU pragma private; include "BeatSaber/Settings/PerformanceToolSettings.hpp"
#include "BeatSaber/Settings/zzzz__PerformanceToolSettings_def.hpp"
// Ctor Parameters [CppParam { name: "recordFps", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "showFps", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "showMemory", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "saveScreenshot", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Settings::PerformanceToolSettings::PerformanceToolSettings(bool recordFps, bool showFps, bool showMemory, bool saveScreenshot) noexcept {
  this->recordFps = recordFps;
  this->showFps = showFps;
  this->showMemory = showMemory;
  this->saveScreenshot = saveScreenshot;
}
// Ctor Parameters []
constexpr ::BeatSaber::Settings::PerformanceToolSettings::PerformanceToolSettings() {}
