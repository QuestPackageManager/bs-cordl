#pragma once
#include "Unity/Burst/zzzz__BurstExecutionEnvironment_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Burst::BurstExecutionEnvironment::BurstExecutionEnvironment(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Burst::BurstExecutionEnvironment::BurstExecutionEnvironment() {}
constexpr ::Unity::Burst::BurstExecutionEnvironment Unity::Burst::BurstExecutionEnvironment::Default{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Burst::BurstExecutionEnvironment Unity::Burst::BurstExecutionEnvironment::NonDeterministic{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Burst::BurstExecutionEnvironment Unity::Burst::BurstExecutionEnvironment::Deterministic{ static_cast<int32_t>(0x1) };
