#pragma once
#include "UnityEngine/UIElements/zzzz__BaseRuntimePanel_impl.hpp"
#include "UnityEngine/UIElements/zzzz__RuntimePanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventDispatcher_def.hpp"
#include "UnityEngine/UIElements/zzzz__PanelSettings_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::RuntimePanel.get_panelSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::UIElements::PanelSettings> (::UnityEngine::UIElements::RuntimePanel::*)()>(
    &::UnityEngine::UIElements::RuntimePanel::get_panelSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f260d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RuntimePanel*>::get(),
                                                                               "get_panelSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RuntimePanel.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::RuntimePanel* (*)(::UnityEngine::ScriptableObject*)>(
    &::UnityEngine::UIElements::RuntimePanel::Create)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2f260dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RuntimePanel*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScriptableObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RuntimePanel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::RuntimePanel::*)(::UnityEngine::ScriptableObject*)>(
    &::UnityEngine::UIElements::RuntimePanel::_ctor)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x2f2613c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RuntimePanel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScriptableObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RuntimePanel.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::RuntimePanel::*)()>(&::UnityEngine::UIElements::RuntimePanel::Update)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2f263b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RuntimePanel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RuntimePanel*>::get(), 50));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UIElements::PanelSettings>& UnityEngine::UIElements::RuntimePanel::__cordl_internal_get_m_PanelSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PanelSettings;
}
constexpr ::UnityW<::UnityEngine::UIElements::PanelSettings> const& UnityEngine::UIElements::RuntimePanel::__cordl_internal_get_m_PanelSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PanelSettings;
}
constexpr void UnityEngine::UIElements::RuntimePanel::__cordl_internal_set_m_PanelSettings(::UnityW<::UnityEngine::UIElements::PanelSettings> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PanelSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::RuntimePanel::setStaticF_s_EventDispatcher(::UnityEngine::UIElements::EventDispatcher* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::EventDispatcher*, "s_EventDispatcher",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RuntimePanel*>::get>(
      std::forward<::UnityEngine::UIElements::EventDispatcher*>(value));
}
inline ::UnityEngine::UIElements::EventDispatcher* UnityEngine::UIElements::RuntimePanel::getStaticF_s_EventDispatcher() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::EventDispatcher*, "s_EventDispatcher",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RuntimePanel*>::get>();
}
inline ::UnityW<::UnityEngine::UIElements::PanelSettings> UnityEngine::UIElements::RuntimePanel::get_panelSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RuntimePanel*>::get(),
                                                                             "get_panelSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UIElements::PanelSettings>, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::RuntimePanel* UnityEngine::UIElements::RuntimePanel::Create(::UnityEngine::ScriptableObject* ownerObject) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RuntimePanel*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScriptableObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::RuntimePanel*, false>(nullptr, ___internal_method, ownerObject);
}
inline ::UnityEngine::UIElements::RuntimePanel* UnityEngine::UIElements::RuntimePanel::New_ctor(::UnityEngine::ScriptableObject* ownerObject) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::RuntimePanel*>(ownerObject));
}
inline void UnityEngine::UIElements::RuntimePanel::_ctor(::UnityEngine::ScriptableObject* ownerObject) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RuntimePanel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScriptableObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ownerObject);
}
inline void UnityEngine::UIElements::RuntimePanel::Update() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RuntimePanel*>::get(), 50)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::RuntimePanel::RuntimePanel() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
