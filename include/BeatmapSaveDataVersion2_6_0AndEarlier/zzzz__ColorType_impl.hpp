#pragma once
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__ColorType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::ColorType::ColorType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::ColorType::ColorType() {}
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::ColorType BeatmapSaveDataVersion2_6_0AndEarlier::ColorType::ColorA{ static_cast<int32_t>(0x0) };
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::ColorType BeatmapSaveDataVersion2_6_0AndEarlier::ColorType::ColorB{ static_cast<int32_t>(0x1) };
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::ColorType BeatmapSaveDataVersion2_6_0AndEarlier::ColorType::None{ static_cast<int32_t>(0xffffffff) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
