#pragma once
#include "UnityEngine/zzzz__ConfigurableJointMotion_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ConfigurableJointMotion::ConfigurableJointMotion(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ConfigurableJointMotion::ConfigurableJointMotion() {}
constexpr ::UnityEngine::ConfigurableJointMotion UnityEngine::ConfigurableJointMotion::Locked{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ConfigurableJointMotion UnityEngine::ConfigurableJointMotion::Limited{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ConfigurableJointMotion UnityEngine::ConfigurableJointMotion::Free{ static_cast<int32_t>(0x2) };
