#pragma once
#include "BGLib/Polyglot/zzzz__Language_impl.hpp"
#include "GlobalNamespace/zzzz__ArcVisibilityType_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentEffectsFilterPreset_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierMask_impl.hpp"
#include "GlobalNamespace/zzzz__NoteJumpDurationTypeSettings_impl.hpp"
#include "GlobalNamespace/zzzz__OVRManager_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_impl.hpp"
#include "GlobalNamespace/zzzz__PerformanceConfigurationChecks_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__TextureDimension_impl.hpp"
#include "UnityEngine/XR/zzzz__XRSettings_impl.hpp"
#include "UnityEngine/zzzz__SystemLanguage_impl.hpp"
#include "UnityEngine/zzzz__ThreadPriority_impl.hpp"
#include "UnityEngine/zzzz__Vector2Int_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__PerformanceConfigurationChecks_def.hpp"
#include "BGLib/Polyglot/zzzz__Language_def.hpp"
#include "GlobalNamespace/zzzz__ArcVisibilityType_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentEffectsFilterPreset_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierMask_def.hpp"
#include "GlobalNamespace/zzzz__MainSettingsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__NoteJumpDurationTypeSettings_def.hpp"
#include "GlobalNamespace/zzzz__OVRManager_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__PerformanceConfigurationChecks_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/Rendering/zzzz__TextureDimension_def.hpp"
#include "UnityEngine/XR/zzzz__XRSettings_def.hpp"
#include "UnityEngine/zzzz__SystemLanguage_def.hpp"
#include "UnityEngine/zzzz__ThreadPriority_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "frames", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__Mismatch::__PerformanceConfigurationChecks__Mismatch(::StringW message, int32_t frames) noexcept {
  this->message = message;
  this->frames = frames;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__Mismatch::__PerformanceConfigurationChecks__Mismatch() {}
// Ctor Parameters [CppParam { name: "targetFrameRate", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "systemLanguage", ty: "::UnityEngine::SystemLanguage", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "runInBackground", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "backgroundLoadingPriority", ty: "::UnityEngine::ThreadPriority",
// modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__AppConfig::__PerformanceConfigurationChecks__AppConfig(int32_t targetFrameRate, ::UnityEngine::SystemLanguage systemLanguage,
                                                                                                                      bool runInBackground,
                                                                                                                      ::UnityEngine::ThreadPriority backgroundLoadingPriority) noexcept {
  this->targetFrameRate = targetFrameRate;
  this->systemLanguage = systemLanguage;
  this->runInBackground = runInBackground;
  this->backgroundLoadingPriority = backgroundLoadingPriority;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__AppConfig::__PerformanceConfigurationChecks__AppConfig() {}
// Ctor Parameters [CppParam { name: "enabled", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isDeviceActive", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "loadedDeviceName", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "stereoRenderingMode", ty: "::UnityEngine::XR::__XRSettings__StereoRenderingMode",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "eyeTextureWidth", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "eyeTextureHeight", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "eyeTextureResolutionScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "deviceEyeTextureDimension", ty:
// "::UnityEngine::Rendering::TextureDimension", modifiers: "", def_value: Some("{}") }, CppParam { name: "renderViewportScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "occlusionMaskScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "useOcclusionMesh", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__XRConfig::__PerformanceConfigurationChecks__XRConfig(
    bool enabled, bool isDeviceActive, ::StringW loadedDeviceName, ::UnityEngine::XR::__XRSettings__StereoRenderingMode stereoRenderingMode, int32_t eyeTextureWidth, int32_t eyeTextureHeight,
    float_t eyeTextureResolutionScale, ::UnityEngine::Rendering::TextureDimension deviceEyeTextureDimension, float_t renderViewportScale, float_t occlusionMaskScale, bool useOcclusionMesh) noexcept {
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
constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__XRConfig::__PerformanceConfigurationChecks__XRConfig() {}
// Ctor Parameters [CppParam { name: "spaceWarpEnabled", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "chromatic", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "monoscopic", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "colorGamut", ty: "::GlobalNamespace::__OVRManager__ColorSpace", modifiers: "", def_value: Some("{}") },
// CppParam { name: "nativeColorGamut", ty: "::GlobalNamespace::__OVRManager__ColorSpace", modifiers: "", def_value: Some("{}") }, CppParam { name: "compositionMethod", ty:
// "::GlobalNamespace::__OVRManager__CompositionMethod", modifiers: "", def_value: Some("{}") }, CppParam { name: "enableMixedReality", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "trackingOriginType", ty: "::GlobalNamespace::__OVRManager__TrackingOrigin", modifiers: "", def_value: Some("{}") }, CppParam { name: "usePositionTracking", ty: "bool", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "useRotationTracking", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "sharpenType", ty:
// "::GlobalNamespace::__OVRPlugin__LayerSharpenType", modifiers: "", def_value: Some("{}") }, CppParam { name: "enableDynamicResolution", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "minDynamicResolutionScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxDynamicResolutionScale", ty: "float_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "simultaneousHandsAndControllersSupport", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "suggestedCpuPerfLevel", ty:
// "::GlobalNamespace::__OVRPlugin__ProcessorPerformanceLevel", modifiers: "", def_value: Some("{}") }, CppParam { name: "suggestedGpuPerfLevel", ty:
// "::GlobalNamespace::__OVRPlugin__ProcessorPerformanceLevel", modifiers: "", def_value: Some("{}") }, CppParam { name: "systemDisplayFrequency", ty: "float_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "eyeTrackedFoveatedRenderingEnabled", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "foveatedRenderingLevel", ty:
// "::GlobalNamespace::__OVRPlugin__FoveatedRenderingLevel", modifiers: "", def_value: Some("{}") }, CppParam { name: "useDynamicFoveatedRendering", ty: "bool", modifiers: "", def_value: Some("{}") },
// CppParam { name: "gpuUtilSupported", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "gpuUtilLevel", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "eyeFovPremultipliedAlphaModeEnabled", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "asymmetricFovEnabled", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "eyeTextureArrayEnabled", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "localDimmingSupported", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "localDimming", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig::__PerformanceConfigurationChecks__OVRConfig(
    bool spaceWarpEnabled, bool chromatic, bool monoscopic, ::GlobalNamespace::__OVRManager__ColorSpace colorGamut, ::GlobalNamespace::__OVRManager__ColorSpace nativeColorGamut,
    ::GlobalNamespace::__OVRManager__CompositionMethod compositionMethod, bool enableMixedReality, ::GlobalNamespace::__OVRManager__TrackingOrigin trackingOriginType, bool usePositionTracking,
    bool useRotationTracking, ::GlobalNamespace::__OVRPlugin__LayerSharpenType sharpenType, bool enableDynamicResolution, float_t minDynamicResolutionScale, float_t maxDynamicResolutionScale,
    bool simultaneousHandsAndControllersSupport, ::GlobalNamespace::__OVRPlugin__ProcessorPerformanceLevel suggestedCpuPerfLevel,
    ::GlobalNamespace::__OVRPlugin__ProcessorPerformanceLevel suggestedGpuPerfLevel, float_t systemDisplayFrequency, bool eyeTrackedFoveatedRenderingEnabled,
    ::GlobalNamespace::__OVRPlugin__FoveatedRenderingLevel foveatedRenderingLevel, bool useDynamicFoveatedRendering, bool gpuUtilSupported, float_t gpuUtilLevel,
    bool eyeFovPremultipliedAlphaModeEnabled, bool asymmetricFovEnabled, bool eyeTextureArrayEnabled, bool localDimmingSupported, bool localDimming) noexcept {
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
constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig::__PerformanceConfigurationChecks__OVRConfig() {}
// Ctor Parameters [CppParam { name: "boundaryDimension", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__OculusXRConfig::__PerformanceConfigurationChecks__OculusXRConfig(::UnityEngine::Vector3 boundaryDimension) noexcept {
  this->boundaryDimension = boundaryDimension;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__OculusXRConfig::__PerformanceConfigurationChecks__OculusXRConfig() {}
// Ctor Parameters [CppParam { name: "editorWindowResolution", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: Some("{}") }, CppParam { name: "windowResolution", ty:
// "::UnityEngine::Vector2Int", modifiers: "", def_value: Some("{}") }, CppParam { name: "fullscreen", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "targetFramerate", ty:
// "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vrResolutionScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "menuVRResolutionScaleMultiplier",
// ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "antiAliasingLevel", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bloomPrePassGraphicsSettings",
// ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "mainEffectGraphicsSettings", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "mirrorGraphicsSettings", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxNumberOfCutSoundEffects", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "maxShockwaveParticles", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "burnMarkTrailsEnabled", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "smokeGraphicsSettings", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "screenDisplacementEffectsEnabled", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "enableAlphaFeatures", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "useFixedFoveatedRenderingDuringGameplay", ty: "bool", modifiers: "", def_value: Some("{}") },
// CppParam { name: "depthTextureEnabled", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "roomCenter", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") },
// CppParam { name: "roomRotation", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "controllerPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") },
// CppParam { name: "controllerRotation", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "controllersRumbleEnabled", ty: "bool", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "smoothCameraEnabled", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "smoothCameraFieldOfView", ty: "float_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "smoothCameraPositionSmooth", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "smoothCameraRotationSmooth", ty: "float_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "smoothCameraThirdPersonEnabled", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "smoothCameraThirdPersonPosition", ty:
// "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "smoothCameraThirdPersonEulerAngles", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") },
// CppParam { name: "volume", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ambientVolumeScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "overrideAudioLatency", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "audioLatency", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "enableFPSCounter", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "enableFPSRecorder", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "enableMemoryTracker", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "createScreenshotDuringTheGame", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "language", ty: "::BGLib::Polyglot::Language", modifiers: "", def_value: Some("{}") }, CppParam { name: "pauseButtonPressDurationLevel", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "useCustomServerEnvironment", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "forceGameLiftServerEnvironment", ty: "bool", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "customServerHostName", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cpuLevel", ty: "int32_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "gpuLevel", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig::__PerformanceConfigurationChecks__GameConfig(
    ::UnityEngine::Vector2Int editorWindowResolution, ::UnityEngine::Vector2Int windowResolution, bool fullscreen, float_t targetFramerate, float_t vrResolutionScale,
    float_t menuVRResolutionScaleMultiplier, int32_t antiAliasingLevel, int32_t bloomPrePassGraphicsSettings, int32_t mainEffectGraphicsSettings, int32_t mirrorGraphicsSettings,
    int32_t maxNumberOfCutSoundEffects, int32_t maxShockwaveParticles, bool burnMarkTrailsEnabled, bool smokeGraphicsSettings, bool screenDisplacementEffectsEnabled, bool enableAlphaFeatures,
    bool useFixedFoveatedRenderingDuringGameplay, bool depthTextureEnabled, ::UnityEngine::Vector3 roomCenter, float_t roomRotation, ::UnityEngine::Vector3 controllerPosition,
    ::UnityEngine::Vector3 controllerRotation, bool controllersRumbleEnabled, bool smoothCameraEnabled, float_t smoothCameraFieldOfView, float_t smoothCameraPositionSmooth,
    float_t smoothCameraRotationSmooth, bool smoothCameraThirdPersonEnabled, ::UnityEngine::Vector3 smoothCameraThirdPersonPosition, ::UnityEngine::Vector3 smoothCameraThirdPersonEulerAngles,
    float_t volume, float_t ambientVolumeScale, bool overrideAudioLatency, float_t audioLatency, bool enableFPSCounter, bool enableFPSRecorder, bool enableMemoryTracker,
    bool createScreenshotDuringTheGame, ::BGLib::Polyglot::Language language, int32_t pauseButtonPressDurationLevel, bool useCustomServerEnvironment, bool forceGameLiftServerEnvironment,
    ::StringW customServerHostName, int32_t cpuLevel, int32_t gpuLevel) noexcept {
  this->editorWindowResolution = editorWindowResolution;
  this->windowResolution = windowResolution;
  this->fullscreen = fullscreen;
  this->targetFramerate = targetFramerate;
  this->vrResolutionScale = vrResolutionScale;
  this->menuVRResolutionScaleMultiplier = menuVRResolutionScaleMultiplier;
  this->antiAliasingLevel = antiAliasingLevel;
  this->bloomPrePassGraphicsSettings = bloomPrePassGraphicsSettings;
  this->mainEffectGraphicsSettings = mainEffectGraphicsSettings;
  this->mirrorGraphicsSettings = mirrorGraphicsSettings;
  this->maxNumberOfCutSoundEffects = maxNumberOfCutSoundEffects;
  this->maxShockwaveParticles = maxShockwaveParticles;
  this->burnMarkTrailsEnabled = burnMarkTrailsEnabled;
  this->smokeGraphicsSettings = smokeGraphicsSettings;
  this->screenDisplacementEffectsEnabled = screenDisplacementEffectsEnabled;
  this->enableAlphaFeatures = enableAlphaFeatures;
  this->useFixedFoveatedRenderingDuringGameplay = useFixedFoveatedRenderingDuringGameplay;
  this->depthTextureEnabled = depthTextureEnabled;
  this->roomCenter = roomCenter;
  this->roomRotation = roomRotation;
  this->controllerPosition = controllerPosition;
  this->controllerRotation = controllerRotation;
  this->controllersRumbleEnabled = controllersRumbleEnabled;
  this->smoothCameraEnabled = smoothCameraEnabled;
  this->smoothCameraFieldOfView = smoothCameraFieldOfView;
  this->smoothCameraPositionSmooth = smoothCameraPositionSmooth;
  this->smoothCameraRotationSmooth = smoothCameraRotationSmooth;
  this->smoothCameraThirdPersonEnabled = smoothCameraThirdPersonEnabled;
  this->smoothCameraThirdPersonPosition = smoothCameraThirdPersonPosition;
  this->smoothCameraThirdPersonEulerAngles = smoothCameraThirdPersonEulerAngles;
  this->volume = volume;
  this->ambientVolumeScale = ambientVolumeScale;
  this->overrideAudioLatency = overrideAudioLatency;
  this->audioLatency = audioLatency;
  this->enableFPSCounter = enableFPSCounter;
  this->enableFPSRecorder = enableFPSRecorder;
  this->enableMemoryTracker = enableMemoryTracker;
  this->createScreenshotDuringTheGame = createScreenshotDuringTheGame;
  this->language = language;
  this->pauseButtonPressDurationLevel = pauseButtonPressDurationLevel;
  this->useCustomServerEnvironment = useCustomServerEnvironment;
  this->forceGameLiftServerEnvironment = forceGameLiftServerEnvironment;
  this->customServerHostName = customServerHostName;
  this->cpuLevel = cpuLevel;
  this->gpuLevel = gpuLevel;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig::__PerformanceConfigurationChecks__GameConfig() {}
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
constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__PlayerConfig::__PerformanceConfigurationChecks__PlayerConfig(
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
constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__PlayerConfig::__PerformanceConfigurationChecks__PlayerConfig() {}
// Ctor Parameters [CppParam { name: "modifiers", ty: "::GlobalNamespace::GameplayModifierMask", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__LevelConfig::__PerformanceConfigurationChecks__LevelConfig(::GlobalNamespace::GameplayModifierMask modifiers) noexcept {
  this->modifiers = modifiers;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__LevelConfig::__PerformanceConfigurationChecks__LevelConfig() {}
//  Writing Method size for method: ::GlobalNamespace::PerformanceConfigurationChecks.IsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PerformanceConfigurationChecks::*)()>(
    &::GlobalNamespace::PerformanceConfigurationChecks::IsValid)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x23fabb0;

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
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x23fac0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceConfigurationChecks*>::get(),
                                                                               "CreateErrorLog", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceConfigurationChecks.SetExpected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PerformanceConfigurationChecks::*)(
    ::GlobalNamespace::MainSettingsModelSO*, ::GlobalNamespace::PlayerSpecificSettings*, ::GlobalNamespace::GameplayModifierMask)>(&::GlobalNamespace::PerformanceConfigurationChecks::SetExpected)> {
  constexpr static std::size_t size = 0xad0;
  constexpr static std::size_t addrs = 0x23faea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceConfigurationChecks*>::get(), "SetExpected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MainSettingsModelSO*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifierMask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceConfigurationChecks.VerifyExpected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PerformanceConfigurationChecks::*)(
    ::GlobalNamespace::MainSettingsModelSO*, ::GlobalNamespace::PlayerSpecificSettings*, ::GlobalNamespace::GameplayModifierMask)>(
    &::GlobalNamespace::PerformanceConfigurationChecks::VerifyExpected)> {
  constexpr static std::size_t size = 0x1dec;
  constexpr static std::size_t addrs = 0x23fb978;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceConfigurationChecks*>::get(), "VerifyExpected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MainSettingsModelSO*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifierMask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceConfigurationChecks._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PerformanceConfigurationChecks::*)()>(
    &::GlobalNamespace::PerformanceConfigurationChecks::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x23fd764;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceConfigurationChecks*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__AppConfig& GlobalNamespace::PerformanceConfigurationChecks::__cordl_internal_get_appConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___appConfig;
}
constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__AppConfig const& GlobalNamespace::PerformanceConfigurationChecks::__cordl_internal_get_appConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___appConfig;
}
constexpr void GlobalNamespace::PerformanceConfigurationChecks::__cordl_internal_set_appConfig(::GlobalNamespace::__PerformanceConfigurationChecks__AppConfig value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___appConfig = value;
}
constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__XRConfig& GlobalNamespace::PerformanceConfigurationChecks::__cordl_internal_get_xrConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xrConfig;
}
constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__XRConfig const& GlobalNamespace::PerformanceConfigurationChecks::__cordl_internal_get_xrConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xrConfig;
}
constexpr void GlobalNamespace::PerformanceConfigurationChecks::__cordl_internal_set_xrConfig(::GlobalNamespace::__PerformanceConfigurationChecks__XRConfig value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xrConfig = value;
}
constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig& GlobalNamespace::PerformanceConfigurationChecks::__cordl_internal_get_ovrConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ovrConfig;
}
constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig const& GlobalNamespace::PerformanceConfigurationChecks::__cordl_internal_get_ovrConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ovrConfig;
}
constexpr void GlobalNamespace::PerformanceConfigurationChecks::__cordl_internal_set_ovrConfig(::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ovrConfig = value;
}
constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__OculusXRConfig& GlobalNamespace::PerformanceConfigurationChecks::__cordl_internal_get_oculusXrConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___oculusXrConfig;
}
constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__OculusXRConfig const& GlobalNamespace::PerformanceConfigurationChecks::__cordl_internal_get_oculusXrConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___oculusXrConfig;
}
constexpr void GlobalNamespace::PerformanceConfigurationChecks::__cordl_internal_set_oculusXrConfig(::GlobalNamespace::__PerformanceConfigurationChecks__OculusXRConfig value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___oculusXrConfig = value;
}
constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig& GlobalNamespace::PerformanceConfigurationChecks::__cordl_internal_get_gameConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameConfig;
}
constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig const& GlobalNamespace::PerformanceConfigurationChecks::__cordl_internal_get_gameConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameConfig;
}
constexpr void GlobalNamespace::PerformanceConfigurationChecks::__cordl_internal_set_gameConfig(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameConfig = value;
}
constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__PlayerConfig& GlobalNamespace::PerformanceConfigurationChecks::__cordl_internal_get_playerConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerConfig;
}
constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__PlayerConfig const& GlobalNamespace::PerformanceConfigurationChecks::__cordl_internal_get_playerConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerConfig;
}
constexpr void GlobalNamespace::PerformanceConfigurationChecks::__cordl_internal_set_playerConfig(::GlobalNamespace::__PerformanceConfigurationChecks__PlayerConfig value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playerConfig = value;
}
constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__LevelConfig& GlobalNamespace::PerformanceConfigurationChecks::__cordl_internal_get_levelConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelConfig;
}
constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__LevelConfig const& GlobalNamespace::PerformanceConfigurationChecks::__cordl_internal_get_levelConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelConfig;
}
constexpr void GlobalNamespace::PerformanceConfigurationChecks::__cordl_internal_set_levelConfig(::GlobalNamespace::__PerformanceConfigurationChecks__LevelConfig value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___levelConfig = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__PerformanceConfigurationChecks__Mismatch>*&
GlobalNamespace::PerformanceConfigurationChecks::__cordl_internal_get_invalid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___invalid;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__PerformanceConfigurationChecks__Mismatch>*> const&
GlobalNamespace::PerformanceConfigurationChecks::__cordl_internal_get_invalid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___invalid;
}
constexpr void GlobalNamespace::PerformanceConfigurationChecks::__cordl_internal_set_invalid(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__PerformanceConfigurationChecks__Mismatch>* value) {
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
inline bool GlobalNamespace::PerformanceConfigurationChecks::SetExpected(::GlobalNamespace::MainSettingsModelSO* mainSettings, ::GlobalNamespace::PlayerSpecificSettings* playerSettings,
                                                                         ::GlobalNamespace::GameplayModifierMask modifiers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceConfigurationChecks*>::get(), "SetExpected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MainSettingsModelSO*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifierMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, mainSettings, playerSettings, modifiers);
}
inline bool GlobalNamespace::PerformanceConfigurationChecks::VerifyExpected(::GlobalNamespace::MainSettingsModelSO* mainSettings, ::GlobalNamespace::PlayerSpecificSettings* playerSettings,
                                                                            ::GlobalNamespace::GameplayModifierMask modifiers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceConfigurationChecks*>::get(), "VerifyExpected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MainSettingsModelSO*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifierMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, mainSettings, playerSettings, modifiers);
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
inline ::GlobalNamespace::PerformanceConfigurationChecks* GlobalNamespace::PerformanceConfigurationChecks::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PerformanceConfigurationChecks*>());
}
inline void GlobalNamespace::PerformanceConfigurationChecks::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceConfigurationChecks*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerformanceConfigurationChecks::PerformanceConfigurationChecks() {}
