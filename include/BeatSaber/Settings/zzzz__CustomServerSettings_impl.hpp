#pragma once
// IWYU pragma private; include "BeatSaber/Settings/CustomServerSettings.hpp"
#include "BeatSaber/Settings/zzzz__CustomServerSettings_def.hpp"
// Ctor Parameters [CppParam { name: "useCustomEnvironment", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "forceGameLiftEnvironment", ty: "bool", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "hostName", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Settings::CustomServerSettings::CustomServerSettings(bool useCustomEnvironment, bool forceGameLiftEnvironment, ::StringW hostName) noexcept {
  this->useCustomEnvironment = useCustomEnvironment;
  this->forceGameLiftEnvironment = forceGameLiftEnvironment;
  this->hostName = hostName;
}
// Ctor Parameters []
constexpr ::BeatSaber::Settings::CustomServerSettings::CustomServerSettings() {}
