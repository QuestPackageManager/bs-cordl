#pragma once
// IWYU pragma private; include "GlobalNamespace/PlaymodeOptions.hpp"
#include "GlobalNamespace/zzzz__PlaymodeOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlaymodeOptions::PlaymodeOptions(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlaymodeOptions::PlaymodeOptions() {}
constexpr ::GlobalNamespace::PlaymodeOptions GlobalNamespace::PlaymodeOptions::Default{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::PlaymodeOptions GlobalNamespace::PlaymodeOptions::Playback{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::PlaymodeOptions GlobalNamespace::PlaymodeOptions::Recording{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::PlaymodeOptions GlobalNamespace::PlaymodeOptions::AutoPilot{ static_cast<int32_t>(0x4) };
