#pragma once
#include "BeatmapSaveDataCommon/zzzz__NoteCutDirection_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataCommon::NoteCutDirection::NoteCutDirection(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataCommon::NoteCutDirection::NoteCutDirection() {}
constexpr ::BeatmapSaveDataCommon::NoteCutDirection BeatmapSaveDataCommon::NoteCutDirection::Up{ static_cast<int32_t>(0x0) };
constexpr ::BeatmapSaveDataCommon::NoteCutDirection BeatmapSaveDataCommon::NoteCutDirection::Down{ static_cast<int32_t>(0x1) };
constexpr ::BeatmapSaveDataCommon::NoteCutDirection BeatmapSaveDataCommon::NoteCutDirection::Left{ static_cast<int32_t>(0x2) };
constexpr ::BeatmapSaveDataCommon::NoteCutDirection BeatmapSaveDataCommon::NoteCutDirection::Right{ static_cast<int32_t>(0x3) };
constexpr ::BeatmapSaveDataCommon::NoteCutDirection BeatmapSaveDataCommon::NoteCutDirection::UpLeft{ static_cast<int32_t>(0x4) };
constexpr ::BeatmapSaveDataCommon::NoteCutDirection BeatmapSaveDataCommon::NoteCutDirection::UpRight{ static_cast<int32_t>(0x5) };
constexpr ::BeatmapSaveDataCommon::NoteCutDirection BeatmapSaveDataCommon::NoteCutDirection::DownLeft{ static_cast<int32_t>(0x6) };
constexpr ::BeatmapSaveDataCommon::NoteCutDirection BeatmapSaveDataCommon::NoteCutDirection::DownRight{ static_cast<int32_t>(0x7) };
constexpr ::BeatmapSaveDataCommon::NoteCutDirection BeatmapSaveDataCommon::NoteCutDirection::Any{ static_cast<int32_t>(0x8) };
constexpr ::BeatmapSaveDataCommon::NoteCutDirection BeatmapSaveDataCommon::NoteCutDirection::None{ static_cast<int32_t>(0x9) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
