#pragma once
// IWYU pragma private; include "GlobalNamespace/PerformanceConfigurationChecks.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/Polyglot/zzzz__Language_def.hpp"
#include "BeatSaber/GameSettings/zzzz__WindowMode_def.hpp"
#include "BeatSaber/PerformancePresets/zzzz__BloomPrepassTextureEffectPreset_def.hpp"
#include "BeatSaber/PerformancePresets/zzzz__MainEffectPreset_def.hpp"
#include "BeatSaber/PerformancePresets/zzzz__MirrorQualityPreset_def.hpp"
#include "BeatSaber/PerformancePresets/zzzz__ObstaclesQuality_def.hpp"
#include "GlobalNamespace/zzzz__ArcVisibilityType_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentEffectsFilterPreset_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierMask_def.hpp"
#include "GlobalNamespace/zzzz__NoteJumpDurationTypeSettings_def.hpp"
#include "GlobalNamespace/zzzz__OVRManager_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__PerformanceConfigurationChecks_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__TextureDimension_def.hpp"
#include "UnityEngine/XR/zzzz__XRSettings_def.hpp"
#include "UnityEngine/zzzz__SystemLanguage_def.hpp"
#include "UnityEngine/zzzz__ThreadPriority_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PerformanceConfigurationChecks)
namespace BGLib::Polyglot {
struct Language;
}
namespace BeatSaber::GameSettings {
class GraphicSettingsHandler;
}
namespace BeatSaber::GameSettings {
class MainSettingsHandler;
}
namespace BeatSaber::GameSettings {
struct WindowMode;
}
namespace BeatSaber::PerformancePresets {
struct BloomPrepassTextureEffectPreset;
}
namespace BeatSaber::PerformancePresets {
struct MainEffectPreset;
}
namespace BeatSaber::PerformancePresets {
struct MirrorQualityPreset;
}
namespace BeatSaber::PerformancePresets {
struct ObstaclesQuality;
}
namespace GlobalNamespace {
struct ArcVisibilityType;
}
namespace GlobalNamespace {
struct EnvironmentEffectsFilterPreset;
}
namespace GlobalNamespace {
struct GameplayModifierMask;
}
namespace GlobalNamespace {
struct NoteJumpDurationTypeSettings;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
struct __OVRManager__ColorSpace;
}
namespace GlobalNamespace {
struct __OVRManager__CompositionMethod;
}
namespace GlobalNamespace {
struct __OVRManager__TrackingOrigin;
}
namespace GlobalNamespace {
struct __OVRPlugin__FoveatedRenderingLevel;
}
namespace GlobalNamespace {
struct __OVRPlugin__LayerSharpenType;
}
namespace GlobalNamespace {
struct __OVRPlugin__ProcessorPerformanceLevel;
}
namespace GlobalNamespace {
struct __PerformanceConfigurationChecks__AppConfig;
}
namespace GlobalNamespace {
struct __PerformanceConfigurationChecks__GameConfig;
}
namespace GlobalNamespace {
struct __PerformanceConfigurationChecks__LevelConfig;
}
namespace GlobalNamespace {
struct __PerformanceConfigurationChecks__Mismatch;
}
namespace GlobalNamespace {
struct __PerformanceConfigurationChecks__OVRConfig;
}
namespace GlobalNamespace {
struct __PerformanceConfigurationChecks__OculusXRConfig;
}
namespace GlobalNamespace {
struct __PerformanceConfigurationChecks__PlayerConfig;
}
namespace GlobalNamespace {
struct __PerformanceConfigurationChecks__XRConfig;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine::Rendering {
struct TextureDimension;
}
namespace UnityEngine::XR {
struct __XRSettings__StereoRenderingMode;
}
namespace UnityEngine {
struct SystemLanguage;
}
namespace UnityEngine {
struct ThreadPriority;
}
namespace UnityEngine {
struct Vector2Int;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class PerformanceConfigurationChecks;
}
namespace GlobalNamespace {
struct __PerformanceConfigurationChecks__AppConfig;
}
namespace GlobalNamespace {
struct __PerformanceConfigurationChecks__GameConfig;
}
namespace GlobalNamespace {
struct __PerformanceConfigurationChecks__LevelConfig;
}
namespace GlobalNamespace {
struct __PerformanceConfigurationChecks__Mismatch;
}
namespace GlobalNamespace {
struct __PerformanceConfigurationChecks__OVRConfig;
}
namespace GlobalNamespace {
struct __PerformanceConfigurationChecks__OculusXRConfig;
}
namespace GlobalNamespace {
struct __PerformanceConfigurationChecks__PlayerConfig;
}
namespace GlobalNamespace {
struct __PerformanceConfigurationChecks__XRConfig;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PerformanceConfigurationChecks);
MARK_VAL_T(::GlobalNamespace::__PerformanceConfigurationChecks__AppConfig);
MARK_VAL_T(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig);
MARK_VAL_T(::GlobalNamespace::__PerformanceConfigurationChecks__LevelConfig);
MARK_VAL_T(::GlobalNamespace::__PerformanceConfigurationChecks__Mismatch);
MARK_VAL_T(::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig);
MARK_VAL_T(::GlobalNamespace::__PerformanceConfigurationChecks__OculusXRConfig);
MARK_VAL_T(::GlobalNamespace::__PerformanceConfigurationChecks__PlayerConfig);
MARK_VAL_T(::GlobalNamespace::__PerformanceConfigurationChecks__XRConfig);
// Type: ::Mismatch
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PerformanceConfigurationChecks::Mismatch
struct CORDL_TYPE __PerformanceConfigurationChecks__Mismatch {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PerformanceConfigurationChecks__Mismatch();

  // Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "frames", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PerformanceConfigurationChecks__Mismatch(::StringW message, int32_t frames) noexcept;

  /// @brief Field message, offset: 0x0, size: 0x8, def value: None
  ::StringW message;

  /// @brief Field frames, offset: 0x8, size: 0x4, def value: None
  int32_t frames;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PerformanceConfigurationChecks__Mismatch, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__Mismatch, message) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__Mismatch, frames) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::AppConfig
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PerformanceConfigurationChecks::AppConfig
struct CORDL_TYPE __PerformanceConfigurationChecks__AppConfig {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PerformanceConfigurationChecks__AppConfig();

  // Ctor Parameters [CppParam { name: "targetFrameRate", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "systemLanguage", ty: "::UnityEngine::SystemLanguage", modifiers: "",
  // def_value: None }, CppParam { name: "runInBackground", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "backgroundLoadingPriority", ty: "::UnityEngine::ThreadPriority", modifiers:
  // "", def_value: None }]
  constexpr __PerformanceConfigurationChecks__AppConfig(int32_t targetFrameRate, ::UnityEngine::SystemLanguage systemLanguage, bool runInBackground,
                                                        ::UnityEngine::ThreadPriority backgroundLoadingPriority) noexcept;

  /// @brief Field targetFrameRate, offset: 0x0, size: 0x4, def value: None
  int32_t targetFrameRate;

  /// @brief Field systemLanguage, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::SystemLanguage systemLanguage;

  /// @brief Field runInBackground, offset: 0x8, size: 0x1, def value: None
  bool runInBackground;

  /// @brief Field backgroundLoadingPriority, offset: 0xc, size: 0x4, def value: None
  ::UnityEngine::ThreadPriority backgroundLoadingPriority;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PerformanceConfigurationChecks__AppConfig, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__AppConfig, targetFrameRate) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__AppConfig, systemLanguage) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__AppConfig, runInBackground) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__AppConfig, backgroundLoadingPriority) == 0xc, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::XRConfig
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 61, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PerformanceConfigurationChecks::XRConfig
struct CORDL_TYPE __PerformanceConfigurationChecks__XRConfig {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PerformanceConfigurationChecks__XRConfig();

  // Ctor Parameters [CppParam { name: "enabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isDeviceActive", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "loadedDeviceName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "stereoRenderingMode", ty: "::UnityEngine::XR::__XRSettings__StereoRenderingMode", modifiers: "",
  // def_value: None }, CppParam { name: "eyeTextureWidth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "eyeTextureHeight", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "eyeTextureResolutionScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "deviceEyeTextureDimension", ty: "::UnityEngine::Rendering::TextureDimension",
  // modifiers: "", def_value: None }, CppParam { name: "renderViewportScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "occlusionMaskScale", ty: "float_t", modifiers: "",
  // def_value: None }, CppParam { name: "useOcclusionMesh", ty: "bool", modifiers: "", def_value: None }]
  constexpr __PerformanceConfigurationChecks__XRConfig(bool enabled, bool isDeviceActive, ::StringW loadedDeviceName, ::UnityEngine::XR::__XRSettings__StereoRenderingMode stereoRenderingMode,
                                                       int32_t eyeTextureWidth, int32_t eyeTextureHeight, float_t eyeTextureResolutionScale,
                                                       ::UnityEngine::Rendering::TextureDimension deviceEyeTextureDimension, float_t renderViewportScale, float_t occlusionMaskScale,
                                                       bool useOcclusionMesh) noexcept;

  /// @brief Field enabled, offset: 0x0, size: 0x1, def value: None
  bool enabled;

  /// @brief Field isDeviceActive, offset: 0x1, size: 0x1, def value: None
  bool isDeviceActive;

  /// @brief Field loadedDeviceName, offset: 0x8, size: 0x8, def value: None
  ::StringW loadedDeviceName;

  /// @brief Field stereoRenderingMode, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::XR::__XRSettings__StereoRenderingMode stereoRenderingMode;

  /// @brief Field eyeTextureWidth, offset: 0x14, size: 0x4, def value: None
  int32_t eyeTextureWidth;

  /// @brief Field eyeTextureHeight, offset: 0x18, size: 0x4, def value: None
  int32_t eyeTextureHeight;

  /// @brief Field eyeTextureResolutionScale, offset: 0x1c, size: 0x4, def value: None
  float_t eyeTextureResolutionScale;

  /// @brief Field deviceEyeTextureDimension, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::Rendering::TextureDimension deviceEyeTextureDimension;

  /// @brief Field renderViewportScale, offset: 0x24, size: 0x4, def value: None
  float_t renderViewportScale;

  /// @brief Field occlusionMaskScale, offset: 0x28, size: 0x4, def value: None
  float_t occlusionMaskScale;

  /// @brief Field useOcclusionMesh, offset: 0x2c, size: 0x1, def value: None
  bool useOcclusionMesh;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PerformanceConfigurationChecks__XRConfig, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__XRConfig, enabled) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__XRConfig, isDeviceActive) == 0x1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__XRConfig, loadedDeviceName) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__XRConfig, stereoRenderingMode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__XRConfig, eyeTextureWidth) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__XRConfig, eyeTextureHeight) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__XRConfig, eyeTextureResolutionScale) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__XRConfig, deviceEyeTextureDimension) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__XRConfig, renderViewportScale) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__XRConfig, occlusionMaskScale) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__XRConfig, useOcclusionMesh) == 0x2c, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRConfig
// SizeInfo { instance_size: 84, native_size: 112, calculated_instance_size: 84, calculated_native_size: 97, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PerformanceConfigurationChecks::OVRConfig
struct CORDL_TYPE __PerformanceConfigurationChecks__OVRConfig {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PerformanceConfigurationChecks__OVRConfig();

  // Ctor Parameters [CppParam { name: "spaceWarpEnabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "chromatic", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "monoscopic", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "colorGamut", ty: "::GlobalNamespace::__OVRManager__ColorSpace", modifiers: "", def_value: None }, CppParam { name:
  // "nativeColorGamut", ty: "::GlobalNamespace::__OVRManager__ColorSpace", modifiers: "", def_value: None }, CppParam { name: "compositionMethod", ty:
  // "::GlobalNamespace::__OVRManager__CompositionMethod", modifiers: "", def_value: None }, CppParam { name: "enableMixedReality", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "trackingOriginType", ty: "::GlobalNamespace::__OVRManager__TrackingOrigin", modifiers: "", def_value: None }, CppParam { name: "usePositionTracking", ty: "bool", modifiers: "", def_value: None
  // }, CppParam { name: "useRotationTracking", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "sharpenType", ty: "::GlobalNamespace::__OVRPlugin__LayerSharpenType", modifiers: "",
  // def_value: None }, CppParam { name: "enableDynamicResolution", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "minDynamicResolutionScale", ty: "float_t", modifiers: "", def_value:
  // None }, CppParam { name: "maxDynamicResolutionScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "simultaneousHandsAndControllersSupport", ty: "bool", modifiers: "",
  // def_value: None }, CppParam { name: "suggestedCpuPerfLevel", ty: "::GlobalNamespace::__OVRPlugin__ProcessorPerformanceLevel", modifiers: "", def_value: None }, CppParam { name:
  // "suggestedGpuPerfLevel", ty: "::GlobalNamespace::__OVRPlugin__ProcessorPerformanceLevel", modifiers: "", def_value: None }, CppParam { name: "systemDisplayFrequency", ty: "float_t", modifiers:
  // "", def_value: None }, CppParam { name: "eyeTrackedFoveatedRenderingEnabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "foveatedRenderingLevel", ty:
  // "::GlobalNamespace::__OVRPlugin__FoveatedRenderingLevel", modifiers: "", def_value: None }, CppParam { name: "useDynamicFoveatedRendering", ty: "bool", modifiers: "", def_value: None }, CppParam
  // { name: "gpuUtilSupported", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "gpuUtilLevel", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "eyeFovPremultipliedAlphaModeEnabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "asymmetricFovEnabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "eyeTextureArrayEnabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "localDimmingSupported", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "localDimming",
  // ty: "bool", modifiers: "", def_value: None }]
  constexpr __PerformanceConfigurationChecks__OVRConfig(bool spaceWarpEnabled, bool chromatic, bool monoscopic, ::GlobalNamespace::__OVRManager__ColorSpace colorGamut,
                                                        ::GlobalNamespace::__OVRManager__ColorSpace nativeColorGamut, ::GlobalNamespace::__OVRManager__CompositionMethod compositionMethod,
                                                        bool enableMixedReality, ::GlobalNamespace::__OVRManager__TrackingOrigin trackingOriginType, bool usePositionTracking, bool useRotationTracking,
                                                        ::GlobalNamespace::__OVRPlugin__LayerSharpenType sharpenType, bool enableDynamicResolution, float_t minDynamicResolutionScale,
                                                        float_t maxDynamicResolutionScale, bool simultaneousHandsAndControllersSupport,
                                                        ::GlobalNamespace::__OVRPlugin__ProcessorPerformanceLevel suggestedCpuPerfLevel,
                                                        ::GlobalNamespace::__OVRPlugin__ProcessorPerformanceLevel suggestedGpuPerfLevel, float_t systemDisplayFrequency,
                                                        bool eyeTrackedFoveatedRenderingEnabled, ::GlobalNamespace::__OVRPlugin__FoveatedRenderingLevel foveatedRenderingLevel,
                                                        bool useDynamicFoveatedRendering, bool gpuUtilSupported, float_t gpuUtilLevel, bool eyeFovPremultipliedAlphaModeEnabled,
                                                        bool asymmetricFovEnabled, bool eyeTextureArrayEnabled, bool localDimmingSupported, bool localDimming) noexcept;

  /// @brief Field spaceWarpEnabled, offset: 0x0, size: 0x1, def value: None
  bool spaceWarpEnabled;

  /// @brief Field chromatic, offset: 0x1, size: 0x1, def value: None
  bool chromatic;

  /// @brief Field monoscopic, offset: 0x2, size: 0x1, def value: None
  bool monoscopic;

  /// @brief Field colorGamut, offset: 0x4, size: 0x4, def value: None
  ::GlobalNamespace::__OVRManager__ColorSpace colorGamut;

  /// @brief Field nativeColorGamut, offset: 0x8, size: 0x4, def value: None
  ::GlobalNamespace::__OVRManager__ColorSpace nativeColorGamut;

  /// @brief Field compositionMethod, offset: 0xc, size: 0x4, def value: None
  ::GlobalNamespace::__OVRManager__CompositionMethod compositionMethod;

  /// @brief Field enableMixedReality, offset: 0x10, size: 0x1, def value: None
  bool enableMixedReality;

  /// @brief Field trackingOriginType, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::__OVRManager__TrackingOrigin trackingOriginType;

  /// @brief Field usePositionTracking, offset: 0x18, size: 0x1, def value: None
  bool usePositionTracking;

  /// @brief Field useRotationTracking, offset: 0x19, size: 0x1, def value: None
  bool useRotationTracking;

  /// @brief Field sharpenType, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__LayerSharpenType sharpenType;

  /// @brief Field enableDynamicResolution, offset: 0x20, size: 0x1, def value: None
  bool enableDynamicResolution;

  /// @brief Field minDynamicResolutionScale, offset: 0x24, size: 0x4, def value: None
  float_t minDynamicResolutionScale;

  /// @brief Field maxDynamicResolutionScale, offset: 0x28, size: 0x4, def value: None
  float_t maxDynamicResolutionScale;

  /// @brief Field simultaneousHandsAndControllersSupport, offset: 0x2c, size: 0x1, def value: None
  bool simultaneousHandsAndControllersSupport;

  /// @brief Field suggestedCpuPerfLevel, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__ProcessorPerformanceLevel suggestedCpuPerfLevel;

  /// @brief Field suggestedGpuPerfLevel, offset: 0x34, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__ProcessorPerformanceLevel suggestedGpuPerfLevel;

  /// @brief Field systemDisplayFrequency, offset: 0x38, size: 0x4, def value: None
  float_t systemDisplayFrequency;

  /// @brief Field eyeTrackedFoveatedRenderingEnabled, offset: 0x3c, size: 0x1, def value: None
  bool eyeTrackedFoveatedRenderingEnabled;

  /// @brief Field foveatedRenderingLevel, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__FoveatedRenderingLevel foveatedRenderingLevel;

  /// @brief Field useDynamicFoveatedRendering, offset: 0x44, size: 0x1, def value: None
  bool useDynamicFoveatedRendering;

  /// @brief Field gpuUtilSupported, offset: 0x45, size: 0x1, def value: None
  bool gpuUtilSupported;

  /// @brief Field gpuUtilLevel, offset: 0x48, size: 0x4, def value: None
  float_t gpuUtilLevel;

  /// @brief Field eyeFovPremultipliedAlphaModeEnabled, offset: 0x4c, size: 0x1, def value: None
  bool eyeFovPremultipliedAlphaModeEnabled;

  /// @brief Field asymmetricFovEnabled, offset: 0x4d, size: 0x1, def value: None
  bool asymmetricFovEnabled;

  /// @brief Field eyeTextureArrayEnabled, offset: 0x4e, size: 0x1, def value: None
  bool eyeTextureArrayEnabled;

  /// @brief Field localDimmingSupported, offset: 0x4f, size: 0x1, def value: None
  bool localDimmingSupported;

  /// @brief Field localDimming, offset: 0x50, size: 0x1, def value: None
  bool localDimming;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x54 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig, 0x54>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig, spaceWarpEnabled) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig, chromatic) == 0x1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig, monoscopic) == 0x2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig, colorGamut) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig, nativeColorGamut) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig, compositionMethod) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig, enableMixedReality) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig, trackingOriginType) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig, usePositionTracking) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig, useRotationTracking) == 0x19, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig, sharpenType) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig, enableDynamicResolution) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig, minDynamicResolutionScale) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig, maxDynamicResolutionScale) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig, simultaneousHandsAndControllersSupport) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig, suggestedCpuPerfLevel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig, suggestedGpuPerfLevel) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig, systemDisplayFrequency) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig, eyeTrackedFoveatedRenderingEnabled) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig, foveatedRenderingLevel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig, useDynamicFoveatedRendering) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig, gpuUtilSupported) == 0x45, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig, gpuUtilLevel) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig, eyeFovPremultipliedAlphaModeEnabled) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig, asymmetricFovEnabled) == 0x4d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig, eyeTextureArrayEnabled) == 0x4e, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig, localDimmingSupported) == 0x4f, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig, localDimming) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OculusXRConfig
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PerformanceConfigurationChecks::OculusXRConfig
struct CORDL_TYPE __PerformanceConfigurationChecks__OculusXRConfig {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PerformanceConfigurationChecks__OculusXRConfig();

  // Ctor Parameters [CppParam { name: "boundaryDimension", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
  constexpr __PerformanceConfigurationChecks__OculusXRConfig(::UnityEngine::Vector3 boundaryDimension) noexcept;

  /// @brief Field boundaryDimension, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 boundaryDimension;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PerformanceConfigurationChecks__OculusXRConfig, 0xc>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__OculusXRConfig, boundaryDimension) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GameConfig
// SizeInfo { instance_size: 272, native_size: 296, calculated_instance_size: 272, calculated_native_size: 288, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PerformanceConfigurationChecks::GameConfig
struct CORDL_TYPE __PerformanceConfigurationChecks__GameConfig {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PerformanceConfigurationChecks__GameConfig();

  // Ctor Parameters [CppParam { name: "roomCenter", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "roomRotation", ty: "double_t", modifiers: "", def_value: None },
  // CppParam { name: "controllerPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "controllerRotation", ty: "::UnityEngine::Vector3", modifiers: "",
  // def_value: None }, CppParam { name: "hapticFeedback", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "smoothCameraEnabled", ty: "bool", modifiers: "", def_value: None }, CppParam
  // { name: "smoothCameraFieldOfView", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "smoothCameraPositionSmooth", ty: "double_t", modifiers: "", def_value: None }, CppParam {
  // name: "smoothCameraRotationSmooth", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "smoothCameraThirdPersonEnabled", ty: "bool", modifiers: "", def_value: None }, CppParam {
  // name: "smoothCameraThirdPersonPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "smoothCameraThirdPersonEulerAngles", ty: "::UnityEngine::Vector3",
  // modifiers: "", def_value: None }, CppParam { name: "volume", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "ambientVolumeScale", ty: "double_t", modifiers: "", def_value:
  // None }, CppParam { name: "overrideAudioLatency", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "audioLatency", ty: "double_t", modifiers: "", def_value: None }, CppParam { name:
  // "enableFPSCounter", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "enableFPSRecorder", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "enableMemoryTracker", ty:
  // "bool", modifiers: "", def_value: None }, CppParam { name: "createScreenshotDuringTheGame", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "language", ty:
  // "::BGLib::Polyglot::Language", modifiers: "", def_value: None }, CppParam { name: "pauseButtonPressDurationLevel", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "useCustomServerEnvironment", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "forceGameLiftServerEnvironment", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "customServerHostName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "windowResolution", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: None }, CppParam { name:
  // "windowMode", ty: "::BeatSaber::GameSettings::WindowMode", modifiers: "", def_value: None }, CppParam { name: "performancePresetKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam {
  // name: "renderViewportScale", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "targetFramerate", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "vSyncCount",
  // ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maxQueuedFrames", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "vrResolutionScale", ty: "double_t",
  // modifiers: "", def_value: None }, CppParam { name: "menuVRResolutionScaleMultiplier", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "antiAliasingLevel", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "bloomPrePassTextureEffect", ty: "::BeatSaber::PerformancePresets::BloomPrepassTextureEffectPreset", modifiers: "", def_value: None }, CppParam
  // { name: "mainEffectGraphicsSettings", ty: "::BeatSaber::PerformancePresets::MainEffectPreset", modifiers: "", def_value: None }, CppParam { name: "mirrorGraphicsSettings", ty:
  // "::BeatSaber::PerformancePresets::MirrorQualityPreset", modifiers: "", def_value: None }, CppParam { name: "maxNumberOfCutSoundEffects", ty: "int32_t", modifiers: "", def_value: None }, CppParam
  // { name: "maxShockwaveParticles", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "burnMarkTrailsEnabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "smokeGraphicsSettings", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "screenDisplacementEffectsEnabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "obstaclesQuality", ty: "::BeatSaber::PerformancePresets::ObstaclesQuality", modifiers: "", def_value: None }, CppParam { name: "cpuLevel", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "gpuLevel", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PerformanceConfigurationChecks__GameConfig(
      ::UnityEngine::Vector3 roomCenter, double_t roomRotation, ::UnityEngine::Vector3 controllerPosition, ::UnityEngine::Vector3 controllerRotation, bool hapticFeedback, bool smoothCameraEnabled,
      double_t smoothCameraFieldOfView, double_t smoothCameraPositionSmooth, double_t smoothCameraRotationSmooth, bool smoothCameraThirdPersonEnabled,
      ::UnityEngine::Vector3 smoothCameraThirdPersonPosition, ::UnityEngine::Vector3 smoothCameraThirdPersonEulerAngles, double_t volume, double_t ambientVolumeScale, bool overrideAudioLatency,
      double_t audioLatency, bool enableFPSCounter, bool enableFPSRecorder, bool enableMemoryTracker, bool createScreenshotDuringTheGame, ::BGLib::Polyglot::Language language,
      int32_t pauseButtonPressDurationLevel, bool useCustomServerEnvironment, bool forceGameLiftServerEnvironment, ::StringW customServerHostName, ::UnityEngine::Vector2Int windowResolution,
      ::BeatSaber::GameSettings::WindowMode windowMode, ::StringW performancePresetKey, double_t renderViewportScale, double_t targetFramerate, int32_t vSyncCount, int32_t maxQueuedFrames,
      double_t vrResolutionScale, double_t menuVRResolutionScaleMultiplier, int32_t antiAliasingLevel, ::BeatSaber::PerformancePresets::BloomPrepassTextureEffectPreset bloomPrePassTextureEffect,
      ::BeatSaber::PerformancePresets::MainEffectPreset mainEffectGraphicsSettings, ::BeatSaber::PerformancePresets::MirrorQualityPreset mirrorGraphicsSettings, int32_t maxNumberOfCutSoundEffects,
      int32_t maxShockwaveParticles, bool burnMarkTrailsEnabled, bool smokeGraphicsSettings, bool screenDisplacementEffectsEnabled, ::BeatSaber::PerformancePresets::ObstaclesQuality obstaclesQuality,
      int32_t cpuLevel, int32_t gpuLevel) noexcept;

  /// @brief Field roomCenter, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 roomCenter;

  /// @brief Field roomRotation, offset: 0x10, size: 0x8, def value: None
  double_t roomRotation;

  /// @brief Field controllerPosition, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 controllerPosition;

  /// @brief Field controllerRotation, offset: 0x24, size: 0xc, def value: None
  ::UnityEngine::Vector3 controllerRotation;

  /// @brief Field hapticFeedback, offset: 0x30, size: 0x1, def value: None
  bool hapticFeedback;

  /// @brief Field smoothCameraEnabled, offset: 0x31, size: 0x1, def value: None
  bool smoothCameraEnabled;

  /// @brief Field smoothCameraFieldOfView, offset: 0x38, size: 0x8, def value: None
  double_t smoothCameraFieldOfView;

  /// @brief Field smoothCameraPositionSmooth, offset: 0x40, size: 0x8, def value: None
  double_t smoothCameraPositionSmooth;

  /// @brief Field smoothCameraRotationSmooth, offset: 0x48, size: 0x8, def value: None
  double_t smoothCameraRotationSmooth;

  /// @brief Field smoothCameraThirdPersonEnabled, offset: 0x50, size: 0x1, def value: None
  bool smoothCameraThirdPersonEnabled;

  /// @brief Field smoothCameraThirdPersonPosition, offset: 0x54, size: 0xc, def value: None
  ::UnityEngine::Vector3 smoothCameraThirdPersonPosition;

  /// @brief Field smoothCameraThirdPersonEulerAngles, offset: 0x60, size: 0xc, def value: None
  ::UnityEngine::Vector3 smoothCameraThirdPersonEulerAngles;

  /// @brief Field volume, offset: 0x70, size: 0x8, def value: None
  double_t volume;

  /// @brief Field ambientVolumeScale, offset: 0x78, size: 0x8, def value: None
  double_t ambientVolumeScale;

  /// @brief Field overrideAudioLatency, offset: 0x80, size: 0x1, def value: None
  bool overrideAudioLatency;

  /// @brief Field audioLatency, offset: 0x88, size: 0x8, def value: None
  double_t audioLatency;

  /// @brief Field enableFPSCounter, offset: 0x90, size: 0x1, def value: None
  bool enableFPSCounter;

  /// @brief Field enableFPSRecorder, offset: 0x91, size: 0x1, def value: None
  bool enableFPSRecorder;

  /// @brief Field enableMemoryTracker, offset: 0x92, size: 0x1, def value: None
  bool enableMemoryTracker;

  /// @brief Field createScreenshotDuringTheGame, offset: 0x93, size: 0x1, def value: None
  bool createScreenshotDuringTheGame;

  /// @brief Field language, offset: 0x94, size: 0x4, def value: None
  ::BGLib::Polyglot::Language language;

  /// @brief Field pauseButtonPressDurationLevel, offset: 0x98, size: 0x4, def value: None
  int32_t pauseButtonPressDurationLevel;

  /// @brief Field useCustomServerEnvironment, offset: 0x9c, size: 0x1, def value: None
  bool useCustomServerEnvironment;

  /// @brief Field forceGameLiftServerEnvironment, offset: 0x9d, size: 0x1, def value: None
  bool forceGameLiftServerEnvironment;

  /// @brief Field customServerHostName, offset: 0xa0, size: 0x8, def value: None
  ::StringW customServerHostName;

  /// @brief Field windowResolution, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::Vector2Int windowResolution;

  /// @brief Field windowMode, offset: 0xb0, size: 0x4, def value: None
  ::BeatSaber::GameSettings::WindowMode windowMode;

  /// @brief Field performancePresetKey, offset: 0xb8, size: 0x8, def value: None
  ::StringW performancePresetKey;

  /// @brief Field renderViewportScale, offset: 0xc0, size: 0x8, def value: None
  double_t renderViewportScale;

  /// @brief Field targetFramerate, offset: 0xc8, size: 0x8, def value: None
  double_t targetFramerate;

  /// @brief Field vSyncCount, offset: 0xd0, size: 0x4, def value: None
  int32_t vSyncCount;

  /// @brief Field maxQueuedFrames, offset: 0xd4, size: 0x4, def value: None
  int32_t maxQueuedFrames;

  /// @brief Field vrResolutionScale, offset: 0xd8, size: 0x8, def value: None
  double_t vrResolutionScale;

  /// @brief Field menuVRResolutionScaleMultiplier, offset: 0xe0, size: 0x8, def value: None
  double_t menuVRResolutionScaleMultiplier;

  /// @brief Field antiAliasingLevel, offset: 0xe8, size: 0x4, def value: None
  int32_t antiAliasingLevel;

  /// @brief Field bloomPrePassTextureEffect, offset: 0xec, size: 0x4, def value: None
  ::BeatSaber::PerformancePresets::BloomPrepassTextureEffectPreset bloomPrePassTextureEffect;

  /// @brief Field mainEffectGraphicsSettings, offset: 0xf0, size: 0x4, def value: None
  ::BeatSaber::PerformancePresets::MainEffectPreset mainEffectGraphicsSettings;

  /// @brief Field mirrorGraphicsSettings, offset: 0xf4, size: 0x4, def value: None
  ::BeatSaber::PerformancePresets::MirrorQualityPreset mirrorGraphicsSettings;

  /// @brief Field maxNumberOfCutSoundEffects, offset: 0xf8, size: 0x4, def value: None
  int32_t maxNumberOfCutSoundEffects;

  /// @brief Field maxShockwaveParticles, offset: 0xfc, size: 0x4, def value: None
  int32_t maxShockwaveParticles;

  /// @brief Field burnMarkTrailsEnabled, offset: 0x100, size: 0x1, def value: None
  bool burnMarkTrailsEnabled;

  /// @brief Field smokeGraphicsSettings, offset: 0x101, size: 0x1, def value: None
  bool smokeGraphicsSettings;

  /// @brief Field screenDisplacementEffectsEnabled, offset: 0x102, size: 0x1, def value: None
  bool screenDisplacementEffectsEnabled;

  /// @brief Field obstaclesQuality, offset: 0x104, size: 0x4, def value: None
  ::BeatSaber::PerformancePresets::ObstaclesQuality obstaclesQuality;

  /// @brief Field cpuLevel, offset: 0x108, size: 0x4, def value: None
  int32_t cpuLevel;

  /// @brief Field gpuLevel, offset: 0x10c, size: 0x4, def value: None
  int32_t gpuLevel;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x110 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, 0x110>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, roomCenter) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, roomRotation) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, controllerPosition) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, controllerRotation) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, hapticFeedback) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, smoothCameraEnabled) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, smoothCameraFieldOfView) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, smoothCameraPositionSmooth) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, smoothCameraRotationSmooth) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, smoothCameraThirdPersonEnabled) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, smoothCameraThirdPersonPosition) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, smoothCameraThirdPersonEulerAngles) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, volume) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, ambientVolumeScale) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, overrideAudioLatency) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, audioLatency) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, enableFPSCounter) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, enableFPSRecorder) == 0x91, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, enableMemoryTracker) == 0x92, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, createScreenshotDuringTheGame) == 0x93, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, language) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, pauseButtonPressDurationLevel) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, useCustomServerEnvironment) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, forceGameLiftServerEnvironment) == 0x9d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, customServerHostName) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, windowResolution) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, windowMode) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, performancePresetKey) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, renderViewportScale) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, targetFramerate) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, vSyncCount) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, maxQueuedFrames) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, vrResolutionScale) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, menuVRResolutionScaleMultiplier) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, antiAliasingLevel) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, bloomPrePassTextureEffect) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, mainEffectGraphicsSettings) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, mirrorGraphicsSettings) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, maxNumberOfCutSoundEffects) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, maxShockwaveParticles) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, burnMarkTrailsEnabled) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, smokeGraphicsSettings) == 0x101, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, screenDisplacementEffectsEnabled) == 0x102, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, obstaclesQuality) == 0x104, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, cpuLevel) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, gpuLevel) == 0x10c, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PlayerConfig
// SizeInfo { instance_size: 60, native_size: 80, calculated_instance_size: 60, calculated_native_size: 76, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PerformanceConfigurationChecks::PlayerConfig
struct CORDL_TYPE __PerformanceConfigurationChecks__PlayerConfig {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PerformanceConfigurationChecks__PlayerConfig();

  // Ctor Parameters [CppParam { name: "leftHanded", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "automaticPlayerHeight", ty: "bool", modifiers: "", def_value: None }, CppParam {
  // name: "playerHeight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "noteJumpDurationTypeSettings", ty: "::GlobalNamespace::NoteJumpDurationTypeSettings", modifiers: "",
  // def_value: None }, CppParam { name: "noteJumpFixedDuration", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "noteJumpStartBeatOffset", ty: "float_t", modifiers: "", def_value:
  // None }, CppParam { name: "autoRestart", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "headsetHapticIntensity", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "arcsHapticFeedback", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "reduceDebris", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "noFailEffects", ty: "bool",
  // modifiers: "", def_value: None }, CppParam { name: "hideNoteSpawnEffect", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "arcVisibility", ty:
  // "::GlobalNamespace::ArcVisibilityType", modifiers: "", def_value: None }, CppParam { name: "saberTrailIntensity", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "noTextsAndHuds", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "advancedHud", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "sfxVolume", ty: "float_t",
  // modifiers: "", def_value: None }, CppParam { name: "adaptiveSfx", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "environmentEffectsFilterDefaultPreset", ty:
  // "::GlobalNamespace::EnvironmentEffectsFilterPreset", modifiers: "", def_value: None }, CppParam { name: "environmentEffectsFilterExpertPlusPreset", ty:
  // "::GlobalNamespace::EnvironmentEffectsFilterPreset", modifiers: "", def_value: None }]
  constexpr __PerformanceConfigurationChecks__PlayerConfig(bool leftHanded, bool automaticPlayerHeight, float_t playerHeight,
                                                           ::GlobalNamespace::NoteJumpDurationTypeSettings noteJumpDurationTypeSettings, float_t noteJumpFixedDuration, float_t noteJumpStartBeatOffset,
                                                           bool autoRestart, float_t headsetHapticIntensity, bool arcsHapticFeedback, bool reduceDebris, bool noFailEffects, bool hideNoteSpawnEffect,
                                                           ::GlobalNamespace::ArcVisibilityType arcVisibility, float_t saberTrailIntensity, bool noTextsAndHuds, bool advancedHud, float_t sfxVolume,
                                                           bool adaptiveSfx, ::GlobalNamespace::EnvironmentEffectsFilterPreset environmentEffectsFilterDefaultPreset,
                                                           ::GlobalNamespace::EnvironmentEffectsFilterPreset environmentEffectsFilterExpertPlusPreset) noexcept;

  /// @brief Field leftHanded, offset: 0x0, size: 0x1, def value: None
  bool leftHanded;

  /// @brief Field automaticPlayerHeight, offset: 0x1, size: 0x1, def value: None
  bool automaticPlayerHeight;

  /// @brief Field playerHeight, offset: 0x4, size: 0x4, def value: None
  float_t playerHeight;

  /// @brief Field noteJumpDurationTypeSettings, offset: 0x8, size: 0x4, def value: None
  ::GlobalNamespace::NoteJumpDurationTypeSettings noteJumpDurationTypeSettings;

  /// @brief Field noteJumpFixedDuration, offset: 0xc, size: 0x4, def value: None
  float_t noteJumpFixedDuration;

  /// @brief Field noteJumpStartBeatOffset, offset: 0x10, size: 0x4, def value: None
  float_t noteJumpStartBeatOffset;

  /// @brief Field autoRestart, offset: 0x14, size: 0x1, def value: None
  bool autoRestart;

  /// @brief Field headsetHapticIntensity, offset: 0x18, size: 0x4, def value: None
  float_t headsetHapticIntensity;

  /// @brief Field arcsHapticFeedback, offset: 0x1c, size: 0x1, def value: None
  bool arcsHapticFeedback;

  /// @brief Field reduceDebris, offset: 0x1d, size: 0x1, def value: None
  bool reduceDebris;

  /// @brief Field noFailEffects, offset: 0x1e, size: 0x1, def value: None
  bool noFailEffects;

  /// @brief Field hideNoteSpawnEffect, offset: 0x1f, size: 0x1, def value: None
  bool hideNoteSpawnEffect;

  /// @brief Field arcVisibility, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::ArcVisibilityType arcVisibility;

  /// @brief Field saberTrailIntensity, offset: 0x24, size: 0x4, def value: None
  float_t saberTrailIntensity;

  /// @brief Field noTextsAndHuds, offset: 0x28, size: 0x1, def value: None
  bool noTextsAndHuds;

  /// @brief Field advancedHud, offset: 0x29, size: 0x1, def value: None
  bool advancedHud;

  /// @brief Field sfxVolume, offset: 0x2c, size: 0x4, def value: None
  float_t sfxVolume;

  /// @brief Field adaptiveSfx, offset: 0x30, size: 0x1, def value: None
  bool adaptiveSfx;

  /// @brief Field environmentEffectsFilterDefaultPreset, offset: 0x34, size: 0x4, def value: None
  ::GlobalNamespace::EnvironmentEffectsFilterPreset environmentEffectsFilterDefaultPreset;

  /// @brief Field environmentEffectsFilterExpertPlusPreset, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::EnvironmentEffectsFilterPreset environmentEffectsFilterExpertPlusPreset;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x3c };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PerformanceConfigurationChecks__PlayerConfig, 0x3c>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__PlayerConfig, leftHanded) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__PlayerConfig, automaticPlayerHeight) == 0x1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__PlayerConfig, playerHeight) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__PlayerConfig, noteJumpDurationTypeSettings) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__PlayerConfig, noteJumpFixedDuration) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__PlayerConfig, noteJumpStartBeatOffset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__PlayerConfig, autoRestart) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__PlayerConfig, headsetHapticIntensity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__PlayerConfig, arcsHapticFeedback) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__PlayerConfig, reduceDebris) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__PlayerConfig, noFailEffects) == 0x1e, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__PlayerConfig, hideNoteSpawnEffect) == 0x1f, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__PlayerConfig, arcVisibility) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__PlayerConfig, saberTrailIntensity) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__PlayerConfig, noTextsAndHuds) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__PlayerConfig, advancedHud) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__PlayerConfig, sfxVolume) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__PlayerConfig, adaptiveSfx) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__PlayerConfig, environmentEffectsFilterDefaultPreset) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__PlayerConfig, environmentEffectsFilterExpertPlusPreset) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelConfig
// SizeInfo { instance_size: 2, native_size: 2, calculated_instance_size: 2, calculated_native_size: 18, minimum_alignment: 2, natural_alignment: 2, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PerformanceConfigurationChecks::LevelConfig
struct CORDL_TYPE __PerformanceConfigurationChecks__LevelConfig {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PerformanceConfigurationChecks__LevelConfig();

  // Ctor Parameters [CppParam { name: "modifiers", ty: "::GlobalNamespace::GameplayModifierMask", modifiers: "", def_value: None }]
  constexpr __PerformanceConfigurationChecks__LevelConfig(::GlobalNamespace::GameplayModifierMask modifiers) noexcept;

  /// @brief Field modifiers, offset: 0x0, size: 0x2, def value: None
  ::GlobalNamespace::GameplayModifierMask modifiers;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PerformanceConfigurationChecks__LevelConfig, 0x2>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__LevelConfig, modifiers) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PerformanceConfigurationChecks
// SizeInfo { instance_size: 520, native_size: -1, calculated_instance_size: 520, calculated_native_size: 520, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PerformanceConfigurationChecks*
class CORDL_TYPE PerformanceConfigurationChecks : public ::System::Object {
public:
  // Declarations
  using AppConfig = ::GlobalNamespace::__PerformanceConfigurationChecks__AppConfig;

  using GameConfig = ::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig;

  using LevelConfig = ::GlobalNamespace::__PerformanceConfigurationChecks__LevelConfig;

  using Mismatch = ::GlobalNamespace::__PerformanceConfigurationChecks__Mismatch;

  using OVRConfig = ::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig;

  using OculusXRConfig = ::GlobalNamespace::__PerformanceConfigurationChecks__OculusXRConfig;

  using PlayerConfig = ::GlobalNamespace::__PerformanceConfigurationChecks__PlayerConfig;

  using XRConfig = ::GlobalNamespace::__PerformanceConfigurationChecks__XRConfig;

  /// @brief Field appConfig, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_appConfig, put = __cordl_internal_set_appConfig))::GlobalNamespace::__PerformanceConfigurationChecks__AppConfig appConfig;

  /// @brief Field gameConfig, offset 0xb0, size 0x110
  __declspec(property(get = __cordl_internal_get_gameConfig, put = __cordl_internal_set_gameConfig))::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig gameConfig;

  /// @brief Field invalid, offset 0x200, size 0x8
  __declspec(property(get = __cordl_internal_get_invalid,
                      put = __cordl_internal_set_invalid))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__PerformanceConfigurationChecks__Mismatch>* invalid;

  /// @brief Field levelConfig, offset 0x1fc, size 0x2
  __declspec(property(get = __cordl_internal_get_levelConfig, put = __cordl_internal_set_levelConfig))::GlobalNamespace::__PerformanceConfigurationChecks__LevelConfig levelConfig;

  /// @brief Field oculusXrConfig, offset 0xa4, size 0xc
  __declspec(property(get = __cordl_internal_get_oculusXrConfig, put = __cordl_internal_set_oculusXrConfig))::GlobalNamespace::__PerformanceConfigurationChecks__OculusXRConfig oculusXrConfig;

  /// @brief Field ovrConfig, offset 0x50, size 0x54
  __declspec(property(get = __cordl_internal_get_ovrConfig, put = __cordl_internal_set_ovrConfig))::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig ovrConfig;

  /// @brief Field playerConfig, offset 0x1c0, size 0x3c
  __declspec(property(get = __cordl_internal_get_playerConfig, put = __cordl_internal_set_playerConfig))::GlobalNamespace::__PerformanceConfigurationChecks__PlayerConfig playerConfig;

  /// @brief Field xrConfig, offset 0x20, size 0x30
  __declspec(property(get = __cordl_internal_get_xrConfig, put = __cordl_internal_set_xrConfig))::GlobalNamespace::__PerformanceConfigurationChecks__XRConfig xrConfig;

  /// @brief Method CreateErrorLog, addr 0x26a25c8, size 0x29c, virtual false, abstract: false, final false
  inline ::StringW CreateErrorLog();

  /// @brief Method IsValid, addr 0x26a256c, size 0x5c, virtual false, abstract: false, final false
  inline bool IsValid();

  static inline ::GlobalNamespace::PerformanceConfigurationChecks* New_ctor();

  /// @brief Method SetExpected, addr 0x26a2864, size 0x6f4, virtual false, abstract: false, final false
  inline bool SetExpected(::BeatSaber::GameSettings::MainSettingsHandler* mainSettingsHandler, ::BeatSaber::GameSettings::GraphicSettingsHandler* graphicSettingsHandler,
                          ::GlobalNamespace::PlayerSpecificSettings* playerSettings, ::GlobalNamespace::GameplayModifierMask modifiers);

  /// @brief Method VerifyEntry, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void VerifyEntry(::StringW name, T expected, T actual);

  /// @brief Method VerifyExpected, addr 0x26a3008, size 0x1cb4, virtual false, abstract: false, final false
  inline bool VerifyExpected(::BeatSaber::GameSettings::MainSettingsHandler* mainSettingsHandler, ::BeatSaber::GameSettings::GraphicSettingsHandler* graphicSettingsHandler,
                             ::GlobalNamespace::PlayerSpecificSettings* playerSettings, ::GlobalNamespace::GameplayModifierMask modifiers);

  constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__AppConfig const& __cordl_internal_get_appConfig() const;

  constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__AppConfig& __cordl_internal_get_appConfig();

  constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig const& __cordl_internal_get_gameConfig() const;

  constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig& __cordl_internal_get_gameConfig();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__PerformanceConfigurationChecks__Mismatch>*& __cordl_internal_get_invalid();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__PerformanceConfigurationChecks__Mismatch>*> const&
  __cordl_internal_get_invalid() const;

  constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__LevelConfig const& __cordl_internal_get_levelConfig() const;

  constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__LevelConfig& __cordl_internal_get_levelConfig();

  constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__OculusXRConfig const& __cordl_internal_get_oculusXrConfig() const;

  constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__OculusXRConfig& __cordl_internal_get_oculusXrConfig();

  constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig const& __cordl_internal_get_ovrConfig() const;

  constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig& __cordl_internal_get_ovrConfig();

  constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__PlayerConfig const& __cordl_internal_get_playerConfig() const;

  constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__PlayerConfig& __cordl_internal_get_playerConfig();

  constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__XRConfig const& __cordl_internal_get_xrConfig() const;

  constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__XRConfig& __cordl_internal_get_xrConfig();

  constexpr void __cordl_internal_set_appConfig(::GlobalNamespace::__PerformanceConfigurationChecks__AppConfig value);

  constexpr void __cordl_internal_set_gameConfig(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig value);

  constexpr void __cordl_internal_set_invalid(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__PerformanceConfigurationChecks__Mismatch>* value);

  constexpr void __cordl_internal_set_levelConfig(::GlobalNamespace::__PerformanceConfigurationChecks__LevelConfig value);

  constexpr void __cordl_internal_set_oculusXrConfig(::GlobalNamespace::__PerformanceConfigurationChecks__OculusXRConfig value);

  constexpr void __cordl_internal_set_ovrConfig(::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig value);

  constexpr void __cordl_internal_set_playerConfig(::GlobalNamespace::__PerformanceConfigurationChecks__PlayerConfig value);

  constexpr void __cordl_internal_set_xrConfig(::GlobalNamespace::__PerformanceConfigurationChecks__XRConfig value);

  /// @brief Method .ctor, addr 0x26a4cbc, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PerformanceConfigurationChecks();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PerformanceConfigurationChecks", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PerformanceConfigurationChecks(PerformanceConfigurationChecks&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PerformanceConfigurationChecks", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PerformanceConfigurationChecks(PerformanceConfigurationChecks const&) = delete;

  /// @brief Field appConfig, offset: 0x10, size: 0x10, def value: None
  ::GlobalNamespace::__PerformanceConfigurationChecks__AppConfig ___appConfig;

  /// @brief Field xrConfig, offset: 0x20, size: 0x30, def value: None
  ::GlobalNamespace::__PerformanceConfigurationChecks__XRConfig ___xrConfig;

  /// @brief Field ovrConfig, offset: 0x50, size: 0x54, def value: None
  ::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig ___ovrConfig;

  /// @brief Field oculusXrConfig, offset: 0xa4, size: 0xc, def value: None
  ::GlobalNamespace::__PerformanceConfigurationChecks__OculusXRConfig ___oculusXrConfig;

  /// @brief Field gameConfig, offset: 0xb0, size: 0x110, def value: None
  ::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig ___gameConfig;

  /// @brief Field playerConfig, offset: 0x1c0, size: 0x3c, def value: None
  ::GlobalNamespace::__PerformanceConfigurationChecks__PlayerConfig ___playerConfig;

  /// @brief Field levelConfig, offset: 0x1fc, size: 0x2, def value: None
  ::GlobalNamespace::__PerformanceConfigurationChecks__LevelConfig ___levelConfig;

  /// @brief Field invalid, offset: 0x200, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__PerformanceConfigurationChecks__Mismatch>* ___invalid;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PerformanceConfigurationChecks, 0x208>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks, ___appConfig) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks, ___xrConfig) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks, ___ovrConfig) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks, ___oculusXrConfig) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks, ___gameConfig) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks, ___playerConfig) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks, ___levelConfig) == 0x1fc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks, ___invalid) == 0x200, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PerformanceConfigurationChecks);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PerformanceConfigurationChecks*, "", "PerformanceConfigurationChecks");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PerformanceConfigurationChecks__AppConfig, "", "PerformanceConfigurationChecks/AppConfig");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, "", "PerformanceConfigurationChecks/GameConfig");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PerformanceConfigurationChecks__LevelConfig, "", "PerformanceConfigurationChecks/LevelConfig");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PerformanceConfigurationChecks__Mismatch, "", "PerformanceConfigurationChecks/Mismatch");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig, "", "PerformanceConfigurationChecks/OVRConfig");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PerformanceConfigurationChecks__OculusXRConfig, "", "PerformanceConfigurationChecks/OculusXRConfig");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PerformanceConfigurationChecks__PlayerConfig, "", "PerformanceConfigurationChecks/PlayerConfig");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PerformanceConfigurationChecks__XRConfig, "", "PerformanceConfigurationChecks/XRConfig");
