#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatSaberSessionEventType.hpp"
#include "GlobalNamespace/zzzz__BeatSaberSessionEventType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeatSaberSessionEventType::BeatSaberSessionEventType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatSaberSessionEventType::BeatSaberSessionEventType() {}
constexpr ::GlobalNamespace::BeatSaberSessionEventType GlobalNamespace::BeatSaberSessionEventType::SessionStart{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::BeatSaberSessionEventType GlobalNamespace::BeatSaberSessionEventType::SessionFinish{ static_cast<int32_t>(0x2) };
