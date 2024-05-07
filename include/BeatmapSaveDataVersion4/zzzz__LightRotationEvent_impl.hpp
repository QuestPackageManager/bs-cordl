#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion4/LightRotationEvent.hpp"
#include "BeatmapSaveDataCommon/zzzz__EaseType_impl.hpp"
#include "BeatmapSaveDataCommon/zzzz__RotationDirection_impl.hpp"
#include "BeatmapSaveDataVersion4/zzzz__LightRotationEvent_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__EaseType_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__RotationDirection_def.hpp"
// Ctor Parameters [CppParam { name: "p", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "e", ty: "::BeatmapSaveDataCommon::EaseType", modifiers: "", def_value: Some("{}") },
// CppParam { name: "l", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "r", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "d", ty:
// "::BeatmapSaveDataCommon::RotationDirection", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataVersion4::LightRotationEvent::LightRotationEvent(int32_t p, ::BeatmapSaveDataCommon::EaseType e, int32_t l, float_t r,
                                                                            ::BeatmapSaveDataCommon::RotationDirection d) noexcept {
  this->p = p;
  this->e = e;
  this->l = l;
  this->r = r;
  this->d = d;
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion4::LightRotationEvent::LightRotationEvent() {}
