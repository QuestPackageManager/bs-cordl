#pragma once
// IWYU pragma private; include "GlobalNamespace/EnvironmentColorType.hpp"
#include "GlobalNamespace/zzzz__EnvironmentColorType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EnvironmentColorType::EnvironmentColorType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnvironmentColorType::EnvironmentColorType() {}
constexpr ::GlobalNamespace::EnvironmentColorType GlobalNamespace::EnvironmentColorType::None{ static_cast<int32_t>(0xffffffff) };
constexpr ::GlobalNamespace::EnvironmentColorType GlobalNamespace::EnvironmentColorType::Color0{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::EnvironmentColorType GlobalNamespace::EnvironmentColorType::Color1{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::EnvironmentColorType GlobalNamespace::EnvironmentColorType::ColorW{ static_cast<int32_t>(0x2) };
