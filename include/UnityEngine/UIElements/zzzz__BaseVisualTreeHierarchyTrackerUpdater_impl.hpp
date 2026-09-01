#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\BaseVisualTreeHierarchyTrackerUpdater.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeUpdater_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeHierarchyTrackerUpdater_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeHierarchyTrackerUpdater_def.hpp"
#include "UnityEngine/UIElements/zzzz__HierarchyChangeType_def.hpp"
#include "UnityEngine/UIElements/zzzz__VersionChangeType_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater_State::BaseVisualTreeHierarchyTrackerUpdater_State(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater_State::BaseVisualTreeHierarchyTrackerUpdater_State() {}
constexpr ::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater_State UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater_State::Waiting{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater_State UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater_State::TrackingAddOrMove{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater_State UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater_State::TrackingRemove{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater.OnHierarchyChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::HierarchyChangeType)>(&::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::OnHierarchyChange)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater.OnVersionChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VersionChangeType)>(&::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::OnVersionChanged)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6cce31c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::*)()>(
    &::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::Update)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6cce4bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater.ProcessNewChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::ProcessNewChange)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6cce348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater*>(),
                                                                                           { "ProcessNewChange", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater.ProcessAddOrMove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::ProcessAddOrMove)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6cce400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater*>(),
                                                                                           { "ProcessAddOrMove", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater.ProcessRemove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::ProcessRemove)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6cce3a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater*>(),
                                                                                           { "ProcessRemove", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::*)()>(
    &::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cce554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater_State& UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::__cordl_internal_get_m_State() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_State;
}
constexpr ::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater_State const& UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::__cordl_internal_get_m_State() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_State;
}
constexpr void UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::__cordl_internal_set_m_State(::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater_State value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_State = value;
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::__cordl_internal_get_m_CurrentChangeElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentChangeElement;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::__cordl_internal_get_m_CurrentChangeElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentChangeElement;
}
constexpr void UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::__cordl_internal_set_m_CurrentChangeElement(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentChangeElement = value;
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::__cordl_internal_get_m_CurrentChangeParent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentChangeParent;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::__cordl_internal_get_m_CurrentChangeParent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentChangeParent;
}
constexpr void UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::__cordl_internal_set_m_CurrentChangeParent(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentChangeParent = value;
}
inline void UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::OnHierarchyChange(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::HierarchyChangeType type) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, type);
}
inline void UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::OnVersionChanged(::UnityEngine::UIElements::VisualElement* ve,
                                                                                             ::UnityEngine::UIElements::VersionChangeType versionChangeType) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, versionChangeType);
}
inline void UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::Update() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::ProcessNewChange(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater*>(),
                                                                                         { "ProcessNewChange", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::ProcessAddOrMove(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater*>(),
                                                                                         { "ProcessAddOrMove", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::ProcessRemove(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater*>(),
                                                                                         { "ProcessRemove", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater* UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::BaseVisualTreeHierarchyTrackerUpdater() {}
