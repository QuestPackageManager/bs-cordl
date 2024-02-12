#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/Polyglot/zzzz__Language_def.hpp"
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
class MainSettingsModelSO;
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
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5203))
// CS Name: ::PerformanceConfigurationChecks::Mismatch
struct CORDL_TYPE __PerformanceConfigurationChecks__Mismatch {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "frames", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PerformanceConfigurationChecks__Mismatch(::StringW message, int32_t frames) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PerformanceConfigurationChecks__Mismatch();

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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8767)), TypeDefinitionIndex(TypeDefinitionIndex(8770))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5204))
// CS Name: ::PerformanceConfigurationChecks::AppConfig
struct CORDL_TYPE __PerformanceConfigurationChecks__AppConfig {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "targetFrameRate", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "systemLanguage", ty: "::UnityEngine::SystemLanguage", modifiers: "",
  // def_value: None }, CppParam { name: "runInBackground", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "backgroundLoadingPriority", ty: "::UnityEngine::ThreadPriority", modifiers:
  // "", def_value: None }]
  constexpr __PerformanceConfigurationChecks__AppConfig(int32_t targetFrameRate, ::UnityEngine::SystemLanguage systemLanguage, bool runInBackground,
                                                        ::UnityEngine::ThreadPriority backgroundLoadingPriority) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PerformanceConfigurationChecks__AppConfig();

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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(9105)), TypeDefinitionIndex(TypeDefinitionIndex(16225))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5205))
// CS Name: ::PerformanceConfigurationChecks::XRConfig
struct CORDL_TYPE __PerformanceConfigurationChecks__XRConfig {
public:
  // Declarations
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

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PerformanceConfigurationChecks__XRConfig();

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
// SizeInfo { instance_size: 64, native_size: 92, calculated_instance_size: 64, calculated_native_size: 77, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(7696)), TypeDefinitionIndex(TypeDefinitionIndex(7703)), TypeDefinitionIndex(TypeDefinitionIndex(7705)),
// TypeDefinitionIndex(TypeDefinitionIndex(7765)), TypeDefinitionIndex(TypeDefinitionIndex(7769))] Self: TypeDefinitionIndex(TypeDefinitionIndex(5206)) CS Name:
// ::PerformanceConfigurationChecks::OVRConfig
struct CORDL_TYPE __PerformanceConfigurationChecks__OVRConfig {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "spaceWarpEnabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "chromatic", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "monoscopic", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "colorGamut", ty: "::GlobalNamespace::__OVRManager__ColorSpace", modifiers: "", def_value: None }, CppParam { name:
  // "nativeColorGamut", ty: "::GlobalNamespace::__OVRManager__ColorSpace", modifiers: "", def_value: None }, CppParam { name: "compositionMethod", ty:
  // "::GlobalNamespace::__OVRManager__CompositionMethod", modifiers: "", def_value: None }, CppParam { name: "enableMixedReality", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "trackingOriginType", ty: "::GlobalNamespace::__OVRManager__TrackingOrigin", modifiers: "", def_value: None }, CppParam { name: "usePositionTracking", ty: "bool", modifiers: "", def_value: None
  // }, CppParam { name: "useRotationTracking", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "suggestedCpuPerfLevel", ty: "::GlobalNamespace::__OVRPlugin__ProcessorPerformanceLevel",
  // modifiers: "", def_value: None }, CppParam { name: "suggestedGpuPerfLevel", ty: "::GlobalNamespace::__OVRPlugin__ProcessorPerformanceLevel", modifiers: "", def_value: None }, CppParam { name:
  // "systemDisplayFrequency", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "eyeTrackedFoveatedRenderingEnabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "foveatedRenderingLevel", ty: "::GlobalNamespace::__OVRPlugin__FoveatedRenderingLevel", modifiers: "", def_value: None }, CppParam { name: "useDynamicFoveatedRendering", ty: "bool", modifiers:
  // "", def_value: None }, CppParam { name: "gpuUtilSupported", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "gpuUtilLevel", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "eyeFovPremultipliedAlphaModeEnabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "asymmetricFovEnabled", ty: "bool", modifiers: "", def_value: None },
  // CppParam { name: "eyeTextureArrayEnabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "localDimmingSupported", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "localDimming", ty: "bool", modifiers: "", def_value: None }]
  constexpr __PerformanceConfigurationChecks__OVRConfig(bool spaceWarpEnabled, bool chromatic, bool monoscopic, ::GlobalNamespace::__OVRManager__ColorSpace colorGamut,
                                                        ::GlobalNamespace::__OVRManager__ColorSpace nativeColorGamut, ::GlobalNamespace::__OVRManager__CompositionMethod compositionMethod,
                                                        bool enableMixedReality, ::GlobalNamespace::__OVRManager__TrackingOrigin trackingOriginType, bool usePositionTracking, bool useRotationTracking,
                                                        ::GlobalNamespace::__OVRPlugin__ProcessorPerformanceLevel suggestedCpuPerfLevel,
                                                        ::GlobalNamespace::__OVRPlugin__ProcessorPerformanceLevel suggestedGpuPerfLevel, float_t systemDisplayFrequency,
                                                        bool eyeTrackedFoveatedRenderingEnabled, ::GlobalNamespace::__OVRPlugin__FoveatedRenderingLevel foveatedRenderingLevel,
                                                        bool useDynamicFoveatedRendering, bool gpuUtilSupported, float_t gpuUtilLevel, bool eyeFovPremultipliedAlphaModeEnabled,
                                                        bool asymmetricFovEnabled, bool eyeTextureArrayEnabled, bool localDimmingSupported, bool localDimming) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PerformanceConfigurationChecks__OVRConfig();

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

  /// @brief Field suggestedCpuPerfLevel, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__ProcessorPerformanceLevel suggestedCpuPerfLevel;

  /// @brief Field suggestedGpuPerfLevel, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__ProcessorPerformanceLevel suggestedGpuPerfLevel;

  /// @brief Field systemDisplayFrequency, offset: 0x24, size: 0x4, def value: None
  float_t systemDisplayFrequency;

  /// @brief Field eyeTrackedFoveatedRenderingEnabled, offset: 0x28, size: 0x1, def value: None
  bool eyeTrackedFoveatedRenderingEnabled;

  /// @brief Field foveatedRenderingLevel, offset: 0x2c, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__FoveatedRenderingLevel foveatedRenderingLevel;

  /// @brief Field useDynamicFoveatedRendering, offset: 0x30, size: 0x1, def value: None
  bool useDynamicFoveatedRendering;

  /// @brief Field gpuUtilSupported, offset: 0x31, size: 0x1, def value: None
  bool gpuUtilSupported;

  /// @brief Field gpuUtilLevel, offset: 0x34, size: 0x4, def value: None
  float_t gpuUtilLevel;

  /// @brief Field eyeFovPremultipliedAlphaModeEnabled, offset: 0x38, size: 0x1, def value: None
  bool eyeFovPremultipliedAlphaModeEnabled;

  /// @brief Field asymmetricFovEnabled, offset: 0x39, size: 0x1, def value: None
  bool asymmetricFovEnabled;

  /// @brief Field eyeTextureArrayEnabled, offset: 0x3a, size: 0x1, def value: None
  bool eyeTextureArrayEnabled;

  /// @brief Field localDimmingSupported, offset: 0x3b, size: 0x1, def value: None
  bool localDimmingSupported;

  /// @brief Field localDimming, offset: 0x3c, size: 0x1, def value: None
  bool localDimming;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig, 0x40>, "Size mismatch!");

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

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig, suggestedCpuPerfLevel) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig, suggestedGpuPerfLevel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig, systemDisplayFrequency) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig, eyeTrackedFoveatedRenderingEnabled) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig, foveatedRenderingLevel) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig, useDynamicFoveatedRendering) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig, gpuUtilSupported) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig, gpuUtilLevel) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig, eyeFovPremultipliedAlphaModeEnabled) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig, asymmetricFovEnabled) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig, eyeTextureArrayEnabled) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig, localDimmingSupported) == 0x3b, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig, localDimming) == 0x3c, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OculusXRConfig
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8993))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5207))
// CS Name: ::PerformanceConfigurationChecks::OculusXRConfig
struct CORDL_TYPE __PerformanceConfigurationChecks__OculusXRConfig {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "boundaryDimension", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
  constexpr __PerformanceConfigurationChecks__OculusXRConfig(::UnityEngine::Vector3 boundaryDimension) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PerformanceConfigurationChecks__OculusXRConfig();

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
// SizeInfo { instance_size: 200, native_size: 232, calculated_instance_size: 200, calculated_native_size: 216, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8988)), TypeDefinitionIndex(TypeDefinitionIndex(8993)), TypeDefinitionIndex(TypeDefinitionIndex(15672))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5208))
// CS Name: ::PerformanceConfigurationChecks::GameConfig
struct CORDL_TYPE __PerformanceConfigurationChecks__GameConfig {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "editorWindowResolution", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: None }, CppParam { name: "windowResolution", ty:
  // "::UnityEngine::Vector2Int", modifiers: "", def_value: None }, CppParam { name: "fullscreen", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "targetFramerate", ty: "float_t",
  // modifiers: "", def_value: None }, CppParam { name: "vrResolutionScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "menuVRResolutionScaleMultiplier", ty: "float_t",
  // modifiers: "", def_value: None }, CppParam { name: "antiAliasingLevel", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "bloomPrePassGraphicsSettings", ty: "int32_t", modifiers:
  // "", def_value: None }, CppParam { name: "mainEffectGraphicsSettings", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "mirrorGraphicsSettings", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "maxNumberOfCutSoundEffects", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maxShockwaveParticles", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "burnMarkTrailsEnabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "smokeGraphicsSettings", ty: "bool", modifiers: "", def_value: None },
  // CppParam { name: "screenDisplacementEffectsEnabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "enableAlphaFeatures", ty: "bool", modifiers: "", def_value: None }, CppParam {
  // name: "useFixedFoveatedRenderingDuringGameplay", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "depthTextureEnabled", ty: "bool", modifiers: "", def_value: None }, CppParam {
  // name: "roomCenter", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "roomRotation", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "controllerPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "controllerRotation", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None },
  // CppParam { name: "controllersRumbleEnabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "smoothCameraEnabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "smoothCameraFieldOfView", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "smoothCameraPositionSmooth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "smoothCameraRotationSmooth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "smoothCameraThirdPersonEnabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "smoothCameraThirdPersonPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "smoothCameraThirdPersonEulerAngles", ty: "::UnityEngine::Vector3", modifiers:
  // "", def_value: None }, CppParam { name: "volume", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ambientVolumeScale", ty: "float_t", modifiers: "", def_value: None }, CppParam
  // { name: "overrideAudioLatency", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "audioLatency", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "enableFPSCounter", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "enableFPSRecorder", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "enableMemoryTracker", ty:
  // "bool", modifiers: "", def_value: None }, CppParam { name: "createScreenshotDuringTheGame", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "language", ty:
  // "::BGLib::Polyglot::Language", modifiers: "", def_value: None }, CppParam { name: "pauseButtonPressDurationLevel", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "useCustomServerEnvironment", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "forceGameLiftServerEnvironment", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "customServerHostName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cpuLevel", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "gpuLevel", ty:
  // "int32_t", modifiers: "", def_value: None }]
  constexpr __PerformanceConfigurationChecks__GameConfig(::UnityEngine::Vector2Int editorWindowResolution, ::UnityEngine::Vector2Int windowResolution, bool fullscreen, float_t targetFramerate,
                                                         float_t vrResolutionScale, float_t menuVRResolutionScaleMultiplier, int32_t antiAliasingLevel, int32_t bloomPrePassGraphicsSettings,
                                                         int32_t mainEffectGraphicsSettings, int32_t mirrorGraphicsSettings, int32_t maxNumberOfCutSoundEffects, int32_t maxShockwaveParticles,
                                                         bool burnMarkTrailsEnabled, bool smokeGraphicsSettings, bool screenDisplacementEffectsEnabled, bool enableAlphaFeatures,
                                                         bool useFixedFoveatedRenderingDuringGameplay, bool depthTextureEnabled, ::UnityEngine::Vector3 roomCenter, float_t roomRotation,
                                                         ::UnityEngine::Vector3 controllerPosition, ::UnityEngine::Vector3 controllerRotation, bool controllersRumbleEnabled, bool smoothCameraEnabled,
                                                         float_t smoothCameraFieldOfView, float_t smoothCameraPositionSmooth, float_t smoothCameraRotationSmooth, bool smoothCameraThirdPersonEnabled,
                                                         ::UnityEngine::Vector3 smoothCameraThirdPersonPosition, ::UnityEngine::Vector3 smoothCameraThirdPersonEulerAngles, float_t volume,
                                                         float_t ambientVolumeScale, bool overrideAudioLatency, float_t audioLatency, bool enableFPSCounter, bool enableFPSRecorder,
                                                         bool enableMemoryTracker, bool createScreenshotDuringTheGame, ::BGLib::Polyglot::Language language, int32_t pauseButtonPressDurationLevel,
                                                         bool useCustomServerEnvironment, bool forceGameLiftServerEnvironment, ::StringW customServerHostName, int32_t cpuLevel,
                                                         int32_t gpuLevel) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PerformanceConfigurationChecks__GameConfig();

  /// @brief Field editorWindowResolution, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Vector2Int editorWindowResolution;

  /// @brief Field windowResolution, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Vector2Int windowResolution;

  /// @brief Field fullscreen, offset: 0x10, size: 0x1, def value: None
  bool fullscreen;

  /// @brief Field targetFramerate, offset: 0x14, size: 0x4, def value: None
  float_t targetFramerate;

  /// @brief Field vrResolutionScale, offset: 0x18, size: 0x4, def value: None
  float_t vrResolutionScale;

  /// @brief Field menuVRResolutionScaleMultiplier, offset: 0x1c, size: 0x4, def value: None
  float_t menuVRResolutionScaleMultiplier;

  /// @brief Field antiAliasingLevel, offset: 0x20, size: 0x4, def value: None
  int32_t antiAliasingLevel;

  /// @brief Field bloomPrePassGraphicsSettings, offset: 0x24, size: 0x4, def value: None
  int32_t bloomPrePassGraphicsSettings;

  /// @brief Field mainEffectGraphicsSettings, offset: 0x28, size: 0x4, def value: None
  int32_t mainEffectGraphicsSettings;

  /// @brief Field mirrorGraphicsSettings, offset: 0x2c, size: 0x4, def value: None
  int32_t mirrorGraphicsSettings;

  /// @brief Field maxNumberOfCutSoundEffects, offset: 0x30, size: 0x4, def value: None
  int32_t maxNumberOfCutSoundEffects;

  /// @brief Field maxShockwaveParticles, offset: 0x34, size: 0x4, def value: None
  int32_t maxShockwaveParticles;

  /// @brief Field burnMarkTrailsEnabled, offset: 0x38, size: 0x1, def value: None
  bool burnMarkTrailsEnabled;

  /// @brief Field smokeGraphicsSettings, offset: 0x39, size: 0x1, def value: None
  bool smokeGraphicsSettings;

  /// @brief Field screenDisplacementEffectsEnabled, offset: 0x3a, size: 0x1, def value: None
  bool screenDisplacementEffectsEnabled;

  /// @brief Field enableAlphaFeatures, offset: 0x3b, size: 0x1, def value: None
  bool enableAlphaFeatures;

  /// @brief Field useFixedFoveatedRenderingDuringGameplay, offset: 0x3c, size: 0x1, def value: None
  bool useFixedFoveatedRenderingDuringGameplay;

  /// @brief Field depthTextureEnabled, offset: 0x3d, size: 0x1, def value: None
  bool depthTextureEnabled;

  /// @brief Field roomCenter, offset: 0x40, size: 0xc, def value: None
  ::UnityEngine::Vector3 roomCenter;

  /// @brief Field roomRotation, offset: 0x4c, size: 0x4, def value: None
  float_t roomRotation;

  /// @brief Field controllerPosition, offset: 0x50, size: 0xc, def value: None
  ::UnityEngine::Vector3 controllerPosition;

  /// @brief Field controllerRotation, offset: 0x5c, size: 0xc, def value: None
  ::UnityEngine::Vector3 controllerRotation;

  /// @brief Field controllersRumbleEnabled, offset: 0x68, size: 0x1, def value: None
  bool controllersRumbleEnabled;

  /// @brief Field smoothCameraEnabled, offset: 0x69, size: 0x1, def value: None
  bool smoothCameraEnabled;

  /// @brief Field smoothCameraFieldOfView, offset: 0x6c, size: 0x4, def value: None
  float_t smoothCameraFieldOfView;

  /// @brief Field smoothCameraPositionSmooth, offset: 0x70, size: 0x4, def value: None
  float_t smoothCameraPositionSmooth;

  /// @brief Field smoothCameraRotationSmooth, offset: 0x74, size: 0x4, def value: None
  float_t smoothCameraRotationSmooth;

  /// @brief Field smoothCameraThirdPersonEnabled, offset: 0x78, size: 0x1, def value: None
  bool smoothCameraThirdPersonEnabled;

  /// @brief Field smoothCameraThirdPersonPosition, offset: 0x7c, size: 0xc, def value: None
  ::UnityEngine::Vector3 smoothCameraThirdPersonPosition;

  /// @brief Field smoothCameraThirdPersonEulerAngles, offset: 0x88, size: 0xc, def value: None
  ::UnityEngine::Vector3 smoothCameraThirdPersonEulerAngles;

  /// @brief Field volume, offset: 0x94, size: 0x4, def value: None
  float_t volume;

  /// @brief Field ambientVolumeScale, offset: 0x98, size: 0x4, def value: None
  float_t ambientVolumeScale;

  /// @brief Field overrideAudioLatency, offset: 0x9c, size: 0x1, def value: None
  bool overrideAudioLatency;

  /// @brief Field audioLatency, offset: 0xa0, size: 0x4, def value: None
  float_t audioLatency;

  /// @brief Field enableFPSCounter, offset: 0xa4, size: 0x1, def value: None
  bool enableFPSCounter;

  /// @brief Field enableFPSRecorder, offset: 0xa5, size: 0x1, def value: None
  bool enableFPSRecorder;

  /// @brief Field enableMemoryTracker, offset: 0xa6, size: 0x1, def value: None
  bool enableMemoryTracker;

  /// @brief Field createScreenshotDuringTheGame, offset: 0xa7, size: 0x1, def value: None
  bool createScreenshotDuringTheGame;

  /// @brief Field language, offset: 0xa8, size: 0x4, def value: None
  ::BGLib::Polyglot::Language language;

  /// @brief Field pauseButtonPressDurationLevel, offset: 0xac, size: 0x4, def value: None
  int32_t pauseButtonPressDurationLevel;

  /// @brief Field useCustomServerEnvironment, offset: 0xb0, size: 0x1, def value: None
  bool useCustomServerEnvironment;

  /// @brief Field forceGameLiftServerEnvironment, offset: 0xb1, size: 0x1, def value: None
  bool forceGameLiftServerEnvironment;

  /// @brief Field customServerHostName, offset: 0xb8, size: 0x8, def value: None
  ::StringW customServerHostName;

  /// @brief Field cpuLevel, offset: 0xc0, size: 0x4, def value: None
  int32_t cpuLevel;

  /// @brief Field gpuLevel, offset: 0xc4, size: 0x4, def value: None
  int32_t gpuLevel;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, 0xc8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, editorWindowResolution) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, windowResolution) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, fullscreen) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, targetFramerate) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, vrResolutionScale) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, menuVRResolutionScaleMultiplier) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, antiAliasingLevel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, bloomPrePassGraphicsSettings) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, mainEffectGraphicsSettings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, mirrorGraphicsSettings) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, maxNumberOfCutSoundEffects) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, maxShockwaveParticles) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, burnMarkTrailsEnabled) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, smokeGraphicsSettings) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, screenDisplacementEffectsEnabled) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, enableAlphaFeatures) == 0x3b, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, useFixedFoveatedRenderingDuringGameplay) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, depthTextureEnabled) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, roomCenter) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, roomRotation) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, controllerPosition) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, controllerRotation) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, controllersRumbleEnabled) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, smoothCameraEnabled) == 0x69, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, smoothCameraFieldOfView) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, smoothCameraPositionSmooth) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, smoothCameraRotationSmooth) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, smoothCameraThirdPersonEnabled) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, smoothCameraThirdPersonPosition) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, smoothCameraThirdPersonEulerAngles) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, volume) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, ambientVolumeScale) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, overrideAudioLatency) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, audioLatency) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, enableFPSCounter) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, enableFPSRecorder) == 0xa5, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, enableMemoryTracker) == 0xa6, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, createScreenshotDuringTheGame) == 0xa7, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, language) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, pauseButtonPressDurationLevel) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, useCustomServerEnvironment) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, forceGameLiftServerEnvironment) == 0xb1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, customServerHostName) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, cpuLevel) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig, gpuLevel) == 0xc4, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PlayerConfig
// SizeInfo { instance_size: 60, native_size: 80, calculated_instance_size: 60, calculated_native_size: 76, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(11035)), TypeDefinitionIndex(TypeDefinitionIndex(11038)), TypeDefinitionIndex(TypeDefinitionIndex(11039))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5209))
// CS Name: ::PerformanceConfigurationChecks::PlayerConfig
struct CORDL_TYPE __PerformanceConfigurationChecks__PlayerConfig {
public:
  // Declarations
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

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PerformanceConfigurationChecks__PlayerConfig();

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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(14870))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5210))
// CS Name: ::PerformanceConfigurationChecks::LevelConfig
struct CORDL_TYPE __PerformanceConfigurationChecks__LevelConfig {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "modifiers", ty: "::GlobalNamespace::GameplayModifierMask", modifiers: "", def_value: None }]
  constexpr __PerformanceConfigurationChecks__LevelConfig(::GlobalNamespace::GameplayModifierMask modifiers) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PerformanceConfigurationChecks__LevelConfig();

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
// SizeInfo { instance_size: 432, native_size: -1, calculated_instance_size: 432, calculated_native_size: 432, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(5204)), TypeDefinitionIndex(TypeDefinitionIndex(5205)),
// TypeDefinitionIndex(TypeDefinitionIndex(5206)), TypeDefinitionIndex(TypeDefinitionIndex(5207)), TypeDefinitionIndex(TypeDefinitionIndex(5208)), TypeDefinitionIndex(TypeDefinitionIndex(5209)),
// TypeDefinitionIndex(TypeDefinitionIndex(5210))] Self: TypeDefinitionIndex(TypeDefinitionIndex(5211)) CS Name: ::PerformanceConfigurationChecks*
class CORDL_TYPE PerformanceConfigurationChecks : public ::System::Object {
public:
  // Declarations
  using LevelConfig = ::GlobalNamespace::__PerformanceConfigurationChecks__LevelConfig;

  using PlayerConfig = ::GlobalNamespace::__PerformanceConfigurationChecks__PlayerConfig;

  using GameConfig = ::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig;

  using OculusXRConfig = ::GlobalNamespace::__PerformanceConfigurationChecks__OculusXRConfig;

  using OVRConfig = ::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig;

  using XRConfig = ::GlobalNamespace::__PerformanceConfigurationChecks__XRConfig;

  using AppConfig = ::GlobalNamespace::__PerformanceConfigurationChecks__AppConfig;

  using Mismatch = ::GlobalNamespace::__PerformanceConfigurationChecks__Mismatch;

  /// @brief Field appConfig, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_appConfig, put = __cordl_internal_set_appConfig))::GlobalNamespace::__PerformanceConfigurationChecks__AppConfig appConfig;

  /// @brief Field xrConfig, offset 0x20, size 0x30
  __declspec(property(get = __cordl_internal_get_xrConfig, put = __cordl_internal_set_xrConfig))::GlobalNamespace::__PerformanceConfigurationChecks__XRConfig xrConfig;

  /// @brief Field ovrConfig, offset 0x50, size 0x40
  __declspec(property(get = __cordl_internal_get_ovrConfig, put = __cordl_internal_set_ovrConfig))::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig ovrConfig;

  /// @brief Field oculusXrConfig, offset 0x90, size 0xc
  __declspec(property(get = __cordl_internal_get_oculusXrConfig, put = __cordl_internal_set_oculusXrConfig))::GlobalNamespace::__PerformanceConfigurationChecks__OculusXRConfig oculusXrConfig;

  /// @brief Field gameConfig, offset 0xa0, size 0xc8
  __declspec(property(get = __cordl_internal_get_gameConfig, put = __cordl_internal_set_gameConfig))::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig gameConfig;

  /// @brief Field playerConfig, offset 0x168, size 0x3c
  __declspec(property(get = __cordl_internal_get_playerConfig, put = __cordl_internal_set_playerConfig))::GlobalNamespace::__PerformanceConfigurationChecks__PlayerConfig playerConfig;

  /// @brief Field levelConfig, offset 0x1a4, size 0x2
  __declspec(property(get = __cordl_internal_get_levelConfig, put = __cordl_internal_set_levelConfig))::GlobalNamespace::__PerformanceConfigurationChecks__LevelConfig levelConfig;

  /// @brief Field invalid, offset 0x1a8, size 0x8
  __declspec(property(get = __cordl_internal_get_invalid,
                      put = __cordl_internal_set_invalid))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__PerformanceConfigurationChecks__Mismatch>* invalid;

  constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__AppConfig& __cordl_internal_get_appConfig();

  constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__AppConfig const& __cordl_internal_get_appConfig() const;

  constexpr void __cordl_internal_set_appConfig(::GlobalNamespace::__PerformanceConfigurationChecks__AppConfig value);

  constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__XRConfig& __cordl_internal_get_xrConfig();

  constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__XRConfig const& __cordl_internal_get_xrConfig() const;

  constexpr void __cordl_internal_set_xrConfig(::GlobalNamespace::__PerformanceConfigurationChecks__XRConfig value);

  constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig& __cordl_internal_get_ovrConfig();

  constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig const& __cordl_internal_get_ovrConfig() const;

  constexpr void __cordl_internal_set_ovrConfig(::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig value);

  constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__OculusXRConfig& __cordl_internal_get_oculusXrConfig();

  constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__OculusXRConfig const& __cordl_internal_get_oculusXrConfig() const;

  constexpr void __cordl_internal_set_oculusXrConfig(::GlobalNamespace::__PerformanceConfigurationChecks__OculusXRConfig value);

  constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig& __cordl_internal_get_gameConfig();

  constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig const& __cordl_internal_get_gameConfig() const;

  constexpr void __cordl_internal_set_gameConfig(::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig value);

  constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__PlayerConfig& __cordl_internal_get_playerConfig();

  constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__PlayerConfig const& __cordl_internal_get_playerConfig() const;

  constexpr void __cordl_internal_set_playerConfig(::GlobalNamespace::__PerformanceConfigurationChecks__PlayerConfig value);

  constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__LevelConfig& __cordl_internal_get_levelConfig();

  constexpr ::GlobalNamespace::__PerformanceConfigurationChecks__LevelConfig const& __cordl_internal_get_levelConfig() const;

  constexpr void __cordl_internal_set_levelConfig(::GlobalNamespace::__PerformanceConfigurationChecks__LevelConfig value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__PerformanceConfigurationChecks__Mismatch>*& __cordl_internal_get_invalid();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__PerformanceConfigurationChecks__Mismatch>*> const&
  __cordl_internal_get_invalid() const;

  constexpr void __cordl_internal_set_invalid(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__PerformanceConfigurationChecks__Mismatch>* value);

  /// @brief Method IsValid, addr 0x232beb4, size 0x5c, virtual false, abstract: false, final false
  inline bool IsValid();

  /// @brief Method CreateErrorLog, addr 0x232bf10, size 0x29c, virtual false, abstract: false, final false
  inline ::StringW CreateErrorLog();

  /// @brief Method SetExpected, addr 0x232c1ac, size 0xaa0, virtual false, abstract: false, final false
  inline bool SetExpected(::GlobalNamespace::MainSettingsModelSO* mainSettings, ::GlobalNamespace::PlayerSpecificSettings* playerSettings, ::GlobalNamespace::GameplayModifierMask modifiers);

  /// @brief Method VerifyExpected, addr 0x232cc4c, size 0x1cd8, virtual false, abstract: false, final false
  inline bool VerifyExpected(::GlobalNamespace::MainSettingsModelSO* mainSettings, ::GlobalNamespace::PlayerSpecificSettings* playerSettings, ::GlobalNamespace::GameplayModifierMask modifiers);

  /// @brief Method VerifyEntry, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void VerifyEntry(::StringW name, T expected, T actual);

  static inline ::GlobalNamespace::PerformanceConfigurationChecks* New_ctor();

  /// @brief Method .ctor, addr 0x232e924, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PerformanceConfigurationChecks", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PerformanceConfigurationChecks(PerformanceConfigurationChecks&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PerformanceConfigurationChecks", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PerformanceConfigurationChecks(PerformanceConfigurationChecks const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PerformanceConfigurationChecks();

public:
  /// @brief Field appConfig, offset: 0x10, size: 0x10, def value: None
  ::GlobalNamespace::__PerformanceConfigurationChecks__AppConfig ___appConfig;

  /// @brief Field xrConfig, offset: 0x20, size: 0x30, def value: None
  ::GlobalNamespace::__PerformanceConfigurationChecks__XRConfig ___xrConfig;

  /// @brief Field ovrConfig, offset: 0x50, size: 0x40, def value: None
  ::GlobalNamespace::__PerformanceConfigurationChecks__OVRConfig ___ovrConfig;

  /// @brief Field oculusXrConfig, offset: 0x90, size: 0xc, def value: None
  ::GlobalNamespace::__PerformanceConfigurationChecks__OculusXRConfig ___oculusXrConfig;

  /// @brief Field gameConfig, offset: 0xa0, size: 0xc8, def value: None
  ::GlobalNamespace::__PerformanceConfigurationChecks__GameConfig ___gameConfig;

  /// @brief Field playerConfig, offset: 0x168, size: 0x3c, def value: None
  ::GlobalNamespace::__PerformanceConfigurationChecks__PlayerConfig ___playerConfig;

  /// @brief Field levelConfig, offset: 0x1a4, size: 0x2, def value: None
  ::GlobalNamespace::__PerformanceConfigurationChecks__LevelConfig ___levelConfig;

  /// @brief Field invalid, offset: 0x1a8, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__PerformanceConfigurationChecks__Mismatch>* ___invalid;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PerformanceConfigurationChecks, 0x1b0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks, ___appConfig) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks, ___xrConfig) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks, ___ovrConfig) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks, ___oculusXrConfig) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks, ___gameConfig) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks, ___playerConfig) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks, ___levelConfig) == 0x1a4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks, ___invalid) == 0x1a8, "Offset mismatch!");

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
