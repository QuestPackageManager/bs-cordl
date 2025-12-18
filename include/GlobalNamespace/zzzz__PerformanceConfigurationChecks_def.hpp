#pragma once
// IWYU pragma private; include "GlobalNamespace/PerformanceConfigurationChecks.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/Settings/zzzz__Settings_def.hpp"
#include "GlobalNamespace/zzzz__ArcVisibilityType_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentEffectsFilterPreset_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierMask_def.hpp"
#include "GlobalNamespace/zzzz__NoteJumpDurationTypeSettings_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__TextureDimension_def.hpp"
#include "UnityEngine/XR/zzzz__XRSettings_def.hpp"
#include "UnityEngine/zzzz__SystemLanguage_def.hpp"
#include "UnityEngine/zzzz__ThreadPriority_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PerformanceConfigurationChecks)
namespace BeatSaber::Settings {
struct Settings;
}
namespace GlobalNamespace {
struct GameplayModifierMask;
}
namespace GlobalNamespace {
struct PerformanceConfigurationChecks_AppConfig;
}
namespace GlobalNamespace {
struct PerformanceConfigurationChecks_LevelConfig;
}
namespace GlobalNamespace {
struct PerformanceConfigurationChecks_Mismatch;
}
namespace GlobalNamespace {
struct PerformanceConfigurationChecks_PlayerConfig;
}
namespace GlobalNamespace {
struct PerformanceConfigurationChecks_XRConfig;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
class RecPlayBehaviour_State;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class PerformanceConfigurationChecks;
}
namespace GlobalNamespace {
struct PerformanceConfigurationChecks_AppConfig;
}
namespace GlobalNamespace {
struct PerformanceConfigurationChecks_LevelConfig;
}
namespace GlobalNamespace {
struct PerformanceConfigurationChecks_Mismatch;
}
namespace GlobalNamespace {
struct PerformanceConfigurationChecks_PlayerConfig;
}
namespace GlobalNamespace {
struct PerformanceConfigurationChecks_XRConfig;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PerformanceConfigurationChecks);
MARK_VAL_T(::GlobalNamespace::PerformanceConfigurationChecks_AppConfig);
MARK_VAL_T(::GlobalNamespace::PerformanceConfigurationChecks_LevelConfig);
MARK_VAL_T(::GlobalNamespace::PerformanceConfigurationChecks_Mismatch);
MARK_VAL_T(::GlobalNamespace::PerformanceConfigurationChecks_PlayerConfig);
MARK_VAL_T(::GlobalNamespace::PerformanceConfigurationChecks_XRConfig);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: PerformanceConfigurationChecks/Mismatch
struct CORDL_TYPE PerformanceConfigurationChecks_Mismatch {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PerformanceConfigurationChecks_Mismatch();

  // Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "frames", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PerformanceConfigurationChecks_Mismatch(::StringW message, int32_t frames) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6684 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field message, offset: 0x0, size: 0x8, def value: None
  ::StringW message;

  /// @brief Field frames, offset: 0x8, size: 0x4, def value: None
  int32_t frames;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks_Mismatch, message) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks_Mismatch, frames) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PerformanceConfigurationChecks_Mismatch, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.SystemLanguage, UnityEngine.ThreadPriority
namespace GlobalNamespace {
// Is value type: true
// CS Name: PerformanceConfigurationChecks/AppConfig
struct CORDL_TYPE PerformanceConfigurationChecks_AppConfig {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PerformanceConfigurationChecks_AppConfig();

  // Ctor Parameters [CppParam { name: "targetFrameRate", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "systemLanguage", ty: "::UnityEngine::SystemLanguage", modifiers: "",
  // def_value: None }, CppParam { name: "runInBackground", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "backgroundLoadingPriority", ty: "::UnityEngine::ThreadPriority", modifiers:
  // "", def_value: None }]
  constexpr PerformanceConfigurationChecks_AppConfig(int32_t targetFrameRate, ::UnityEngine::SystemLanguage systemLanguage, bool runInBackground,
                                                     ::UnityEngine::ThreadPriority backgroundLoadingPriority) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6685 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field targetFrameRate, offset: 0x0, size: 0x4, def value: None
  int32_t targetFrameRate;

  /// @brief Field systemLanguage, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::SystemLanguage systemLanguage;

  /// @brief Field runInBackground, offset: 0x8, size: 0x1, def value: None
  bool runInBackground;

  /// @brief Field backgroundLoadingPriority, offset: 0xc, size: 0x4, def value: None
  ::UnityEngine::ThreadPriority backgroundLoadingPriority;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks_AppConfig, targetFrameRate) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks_AppConfig, systemLanguage) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks_AppConfig, runInBackground) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks_AppConfig, backgroundLoadingPriority) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PerformanceConfigurationChecks_AppConfig, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.Rendering.TextureDimension, UnityEngine.XR.XRSettings::StereoRenderingMode
namespace GlobalNamespace {
// Is value type: true
// CS Name: PerformanceConfigurationChecks/XRConfig
struct CORDL_TYPE PerformanceConfigurationChecks_XRConfig {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PerformanceConfigurationChecks_XRConfig();

  // Ctor Parameters [CppParam { name: "enabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isDeviceActive", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "loadedDeviceName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "stereoRenderingMode", ty: "::UnityEngine::XR::XRSettings_StereoRenderingMode", modifiers: "", def_value:
  // None }, CppParam { name: "eyeTextureWidth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "eyeTextureHeight", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "eyeTextureResolutionScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "deviceEyeTextureDimension", ty: "::UnityEngine::Rendering::TextureDimension", modifiers: "",
  // def_value: None }, CppParam { name: "renderViewportScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "occlusionMaskScale", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "useOcclusionMesh", ty: "bool", modifiers: "", def_value: None }]
  constexpr PerformanceConfigurationChecks_XRConfig(bool enabled, bool isDeviceActive, ::StringW loadedDeviceName, ::UnityEngine::XR::XRSettings_StereoRenderingMode stereoRenderingMode,
                                                    int32_t eyeTextureWidth, int32_t eyeTextureHeight, float_t eyeTextureResolutionScale,
                                                    ::UnityEngine::Rendering::TextureDimension deviceEyeTextureDimension, float_t renderViewportScale, float_t occlusionMaskScale,
                                                    bool useOcclusionMesh) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6686 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field enabled, offset: 0x0, size: 0x1, def value: None
  bool enabled;

  /// @brief Field isDeviceActive, offset: 0x1, size: 0x1, def value: None
  bool isDeviceActive;

  /// @brief Field loadedDeviceName, offset: 0x8, size: 0x8, def value: None
  ::StringW loadedDeviceName;

  /// @brief Field stereoRenderingMode, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::XR::XRSettings_StereoRenderingMode stereoRenderingMode;

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks_XRConfig, enabled) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks_XRConfig, isDeviceActive) == 0x1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks_XRConfig, loadedDeviceName) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks_XRConfig, stereoRenderingMode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks_XRConfig, eyeTextureWidth) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks_XRConfig, eyeTextureHeight) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks_XRConfig, eyeTextureResolutionScale) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks_XRConfig, deviceEyeTextureDimension) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks_XRConfig, renderViewportScale) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks_XRConfig, occlusionMaskScale) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks_XRConfig, useOcclusionMesh) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PerformanceConfigurationChecks_XRConfig, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies ArcVisibilityType, EnvironmentEffectsFilterPreset, NoteJumpDurationTypeSettings
namespace GlobalNamespace {
// Is value type: true
// CS Name: PerformanceConfigurationChecks/PlayerConfig
struct CORDL_TYPE PerformanceConfigurationChecks_PlayerConfig {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PerformanceConfigurationChecks_PlayerConfig();

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
  constexpr PerformanceConfigurationChecks_PlayerConfig(bool leftHanded, bool automaticPlayerHeight, float_t playerHeight, ::GlobalNamespace::NoteJumpDurationTypeSettings noteJumpDurationTypeSettings,
                                                        float_t noteJumpFixedDuration, float_t noteJumpStartBeatOffset, bool autoRestart, float_t headsetHapticIntensity, bool arcsHapticFeedback,
                                                        bool reduceDebris, bool noFailEffects, bool hideNoteSpawnEffect, ::GlobalNamespace::ArcVisibilityType arcVisibility,
                                                        float_t saberTrailIntensity, bool noTextsAndHuds, bool advancedHud, float_t sfxVolume, bool adaptiveSfx,
                                                        ::GlobalNamespace::EnvironmentEffectsFilterPreset environmentEffectsFilterDefaultPreset,
                                                        ::GlobalNamespace::EnvironmentEffectsFilterPreset environmentEffectsFilterExpertPlusPreset) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6687 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x3c };

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks_PlayerConfig, leftHanded) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks_PlayerConfig, automaticPlayerHeight) == 0x1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks_PlayerConfig, playerHeight) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks_PlayerConfig, noteJumpDurationTypeSettings) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks_PlayerConfig, noteJumpFixedDuration) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks_PlayerConfig, noteJumpStartBeatOffset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks_PlayerConfig, autoRestart) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks_PlayerConfig, headsetHapticIntensity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks_PlayerConfig, arcsHapticFeedback) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks_PlayerConfig, reduceDebris) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks_PlayerConfig, noFailEffects) == 0x1e, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks_PlayerConfig, hideNoteSpawnEffect) == 0x1f, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks_PlayerConfig, arcVisibility) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks_PlayerConfig, saberTrailIntensity) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks_PlayerConfig, noTextsAndHuds) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks_PlayerConfig, advancedHud) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks_PlayerConfig, sfxVolume) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks_PlayerConfig, adaptiveSfx) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks_PlayerConfig, environmentEffectsFilterDefaultPreset) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks_PlayerConfig, environmentEffectsFilterExpertPlusPreset) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PerformanceConfigurationChecks_PlayerConfig, 0x3c>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies GameplayModifierMask
namespace GlobalNamespace {
// Is value type: true
// CS Name: PerformanceConfigurationChecks/LevelConfig
struct CORDL_TYPE PerformanceConfigurationChecks_LevelConfig {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PerformanceConfigurationChecks_LevelConfig();

  // Ctor Parameters [CppParam { name: "modifiers", ty: "::GlobalNamespace::GameplayModifierMask", modifiers: "", def_value: None }]
  constexpr PerformanceConfigurationChecks_LevelConfig(::GlobalNamespace::GameplayModifierMask modifiers) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6688 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2 };

  /// @brief Field modifiers, offset: 0x0, size: 0x2, def value: None
  ::GlobalNamespace::GameplayModifierMask modifiers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks_LevelConfig, modifiers) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PerformanceConfigurationChecks_LevelConfig, 0x2>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatSaber.Settings.Settings, PerformanceConfigurationChecks::AppConfig, PerformanceConfigurationChecks::LevelConfig, PerformanceConfigurationChecks::PlayerConfig,
// PerformanceConfigurationChecks::XRConfig, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PerformanceConfigurationChecks
class CORDL_TYPE PerformanceConfigurationChecks : public ::System::Object {
public:
  // Declarations
  using AppConfig = ::GlobalNamespace::PerformanceConfigurationChecks_AppConfig;

  using LevelConfig = ::GlobalNamespace::PerformanceConfigurationChecks_LevelConfig;

  using Mismatch = ::GlobalNamespace::PerformanceConfigurationChecks_Mismatch;

  using PlayerConfig = ::GlobalNamespace::PerformanceConfigurationChecks_PlayerConfig;

  using XRConfig = ::GlobalNamespace::PerformanceConfigurationChecks_XRConfig;

  /// @brief Field appConfig, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_appConfig, put = __cordl_internal_set_appConfig)) ::GlobalNamespace::PerformanceConfigurationChecks_AppConfig appConfig;

  /// @brief Field invalid, offset 0x180, size 0x8
  __declspec(property(get = __cordl_internal_get_invalid,
                      put = __cordl_internal_set_invalid)) ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PerformanceConfigurationChecks_Mismatch>* invalid;

  /// @brief Field levelConfig, offset 0x17c, size 0x2
  __declspec(property(get = __cordl_internal_get_levelConfig, put = __cordl_internal_set_levelConfig)) ::GlobalNamespace::PerformanceConfigurationChecks_LevelConfig levelConfig;

  /// @brief Field playerConfig, offset 0x140, size 0x3c
  __declspec(property(get = __cordl_internal_get_playerConfig, put = __cordl_internal_set_playerConfig)) ::GlobalNamespace::PerformanceConfigurationChecks_PlayerConfig playerConfig;

  /// @brief Field settingsConfig, offset 0x50, size 0xf0
  __declspec(property(get = __cordl_internal_get_settingsConfig, put = __cordl_internal_set_settingsConfig)) ::BeatSaber::Settings::Settings settingsConfig;

  /// @brief Field xrConfig, offset 0x20, size 0x30
  __declspec(property(get = __cordl_internal_get_xrConfig, put = __cordl_internal_set_xrConfig)) ::GlobalNamespace::PerformanceConfigurationChecks_XRConfig xrConfig;

  /// @brief Method CreateErrorLog, addr 0x575d874, size 0x244, virtual false, abstract: false, final false
  inline ::StringW CreateErrorLog();

  /// @brief Method IsValid, addr 0x575d818, size 0x5c, virtual false, abstract: false, final false
  inline bool IsValid();

  static inline ::GlobalNamespace::PerformanceConfigurationChecks* New_ctor();

  /// @brief Method SetExpected, addr 0x575dab8, size 0x378, virtual false, abstract: false, final false
  inline bool SetExpected(::ByRef<::BeatSaber::Settings::Settings> settings, ::GlobalNamespace::PlayerSpecificSettings* playerSettings, ::GlobalNamespace::GameplayModifierMask modifiers,
                          ::GlobalNamespace::RecPlayBehaviour_State* recPlayState);

  /// @brief Method VerifyEntry, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void VerifyEntry(::StringW name, T expected, T actual);

  /// @brief Method VerifyExpected, addr 0x575de30, size 0x1560, virtual false, abstract: false, final false
  inline bool VerifyExpected(::ByRef<::BeatSaber::Settings::Settings> settings, ::GlobalNamespace::PlayerSpecificSettings* playerSettings, ::GlobalNamespace::GameplayModifierMask modifiers,
                             ::GlobalNamespace::RecPlayBehaviour_State* recPlayState);

  constexpr ::GlobalNamespace::PerformanceConfigurationChecks_AppConfig const& __cordl_internal_get_appConfig() const;

  constexpr ::GlobalNamespace::PerformanceConfigurationChecks_AppConfig& __cordl_internal_get_appConfig();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PerformanceConfigurationChecks_Mismatch>* const& __cordl_internal_get_invalid() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PerformanceConfigurationChecks_Mismatch>*& __cordl_internal_get_invalid();

  constexpr ::GlobalNamespace::PerformanceConfigurationChecks_LevelConfig const& __cordl_internal_get_levelConfig() const;

  constexpr ::GlobalNamespace::PerformanceConfigurationChecks_LevelConfig& __cordl_internal_get_levelConfig();

  constexpr ::GlobalNamespace::PerformanceConfigurationChecks_PlayerConfig const& __cordl_internal_get_playerConfig() const;

  constexpr ::GlobalNamespace::PerformanceConfigurationChecks_PlayerConfig& __cordl_internal_get_playerConfig();

  constexpr ::BeatSaber::Settings::Settings const& __cordl_internal_get_settingsConfig() const;

  constexpr ::BeatSaber::Settings::Settings& __cordl_internal_get_settingsConfig();

  constexpr ::GlobalNamespace::PerformanceConfigurationChecks_XRConfig const& __cordl_internal_get_xrConfig() const;

  constexpr ::GlobalNamespace::PerformanceConfigurationChecks_XRConfig& __cordl_internal_get_xrConfig();

  constexpr void __cordl_internal_set_appConfig(::GlobalNamespace::PerformanceConfigurationChecks_AppConfig value);

  constexpr void __cordl_internal_set_invalid(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PerformanceConfigurationChecks_Mismatch>* value);

  constexpr void __cordl_internal_set_levelConfig(::GlobalNamespace::PerformanceConfigurationChecks_LevelConfig value);

  constexpr void __cordl_internal_set_playerConfig(::GlobalNamespace::PerformanceConfigurationChecks_PlayerConfig value);

  constexpr void __cordl_internal_set_settingsConfig(::BeatSaber::Settings::Settings value);

  constexpr void __cordl_internal_set_xrConfig(::GlobalNamespace::PerformanceConfigurationChecks_XRConfig value);

  /// @brief Method .ctor, addr 0x575f390, size 0x98, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6689 };

  /// @brief Field appConfig, offset: 0x10, size: 0x10, def value: None
  ::GlobalNamespace::PerformanceConfigurationChecks_AppConfig ___appConfig;

  /// @brief Field xrConfig, offset: 0x20, size: 0x30, def value: None
  ::GlobalNamespace::PerformanceConfigurationChecks_XRConfig ___xrConfig;

  /// @brief Field settingsConfig, offset: 0x50, size: 0xf0, def value: None
  ::BeatSaber::Settings::Settings ___settingsConfig;

  /// @brief Field playerConfig, offset: 0x140, size: 0x3c, def value: None
  ::GlobalNamespace::PerformanceConfigurationChecks_PlayerConfig ___playerConfig;

  /// @brief Field levelConfig, offset: 0x17c, size: 0x2, def value: None
  ::GlobalNamespace::PerformanceConfigurationChecks_LevelConfig ___levelConfig;

  /// @brief Field invalid, offset: 0x180, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PerformanceConfigurationChecks_Mismatch>* ___invalid;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks, ___appConfig) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks, ___xrConfig) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks, ___settingsConfig) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks, ___playerConfig) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks, ___levelConfig) == 0x17c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationChecks, ___invalid) == 0x180, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PerformanceConfigurationChecks, 0x188>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PerformanceConfigurationChecks);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PerformanceConfigurationChecks*, "", "PerformanceConfigurationChecks");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PerformanceConfigurationChecks_AppConfig, "", "PerformanceConfigurationChecks/AppConfig");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PerformanceConfigurationChecks_LevelConfig, "", "PerformanceConfigurationChecks/LevelConfig");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PerformanceConfigurationChecks_Mismatch, "", "PerformanceConfigurationChecks/Mismatch");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PerformanceConfigurationChecks_PlayerConfig, "", "PerformanceConfigurationChecks/PlayerConfig");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PerformanceConfigurationChecks_XRConfig, "", "PerformanceConfigurationChecks/XRConfig");
