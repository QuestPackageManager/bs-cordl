#pragma once
#include "BeatmapSaveDataCommon/zzzz__IndexFilterRandomType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataCommon::IndexFilterRandomType::IndexFilterRandomType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataCommon::IndexFilterRandomType::IndexFilterRandomType() {}
constexpr ::BeatmapSaveDataCommon::IndexFilterRandomType BeatmapSaveDataCommon::IndexFilterRandomType::NoRandom{ static_cast<int32_t>(0x0) };
constexpr ::BeatmapSaveDataCommon::IndexFilterRandomType BeatmapSaveDataCommon::IndexFilterRandomType::KeepOrder{ static_cast<int32_t>(0x1) };
constexpr ::BeatmapSaveDataCommon::IndexFilterRandomType BeatmapSaveDataCommon::IndexFilterRandomType::RandomElements{ static_cast<int32_t>(0x2) };
