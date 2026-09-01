#pragma once
// IWYU pragma private; include "GlobalNamespace\OtherSettingsViewController.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__OtherSettingsViewController_def.hpp"
#include "GlobalNamespace/zzzz__NamedIntListSettingsController_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OtherSettingsViewController.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OtherSettingsViewController::*)(bool, bool, bool)>(&::GlobalNamespace::OtherSettingsViewController::DidActivate)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x5a214ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OtherSettingsViewController*>(), { ::i2c::class_of<::GlobalNamespace::OtherSettingsViewController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OtherSettingsViewController.DidDeactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OtherSettingsViewController::*)(bool, bool)>(&::GlobalNamespace::OtherSettingsViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5a21760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OtherSettingsViewController*>(), { ::i2c::class_of<::GlobalNamespace::OtherSettingsViewController*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OtherSettingsViewController.HandlePausePressDurationChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OtherSettingsViewController::*)(int32_t)>(
    &::GlobalNamespace::OtherSettingsViewController::HandlePausePressDurationChanged)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a21920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OtherSettingsViewController*>(), { "HandlePausePressDurationChanged", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OtherSettingsViewController.HandleHideExplicitChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OtherSettingsViewController::*)(bool)>(&::GlobalNamespace::OtherSettingsViewController::HandleHideExplicitChanged)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5a21938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OtherSettingsViewController*>(), { "HandleHideExplicitChanged", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OtherSettingsViewController.UpdateExplicitContentHiddenWarningVisibility
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OtherSettingsViewController::*)()>(
    &::GlobalNamespace::OtherSettingsViewController::UpdateExplicitContentHiddenWarningVisibility)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5a21714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OtherSettingsViewController*>(), { "UpdateExplicitContentHiddenWarningVisibility", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OtherSettingsViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OtherSettingsViewController::*)()>(&::GlobalNamespace::OtherSettingsViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a21968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OtherSettingsViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::OtherSettingsViewController::__cordl_internal_get__hideExplicitWarning() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hideExplicitWarning;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::OtherSettingsViewController::__cordl_internal_get__hideExplicitWarning() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hideExplicitWarning;
}
constexpr void GlobalNamespace::OtherSettingsViewController::__cordl_internal_set__hideExplicitWarning(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hideExplicitWarning = value;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& GlobalNamespace::OtherSettingsViewController::__cordl_internal_get__hideExplicitToggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hideExplicitToggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& GlobalNamespace::OtherSettingsViewController::__cordl_internal_get__hideExplicitToggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hideExplicitToggle;
}
constexpr void GlobalNamespace::OtherSettingsViewController::__cordl_internal_set__hideExplicitToggle(::UnityW<::UnityEngine::UI::Toggle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hideExplicitToggle = value;
}
constexpr ::UnityW<::GlobalNamespace::NamedIntListSettingsController>& GlobalNamespace::OtherSettingsViewController::__cordl_internal_get__pausePressDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pausePressDuration;
}
constexpr ::UnityW<::GlobalNamespace::NamedIntListSettingsController> const& GlobalNamespace::OtherSettingsViewController::__cordl_internal_get__pausePressDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pausePressDuration;
}
constexpr void GlobalNamespace::OtherSettingsViewController::__cordl_internal_set__pausePressDuration(::UnityW<::GlobalNamespace::NamedIntListSettingsController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pausePressDuration = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& GlobalNamespace::OtherSettingsViewController::__cordl_internal_get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& GlobalNamespace::OtherSettingsViewController::__cordl_internal_get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::OtherSettingsViewController::__cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerDataModel = value;
}
constexpr ::GlobalNamespace::SettingsManager*& GlobalNamespace::OtherSettingsViewController::__cordl_internal_get__settingsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr ::GlobalNamespace::SettingsManager* const& GlobalNamespace::OtherSettingsViewController::__cordl_internal_get__settingsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr void GlobalNamespace::OtherSettingsViewController::__cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settingsManager = value;
}
constexpr bool& GlobalNamespace::OtherSettingsViewController::__cordl_internal_get__explicitToggleAvailable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explicitToggleAvailable;
}
constexpr bool const& GlobalNamespace::OtherSettingsViewController::__cordl_internal_get__explicitToggleAvailable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explicitToggleAvailable;
}
constexpr void GlobalNamespace::OtherSettingsViewController::__cordl_internal_set__explicitToggleAvailable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____explicitToggleAvailable = value;
}
inline void GlobalNamespace::OtherSettingsViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OtherSettingsViewController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::OtherSettingsViewController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OtherSettingsViewController*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::OtherSettingsViewController::HandlePausePressDurationChanged(int32_t newValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OtherSettingsViewController*>(), { "HandlePausePressDurationChanged", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newValue);
}
inline void GlobalNamespace::OtherSettingsViewController::HandleHideExplicitChanged(bool newValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OtherSettingsViewController*>(), { "HandleHideExplicitChanged", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newValue);
}
inline void GlobalNamespace::OtherSettingsViewController::UpdateExplicitContentHiddenWarningVisibility() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OtherSettingsViewController*>(), { "UpdateExplicitContentHiddenWarningVisibility", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OtherSettingsViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OtherSettingsViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OtherSettingsViewController* GlobalNamespace::OtherSettingsViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OtherSettingsViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OtherSettingsViewController::OtherSettingsViewController() {}
