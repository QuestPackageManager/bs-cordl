#pragma once
// IWYU pragma private; include "BeatSaber/Settings/ControllerSettings.hpp"
#include "BeatSaber/Settings/zzzz__SelectedProfile_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "BeatSaber/Settings/zzzz__ControllerSettings_def.hpp"
// Ctor Parameters [CppParam { name: "position", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotation", ty: "::Unity::Mathematics::float3", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "hapticFeedback", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "selectedProfile", ty: "::BeatSaber::Settings::SelectedProfile",
// modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Settings::ControllerSettings::ControllerSettings(::Unity::Mathematics::float3 position, ::Unity::Mathematics::float3 rotation, bool hapticFeedback,
                                                                        ::BeatSaber::Settings::SelectedProfile selectedProfile) noexcept {
  this->position = position;
  this->rotation = rotation;
  this->hapticFeedback = hapticFeedback;
  this->selectedProfile = selectedProfile;
}
// Ctor Parameters []
constexpr ::BeatSaber::Settings::ControllerSettings::ControllerSettings() {}
