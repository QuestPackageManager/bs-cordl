#pragma once
// IWYU pragma private; include "GlobalNamespace\SmoothCameraSettingsViewController.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__SmoothCameraSettingsViewController_def.hpp"
#include "GlobalNamespace/zzzz__FormattedFloatListSettingsController_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
#include "HMUI/zzzz__ToggleBinder_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SmoothCameraSettingsViewController.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SmoothCameraSettingsViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::SmoothCameraSettingsViewController::DidActivate)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5a228b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SmoothCameraSettingsViewController*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::SmoothCameraSettingsViewController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmoothCameraSettingsViewController.DidDeactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SmoothCameraSettingsViewController::*)(bool, bool)>(
    &::GlobalNamespace::SmoothCameraSettingsViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5a22a58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SmoothCameraSettingsViewController*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::SmoothCameraSettingsViewController*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmoothCameraSettingsViewController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SmoothCameraSettingsViewController::*)()>(&::GlobalNamespace::SmoothCameraSettingsViewController::OnDestroy)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a22ae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SmoothCameraSettingsViewController*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::SmoothCameraSettingsViewController*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmoothCameraSettingsViewController.HandleEnabledChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SmoothCameraSettingsViewController::*)(bool)>(
    &::GlobalNamespace::SmoothCameraSettingsViewController::HandleEnabledChanged)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a22b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SmoothCameraSettingsViewController*>(), { "HandleEnabledChanged", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmoothCameraSettingsViewController.HandleFovChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SmoothCameraSettingsViewController::*)(::GlobalNamespace::FormattedFloatListSettingsController*, float_t)>(
    &::GlobalNamespace::SmoothCameraSettingsViewController::HandleFovChanged)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a22b28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SmoothCameraSettingsViewController*>(),
                                                             { "HandleFovChanged", {}, { ::i2c::type_of<::GlobalNamespace::FormattedFloatListSettingsController*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmoothCameraSettingsViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SmoothCameraSettingsViewController::*)()>(&::GlobalNamespace::SmoothCameraSettingsViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a22b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SmoothCameraSettingsViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Toggle>& GlobalNamespace::SmoothCameraSettingsViewController::__cordl_internal_get__enabledToggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enabledToggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& GlobalNamespace::SmoothCameraSettingsViewController::__cordl_internal_get__enabledToggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enabledToggle;
}
constexpr void GlobalNamespace::SmoothCameraSettingsViewController::__cordl_internal_set__enabledToggle(::UnityW<::UnityEngine::UI::Toggle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enabledToggle = value;
}
constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>& GlobalNamespace::SmoothCameraSettingsViewController::__cordl_internal_get__fovSettingsList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fovSettingsList;
}
constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> const& GlobalNamespace::SmoothCameraSettingsViewController::__cordl_internal_get__fovSettingsList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fovSettingsList;
}
constexpr void GlobalNamespace::SmoothCameraSettingsViewController::__cordl_internal_set__fovSettingsList(::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fovSettingsList = value;
}
constexpr ::GlobalNamespace::SettingsManager*& GlobalNamespace::SmoothCameraSettingsViewController::__cordl_internal_get__settingsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr ::GlobalNamespace::SettingsManager* const& GlobalNamespace::SmoothCameraSettingsViewController::__cordl_internal_get__settingsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr void GlobalNamespace::SmoothCameraSettingsViewController::__cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settingsManager = value;
}
constexpr ::HMUI::ToggleBinder*& GlobalNamespace::SmoothCameraSettingsViewController::__cordl_internal_get__toggleBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggleBinder;
}
constexpr ::HMUI::ToggleBinder* const& GlobalNamespace::SmoothCameraSettingsViewController::__cordl_internal_get__toggleBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggleBinder;
}
constexpr void GlobalNamespace::SmoothCameraSettingsViewController::__cordl_internal_set__toggleBinder(::HMUI::ToggleBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____toggleBinder = value;
}
inline void GlobalNamespace::SmoothCameraSettingsViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SmoothCameraSettingsViewController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::SmoothCameraSettingsViewController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SmoothCameraSettingsViewController*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::SmoothCameraSettingsViewController::OnDestroy() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SmoothCameraSettingsViewController*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SmoothCameraSettingsViewController::HandleEnabledChanged(bool newValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SmoothCameraSettingsViewController*>(), { "HandleEnabledChanged", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newValue);
}
inline void GlobalNamespace::SmoothCameraSettingsViewController::HandleFovChanged(::GlobalNamespace::FormattedFloatListSettingsController* controller, float_t newValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SmoothCameraSettingsViewController*>(),
                                                           { "HandleFovChanged", {}, { ::i2c::type_of<::GlobalNamespace::FormattedFloatListSettingsController*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller, newValue);
}
inline void GlobalNamespace::SmoothCameraSettingsViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SmoothCameraSettingsViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SmoothCameraSettingsViewController* GlobalNamespace::SmoothCameraSettingsViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SmoothCameraSettingsViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SmoothCameraSettingsViewController::SmoothCameraSettingsViewController() {}
