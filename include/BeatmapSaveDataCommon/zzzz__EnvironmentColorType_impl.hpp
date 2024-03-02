#pragma once
#include "BeatmapSaveDataCommon/zzzz__EnvironmentColorType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataCommon::EnvironmentColorType::EnvironmentColorType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataCommon::EnvironmentColorType::EnvironmentColorType() {}
constexpr ::BeatmapSaveDataCommon::EnvironmentColorType BeatmapSaveDataCommon::EnvironmentColorType::None{ static_cast<int32_t>(0xffffffff) };
constexpr ::BeatmapSaveDataCommon::EnvironmentColorType BeatmapSaveDataCommon::EnvironmentColorType::Color0{ static_cast<int32_t>(0x0) };
constexpr ::BeatmapSaveDataCommon::EnvironmentColorType BeatmapSaveDataCommon::EnvironmentColorType::Color1{ static_cast<int32_t>(0x1) };
constexpr ::BeatmapSaveDataCommon::EnvironmentColorType BeatmapSaveDataCommon::EnvironmentColorType::ColorWhite{ static_cast<int32_t>(0x2) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
