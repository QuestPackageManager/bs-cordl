#pragma once
// IWYU pragma private; include "Unity/Burst/FloatPrecision.hpp"
#include "Unity/Burst/zzzz__FloatPrecision_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Burst::FloatPrecision::FloatPrecision(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Burst::FloatPrecision::FloatPrecision() {}
constexpr ::Unity::Burst::FloatPrecision Unity::Burst::FloatPrecision::Standard{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Burst::FloatPrecision Unity::Burst::FloatPrecision::High{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Burst::FloatPrecision Unity::Burst::FloatPrecision::Medium{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Burst::FloatPrecision Unity::Burst::FloatPrecision::Low{ static_cast<int32_t>(0x3) };
