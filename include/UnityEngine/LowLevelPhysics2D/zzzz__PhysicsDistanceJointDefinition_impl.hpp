#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics2D/PhysicsDistanceJointDefinition.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsBody_impl.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsTransform_impl.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsDistanceJointDefinition_def.hpp"
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6fd392c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition::*)(bool)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6fd1964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition.get_defaultDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition (*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition::get_defaultDefinition)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6fd395c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition>(), { "get_defaultDefinition", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition::_ctor(bool useSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, useSettings);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition::get_defaultDefinition() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition>(), { "get_defaultDefinition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_BodyA", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsBody", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_BodyB", ty:
// "::UnityEngine::LowLevelPhysics2D::PhysicsBody", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_LocalAnchorA", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsTransform",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_LocalAnchorB", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsTransform", modifiers: "", def_value: Some("{}"), comment:
// None }, CppParam { name: "m_Distance", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_EnableSpring", ty: "bool", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "m_SpringFrequency", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_SpringDamping", ty: "float_t", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "m_SpringLowerForce", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_SpringUpperForce", ty:
// "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_EnableMotor", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "m_MotorSpeed", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_MaxMotorForce", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None },
// CppParam { name: "m_EnableLimit", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_MinDistanceLimit", ty: "float_t", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "m_MaxDistanceLimit", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ForceThreshold", ty: "float_t", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "m_TorqueThreshold", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_TuningFrequency", ty:
// "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_TuningDamping", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "m_DrawScale", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_CollideConnected", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition::PhysicsDistanceJointDefinition(
    ::UnityEngine::LowLevelPhysics2D::PhysicsBody m_BodyA, ::UnityEngine::LowLevelPhysics2D::PhysicsBody m_BodyB, ::UnityEngine::LowLevelPhysics2D::PhysicsTransform m_LocalAnchorA,
    ::UnityEngine::LowLevelPhysics2D::PhysicsTransform m_LocalAnchorB, float_t m_Distance, bool m_EnableSpring, float_t m_SpringFrequency, float_t m_SpringDamping, float_t m_SpringLowerForce,
    float_t m_SpringUpperForce, bool m_EnableMotor, float_t m_MotorSpeed, float_t m_MaxMotorForce, bool m_EnableLimit, float_t m_MinDistanceLimit, float_t m_MaxDistanceLimit, float_t m_ForceThreshold,
    float_t m_TorqueThreshold, float_t m_TuningFrequency, float_t m_TuningDamping, float_t m_DrawScale, bool m_CollideConnected) noexcept {
  this->m_BodyA = m_BodyA;
  this->m_BodyB = m_BodyB;
  this->m_LocalAnchorA = m_LocalAnchorA;
  this->m_LocalAnchorB = m_LocalAnchorB;
  this->m_Distance = m_Distance;
  this->m_EnableSpring = m_EnableSpring;
  this->m_SpringFrequency = m_SpringFrequency;
  this->m_SpringDamping = m_SpringDamping;
  this->m_SpringLowerForce = m_SpringLowerForce;
  this->m_SpringUpperForce = m_SpringUpperForce;
  this->m_EnableMotor = m_EnableMotor;
  this->m_MotorSpeed = m_MotorSpeed;
  this->m_MaxMotorForce = m_MaxMotorForce;
  this->m_EnableLimit = m_EnableLimit;
  this->m_MinDistanceLimit = m_MinDistanceLimit;
  this->m_MaxDistanceLimit = m_MaxDistanceLimit;
  this->m_ForceThreshold = m_ForceThreshold;
  this->m_TorqueThreshold = m_TorqueThreshold;
  this->m_TuningFrequency = m_TuningFrequency;
  this->m_TuningDamping = m_TuningDamping;
  this->m_DrawScale = m_DrawScale;
  this->m_CollideConnected = m_CollideConnected;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition::PhysicsDistanceJointDefinition() {}
