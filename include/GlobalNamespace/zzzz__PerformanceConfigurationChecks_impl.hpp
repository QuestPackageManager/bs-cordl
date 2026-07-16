#pragma once
// IWYU pragma private; include "GlobalNamespace/PerformanceConfigurationChecks.hpp"
#include "BeatSaber/Settings/zzzz__Settings_impl.hpp"
#include "GlobalNamespace/zzzz__ArcVisibilityType_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentEffectsFilterPreset_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierMask_impl.hpp"
#include "GlobalNamespace/zzzz__NoteJumpDurationTypeSettings_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__TextureDimension_impl.hpp"
#include "UnityEngine/XR/zzzz__XRSettings_impl.hpp"
#include "UnityEngine/zzzz__SystemLanguage_impl.hpp"
#include "UnityEngine/zzzz__ThreadPriority_impl.hpp"
#include "GlobalNamespace/zzzz__PerformanceConfigurationChecks_def.hpp"
#include "BeatSaber/Automation/zzzz__RecPlayBehaviourState_def.hpp"
#include "BeatSaber/Settings/zzzz__Settings_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierMask_def.hpp"
#include "GlobalNamespace/zzzz__PerformanceConfigurationChecks_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "frames", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PerformanceConfigurationChecks_Mismatch::PerformanceConfigurationChecks_Mismatch(::StringW message, int32_t frames) noexcept {
  this->message = message;
  this->frames = frames;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerformanceConfigurationChecks_Mismatch::PerformanceConfigurationChecks_Mismatch() {}
// Ctor Parameters [CppParam { name: "targetFrameRate", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "systemLanguage", ty: "::UnityEngine::SystemLanguage", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "runInBackground", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "backgroundLoadingPriority", ty: "::UnityEngine::ThreadPriority",
// modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PerformanceConfigurationChecks_AppConfig::PerformanceConfigurationChecks_AppConfig(int32_t targetFrameRate, ::UnityEngine::SystemLanguage systemLanguage,
                                                                                                                bool runInBackground,
                                                                                                                ::UnityEngine::ThreadPriority backgroundLoadingPriority) noexcept {
  this->targetFrameRate = targetFrameRate;
  this->systemLanguage = systemLanguage;
  this->runInBackground = runInBackground;
  this->backgroundLoadingPriority = backgroundLoadingPriority;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerformanceConfigurationChecks_AppConfig::PerformanceConfigurationChecks_AppConfig() {}
// Ctor Parameters [CppParam { name: "enabled", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isDeviceActive", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "loadedDeviceName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "stereoRenderingMode", ty: "::UnityEngine::XR::XRSettings_StereoRenderingMode", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "eyeTextureWidth", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "eyeTextureHeight", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "eyeTextureResolutionScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "deviceEyeTextureDimension", ty:
// "::UnityEngine::Rendering::TextureDimension", modifiers: "", def_value: Some("{}") }, CppParam { name: "renderViewportScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "occlusionMaskScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "useOcclusionMesh", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PerformanceConfigurationChecks_XRConfig::PerformanceConfigurationChecks_XRConfig(bool enabled, bool isDeviceActive, ::StringW loadedDeviceName,
                                                                                                              ::UnityEngine::XR::XRSettings_StereoRenderingMode stereoRenderingMode,
                                                                                                              int32_t eyeTextureWidth, int32_t eyeTextureHeight, float_t eyeTextureResolutionScale,
                                                                                                              ::UnityEngine::Rendering::TextureDimension deviceEyeTextureDimension,
                                                                                                              float_t renderViewportScale, float_t occlusionMaskScale, bool useOcclusionMesh) noexcept {
  this->enabled = enabled;
  this->isDeviceActive = isDeviceActive;
  this->loadedDeviceName = loadedDeviceName;
  this->stereoRenderingMode = stereoRenderingMode;
  this->eyeTextureWidth = eyeTextureWidth;
  this->eyeTextureHeight = eyeTextureHeight;
  this->eyeTextureResolutionScale = eyeTextureResolutionScale;
  this->deviceEyeTextureDimension = deviceEyeTextureDimension;
  this->renderViewportScale = renderViewportScale;
  this->occlusionMaskScale = occlusionMaskScale;
  this->useOcclusionMesh = useOcclusionMesh;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerformanceConfigurationChecks_XRConfig::PerformanceConfigurationChecks_XRConfig() {}
// Ctor Parameters [CppParam { name: "leftHanded", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "automaticPlayerHeight", ty: "bool", modifiers: "", def_value: Some("{}") },
// CppParam { name: "playerHeight", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "noteJumpDurationTypeSettings", ty: "::GlobalNamespace::NoteJumpDurationTypeSettings",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "noteJumpFixedDuration", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "noteJumpStartBeatOffset", ty: "float_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "autoRestart", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "headsetHapticIntensity", ty: "float_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "arcsHapticFeedback", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "reduceDebris", ty: "bool", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "noFailEffects", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "hideNoteSpawnEffect", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "arcVisibility", ty: "::GlobalNamespace::ArcVisibilityType", modifiers: "", def_value: Some("{}") }, CppParam { name: "saberTrailIntensity", ty: "float_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "noTextsAndHuds", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "advancedHud", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "sfxVolume", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "adaptiveSfx", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "environmentEffectsFilterDefaultPreset", ty: "::GlobalNamespace::EnvironmentEffectsFilterPreset", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "environmentEffectsFilterExpertPlusPreset", ty: "::GlobalNamespace::EnvironmentEffectsFilterPreset", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PerformanceConfigurationChecks_PlayerConfig::PerformanceConfigurationChecks_PlayerConfig(
    bool leftHanded, bool automaticPlayerHeight, float_t playerHeight, ::GlobalNamespace::NoteJumpDurationTypeSettings noteJumpDurationTypeSettings, float_t noteJumpFixedDuration,
    float_t noteJumpStartBeatOffset, bool autoRestart, float_t headsetHapticIntensity, bool arcsHapticFeedback, bool reduceDebris, bool noFailEffects, bool hideNoteSpawnEffect,
    ::GlobalNamespace::ArcVisibilityType arcVisibility, float_t saberTrailIntensity, bool noTextsAndHuds, bool advancedHud, float_t sfxVolume, bool adaptiveSfx,
    ::GlobalNamespace::EnvironmentEffectsFilterPreset environmentEffectsFilterDefaultPreset, ::GlobalNamespace::EnvironmentEffectsFilterPreset environmentEffectsFilterExpertPlusPreset) noexcept {
  this->leftHanded = leftHanded;
  this->automaticPlayerHeight = automaticPlayerHeight;
  this->playerHeight = playerHeight;
  this->noteJumpDurationTypeSettings = noteJumpDurationTypeSettings;
  this->noteJumpFixedDuration = noteJumpFixedDuration;
  this->noteJumpStartBeatOffset = noteJumpStartBeatOffset;
  this->autoRestart = autoRestart;
  this->headsetHapticIntensity = headsetHapticIntensity;
  this->arcsHapticFeedback = arcsHapticFeedback;
  this->reduceDebris = reduceDebris;
  this->noFailEffects = noFailEffects;
  this->hideNoteSpawnEffect = hideNoteSpawnEffect;
  this->arcVisibility = arcVisibility;
  this->saberTrailIntensity = saberTrailIntensity;
  this->noTextsAndHuds = noTextsAndHuds;
  this->advancedHud = advancedHud;
  this->sfxVolume = sfxVolume;
  this->adaptiveSfx = adaptiveSfx;
  this->environmentEffectsFilterDefaultPreset = environmentEffectsFilterDefaultPreset;
  this->environmentEffectsFilterExpertPlusPreset = environmentEffectsFilterExpertPlusPreset;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerformanceConfigurationChecks_PlayerConfig::PerformanceConfigurationChecks_PlayerConfig() {}
// Ctor Parameters [CppParam { name: "modifiers", ty: "::GlobalNamespace::GameplayModifierMask", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PerformanceConfigurationChecks_LevelConfig::PerformanceConfigurationChecks_LevelConfig(::GlobalNamespace::GameplayModifierMask modifiers) noexcept {
  this->modifiers = modifiers;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerformanceConfigurationChecks_LevelConfig::PerformanceConfigurationChecks_LevelConfig() {}
//  Writing Method size for method: ::GlobalNamespace::PerformanceConfigurationChecks.IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PerformanceConfigurationChecks::*)()>(&::GlobalNamespace::PerformanceConfigurationChecks::IsValid)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x58ef358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceConfigurationChecks*>(), { "IsValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceConfigurationChecks.CreateErrorLog
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PerformanceConfigurationChecks::*)()>(&::GlobalNamespace::PerformanceConfigurationChecks::CreateErrorLog)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x58ef3b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceConfigurationChecks*>(), { "CreateErrorLog", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceConfigurationChecks.SetExpected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PerformanceConfigurationChecks::*)(
    ::by_ref<::BeatSaber::Settings::Settings>, ::GlobalNamespace::PlayerSpecificSettings*, ::GlobalNamespace::GameplayModifierMask, ::BeatSaber::Automation::RecPlayBehaviourState*)>(
    &::GlobalNamespace::PerformanceConfigurationChecks::SetExpected)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x58ef5f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceConfigurationChecks*>(),
                                                             { "SetExpected",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::BeatSaber::Settings::Settings>>(), ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::GameplayModifierMask>(), ::i2c::type_of<::BeatSaber::Automation::RecPlayBehaviourState*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceConfigurationChecks.VerifyExpected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PerformanceConfigurationChecks::*)(
    ::by_ref<::BeatSaber::Settings::Settings>, ::GlobalNamespace::PlayerSpecificSettings*, ::GlobalNamespace::GameplayModifierMask, ::BeatSaber::Automation::RecPlayBehaviourState*)>(
    &::GlobalNamespace::PerformanceConfigurationChecks::VerifyExpected)> {
  constexpr static std::size_t size = 0x1560;
  constexpr static std::size_t addrs = 0x58ef970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceConfigurationChecks*>(),
                                                             { "VerifyExpected",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::BeatSaber::Settings::Settings>>(), ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::GameplayModifierMask>(), ::i2c::type_of<::BeatSaber::Automation::RecPlayBehaviourState*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceConfigurationChecks._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerformanceConfigurationChecks::*)()>(&::GlobalNamespace::PerformanceConfigurationChecks::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x58f0ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceConfigurationChecks*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PerformanceConfigurationChecks_AppConfig& GlobalNamespace::PerformanceConfigurationChecks::__cordl_internal_get_appConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___appConfig;
}
constexpr ::GlobalNamespace::PerformanceConfigurationChecks_AppConfig const& GlobalNamespace::PerformanceConfigurationChecks::__cordl_internal_get_appConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___appConfig;
}
constexpr void GlobalNamespace::PerformanceConfigurationChecks::__cordl_internal_set_appConfig(::GlobalNamespace::PerformanceConfigurationChecks_AppConfig value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___appConfig = value;
}
constexpr ::GlobalNamespace::PerformanceConfigurationChecks_XRConfig& GlobalNamespace::PerformanceConfigurationChecks::__cordl_internal_get_xrConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xrConfig;
}
constexpr ::GlobalNamespace::PerformanceConfigurationChecks_XRConfig const& GlobalNamespace::PerformanceConfigurationChecks::__cordl_internal_get_xrConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xrConfig;
}
constexpr void GlobalNamespace::PerformanceConfigurationChecks::__cordl_internal_set_xrConfig(::GlobalNamespace::PerformanceConfigurationChecks_XRConfig value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xrConfig = value;
}
constexpr ::BeatSaber::Settings::Settings& GlobalNamespace::PerformanceConfigurationChecks::__cordl_internal_get_settingsConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___settingsConfig;
}
constexpr ::BeatSaber::Settings::Settings const& GlobalNamespace::PerformanceConfigurationChecks::__cordl_internal_get_settingsConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___settingsConfig;
}
constexpr void GlobalNamespace::PerformanceConfigurationChecks::__cordl_internal_set_settingsConfig(::BeatSaber::Settings::Settings value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___settingsConfig = value;
}
constexpr ::GlobalNamespace::PerformanceConfigurationChecks_PlayerConfig& GlobalNamespace::PerformanceConfigurationChecks::__cordl_internal_get_playerConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerConfig;
}
constexpr ::GlobalNamespace::PerformanceConfigurationChecks_PlayerConfig const& GlobalNamespace::PerformanceConfigurationChecks::__cordl_internal_get_playerConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerConfig;
}
constexpr void GlobalNamespace::PerformanceConfigurationChecks::__cordl_internal_set_playerConfig(::GlobalNamespace::PerformanceConfigurationChecks_PlayerConfig value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playerConfig = value;
}
constexpr ::GlobalNamespace::PerformanceConfigurationChecks_LevelConfig& GlobalNamespace::PerformanceConfigurationChecks::__cordl_internal_get_levelConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelConfig;
}
constexpr ::GlobalNamespace::PerformanceConfigurationChecks_LevelConfig const& GlobalNamespace::PerformanceConfigurationChecks::__cordl_internal_get_levelConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelConfig;
}
constexpr void GlobalNamespace::PerformanceConfigurationChecks::__cordl_internal_set_levelConfig(::GlobalNamespace::PerformanceConfigurationChecks_LevelConfig value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___levelConfig = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PerformanceConfigurationChecks_Mismatch>*&
GlobalNamespace::PerformanceConfigurationChecks::__cordl_internal_get_invalid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___invalid;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PerformanceConfigurationChecks_Mismatch>* const&
GlobalNamespace::PerformanceConfigurationChecks::__cordl_internal_get_invalid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___invalid;
}
constexpr void GlobalNamespace::PerformanceConfigurationChecks::__cordl_internal_set_invalid(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PerformanceConfigurationChecks_Mismatch>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___invalid = value;
}
inline bool GlobalNamespace::PerformanceConfigurationChecks::IsValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceConfigurationChecks*>(), { "IsValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::PerformanceConfigurationChecks::CreateErrorLog() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceConfigurationChecks*>(), { "CreateErrorLog", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::PerformanceConfigurationChecks::SetExpected(::by_ref<::BeatSaber::Settings::Settings> settings, ::GlobalNamespace::PlayerSpecificSettings* playerSettings,
                                                                         ::GlobalNamespace::GameplayModifierMask modifiers, ::BeatSaber::Automation::RecPlayBehaviourState* recPlayState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceConfigurationChecks*>(),
                                                           { "SetExpected",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::BeatSaber::Settings::Settings>>(), ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(),
                                                               ::i2c::type_of<::GlobalNamespace::GameplayModifierMask>(), ::i2c::type_of<::BeatSaber::Automation::RecPlayBehaviourState*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, settings, playerSettings, modifiers, recPlayState);
}
inline bool GlobalNamespace::PerformanceConfigurationChecks::VerifyExpected(::by_ref<::BeatSaber::Settings::Settings> settings, ::GlobalNamespace::PlayerSpecificSettings* playerSettings,
                                                                            ::GlobalNamespace::GameplayModifierMask modifiers, ::BeatSaber::Automation::RecPlayBehaviourState* recPlayState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceConfigurationChecks*>(),
                                                           { "VerifyExpected",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::BeatSaber::Settings::Settings>>(), ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(),
                                                               ::i2c::type_of<::GlobalNamespace::GameplayModifierMask>(), ::i2c::type_of<::BeatSaber::Automation::RecPlayBehaviourState*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, settings, playerSettings, modifiers, recPlayState);
}
template <typename T> inline void GlobalNamespace::PerformanceConfigurationChecks::VerifyEntry(::StringW name, T expected, T actual) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceConfigurationChecks*>(),
                                                           { "VerifyEntry", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>(), ::i2c::type_of<T>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, expected, actual);
}
inline void GlobalNamespace::PerformanceConfigurationChecks::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceConfigurationChecks*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PerformanceConfigurationChecks* GlobalNamespace::PerformanceConfigurationChecks::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PerformanceConfigurationChecks*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerformanceConfigurationChecks::PerformanceConfigurationChecks() {}
