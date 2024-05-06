#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion4/SpawnRotation.hpp"
#include "BeatmapSaveDataCommon/zzzz__ExecutionTime_impl.hpp"
#include "BeatmapSaveDataVersion4/zzzz__SpawnRotation_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__ExecutionTime_def.hpp"
// Ctor Parameters [CppParam { name: "t", ty: "::BeatmapSaveDataCommon::ExecutionTime", modifiers: "", def_value: Some("{}") }, CppParam { name: "r", ty: "float_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::BeatmapSaveDataVersion4::SpawnRotation::SpawnRotation(::BeatmapSaveDataCommon::ExecutionTime t, float_t r) noexcept {
  this->t = t;
  this->r = r;
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion4::SpawnRotation::SpawnRotation() {}
