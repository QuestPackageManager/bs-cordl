#pragma once
// IWYU pragma private; include "GlobalNamespace/GameStateType.hpp"
#include "GlobalNamespace/zzzz__GameStateType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::GameStateType::GameStateType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameStateType::GameStateType() {}
constexpr ::GlobalNamespace::GameStateType GlobalNamespace::GameStateType::EmptyServer{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::GameStateType GlobalNamespace::GameStateType::SelectingLevel{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::GameStateType GlobalNamespace::GameStateType::StartingLevel{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::GameStateType GlobalNamespace::GameStateType::RunningLevel{ static_cast<int32_t>(0x3) };
