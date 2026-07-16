#pragma once
// IWYU pragma private; include "BeatSaber/Automation/PerformanceToolLauncherOverrideConfig.hpp"
#include "BeatSaber/Automation/zzzz__PerformanceToolLauncherOverrideConfig_def.hpp"
inline void BeatSaber::Automation::PerformanceToolLauncherOverrideConfig::setStaticF_kDefault(::BeatSaber::Automation::PerformanceToolLauncherOverrideConfig value) {
  ::cordl_internals::setStaticField<::BeatSaber::Automation::PerformanceToolLauncherOverrideConfig, "kDefault", ::BeatSaber::Automation::PerformanceToolLauncherOverrideConfig>(
      std::forward<::BeatSaber::Automation::PerformanceToolLauncherOverrideConfig>(value));
}
inline ::BeatSaber::Automation::PerformanceToolLauncherOverrideConfig BeatSaber::Automation::PerformanceToolLauncherOverrideConfig::getStaticF_kDefault() {
  return ::cordl_internals::getStaticField<::BeatSaber::Automation::PerformanceToolLauncherOverrideConfig, "kDefault", ::BeatSaber::Automation::PerformanceToolLauncherOverrideConfig>();
}
// Ctor Parameters [CppParam { name: "enableAutoplay", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "enableRecording", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Automation::PerformanceToolLauncherOverrideConfig::PerformanceToolLauncherOverrideConfig(bool enableAutoplay, bool enableRecording) noexcept {
  this->enableAutoplay = enableAutoplay;
  this->enableRecording = enableRecording;
}
// Ctor Parameters []
constexpr ::BeatSaber::Automation::PerformanceToolLauncherOverrideConfig::PerformanceToolLauncherOverrideConfig() {}
