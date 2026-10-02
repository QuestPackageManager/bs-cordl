#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics2D/PhysicsChainDefinition.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsShape_impl.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsChainDefinition_def.hpp"
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsChainDefinition._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsChainDefinition::*)()>(&::UnityEngine::LowLevelPhysics2D::PhysicsChainDefinition::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6fd60a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsChainDefinition>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsChainDefinition._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsChainDefinition::*)(bool)>(&::UnityEngine::LowLevelPhysics2D::PhysicsChainDefinition::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6fd18f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsChainDefinition>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsChainDefinition.get_defaultDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsChainDefinition (*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsChainDefinition::get_defaultDefinition)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6fd60d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsChainDefinition>(), { "get_defaultDefinition", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::LowLevelPhysics2D::PhysicsChainDefinition::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsChainDefinition>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsChainDefinition::_ctor(bool useSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsChainDefinition>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, useSettings);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsChainDefinition UnityEngine::LowLevelPhysics2D::PhysicsChainDefinition::get_defaultDefinition() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsChainDefinition>(), { "get_defaultDefinition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsChainDefinition>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_SurfaceMaterial", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsShape_SurfaceMaterial", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "m_ContactFilter", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_IsLoop", ty: "bool", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "m_TriggerEvents", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsChainDefinition::PhysicsChainDefinition(::UnityEngine::LowLevelPhysics2D::PhysicsShape_SurfaceMaterial m_SurfaceMaterial,
                                                                                           ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactFilter m_ContactFilter, bool m_IsLoop,
                                                                                           bool m_TriggerEvents) noexcept {
  this->m_SurfaceMaterial = m_SurfaceMaterial;
  this->m_ContactFilter = m_ContactFilter;
  this->m_IsLoop = m_IsLoop;
  this->m_TriggerEvents = m_TriggerEvents;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsChainDefinition::PhysicsChainDefinition() {}
