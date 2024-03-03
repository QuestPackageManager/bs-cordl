#pragma once
#include "UnityEngine/zzzz__ArticulationDrive_def.hpp"
// Ctor Parameters [CppParam { name: "lowerLimit", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "upperLimit", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "stiffness", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "damping", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "forceLimit", ty:
// "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "target", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "targetVelocity", ty: "float_t", modifiers: "",
// def_value: Some("{}") }]
constexpr ::UnityEngine::ArticulationDrive::ArticulationDrive(float_t lowerLimit, float_t upperLimit, float_t stiffness, float_t damping, float_t forceLimit, float_t target,
                                                              float_t targetVelocity) noexcept {
  this->lowerLimit = lowerLimit;
  this->upperLimit = upperLimit;
  this->stiffness = stiffness;
  this->damping = damping;
  this->forceLimit = forceLimit;
  this->target = target;
  this->targetVelocity = targetVelocity;
}
// Ctor Parameters []
constexpr ::UnityEngine::ArticulationDrive::ArticulationDrive() {}
