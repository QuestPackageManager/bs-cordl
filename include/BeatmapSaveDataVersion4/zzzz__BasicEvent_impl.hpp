#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion4/BasicEvent.hpp"
#include "BeatmapSaveDataCommon/zzzz__BeatmapEventType_impl.hpp"
#include "BeatmapSaveDataVersion4/zzzz__BasicEvent_def.hpp"
// Ctor Parameters [CppParam { name: "t", ty: "::BeatmapSaveDataCommon::BeatmapEventType", modifiers: "", def_value: Some("{}") }, CppParam { name: "i", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "f", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataVersion4::BasicEvent::BasicEvent(::BeatmapSaveDataCommon::BeatmapEventType t, int32_t i, float_t f) noexcept {
  this->t = t;
  this->i = i;
  this->f = f;
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion4::BasicEvent::BasicEvent() {}
