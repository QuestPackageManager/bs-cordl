#pragma once
// IWYU pragma private; include "GlobalNamespace/PerformanceConfigurationChecks.hpp"
#include "BeatSaber/Settings/zzzz__Settings_impl.hpp"
#include "GlobalNamespace/zzzz__ArcVisibilityType_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentEffectsFilterPreset_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierMask_impl.hpp"
#include "GlobalNamespace/zzzz__NoteJumpDurationTypeSettings_impl.hpp"
#include "GlobalNamespace/zzzz__OVRManager_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__TextureDimension_impl.hpp"
#include "UnityEngine/XR/zzzz__XRSettings_impl.hpp"
#include "UnityEngine/zzzz__SystemLanguage_impl.hpp"
#include "UnityEngine/zzzz__ThreadPriority_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__PerformanceConfigurationChecks_def.hpp"
#include "BeatSaber/Settings/zzzz__Settings_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierMask_def.hpp"
#include "GlobalNamespace/zzzz__PerformanceConfigurationChecks_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "GlobalNamespace/zzzz__RecPlayBehaviour_def.hpp"
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
// Ctor Parameters [CppParam { name: "spaceWarpEnabled", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "chromatic", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "monoscopic", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "colorGamut", ty: "::GlobalNamespace::OVRManager_ColorSpace", modifiers: "", def_value: Some("{}") },
// CppParam { name: "nativeColorGamut", ty: "::GlobalNamespace::OVRManager_ColorSpace", modifiers: "", def_value: Some("{}") }, CppParam { name: "compositionMethod", ty:
// "::GlobalNamespace::OVRManager_CompositionMethod", modifiers: "", def_value: Some("{}") }, CppParam { name: "enableMixedReality", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "trackingOriginType", ty: "::GlobalNamespace::OVRManager_TrackingOrigin", modifiers: "", def_value: Some("{}") }, CppParam { name: "usePositionTracking", ty: "bool", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "useRotationTracking", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "sharpenType", ty: "::GlobalNamespace::OVRPlugin_LayerSharpenType",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "enableDynamicResolution", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "minDynamicResolutionScale", ty: "float_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "maxDynamicResolutionScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "simultaneousHandsAndControllersSupport", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "suggestedCpuPerfLevel", ty: "::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "suggestedGpuPerfLevel", ty: "::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "systemDisplayFrequency", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "eyeTrackedFoveatedRenderingEnabled", ty: "bool", modifiers: "", def_value: Some("{}") },
// CppParam { name: "foveatedRenderingLevel", ty: "::GlobalNamespace::OVRPlugin_FoveatedRenderingLevel", modifiers: "", def_value: Some("{}") }, CppParam { name: "useDynamicFoveatedRendering", ty:
// "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "gpuUtilSupported", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "gpuUtilLevel", ty: "float_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "eyeFovPremultipliedAlphaModeEnabled", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "asymmetricFovEnabled", ty: "bool",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "eyeTextureArrayEnabled", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "localDimmingSupported", ty: "bool",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "localDimming", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PerformanceConfigurationChecks_OVRConfig::PerformanceConfigurationChecks_OVRConfig(
    bool spaceWarpEnabled, bool chromatic, bool monoscopic, ::GlobalNamespace::OVRManager_ColorSpace colorGamut, ::GlobalNamespace::OVRManager_ColorSpace nativeColorGamut,
    ::GlobalNamespace::OVRManager_CompositionMethod compositionMethod, bool enableMixedReality, ::GlobalNamespace::OVRManager_TrackingOrigin trackingOriginType, bool usePositionTracking,
    bool useRotationTracking, ::GlobalNamespace::OVRPlugin_LayerSharpenType sharpenType, bool enableDynamicResolution, float_t minDynamicResolutionScale, float_t maxDynamicResolutionScale,
    bool simultaneousHandsAndControllersSupport, ::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel suggestedCpuPerfLevel,
    ::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel suggestedGpuPerfLevel, float_t systemDisplayFrequency, bool eyeTrackedFoveatedRenderingEnabled,
    ::GlobalNamespace::OVRPlugin_FoveatedRenderingLevel foveatedRenderingLevel, bool useDynamicFoveatedRendering, bool gpuUtilSupported, float_t gpuUtilLevel, bool eyeFovPremultipliedAlphaModeEnabled,
    bool asymmetricFovEnabled, bool eyeTextureArrayEnabled, bool localDimmingSupported, bool localDimming) noexcept {
  this->spaceWarpEnabled = spaceWarpEnabled;
  this->chromatic = chromatic;
  this->monoscopic = monoscopic;
  this->colorGamut = colorGamut;
  this->nativeColorGamut = nativeColorGamut;
  this->compositionMethod = compositionMethod;
  this->enableMixedReality = enableMixedReality;
  this->trackingOriginType = trackingOriginType;
  this->usePositionTracking = usePositionTracking;
  this->useRotationTracking = useRotationTracking;
  this->sharpenType = sharpenType;
  this->enableDynamicResolution = enableDynamicResolution;
  this->minDynamicResolutionScale = minDynamicResolutionScale;
  this->maxDynamicResolutionScale = maxDynamicResolutionScale;
  this->simultaneousHandsAndControllersSupport = simultaneousHandsAndControllersSupport;
  this->suggestedCpuPerfLevel = suggestedCpuPerfLevel;
  this->suggestedGpuPerfLevel = suggestedGpuPerfLevel;
  this->systemDisplayFrequency = systemDisplayFrequency;
  this->eyeTrackedFoveatedRenderingEnabled = eyeTrackedFoveatedRenderingEnabled;
  this->foveatedRenderingLevel = foveatedRenderingLevel;
  this->useDynamicFoveatedRendering = useDynamicFoveatedRendering;
  this->gpuUtilSupported = gpuUtilSupported;
  this->gpuUtilLevel = gpuUtilLevel;
  this->eyeFovPremultipliedAlphaModeEnabled = eyeFovPremultipliedAlphaModeEnabled;
  this->asymmetricFovEnabled = asymmetricFovEnabled;
  this->eyeTextureArrayEnabled = eyeTextureArrayEnabled;
  this->localDimmingSupported = localDimmingSupported;
  this->localDimming = localDimming;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerformanceConfigurationChecks_OVRConfig::PerformanceConfigurationChecks_OVRConfig() {}
// Ctor Parameters [CppParam { name: "boundaryDimension", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PerformanceConfigurationChecks_OculusXRConfig::PerformanceConfigurationChecks_OculusXRConfig(::UnityEngine::Vector3 boundaryDimension) noexcept {
  this->boundaryDimension = boundaryDimension;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerformanceConfigurationChecks_OculusXRConfig::PerformanceConfigurationChecks_OculusXRConfig() {}
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PerformanceConfigurationChecks::*)()>(
    &::GlobalNamespace::PerformanceConfigurationChecks::IsValid)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3b23a90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceConfigurationChecks*>::get(),
                                                                               "IsValid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceConfigurationChecks.CreateErrorLog
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PerformanceConfigurationChecks::*)()>(
    &::GlobalNamespace::PerformanceConfigurationChecks::CreateErrorLog)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x3b23aec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceConfigurationChecks*>::get(),
                                                                               "CreateErrorLog", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceConfigurationChecks.SetExpected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PerformanceConfigurationChecks::*)(
    ::ByRef<::BeatSaber::Settings::Settings>, ::GlobalNamespace::PlayerSpecificSettings*, ::GlobalNamespace::GameplayModifierMask, ::GlobalNamespace::RecPlayBehaviour_State*)>(
    &::GlobalNamespace::PerformanceConfigurationChecks::SetExpected)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x3b23d78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceConfigurationChecks*>::get(), "SetExpected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::BeatSaber::Settings::Settings>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifierMask>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RecPlayBehaviour_State*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceConfigurationChecks.VerifyExpected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PerformanceConfigurationChecks::*)(
    ::ByRef<::BeatSaber::Settings::Settings>, ::GlobalNamespace::PlayerSpecificSettings*, ::GlobalNamespace::GameplayModifierMask, ::GlobalNamespace::RecPlayBehaviour_State*)>(
    &::GlobalNamespace::PerformanceConfigurationChecks::VerifyExpected)> {
  constexpr static std::size_t size = 0x1c04;
  constexpr static std::size_t addrs = 0x3b24238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceConfigurationChecks*>::get(), "VerifyExpected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::BeatSaber::Settings::Settings>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifierMask>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RecPlayBehaviour_State*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceConfigurationChecks._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PerformanceConfigurationChecks::*)()>(
    &::GlobalNamespace::PerformanceConfigurationChecks::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3b25e3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceConfigurationChecks*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
constexpr ::GlobalNamespace::PerformanceConfigurationChecks_OVRConfig& GlobalNamespace::PerformanceConfigurationChecks::__cordl_internal_get_ovrConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ovrConfig;
}
constexpr ::GlobalNamespace::PerformanceConfigurationChecks_OVRConfig const& GlobalNamespace::PerformanceConfigurationChecks::__cordl_internal_get_ovrConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ovrConfig;
}
constexpr void GlobalNamespace::PerformanceConfigurationChecks::__cordl_internal_set_ovrConfig(::GlobalNamespace::PerformanceConfigurationChecks_OVRConfig value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ovrConfig = value;
}
constexpr ::GlobalNamespace::PerformanceConfigurationChecks_OculusXRConfig& GlobalNamespace::PerformanceConfigurationChecks::__cordl_internal_get_oculusXrConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___oculusXrConfig;
}
constexpr ::GlobalNamespace::PerformanceConfigurationChecks_OculusXRConfig const& GlobalNamespace::PerformanceConfigurationChecks::__cordl_internal_get_oculusXrConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___oculusXrConfig;
}
constexpr void GlobalNamespace::PerformanceConfigurationChecks::__cordl_internal_set_oculusXrConfig(::GlobalNamespace::PerformanceConfigurationChecks_OculusXRConfig value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___oculusXrConfig = value;
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___invalid)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool GlobalNamespace::PerformanceConfigurationChecks::IsValid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceConfigurationChecks*>::get(),
                                                                             "IsValid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::PerformanceConfigurationChecks::CreateErrorLog() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceConfigurationChecks*>::get(),
                                                                             "CreateErrorLog", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool GlobalNamespace::PerformanceConfigurationChecks::SetExpected(::ByRef<::BeatSaber::Settings::Settings> settings, ::GlobalNamespace::PlayerSpecificSettings* playerSettings,
                                                                         ::GlobalNamespace::GameplayModifierMask modifiers, ::GlobalNamespace::RecPlayBehaviour_State* recPlayState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceConfigurationChecks*>::get(), "SetExpected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::BeatSaber::Settings::Settings>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifierMask>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RecPlayBehaviour_State*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, settings, playerSettings, modifiers, recPlayState);
}
inline bool GlobalNamespace::PerformanceConfigurationChecks::VerifyExpected(::ByRef<::BeatSaber::Settings::Settings> settings, ::GlobalNamespace::PlayerSpecificSettings* playerSettings,
                                                                            ::GlobalNamespace::GameplayModifierMask modifiers, ::GlobalNamespace::RecPlayBehaviour_State* recPlayState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceConfigurationChecks*>::get(), "VerifyExpected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::BeatSaber::Settings::Settings>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifierMask>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RecPlayBehaviour_State*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, settings, playerSettings, modifiers, recPlayState);
}
template <typename T> inline void GlobalNamespace::PerformanceConfigurationChecks::VerifyEntry(::StringW name, T expected, T actual) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceConfigurationChecks*>::get(),
                                                                                  "VerifyEntry", std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                                                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                                                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, expected, actual);
}
inline void GlobalNamespace::PerformanceConfigurationChecks::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceConfigurationChecks*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PerformanceConfigurationChecks* GlobalNamespace::PerformanceConfigurationChecks::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PerformanceConfigurationChecks*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerformanceConfigurationChecks::PerformanceConfigurationChecks() {}
