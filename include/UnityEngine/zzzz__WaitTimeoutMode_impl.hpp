#pragma once
// IWYU pragma private; include "UnityEngine/WaitTimeoutMode.hpp"
#include "UnityEngine/zzzz__WaitTimeoutMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::WaitTimeoutMode::WaitTimeoutMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::WaitTimeoutMode::WaitTimeoutMode() {}
constexpr ::UnityEngine::WaitTimeoutMode UnityEngine::WaitTimeoutMode::Realtime{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::WaitTimeoutMode UnityEngine::WaitTimeoutMode::InGameTime{ static_cast<int32_t>(0x1) };
