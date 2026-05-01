#pragma once
// IWYU pragma private; include "BeatmapSaveDataCommon/OffsetDirection.hpp"
#include "BeatmapSaveDataCommon/zzzz__OffsetDirection_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataCommon::OffsetDirection::OffsetDirection(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataCommon::OffsetDirection::OffsetDirection() {}
constexpr ::BeatmapSaveDataCommon::OffsetDirection BeatmapSaveDataCommon::OffsetDirection::Up{ static_cast<int32_t>(0x0) };
constexpr ::BeatmapSaveDataCommon::OffsetDirection BeatmapSaveDataCommon::OffsetDirection::Down{ static_cast<int32_t>(0x1) };
constexpr ::BeatmapSaveDataCommon::OffsetDirection BeatmapSaveDataCommon::OffsetDirection::Left{ static_cast<int32_t>(0x2) };
constexpr ::BeatmapSaveDataCommon::OffsetDirection BeatmapSaveDataCommon::OffsetDirection::Right{ static_cast<int32_t>(0x3) };
constexpr ::BeatmapSaveDataCommon::OffsetDirection BeatmapSaveDataCommon::OffsetDirection::UpLeft{ static_cast<int32_t>(0x4) };
constexpr ::BeatmapSaveDataCommon::OffsetDirection BeatmapSaveDataCommon::OffsetDirection::UpRight{ static_cast<int32_t>(0x5) };
constexpr ::BeatmapSaveDataCommon::OffsetDirection BeatmapSaveDataCommon::OffsetDirection::DownLeft{ static_cast<int32_t>(0x6) };
constexpr ::BeatmapSaveDataCommon::OffsetDirection BeatmapSaveDataCommon::OffsetDirection::DownRight{ static_cast<int32_t>(0x7) };
constexpr ::BeatmapSaveDataCommon::OffsetDirection BeatmapSaveDataCommon::OffsetDirection::None{ static_cast<int32_t>(0x9) };
