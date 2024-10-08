#pragma once
// IWYU pragma private; include "BeatSaber/Settings/MiscSettings.hpp"
#include "BeatSaber/Settings/zzzz__MiscSettings_impl.hpp"
#include "BeatSaber/Settings/zzzz__MiscSettings_def.hpp"
#include "BeatSaber/Settings/zzzz__MiscSettings_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Settings::__MiscSettings__ResponseLevel::__MiscSettings__ResponseLevel(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::Settings::__MiscSettings__ResponseLevel::__MiscSettings__ResponseLevel() {}
constexpr ::BeatSaber::Settings::__MiscSettings__ResponseLevel BeatSaber::Settings::__MiscSettings__ResponseLevel::Instant{ static_cast<int32_t>(0x0) };
constexpr ::BeatSaber::Settings::__MiscSettings__ResponseLevel BeatSaber::Settings::__MiscSettings__ResponseLevel::Long{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "language", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "pauseButtonResponse", ty:
// "::BeatSaber::Settings::__MiscSettings__ResponseLevel", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Settings::MiscSettings::MiscSettings(::StringW language, ::BeatSaber::Settings::__MiscSettings__ResponseLevel pauseButtonResponse) noexcept {
  this->language = language;
  this->pauseButtonResponse = pauseButtonResponse;
}
// Ctor Parameters []
constexpr ::BeatSaber::Settings::MiscSettings::MiscSettings() {}
