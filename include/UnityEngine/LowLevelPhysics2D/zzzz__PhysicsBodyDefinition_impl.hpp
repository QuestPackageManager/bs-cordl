#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics2D/PhysicsBodyDefinition.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsBody_impl.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsRotate_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsBodyDefinition_def.hpp"
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition::*)()>(&::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6fd53e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition::*)(bool)>(&::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6fd17f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition.get_defaultDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition (*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition::get_defaultDefinition)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6fd5414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition>(), { "get_defaultDefinition", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition::_ctor(bool useSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, useSettings);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition::get_defaultDefinition() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition>(), { "get_defaultDefinition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_BodyType", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "m_BodyConstraints", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyConstraints", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_TransformWriteMode", ty:
// "::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteMode", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Position", ty: "::UnityEngine::Vector2", modifiers:
// "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Rotation", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsRotate", modifiers: "", def_value: Some("{}"), comment: None }, CppParam {
// name: "m_LinearVelocity", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_AngularVelocity", ty: "float_t", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "m_LinearDamping", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_AngularDamping", ty: "float_t", modifiers:
// "", def_value: Some("{}"), comment: None }, CppParam { name: "m_GravityScale", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_SleepThreshold", ty:
// "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_CollisionThreshold", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "m_FastCollisionsAllowed", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_FastRotationAllowed", ty: "bool", modifiers: "", def_value: Some("{}"), comment:
// None }, CppParam { name: "m_SleepingAllowed", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Awake", ty: "bool", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "m_Enabled", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition::PhysicsBodyDefinition(
    ::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyType m_BodyType, ::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyConstraints m_BodyConstraints,
    ::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteMode m_TransformWriteMode, ::UnityEngine::Vector2 m_Position, ::UnityEngine::LowLevelPhysics2D::PhysicsRotate m_Rotation,
    ::UnityEngine::Vector2 m_LinearVelocity, float_t m_AngularVelocity, float_t m_LinearDamping, float_t m_AngularDamping, float_t m_GravityScale, float_t m_SleepThreshold,
    float_t m_CollisionThreshold, bool m_FastCollisionsAllowed, bool m_FastRotationAllowed, bool m_SleepingAllowed, bool m_Awake, bool m_Enabled) noexcept {
  this->m_BodyType = m_BodyType;
  this->m_BodyConstraints = m_BodyConstraints;
  this->m_TransformWriteMode = m_TransformWriteMode;
  this->m_Position = m_Position;
  this->m_Rotation = m_Rotation;
  this->m_LinearVelocity = m_LinearVelocity;
  this->m_AngularVelocity = m_AngularVelocity;
  this->m_LinearDamping = m_LinearDamping;
  this->m_AngularDamping = m_AngularDamping;
  this->m_GravityScale = m_GravityScale;
  this->m_SleepThreshold = m_SleepThreshold;
  this->m_CollisionThreshold = m_CollisionThreshold;
  this->m_FastCollisionsAllowed = m_FastCollisionsAllowed;
  this->m_FastRotationAllowed = m_FastRotationAllowed;
  this->m_SleepingAllowed = m_SleepingAllowed;
  this->m_Awake = m_Awake;
  this->m_Enabled = m_Enabled;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition::PhysicsBodyDefinition() {}
