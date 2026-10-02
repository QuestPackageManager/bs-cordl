#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics2D/PhysicsRelativeJointDefinition.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsBody_impl.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsTransform_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsRelativeJointDefinition_def.hpp"
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6fd3f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition::*)(bool)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6fd1b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition.get_defaultDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition (*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition::get_defaultDefinition)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6fd3fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition>(), { "get_defaultDefinition", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition::_ctor(bool useSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, useSettings);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition::get_defaultDefinition() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition>(), { "get_defaultDefinition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_BodyA", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsBody", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_BodyB", ty:
// "::UnityEngine::LowLevelPhysics2D::PhysicsBody", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_LocalAnchorA", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsTransform",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_LocalAnchorB", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsTransform", modifiers: "", def_value: Some("{}"), comment:
// None }, CppParam { name: "m_LinearVelocity", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_AngularVelocity", ty: "float_t", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "m_MaxForce", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_MaxTorque", ty: "float_t",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_SpringLinearFrequency", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "m_SpringAngularFrequency", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_SpringLinearDamping", ty: "float_t", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "m_SpringAngularDamping", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_SpringMaxForce", ty: "float_t", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "m_SpringMaxTorque", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ForceThreshold", ty:
// "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_TorqueThreshold", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "m_TuningFrequency", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_TuningDamping", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None },
// CppParam { name: "m_DrawScale", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_CollideConnected", ty: "bool", modifiers: "", def_value: Some("{}"),
// comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition::PhysicsRelativeJointDefinition(
    ::UnityEngine::LowLevelPhysics2D::PhysicsBody m_BodyA, ::UnityEngine::LowLevelPhysics2D::PhysicsBody m_BodyB, ::UnityEngine::LowLevelPhysics2D::PhysicsTransform m_LocalAnchorA,
    ::UnityEngine::LowLevelPhysics2D::PhysicsTransform m_LocalAnchorB, ::UnityEngine::Vector2 m_LinearVelocity, float_t m_AngularVelocity, float_t m_MaxForce, float_t m_MaxTorque,
    float_t m_SpringLinearFrequency, float_t m_SpringAngularFrequency, float_t m_SpringLinearDamping, float_t m_SpringAngularDamping, float_t m_SpringMaxForce, float_t m_SpringMaxTorque,
    float_t m_ForceThreshold, float_t m_TorqueThreshold, float_t m_TuningFrequency, float_t m_TuningDamping, float_t m_DrawScale, bool m_CollideConnected) noexcept {
  this->m_BodyA = m_BodyA;
  this->m_BodyB = m_BodyB;
  this->m_LocalAnchorA = m_LocalAnchorA;
  this->m_LocalAnchorB = m_LocalAnchorB;
  this->m_LinearVelocity = m_LinearVelocity;
  this->m_AngularVelocity = m_AngularVelocity;
  this->m_MaxForce = m_MaxForce;
  this->m_MaxTorque = m_MaxTorque;
  this->m_SpringLinearFrequency = m_SpringLinearFrequency;
  this->m_SpringAngularFrequency = m_SpringAngularFrequency;
  this->m_SpringLinearDamping = m_SpringLinearDamping;
  this->m_SpringAngularDamping = m_SpringAngularDamping;
  this->m_SpringMaxForce = m_SpringMaxForce;
  this->m_SpringMaxTorque = m_SpringMaxTorque;
  this->m_ForceThreshold = m_ForceThreshold;
  this->m_TorqueThreshold = m_TorqueThreshold;
  this->m_TuningFrequency = m_TuningFrequency;
  this->m_TuningDamping = m_TuningDamping;
  this->m_DrawScale = m_DrawScale;
  this->m_CollideConnected = m_CollideConnected;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition::PhysicsRelativeJointDefinition() {}
