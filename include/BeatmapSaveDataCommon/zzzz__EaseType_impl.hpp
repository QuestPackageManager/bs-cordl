#pragma once
// IWYU pragma private; include "BeatmapSaveDataCommon/EaseType.hpp"
#include "BeatmapSaveDataCommon/zzzz__EaseType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataCommon::EaseType::EaseType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataCommon::EaseType::EaseType() {}
constexpr ::BeatmapSaveDataCommon::EaseType BeatmapSaveDataCommon::EaseType::None{ static_cast<int32_t>(0xffffffff) };
constexpr ::BeatmapSaveDataCommon::EaseType BeatmapSaveDataCommon::EaseType::Linear{ static_cast<int32_t>(0x0) };
constexpr ::BeatmapSaveDataCommon::EaseType BeatmapSaveDataCommon::EaseType::InQuad{ static_cast<int32_t>(0x1) };
constexpr ::BeatmapSaveDataCommon::EaseType BeatmapSaveDataCommon::EaseType::OutQuad{ static_cast<int32_t>(0x2) };
constexpr ::BeatmapSaveDataCommon::EaseType BeatmapSaveDataCommon::EaseType::InOutQuad{ static_cast<int32_t>(0x3) };
constexpr ::BeatmapSaveDataCommon::EaseType BeatmapSaveDataCommon::EaseType::InSine{ static_cast<int32_t>(0x4) };
constexpr ::BeatmapSaveDataCommon::EaseType BeatmapSaveDataCommon::EaseType::OutSine{ static_cast<int32_t>(0x5) };
constexpr ::BeatmapSaveDataCommon::EaseType BeatmapSaveDataCommon::EaseType::InOutSine{ static_cast<int32_t>(0x6) };
constexpr ::BeatmapSaveDataCommon::EaseType BeatmapSaveDataCommon::EaseType::InCubic{ static_cast<int32_t>(0x7) };
constexpr ::BeatmapSaveDataCommon::EaseType BeatmapSaveDataCommon::EaseType::OutCubic{ static_cast<int32_t>(0x8) };
constexpr ::BeatmapSaveDataCommon::EaseType BeatmapSaveDataCommon::EaseType::InOutCubic{ static_cast<int32_t>(0x9) };
constexpr ::BeatmapSaveDataCommon::EaseType BeatmapSaveDataCommon::EaseType::InQuart{ static_cast<int32_t>(0xa) };
constexpr ::BeatmapSaveDataCommon::EaseType BeatmapSaveDataCommon::EaseType::OutQuart{ static_cast<int32_t>(0xb) };
constexpr ::BeatmapSaveDataCommon::EaseType BeatmapSaveDataCommon::EaseType::InOutQuart{ static_cast<int32_t>(0xc) };
constexpr ::BeatmapSaveDataCommon::EaseType BeatmapSaveDataCommon::EaseType::InQuint{ static_cast<int32_t>(0xd) };
constexpr ::BeatmapSaveDataCommon::EaseType BeatmapSaveDataCommon::EaseType::OutQuint{ static_cast<int32_t>(0xe) };
constexpr ::BeatmapSaveDataCommon::EaseType BeatmapSaveDataCommon::EaseType::InOutQuint{ static_cast<int32_t>(0xf) };
constexpr ::BeatmapSaveDataCommon::EaseType BeatmapSaveDataCommon::EaseType::InExpo{ static_cast<int32_t>(0x10) };
constexpr ::BeatmapSaveDataCommon::EaseType BeatmapSaveDataCommon::EaseType::OutExpo{ static_cast<int32_t>(0x11) };
constexpr ::BeatmapSaveDataCommon::EaseType BeatmapSaveDataCommon::EaseType::InOutExpo{ static_cast<int32_t>(0x12) };
constexpr ::BeatmapSaveDataCommon::EaseType BeatmapSaveDataCommon::EaseType::InCirc{ static_cast<int32_t>(0x13) };
constexpr ::BeatmapSaveDataCommon::EaseType BeatmapSaveDataCommon::EaseType::OutCirc{ static_cast<int32_t>(0x14) };
constexpr ::BeatmapSaveDataCommon::EaseType BeatmapSaveDataCommon::EaseType::InOutCirc{ static_cast<int32_t>(0x15) };
constexpr ::BeatmapSaveDataCommon::EaseType BeatmapSaveDataCommon::EaseType::InBack{ static_cast<int32_t>(0x16) };
constexpr ::BeatmapSaveDataCommon::EaseType BeatmapSaveDataCommon::EaseType::OutBack{ static_cast<int32_t>(0x17) };
constexpr ::BeatmapSaveDataCommon::EaseType BeatmapSaveDataCommon::EaseType::InOutBack{ static_cast<int32_t>(0x18) };
constexpr ::BeatmapSaveDataCommon::EaseType BeatmapSaveDataCommon::EaseType::InElastic{ static_cast<int32_t>(0x19) };
constexpr ::BeatmapSaveDataCommon::EaseType BeatmapSaveDataCommon::EaseType::OutElastic{ static_cast<int32_t>(0x1a) };
constexpr ::BeatmapSaveDataCommon::EaseType BeatmapSaveDataCommon::EaseType::InOutElastic{ static_cast<int32_t>(0x1b) };
constexpr ::BeatmapSaveDataCommon::EaseType BeatmapSaveDataCommon::EaseType::InBounce{ static_cast<int32_t>(0x1c) };
constexpr ::BeatmapSaveDataCommon::EaseType BeatmapSaveDataCommon::EaseType::OutBounce{ static_cast<int32_t>(0x1d) };
constexpr ::BeatmapSaveDataCommon::EaseType BeatmapSaveDataCommon::EaseType::InOutBounce{ static_cast<int32_t>(0x1e) };
constexpr ::BeatmapSaveDataCommon::EaseType BeatmapSaveDataCommon::EaseType::BeatSaberInOutBack{ static_cast<int32_t>(0x64) };
constexpr ::BeatmapSaveDataCommon::EaseType BeatmapSaveDataCommon::EaseType::BeatSaberInOutElastic{ static_cast<int32_t>(0x65) };
constexpr ::BeatmapSaveDataCommon::EaseType BeatmapSaveDataCommon::EaseType::BeatSaberInOutBounce{ static_cast<int32_t>(0x66) };
