#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics2D/PhysicsFixedJointDefinition.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsBody_impl.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsTransform_impl.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsFixedJointDefinition_def.hpp"
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6fd39e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition::*)(bool)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6fd19f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition.get_defaultDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition (*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition::get_defaultDefinition)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6fd3a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition>(), { "get_defaultDefinition", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition::_ctor(bool useSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, useSettings);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition::get_defaultDefinition() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition>(), { "get_defaultDefinition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_BodyA", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsBody", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_BodyB", ty:
// "::UnityEngine::LowLevelPhysics2D::PhysicsBody", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_LocalAnchorA", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsTransform",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_LocalAnchorB", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsTransform", modifiers: "", def_value: Some("{}"), comment:
// None }, CppParam { name: "m_LinearFrequency", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_LinearDamping", ty: "float_t", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "m_AngularFrequency", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_AngularDamping", ty: "float_t",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ForceThreshold", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "m_TorqueThreshold", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_TuningFrequency", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None
// }, CppParam { name: "m_TuningDamping", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_DrawScale", ty: "float_t", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "m_CollideConnected", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition::PhysicsFixedJointDefinition(
    ::UnityEngine::LowLevelPhysics2D::PhysicsBody m_BodyA, ::UnityEngine::LowLevelPhysics2D::PhysicsBody m_BodyB, ::UnityEngine::LowLevelPhysics2D::PhysicsTransform m_LocalAnchorA,
    ::UnityEngine::LowLevelPhysics2D::PhysicsTransform m_LocalAnchorB, float_t m_LinearFrequency, float_t m_LinearDamping, float_t m_AngularFrequency, float_t m_AngularDamping,
    float_t m_ForceThreshold, float_t m_TorqueThreshold, float_t m_TuningFrequency, float_t m_TuningDamping, float_t m_DrawScale, bool m_CollideConnected) noexcept {
  this->m_BodyA = m_BodyA;
  this->m_BodyB = m_BodyB;
  this->m_LocalAnchorA = m_LocalAnchorA;
  this->m_LocalAnchorB = m_LocalAnchorB;
  this->m_LinearFrequency = m_LinearFrequency;
  this->m_LinearDamping = m_LinearDamping;
  this->m_AngularFrequency = m_AngularFrequency;
  this->m_AngularDamping = m_AngularDamping;
  this->m_ForceThreshold = m_ForceThreshold;
  this->m_TorqueThreshold = m_TorqueThreshold;
  this->m_TuningFrequency = m_TuningFrequency;
  this->m_TuningDamping = m_TuningDamping;
  this->m_DrawScale = m_DrawScale;
  this->m_CollideConnected = m_CollideConnected;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition::PhysicsFixedJointDefinition() {}
