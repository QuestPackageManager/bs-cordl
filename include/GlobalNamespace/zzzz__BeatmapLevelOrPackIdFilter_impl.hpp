#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLevelOrPackIdFilter.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelOrPackIdFilter_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeatmapLevelOrPackIdFilter::BeatmapLevelOrPackIdFilter(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelOrPackIdFilter::BeatmapLevelOrPackIdFilter() {}
constexpr ::GlobalNamespace::BeatmapLevelOrPackIdFilter GlobalNamespace::BeatmapLevelOrPackIdFilter::Packs{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::BeatmapLevelOrPackIdFilter GlobalNamespace::BeatmapLevelOrPackIdFilter::Levels{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::BeatmapLevelOrPackIdFilter GlobalNamespace::BeatmapLevelOrPackIdFilter::Empty{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::BeatmapLevelOrPackIdFilter GlobalNamespace::BeatmapLevelOrPackIdFilter::AllNonEmpty{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::BeatmapLevelOrPackIdFilter GlobalNamespace::BeatmapLevelOrPackIdFilter::All{ static_cast<int32_t>(0x7) };
