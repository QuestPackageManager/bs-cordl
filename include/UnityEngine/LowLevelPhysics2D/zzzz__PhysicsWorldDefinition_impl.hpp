#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics2D/PhysicsWorldDefinition.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsWorld_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsWorldDefinition_def.hpp"
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition::*)()>(&::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6fd818c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition::*)(bool)>(&::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6fd1768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition.get_defaultDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition (*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition::get_defaultDefinition)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6fd81c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition>(), { "get_defaultDefinition", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition::_ctor(bool useSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, useSettings);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition::get_defaultDefinition() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition>(), { "get_defaultDefinition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Gravity", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_SimulationType", ty:
// "::UnityEngine::LowLevelPhysics2D::PhysicsWorld_SimulationType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_SimulationSubSteps", ty: "int32_t", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "m_SimulationWorkers", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_TransformWriteMode", ty:
// "::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformWriteMode", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_TransformPlane", ty:
// "::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_TransformTweening", ty: "bool", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "m_SleepingAllowed", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ContinuousAllowed", ty: "bool", modifiers:
// "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ContactFilterCallbacks", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_PreSolveCallbacks",
// ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_AutoBodyUpdateCallbacks", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "m_AutoContactCallbacks", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_AutoTriggerCallbacks", ty: "bool", modifiers: "", def_value: Some("{}"), comment:
// None }, CppParam { name: "m_AutoJointThresholdCallbacks", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_BounceThreshold", ty: "float_t", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "m_ContactHitEventThreshold", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ContactFrequency",
// ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ContactDamping", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "m_ContactSpeed", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ContactRecycleDistance", ty: "float_t", modifiers: "", def_value: Some("{}"), comment:
// None }, CppParam { name: "m_MaximumLinearSpeed", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_DrawOptions", ty:
// "::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_DrawFillOptions", ty:
// "::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawFillOptions", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_DrawContactType", ty:
// "::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawContactType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_DrawThickness", ty: "float_t", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "m_DrawFillAlpha", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_DrawPointScale", ty: "float_t", modifiers:
// "", def_value: Some("{}"), comment: None }, CppParam { name: "m_DrawNormalScale", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_DrawImpulseScale", ty:
// "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_DrawCapacity", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "m_DrawColors", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawColors", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition::PhysicsWorldDefinition(
    ::UnityEngine::Vector2 m_Gravity, ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_SimulationType m_SimulationType, int32_t m_SimulationSubSteps, int32_t m_SimulationWorkers,
    ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformWriteMode m_TransformWriteMode, ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane m_TransformPlane, bool m_TransformTweening,
    bool m_SleepingAllowed, bool m_ContinuousAllowed, bool m_ContactFilterCallbacks, bool m_PreSolveCallbacks, bool m_AutoBodyUpdateCallbacks, bool m_AutoContactCallbacks, bool m_AutoTriggerCallbacks,
    bool m_AutoJointThresholdCallbacks, float_t m_BounceThreshold, float_t m_ContactHitEventThreshold, float_t m_ContactFrequency, float_t m_ContactDamping, float_t m_ContactSpeed,
    float_t m_ContactRecycleDistance, float_t m_MaximumLinearSpeed, ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions m_DrawOptions,
    ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawFillOptions m_DrawFillOptions, ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawContactType m_DrawContactType, float_t m_DrawThickness,
    float_t m_DrawFillAlpha, float_t m_DrawPointScale, float_t m_DrawNormalScale, float_t m_DrawImpulseScale, int32_t m_DrawCapacity,
    ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawColors m_DrawColors) noexcept {
  this->m_Gravity = m_Gravity;
  this->m_SimulationType = m_SimulationType;
  this->m_SimulationSubSteps = m_SimulationSubSteps;
  this->m_SimulationWorkers = m_SimulationWorkers;
  this->m_TransformWriteMode = m_TransformWriteMode;
  this->m_TransformPlane = m_TransformPlane;
  this->m_TransformTweening = m_TransformTweening;
  this->m_SleepingAllowed = m_SleepingAllowed;
  this->m_ContinuousAllowed = m_ContinuousAllowed;
  this->m_ContactFilterCallbacks = m_ContactFilterCallbacks;
  this->m_PreSolveCallbacks = m_PreSolveCallbacks;
  this->m_AutoBodyUpdateCallbacks = m_AutoBodyUpdateCallbacks;
  this->m_AutoContactCallbacks = m_AutoContactCallbacks;
  this->m_AutoTriggerCallbacks = m_AutoTriggerCallbacks;
  this->m_AutoJointThresholdCallbacks = m_AutoJointThresholdCallbacks;
  this->m_BounceThreshold = m_BounceThreshold;
  this->m_ContactHitEventThreshold = m_ContactHitEventThreshold;
  this->m_ContactFrequency = m_ContactFrequency;
  this->m_ContactDamping = m_ContactDamping;
  this->m_ContactSpeed = m_ContactSpeed;
  this->m_ContactRecycleDistance = m_ContactRecycleDistance;
  this->m_MaximumLinearSpeed = m_MaximumLinearSpeed;
  this->m_DrawOptions = m_DrawOptions;
  this->m_DrawFillOptions = m_DrawFillOptions;
  this->m_DrawContactType = m_DrawContactType;
  this->m_DrawThickness = m_DrawThickness;
  this->m_DrawFillAlpha = m_DrawFillAlpha;
  this->m_DrawPointScale = m_DrawPointScale;
  this->m_DrawNormalScale = m_DrawNormalScale;
  this->m_DrawImpulseScale = m_DrawImpulseScale;
  this->m_DrawCapacity = m_DrawCapacity;
  this->m_DrawColors = m_DrawColors;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition::PhysicsWorldDefinition() {}
