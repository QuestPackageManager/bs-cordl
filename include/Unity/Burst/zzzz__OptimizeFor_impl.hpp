#pragma once
#include "Unity/Burst/zzzz__OptimizeFor_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Burst::OptimizeFor::OptimizeFor(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Burst::OptimizeFor::OptimizeFor() {}
constexpr ::Unity::Burst::OptimizeFor Unity::Burst::OptimizeFor::Default{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Burst::OptimizeFor Unity::Burst::OptimizeFor::Performance{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Burst::OptimizeFor Unity::Burst::OptimizeFor::Size{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Burst::OptimizeFor Unity::Burst::OptimizeFor::FastCompilation{ static_cast<int32_t>(0x3) };
constexpr ::Unity::Burst::OptimizeFor Unity::Burst::OptimizeFor::Balanced{ static_cast<int32_t>(0x4) };
