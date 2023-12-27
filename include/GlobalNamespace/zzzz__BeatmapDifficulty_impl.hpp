#pragma once
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeatmapDifficulty::BeatmapDifficulty(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDifficulty::BeatmapDifficulty() {}
constexpr ::GlobalNamespace::BeatmapDifficulty GlobalNamespace::BeatmapDifficulty::Easy{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::BeatmapDifficulty GlobalNamespace::BeatmapDifficulty::Normal{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::BeatmapDifficulty GlobalNamespace::BeatmapDifficulty::Hard{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::BeatmapDifficulty GlobalNamespace::BeatmapDifficulty::Expert{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::BeatmapDifficulty GlobalNamespace::BeatmapDifficulty::ExpertPlus{ static_cast<int32_t>(0x4) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
