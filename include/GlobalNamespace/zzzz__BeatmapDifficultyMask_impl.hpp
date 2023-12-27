#pragma once
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeatmapDifficultyMask::BeatmapDifficultyMask(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDifficultyMask::BeatmapDifficultyMask() {}
constexpr ::GlobalNamespace::BeatmapDifficultyMask GlobalNamespace::BeatmapDifficultyMask::Easy{ static_cast<uint8_t>(0x1u) };
constexpr ::GlobalNamespace::BeatmapDifficultyMask GlobalNamespace::BeatmapDifficultyMask::Normal{ static_cast<uint8_t>(0x2u) };
constexpr ::GlobalNamespace::BeatmapDifficultyMask GlobalNamespace::BeatmapDifficultyMask::Hard{ static_cast<uint8_t>(0x4u) };
constexpr ::GlobalNamespace::BeatmapDifficultyMask GlobalNamespace::BeatmapDifficultyMask::Expert{ static_cast<uint8_t>(0x8u) };
constexpr ::GlobalNamespace::BeatmapDifficultyMask GlobalNamespace::BeatmapDifficultyMask::ExpertPlus{ static_cast<uint8_t>(0x10u) };
constexpr ::GlobalNamespace::BeatmapDifficultyMask GlobalNamespace::BeatmapDifficultyMask::All{ static_cast<uint8_t>(0x1fu) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
