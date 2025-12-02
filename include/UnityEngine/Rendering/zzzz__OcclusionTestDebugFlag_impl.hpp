#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/OcclusionTestDebugFlag.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionTestDebugFlag_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::OcclusionTestDebugFlag::OcclusionTestDebugFlag(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::OcclusionTestDebugFlag::OcclusionTestDebugFlag() {}
constexpr ::UnityEngine::Rendering::OcclusionTestDebugFlag UnityEngine::Rendering::OcclusionTestDebugFlag::AlwaysPass{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::OcclusionTestDebugFlag UnityEngine::Rendering::OcclusionTestDebugFlag::CountVisible{ static_cast<int32_t>(0x2) };
