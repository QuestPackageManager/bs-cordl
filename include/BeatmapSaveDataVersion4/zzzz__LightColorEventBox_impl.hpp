#pragma once
#include "BeatmapSaveDataCommon/zzzz__DistributionParamType_impl.hpp"
#include "BeatmapSaveDataCommon/zzzz__EaseType_impl.hpp"
#include "BeatmapSaveDataVersion4/zzzz__LightColorEventBox_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__DistributionParamType_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__EaseType_def.hpp"
// Ctor Parameters [CppParam { name: "w", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "d", ty: "::BeatmapSaveDataCommon::DistributionParamType", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "s", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "t", ty: "::BeatmapSaveDataCommon::DistributionParamType", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "b", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "e", ty: "::BeatmapSaveDataCommon::EaseType", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataVersion4::LightColorEventBox::LightColorEventBox(float_t w, ::BeatmapSaveDataCommon::DistributionParamType d, float_t s, ::BeatmapSaveDataCommon::DistributionParamType t,
                                                                            int32_t b, ::BeatmapSaveDataCommon::EaseType e) noexcept {
  this->w = w;
  this->d = d;
  this->s = s;
  this->t = t;
  this->b = b;
  this->e = e;
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion4::LightColorEventBox::LightColorEventBox() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
