#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion4/Waypoint.hpp"
#include "BeatmapSaveDataCommon/zzzz__OffsetDirection_impl.hpp"
#include "BeatmapSaveDataVersion4/zzzz__Waypoint_def.hpp"
// Ctor Parameters [CppParam { name: "x", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "y", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "o", ty:
// "::BeatmapSaveDataCommon::OffsetDirection", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataVersion4::Waypoint::Waypoint(int32_t x, int32_t y, ::BeatmapSaveDataCommon::OffsetDirection o) noexcept {
  this->x = x;
  this->y = y;
  this->o = o;
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion4::Waypoint::Waypoint() {}
