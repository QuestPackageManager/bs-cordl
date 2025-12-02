#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/RenderQueueType.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderQueueType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::RenderQueueType::RenderQueueType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::RenderQueueType::RenderQueueType() {}
constexpr ::UnityEngine::Rendering::Universal::RenderQueueType UnityEngine::Rendering::Universal::RenderQueueType::Opaque{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::RenderQueueType UnityEngine::Rendering::Universal::RenderQueueType::Transparent{ static_cast<int32_t>(0x1) };
