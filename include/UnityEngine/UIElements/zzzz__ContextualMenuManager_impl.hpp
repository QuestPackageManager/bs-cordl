#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ContextualMenuManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ContextualMenuManager_def.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownMenu_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__IEventHandler_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::ContextualMenuManager.get_displayMenuHandledOSX
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::ContextualMenuManager::*)()>(
    &::UnityEngine::UIElements::ContextualMenuManager::get_displayMenuHandledOSX)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x497fd8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ContextualMenuManager*>::get(),
                                                                               "get_displayMenuHandledOSX", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ContextualMenuManager.set_displayMenuHandledOSX
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ContextualMenuManager::*)(bool)>(
    &::UnityEngine::UIElements::ContextualMenuManager::set_displayMenuHandledOSX)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x497fd94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ContextualMenuManager*>::get(), "set_displayMenuHandledOSX",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ContextualMenuManager.DisplayMenuIfEventMatches
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ContextualMenuManager::*)(
    ::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::IEventHandler*)>(&::UnityEngine::UIElements::ContextualMenuManager::DisplayMenuIfEventMatches)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ContextualMenuManager*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ContextualMenuManager*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ContextualMenuManager.DisplayMenu
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ContextualMenuManager::*)(
    ::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::IEventHandler*)>(&::UnityEngine::UIElements::ContextualMenuManager::DisplayMenu)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x497fda0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ContextualMenuManager*>::get(), "DisplayMenu", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ContextualMenuManager.DoDisplayMenu
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ContextualMenuManager::*)(
    ::UnityEngine::UIElements::DropdownMenu*, ::UnityEngine::UIElements::EventBase*)>(&::UnityEngine::UIElements::ContextualMenuManager::DoDisplayMenu)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ContextualMenuManager*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ContextualMenuManager*>::get(), 5));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::UIElements::ContextualMenuManager::__cordl_internal_get__displayMenuHandledOSX_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayMenuHandledOSX_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::ContextualMenuManager::__cordl_internal_get__displayMenuHandledOSX_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayMenuHandledOSX_k__BackingField;
}
constexpr void UnityEngine::UIElements::ContextualMenuManager::__cordl_internal_set__displayMenuHandledOSX_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____displayMenuHandledOSX_k__BackingField = value;
}
inline bool UnityEngine::UIElements::ContextualMenuManager::get_displayMenuHandledOSX() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ContextualMenuManager*>::get(),
                                                                             "get_displayMenuHandledOSX", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ContextualMenuManager::set_displayMenuHandledOSX(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ContextualMenuManager*>::get(), "set_displayMenuHandledOSX",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::ContextualMenuManager::DisplayMenuIfEventMatches(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::IEventHandler* eventHandler) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ContextualMenuManager*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt, eventHandler);
}
inline void UnityEngine::UIElements::ContextualMenuManager::DisplayMenu(::UnityEngine::UIElements::EventBase* triggerEvent, ::UnityEngine::UIElements::IEventHandler* target) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ContextualMenuManager*>::get(), "DisplayMenu", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, triggerEvent, target);
}
inline void UnityEngine::UIElements::ContextualMenuManager::DoDisplayMenu(::UnityEngine::UIElements::DropdownMenu* menu, ::UnityEngine::UIElements::EventBase* triggerEvent) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ContextualMenuManager*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, menu, triggerEvent);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ContextualMenuManager::ContextualMenuManager() {}
