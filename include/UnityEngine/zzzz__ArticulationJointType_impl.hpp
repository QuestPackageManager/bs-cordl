#pragma once
#include "UnityEngine/zzzz__ArticulationJointType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ArticulationJointType::ArticulationJointType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ArticulationJointType::ArticulationJointType() {}
constexpr ::UnityEngine::ArticulationJointType UnityEngine::ArticulationJointType::FixedJoint{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ArticulationJointType UnityEngine::ArticulationJointType::PrismaticJoint{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ArticulationJointType UnityEngine::ArticulationJointType::RevoluteJoint{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::ArticulationJointType UnityEngine::ArticulationJointType::SphericalJoint{ static_cast<int32_t>(0x3) };
