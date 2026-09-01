#pragma once
// IWYU pragma private; include "GlobalNamespace\GameplaySetupViewController.hpp"
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
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameplaySetupViewController_Panel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplaySetupViewController_Panel::*)(::StringW, ::GlobalNamespace::IRefreshable*, ::UnityEngine::GameObject*)>(
    &::GlobalNamespace::GameplaySetupViewController_Panel::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5946f40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplaySetupViewController_Panel*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::IRefreshable*>(), ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::GameplaySetupViewController_Panel::__cordl_internal_get_title() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___title;
}
constexpr ::StringW const& GlobalNamespace::GameplaySetupViewController_Panel::__cordl_internal_get_title() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___title;
}
constexpr void GlobalNamespace::GameplaySetupViewController_Panel::__cordl_internal_set_title(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___title = value;
}
constexpr ::GlobalNamespace::IRefreshable*& GlobalNamespace::GameplaySetupViewController_Panel::__cordl_internal_get_refreshable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___refreshable;
}
constexpr ::GlobalNamespace::IRefreshable* const& GlobalNamespace::GameplaySetupViewController_Panel::__cordl_internal_get_refreshable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___refreshable;
}
constexpr void GlobalNamespace::GameplaySetupViewController_Panel::__cordl_internal_set_refreshable(::GlobalNamespace::IRefreshable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___refreshable = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GameplaySetupViewController_Panel::__cordl_internal_get_gameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GameplaySetupViewController_Panel::__cordl_internal_get_gameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObject;
}
constexpr void GlobalNamespace::GameplaySetupViewController_Panel::__cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameObject = value;
}
inline void GlobalNamespace::GameplaySetupViewController_Panel::_ctor(::StringW title, ::GlobalNamespace::IRefreshable* refreshable, ::UnityEngine::GameObject* gameObject) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplaySetupViewController_Panel*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::IRefreshable*>(), ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, title, refreshable, gameObject);
}
inline ::GlobalNamespace::GameplaySetupViewController_Panel* GlobalNamespace::GameplaySetupViewController_Panel::New_ctor(::StringW title, ::GlobalNamespace::IRefreshable* refreshable,
                                                                                                                          ::UnityEngine::GameObject* gameObject) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameplaySetupViewController_Panel*>(title, refreshable, gameObject));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplaySetupViewController_Panel::GameplaySetupViewController_Panel() {}
//  Writing Method size for method: ::GlobalNamespace::GameplaySetupViewController.get_playerSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerSpecificSettings* (::GlobalNamespace::GameplaySetupViewController::*)()>(
    &::GlobalNamespace::GameplaySetupViewController::get_playerSettings)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5938590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplaySetupViewController*>(), { "get_playerSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplaySetupViewController.get_gameplayModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameplayModifiers* (::GlobalNamespace::GameplaySetupViewController::*)()>(
    &::GlobalNamespace::GameplaySetupViewController::get_gameplayModifiers)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59385e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplaySetupViewController*>(), { "get_gameplayModifiers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplaySetupViewController.get_environmentOverrideSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OverrideEnvironmentSettings* (::GlobalNamespace::GameplaySetupViewController::*)()>(
    &::GlobalNamespace::GameplaySetupViewController::get_environmentOverrideSettings)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5938f9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplaySetupViewController*>(), { "get_environmentOverrideSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplaySetupViewController.get_colorSchemesSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ColorSchemesSettings* (::GlobalNamespace::GameplaySetupViewController::*)()>(
    &::GlobalNamespace::GameplaySetupViewController::get_colorSchemesSettings)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5938fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplaySetupViewController*>(), { "get_colorSchemesSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplaySetupViewController.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplaySetupViewController::*)(
    bool, bool, bool, bool, ::GlobalNamespace::PlayerSettingsPanelController_PlayerSettingsPanelLayout)>(&::GlobalNamespace::GameplaySetupViewController::Setup)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x59390c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplaySetupViewController*>(),
                                                                                           { "Setup",
                                                                                             {},
                                                                                             { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                                                                               ::i2c::type_of<::GlobalNamespace::PlayerSettingsPanelController_PlayerSettingsPanelLayout>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplaySetupViewController.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplaySetupViewController::*)()>(&::GlobalNamespace::GameplaySetupViewController::Init)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5946154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplaySetupViewController*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplaySetupViewController.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplaySetupViewController::*)(bool, bool, bool)>(&::GlobalNamespace::GameplaySetupViewController::DidActivate)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5946968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplaySetupViewController*>(), { ::i2c::class_of<::GlobalNamespace::GameplaySetupViewController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplaySetupViewController.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplaySetupViewController::*)()>(&::GlobalNamespace::GameplaySetupViewController::OnDisable)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5946bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplaySetupViewController*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplaySetupViewController.SetIsInteractable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplaySetupViewController::*)(bool)>(&::GlobalNamespace::GameplaySetupViewController::SetIsInteractable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x59468b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplaySetupViewController*>(), { "SetIsInteractable", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplaySetupViewController.HandleSelectionSegmentedControlDidSelectCell
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplaySetupViewController::*)(::HMUI::SegmentedControl*, int32_t)>(
    &::GlobalNamespace::GameplaySetupViewController::HandleSelectionSegmentedControlDidSelectCell)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5946d20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplaySetupViewController*>(),
                                                             { "HandleSelectionSegmentedControlDidSelectCell", {}, { ::i2c::type_of<::HMUI::SegmentedControl*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplaySetupViewController.HandlePlayerSettingsPanelControllerDidChangePlayerSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplaySetupViewController::*)()>(
    &::GlobalNamespace::GameplaySetupViewController::HandlePlayerSettingsPanelControllerDidChangePlayerSettings)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5946de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplaySetupViewController*>(), { "HandlePlayerSettingsPanelControllerDidChangePlayerSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplaySetupViewController.HandleGameplayModifiersPanelControllerDidChangeGameplayModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplaySetupViewController::*)()>(
    &::GlobalNamespace::GameplaySetupViewController::HandleGameplayModifiersPanelControllerDidChangeGameplayModifiers)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5946e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplaySetupViewController*>(), { "HandleGameplayModifiersPanelControllerDidChangeGameplayModifiers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplaySetupViewController.SetActivePanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplaySetupViewController::*)(int32_t)>(&::GlobalNamespace::GameplaySetupViewController::SetActivePanel)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5946d28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplaySetupViewController*>(), { "SetActivePanel", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplaySetupViewController.RefreshContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplaySetupViewController::*)()>(&::GlobalNamespace::GameplaySetupViewController::RefreshContent)> {
  constexpr static std::size_t size = 0x6bc;
  constexpr static std::size_t addrs = 0x59461fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplaySetupViewController*>(), { "RefreshContent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplaySetupViewController.RefreshActivePanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplaySetupViewController::*)()>(&::GlobalNamespace::GameplaySetupViewController::RefreshActivePanel)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5946e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplaySetupViewController*>(), { "RefreshActivePanel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplaySetupViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplaySetupViewController::*)()>(&::GlobalNamespace::GameplaySetupViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5946f4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplaySetupViewController*>(), { ".ctor", {}, {} })));
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
  this->____selectionSegmentedControl = value;
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
  this->____playerSettingsPanelController = value;
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
  this->____gameplayModifiersPanelController = value;
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
  this->____environmentOverrideSettingsPanelController = value;
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
  this->____colorsOverrideSettingsPanelController = value;
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
  this->____multiplayerSettingsPanelController = value;
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
  this->____playerDataModel = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameplaySetupViewController_Panel*>*& GlobalNamespace::GameplaySetupViewController::__cordl_internal_get__panels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____panels;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameplaySetupViewController_Panel*>* const& GlobalNamespace::GameplaySetupViewController::__cordl_internal_get__panels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____panels;
}
constexpr void GlobalNamespace::GameplaySetupViewController::__cordl_internal_set__panels(::System::Collections::Generic::List_1<::GlobalNamespace::GameplaySetupViewController_Panel*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____panels = value;
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
inline ::GlobalNamespace::PlayerSpecificSettings* GlobalNamespace::GameplaySetupViewController::get_playerSettings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplaySetupViewController*>(), { "get_playerSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerSpecificSettings*>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayModifiers* GlobalNamespace::GameplaySetupViewController::get_gameplayModifiers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplaySetupViewController*>(), { "get_gameplayModifiers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayModifiers*>(this, ___internal_method);
}
inline ::GlobalNamespace::OverrideEnvironmentSettings* GlobalNamespace::GameplaySetupViewController::get_environmentOverrideSettings() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplaySetupViewController*>(), { "get_environmentOverrideSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OverrideEnvironmentSettings*>(this, ___internal_method);
}
inline ::GlobalNamespace::ColorSchemesSettings* GlobalNamespace::GameplaySetupViewController::get_colorSchemesSettings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplaySetupViewController*>(), { "get_colorSchemesSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorSchemesSettings*>(this, ___internal_method);
}
inline void GlobalNamespace::GameplaySetupViewController::Setup(bool showModifiers, bool showEnvironmentOverrideSettings, bool showColorSchemesSettings, bool showMultiplayer,
                                                                ::GlobalNamespace::PlayerSettingsPanelController_PlayerSettingsPanelLayout playerSettingsPanelLayout) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplaySetupViewController*>(),
                                                                                         { "Setup",
                                                                                           {},
                                                                                           { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                                                                             ::i2c::type_of<::GlobalNamespace::PlayerSettingsPanelController_PlayerSettingsPanelLayout>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, showModifiers, showEnvironmentOverrideSettings, showColorSchemesSettings, showMultiplayer, playerSettingsPanelLayout);
}
inline void GlobalNamespace::GameplaySetupViewController::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplaySetupViewController*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameplaySetupViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameplaySetupViewController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::GameplaySetupViewController::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplaySetupViewController*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameplaySetupViewController::SetIsInteractable(bool interactable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplaySetupViewController*>(), { "SetIsInteractable", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void GlobalNamespace::GameplaySetupViewController::HandleSelectionSegmentedControlDidSelectCell(::HMUI::SegmentedControl* segmentedControl, int32_t cellIdx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplaySetupViewController*>(),
                                                           { "HandleSelectionSegmentedControlDidSelectCell", {}, { ::i2c::type_of<::HMUI::SegmentedControl*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, segmentedControl, cellIdx);
}
inline void GlobalNamespace::GameplaySetupViewController::HandlePlayerSettingsPanelControllerDidChangePlayerSettings() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplaySetupViewController*>(), { "HandlePlayerSettingsPanelControllerDidChangePlayerSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameplaySetupViewController::HandleGameplayModifiersPanelControllerDidChangeGameplayModifiers() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplaySetupViewController*>(), { "HandleGameplayModifiersPanelControllerDidChangeGameplayModifiers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameplaySetupViewController::SetActivePanel(int32_t panelIdx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplaySetupViewController*>(), { "SetActivePanel", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, panelIdx);
}
inline void GlobalNamespace::GameplaySetupViewController::RefreshContent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplaySetupViewController*>(), { "RefreshContent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameplaySetupViewController::RefreshActivePanel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplaySetupViewController*>(), { "RefreshActivePanel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameplaySetupViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplaySetupViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplaySetupViewController* GlobalNamespace::GameplaySetupViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameplaySetupViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplaySetupViewController::GameplaySetupViewController() {}
