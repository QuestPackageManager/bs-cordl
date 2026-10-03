#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics2D/PhysicsHingeJointDefinition.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsBody_impl.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsTransform_impl.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsHingeJointDefinition_def.hpp"
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsHingeJointDefinition._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsHingeJointDefinition::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsHingeJointDefinition::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6fd3a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsHingeJointDefinition>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsHingeJointDefinition._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsHingeJointDefinition::*)(bool)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsHingeJointDefinition::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6fd1a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsHingeJointDefinition>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsHingeJointDefinition.get_defaultDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsHingeJointDefinition (*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsHingeJointDefinition::get_defaultDefinition)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6fd3ac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsHingeJointDefinition>(), { "get_defaultDefinition", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::LowLevelPhysics2D::PhysicsHingeJointDefinition::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsHingeJointDefinition>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsHingeJointDefinition::_ctor(bool useSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsHingeJointDefinition>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, useSettings);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsHingeJointDefinition UnityEngine::LowLevelPhysics2D::PhysicsHingeJointDefinition::get_defaultDefinition() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsHingeJointDefinition>(), { "get_defaultDefinition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsHingeJointDefinition>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_BodyA", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsBody", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_BodyB", ty:
// "::UnityEngine::LowLevelPhysics2D::PhysicsBody", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_LocalAnchorA", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsTransform",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_LocalAnchorB", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsTransform", modifiers: "", def_value: Some("{}"), comment:
// None }, CppParam { name: "m_EnableUnpinned", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_EnableSpring", ty: "bool", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "m_SpringTargetAngle", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_SpringFrequency", ty: "float_t", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "m_SpringDamping", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_EnableMotor", ty: "bool",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_MotorSpeed", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_MaxMotorTorque",
// ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_EnableLimit", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "m_LowerAngleLimit", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_UpperAngleLimit", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None
// }, CppParam { name: "m_ForceThreshold", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_TorqueThreshold", ty: "float_t", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "m_TuningFrequency", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_TuningDamping", ty: "float_t",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_DrawScale", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_CollideConnected",
// ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsHingeJointDefinition::PhysicsHingeJointDefinition(
    ::UnityEngine::LowLevelPhysics2D::PhysicsBody m_BodyA, ::UnityEngine::LowLevelPhysics2D::PhysicsBody m_BodyB, ::UnityEngine::LowLevelPhysics2D::PhysicsTransform m_LocalAnchorA,
    ::UnityEngine::LowLevelPhysics2D::PhysicsTransform m_LocalAnchorB, bool m_EnableUnpinned, bool m_EnableSpring, float_t m_SpringTargetAngle, float_t m_SpringFrequency, float_t m_SpringDamping,
    bool m_EnableMotor, float_t m_MotorSpeed, float_t m_MaxMotorTorque, bool m_EnableLimit, float_t m_LowerAngleLimit, float_t m_UpperAngleLimit, float_t m_ForceThreshold, float_t m_TorqueThreshold,
    float_t m_TuningFrequency, float_t m_TuningDamping, float_t m_DrawScale, bool m_CollideConnected) noexcept {
  this->m_BodyA = m_BodyA;
  this->m_BodyB = m_BodyB;
  this->m_LocalAnchorA = m_LocalAnchorA;
  this->m_LocalAnchorB = m_LocalAnchorB;
  this->m_EnableUnpinned = m_EnableUnpinned;
  this->m_EnableSpring = m_EnableSpring;
  this->m_SpringTargetAngle = m_SpringTargetAngle;
  this->m_SpringFrequency = m_SpringFrequency;
  this->m_SpringDamping = m_SpringDamping;
  this->m_EnableMotor = m_EnableMotor;
  this->m_MotorSpeed = m_MotorSpeed;
  this->m_MaxMotorTorque = m_MaxMotorTorque;
  this->m_EnableLimit = m_EnableLimit;
  this->m_LowerAngleLimit = m_LowerAngleLimit;
  this->m_UpperAngleLimit = m_UpperAngleLimit;
  this->m_ForceThreshold = m_ForceThreshold;
  this->m_TorqueThreshold = m_TorqueThreshold;
  this->m_TuningFrequency = m_TuningFrequency;
  this->m_TuningDamping = m_TuningDamping;
  this->m_DrawScale = m_DrawScale;
  this->m_CollideConnected = m_CollideConnected;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsHingeJointDefinition::PhysicsHingeJointDefinition() {}
