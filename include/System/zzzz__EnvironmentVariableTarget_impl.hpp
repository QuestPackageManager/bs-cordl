#pragma once
// IWYU pragma private; include "System/EnvironmentVariableTarget.hpp"
#include "System/zzzz__EnvironmentVariableTarget_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::EnvironmentVariableTarget::EnvironmentVariableTarget(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::EnvironmentVariableTarget::EnvironmentVariableTarget() {}
constexpr ::System::EnvironmentVariableTarget System::EnvironmentVariableTarget::Process{ static_cast<int32_t>(0x0) };
constexpr ::System::EnvironmentVariableTarget System::EnvironmentVariableTarget::User{ static_cast<int32_t>(0x1) };
constexpr ::System::EnvironmentVariableTarget System::EnvironmentVariableTarget::Machine{ static_cast<int32_t>(0x2) };
