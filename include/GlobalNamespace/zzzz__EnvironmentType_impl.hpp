#pragma once
#include "GlobalNamespace/zzzz__EnvironmentType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EnvironmentType::EnvironmentType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnvironmentType::EnvironmentType() {}
constexpr ::GlobalNamespace::EnvironmentType GlobalNamespace::EnvironmentType::Normal{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::EnvironmentType GlobalNamespace::EnvironmentType::Circle{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::EnvironmentType GlobalNamespace::EnvironmentType::Multiplayer{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::EnvironmentType GlobalNamespace::EnvironmentType::Tutorial{ static_cast<int32_t>(0x3) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
