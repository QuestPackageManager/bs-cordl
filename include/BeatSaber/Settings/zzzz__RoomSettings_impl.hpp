#pragma once
// IWYU pragma private; include "BeatSaber/Settings/RoomSettings.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "BeatSaber/Settings/zzzz__RoomSettings_def.hpp"
// Ctor Parameters [CppParam { name: "center", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotation", ty: "float_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::BeatSaber::Settings::RoomSettings::RoomSettings(::Unity::Mathematics::float3 center, float_t rotation) noexcept {
  this->center = center;
  this->rotation = rotation;
}
// Ctor Parameters []
constexpr ::BeatSaber::Settings::RoomSettings::RoomSettings() {}
