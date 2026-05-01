#pragma once
// IWYU pragma private; include "UnityEngine/ComputeBufferMode.hpp"
#include "UnityEngine/zzzz__ComputeBufferMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ComputeBufferMode::ComputeBufferMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ComputeBufferMode::ComputeBufferMode() {}
constexpr ::UnityEngine::ComputeBufferMode UnityEngine::ComputeBufferMode::Immutable{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ComputeBufferMode UnityEngine::ComputeBufferMode::Dynamic{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ComputeBufferMode UnityEngine::ComputeBufferMode::Circular{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::ComputeBufferMode UnityEngine::ComputeBufferMode::StreamOut{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::ComputeBufferMode UnityEngine::ComputeBufferMode::SubUpdates{ static_cast<int32_t>(0x4) };
