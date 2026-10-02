#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics2D/PhysicsShapeDefinition.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsShape_impl.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsShapeDefinition_def.hpp"
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition::*)()>(&::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6fda074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition::*)(bool)>(&::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6fd1870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition.get_defaultDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition (*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition::get_defaultDefinition)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6fda0a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition>(), { "get_defaultDefinition", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition::_ctor(bool useSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, useSettings);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition::get_defaultDefinition() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition>(), { "get_defaultDefinition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "contactFilter", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "surfaceMaterial", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsShape_SurfaceMaterial", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Density", ty: "float_t",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_IsTrigger", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_TriggerEvents", ty:
// "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ContactEvents", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_HitEvents",
// ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ContactFilterCallbacks", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "m_PreSolveCallbacks", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_StartStaticContacts", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None
// }, CppParam { name: "m_StartMassUpdate", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "moverData", ty:
// "::UnityEngine::LowLevelPhysics2D::PhysicsShape_MoverData", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition::PhysicsShapeDefinition(::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter contactFilter,
                                                                                           ::UnityEngine::LowLevelPhysics2D::PhysicsShape_SurfaceMaterial surfaceMaterial, float_t m_Density,
                                                                                           bool m_IsTrigger, bool m_TriggerEvents, bool m_ContactEvents, bool m_HitEvents,
                                                                                           bool m_ContactFilterCallbacks, bool m_PreSolveCallbacks, bool m_StartStaticContacts, bool m_StartMassUpdate,
                                                                                           ::UnityEngine::LowLevelPhysics2D::PhysicsShape_MoverData moverData) noexcept {
  this->contactFilter = contactFilter;
  this->surfaceMaterial = surfaceMaterial;
  this->m_Density = m_Density;
  this->m_IsTrigger = m_IsTrigger;
  this->m_TriggerEvents = m_TriggerEvents;
  this->m_ContactEvents = m_ContactEvents;
  this->m_HitEvents = m_HitEvents;
  this->m_ContactFilterCallbacks = m_ContactFilterCallbacks;
  this->m_PreSolveCallbacks = m_PreSolveCallbacks;
  this->m_StartStaticContacts = m_StartStaticContacts;
  this->m_StartMassUpdate = m_StartMassUpdate;
  this->moverData = moverData;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition::PhysicsShapeDefinition() {}
