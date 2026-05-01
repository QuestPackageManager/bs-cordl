#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceOcclusionTestDebugCounter.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceOcclusionTestDebugCounter_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::InstanceOcclusionTestDebugCounter::InstanceOcclusionTestDebugCounter(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceOcclusionTestDebugCounter::InstanceOcclusionTestDebugCounter() {}
constexpr ::UnityEngine::Rendering::InstanceOcclusionTestDebugCounter UnityEngine::Rendering::InstanceOcclusionTestDebugCounter::Occluded{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::InstanceOcclusionTestDebugCounter UnityEngine::Rendering::InstanceOcclusionTestDebugCounter::NotOccluded{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::InstanceOcclusionTestDebugCounter UnityEngine::Rendering::InstanceOcclusionTestDebugCounter::Count{ static_cast<int32_t>(0x2) };
