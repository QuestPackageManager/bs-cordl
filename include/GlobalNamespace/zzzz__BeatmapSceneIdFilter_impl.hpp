#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapSceneIdFilter.hpp"
#include "GlobalNamespace/zzzz__BeatmapSceneIdFilter_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeatmapSceneIdFilter::BeatmapSceneIdFilter(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapSceneIdFilter::BeatmapSceneIdFilter() {}
constexpr ::GlobalNamespace::BeatmapSceneIdFilter GlobalNamespace::BeatmapSceneIdFilter::Empty{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::BeatmapSceneIdFilter GlobalNamespace::BeatmapSceneIdFilter::Game{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::BeatmapSceneIdFilter GlobalNamespace::BeatmapSceneIdFilter::Environment{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::BeatmapSceneIdFilter GlobalNamespace::BeatmapSceneIdFilter::All{ static_cast<int32_t>(0x7) };
