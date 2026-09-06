#pragma once
// IWYU pragma private; include "UnityEngine/ArticulationDrive.hpp"
#include "UnityEngine/zzzz__ArticulationDriveType_impl.hpp"
#include "UnityEngine/zzzz__ArticulationDrive_def.hpp"
// Ctor Parameters [CppParam { name: "lowerLimit", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "upperLimit", ty: "float_t", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "stiffness", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "damping", ty: "float_t", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "forceLimit", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "target", ty: "float_t", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "targetVelocity", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "driveType", ty:
// "::UnityEngine::ArticulationDriveType", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::ArticulationDrive::ArticulationDrive(float_t lowerLimit, float_t upperLimit, float_t stiffness, float_t damping, float_t forceLimit, float_t target, float_t targetVelocity,
                                                              ::UnityEngine::ArticulationDriveType driveType) noexcept {
  this->lowerLimit = lowerLimit;
  this->upperLimit = upperLimit;
  this->stiffness = stiffness;
  this->damping = damping;
  this->forceLimit = forceLimit;
  this->target = target;
  this->targetVelocity = targetVelocity;
  this->driveType = driveType;
}
// Ctor Parameters []
constexpr ::UnityEngine::ArticulationDrive::ArticulationDrive() {}
