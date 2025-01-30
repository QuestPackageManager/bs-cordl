#pragma once
// IWYU pragma private; include "GlobalNamespace/ServerSettingsViewController.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__ServerSettingsViewController_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
#include "HMUI/zzzz__InputFieldView_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ServerSettingsViewController.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ServerSettingsViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::ServerSettingsViewController::DidActivate)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x3afdbf0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ServerSettingsViewController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ServerSettingsViewController*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerSettingsViewController.DidDeactivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ServerSettingsViewController::*)(bool, bool)>(
    &::GlobalNamespace::ServerSettingsViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3afddcc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ServerSettingsViewController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ServerSettingsViewController*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerSettingsViewController.HandleEnabledChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ServerSettingsViewController::*)(bool)>(
    &::GlobalNamespace::ServerSettingsViewController::HandleEnabledChanged)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3afde24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ServerSettingsViewController*>::get(), "HandleEnabledChanged",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerSettingsViewController.HandleHostnameChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ServerSettingsViewController::*)(::HMUI::InputFieldView*)>(
    &::GlobalNamespace::ServerSettingsViewController::HandleHostnameChanged)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3afde44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ServerSettingsViewController*>::get(), "HandleHostnameChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::InputFieldView*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerSettingsViewController.HandleForceGameliftChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ServerSettingsViewController::*)(bool)>(
    &::GlobalNamespace::ServerSettingsViewController::HandleForceGameliftChanged)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3afde6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ServerSettingsViewController*>::get(), "HandleForceGameliftChanged",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerSettingsViewController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ServerSettingsViewController::*)()>(
    &::GlobalNamespace::ServerSettingsViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3afde8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ServerSettingsViewController*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Toggle>& GlobalNamespace::ServerSettingsViewController::__cordl_internal_get__enabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enabled;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& GlobalNamespace::ServerSettingsViewController::__cordl_internal_get__enabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enabled;
}
constexpr void GlobalNamespace::ServerSettingsViewController::__cordl_internal_set__enabled(::UnityW<::UnityEngine::UI::Toggle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____enabled)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::InputFieldView>& GlobalNamespace::ServerSettingsViewController::__cordl_internal_get__hostName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hostName;
}
constexpr ::UnityW<::HMUI::InputFieldView> const& GlobalNamespace::ServerSettingsViewController::__cordl_internal_get__hostName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hostName;
}
constexpr void GlobalNamespace::ServerSettingsViewController::__cordl_internal_set__hostName(::UnityW<::HMUI::InputFieldView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hostName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& GlobalNamespace::ServerSettingsViewController::__cordl_internal_get__forceGameLift() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____forceGameLift;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& GlobalNamespace::ServerSettingsViewController::__cordl_internal_get__forceGameLift() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____forceGameLift;
}
constexpr void GlobalNamespace::ServerSettingsViewController::__cordl_internal_set__forceGameLift(::UnityW<::UnityEngine::UI::Toggle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____forceGameLift)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SettingsManager*& GlobalNamespace::ServerSettingsViewController::__cordl_internal_get__settingsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr ::GlobalNamespace::SettingsManager* const& GlobalNamespace::ServerSettingsViewController::__cordl_internal_get__settingsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr void GlobalNamespace::ServerSettingsViewController::__cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____settingsManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::ServerSettingsViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ServerSettingsViewController*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::ServerSettingsViewController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ServerSettingsViewController*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::ServerSettingsViewController::HandleEnabledChanged(bool newValue) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ServerSettingsViewController*>::get(), "HandleEnabledChanged",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newValue);
}
inline void GlobalNamespace::ServerSettingsViewController::HandleHostnameChanged(::HMUI::InputFieldView* inputView) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ServerSettingsViewController*>::get(), "HandleHostnameChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::InputFieldView*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputView);
}
inline void GlobalNamespace::ServerSettingsViewController::HandleForceGameliftChanged(bool newValue) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ServerSettingsViewController*>::get(), "HandleForceGameliftChanged",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newValue);
}
inline void GlobalNamespace::ServerSettingsViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ServerSettingsViewController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ServerSettingsViewController* GlobalNamespace::ServerSettingsViewController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ServerSettingsViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ServerSettingsViewController::ServerSettingsViewController() {}
