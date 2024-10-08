#pragma once
// IWYU pragma private; include "BeatSaber/Settings/AudioSettings.hpp"
#include "BeatSaber/Settings/zzzz__AudioSettings_def.hpp"
// Ctor Parameters [CppParam { name: "volume", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ambientVolumeScale", ty: "float_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "latency", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "overrideLatency", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Settings::AudioSettings::AudioSettings(float_t volume, float_t ambientVolumeScale, float_t latency, bool overrideLatency) noexcept {
  this->volume = volume;
  this->ambientVolumeScale = ambientVolumeScale;
  this->latency = latency;
  this->overrideLatency = overrideLatency;
}
// Ctor Parameters []
constexpr ::BeatSaber::Settings::AudioSettings::AudioSettings() {}
