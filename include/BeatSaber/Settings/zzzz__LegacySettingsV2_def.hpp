#pragma once
// IWYU pragma private; include "BeatSaber/Settings/LegacySettingsV2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__int2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LegacySettingsV2)
namespace BeatSaber::Settings {
class LegacySettingsV2_AudioSettings;
}
namespace BeatSaber::Settings {
struct LegacySettingsV2_BloomPrepassTextureEffectPreset;
}
namespace BeatSaber::Settings {
class LegacySettingsV2_ControllerSettings;
}
namespace BeatSaber::Settings {
class LegacySettingsV2_CustomServerSettings;
}
namespace BeatSaber::Settings {
class LegacySettingsV2_DebugSettings;
}
namespace BeatSaber::Settings {
struct LegacySettingsV2_FoveatedRenderingLevel;
}
namespace BeatSaber::Settings {
class LegacySettingsV2_GraphicSettings;
}
namespace BeatSaber::Settings {
struct LegacySettingsV2_MainEffectPreset;
}
namespace BeatSaber::Settings {
class LegacySettingsV2_MainSettings;
}
namespace BeatSaber::Settings {
struct LegacySettingsV2_MirrorQualityPreset;
}
namespace BeatSaber::Settings {
struct LegacySettingsV2_ObstaclesQuality;
}
namespace BeatSaber::Settings {
class LegacySettingsV2_PerformancePreset;
}
namespace BeatSaber::Settings {
struct LegacySettingsV2_ProcessorPerformanceLevel;
}
namespace BeatSaber::Settings {
class LegacySettingsV2_SmoothCameraSettings;
}
namespace BeatSaber::Settings {
struct LegacySettingsV2_WindowMode;
}
namespace BeatSaber::Settings {
struct Settings;
}
// Forward declare root types
namespace BeatSaber::Settings {
struct LegacySettingsV2_BloomPrepassTextureEffectPreset;
}
namespace BeatSaber::Settings {
struct LegacySettingsV2_FoveatedRenderingLevel;
}
namespace BeatSaber::Settings {
struct LegacySettingsV2_MainEffectPreset;
}
namespace BeatSaber::Settings {
struct LegacySettingsV2_MirrorQualityPreset;
}
namespace BeatSaber::Settings {
struct LegacySettingsV2_ObstaclesQuality;
}
namespace BeatSaber::Settings {
struct LegacySettingsV2_ProcessorPerformanceLevel;
}
namespace BeatSaber::Settings {
struct LegacySettingsV2_WindowMode;
}
namespace BeatSaber::Settings {
class LegacySettingsV2;
}
namespace BeatSaber::Settings {
class LegacySettingsV2_AudioSettings;
}
namespace BeatSaber::Settings {
class LegacySettingsV2_ControllerSettings;
}
namespace BeatSaber::Settings {
class LegacySettingsV2_CustomServerSettings;
}
namespace BeatSaber::Settings {
class LegacySettingsV2_DebugSettings;
}
namespace BeatSaber::Settings {
class LegacySettingsV2_GraphicSettings;
}
namespace BeatSaber::Settings {
class LegacySettingsV2_MainSettings;
}
namespace BeatSaber::Settings {
class LegacySettingsV2_PerformancePreset;
}
namespace BeatSaber::Settings {
class LegacySettingsV2_SmoothCameraSettings;
}
// Write type traits
MARK_VAL_T(::BeatSaber::Settings::LegacySettingsV2_BloomPrepassTextureEffectPreset);
MARK_VAL_T(::BeatSaber::Settings::LegacySettingsV2_FoveatedRenderingLevel);
MARK_VAL_T(::BeatSaber::Settings::LegacySettingsV2_MainEffectPreset);
MARK_VAL_T(::BeatSaber::Settings::LegacySettingsV2_MirrorQualityPreset);
MARK_VAL_T(::BeatSaber::Settings::LegacySettingsV2_ObstaclesQuality);
MARK_VAL_T(::BeatSaber::Settings::LegacySettingsV2_ProcessorPerformanceLevel);
MARK_VAL_T(::BeatSaber::Settings::LegacySettingsV2_WindowMode);
MARK_REF_PTR_T(::BeatSaber::Settings::LegacySettingsV2);
MARK_REF_PTR_T(::BeatSaber::Settings::LegacySettingsV2_AudioSettings);
MARK_REF_PTR_T(::BeatSaber::Settings::LegacySettingsV2_ControllerSettings);
MARK_REF_PTR_T(::BeatSaber::Settings::LegacySettingsV2_CustomServerSettings);
MARK_REF_PTR_T(::BeatSaber::Settings::LegacySettingsV2_DebugSettings);
MARK_REF_PTR_T(::BeatSaber::Settings::LegacySettingsV2_GraphicSettings);
MARK_REF_PTR_T(::BeatSaber::Settings::LegacySettingsV2_MainSettings);
MARK_REF_PTR_T(::BeatSaber::Settings::LegacySettingsV2_PerformancePreset);
MARK_REF_PTR_T(::BeatSaber::Settings::LegacySettingsV2_SmoothCameraSettings);
// Dependencies System.Object, Unity.Mathematics.float3
namespace BeatSaber::Settings {
// Is value type: false
// CS Name: BeatSaber.Settings.LegacySettingsV2/MainSettings
class CORDL_TYPE LegacySettingsV2_MainSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field audioSettings, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_audioSettings, put = __cordl_internal_set_audioSettings)) ::BeatSaber::Settings::LegacySettingsV2_AudioSettings* audioSettings;

  /// @brief Field controllerSettings, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_controllerSettings, put = __cordl_internal_set_controllerSettings)) ::BeatSaber::Settings::LegacySettingsV2_ControllerSettings* controllerSettings;

  /// @brief Field createScreenshotDuringTheGame, offset 0x55, size 0x1
  __declspec(property(get = __cordl_internal_get_createScreenshotDuringTheGame, put = __cordl_internal_set_createScreenshotDuringTheGame)) bool createScreenshotDuringTheGame;

  /// @brief Field customServerSettings, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_customServerSettings,
                      put = __cordl_internal_set_customServerSettings)) ::BeatSaber::Settings::LegacySettingsV2_CustomServerSettings* customServerSettings;

  /// @brief Field debugSettings, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_debugSettings, put = __cordl_internal_set_debugSettings)) ::BeatSaber::Settings::LegacySettingsV2_DebugSettings* debugSettings;

  /// @brief Field hapticFeedback, offset 0x54, size 0x1
  __declspec(property(get = __cordl_internal_get_hapticFeedback, put = __cordl_internal_set_hapticFeedback)) bool hapticFeedback;

  /// @brief Field language, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_language, put = __cordl_internal_set_language)) ::StringW language;

  /// @brief Field pauseButtonPressDurationLevel, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_pauseButtonPressDurationLevel, put = __cordl_internal_set_pauseButtonPressDurationLevel)) int32_t pauseButtonPressDurationLevel;

  /// @brief Field roomCenter, offset 0x44, size 0xc
  __declspec(property(get = __cordl_internal_get_roomCenter, put = __cordl_internal_set_roomCenter)) ::Unity::Mathematics::float3 roomCenter;

  /// @brief Field roomRotation, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_roomRotation, put = __cordl_internal_set_roomRotation)) float_t roomRotation;

  /// @brief Field smoothCameraSettings, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_smoothCameraSettings,
                      put = __cordl_internal_set_smoothCameraSettings)) ::BeatSaber::Settings::LegacySettingsV2_SmoothCameraSettings* smoothCameraSettings;

  static inline ::BeatSaber::Settings::LegacySettingsV2_MainSettings* New_ctor();

  constexpr ::BeatSaber::Settings::LegacySettingsV2_AudioSettings* const& __cordl_internal_get_audioSettings() const;

  constexpr ::BeatSaber::Settings::LegacySettingsV2_AudioSettings*& __cordl_internal_get_audioSettings();

  constexpr ::BeatSaber::Settings::LegacySettingsV2_ControllerSettings* const& __cordl_internal_get_controllerSettings() const;

  constexpr ::BeatSaber::Settings::LegacySettingsV2_ControllerSettings*& __cordl_internal_get_controllerSettings();

  constexpr bool const& __cordl_internal_get_createScreenshotDuringTheGame() const;

  constexpr bool& __cordl_internal_get_createScreenshotDuringTheGame();

  constexpr ::BeatSaber::Settings::LegacySettingsV2_CustomServerSettings* const& __cordl_internal_get_customServerSettings() const;

  constexpr ::BeatSaber::Settings::LegacySettingsV2_CustomServerSettings*& __cordl_internal_get_customServerSettings();

  constexpr ::BeatSaber::Settings::LegacySettingsV2_DebugSettings* const& __cordl_internal_get_debugSettings() const;

  constexpr ::BeatSaber::Settings::LegacySettingsV2_DebugSettings*& __cordl_internal_get_debugSettings();

  constexpr bool const& __cordl_internal_get_hapticFeedback() const;

  constexpr bool& __cordl_internal_get_hapticFeedback();

  constexpr ::StringW const& __cordl_internal_get_language() const;

  constexpr ::StringW& __cordl_internal_get_language();

  constexpr int32_t const& __cordl_internal_get_pauseButtonPressDurationLevel() const;

  constexpr int32_t& __cordl_internal_get_pauseButtonPressDurationLevel();

  constexpr ::Unity::Mathematics::float3 const& __cordl_internal_get_roomCenter() const;

  constexpr ::Unity::Mathematics::float3& __cordl_internal_get_roomCenter();

  constexpr float_t const& __cordl_internal_get_roomRotation() const;

  constexpr float_t& __cordl_internal_get_roomRotation();

  constexpr ::BeatSaber::Settings::LegacySettingsV2_SmoothCameraSettings* const& __cordl_internal_get_smoothCameraSettings() const;

  constexpr ::BeatSaber::Settings::LegacySettingsV2_SmoothCameraSettings*& __cordl_internal_get_smoothCameraSettings();

  constexpr void __cordl_internal_set_audioSettings(::BeatSaber::Settings::LegacySettingsV2_AudioSettings* value);

  constexpr void __cordl_internal_set_controllerSettings(::BeatSaber::Settings::LegacySettingsV2_ControllerSettings* value);

  constexpr void __cordl_internal_set_createScreenshotDuringTheGame(bool value);

  constexpr void __cordl_internal_set_customServerSettings(::BeatSaber::Settings::LegacySettingsV2_CustomServerSettings* value);

  constexpr void __cordl_internal_set_debugSettings(::BeatSaber::Settings::LegacySettingsV2_DebugSettings* value);

  constexpr void __cordl_internal_set_hapticFeedback(bool value);

  constexpr void __cordl_internal_set_language(::StringW value);

  constexpr void __cordl_internal_set_pauseButtonPressDurationLevel(int32_t value);

  constexpr void __cordl_internal_set_roomCenter(::Unity::Mathematics::float3 value);

  constexpr void __cordl_internal_set_roomRotation(float_t value);

  constexpr void __cordl_internal_set_smoothCameraSettings(::BeatSaber::Settings::LegacySettingsV2_SmoothCameraSettings* value);

  /// @brief Method .ctor, addr 0x227d9ec, size 0x174, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LegacySettingsV2_MainSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LegacySettingsV2_MainSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LegacySettingsV2_MainSettings(LegacySettingsV2_MainSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LegacySettingsV2_MainSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LegacySettingsV2_MainSettings(LegacySettingsV2_MainSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17991 };

  /// @brief Field audioSettings, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::Settings::LegacySettingsV2_AudioSettings* ___audioSettings;

  /// @brief Field smoothCameraSettings, offset: 0x18, size: 0x8, def value: None
  ::BeatSaber::Settings::LegacySettingsV2_SmoothCameraSettings* ___smoothCameraSettings;

  /// @brief Field controllerSettings, offset: 0x20, size: 0x8, def value: None
  ::BeatSaber::Settings::LegacySettingsV2_ControllerSettings* ___controllerSettings;

  /// @brief Field customServerSettings, offset: 0x28, size: 0x8, def value: None
  ::BeatSaber::Settings::LegacySettingsV2_CustomServerSettings* ___customServerSettings;

  /// @brief Field debugSettings, offset: 0x30, size: 0x8, def value: None
  ::BeatSaber::Settings::LegacySettingsV2_DebugSettings* ___debugSettings;

  /// @brief Field language, offset: 0x38, size: 0x8, def value: None
  ::StringW ___language;

  /// @brief Field pauseButtonPressDurationLevel, offset: 0x40, size: 0x4, def value: None
  int32_t ___pauseButtonPressDurationLevel;

  /// @brief Field roomCenter, offset: 0x44, size: 0xc, def value: None
  ::Unity::Mathematics::float3 ___roomCenter;

  /// @brief Field roomRotation, offset: 0x50, size: 0x4, def value: None
  float_t ___roomRotation;

  /// @brief Field hapticFeedback, offset: 0x54, size: 0x1, def value: None
  bool ___hapticFeedback;

  /// @brief Field createScreenshotDuringTheGame, offset: 0x55, size: 0x1, def value: None
  bool ___createScreenshotDuringTheGame;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_MainSettings, ___audioSettings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_MainSettings, ___smoothCameraSettings) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_MainSettings, ___controllerSettings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_MainSettings, ___customServerSettings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_MainSettings, ___debugSettings) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_MainSettings, ___language) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_MainSettings, ___pauseButtonPressDurationLevel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_MainSettings, ___roomCenter) == 0x44, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_MainSettings, ___roomRotation) == 0x50, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_MainSettings, ___hapticFeedback) == 0x54, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_MainSettings, ___createScreenshotDuringTheGame) == 0x55, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::LegacySettingsV2_MainSettings, 0x58>, "Size mismatch!");

} // namespace BeatSaber::Settings
// Dependencies System.Object
namespace BeatSaber::Settings {
// Is value type: false
// CS Name: BeatSaber.Settings.LegacySettingsV2/AudioSettings
class CORDL_TYPE LegacySettingsV2_AudioSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field ambientVolumeScale, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_ambientVolumeScale, put = __cordl_internal_set_ambientVolumeScale)) float_t ambientVolumeScale;

  /// @brief Field audioLatency, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_audioLatency, put = __cordl_internal_set_audioLatency)) float_t audioLatency;

  /// @brief Field overrideAudioLatency, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_overrideAudioLatency, put = __cordl_internal_set_overrideAudioLatency)) bool overrideAudioLatency;

  /// @brief Field volume, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_volume, put = __cordl_internal_set_volume)) float_t volume;

  static inline ::BeatSaber::Settings::LegacySettingsV2_AudioSettings* New_ctor();

  constexpr float_t const& __cordl_internal_get_ambientVolumeScale() const;

  constexpr float_t& __cordl_internal_get_ambientVolumeScale();

  constexpr float_t const& __cordl_internal_get_audioLatency() const;

  constexpr float_t& __cordl_internal_get_audioLatency();

  constexpr bool const& __cordl_internal_get_overrideAudioLatency() const;

  constexpr bool& __cordl_internal_get_overrideAudioLatency();

  constexpr float_t const& __cordl_internal_get_volume() const;

  constexpr float_t& __cordl_internal_get_volume();

  constexpr void __cordl_internal_set_ambientVolumeScale(float_t value);

  constexpr void __cordl_internal_set_audioLatency(float_t value);

  constexpr void __cordl_internal_set_overrideAudioLatency(bool value);

  constexpr void __cordl_internal_set_volume(float_t value);

  /// @brief Method .ctor, addr 0x227dbf4, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LegacySettingsV2_AudioSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LegacySettingsV2_AudioSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LegacySettingsV2_AudioSettings(LegacySettingsV2_AudioSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LegacySettingsV2_AudioSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LegacySettingsV2_AudioSettings(LegacySettingsV2_AudioSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17992 };

  /// @brief Field volume, offset: 0x10, size: 0x4, def value: None
  float_t ___volume;

  /// @brief Field ambientVolumeScale, offset: 0x14, size: 0x4, def value: None
  float_t ___ambientVolumeScale;

  /// @brief Field overrideAudioLatency, offset: 0x18, size: 0x1, def value: None
  bool ___overrideAudioLatency;

  /// @brief Field audioLatency, offset: 0x1c, size: 0x4, def value: None
  float_t ___audioLatency;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_AudioSettings, ___volume) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_AudioSettings, ___ambientVolumeScale) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_AudioSettings, ___overrideAudioLatency) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_AudioSettings, ___audioLatency) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::LegacySettingsV2_AudioSettings, 0x20>, "Size mismatch!");

} // namespace BeatSaber::Settings
// Dependencies System.Object, Unity.Mathematics.float3
namespace BeatSaber::Settings {
// Is value type: false
// CS Name: BeatSaber.Settings.LegacySettingsV2/SmoothCameraSettings
class CORDL_TYPE LegacySettingsV2_SmoothCameraSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field enabled, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_enabled, put = __cordl_internal_set_enabled)) bool enabled;

  /// @brief Field fov, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_fov, put = __cordl_internal_set_fov)) float_t fov;

  /// @brief Field positionSmooth, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_positionSmooth, put = __cordl_internal_set_positionSmooth)) float_t positionSmooth;

  /// @brief Field rotationSmooth, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_rotationSmooth, put = __cordl_internal_set_rotationSmooth)) float_t rotationSmooth;

  /// @brief Field thirdPersonEnabled, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_thirdPersonEnabled, put = __cordl_internal_set_thirdPersonEnabled)) bool thirdPersonEnabled;

  /// @brief Field thirdPersonEulerAngles, offset 0x30, size 0xc
  __declspec(property(get = __cordl_internal_get_thirdPersonEulerAngles, put = __cordl_internal_set_thirdPersonEulerAngles)) ::Unity::Mathematics::float3 thirdPersonEulerAngles;

  /// @brief Field thirdPersonPosition, offset 0x24, size 0xc
  __declspec(property(get = __cordl_internal_get_thirdPersonPosition, put = __cordl_internal_set_thirdPersonPosition)) ::Unity::Mathematics::float3 thirdPersonPosition;

  static inline ::BeatSaber::Settings::LegacySettingsV2_SmoothCameraSettings* New_ctor();

  constexpr bool const& __cordl_internal_get_enabled() const;

  constexpr bool& __cordl_internal_get_enabled();

  constexpr float_t const& __cordl_internal_get_fov() const;

  constexpr float_t& __cordl_internal_get_fov();

  constexpr float_t const& __cordl_internal_get_positionSmooth() const;

  constexpr float_t& __cordl_internal_get_positionSmooth();

  constexpr float_t const& __cordl_internal_get_rotationSmooth() const;

  constexpr float_t& __cordl_internal_get_rotationSmooth();

  constexpr bool const& __cordl_internal_get_thirdPersonEnabled() const;

  constexpr bool& __cordl_internal_get_thirdPersonEnabled();

  constexpr ::Unity::Mathematics::float3 const& __cordl_internal_get_thirdPersonEulerAngles() const;

  constexpr ::Unity::Mathematics::float3& __cordl_internal_get_thirdPersonEulerAngles();

  constexpr ::Unity::Mathematics::float3 const& __cordl_internal_get_thirdPersonPosition() const;

  constexpr ::Unity::Mathematics::float3& __cordl_internal_get_thirdPersonPosition();

  constexpr void __cordl_internal_set_enabled(bool value);

  constexpr void __cordl_internal_set_fov(float_t value);

  constexpr void __cordl_internal_set_positionSmooth(float_t value);

  constexpr void __cordl_internal_set_rotationSmooth(float_t value);

  constexpr void __cordl_internal_set_thirdPersonEnabled(bool value);

  constexpr void __cordl_internal_set_thirdPersonEulerAngles(::Unity::Mathematics::float3 value);

  constexpr void __cordl_internal_set_thirdPersonPosition(::Unity::Mathematics::float3 value);

  /// @brief Method .ctor, addr 0x227dc08, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LegacySettingsV2_SmoothCameraSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LegacySettingsV2_SmoothCameraSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LegacySettingsV2_SmoothCameraSettings(LegacySettingsV2_SmoothCameraSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LegacySettingsV2_SmoothCameraSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LegacySettingsV2_SmoothCameraSettings(LegacySettingsV2_SmoothCameraSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17993 };

  /// @brief Field enabled, offset: 0x10, size: 0x1, def value: None
  bool ___enabled;

  /// @brief Field fov, offset: 0x14, size: 0x4, def value: None
  float_t ___fov;

  /// @brief Field rotationSmooth, offset: 0x18, size: 0x4, def value: None
  float_t ___rotationSmooth;

  /// @brief Field positionSmooth, offset: 0x1c, size: 0x4, def value: None
  float_t ___positionSmooth;

  /// @brief Field thirdPersonEnabled, offset: 0x20, size: 0x1, def value: None
  bool ___thirdPersonEnabled;

  /// @brief Field thirdPersonPosition, offset: 0x24, size: 0xc, def value: None
  ::Unity::Mathematics::float3 ___thirdPersonPosition;

  /// @brief Field thirdPersonEulerAngles, offset: 0x30, size: 0xc, def value: None
  ::Unity::Mathematics::float3 ___thirdPersonEulerAngles;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_SmoothCameraSettings, ___enabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_SmoothCameraSettings, ___fov) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_SmoothCameraSettings, ___rotationSmooth) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_SmoothCameraSettings, ___positionSmooth) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_SmoothCameraSettings, ___thirdPersonEnabled) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_SmoothCameraSettings, ___thirdPersonPosition) == 0x24, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_SmoothCameraSettings, ___thirdPersonEulerAngles) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::LegacySettingsV2_SmoothCameraSettings, 0x40>, "Size mismatch!");

} // namespace BeatSaber::Settings
// Dependencies System.Object, Unity.Mathematics.float3
namespace BeatSaber::Settings {
// Is value type: false
// CS Name: BeatSaber.Settings.LegacySettingsV2/ControllerSettings
class CORDL_TYPE LegacySettingsV2_ControllerSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field positionOffset, offset 0x10, size 0xc
  __declspec(property(get = __cordl_internal_get_positionOffset, put = __cordl_internal_set_positionOffset)) ::Unity::Mathematics::float3 positionOffset;

  /// @brief Field rotationOffset, offset 0x1c, size 0xc
  __declspec(property(get = __cordl_internal_get_rotationOffset, put = __cordl_internal_set_rotationOffset)) ::Unity::Mathematics::float3 rotationOffset;

  static inline ::BeatSaber::Settings::LegacySettingsV2_ControllerSettings* New_ctor();

  constexpr ::Unity::Mathematics::float3 const& __cordl_internal_get_positionOffset() const;

  constexpr ::Unity::Mathematics::float3& __cordl_internal_get_positionOffset();

  constexpr ::Unity::Mathematics::float3 const& __cordl_internal_get_rotationOffset() const;

  constexpr ::Unity::Mathematics::float3& __cordl_internal_get_rotationOffset();

  constexpr void __cordl_internal_set_positionOffset(::Unity::Mathematics::float3 value);

  constexpr void __cordl_internal_set_rotationOffset(::Unity::Mathematics::float3 value);

  /// @brief Method .ctor, addr 0x227dc90, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LegacySettingsV2_ControllerSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LegacySettingsV2_ControllerSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LegacySettingsV2_ControllerSettings(LegacySettingsV2_ControllerSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LegacySettingsV2_ControllerSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LegacySettingsV2_ControllerSettings(LegacySettingsV2_ControllerSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17994 };

  /// @brief Field positionOffset, offset: 0x10, size: 0xc, def value: None
  ::Unity::Mathematics::float3 ___positionOffset;

  /// @brief Field rotationOffset, offset: 0x1c, size: 0xc, def value: None
  ::Unity::Mathematics::float3 ___rotationOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_ControllerSettings, ___positionOffset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_ControllerSettings, ___rotationOffset) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::LegacySettingsV2_ControllerSettings, 0x28>, "Size mismatch!");

} // namespace BeatSaber::Settings
// Dependencies System.Object
namespace BeatSaber::Settings {
// Is value type: false
// CS Name: BeatSaber.Settings.LegacySettingsV2/CustomServerSettings
class CORDL_TYPE LegacySettingsV2_CustomServerSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field customServerHostName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_customServerHostName, put = __cordl_internal_set_customServerHostName)) ::StringW customServerHostName;

  /// @brief Field forceGameLiftServerEnvironment, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_forceGameLiftServerEnvironment, put = __cordl_internal_set_forceGameLiftServerEnvironment)) bool forceGameLiftServerEnvironment;

  /// @brief Field useCustomServerEnvironment, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_useCustomServerEnvironment, put = __cordl_internal_set_useCustomServerEnvironment)) bool useCustomServerEnvironment;

  static inline ::BeatSaber::Settings::LegacySettingsV2_CustomServerSettings* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_customServerHostName() const;

  constexpr ::StringW& __cordl_internal_get_customServerHostName();

  constexpr bool const& __cordl_internal_get_forceGameLiftServerEnvironment() const;

  constexpr bool& __cordl_internal_get_forceGameLiftServerEnvironment();

  constexpr bool const& __cordl_internal_get_useCustomServerEnvironment() const;

  constexpr bool& __cordl_internal_get_useCustomServerEnvironment();

  constexpr void __cordl_internal_set_customServerHostName(::StringW value);

  constexpr void __cordl_internal_set_forceGameLiftServerEnvironment(bool value);

  constexpr void __cordl_internal_set_useCustomServerEnvironment(bool value);

  /// @brief Method .ctor, addr 0x227dd04, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LegacySettingsV2_CustomServerSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LegacySettingsV2_CustomServerSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LegacySettingsV2_CustomServerSettings(LegacySettingsV2_CustomServerSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LegacySettingsV2_CustomServerSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LegacySettingsV2_CustomServerSettings(LegacySettingsV2_CustomServerSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17995 };

  /// @brief Field useCustomServerEnvironment, offset: 0x10, size: 0x1, def value: None
  bool ___useCustomServerEnvironment;

  /// @brief Field forceGameLiftServerEnvironment, offset: 0x11, size: 0x1, def value: None
  bool ___forceGameLiftServerEnvironment;

  /// @brief Field customServerHostName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___customServerHostName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_CustomServerSettings, ___useCustomServerEnvironment) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_CustomServerSettings, ___forceGameLiftServerEnvironment) == 0x11, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_CustomServerSettings, ___customServerHostName) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::LegacySettingsV2_CustomServerSettings, 0x20>, "Size mismatch!");

} // namespace BeatSaber::Settings
// Dependencies System.Object
namespace BeatSaber::Settings {
// Is value type: false
// CS Name: BeatSaber.Settings.LegacySettingsV2/DebugSettings
class CORDL_TYPE LegacySettingsV2_DebugSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field enableFpsCounter, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_enableFpsCounter, put = __cordl_internal_set_enableFpsCounter)) bool enableFpsCounter;

  /// @brief Field enableFpsRecorder, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_enableFpsRecorder, put = __cordl_internal_set_enableFpsRecorder)) bool enableFpsRecorder;

  /// @brief Field enableMemoryTracker, offset 0x12, size 0x1
  __declspec(property(get = __cordl_internal_get_enableMemoryTracker, put = __cordl_internal_set_enableMemoryTracker)) bool enableMemoryTracker;

  static inline ::BeatSaber::Settings::LegacySettingsV2_DebugSettings* New_ctor();

  constexpr bool const& __cordl_internal_get_enableFpsCounter() const;

  constexpr bool& __cordl_internal_get_enableFpsCounter();

  constexpr bool const& __cordl_internal_get_enableFpsRecorder() const;

  constexpr bool& __cordl_internal_get_enableFpsRecorder();

  constexpr bool const& __cordl_internal_get_enableMemoryTracker() const;

  constexpr bool& __cordl_internal_get_enableMemoryTracker();

  constexpr void __cordl_internal_set_enableFpsCounter(bool value);

  constexpr void __cordl_internal_set_enableFpsRecorder(bool value);

  constexpr void __cordl_internal_set_enableMemoryTracker(bool value);

  /// @brief Method .ctor, addr 0x227dd5c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LegacySettingsV2_DebugSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LegacySettingsV2_DebugSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LegacySettingsV2_DebugSettings(LegacySettingsV2_DebugSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LegacySettingsV2_DebugSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LegacySettingsV2_DebugSettings(LegacySettingsV2_DebugSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17996 };

  /// @brief Field enableFpsCounter, offset: 0x10, size: 0x1, def value: None
  bool ___enableFpsCounter;

  /// @brief Field enableFpsRecorder, offset: 0x11, size: 0x1, def value: None
  bool ___enableFpsRecorder;

  /// @brief Field enableMemoryTracker, offset: 0x12, size: 0x1, def value: None
  bool ___enableMemoryTracker;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_DebugSettings, ___enableFpsCounter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_DebugSettings, ___enableFpsRecorder) == 0x11, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_DebugSettings, ___enableMemoryTracker) == 0x12, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::LegacySettingsV2_DebugSettings, 0x18>, "Size mismatch!");

} // namespace BeatSaber::Settings
// Dependencies
namespace BeatSaber::Settings {
// Is value type: true
// CS Name: BeatSaber.Settings.LegacySettingsV2/WindowMode
struct CORDL_TYPE LegacySettingsV2_WindowMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LegacySettingsV2_WindowMode_Unwrapped
  enum struct __LegacySettingsV2_WindowMode_Unwrapped : int32_t {
    __E_Windowed = static_cast<int32_t>(0x0),
    __E_Fullscreen = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LegacySettingsV2_WindowMode_Unwrapped() const noexcept {
    return static_cast<__LegacySettingsV2_WindowMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LegacySettingsV2_WindowMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LegacySettingsV2_WindowMode(int32_t value__) noexcept;

  /// @brief Field Fullscreen value: I32(1)
  static ::BeatSaber::Settings::LegacySettingsV2_WindowMode const Fullscreen;

  /// @brief Field Windowed value: I32(0)
  static ::BeatSaber::Settings::LegacySettingsV2_WindowMode const Windowed;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17998 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_WindowMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::LegacySettingsV2_WindowMode, 0x4>, "Size mismatch!");

} // namespace BeatSaber::Settings
// Dependencies BeatSaber.Settings.LegacySettingsV2::WindowMode, System.Object, Unity.Mathematics.int2
namespace BeatSaber::Settings {
// Is value type: false
// CS Name: BeatSaber.Settings.LegacySettingsV2/GraphicSettings
class CORDL_TYPE LegacySettingsV2_GraphicSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field customPreset, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_customPreset, put = __cordl_internal_set_customPreset)) ::BeatSaber::Settings::LegacySettingsV2_PerformancePreset* customPreset;

  /// @brief Field performancePresetKey, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_performancePresetKey, put = __cordl_internal_set_performancePresetKey)) ::StringW performancePresetKey;

  /// @brief Field windowMode, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_windowMode, put = __cordl_internal_set_windowMode)) ::BeatSaber::Settings::LegacySettingsV2_WindowMode windowMode;

  /// @brief Field windowResolution, offset 0x24, size 0x8
  __declspec(property(get = __cordl_internal_get_windowResolution, put = __cordl_internal_set_windowResolution)) ::Unity::Mathematics::int2 windowResolution;

  static inline ::BeatSaber::Settings::LegacySettingsV2_GraphicSettings* New_ctor();

  constexpr ::BeatSaber::Settings::LegacySettingsV2_PerformancePreset* const& __cordl_internal_get_customPreset() const;

  constexpr ::BeatSaber::Settings::LegacySettingsV2_PerformancePreset*& __cordl_internal_get_customPreset();

  constexpr ::StringW const& __cordl_internal_get_performancePresetKey() const;

  constexpr ::StringW& __cordl_internal_get_performancePresetKey();

  constexpr ::BeatSaber::Settings::LegacySettingsV2_WindowMode const& __cordl_internal_get_windowMode() const;

  constexpr ::BeatSaber::Settings::LegacySettingsV2_WindowMode& __cordl_internal_get_windowMode();

  constexpr ::Unity::Mathematics::int2 const& __cordl_internal_get_windowResolution() const;

  constexpr ::Unity::Mathematics::int2& __cordl_internal_get_windowResolution();

  constexpr void __cordl_internal_set_customPreset(::BeatSaber::Settings::LegacySettingsV2_PerformancePreset* value);

  constexpr void __cordl_internal_set_performancePresetKey(::StringW value);

  constexpr void __cordl_internal_set_windowMode(::BeatSaber::Settings::LegacySettingsV2_WindowMode value);

  constexpr void __cordl_internal_set_windowResolution(::Unity::Mathematics::int2 value);

  /// @brief Method .ctor, addr 0x227db60, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LegacySettingsV2_GraphicSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LegacySettingsV2_GraphicSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LegacySettingsV2_GraphicSettings(LegacySettingsV2_GraphicSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LegacySettingsV2_GraphicSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LegacySettingsV2_GraphicSettings(LegacySettingsV2_GraphicSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17997 };

  /// @brief Field performancePresetKey, offset: 0x10, size: 0x8, def value: None
  ::StringW ___performancePresetKey;

  /// @brief Field customPreset, offset: 0x18, size: 0x8, def value: None
  ::BeatSaber::Settings::LegacySettingsV2_PerformancePreset* ___customPreset;

  /// @brief Field windowMode, offset: 0x20, size: 0x4, def value: None
  ::BeatSaber::Settings::LegacySettingsV2_WindowMode ___windowMode;

  /// @brief Field windowResolution, offset: 0x24, size: 0x8, def value: None
  ::Unity::Mathematics::int2 ___windowResolution;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_GraphicSettings, ___performancePresetKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_GraphicSettings, ___customPreset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_GraphicSettings, ___windowMode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_GraphicSettings, ___windowResolution) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::LegacySettingsV2_GraphicSettings, 0x30>, "Size mismatch!");

} // namespace BeatSaber::Settings
// Dependencies
namespace BeatSaber::Settings {
// Is value type: true
// CS Name: BeatSaber.Settings.LegacySettingsV2/BloomPrepassTextureEffectPreset
struct CORDL_TYPE LegacySettingsV2_BloomPrepassTextureEffectPreset {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LegacySettingsV2_BloomPrepassTextureEffectPreset_Unwrapped
  enum struct __LegacySettingsV2_BloomPrepassTextureEffectPreset_Unwrapped : int32_t {
    __E_HD = static_cast<int32_t>(0x0),
    __E_HDWithoutToneMapping = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LegacySettingsV2_BloomPrepassTextureEffectPreset_Unwrapped() const noexcept {
    return static_cast<__LegacySettingsV2_BloomPrepassTextureEffectPreset_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LegacySettingsV2_BloomPrepassTextureEffectPreset();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LegacySettingsV2_BloomPrepassTextureEffectPreset(int32_t value__) noexcept;

  /// @brief Field HD value: I32(0)
  static ::BeatSaber::Settings::LegacySettingsV2_BloomPrepassTextureEffectPreset const HD;

  /// @brief Field HDWithoutToneMapping value: I32(1)
  static ::BeatSaber::Settings::LegacySettingsV2_BloomPrepassTextureEffectPreset const HDWithoutToneMapping;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17999 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_BloomPrepassTextureEffectPreset, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::LegacySettingsV2_BloomPrepassTextureEffectPreset, 0x4>, "Size mismatch!");

} // namespace BeatSaber::Settings
// Dependencies
namespace BeatSaber::Settings {
// Is value type: true
// CS Name: BeatSaber.Settings.LegacySettingsV2/FoveatedRenderingLevel
struct CORDL_TYPE LegacySettingsV2_FoveatedRenderingLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LegacySettingsV2_FoveatedRenderingLevel_Unwrapped
  enum struct __LegacySettingsV2_FoveatedRenderingLevel_Unwrapped : int32_t {
    __E_Off = static_cast<int32_t>(0x0),
    __E_Low = static_cast<int32_t>(0x1),
    __E_Medium = static_cast<int32_t>(0x2),
    __E_High = static_cast<int32_t>(0x3),
    __E_HighTop = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LegacySettingsV2_FoveatedRenderingLevel_Unwrapped() const noexcept {
    return static_cast<__LegacySettingsV2_FoveatedRenderingLevel_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LegacySettingsV2_FoveatedRenderingLevel();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LegacySettingsV2_FoveatedRenderingLevel(int32_t value__) noexcept;

  /// @brief Field High value: I32(3)
  static ::BeatSaber::Settings::LegacySettingsV2_FoveatedRenderingLevel const High;

  /// @brief Field HighTop value: I32(4)
  static ::BeatSaber::Settings::LegacySettingsV2_FoveatedRenderingLevel const HighTop;

  /// @brief Field Low value: I32(1)
  static ::BeatSaber::Settings::LegacySettingsV2_FoveatedRenderingLevel const Low;

  /// @brief Field Medium value: I32(2)
  static ::BeatSaber::Settings::LegacySettingsV2_FoveatedRenderingLevel const Medium;

  /// @brief Field Off value: I32(0)
  static ::BeatSaber::Settings::LegacySettingsV2_FoveatedRenderingLevel const Off;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18000 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_FoveatedRenderingLevel, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::LegacySettingsV2_FoveatedRenderingLevel, 0x4>, "Size mismatch!");

} // namespace BeatSaber::Settings
// Dependencies
namespace BeatSaber::Settings {
// Is value type: true
// CS Name: BeatSaber.Settings.LegacySettingsV2/MainEffectPreset
struct CORDL_TYPE LegacySettingsV2_MainEffectPreset {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LegacySettingsV2_MainEffectPreset_Unwrapped
  enum struct __LegacySettingsV2_MainEffectPreset_Unwrapped : int32_t {
    __E_Off = static_cast<int32_t>(0x0),
    __E_Pyramid = static_cast<int32_t>(0x1),
    __E_PyramidForBaking = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LegacySettingsV2_MainEffectPreset_Unwrapped() const noexcept {
    return static_cast<__LegacySettingsV2_MainEffectPreset_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LegacySettingsV2_MainEffectPreset();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LegacySettingsV2_MainEffectPreset(int32_t value__) noexcept;

  /// @brief Field Off value: I32(0)
  static ::BeatSaber::Settings::LegacySettingsV2_MainEffectPreset const Off;

  /// @brief Field Pyramid value: I32(1)
  static ::BeatSaber::Settings::LegacySettingsV2_MainEffectPreset const Pyramid;

  /// @brief Field PyramidForBaking value: I32(2)
  static ::BeatSaber::Settings::LegacySettingsV2_MainEffectPreset const PyramidForBaking;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18001 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_MainEffectPreset, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::LegacySettingsV2_MainEffectPreset, 0x4>, "Size mismatch!");

} // namespace BeatSaber::Settings
// Dependencies
namespace BeatSaber::Settings {
// Is value type: true
// CS Name: BeatSaber.Settings.LegacySettingsV2/MirrorQualityPreset
struct CORDL_TYPE LegacySettingsV2_MirrorQualityPreset {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LegacySettingsV2_MirrorQualityPreset_Unwrapped
  enum struct __LegacySettingsV2_MirrorQualityPreset_Unwrapped : int32_t {
    __E_Off = static_cast<int32_t>(0x0),
    __E_Fake = static_cast<int32_t>(0x1),
    __E_RenderedLQ = static_cast<int32_t>(0x2),
    __E_RenderedHQ = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LegacySettingsV2_MirrorQualityPreset_Unwrapped() const noexcept {
    return static_cast<__LegacySettingsV2_MirrorQualityPreset_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LegacySettingsV2_MirrorQualityPreset();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LegacySettingsV2_MirrorQualityPreset(int32_t value__) noexcept;

  /// @brief Field Fake value: I32(1)
  static ::BeatSaber::Settings::LegacySettingsV2_MirrorQualityPreset const Fake;

  /// @brief Field Off value: I32(0)
  static ::BeatSaber::Settings::LegacySettingsV2_MirrorQualityPreset const Off;

  /// @brief Field RenderedHQ value: I32(3)
  static ::BeatSaber::Settings::LegacySettingsV2_MirrorQualityPreset const RenderedHQ;

  /// @brief Field RenderedLQ value: I32(2)
  static ::BeatSaber::Settings::LegacySettingsV2_MirrorQualityPreset const RenderedLQ;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18002 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_MirrorQualityPreset, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::LegacySettingsV2_MirrorQualityPreset, 0x4>, "Size mismatch!");

} // namespace BeatSaber::Settings
// Dependencies
namespace BeatSaber::Settings {
// Is value type: true
// CS Name: BeatSaber.Settings.LegacySettingsV2/ObstaclesQuality
struct CORDL_TYPE LegacySettingsV2_ObstaclesQuality {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LegacySettingsV2_ObstaclesQuality_Unwrapped
  enum struct __LegacySettingsV2_ObstaclesQuality_Unwrapped : int32_t {
    __E_DefaultObstacleQualityBaseOnDisplacement = static_cast<int32_t>(0x0),
    __E_TexturedObstacle = static_cast<int32_t>(0x1),
    __E_ObstacleLW = static_cast<int32_t>(0x2),
    __E_ObstacleHW = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LegacySettingsV2_ObstaclesQuality_Unwrapped() const noexcept {
    return static_cast<__LegacySettingsV2_ObstaclesQuality_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LegacySettingsV2_ObstaclesQuality();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LegacySettingsV2_ObstaclesQuality(int32_t value__) noexcept;

  /// @brief Field DefaultObstacleQualityBaseOnDisplacement value: I32(0)
  static ::BeatSaber::Settings::LegacySettingsV2_ObstaclesQuality const DefaultObstacleQualityBaseOnDisplacement;

  /// @brief Field ObstacleHW value: I32(3)
  static ::BeatSaber::Settings::LegacySettingsV2_ObstaclesQuality const ObstacleHW;

  /// @brief Field ObstacleLW value: I32(2)
  static ::BeatSaber::Settings::LegacySettingsV2_ObstaclesQuality const ObstacleLW;

  /// @brief Field TexturedObstacle value: I32(1)
  static ::BeatSaber::Settings::LegacySettingsV2_ObstaclesQuality const TexturedObstacle;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18003 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_ObstaclesQuality, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::LegacySettingsV2_ObstaclesQuality, 0x4>, "Size mismatch!");

} // namespace BeatSaber::Settings
// Dependencies
namespace BeatSaber::Settings {
// Is value type: true
// CS Name: BeatSaber.Settings.LegacySettingsV2/ProcessorPerformanceLevel
struct CORDL_TYPE LegacySettingsV2_ProcessorPerformanceLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LegacySettingsV2_ProcessorPerformanceLevel_Unwrapped
  enum struct __LegacySettingsV2_ProcessorPerformanceLevel_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0xffffffff),
    __E_PowerSavings = static_cast<int32_t>(0x0),
    __E_SustainedLow = static_cast<int32_t>(0x1),
    __E_SustainedHigh = static_cast<int32_t>(0x2),
    __E_Boost = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LegacySettingsV2_ProcessorPerformanceLevel_Unwrapped() const noexcept {
    return static_cast<__LegacySettingsV2_ProcessorPerformanceLevel_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LegacySettingsV2_ProcessorPerformanceLevel();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LegacySettingsV2_ProcessorPerformanceLevel(int32_t value__) noexcept;

  /// @brief Field Boost value: I32(3)
  static ::BeatSaber::Settings::LegacySettingsV2_ProcessorPerformanceLevel const Boost;

  /// @brief Field PowerSavings value: I32(0)
  static ::BeatSaber::Settings::LegacySettingsV2_ProcessorPerformanceLevel const PowerSavings;

  /// @brief Field SustainedHigh value: I32(2)
  static ::BeatSaber::Settings::LegacySettingsV2_ProcessorPerformanceLevel const SustainedHigh;

  /// @brief Field SustainedLow value: I32(1)
  static ::BeatSaber::Settings::LegacySettingsV2_ProcessorPerformanceLevel const SustainedLow;

  /// @brief Field Unknown value: I32(-1)
  static ::BeatSaber::Settings::LegacySettingsV2_ProcessorPerformanceLevel const Unknown;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18004 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_ProcessorPerformanceLevel, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::LegacySettingsV2_ProcessorPerformanceLevel, 0x4>, "Size mismatch!");

} // namespace BeatSaber::Settings
// Dependencies BeatSaber.Settings.LegacySettingsV2::BloomPrepassTextureEffectPreset, BeatSaber.Settings.LegacySettingsV2::MainEffectPreset, BeatSaber.Settings.LegacySettingsV2::MirrorQualityPreset,
// BeatSaber.Settings.LegacySettingsV2::ObstaclesQuality, System.Object
namespace BeatSaber::Settings {
// Is value type: false
// CS Name: BeatSaber.Settings.LegacySettingsV2/PerformancePreset
class CORDL_TYPE LegacySettingsV2_PerformancePreset : public ::System::Object {
public:
  // Declarations
  /// @brief Field antiAliasingLevel, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_antiAliasingLevel, put = __cordl_internal_set_antiAliasingLevel)) int32_t antiAliasingLevel;

  /// @brief Field bloomPrePassTextureEffect, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_bloomPrePassTextureEffect,
                      put = __cordl_internal_set_bloomPrePassTextureEffect)) ::BeatSaber::Settings::LegacySettingsV2_BloomPrepassTextureEffectPreset bloomPrePassTextureEffect;

  /// @brief Field burnMarkTrails, offset 0x36, size 0x1
  __declspec(property(get = __cordl_internal_get_burnMarkTrails, put = __cordl_internal_set_burnMarkTrails)) bool burnMarkTrails;

  /// @brief Field depthTexture, offset 0x35, size 0x1
  __declspec(property(get = __cordl_internal_get_depthTexture, put = __cordl_internal_set_depthTexture)) bool depthTexture;

  /// @brief Field mainEffectGraphics, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_mainEffectGraphics, put = __cordl_internal_set_mainEffectGraphics)) ::BeatSaber::Settings::LegacySettingsV2_MainEffectPreset mainEffectGraphics;

  /// @brief Field maxNumberOfCutSoundEffects, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_maxNumberOfCutSoundEffects, put = __cordl_internal_set_maxNumberOfCutSoundEffects)) int32_t maxNumberOfCutSoundEffects;

  /// @brief Field maxQueuedFrames, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_maxQueuedFrames, put = __cordl_internal_set_maxQueuedFrames)) int32_t maxQueuedFrames;

  /// @brief Field maxShockwaveParticles, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_maxShockwaveParticles, put = __cordl_internal_set_maxShockwaveParticles)) int32_t maxShockwaveParticles;

  /// @brief Field menuVRResolutionScaleMultiplier, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_menuVRResolutionScaleMultiplier, put = __cordl_internal_set_menuVRResolutionScaleMultiplier)) float_t menuVRResolutionScaleMultiplier;

  /// @brief Field mirrorGraphics, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_mirrorGraphics, put = __cordl_internal_set_mirrorGraphics)) ::BeatSaber::Settings::LegacySettingsV2_MirrorQualityPreset mirrorGraphics;

  /// @brief Field obstaclesQuality, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_obstaclesQuality, put = __cordl_internal_set_obstaclesQuality)) ::BeatSaber::Settings::LegacySettingsV2_ObstaclesQuality obstaclesQuality;

  /// @brief Field presetNameLocalizationTag, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_presetNameLocalizationTag, put = __cordl_internal_set_presetNameLocalizationTag)) ::StringW presetNameLocalizationTag;

  /// @brief Field renderViewportScale, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_renderViewportScale, put = __cordl_internal_set_renderViewportScale)) float_t renderViewportScale;

  /// @brief Field screenDisplacementEffects, offset 0x37, size 0x1
  __declspec(property(get = __cordl_internal_get_screenDisplacementEffects, put = __cordl_internal_set_screenDisplacementEffects)) bool screenDisplacementEffects;

  /// @brief Field smokeGraphics, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get_smokeGraphics, put = __cordl_internal_set_smokeGraphics)) bool smokeGraphics;

  /// @brief Field targetFramerate, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_targetFramerate, put = __cordl_internal_set_targetFramerate)) float_t targetFramerate;

  /// @brief Field vSyncCount, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_vSyncCount, put = __cordl_internal_set_vSyncCount)) int32_t vSyncCount;

  /// @brief Field vrResolutionScale, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_vrResolutionScale, put = __cordl_internal_set_vrResolutionScale)) float_t vrResolutionScale;

  static inline ::BeatSaber::Settings::LegacySettingsV2_PerformancePreset* New_ctor();

  constexpr int32_t const& __cordl_internal_get_antiAliasingLevel() const;

  constexpr int32_t& __cordl_internal_get_antiAliasingLevel();

  constexpr ::BeatSaber::Settings::LegacySettingsV2_BloomPrepassTextureEffectPreset const& __cordl_internal_get_bloomPrePassTextureEffect() const;

  constexpr ::BeatSaber::Settings::LegacySettingsV2_BloomPrepassTextureEffectPreset& __cordl_internal_get_bloomPrePassTextureEffect();

  constexpr bool const& __cordl_internal_get_burnMarkTrails() const;

  constexpr bool& __cordl_internal_get_burnMarkTrails();

  constexpr bool const& __cordl_internal_get_depthTexture() const;

  constexpr bool& __cordl_internal_get_depthTexture();

  constexpr ::BeatSaber::Settings::LegacySettingsV2_MainEffectPreset const& __cordl_internal_get_mainEffectGraphics() const;

  constexpr ::BeatSaber::Settings::LegacySettingsV2_MainEffectPreset& __cordl_internal_get_mainEffectGraphics();

  constexpr int32_t const& __cordl_internal_get_maxNumberOfCutSoundEffects() const;

  constexpr int32_t& __cordl_internal_get_maxNumberOfCutSoundEffects();

  constexpr int32_t const& __cordl_internal_get_maxQueuedFrames() const;

  constexpr int32_t& __cordl_internal_get_maxQueuedFrames();

  constexpr int32_t const& __cordl_internal_get_maxShockwaveParticles() const;

  constexpr int32_t& __cordl_internal_get_maxShockwaveParticles();

  constexpr float_t const& __cordl_internal_get_menuVRResolutionScaleMultiplier() const;

  constexpr float_t& __cordl_internal_get_menuVRResolutionScaleMultiplier();

  constexpr ::BeatSaber::Settings::LegacySettingsV2_MirrorQualityPreset const& __cordl_internal_get_mirrorGraphics() const;

  constexpr ::BeatSaber::Settings::LegacySettingsV2_MirrorQualityPreset& __cordl_internal_get_mirrorGraphics();

  constexpr ::BeatSaber::Settings::LegacySettingsV2_ObstaclesQuality const& __cordl_internal_get_obstaclesQuality() const;

  constexpr ::BeatSaber::Settings::LegacySettingsV2_ObstaclesQuality& __cordl_internal_get_obstaclesQuality();

  constexpr ::StringW const& __cordl_internal_get_presetNameLocalizationTag() const;

  constexpr ::StringW& __cordl_internal_get_presetNameLocalizationTag();

  constexpr float_t const& __cordl_internal_get_renderViewportScale() const;

  constexpr float_t& __cordl_internal_get_renderViewportScale();

  constexpr bool const& __cordl_internal_get_screenDisplacementEffects() const;

  constexpr bool& __cordl_internal_get_screenDisplacementEffects();

  constexpr bool const& __cordl_internal_get_smokeGraphics() const;

  constexpr bool& __cordl_internal_get_smokeGraphics();

  constexpr float_t const& __cordl_internal_get_targetFramerate() const;

  constexpr float_t& __cordl_internal_get_targetFramerate();

  constexpr int32_t const& __cordl_internal_get_vSyncCount() const;

  constexpr int32_t& __cordl_internal_get_vSyncCount();

  constexpr float_t const& __cordl_internal_get_vrResolutionScale() const;

  constexpr float_t& __cordl_internal_get_vrResolutionScale();

  constexpr void __cordl_internal_set_antiAliasingLevel(int32_t value);

  constexpr void __cordl_internal_set_bloomPrePassTextureEffect(::BeatSaber::Settings::LegacySettingsV2_BloomPrepassTextureEffectPreset value);

  constexpr void __cordl_internal_set_burnMarkTrails(bool value);

  constexpr void __cordl_internal_set_depthTexture(bool value);

  constexpr void __cordl_internal_set_mainEffectGraphics(::BeatSaber::Settings::LegacySettingsV2_MainEffectPreset value);

  constexpr void __cordl_internal_set_maxNumberOfCutSoundEffects(int32_t value);

  constexpr void __cordl_internal_set_maxQueuedFrames(int32_t value);

  constexpr void __cordl_internal_set_maxShockwaveParticles(int32_t value);

  constexpr void __cordl_internal_set_menuVRResolutionScaleMultiplier(float_t value);

  constexpr void __cordl_internal_set_mirrorGraphics(::BeatSaber::Settings::LegacySettingsV2_MirrorQualityPreset value);

  constexpr void __cordl_internal_set_obstaclesQuality(::BeatSaber::Settings::LegacySettingsV2_ObstaclesQuality value);

  constexpr void __cordl_internal_set_presetNameLocalizationTag(::StringW value);

  constexpr void __cordl_internal_set_renderViewportScale(float_t value);

  constexpr void __cordl_internal_set_screenDisplacementEffects(bool value);

  constexpr void __cordl_internal_set_smokeGraphics(bool value);

  constexpr void __cordl_internal_set_targetFramerate(float_t value);

  constexpr void __cordl_internal_set_vSyncCount(int32_t value);

  constexpr void __cordl_internal_set_vrResolutionScale(float_t value);

  /// @brief Method .ctor, addr 0x227dd64, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LegacySettingsV2_PerformancePreset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LegacySettingsV2_PerformancePreset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LegacySettingsV2_PerformancePreset(LegacySettingsV2_PerformancePreset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LegacySettingsV2_PerformancePreset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LegacySettingsV2_PerformancePreset(LegacySettingsV2_PerformancePreset const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18005 };

  /// @brief Field presetNameLocalizationTag, offset: 0x10, size: 0x8, def value: None
  ::StringW ___presetNameLocalizationTag;

  /// @brief Field renderViewportScale, offset: 0x18, size: 0x4, def value: None
  float_t ___renderViewportScale;

  /// @brief Field vrResolutionScale, offset: 0x1c, size: 0x4, def value: None
  float_t ___vrResolutionScale;

  /// @brief Field menuVRResolutionScaleMultiplier, offset: 0x20, size: 0x4, def value: None
  float_t ___menuVRResolutionScaleMultiplier;

  /// @brief Field antiAliasingLevel, offset: 0x24, size: 0x4, def value: None
  int32_t ___antiAliasingLevel;

  /// @brief Field targetFramerate, offset: 0x28, size: 0x4, def value: None
  float_t ___targetFramerate;

  /// @brief Field vSyncCount, offset: 0x2c, size: 0x4, def value: None
  int32_t ___vSyncCount;

  /// @brief Field maxQueuedFrames, offset: 0x30, size: 0x4, def value: None
  int32_t ___maxQueuedFrames;

  /// @brief Field smokeGraphics, offset: 0x34, size: 0x1, def value: None
  bool ___smokeGraphics;

  /// @brief Field depthTexture, offset: 0x35, size: 0x1, def value: None
  bool ___depthTexture;

  /// @brief Field burnMarkTrails, offset: 0x36, size: 0x1, def value: None
  bool ___burnMarkTrails;

  /// @brief Field screenDisplacementEffects, offset: 0x37, size: 0x1, def value: None
  bool ___screenDisplacementEffects;

  /// @brief Field maxShockwaveParticles, offset: 0x38, size: 0x4, def value: None
  int32_t ___maxShockwaveParticles;

  /// @brief Field maxNumberOfCutSoundEffects, offset: 0x3c, size: 0x4, def value: None
  int32_t ___maxNumberOfCutSoundEffects;

  /// @brief Field mirrorGraphics, offset: 0x40, size: 0x4, def value: None
  ::BeatSaber::Settings::LegacySettingsV2_MirrorQualityPreset ___mirrorGraphics;

  /// @brief Field mainEffectGraphics, offset: 0x44, size: 0x4, def value: None
  ::BeatSaber::Settings::LegacySettingsV2_MainEffectPreset ___mainEffectGraphics;

  /// @brief Field bloomPrePassTextureEffect, offset: 0x48, size: 0x4, def value: None
  ::BeatSaber::Settings::LegacySettingsV2_BloomPrepassTextureEffectPreset ___bloomPrePassTextureEffect;

  /// @brief Field obstaclesQuality, offset: 0x4c, size: 0x4, def value: None
  ::BeatSaber::Settings::LegacySettingsV2_ObstaclesQuality ___obstaclesQuality;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_PerformancePreset, ___presetNameLocalizationTag) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_PerformancePreset, ___renderViewportScale) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_PerformancePreset, ___vrResolutionScale) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_PerformancePreset, ___menuVRResolutionScaleMultiplier) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_PerformancePreset, ___antiAliasingLevel) == 0x24, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_PerformancePreset, ___targetFramerate) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_PerformancePreset, ___vSyncCount) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_PerformancePreset, ___maxQueuedFrames) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_PerformancePreset, ___smokeGraphics) == 0x34, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_PerformancePreset, ___depthTexture) == 0x35, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_PerformancePreset, ___burnMarkTrails) == 0x36, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_PerformancePreset, ___screenDisplacementEffects) == 0x37, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_PerformancePreset, ___maxShockwaveParticles) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_PerformancePreset, ___maxNumberOfCutSoundEffects) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_PerformancePreset, ___mirrorGraphics) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_PerformancePreset, ___mainEffectGraphics) == 0x44, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_PerformancePreset, ___bloomPrePassTextureEffect) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2_PerformancePreset, ___obstaclesQuality) == 0x4c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::LegacySettingsV2_PerformancePreset, 0x50>, "Size mismatch!");

} // namespace BeatSaber::Settings
// Dependencies System.Object
namespace BeatSaber::Settings {
// Is value type: false
// CS Name: BeatSaber.Settings.LegacySettingsV2
class CORDL_TYPE LegacySettingsV2 : public ::System::Object {
public:
  // Declarations
  using AudioSettings = ::BeatSaber::Settings::LegacySettingsV2_AudioSettings;

  using BloomPrepassTextureEffectPreset = ::BeatSaber::Settings::LegacySettingsV2_BloomPrepassTextureEffectPreset;

  using ControllerSettings = ::BeatSaber::Settings::LegacySettingsV2_ControllerSettings;

  using CustomServerSettings = ::BeatSaber::Settings::LegacySettingsV2_CustomServerSettings;

  using DebugSettings = ::BeatSaber::Settings::LegacySettingsV2_DebugSettings;

  using FoveatedRenderingLevel = ::BeatSaber::Settings::LegacySettingsV2_FoveatedRenderingLevel;

  using GraphicSettings = ::BeatSaber::Settings::LegacySettingsV2_GraphicSettings;

  using MainEffectPreset = ::BeatSaber::Settings::LegacySettingsV2_MainEffectPreset;

  using MainSettings = ::BeatSaber::Settings::LegacySettingsV2_MainSettings;

  using MirrorQualityPreset = ::BeatSaber::Settings::LegacySettingsV2_MirrorQualityPreset;

  using ObstaclesQuality = ::BeatSaber::Settings::LegacySettingsV2_ObstaclesQuality;

  using PerformancePreset = ::BeatSaber::Settings::LegacySettingsV2_PerformancePreset;

  using ProcessorPerformanceLevel = ::BeatSaber::Settings::LegacySettingsV2_ProcessorPerformanceLevel;

  using SmoothCameraSettings = ::BeatSaber::Settings::LegacySettingsV2_SmoothCameraSettings;

  using WindowMode = ::BeatSaber::Settings::LegacySettingsV2_WindowMode;

  /// @brief Field graphicSettings, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_graphicSettings, put = __cordl_internal_set_graphicSettings)) ::BeatSaber::Settings::LegacySettingsV2_GraphicSettings* graphicSettings;

  /// @brief Field mainSettings, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mainSettings, put = __cordl_internal_set_mainSettings)) ::BeatSaber::Settings::LegacySettingsV2_MainSettings* mainSettings;

  /// @brief Method ApplyTo, addr 0x227d634, size 0x32c, virtual false, abstract: false, final false
  inline void ApplyTo(::ByRef<::BeatSaber::Settings::Settings> settings);

  static inline ::BeatSaber::Settings::LegacySettingsV2* New_ctor();

  constexpr ::BeatSaber::Settings::LegacySettingsV2_GraphicSettings* const& __cordl_internal_get_graphicSettings() const;

  constexpr ::BeatSaber::Settings::LegacySettingsV2_GraphicSettings*& __cordl_internal_get_graphicSettings();

  constexpr ::BeatSaber::Settings::LegacySettingsV2_MainSettings* const& __cordl_internal_get_mainSettings() const;

  constexpr ::BeatSaber::Settings::LegacySettingsV2_MainSettings*& __cordl_internal_get_mainSettings();

  constexpr void __cordl_internal_set_graphicSettings(::BeatSaber::Settings::LegacySettingsV2_GraphicSettings* value);

  constexpr void __cordl_internal_set_mainSettings(::BeatSaber::Settings::LegacySettingsV2_MainSettings* value);

  /// @brief Method .ctor, addr 0x227d960, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LegacySettingsV2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LegacySettingsV2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LegacySettingsV2(LegacySettingsV2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LegacySettingsV2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LegacySettingsV2(LegacySettingsV2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18006 };

  /// @brief Field mainSettings, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::Settings::LegacySettingsV2_MainSettings* ___mainSettings;

  /// @brief Field graphicSettings, offset: 0x18, size: 0x8, def value: None
  ::BeatSaber::Settings::LegacySettingsV2_GraphicSettings* ___graphicSettings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2, ___mainSettings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2, ___graphicSettings) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::LegacySettingsV2, 0x20>, "Size mismatch!");

} // namespace BeatSaber::Settings
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::LegacySettingsV2_BloomPrepassTextureEffectPreset, "BeatSaber.Settings", "LegacySettingsV2/BloomPrepassTextureEffectPreset");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::LegacySettingsV2_FoveatedRenderingLevel, "BeatSaber.Settings", "LegacySettingsV2/FoveatedRenderingLevel");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::LegacySettingsV2_MainEffectPreset, "BeatSaber.Settings", "LegacySettingsV2/MainEffectPreset");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::LegacySettingsV2_MirrorQualityPreset, "BeatSaber.Settings", "LegacySettingsV2/MirrorQualityPreset");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::LegacySettingsV2_ObstaclesQuality, "BeatSaber.Settings", "LegacySettingsV2/ObstaclesQuality");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::LegacySettingsV2_ProcessorPerformanceLevel, "BeatSaber.Settings", "LegacySettingsV2/ProcessorPerformanceLevel");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::LegacySettingsV2_WindowMode, "BeatSaber.Settings", "LegacySettingsV2/WindowMode");
NEED_NO_BOX(::BeatSaber::Settings::LegacySettingsV2);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::LegacySettingsV2*, "BeatSaber.Settings", "LegacySettingsV2");
NEED_NO_BOX(::BeatSaber::Settings::LegacySettingsV2_AudioSettings);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::LegacySettingsV2_AudioSettings*, "BeatSaber.Settings", "LegacySettingsV2/AudioSettings");
NEED_NO_BOX(::BeatSaber::Settings::LegacySettingsV2_ControllerSettings);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::LegacySettingsV2_ControllerSettings*, "BeatSaber.Settings", "LegacySettingsV2/ControllerSettings");
NEED_NO_BOX(::BeatSaber::Settings::LegacySettingsV2_CustomServerSettings);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::LegacySettingsV2_CustomServerSettings*, "BeatSaber.Settings", "LegacySettingsV2/CustomServerSettings");
NEED_NO_BOX(::BeatSaber::Settings::LegacySettingsV2_DebugSettings);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::LegacySettingsV2_DebugSettings*, "BeatSaber.Settings", "LegacySettingsV2/DebugSettings");
NEED_NO_BOX(::BeatSaber::Settings::LegacySettingsV2_GraphicSettings);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::LegacySettingsV2_GraphicSettings*, "BeatSaber.Settings", "LegacySettingsV2/GraphicSettings");
NEED_NO_BOX(::BeatSaber::Settings::LegacySettingsV2_MainSettings);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::LegacySettingsV2_MainSettings*, "BeatSaber.Settings", "LegacySettingsV2/MainSettings");
NEED_NO_BOX(::BeatSaber::Settings::LegacySettingsV2_PerformancePreset);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::LegacySettingsV2_PerformancePreset*, "BeatSaber.Settings", "LegacySettingsV2/PerformancePreset");
NEED_NO_BOX(::BeatSaber::Settings::LegacySettingsV2_SmoothCameraSettings);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::LegacySettingsV2_SmoothCameraSettings*, "BeatSaber.Settings", "LegacySettingsV2/SmoothCameraSettings");
