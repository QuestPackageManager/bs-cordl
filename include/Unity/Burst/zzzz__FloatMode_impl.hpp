#pragma once
// IWYU pragma private; include "Unity/Burst/FloatMode.hpp"
#include "Unity/Burst/zzzz__FloatMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Burst::FloatMode::FloatMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Burst::FloatMode::FloatMode() {}
constexpr ::Unity::Burst::FloatMode Unity::Burst::FloatMode::Default{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Burst::FloatMode Unity::Burst::FloatMode::Strict{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Burst::FloatMode Unity::Burst::FloatMode::Deterministic{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Burst::FloatMode Unity::Burst::FloatMode::Fast{ static_cast<int32_t>(0x3) };
