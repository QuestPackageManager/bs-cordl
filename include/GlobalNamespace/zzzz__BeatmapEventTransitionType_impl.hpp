#pragma once
#include "GlobalNamespace/zzzz__BeatmapEventTransitionType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeatmapEventTransitionType::BeatmapEventTransitionType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapEventTransitionType::BeatmapEventTransitionType() {}
constexpr ::GlobalNamespace::BeatmapEventTransitionType GlobalNamespace::BeatmapEventTransitionType::Instant{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::BeatmapEventTransitionType GlobalNamespace::BeatmapEventTransitionType::Interpolate{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::BeatmapEventTransitionType GlobalNamespace::BeatmapEventTransitionType::Extend{ static_cast<int32_t>(0x2) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
