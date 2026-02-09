#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CommandBufferExecutionFlags.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBufferExecutionFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::CommandBufferExecutionFlags::CommandBufferExecutionFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CommandBufferExecutionFlags::CommandBufferExecutionFlags()   {
}
constexpr ::UnityEngine::Rendering::CommandBufferExecutionFlags  UnityEngine::Rendering::CommandBufferExecutionFlags::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::CommandBufferExecutionFlags  UnityEngine::Rendering::CommandBufferExecutionFlags::AsyncCompute{static_cast<int32_t>(0x2)};
