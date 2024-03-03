#pragma once
#include "UnityEngine/Rendering/zzzz__ComputeQueueType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ComputeQueueType::ComputeQueueType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ComputeQueueType::ComputeQueueType() {}
constexpr ::UnityEngine::Rendering::ComputeQueueType UnityEngine::Rendering::ComputeQueueType::Default{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::ComputeQueueType UnityEngine::Rendering::ComputeQueueType::Background{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::ComputeQueueType UnityEngine::Rendering::ComputeQueueType::Urgent{ static_cast<int32_t>(0x2) };
