#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapCharacteristic.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeatmapCharacteristic::BeatmapCharacteristic(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapCharacteristic::BeatmapCharacteristic() {}
constexpr ::GlobalNamespace::BeatmapCharacteristic GlobalNamespace::BeatmapCharacteristic::Standard{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::BeatmapCharacteristic GlobalNamespace::BeatmapCharacteristic::OneSaber{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::BeatmapCharacteristic GlobalNamespace::BeatmapCharacteristic::Legacy{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::BeatmapCharacteristic GlobalNamespace::BeatmapCharacteristic::NoArrows{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::BeatmapCharacteristic GlobalNamespace::BeatmapCharacteristic::Degree360{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::BeatmapCharacteristic GlobalNamespace::BeatmapCharacteristic::Degree90{ static_cast<int32_t>(0x5) };
