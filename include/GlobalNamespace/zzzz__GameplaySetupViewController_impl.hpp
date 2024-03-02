#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GameplaySetupViewController_def.hpp"
#include "GlobalNamespace/zzzz__ColorSchemesSettings_def.hpp"
#include "GlobalNamespace/zzzz__ColorsOverrideSettingsPanelController_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentOverrideSettingsPanelController_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiersPanelController_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__GameplaySetupViewController_def.hpp"
#include "GlobalNamespace/zzzz__IRefreshable_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSettingsPanelController_def.hpp"
#include "GlobalNamespace/zzzz__OverrideEnvironmentSettings_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSettingsPanelController_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "HMUI/zzzz__SegmentedControl_def.hpp"
#include "HMUI/zzzz__TextSegmentedControl_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__GameplaySetupViewController__Panel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameplaySetupViewController__Panel::*)(
    ::StringW, ::GlobalNamespace::IRefreshable*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::__GameplaySetupViewController__Panel::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x23b50ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameplaySetupViewController__Panel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IRefreshable*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__GameplaySetupViewController__Panel::__cordl_internal_get_title() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___title;
}
constexpr ::StringW const& GlobalNamespace::__GameplaySetupViewController__Panel::__cordl_internal_get_title() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___title;
}
constexpr void GlobalNamespace::__GameplaySetupViewController__Panel::__cordl_internal_set_title(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___title)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IRefreshable*& GlobalNamespace::__GameplaySetupViewController__Panel::__cordl_internal_get_refreshable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___refreshable;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IRefreshable*> const& GlobalNamespace::__GameplaySetupViewController__Panel::__cordl_internal_get_refreshable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___refreshable;
}
constexpr void GlobalNamespace::__GameplaySetupViewController__Panel::__cordl_internal_set_refreshable(::GlobalNamespace::IRefreshable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___refreshable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::__GameplaySetupViewController__Panel::__cordl_internal_get_gameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::__GameplaySetupViewController__Panel::__cordl_internal_get_gameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObject;
}
constexpr void GlobalNamespace::__GameplaySetupViewController__Panel::__cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gameObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__GameplaySetupViewController__Panel* GlobalNamespace::__GameplaySetupViewController__Panel::New_ctor(::StringW title, ::GlobalNamespace::IRefreshable* refreshable,
                                                                                                                                ::UnityEngine::GameObject* gameObject) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__GameplaySetupViewController__Panel*>(title, refreshable, gameObject));
}
inline void GlobalNamespace::__GameplaySetupViewController__Panel::_ctor(::StringW title, ::GlobalNamespace::IRefreshable* refreshable, ::UnityEngine::GameObject* gameObject) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameplaySetupViewController__Panel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IRefreshable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, title, refreshable, gameObject);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameplaySetupViewController__Panel::__GameplaySetupViewController__Panel() {}
//  Writing Method size for method: ::GlobalNamespace::GameplaySetupViewController.add_didChangeGameplayModifiersEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplaySetupViewController::*)(::System::Action*)>(
    &::GlobalNamespace::GameplaySetupViewController::add_didChangeGameplayModifiersEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23b3da8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplaySetupViewController*>::get(), "add_didChangeGameplayModifiersEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplaySetupViewController.remove_didChangeGameplayModifiersEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplaySetupViewController::*)(::System::Action*)>(
    &::GlobalNamespace::GameplaySetupViewController::remove_didChangeGameplayModifiersEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23b3e44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplaySetupViewController*>::get(), "remove_didChangeGameplayModifiersEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplaySetupViewController.get_playerSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerSpecificSettings* (::GlobalNamespace::GameplaySetupViewController::*)()>(
    &::GlobalNamespace::GameplaySetupViewController::get_playerSettings)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x23b3ee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplaySetupViewController*>::get(),
                                                                               "get_playerSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplaySetupViewController.get_gameplayModifiers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayModifiers* (::GlobalNamespace::GameplaySetupViewController::*)()>(
    &::GlobalNamespace::GameplaySetupViewController::get_gameplayModifiers)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23b42b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplaySetupViewController*>::get(),
                                                                               "get_gameplayModifiers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplaySetupViewController.get_environmentOverrideSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OverrideEnvironmentSettings* (::GlobalNamespace::GameplaySetupViewController::*)()>(
    &::GlobalNamespace::GameplaySetupViewController::get_environmentOverrideSettings)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x23b42cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplaySetupViewController*>::get(), "get_environmentOverrideSettings",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplaySetupViewController.get_colorSchemesSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ColorSchemesSettings* (::GlobalNamespace::GameplaySetupViewController::*)()>(
    &::GlobalNamespace::GameplaySetupViewController::get_colorSchemesSettings)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x23b42f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplaySetupViewController*>::get(),
                                                                               "get_colorSchemesSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplaySetupViewController.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplaySetupViewController::*)(
    bool, bool, bool, bool, ::GlobalNamespace::__PlayerSettingsPanelController__PlayerSettingsPanelLayout)>(&::GlobalNamespace::GameplaySetupViewController::Setup)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x23b4314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplaySetupViewController*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerSettingsPanelController__PlayerSettingsPanelLayout>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplaySetupViewController.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplaySetupViewController::*)()>(&::GlobalNamespace::GameplaySetupViewController::Init)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x23b43a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplaySetupViewController*>::get(), "Init",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplaySetupViewController.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplaySetupViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::GameplaySetupViewController::DidActivate)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x23b4ba4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplaySetupViewController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplaySetupViewController*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplaySetupViewController.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplaySetupViewController::*)()>(
    &::GlobalNamespace::GameplaySetupViewController::OnDisable)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x23b4db4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplaySetupViewController*>::get(),
                                                                               "OnDisable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplaySetupViewController.HandleSelectionSegmentedControlDidSelectCell
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplaySetupViewController::*)(::HMUI::SegmentedControl*, int32_t)>(
    &::GlobalNamespace::GameplaySetupViewController::HandleSelectionSegmentedControlDidSelectCell)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23b4ed0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplaySetupViewController*>::get(),
                                                 "HandleSelectionSegmentedControlDidSelectCell", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::SegmentedControl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplaySetupViewController.HandlePlayerSettingsPanelControllerDidChangePlayerSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplaySetupViewController::*)()>(
    &::GlobalNamespace::GameplaySetupViewController::HandlePlayerSettingsPanelControllerDidChangePlayerSettings)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x23b4f88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplaySetupViewController*>::get(),
                                                 "HandlePlayerSettingsPanelControllerDidChangePlayerSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplaySetupViewController.HandleGameplayModifiersPanelControllerDidChangeGameplayModifiers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplaySetupViewController::*)()>(
    &::GlobalNamespace::GameplaySetupViewController::HandleGameplayModifiersPanelControllerDidChangeGameplayModifiers)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x23b4fc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplaySetupViewController*>::get(),
                                    "HandleGameplayModifiersPanelControllerDidChangeGameplayModifiers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplaySetupViewController.SetActivePanel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplaySetupViewController::*)(int32_t)>(
    &::GlobalNamespace::GameplaySetupViewController::SetActivePanel)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23b4ed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplaySetupViewController*>::get(), "SetActivePanel",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplaySetupViewController.RefreshContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplaySetupViewController::*)()>(
    &::GlobalNamespace::GameplaySetupViewController::RefreshContent)> {
  constexpr static std::size_t size = 0x72c;
  constexpr static std::size_t addrs = 0x23b4454;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplaySetupViewController*>::get(),
                                                                               "RefreshContent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplaySetupViewController.RefreshActivePanel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplaySetupViewController::*)()>(
    &::GlobalNamespace::GameplaySetupViewController::RefreshActivePanel)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x23b5014;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplaySetupViewController*>::get(),
                                                                               "RefreshActivePanel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplaySetupViewController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplaySetupViewController::*)()>(&::GlobalNamespace::GameplaySetupViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23b5128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplaySetupViewController*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HMUI::TextSegmentedControl>& GlobalNamespace::GameplaySetupViewController::__cordl_internal_get__selectionSegmentedControl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectionSegmentedControl;
}
constexpr ::UnityW<::HMUI::TextSegmentedControl> const& GlobalNamespace::GameplaySetupViewController::__cordl_internal_get__selectionSegmentedControl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectionSegmentedControl;
}
constexpr void GlobalNamespace::GameplaySetupViewController::__cordl_internal_set__selectionSegmentedControl(::UnityW<::HMUI::TextSegmentedControl> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____selectionSegmentedControl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PlayerSettingsPanelController>& GlobalNamespace::GameplaySetupViewController::__cordl_internal_get__playerSettingsPanelController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerSettingsPanelController;
}
constexpr ::UnityW<::GlobalNamespace::PlayerSettingsPanelController> const& GlobalNamespace::GameplaySetupViewController::__cordl_internal_get__playerSettingsPanelController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerSettingsPanelController;
}
constexpr void GlobalNamespace::GameplaySetupViewController::__cordl_internal_set__playerSettingsPanelController(::UnityW<::GlobalNamespace::PlayerSettingsPanelController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerSettingsPanelController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifiersPanelController>& GlobalNamespace::GameplaySetupViewController::__cordl_internal_get__gameplayModifiersPanelController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiersPanelController;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifiersPanelController> const& GlobalNamespace::GameplaySetupViewController::__cordl_internal_get__gameplayModifiersPanelController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiersPanelController;
}
constexpr void GlobalNamespace::GameplaySetupViewController::__cordl_internal_set__gameplayModifiersPanelController(::UnityW<::GlobalNamespace::GameplayModifiersPanelController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameplayModifiersPanelController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::EnvironmentOverrideSettingsPanelController>& GlobalNamespace::GameplaySetupViewController::__cordl_internal_get__environmentOverrideSettingsPanelController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentOverrideSettingsPanelController;
}
constexpr ::UnityW<::GlobalNamespace::EnvironmentOverrideSettingsPanelController> const&
GlobalNamespace::GameplaySetupViewController::__cordl_internal_get__environmentOverrideSettingsPanelController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentOverrideSettingsPanelController;
}
constexpr void
GlobalNamespace::GameplaySetupViewController::__cordl_internal_set__environmentOverrideSettingsPanelController(::UnityW<::GlobalNamespace::EnvironmentOverrideSettingsPanelController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____environmentOverrideSettingsPanelController)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::ColorsOverrideSettingsPanelController>& GlobalNamespace::GameplaySetupViewController::__cordl_internal_get__colorsOverrideSettingsPanelController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorsOverrideSettingsPanelController;
}
constexpr ::UnityW<::GlobalNamespace::ColorsOverrideSettingsPanelController> const& GlobalNamespace::GameplaySetupViewController::__cordl_internal_get__colorsOverrideSettingsPanelController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorsOverrideSettingsPanelController;
}
constexpr void GlobalNamespace::GameplaySetupViewController::__cordl_internal_set__colorsOverrideSettingsPanelController(::UnityW<::GlobalNamespace::ColorsOverrideSettingsPanelController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorsOverrideSettingsPanelController)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerSettingsPanelController>& GlobalNamespace::GameplaySetupViewController::__cordl_internal_get__multiplayerSettingsPanelController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSettingsPanelController;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerSettingsPanelController> const& GlobalNamespace::GameplaySetupViewController::__cordl_internal_get__multiplayerSettingsPanelController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSettingsPanelController;
}
constexpr void GlobalNamespace::GameplaySetupViewController::__cordl_internal_set__multiplayerSettingsPanelController(::UnityW<::GlobalNamespace::MultiplayerSettingsPanelController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerSettingsPanelController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& GlobalNamespace::GameplaySetupViewController::__cordl_internal_get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& GlobalNamespace::GameplaySetupViewController::__cordl_internal_get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::GameplaySetupViewController::__cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerDataModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::GameplaySetupViewController::__cordl_internal_get_didChangeGameplayModifiersEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangeGameplayModifiersEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::GameplaySetupViewController::__cordl_internal_get_didChangeGameplayModifiersEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangeGameplayModifiersEvent;
}
constexpr void GlobalNamespace::GameplaySetupViewController::__cordl_internal_set_didChangeGameplayModifiersEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didChangeGameplayModifiersEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__GameplaySetupViewController__Panel*>*& GlobalNamespace::GameplaySetupViewController::__cordl_internal_get__panels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____panels;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__GameplaySetupViewController__Panel*>*> const&
GlobalNamespace::GameplaySetupViewController::__cordl_internal_get__panels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____panels;
}
constexpr void GlobalNamespace::GameplaySetupViewController::__cordl_internal_set__panels(::System::Collections::Generic::List_1<::GlobalNamespace::__GameplaySetupViewController__Panel*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____panels)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::GameplaySetupViewController::__cordl_internal_get__activePanelIdx() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activePanelIdx;
}
constexpr int32_t const& GlobalNamespace::GameplaySetupViewController::__cordl_internal_get__activePanelIdx() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activePanelIdx;
}
constexpr void GlobalNamespace::GameplaySetupViewController::__cordl_internal_set__activePanelIdx(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activePanelIdx = value;
}
constexpr bool& GlobalNamespace::GameplaySetupViewController::__cordl_internal_get__showModifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showModifiers;
}
constexpr bool const& GlobalNamespace::GameplaySetupViewController::__cordl_internal_get__showModifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showModifiers;
}
constexpr void GlobalNamespace::GameplaySetupViewController::__cordl_internal_set__showModifiers(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showModifiers = value;
}
constexpr bool& GlobalNamespace::GameplaySetupViewController::__cordl_internal_get__showEnvironmentOverrideSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showEnvironmentOverrideSettings;
}
constexpr bool const& GlobalNamespace::GameplaySetupViewController::__cordl_internal_get__showEnvironmentOverrideSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showEnvironmentOverrideSettings;
}
constexpr void GlobalNamespace::GameplaySetupViewController::__cordl_internal_set__showEnvironmentOverrideSettings(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showEnvironmentOverrideSettings = value;
}
constexpr bool& GlobalNamespace::GameplaySetupViewController::__cordl_internal_get__showColorSchemesSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showColorSchemesSettings;
}
constexpr bool const& GlobalNamespace::GameplaySetupViewController::__cordl_internal_get__showColorSchemesSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showColorSchemesSettings;
}
constexpr void GlobalNamespace::GameplaySetupViewController::__cordl_internal_set__showColorSchemesSettings(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showColorSchemesSettings = value;
}
constexpr bool& GlobalNamespace::GameplaySetupViewController::__cordl_internal_get__showMultiplayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showMultiplayer;
}
constexpr bool const& GlobalNamespace::GameplaySetupViewController::__cordl_internal_get__showMultiplayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showMultiplayer;
}
constexpr void GlobalNamespace::GameplaySetupViewController::__cordl_internal_set__showMultiplayer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showMultiplayer = value;
}
constexpr bool& GlobalNamespace::GameplaySetupViewController::__cordl_internal_get__shouldRefreshContent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shouldRefreshContent;
}
constexpr bool const& GlobalNamespace::GameplaySetupViewController::__cordl_internal_get__shouldRefreshContent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shouldRefreshContent;
}
constexpr void GlobalNamespace::GameplaySetupViewController::__cordl_internal_set__shouldRefreshContent(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shouldRefreshContent = value;
}
constexpr bool& GlobalNamespace::GameplaySetupViewController::__cordl_internal_get__isInitialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInitialized;
}
constexpr bool const& GlobalNamespace::GameplaySetupViewController::__cordl_internal_get__isInitialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInitialized;
}
constexpr void GlobalNamespace::GameplaySetupViewController::__cordl_internal_set__isInitialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isInitialized = value;
}
inline void GlobalNamespace::GameplaySetupViewController::add_didChangeGameplayModifiersEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplaySetupViewController*>::get(), "add_didChangeGameplayModifiersEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplaySetupViewController::remove_didChangeGameplayModifiersEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplaySetupViewController*>::get(), "remove_didChangeGameplayModifiersEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::PlayerSpecificSettings* GlobalNamespace::GameplaySetupViewController::get_playerSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplaySetupViewController*>::get(),
                                                                             "get_playerSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerSpecificSettings*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayModifiers* GlobalNamespace::GameplaySetupViewController::get_gameplayModifiers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplaySetupViewController*>::get(),
                                                                             "get_gameplayModifiers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayModifiers*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OverrideEnvironmentSettings* GlobalNamespace::GameplaySetupViewController::get_environmentOverrideSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplaySetupViewController*>::get(),
                                                                             "get_environmentOverrideSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OverrideEnvironmentSettings*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ColorSchemesSettings* GlobalNamespace::GameplaySetupViewController::get_colorSchemesSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplaySetupViewController*>::get(),
                                                                             "get_colorSchemesSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorSchemesSettings*, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameplaySetupViewController::Setup(bool showModifiers, bool showEnvironmentOverrideSettings, bool showColorSchemesSettings, bool showMultiplayer,
                                                                ::GlobalNamespace::__PlayerSettingsPanelController__PlayerSettingsPanelLayout playerSettingsPanelLayout) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplaySetupViewController*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerSettingsPanelController__PlayerSettingsPanelLayout>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, showModifiers, showEnvironmentOverrideSettings, showColorSchemesSettings, showMultiplayer,
                                                          playerSettingsPanelLayout);
}
inline void GlobalNamespace::GameplaySetupViewController::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplaySetupViewController*>::get(), "Init",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameplaySetupViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplaySetupViewController*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::GameplaySetupViewController::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplaySetupViewController*>::get(),
                                                                             "OnDisable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameplaySetupViewController::HandleSelectionSegmentedControlDidSelectCell(::HMUI::SegmentedControl* segmentedControl, int32_t cellIdx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplaySetupViewController*>::get(),
                                               "HandleSelectionSegmentedControlDidSelectCell", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::SegmentedControl*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, segmentedControl, cellIdx);
}
inline void GlobalNamespace::GameplaySetupViewController::HandlePlayerSettingsPanelControllerDidChangePlayerSettings() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplaySetupViewController*>::get(),
                                               "HandlePlayerSettingsPanelControllerDidChangePlayerSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameplaySetupViewController::HandleGameplayModifiersPanelControllerDidChangeGameplayModifiers() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplaySetupViewController*>::get(),
                                  "HandleGameplayModifiersPanelControllerDidChangeGameplayModifiers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameplaySetupViewController::SetActivePanel(int32_t panelIdx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplaySetupViewController*>::get(), "SetActivePanel",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, panelIdx);
}
inline void GlobalNamespace::GameplaySetupViewController::RefreshContent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplaySetupViewController*>::get(),
                                                                             "RefreshContent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameplaySetupViewController::RefreshActivePanel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplaySetupViewController*>::get(),
                                                                             "RefreshActivePanel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplaySetupViewController* GlobalNamespace::GameplaySetupViewController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::GameplaySetupViewController*>());
}
inline void GlobalNamespace::GameplaySetupViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplaySetupViewController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplaySetupViewController::GameplaySetupViewController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
