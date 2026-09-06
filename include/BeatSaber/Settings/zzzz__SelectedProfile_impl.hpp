#pragma once
// IWYU pragma private; include "BeatSaber/Settings/SelectedProfile.hpp"
#include "BeatSaber/Settings/zzzz__SelectedProfile_def.hpp"
// Ctor Parameters [CppParam { name: "builtIn", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: Some("{}"),
// comment: None }]
constexpr ::BeatSaber::Settings::SelectedProfile::SelectedProfile(bool builtIn, int32_t index) noexcept {
  this->builtIn = builtIn;
  this->index = index;
}
// Ctor Parameters []
constexpr ::BeatSaber::Settings::SelectedProfile::SelectedProfile() {}
