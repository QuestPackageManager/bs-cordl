#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLevelPromoIdFilter.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPromoIdFilter_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeatmapLevelPromoIdFilter::BeatmapLevelPromoIdFilter(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelPromoIdFilter::BeatmapLevelPromoIdFilter() {}
constexpr ::GlobalNamespace::BeatmapLevelPromoIdFilter GlobalNamespace::BeatmapLevelPromoIdFilter::Packs{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::BeatmapLevelPromoIdFilter GlobalNamespace::BeatmapLevelPromoIdFilter::Levels{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::BeatmapLevelPromoIdFilter GlobalNamespace::BeatmapLevelPromoIdFilter::Empty{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::BeatmapLevelPromoIdFilter GlobalNamespace::BeatmapLevelPromoIdFilter::All{ static_cast<int32_t>(0x7) };
