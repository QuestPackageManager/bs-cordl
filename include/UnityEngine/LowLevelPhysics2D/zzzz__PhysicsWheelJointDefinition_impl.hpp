#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics2D/PhysicsWheelJointDefinition.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsBody_impl.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsTransform_impl.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsWheelJointDefinition_def.hpp"
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsWheelJointDefinition._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsWheelJointDefinition::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsWheelJointDefinition::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6fd40ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWheelJointDefinition>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsWheelJointDefinition._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsWheelJointDefinition::*)(bool)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsWheelJointDefinition::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6fd1c2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWheelJointDefinition>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsWheelJointDefinition.get_defaultDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsWheelJointDefinition (*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsWheelJointDefinition::get_defaultDefinition)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6fd411c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWheelJointDefinition>(), { "get_defaultDefinition", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::LowLevelPhysics2D::PhysicsWheelJointDefinition::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWheelJointDefinition>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsWheelJointDefinition::_ctor(bool useSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWheelJointDefinition>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, useSettings);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsWheelJointDefinition UnityEngine::LowLevelPhysics2D::PhysicsWheelJointDefinition::get_defaultDefinition() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWheelJointDefinition>(), { "get_defaultDefinition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsWheelJointDefinition>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_BodyA", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsBody", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_BodyB", ty:
// "::UnityEngine::LowLevelPhysics2D::PhysicsBody", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_LocalAnchorA", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsTransform",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_LocalAnchorB", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsTransform", modifiers: "", def_value: Some("{}"), comment:
// None }, CppParam { name: "m_EnableSpring", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_SpringFrequency", ty: "float_t", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "m_SpringDamping", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_EnableMotor", ty: "bool", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "m_MotorSpeed", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_MaxMotorTorque", ty: "float_t",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_EnableLimit", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "m_LowerTranslationLimit", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_UpperTranslationLimit", ty: "float_t", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "m_ForceThreshold", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_TorqueThreshold", ty: "float_t", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "m_TuningFrequency", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_TuningDamping", ty:
// "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_DrawScale", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "m_CollideConnected", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWheelJointDefinition::PhysicsWheelJointDefinition(
    ::UnityEngine::LowLevelPhysics2D::PhysicsBody m_BodyA, ::UnityEngine::LowLevelPhysics2D::PhysicsBody m_BodyB, ::UnityEngine::LowLevelPhysics2D::PhysicsTransform m_LocalAnchorA,
    ::UnityEngine::LowLevelPhysics2D::PhysicsTransform m_LocalAnchorB, bool m_EnableSpring, float_t m_SpringFrequency, float_t m_SpringDamping, bool m_EnableMotor, float_t m_MotorSpeed,
    float_t m_MaxMotorTorque, bool m_EnableLimit, float_t m_LowerTranslationLimit, float_t m_UpperTranslationLimit, float_t m_ForceThreshold, float_t m_TorqueThreshold, float_t m_TuningFrequency,
    float_t m_TuningDamping, float_t m_DrawScale, bool m_CollideConnected) noexcept {
  this->m_BodyA = m_BodyA;
  this->m_BodyB = m_BodyB;
  this->m_LocalAnchorA = m_LocalAnchorA;
  this->m_LocalAnchorB = m_LocalAnchorB;
  this->m_EnableSpring = m_EnableSpring;
  this->m_SpringFrequency = m_SpringFrequency;
  this->m_SpringDamping = m_SpringDamping;
  this->m_EnableMotor = m_EnableMotor;
  this->m_MotorSpeed = m_MotorSpeed;
  this->m_MaxMotorTorque = m_MaxMotorTorque;
  this->m_EnableLimit = m_EnableLimit;
  this->m_LowerTranslationLimit = m_LowerTranslationLimit;
  this->m_UpperTranslationLimit = m_UpperTranslationLimit;
  this->m_ForceThreshold = m_ForceThreshold;
  this->m_TorqueThreshold = m_TorqueThreshold;
  this->m_TuningFrequency = m_TuningFrequency;
  this->m_TuningDamping = m_TuningDamping;
  this->m_DrawScale = m_DrawScale;
  this->m_CollideConnected = m_CollideConnected;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWheelJointDefinition::PhysicsWheelJointDefinition() {}
