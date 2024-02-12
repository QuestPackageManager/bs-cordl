#pragma once
#include "BeatmapSaveDataCommon/zzzz__NoteLineLayer_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataCommon::NoteLineLayer::NoteLineLayer(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataCommon::NoteLineLayer::NoteLineLayer() {}
constexpr ::BeatmapSaveDataCommon::NoteLineLayer BeatmapSaveDataCommon::NoteLineLayer::Base{ static_cast<int32_t>(0x0) };
constexpr ::BeatmapSaveDataCommon::NoteLineLayer BeatmapSaveDataCommon::NoteLineLayer::Upper{ static_cast<int32_t>(0x1) };
constexpr ::BeatmapSaveDataCommon::NoteLineLayer BeatmapSaveDataCommon::NoteLineLayer::Top{ static_cast<int32_t>(0x2) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
