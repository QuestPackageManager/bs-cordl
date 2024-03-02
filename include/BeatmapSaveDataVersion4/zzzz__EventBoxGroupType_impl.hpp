#pragma once
#include "BeatmapSaveDataVersion4/zzzz__EventBoxGroupType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataVersion4::EventBoxGroupType::EventBoxGroupType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion4::EventBoxGroupType::EventBoxGroupType() {}
constexpr ::BeatmapSaveDataVersion4::EventBoxGroupType BeatmapSaveDataVersion4::EventBoxGroupType::None{ static_cast<int32_t>(0x0) };
constexpr ::BeatmapSaveDataVersion4::EventBoxGroupType BeatmapSaveDataVersion4::EventBoxGroupType::Color{ static_cast<int32_t>(0x1) };
constexpr ::BeatmapSaveDataVersion4::EventBoxGroupType BeatmapSaveDataVersion4::EventBoxGroupType::Rotation{ static_cast<int32_t>(0x2) };
constexpr ::BeatmapSaveDataVersion4::EventBoxGroupType BeatmapSaveDataVersion4::EventBoxGroupType::Translation{ static_cast<int32_t>(0x3) };
constexpr ::BeatmapSaveDataVersion4::EventBoxGroupType BeatmapSaveDataVersion4::EventBoxGroupType::FloatFx{ static_cast<int32_t>(0x4) };
