#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion4/LightTranslationEvent.hpp"
#include "BeatmapSaveDataCommon/zzzz__EaseType_impl.hpp"
#include "BeatmapSaveDataVersion4/zzzz__LightTranslationEvent_def.hpp"
// Ctor Parameters [CppParam { name: "p", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "e", ty: "::BeatmapSaveDataCommon::EaseType", modifiers: "", def_value: Some("{}") },
// CppParam { name: "t", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataVersion4::LightTranslationEvent::LightTranslationEvent(int32_t p, ::BeatmapSaveDataCommon::EaseType e, float_t t) noexcept {
  this->p = p;
  this->e = e;
  this->t = t;
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion4::LightTranslationEvent::LightTranslationEvent() {}
