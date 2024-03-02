#pragma once
#include "BeatmapSaveDataCommon/zzzz__EaseType_impl.hpp"
#include "BeatmapSaveDataCommon/zzzz__EnvironmentColorType_impl.hpp"
#include "BeatmapSaveDataVersion4/zzzz__LightColorEvent_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__EaseType_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__EnvironmentColorType_def.hpp"
// Ctor Parameters [CppParam { name: "p", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "e", ty: "::BeatmapSaveDataCommon::EaseType", modifiers: "", def_value: Some("{}") },
// CppParam { name: "c", ty: "::BeatmapSaveDataCommon::EnvironmentColorType", modifiers: "", def_value: Some("{}") }, CppParam { name: "b", ty: "float_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "f", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sb", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sf", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataVersion4::LightColorEvent::LightColorEvent(int32_t p, ::BeatmapSaveDataCommon::EaseType e, ::BeatmapSaveDataCommon::EnvironmentColorType c, float_t b, int32_t f, float_t sb,
                                                                      int32_t sf) noexcept {
  this->p = p;
  this->e = e;
  this->c = c;
  this->b = b;
  this->f = f;
  this->sb = sb;
  this->sf = sf;
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion4::LightColorEvent::LightColorEvent() {}
