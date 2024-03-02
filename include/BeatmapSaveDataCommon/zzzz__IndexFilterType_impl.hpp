#pragma once
#include "BeatmapSaveDataCommon/zzzz__IndexFilterType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataCommon::IndexFilterType::IndexFilterType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataCommon::IndexFilterType::IndexFilterType() {}
constexpr ::BeatmapSaveDataCommon::IndexFilterType BeatmapSaveDataCommon::IndexFilterType::Division{ static_cast<int32_t>(0x1) };
constexpr ::BeatmapSaveDataCommon::IndexFilterType BeatmapSaveDataCommon::IndexFilterType::StepAndOffset{ static_cast<int32_t>(0x2) };
