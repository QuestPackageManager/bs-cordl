#pragma once
#include "UnityEngine/zzzz__JointProjectionMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::JointProjectionMode::JointProjectionMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::JointProjectionMode::JointProjectionMode() {}
constexpr ::UnityEngine::JointProjectionMode UnityEngine::JointProjectionMode::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::JointProjectionMode UnityEngine::JointProjectionMode::PositionAndRotation{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::JointProjectionMode UnityEngine::JointProjectionMode::PositionOnly{ static_cast<int32_t>(0x2) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
