#pragma once
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeHierarchyTrackerUpdater_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeUpdater_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeHierarchyTrackerUpdater_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeHierarchyTrackerUpdater_def.hpp"
#include "UnityEngine/UIElements/zzzz__HierarchyChangeType_def.hpp"
#include "UnityEngine/UIElements/zzzz__VersionChangeType_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::__BaseVisualTreeHierarchyTrackerUpdater__State::__BaseVisualTreeHierarchyTrackerUpdater__State(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__BaseVisualTreeHierarchyTrackerUpdater__State::__BaseVisualTreeHierarchyTrackerUpdater__State() {}
constexpr ::UnityEngine::UIElements::__BaseVisualTreeHierarchyTrackerUpdater__State UnityEngine::UIElements::__BaseVisualTreeHierarchyTrackerUpdater__State::Waiting{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::__BaseVisualTreeHierarchyTrackerUpdater__State UnityEngine::UIElements::__BaseVisualTreeHierarchyTrackerUpdater__State::TrackingAddOrMove{ static_cast<int32_t>(
    0x1) };
constexpr ::UnityEngine::UIElements::__BaseVisualTreeHierarchyTrackerUpdater__State UnityEngine::UIElements::__BaseVisualTreeHierarchyTrackerUpdater__State::TrackingRemove{ static_cast<int32_t>(
    0x2) };
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater.OnHierarchyChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::HierarchyChangeType)>(&::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::OnHierarchyChange)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater.OnVersionChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VersionChangeType)>(&::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::OnVersionChanged)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2dba6bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::*)()>(
    &::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::Update)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2dba88c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater.ProcessNewChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::*)(
    ::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::ProcessNewChange)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2dba6e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater*>::get(), "ProcessNewChange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater.ProcessAddOrMove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::*)(
    ::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::ProcessAddOrMove)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2dba7d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater*>::get(), "ProcessAddOrMove", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater.ProcessRemove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::*)(
    ::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::ProcessRemove)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2dba76c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater*>::get(), "ProcessRemove", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::*)()>(
    &::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2dba920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::__BaseVisualTreeHierarchyTrackerUpdater__State& UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::__cordl_internal_get_m_State() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_State;
}
constexpr ::UnityEngine::UIElements::__BaseVisualTreeHierarchyTrackerUpdater__State const& UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::__cordl_internal_get_m_State() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_State;
}
constexpr void UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::__cordl_internal_set_m_State(::UnityEngine::UIElements::__BaseVisualTreeHierarchyTrackerUpdater__State value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_State = value;
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::__cordl_internal_get_m_CurrentChangeElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentChangeElement;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const&
UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::__cordl_internal_get_m_CurrentChangeElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentChangeElement;
}
constexpr void UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::__cordl_internal_set_m_CurrentChangeElement(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CurrentChangeElement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::__cordl_internal_get_m_CurrentChangeParent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentChangeParent;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const&
UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::__cordl_internal_get_m_CurrentChangeParent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentChangeParent;
}
constexpr void UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::__cordl_internal_set_m_CurrentChangeParent(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CurrentChangeParent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::OnHierarchyChange(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::HierarchyChangeType type) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, type);
}
inline void UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::OnVersionChanged(::UnityEngine::UIElements::VisualElement* ve,
                                                                                             ::UnityEngine::UIElements::VersionChangeType versionChangeType) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, versionChangeType);
}
inline void UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::Update() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::ProcessNewChange(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater*>::get(), "ProcessNewChange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::ProcessAddOrMove(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater*>::get(), "ProcessAddOrMove", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::ProcessRemove(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater*>::get(), "ProcessRemove", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve);
}
inline ::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater* UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater*>());
}
inline void UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::BaseVisualTreeHierarchyTrackerUpdater() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
