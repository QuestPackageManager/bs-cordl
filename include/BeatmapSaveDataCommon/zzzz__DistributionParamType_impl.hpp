#pragma once
#include "BeatmapSaveDataCommon/zzzz__DistributionParamType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataCommon::DistributionParamType::DistributionParamType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataCommon::DistributionParamType::DistributionParamType() {}
constexpr ::BeatmapSaveDataCommon::DistributionParamType BeatmapSaveDataCommon::DistributionParamType::Wave{ static_cast<int32_t>(0x1) };
constexpr ::BeatmapSaveDataCommon::DistributionParamType BeatmapSaveDataCommon::DistributionParamType::Step{ static_cast<int32_t>(0x2) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
