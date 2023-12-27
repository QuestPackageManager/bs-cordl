#pragma once
#include "GlobalNamespace/zzzz__EnvironmentEffectsFilterPreset_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EnvironmentEffectsFilterPreset::EnvironmentEffectsFilterPreset(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnvironmentEffectsFilterPreset::EnvironmentEffectsFilterPreset() {}
constexpr ::GlobalNamespace::EnvironmentEffectsFilterPreset GlobalNamespace::EnvironmentEffectsFilterPreset::AllEffects{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::EnvironmentEffectsFilterPreset GlobalNamespace::EnvironmentEffectsFilterPreset::StrobeFilter{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::EnvironmentEffectsFilterPreset GlobalNamespace::EnvironmentEffectsFilterPreset::NoEffects{ static_cast<int32_t>(0xa) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
