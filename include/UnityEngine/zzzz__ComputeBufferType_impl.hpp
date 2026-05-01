#pragma once
// IWYU pragma private; include "UnityEngine/ComputeBufferType.hpp"
#include "UnityEngine/zzzz__ComputeBufferType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ComputeBufferType::ComputeBufferType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ComputeBufferType::ComputeBufferType() {}
constexpr ::UnityEngine::ComputeBufferType UnityEngine::ComputeBufferType::Default{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ComputeBufferType UnityEngine::ComputeBufferType::Raw{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ComputeBufferType UnityEngine::ComputeBufferType::Append{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::ComputeBufferType UnityEngine::ComputeBufferType::Counter{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::ComputeBufferType UnityEngine::ComputeBufferType::Constant{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::ComputeBufferType UnityEngine::ComputeBufferType::Structured{ static_cast<int32_t>(0x10) };
constexpr ::UnityEngine::ComputeBufferType UnityEngine::ComputeBufferType::DrawIndirect{ static_cast<int32_t>(0x100) };
constexpr ::UnityEngine::ComputeBufferType UnityEngine::ComputeBufferType::IndirectArguments{ static_cast<int32_t>(0x100) };
constexpr ::UnityEngine::ComputeBufferType UnityEngine::ComputeBufferType::GPUMemory{ static_cast<int32_t>(0x200) };
