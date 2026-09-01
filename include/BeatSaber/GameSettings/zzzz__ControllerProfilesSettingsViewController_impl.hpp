#pragma once
// IWYU pragma private; include "BeatSaber\GameSettings\ControllerProfilesSettingsViewController.hpp"
#include "BeatSaber/GameSettings/zzzz__ControllersTransformSettings_impl.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "UnityEngine/zzzz__CanvasGroup_impl.hpp"
#include "BeatSaber/GameSettings/zzzz__ControllerProfilesSettingsViewController_def.hpp"
#include "BeatSaber/GameSettings/zzzz__ControllerProfile_def.hpp"
#include "BeatSaber/GameSettings/zzzz__ControllerProfilesModel_def.hpp"
#include "HMUI/zzzz__DropdownWithTableView_def.hpp"
#include "HMUI/zzzz__SimpleTextDropdown_def.hpp"
#include "HMUI/zzzz__ToggleBinder_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesSettingsViewController.add_onRequestSelectProfileToCopyFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllerProfilesSettingsViewController::*)(
    ::System::Action_1<::ArrayW<::System::ValueTuple_2<::StringW, int32_t>>>*)>(&::BeatSaber::GameSettings::ControllerProfilesSettingsViewController::add_onRequestSelectProfileToCopyFrom)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3293b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesSettingsViewController*>(),
                                                { "add_onRequestSelectProfileToCopyFrom", {}, { ::i2c::type_of<::System::Action_1<::ArrayW<::System::ValueTuple_2<::StringW, int32_t>>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesSettingsViewController.remove_onRequestSelectProfileToCopyFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllerProfilesSettingsViewController::*)(
    ::System::Action_1<::ArrayW<::System::ValueTuple_2<::StringW, int32_t>>>*)>(&::BeatSaber::GameSettings::ControllerProfilesSettingsViewController::remove_onRequestSelectProfileToCopyFrom)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3293bd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesSettingsViewController*>(),
                                                { "remove_onRequestSelectProfileToCopyFrom", {}, { ::i2c::type_of<::System::Action_1<::ArrayW<::System::ValueTuple_2<::StringW, int32_t>>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesSettingsViewController.CopyProfileResponse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllerProfilesSettingsViewController::*)(bool, int32_t)>(
    &::BeatSaber::GameSettings::ControllerProfilesSettingsViewController::CopyProfileResponse)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3293c94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesSettingsViewController*>(),
                                                                                           { "CopyProfileResponse", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesSettingsViewController.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllerProfilesSettingsViewController::*)(bool, bool, bool)>(
    &::BeatSaber::GameSettings::ControllerProfilesSettingsViewController::DidActivate)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x3293d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesSettingsViewController*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesSettingsViewController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesSettingsViewController.DidDeactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllerProfilesSettingsViewController::*)(bool, bool)>(
    &::BeatSaber::GameSettings::ControllerProfilesSettingsViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3294704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesSettingsViewController*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesSettingsViewController*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesSettingsViewController.GetSelectedProfile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::GameSettings::ControllerProfile* (::BeatSaber::GameSettings::ControllerProfilesSettingsViewController::*)()>(
    &::BeatSaber::GameSettings::ControllerProfilesSettingsViewController::GetSelectedProfile)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x329477c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesSettingsViewController*>(), { "GetSelectedProfile", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesSettingsViewController.HandlingToggleChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllerProfilesSettingsViewController::*)(bool)>(
    &::BeatSaber::GameSettings::ControllerProfilesSettingsViewController::HandlingToggleChanged)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3294790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesSettingsViewController*>(), { "HandlingToggleChanged", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesSettingsViewController.ProfileSelected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllerProfilesSettingsViewController::*)(::HMUI::DropdownWithTableView*, int32_t)>(
    &::BeatSaber::GameSettings::ControllerProfilesSettingsViewController::ProfileSelected)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x32947bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesSettingsViewController*>(),
                                                             { "ProfileSelected", {}, { ::i2c::type_of<::HMUI::DropdownWithTableView*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesSettingsViewController.CopyFormLeftToRight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllerProfilesSettingsViewController::*)()>(
    &::BeatSaber::GameSettings::ControllerProfilesSettingsViewController::CopyFormLeftToRight)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x32947e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesSettingsViewController*>(), { "CopyFormLeftToRight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesSettingsViewController.CopyFromRightToLeft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllerProfilesSettingsViewController::*)()>(
    &::BeatSaber::GameSettings::ControllerProfilesSettingsViewController::CopyFromRightToLeft)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3294824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesSettingsViewController*>(), { "CopyFromRightToLeft", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesSettingsViewController.ShowCopyFromProfile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllerProfilesSettingsViewController::*)()>(
    &::BeatSaber::GameSettings::ControllerProfilesSettingsViewController::ShowCopyFromProfile)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x3294860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesSettingsViewController*>(), { "ShowCopyFromProfile", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesSettingsViewController.GetControllerProfileDisplayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::BeatSaber::GameSettings::ControllerProfile*)>(
    &::BeatSaber::GameSettings::ControllerProfilesSettingsViewController::GetControllerProfileDisplayName)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3294ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesSettingsViewController*>(),
                                                             { "GetControllerProfileDisplayName", {}, { ::i2c::type_of<::BeatSaber::GameSettings::ControllerProfile*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesSettingsViewController.CopyValuesFromOtherProfile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllerProfilesSettingsViewController::*)(int32_t)>(
    &::BeatSaber::GameSettings::ControllerProfilesSettingsViewController::CopyValuesFromOtherProfile)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3293ca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesSettingsViewController*>(),
                                                                                           { "CopyValuesFromOtherProfile", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesSettingsViewController.RefreshView
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllerProfilesSettingsViewController::*)()>(
    &::BeatSaber::GameSettings::ControllerProfilesSettingsViewController::RefreshView)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3294604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesSettingsViewController*>(), { "RefreshView", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesSettingsViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllerProfilesSettingsViewController::*)()>(
    &::BeatSaber::GameSettings::ControllerProfilesSettingsViewController::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3294cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesSettingsViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HMUI::SimpleTextDropdown>& BeatSaber::GameSettings::ControllerProfilesSettingsViewController::__cordl_internal_get__profilesDropdown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____profilesDropdown;
}
constexpr ::UnityW<::HMUI::SimpleTextDropdown> const& BeatSaber::GameSettings::ControllerProfilesSettingsViewController::__cordl_internal_get__profilesDropdown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____profilesDropdown;
}
constexpr void BeatSaber::GameSettings::ControllerProfilesSettingsViewController::__cordl_internal_set__profilesDropdown(::UnityW<::HMUI::SimpleTextDropdown> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____profilesDropdown = value;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& BeatSaber::GameSettings::ControllerProfilesSettingsViewController::__cordl_internal_get__handlingToggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handlingToggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& BeatSaber::GameSettings::ControllerProfilesSettingsViewController::__cordl_internal_get__handlingToggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handlingToggle;
}
constexpr void BeatSaber::GameSettings::ControllerProfilesSettingsViewController::__cordl_internal_set__handlingToggle(::UnityW<::UnityEngine::UI::Toggle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____handlingToggle = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::CanvasGroup>>& BeatSaber::GameSettings::ControllerProfilesSettingsViewController::__cordl_internal_get__interactableCanvasGroups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____interactableCanvasGroups;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::CanvasGroup>> const& BeatSaber::GameSettings::ControllerProfilesSettingsViewController::__cordl_internal_get__interactableCanvasGroups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____interactableCanvasGroups;
}
constexpr void BeatSaber::GameSettings::ControllerProfilesSettingsViewController::__cordl_internal_set__interactableCanvasGroups(::ArrayW<::UnityW<::UnityEngine::CanvasGroup>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____interactableCanvasGroups = value;
}
constexpr ::ArrayW<::UnityW<::BeatSaber::GameSettings::ControllersTransformSettings>>&
BeatSaber::GameSettings::ControllerProfilesSettingsViewController::__cordl_internal_get__transformSettingsViewControllers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transformSettingsViewControllers;
}
constexpr ::ArrayW<::UnityW<::BeatSaber::GameSettings::ControllersTransformSettings>> const&
BeatSaber::GameSettings::ControllerProfilesSettingsViewController::__cordl_internal_get__transformSettingsViewControllers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transformSettingsViewControllers;
}
constexpr void BeatSaber::GameSettings::ControllerProfilesSettingsViewController::__cordl_internal_set__transformSettingsViewControllers(
    ::ArrayW<::UnityW<::BeatSaber::GameSettings::ControllersTransformSettings>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____transformSettingsViewControllers = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& BeatSaber::GameSettings::ControllerProfilesSettingsViewController::__cordl_internal_get__buttonsContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonsContainer;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& BeatSaber::GameSettings::ControllerProfilesSettingsViewController::__cordl_internal_get__buttonsContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonsContainer;
}
constexpr void BeatSaber::GameSettings::ControllerProfilesSettingsViewController::__cordl_internal_set__buttonsContainer(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buttonsContainer = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& BeatSaber::GameSettings::ControllerProfilesSettingsViewController::__cordl_internal_get__copyFromLeftButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____copyFromLeftButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& BeatSaber::GameSettings::ControllerProfilesSettingsViewController::__cordl_internal_get__copyFromLeftButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____copyFromLeftButton;
}
constexpr void BeatSaber::GameSettings::ControllerProfilesSettingsViewController::__cordl_internal_set__copyFromLeftButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____copyFromLeftButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& BeatSaber::GameSettings::ControllerProfilesSettingsViewController::__cordl_internal_get__copyFromRightButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____copyFromRightButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& BeatSaber::GameSettings::ControllerProfilesSettingsViewController::__cordl_internal_get__copyFromRightButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____copyFromRightButton;
}
constexpr void BeatSaber::GameSettings::ControllerProfilesSettingsViewController::__cordl_internal_set__copyFromRightButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____copyFromRightButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& BeatSaber::GameSettings::ControllerProfilesSettingsViewController::__cordl_internal_get__copyFromProfileButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____copyFromProfileButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& BeatSaber::GameSettings::ControllerProfilesSettingsViewController::__cordl_internal_get__copyFromProfileButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____copyFromProfileButton;
}
constexpr void BeatSaber::GameSettings::ControllerProfilesSettingsViewController::__cordl_internal_set__copyFromProfileButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____copyFromProfileButton = value;
}
constexpr ::BeatSaber::GameSettings::ControllerProfilesModel*& BeatSaber::GameSettings::ControllerProfilesSettingsViewController::__cordl_internal_get__profileModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____profileModel;
}
constexpr ::BeatSaber::GameSettings::ControllerProfilesModel* const& BeatSaber::GameSettings::ControllerProfilesSettingsViewController::__cordl_internal_get__profileModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____profileModel;
}
constexpr void BeatSaber::GameSettings::ControllerProfilesSettingsViewController::__cordl_internal_set__profileModel(::BeatSaber::GameSettings::ControllerProfilesModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____profileModel = value;
}
constexpr ::HMUI::ToggleBinder*& BeatSaber::GameSettings::ControllerProfilesSettingsViewController::__cordl_internal_get__toggleBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggleBinder;
}
constexpr ::HMUI::ToggleBinder* const& BeatSaber::GameSettings::ControllerProfilesSettingsViewController::__cordl_internal_get__toggleBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggleBinder;
}
constexpr void BeatSaber::GameSettings::ControllerProfilesSettingsViewController::__cordl_internal_set__toggleBinder(::HMUI::ToggleBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____toggleBinder = value;
}
constexpr ::System::Action_1<::ArrayW<::System::ValueTuple_2<::StringW, int32_t>>>*&
BeatSaber::GameSettings::ControllerProfilesSettingsViewController::__cordl_internal_get_onRequestSelectProfileToCopyFrom() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onRequestSelectProfileToCopyFrom;
}
constexpr ::System::Action_1<::ArrayW<::System::ValueTuple_2<::StringW, int32_t>>>* const&
BeatSaber::GameSettings::ControllerProfilesSettingsViewController::__cordl_internal_get_onRequestSelectProfileToCopyFrom() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onRequestSelectProfileToCopyFrom;
}
constexpr void BeatSaber::GameSettings::ControllerProfilesSettingsViewController::__cordl_internal_set_onRequestSelectProfileToCopyFrom(
    ::System::Action_1<::ArrayW<::System::ValueTuple_2<::StringW, int32_t>>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onRequestSelectProfileToCopyFrom = value;
}
inline void BeatSaber::GameSettings::ControllerProfilesSettingsViewController::add_onRequestSelectProfileToCopyFrom(::System::Action_1<::ArrayW<::System::ValueTuple_2<::StringW, int32_t>>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesSettingsViewController*>(),
                                              { "add_onRequestSelectProfileToCopyFrom", {}, { ::i2c::type_of<::System::Action_1<::ArrayW<::System::ValueTuple_2<::StringW, int32_t>>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void
BeatSaber::GameSettings::ControllerProfilesSettingsViewController::remove_onRequestSelectProfileToCopyFrom(::System::Action_1<::ArrayW<::System::ValueTuple_2<::StringW, int32_t>>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesSettingsViewController*>(),
                                              { "remove_onRequestSelectProfileToCopyFrom", {}, { ::i2c::type_of<::System::Action_1<::ArrayW<::System::ValueTuple_2<::StringW, int32_t>>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::GameSettings::ControllerProfilesSettingsViewController::CopyProfileResponse(bool wasCanceled, int32_t selectedDropdownIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesSettingsViewController*>(),
                                                                                         { "CopyProfileResponse", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wasCanceled, selectedDropdownIndex);
}
inline void BeatSaber::GameSettings::ControllerProfilesSettingsViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesSettingsViewController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void BeatSaber::GameSettings::ControllerProfilesSettingsViewController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesSettingsViewController*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline ::BeatSaber::GameSettings::ControllerProfile* BeatSaber::GameSettings::ControllerProfilesSettingsViewController::GetSelectedProfile() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesSettingsViewController*>(), { "GetSelectedProfile", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::GameSettings::ControllerProfile*>(this, ___internal_method);
}
inline void BeatSaber::GameSettings::ControllerProfilesSettingsViewController::HandlingToggleChanged(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesSettingsViewController*>(), { "HandlingToggleChanged", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::GameSettings::ControllerProfilesSettingsViewController::ProfileSelected(::HMUI::DropdownWithTableView* view, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesSettingsViewController*>(),
                                                                                         { "ProfileSelected", {}, { ::i2c::type_of<::HMUI::DropdownWithTableView*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, view, index);
}
inline void BeatSaber::GameSettings::ControllerProfilesSettingsViewController::CopyFormLeftToRight() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesSettingsViewController*>(), { "CopyFormLeftToRight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::GameSettings::ControllerProfilesSettingsViewController::CopyFromRightToLeft() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesSettingsViewController*>(), { "CopyFromRightToLeft", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::GameSettings::ControllerProfilesSettingsViewController::ShowCopyFromProfile() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesSettingsViewController*>(), { "ShowCopyFromProfile", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW BeatSaber::GameSettings::ControllerProfilesSettingsViewController::GetControllerProfileDisplayName(::BeatSaber::GameSettings::ControllerProfile* profile) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesSettingsViewController*>(),
                                                           { "GetControllerProfileDisplayName", {}, { ::i2c::type_of<::BeatSaber::GameSettings::ControllerProfile*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, profile);
}
inline void BeatSaber::GameSettings::ControllerProfilesSettingsViewController::CopyValuesFromOtherProfile(int32_t otherProfileIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesSettingsViewController*>(), { "CopyValuesFromOtherProfile", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherProfileIndex);
}
inline void BeatSaber::GameSettings::ControllerProfilesSettingsViewController::RefreshView() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesSettingsViewController*>(), { "RefreshView", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::GameSettings::ControllerProfilesSettingsViewController::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesSettingsViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::GameSettings::ControllerProfilesSettingsViewController* BeatSaber::GameSettings::ControllerProfilesSettingsViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::GameSettings::ControllerProfilesSettingsViewController*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::GameSettings::ControllerProfilesSettingsViewController::ControllerProfilesSettingsViewController() {}
