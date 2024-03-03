#pragma once
#include "UnityEngine/zzzz__JointSpring_def.hpp"
// Ctor Parameters [CppParam { name: "spring", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "damper", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "targetPosition", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::JointSpring::JointSpring(float_t spring, float_t damper, float_t targetPosition) noexcept {
  this->spring = spring;
  this->damper = damper;
  this->targetPosition = targetPosition;
}
// Ctor Parameters []
constexpr ::UnityEngine::JointSpring::JointSpring() {}
