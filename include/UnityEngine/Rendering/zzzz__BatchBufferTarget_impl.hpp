#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchBufferTarget.hpp"
#include "UnityEngine/Rendering/zzzz__BatchBufferTarget_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::BatchBufferTarget::BatchBufferTarget(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BatchBufferTarget::BatchBufferTarget() {}
constexpr ::UnityEngine::Rendering::BatchBufferTarget UnityEngine::Rendering::BatchBufferTarget::Unknown{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::BatchBufferTarget UnityEngine::Rendering::BatchBufferTarget::UnsupportedByUnderlyingGraphicsApi{ static_cast<int32_t>(0xffffffff) };
constexpr ::UnityEngine::Rendering::BatchBufferTarget UnityEngine::Rendering::BatchBufferTarget::RawBuffer{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::BatchBufferTarget UnityEngine::Rendering::BatchBufferTarget::ConstantBuffer{ static_cast<int32_t>(0x2) };
