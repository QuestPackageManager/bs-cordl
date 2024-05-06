#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion4/IndexFilter.hpp"
#include "BeatmapSaveDataCommon/zzzz__IndexFilterLimitAlsoAffectsType_impl.hpp"
#include "BeatmapSaveDataCommon/zzzz__IndexFilterRandomType_impl.hpp"
#include "BeatmapSaveDataCommon/zzzz__IndexFilterType_impl.hpp"
#include "BeatmapSaveDataVersion4/zzzz__IndexFilter_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__IndexFilterLimitAlsoAffectsType_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__IndexFilterRandomType_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__IndexFilterType_def.hpp"
// Ctor Parameters [CppParam { name: "f", ty: "::BeatmapSaveDataCommon::IndexFilterType", modifiers: "", def_value: Some("{}") }, CppParam { name: "p", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "t", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "r", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "c", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "n", ty: "::BeatmapSaveDataCommon::IndexFilterRandomType", modifiers: "", def_value: Some("{}") }, CppParam { name: "s", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "l", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "d", ty:
// "::BeatmapSaveDataCommon::IndexFilterLimitAlsoAffectsType", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataVersion4::IndexFilter::IndexFilter(::BeatmapSaveDataCommon::IndexFilterType f, int32_t p, int32_t t, int32_t r, int32_t c, ::BeatmapSaveDataCommon::IndexFilterRandomType n,
                                                              int32_t s, float_t l, ::BeatmapSaveDataCommon::IndexFilterLimitAlsoAffectsType d) noexcept {
  this->f = f;
  this->p = p;
  this->t = t;
  this->r = r;
  this->c = c;
  this->n = n;
  this->s = s;
  this->l = l;
  this->d = d;
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion4::IndexFilter::IndexFilter() {}
