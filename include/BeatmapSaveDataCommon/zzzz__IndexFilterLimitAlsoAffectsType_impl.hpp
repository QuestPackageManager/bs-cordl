#pragma once
// IWYU pragma private; include "BeatmapSaveDataCommon/IndexFilterLimitAlsoAffectsType.hpp"
#include "BeatmapSaveDataCommon/zzzz__IndexFilterLimitAlsoAffectsType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataCommon::IndexFilterLimitAlsoAffectsType::IndexFilterLimitAlsoAffectsType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataCommon::IndexFilterLimitAlsoAffectsType::IndexFilterLimitAlsoAffectsType() {}
constexpr ::BeatmapSaveDataCommon::IndexFilterLimitAlsoAffectsType BeatmapSaveDataCommon::IndexFilterLimitAlsoAffectsType::None{ static_cast<int32_t>(0x0) };
constexpr ::BeatmapSaveDataCommon::IndexFilterLimitAlsoAffectsType BeatmapSaveDataCommon::IndexFilterLimitAlsoAffectsType::Duration{ static_cast<int32_t>(0x1) };
constexpr ::BeatmapSaveDataCommon::IndexFilterLimitAlsoAffectsType BeatmapSaveDataCommon::IndexFilterLimitAlsoAffectsType::Distribution{ static_cast<int32_t>(0x2) };
