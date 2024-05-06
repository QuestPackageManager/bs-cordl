#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion4/Arc.hpp"
#include "BeatmapSaveDataCommon/zzzz__SliderMidAnchorMode_impl.hpp"
#include "BeatmapSaveDataVersion4/zzzz__Arc_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__SliderMidAnchorMode_def.hpp"
// Ctor Parameters [CppParam { name: "m", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "tm", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "a", ty:
// "::BeatmapSaveDataCommon::SliderMidAnchorMode", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataVersion4::Arc::Arc(float_t m, float_t tm, ::BeatmapSaveDataCommon::SliderMidAnchorMode a) noexcept {
  this->m = m;
  this->tm = tm;
  this->a = a;
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion4::Arc::Arc() {}
