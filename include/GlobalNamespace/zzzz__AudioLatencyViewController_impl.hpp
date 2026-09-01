#pragma once
// IWYU pragma private; include "GlobalNamespace\AudioLatencyViewController.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__AudioLatencyViewController_def.hpp"
#include "GlobalNamespace/zzzz__AudioManager_def.hpp"
#include "GlobalNamespace/zzzz__FormattedFloatListSettingsController_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
#include "GlobalNamespace/zzzz__SongPreviewPlayer_def.hpp"
#include "GlobalNamespace/zzzz__VisualMetronome_def.hpp"
#include "HMUI/zzzz__RangeValuesTextSlider_def.hpp"
#include "HMUI/zzzz__ToggleBinder_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioLatencyViewController.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioLatencyViewController::*)(bool, bool, bool)>(&::GlobalNamespace::AudioLatencyViewController::DidActivate)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x5a1f900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioLatencyViewController*>(), { ::i2c::class_of<::GlobalNamespace::AudioLatencyViewController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioLatencyViewController.DidDeactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioLatencyViewController::*)(bool, bool)>(&::GlobalNamespace::AudioLatencyViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5a1fce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioLatencyViewController*>(), { ::i2c::class_of<::GlobalNamespace::AudioLatencyViewController*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioLatencyViewController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioLatencyViewController::*)()>(&::GlobalNamespace::AudioLatencyViewController::OnDestroy)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5a1fdd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioLatencyViewController*>(), { ::i2c::class_of<::GlobalNamespace::AudioLatencyViewController*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioLatencyViewController.HandleVolumeChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioLatencyViewController::*)(::GlobalNamespace::FormattedFloatListSettingsController*, float_t)>(
    &::GlobalNamespace::AudioLatencyViewController::HandleVolumeChanged)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5a1fec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioLatencyViewController*>(),
                                                { "HandleVolumeChanged", {}, { ::i2c::type_of<::GlobalNamespace::FormattedFloatListSettingsController*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioLatencyViewController.HandleAmbientVolumeChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioLatencyViewController::*)(::GlobalNamespace::FormattedFloatListSettingsController*, float_t)>(
    &::GlobalNamespace::AudioLatencyViewController::HandleAmbientVolumeChanged)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a1fef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioLatencyViewController*>(),
                                                { "HandleAmbientVolumeChanged", {}, { ::i2c::type_of<::GlobalNamespace::FormattedFloatListSettingsController*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioLatencyViewController.SliderValueDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioLatencyViewController::*)(::HMUI::RangeValuesTextSlider*, float_t)>(
    &::GlobalNamespace::AudioLatencyViewController::SliderValueDidChange)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5a1ff0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioLatencyViewController*>(),
                                                             { "SliderValueDidChange", {}, { ::i2c::type_of<::HMUI::RangeValuesTextSlider*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioLatencyViewController.HandleOverrideAudioLatencyToggleValueChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioLatencyViewController::*)(bool)>(
    &::GlobalNamespace::AudioLatencyViewController::HandleOverrideAudioLatencyToggleValueChanged)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5a1ff3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioLatencyViewController*>(), { "HandleOverrideAudioLatencyToggleValueChanged", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioLatencyViewController.RefreshVisuals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioLatencyViewController::*)(bool)>(&::GlobalNamespace::AudioLatencyViewController::RefreshVisuals)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5a1fc2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioLatencyViewController*>(), { "RefreshVisuals", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioLatencyViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioLatencyViewController::*)()>(&::GlobalNamespace::AudioLatencyViewController::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5a1ff8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioLatencyViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::CanvasGroup>& GlobalNamespace::AudioLatencyViewController::__cordl_internal_get__setupCanvasGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setupCanvasGroup;
}
constexpr ::UnityW<::UnityEngine::CanvasGroup> const& GlobalNamespace::AudioLatencyViewController::__cordl_internal_get__setupCanvasGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setupCanvasGroup;
}
constexpr void GlobalNamespace::AudioLatencyViewController::__cordl_internal_set__setupCanvasGroup(::UnityW<::UnityEngine::CanvasGroup> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____setupCanvasGroup = value;
}
constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>& GlobalNamespace::AudioLatencyViewController::__cordl_internal_get__volumeSettingsList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____volumeSettingsList;
}
constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> const& GlobalNamespace::AudioLatencyViewController::__cordl_internal_get__volumeSettingsList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____volumeSettingsList;
}
constexpr void GlobalNamespace::AudioLatencyViewController::__cordl_internal_set__volumeSettingsList(::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____volumeSettingsList = value;
}
constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>& GlobalNamespace::AudioLatencyViewController::__cordl_internal_get__ambientSettingsList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ambientSettingsList;
}
constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> const& GlobalNamespace::AudioLatencyViewController::__cordl_internal_get__ambientSettingsList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ambientSettingsList;
}
constexpr void GlobalNamespace::AudioLatencyViewController::__cordl_internal_set__ambientSettingsList(::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ambientSettingsList = value;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& GlobalNamespace::AudioLatencyViewController::__cordl_internal_get__overrideAudioLatencyToggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideAudioLatencyToggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& GlobalNamespace::AudioLatencyViewController::__cordl_internal_get__overrideAudioLatencyToggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideAudioLatencyToggle;
}
constexpr void GlobalNamespace::AudioLatencyViewController::__cordl_internal_set__overrideAudioLatencyToggle(::UnityW<::UnityEngine::UI::Toggle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overrideAudioLatencyToggle = value;
}
constexpr ::UnityW<::HMUI::RangeValuesTextSlider>& GlobalNamespace::AudioLatencyViewController::__cordl_internal_get__slider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____slider;
}
constexpr ::UnityW<::HMUI::RangeValuesTextSlider> const& GlobalNamespace::AudioLatencyViewController::__cordl_internal_get__slider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____slider;
}
constexpr void GlobalNamespace::AudioLatencyViewController::__cordl_internal_set__slider(::UnityW<::HMUI::RangeValuesTextSlider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____slider = value;
}
constexpr ::UnityW<::GlobalNamespace::VisualMetronome>& GlobalNamespace::AudioLatencyViewController::__cordl_internal_get__visualMetronome() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____visualMetronome;
}
constexpr ::UnityW<::GlobalNamespace::VisualMetronome> const& GlobalNamespace::AudioLatencyViewController::__cordl_internal_get__visualMetronome() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____visualMetronome;
}
constexpr void GlobalNamespace::AudioLatencyViewController::__cordl_internal_set__visualMetronome(::UnityW<::GlobalNamespace::VisualMetronome> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____visualMetronome = value;
}
constexpr float_t& GlobalNamespace::AudioLatencyViewController::__cordl_internal_get__disabledAlpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disabledAlpha;
}
constexpr float_t const& GlobalNamespace::AudioLatencyViewController::__cordl_internal_get__disabledAlpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disabledAlpha;
}
constexpr void GlobalNamespace::AudioLatencyViewController::__cordl_internal_set__disabledAlpha(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disabledAlpha = value;
}
constexpr ::UnityW<::GlobalNamespace::SongPreviewPlayer>& GlobalNamespace::AudioLatencyViewController::__cordl_internal_get__songPreviewPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPreviewPlayer;
}
constexpr ::UnityW<::GlobalNamespace::SongPreviewPlayer> const& GlobalNamespace::AudioLatencyViewController::__cordl_internal_get__songPreviewPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPreviewPlayer;
}
constexpr void GlobalNamespace::AudioLatencyViewController::__cordl_internal_set__songPreviewPlayer(::UnityW<::GlobalNamespace::SongPreviewPlayer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songPreviewPlayer = value;
}
constexpr ::GlobalNamespace::SettingsManager*& GlobalNamespace::AudioLatencyViewController::__cordl_internal_get__settingsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr ::GlobalNamespace::SettingsManager* const& GlobalNamespace::AudioLatencyViewController::__cordl_internal_get__settingsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr void GlobalNamespace::AudioLatencyViewController::__cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settingsManager = value;
}
constexpr ::GlobalNamespace::AudioManager*& GlobalNamespace::AudioLatencyViewController::__cordl_internal_get__audioManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioManager;
}
constexpr ::GlobalNamespace::AudioManager* const& GlobalNamespace::AudioLatencyViewController::__cordl_internal_get__audioManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioManager;
}
constexpr void GlobalNamespace::AudioLatencyViewController::__cordl_internal_set__audioManager(::GlobalNamespace::AudioManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioManager = value;
}
constexpr ::HMUI::ToggleBinder*& GlobalNamespace::AudioLatencyViewController::__cordl_internal_get__toggleBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggleBinder;
}
constexpr ::HMUI::ToggleBinder* const& GlobalNamespace::AudioLatencyViewController::__cordl_internal_get__toggleBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggleBinder;
}
constexpr void GlobalNamespace::AudioLatencyViewController::__cordl_internal_set__toggleBinder(::HMUI::ToggleBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____toggleBinder = value;
}
inline void GlobalNamespace::AudioLatencyViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::AudioLatencyViewController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::AudioLatencyViewController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::AudioLatencyViewController*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::AudioLatencyViewController::OnDestroy() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::AudioLatencyViewController*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioLatencyViewController::HandleVolumeChanged(::GlobalNamespace::FormattedFloatListSettingsController* _, float_t newValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioLatencyViewController*>(),
                                                           { "HandleVolumeChanged", {}, { ::i2c::type_of<::GlobalNamespace::FormattedFloatListSettingsController*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _, newValue);
}
inline void GlobalNamespace::AudioLatencyViewController::HandleAmbientVolumeChanged(::GlobalNamespace::FormattedFloatListSettingsController* _, float_t newValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioLatencyViewController*>(),
                                              { "HandleAmbientVolumeChanged", {}, { ::i2c::type_of<::GlobalNamespace::FormattedFloatListSettingsController*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _, newValue);
}
inline void GlobalNamespace::AudioLatencyViewController::SliderValueDidChange(::HMUI::RangeValuesTextSlider* slider, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioLatencyViewController*>(),
                                                           { "SliderValueDidChange", {}, { ::i2c::type_of<::HMUI::RangeValuesTextSlider*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, slider, value);
}
inline void GlobalNamespace::AudioLatencyViewController::HandleOverrideAudioLatencyToggleValueChanged(bool isOn) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioLatencyViewController*>(), { "HandleOverrideAudioLatencyToggleValueChanged", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isOn);
}
inline void GlobalNamespace::AudioLatencyViewController::RefreshVisuals(bool overrideAudioLatencyIsEnabled) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioLatencyViewController*>(), { "RefreshVisuals", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, overrideAudioLatencyIsEnabled);
}
inline void GlobalNamespace::AudioLatencyViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioLatencyViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioLatencyViewController* GlobalNamespace::AudioLatencyViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioLatencyViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioLatencyViewController::AudioLatencyViewController() {}
