#pragma once
#include "BeatmapSaveDataCommon/zzzz__ExecutionTime_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataCommon::ExecutionTime::ExecutionTime(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataCommon::ExecutionTime::ExecutionTime() {}
constexpr ::BeatmapSaveDataCommon::ExecutionTime BeatmapSaveDataCommon::ExecutionTime::Early{ static_cast<int32_t>(0x0) };
constexpr ::BeatmapSaveDataCommon::ExecutionTime BeatmapSaveDataCommon::ExecutionTime::Late{ static_cast<int32_t>(0x1) };
