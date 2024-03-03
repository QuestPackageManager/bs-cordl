#pragma once
#include "BeatmapSaveDataCommon/zzzz__NoteColorType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataCommon::NoteColorType::NoteColorType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataCommon::NoteColorType::NoteColorType() {}
constexpr ::BeatmapSaveDataCommon::NoteColorType BeatmapSaveDataCommon::NoteColorType::ColorA{ static_cast<int32_t>(0x0) };
constexpr ::BeatmapSaveDataCommon::NoteColorType BeatmapSaveDataCommon::NoteColorType::ColorB{ static_cast<int32_t>(0x1) };
