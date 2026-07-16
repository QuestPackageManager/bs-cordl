#pragma once
// IWYU pragma private; include "GlobalNamespace/ServerSettingsViewController.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__ServerSettingsViewController_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
#include "HMUI/zzzz__InputFieldView_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ServerSettingsViewController.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ServerSettingsViewController::*)(bool, bool, bool)>(&::GlobalNamespace::ServerSettingsViewController::DidActivate)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x5a1bca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerSettingsViewController*>(), { ::i2c::class_of<::GlobalNamespace::ServerSettingsViewController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerSettingsViewController.DidDeactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ServerSettingsViewController::*)(bool, bool)>(&::GlobalNamespace::ServerSettingsViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5a1bf08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerSettingsViewController*>(), { ::i2c::class_of<::GlobalNamespace::ServerSettingsViewController*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerSettingsViewController.HandleEnabledChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ServerSettingsViewController::*)(bool)>(&::GlobalNamespace::ServerSettingsViewController::HandleEnabledChanged)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a1bf6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerSettingsViewController*>(), { "HandleEnabledChanged", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerSettingsViewController.HandleHostnameChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ServerSettingsViewController::*)(::HMUI::InputFieldView*)>(
    &::GlobalNamespace::ServerSettingsViewController::HandleHostnameChanged)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a1bf88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerSettingsViewController*>(), { "HandleHostnameChanged", {}, { ::i2c::type_of<::HMUI::InputFieldView*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerSettingsViewController.HandleForceGameliftChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ServerSettingsViewController::*)(bool)>(&::GlobalNamespace::ServerSettingsViewController::HandleForceGameliftChanged)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a1bfb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerSettingsViewController*>(), { "HandleForceGameliftChanged", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerSettingsViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ServerSettingsViewController::*)()>(&::GlobalNamespace::ServerSettingsViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a1bfcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerSettingsViewController*>(), { ".ctor", {}, {} })));
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
  this->____enabled = value;
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
  this->____hostName = value;
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
  this->____forceGameLift = value;
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
  this->____settingsManager = value;
}
inline void GlobalNamespace::ServerSettingsViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ServerSettingsViewController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::ServerSettingsViewController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ServerSettingsViewController*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::ServerSettingsViewController::HandleEnabledChanged(bool newValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerSettingsViewController*>(), { "HandleEnabledChanged", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newValue);
}
inline void GlobalNamespace::ServerSettingsViewController::HandleHostnameChanged(::HMUI::InputFieldView* inputView) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerSettingsViewController*>(), { "HandleHostnameChanged", {}, { ::i2c::type_of<::HMUI::InputFieldView*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputView);
}
inline void GlobalNamespace::ServerSettingsViewController::HandleForceGameliftChanged(bool newValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerSettingsViewController*>(), { "HandleForceGameliftChanged", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newValue);
}
inline void GlobalNamespace::ServerSettingsViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerSettingsViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ServerSettingsViewController* GlobalNamespace::ServerSettingsViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ServerSettingsViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ServerSettingsViewController::ServerSettingsViewController() {}
