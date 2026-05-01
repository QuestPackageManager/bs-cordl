#pragma once
// IWYU pragma private; include "GlobalNamespace/GameplayServerControlSettings.hpp"
#include "GlobalNamespace/zzzz__GameplayServerControlSettings_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::GameplayServerControlSettings::GameplayServerControlSettings(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayServerControlSettings::GameplayServerControlSettings() {}
constexpr ::GlobalNamespace::GameplayServerControlSettings GlobalNamespace::GameplayServerControlSettings::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::GameplayServerControlSettings GlobalNamespace::GameplayServerControlSettings::AllowModifierSelection{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::GameplayServerControlSettings GlobalNamespace::GameplayServerControlSettings::AllowSpectate{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::GameplayServerControlSettings GlobalNamespace::GameplayServerControlSettings::All{ static_cast<int32_t>(0x3) };
