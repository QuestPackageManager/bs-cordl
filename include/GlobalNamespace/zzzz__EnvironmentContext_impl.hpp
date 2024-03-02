#pragma once
#include "GlobalNamespace/zzzz__EnvironmentContext_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EnvironmentContext::EnvironmentContext(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnvironmentContext::EnvironmentContext() {}
constexpr ::GlobalNamespace::EnvironmentContext GlobalNamespace::EnvironmentContext::Gameplay{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::EnvironmentContext GlobalNamespace::EnvironmentContext::BeatmapEditor{ static_cast<int32_t>(0x1) };
