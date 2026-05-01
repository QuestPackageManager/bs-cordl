#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceOcclusionEventType.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceOcclusionEventType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::InstanceOcclusionEventType::InstanceOcclusionEventType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceOcclusionEventType::InstanceOcclusionEventType() {}
constexpr ::UnityEngine::Rendering::InstanceOcclusionEventType UnityEngine::Rendering::InstanceOcclusionEventType::OcclusionTest{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::InstanceOcclusionEventType UnityEngine::Rendering::InstanceOcclusionEventType::OccluderUpdate{ static_cast<int32_t>(0x1) };
