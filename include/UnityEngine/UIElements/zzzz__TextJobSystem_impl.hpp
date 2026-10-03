#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TextJobSystem.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TextJobSystem_def.hpp"
#include "UnityEngine/UIElements/zzzz__ATGTextJobSystem_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualElementPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__UITKTextJobSystem_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::TextJobSystem.GenerateText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextJobSystem::*)(Il2CppObject*, ::UnityEngine::UIElements::TextElement*)>(
    &::UnityEngine::UIElements::TextJobSystem::GenerateText)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x713048c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextJobSystem*>(),
                                                             { "GenerateText", {}, { ::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::UnityEngine::UIElements::TextElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextJobSystem.PrepareShapingBeforeLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextJobSystem::*)(::UnityEngine::UIElements::BaseVisualElementPanel*)>(
    &::UnityEngine::UIElements::TextJobSystem::PrepareShapingBeforeLayout)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x7130870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextJobSystem*>(),
                                                             { "PrepareShapingBeforeLayout", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextJobSystem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextJobSystem::*)()>(&::UnityEngine::UIElements::TextJobSystem::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x71308f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextJobSystem*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UITKTextJobSystem*& UnityEngine::UIElements::TextJobSystem::__cordl_internal_get_m_UITKTextJobSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UITKTextJobSystem;
}
constexpr ::UnityEngine::UIElements::UITKTextJobSystem* const& UnityEngine::UIElements::TextJobSystem::__cordl_internal_get_m_UITKTextJobSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UITKTextJobSystem;
}
constexpr void UnityEngine::UIElements::TextJobSystem::__cordl_internal_set_m_UITKTextJobSystem(::UnityEngine::UIElements::UITKTextJobSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UITKTextJobSystem = value;
}
constexpr ::UnityEngine::UIElements::ATGTextJobSystem*& UnityEngine::UIElements::TextJobSystem::__cordl_internal_get_m_ATGTextJobSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ATGTextJobSystem;
}
constexpr ::UnityEngine::UIElements::ATGTextJobSystem* const& UnityEngine::UIElements::TextJobSystem::__cordl_internal_get_m_ATGTextJobSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ATGTextJobSystem;
}
constexpr void UnityEngine::UIElements::TextJobSystem::__cordl_internal_set_m_ATGTextJobSystem(::UnityEngine::UIElements::ATGTextJobSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ATGTextJobSystem = value;
}
inline void UnityEngine::UIElements::TextJobSystem::GenerateText(Il2CppObject* mgc, ::UnityEngine::UIElements::TextElement* textElement) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextJobSystem*>(),
                                                           { "GenerateText", {}, { ::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::UnityEngine::UIElements::TextElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mgc, textElement);
}
inline void UnityEngine::UIElements::TextJobSystem::PrepareShapingBeforeLayout(::UnityEngine::UIElements::BaseVisualElementPanel* panel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextJobSystem*>(),
                                                           { "PrepareShapingBeforeLayout", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, panel);
}
inline void UnityEngine::UIElements::TextJobSystem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextJobSystem*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::TextJobSystem* UnityEngine::UIElements::TextJobSystem::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::TextJobSystem*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TextJobSystem::TextJobSystem() {}
