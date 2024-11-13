#pragma once
// IWYU pragma private; include "BeatSaber/Settings/LegacySettingsV2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/Settings/zzzz__LegacySettingsV2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__int2_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LegacySettingsV2)
namespace BeatSaber::Settings {
struct Settings;
}
namespace BeatSaber::Settings {
class __LegacySettingsV2__AudioSettings;
}
namespace BeatSaber::Settings {
struct __LegacySettingsV2__BloomPrepassTextureEffectPreset;
}
namespace BeatSaber::Settings {
class __LegacySettingsV2__ControllerSettings;
}
namespace BeatSaber::Settings {
class __LegacySettingsV2__CustomServerSettings;
}
namespace BeatSaber::Settings {
class __LegacySettingsV2__DebugSettings;
}
namespace BeatSaber::Settings {
struct __LegacySettingsV2__FoveatedRenderingLevel;
}
namespace BeatSaber::Settings {
class __LegacySettingsV2__GraphicSettings;
}
namespace BeatSaber::Settings {
struct __LegacySettingsV2__MainEffectPreset;
}
namespace BeatSaber::Settings {
class __LegacySettingsV2__MainSettings;
}
namespace BeatSaber::Settings {
struct __LegacySettingsV2__MirrorQualityPreset;
}
namespace BeatSaber::Settings {
struct __LegacySettingsV2__ObstaclesQuality;
}
namespace BeatSaber::Settings {
class __LegacySettingsV2__PerformancePreset;
}
namespace BeatSaber::Settings {
struct __LegacySettingsV2__ProcessorPerformanceLevel;
}
namespace BeatSaber::Settings {
class __LegacySettingsV2__SmoothCameraSettings;
}
namespace BeatSaber::Settings {
struct __LegacySettingsV2__WindowMode;
}
// Forward declare root types
namespace BeatSaber::Settings {
struct __LegacySettingsV2__BloomPrepassTextureEffectPreset;
}
namespace BeatSaber::Settings {
struct __LegacySettingsV2__FoveatedRenderingLevel;
}
namespace BeatSaber::Settings {
struct __LegacySettingsV2__MainEffectPreset;
}
namespace BeatSaber::Settings {
struct __LegacySettingsV2__MirrorQualityPreset;
}
namespace BeatSaber::Settings {
struct __LegacySettingsV2__ObstaclesQuality;
}
namespace BeatSaber::Settings {
struct __LegacySettingsV2__ProcessorPerformanceLevel;
}
namespace BeatSaber::Settings {
struct __LegacySettingsV2__WindowMode;
}
namespace BeatSaber::Settings {
class LegacySettingsV2;
}
namespace BeatSaber::Settings {
class __LegacySettingsV2__AudioSettings;
}
namespace BeatSaber::Settings {
class __LegacySettingsV2__ControllerSettings;
}
namespace BeatSaber::Settings {
class __LegacySettingsV2__CustomServerSettings;
}
namespace BeatSaber::Settings {
class __LegacySettingsV2__DebugSettings;
}
namespace BeatSaber::Settings {
class __LegacySettingsV2__GraphicSettings;
}
namespace BeatSaber::Settings {
class __LegacySettingsV2__MainSettings;
}
namespace BeatSaber::Settings {
class __LegacySettingsV2__PerformancePreset;
}
namespace BeatSaber::Settings {
class __LegacySettingsV2__SmoothCameraSettings;
}
// Write type traits
MARK_VAL_T(::BeatSaber::Settings::__LegacySettingsV2__BloomPrepassTextureEffectPreset);
MARK_VAL_T(::BeatSaber::Settings::__LegacySettingsV2__FoveatedRenderingLevel);
MARK_VAL_T(::BeatSaber::Settings::__LegacySettingsV2__MainEffectPreset);
MARK_VAL_T(::BeatSaber::Settings::__LegacySettingsV2__MirrorQualityPreset);
MARK_VAL_T(::BeatSaber::Settings::__LegacySettingsV2__ObstaclesQuality);
MARK_VAL_T(::BeatSaber::Settings::__LegacySettingsV2__ProcessorPerformanceLevel);
MARK_VAL_T(::BeatSaber::Settings::__LegacySettingsV2__WindowMode);
MARK_REF_PTR_T(::BeatSaber::Settings::LegacySettingsV2);
MARK_REF_PTR_T(::BeatSaber::Settings::__LegacySettingsV2__AudioSettings);
MARK_REF_PTR_T(::BeatSaber::Settings::__LegacySettingsV2__ControllerSettings);
MARK_REF_PTR_T(::BeatSaber::Settings::__LegacySettingsV2__CustomServerSettings);
MARK_REF_PTR_T(::BeatSaber::Settings::__LegacySettingsV2__DebugSettings);
MARK_REF_PTR_T(::BeatSaber::Settings::__LegacySettingsV2__GraphicSettings);
MARK_REF_PTR_T(::BeatSaber::Settings::__LegacySettingsV2__MainSettings);
MARK_REF_PTR_T(::BeatSaber::Settings::__LegacySettingsV2__PerformancePreset);
MARK_REF_PTR_T(::BeatSaber::Settings::__LegacySettingsV2__SmoothCameraSettings);
// Type: ::MainSettings
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 86, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::Settings {
// Is value type: false
// CS Name: ::LegacySettingsV2::MainSettings*
class CORDL_TYPE __LegacySettingsV2__MainSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field audioSettings, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_audioSettings, put = __cordl_internal_set_audioSettings)) ::BeatSaber::Settings::__LegacySettingsV2__AudioSettings* audioSettings;

  /// @brief Field controllerSettings, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_controllerSettings, put = __cordl_internal_set_controllerSettings)) ::BeatSaber::Settings::__LegacySettingsV2__ControllerSettings* controllerSettings;

  /// @brief Field createScreenshotDuringTheGame, offset 0x55, size 0x1
  __declspec(property(get = __cordl_internal_get_createScreenshotDuringTheGame, put = __cordl_internal_set_createScreenshotDuringTheGame)) bool createScreenshotDuringTheGame;

  /// @brief Field customServerSettings, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_customServerSettings,
                      put = __cordl_internal_set_customServerSettings)) ::BeatSaber::Settings::__LegacySettingsV2__CustomServerSettings* customServerSettings;

  /// @brief Field debugSettings, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_debugSettings, put = __cordl_internal_set_debugSettings)) ::BeatSaber::Settings::__LegacySettingsV2__DebugSettings* debugSettings;

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
                      put = __cordl_internal_set_smoothCameraSettings)) ::BeatSaber::Settings::__LegacySettingsV2__SmoothCameraSettings* smoothCameraSettings;

  static inline ::BeatSaber::Settings::__LegacySettingsV2__MainSettings* New_ctor();

  constexpr ::BeatSaber::Settings::__LegacySettingsV2__AudioSettings*& __cordl_internal_get_audioSettings();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::Settings::__LegacySettingsV2__AudioSettings*> const& __cordl_internal_get_audioSettings() const;

  constexpr ::BeatSaber::Settings::__LegacySettingsV2__ControllerSettings*& __cordl_internal_get_controllerSettings();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::Settings::__LegacySettingsV2__ControllerSettings*> const& __cordl_internal_get_controllerSettings() const;

  constexpr bool const& __cordl_internal_get_createScreenshotDuringTheGame() const;

  constexpr bool& __cordl_internal_get_createScreenshotDuringTheGame();

  constexpr ::BeatSaber::Settings::__LegacySettingsV2__CustomServerSettings*& __cordl_internal_get_customServerSettings();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::Settings::__LegacySettingsV2__CustomServerSettings*> const& __cordl_internal_get_customServerSettings() const;

  constexpr ::BeatSaber::Settings::__LegacySettingsV2__DebugSettings*& __cordl_internal_get_debugSettings();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::Settings::__LegacySettingsV2__DebugSettings*> const& __cordl_internal_get_debugSettings() const;

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

  constexpr ::BeatSaber::Settings::__LegacySettingsV2__SmoothCameraSettings*& __cordl_internal_get_smoothCameraSettings();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::Settings::__LegacySettingsV2__SmoothCameraSettings*> const& __cordl_internal_get_smoothCameraSettings() const;

  constexpr void __cordl_internal_set_audioSettings(::BeatSaber::Settings::__LegacySettingsV2__AudioSettings* value);

  constexpr void __cordl_internal_set_controllerSettings(::BeatSaber::Settings::__LegacySettingsV2__ControllerSettings* value);

  constexpr void __cordl_internal_set_createScreenshotDuringTheGame(bool value);

  constexpr void __cordl_internal_set_customServerSettings(::BeatSaber::Settings::__LegacySettingsV2__CustomServerSettings* value);

  constexpr void __cordl_internal_set_debugSettings(::BeatSaber::Settings::__LegacySettingsV2__DebugSettings* value);

  constexpr void __cordl_internal_set_hapticFeedback(bool value);

  constexpr void __cordl_internal_set_language(::StringW value);

  constexpr void __cordl_internal_set_pauseButtonPressDurationLevel(int32_t value);

  constexpr void __cordl_internal_set_roomCenter(::Unity::Mathematics::float3 value);

  constexpr void __cordl_internal_set_roomRotation(float_t value);

  constexpr void __cordl_internal_set_smoothCameraSettings(::BeatSaber::Settings::__LegacySettingsV2__SmoothCameraSettings* value);

  /// @brief Method .ctor, addr 0x2248e1c, size 0x174, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LegacySettingsV2__MainSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LegacySettingsV2__MainSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LegacySettingsV2__MainSettings(__LegacySettingsV2__MainSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LegacySettingsV2__MainSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LegacySettingsV2__MainSettings(__LegacySettingsV2__MainSettings const&) = delete;

  /// @brief Field audioSettings, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::Settings::__LegacySettingsV2__AudioSettings* ___audioSettings;

  /// @brief Field smoothCameraSettings, offset: 0x18, size: 0x8, def value: None
  ::BeatSaber::Settings::__LegacySettingsV2__SmoothCameraSettings* ___smoothCameraSettings;

  /// @brief Field controllerSettings, offset: 0x20, size: 0x8, def value: None
  ::BeatSaber::Settings::__LegacySettingsV2__ControllerSettings* ___controllerSettings;

  /// @brief Field customServerSettings, offset: 0x28, size: 0x8, def value: None
  ::BeatSaber::Settings::__LegacySettingsV2__CustomServerSettings* ___customServerSettings;

  /// @brief Field debugSettings, offset: 0x30, size: 0x8, def value: None
  ::BeatSaber::Settings::__LegacySettingsV2__DebugSettings* ___debugSettings;

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17937 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::__LegacySettingsV2__MainSettings, 0x58>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__MainSettings, ___audioSettings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__MainSettings, ___smoothCameraSettings) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__MainSettings, ___controllerSettings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__MainSettings, ___customServerSettings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__MainSettings, ___debugSettings) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__MainSettings, ___language) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__MainSettings, ___pauseButtonPressDurationLevel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__MainSettings, ___roomCenter) == 0x44, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__MainSettings, ___roomRotation) == 0x50, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__MainSettings, ___hapticFeedback) == 0x54, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__MainSettings, ___createScreenshotDuringTheGame) == 0x55, "Offset mismatch!");

} // namespace BeatSaber::Settings
// Type: ::AudioSettings
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::Settings {
// Is value type: false
// CS Name: ::LegacySettingsV2::AudioSettings*
class CORDL_TYPE __LegacySettingsV2__AudioSettings : public ::System::Object {
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

  static inline ::BeatSaber::Settings::__LegacySettingsV2__AudioSettings* New_ctor();

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

  /// @brief Method .ctor, addr 0x2249024, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LegacySettingsV2__AudioSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LegacySettingsV2__AudioSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LegacySettingsV2__AudioSettings(__LegacySettingsV2__AudioSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LegacySettingsV2__AudioSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LegacySettingsV2__AudioSettings(__LegacySettingsV2__AudioSettings const&) = delete;

  /// @brief Field volume, offset: 0x10, size: 0x4, def value: None
  float_t ___volume;

  /// @brief Field ambientVolumeScale, offset: 0x14, size: 0x4, def value: None
  float_t ___ambientVolumeScale;

  /// @brief Field overrideAudioLatency, offset: 0x18, size: 0x1, def value: None
  bool ___overrideAudioLatency;

  /// @brief Field audioLatency, offset: 0x1c, size: 0x4, def value: None
  float_t ___audioLatency;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17938 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::__LegacySettingsV2__AudioSettings, 0x20>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__AudioSettings, ___volume) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__AudioSettings, ___ambientVolumeScale) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__AudioSettings, ___overrideAudioLatency) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__AudioSettings, ___audioLatency) == 0x1c, "Offset mismatch!");

} // namespace BeatSaber::Settings
// Type: ::SmoothCameraSettings
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::Settings {
// Is value type: false
// CS Name: ::LegacySettingsV2::SmoothCameraSettings*
class CORDL_TYPE __LegacySettingsV2__SmoothCameraSettings : public ::System::Object {
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

  static inline ::BeatSaber::Settings::__LegacySettingsV2__SmoothCameraSettings* New_ctor();

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

  /// @brief Method .ctor, addr 0x2249038, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LegacySettingsV2__SmoothCameraSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LegacySettingsV2__SmoothCameraSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LegacySettingsV2__SmoothCameraSettings(__LegacySettingsV2__SmoothCameraSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LegacySettingsV2__SmoothCameraSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LegacySettingsV2__SmoothCameraSettings(__LegacySettingsV2__SmoothCameraSettings const&) = delete;

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17939 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::__LegacySettingsV2__SmoothCameraSettings, 0x40>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__SmoothCameraSettings, ___enabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__SmoothCameraSettings, ___fov) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__SmoothCameraSettings, ___rotationSmooth) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__SmoothCameraSettings, ___positionSmooth) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__SmoothCameraSettings, ___thirdPersonEnabled) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__SmoothCameraSettings, ___thirdPersonPosition) == 0x24, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__SmoothCameraSettings, ___thirdPersonEulerAngles) == 0x30, "Offset mismatch!");

} // namespace BeatSaber::Settings
// Type: ::ControllerSettings
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::Settings {
// Is value type: false
// CS Name: ::LegacySettingsV2::ControllerSettings*
class CORDL_TYPE __LegacySettingsV2__ControllerSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field positionOffset, offset 0x10, size 0xc
  __declspec(property(get = __cordl_internal_get_positionOffset, put = __cordl_internal_set_positionOffset)) ::Unity::Mathematics::float3 positionOffset;

  /// @brief Field rotationOffset, offset 0x1c, size 0xc
  __declspec(property(get = __cordl_internal_get_rotationOffset, put = __cordl_internal_set_rotationOffset)) ::Unity::Mathematics::float3 rotationOffset;

  static inline ::BeatSaber::Settings::__LegacySettingsV2__ControllerSettings* New_ctor();

  constexpr ::Unity::Mathematics::float3 const& __cordl_internal_get_positionOffset() const;

  constexpr ::Unity::Mathematics::float3& __cordl_internal_get_positionOffset();

  constexpr ::Unity::Mathematics::float3 const& __cordl_internal_get_rotationOffset() const;

  constexpr ::Unity::Mathematics::float3& __cordl_internal_get_rotationOffset();

  constexpr void __cordl_internal_set_positionOffset(::Unity::Mathematics::float3 value);

  constexpr void __cordl_internal_set_rotationOffset(::Unity::Mathematics::float3 value);

  /// @brief Method .ctor, addr 0x22490c0, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LegacySettingsV2__ControllerSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LegacySettingsV2__ControllerSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LegacySettingsV2__ControllerSettings(__LegacySettingsV2__ControllerSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LegacySettingsV2__ControllerSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LegacySettingsV2__ControllerSettings(__LegacySettingsV2__ControllerSettings const&) = delete;

  /// @brief Field positionOffset, offset: 0x10, size: 0xc, def value: None
  ::Unity::Mathematics::float3 ___positionOffset;

  /// @brief Field rotationOffset, offset: 0x1c, size: 0xc, def value: None
  ::Unity::Mathematics::float3 ___rotationOffset;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17940 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::__LegacySettingsV2__ControllerSettings, 0x28>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__ControllerSettings, ___positionOffset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__ControllerSettings, ___rotationOffset) == 0x1c, "Offset mismatch!");

} // namespace BeatSaber::Settings
// Type: ::CustomServerSettings
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::Settings {
// Is value type: false
// CS Name: ::LegacySettingsV2::CustomServerSettings*
class CORDL_TYPE __LegacySettingsV2__CustomServerSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field customServerHostName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_customServerHostName, put = __cordl_internal_set_customServerHostName)) ::StringW customServerHostName;

  /// @brief Field forceGameLiftServerEnvironment, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_forceGameLiftServerEnvironment, put = __cordl_internal_set_forceGameLiftServerEnvironment)) bool forceGameLiftServerEnvironment;

  /// @brief Field useCustomServerEnvironment, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_useCustomServerEnvironment, put = __cordl_internal_set_useCustomServerEnvironment)) bool useCustomServerEnvironment;

  static inline ::BeatSaber::Settings::__LegacySettingsV2__CustomServerSettings* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_customServerHostName() const;

  constexpr ::StringW& __cordl_internal_get_customServerHostName();

  constexpr bool const& __cordl_internal_get_forceGameLiftServerEnvironment() const;

  constexpr bool& __cordl_internal_get_forceGameLiftServerEnvironment();

  constexpr bool const& __cordl_internal_get_useCustomServerEnvironment() const;

  constexpr bool& __cordl_internal_get_useCustomServerEnvironment();

  constexpr void __cordl_internal_set_customServerHostName(::StringW value);

  constexpr void __cordl_internal_set_forceGameLiftServerEnvironment(bool value);

  constexpr void __cordl_internal_set_useCustomServerEnvironment(bool value);

  /// @brief Method .ctor, addr 0x2249134, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LegacySettingsV2__CustomServerSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LegacySettingsV2__CustomServerSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LegacySettingsV2__CustomServerSettings(__LegacySettingsV2__CustomServerSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LegacySettingsV2__CustomServerSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LegacySettingsV2__CustomServerSettings(__LegacySettingsV2__CustomServerSettings const&) = delete;

  /// @brief Field useCustomServerEnvironment, offset: 0x10, size: 0x1, def value: None
  bool ___useCustomServerEnvironment;

  /// @brief Field forceGameLiftServerEnvironment, offset: 0x11, size: 0x1, def value: None
  bool ___forceGameLiftServerEnvironment;

  /// @brief Field customServerHostName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___customServerHostName;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17941 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::__LegacySettingsV2__CustomServerSettings, 0x20>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__CustomServerSettings, ___useCustomServerEnvironment) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__CustomServerSettings, ___forceGameLiftServerEnvironment) == 0x11, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__CustomServerSettings, ___customServerHostName) == 0x18, "Offset mismatch!");

} // namespace BeatSaber::Settings
// Type: ::DebugSettings
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 19, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::Settings {
// Is value type: false
// CS Name: ::LegacySettingsV2::DebugSettings*
class CORDL_TYPE __LegacySettingsV2__DebugSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field enableFpsCounter, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_enableFpsCounter, put = __cordl_internal_set_enableFpsCounter)) bool enableFpsCounter;

  /// @brief Field enableFpsRecorder, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_enableFpsRecorder, put = __cordl_internal_set_enableFpsRecorder)) bool enableFpsRecorder;

  /// @brief Field enableMemoryTracker, offset 0x12, size 0x1
  __declspec(property(get = __cordl_internal_get_enableMemoryTracker, put = __cordl_internal_set_enableMemoryTracker)) bool enableMemoryTracker;

  static inline ::BeatSaber::Settings::__LegacySettingsV2__DebugSettings* New_ctor();

  constexpr bool const& __cordl_internal_get_enableFpsCounter() const;

  constexpr bool& __cordl_internal_get_enableFpsCounter();

  constexpr bool const& __cordl_internal_get_enableFpsRecorder() const;

  constexpr bool& __cordl_internal_get_enableFpsRecorder();

  constexpr bool const& __cordl_internal_get_enableMemoryTracker() const;

  constexpr bool& __cordl_internal_get_enableMemoryTracker();

  constexpr void __cordl_internal_set_enableFpsCounter(bool value);

  constexpr void __cordl_internal_set_enableFpsRecorder(bool value);

  constexpr void __cordl_internal_set_enableMemoryTracker(bool value);

  /// @brief Method .ctor, addr 0x224918c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LegacySettingsV2__DebugSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LegacySettingsV2__DebugSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LegacySettingsV2__DebugSettings(__LegacySettingsV2__DebugSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LegacySettingsV2__DebugSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LegacySettingsV2__DebugSettings(__LegacySettingsV2__DebugSettings const&) = delete;

  /// @brief Field enableFpsCounter, offset: 0x10, size: 0x1, def value: None
  bool ___enableFpsCounter;

  /// @brief Field enableFpsRecorder, offset: 0x11, size: 0x1, def value: None
  bool ___enableFpsRecorder;

  /// @brief Field enableMemoryTracker, offset: 0x12, size: 0x1, def value: None
  bool ___enableMemoryTracker;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17942 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::__LegacySettingsV2__DebugSettings, 0x18>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__DebugSettings, ___enableFpsCounter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__DebugSettings, ___enableFpsRecorder) == 0x11, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__DebugSettings, ___enableMemoryTracker) == 0x12, "Offset mismatch!");

} // namespace BeatSaber::Settings
// Type: ::WindowMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace BeatSaber::Settings {
// Is value type: true
// CS Name: ::LegacySettingsV2::WindowMode
struct CORDL_TYPE __LegacySettingsV2__WindowMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____LegacySettingsV2__WindowMode_Unwrapped
  enum struct ____LegacySettingsV2__WindowMode_Unwrapped : int32_t {
    __E_Windowed = static_cast<int32_t>(0x0),
    __E_Fullscreen = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____LegacySettingsV2__WindowMode_Unwrapped() const noexcept {
    return static_cast<____LegacySettingsV2__WindowMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LegacySettingsV2__WindowMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __LegacySettingsV2__WindowMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Fullscreen value: static_cast<int32_t>(0x1)
  static ::BeatSaber::Settings::__LegacySettingsV2__WindowMode const Fullscreen;

  /// @brief Field Windowed value: static_cast<int32_t>(0x0)
  static ::BeatSaber::Settings::__LegacySettingsV2__WindowMode const Windowed;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17944 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::__LegacySettingsV2__WindowMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__WindowMode, value__) == 0x0, "Offset mismatch!");

} // namespace BeatSaber::Settings
// Type: ::GraphicSettings
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::Settings {
// Is value type: false
// CS Name: ::LegacySettingsV2::GraphicSettings*
class CORDL_TYPE __LegacySettingsV2__GraphicSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field customPreset, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_customPreset, put = __cordl_internal_set_customPreset)) ::BeatSaber::Settings::__LegacySettingsV2__PerformancePreset* customPreset;

  /// @brief Field performancePresetKey, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_performancePresetKey, put = __cordl_internal_set_performancePresetKey)) ::StringW performancePresetKey;

  /// @brief Field windowMode, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_windowMode, put = __cordl_internal_set_windowMode)) ::BeatSaber::Settings::__LegacySettingsV2__WindowMode windowMode;

  /// @brief Field windowResolution, offset 0x24, size 0x8
  __declspec(property(get = __cordl_internal_get_windowResolution, put = __cordl_internal_set_windowResolution)) ::Unity::Mathematics::int2 windowResolution;

  static inline ::BeatSaber::Settings::__LegacySettingsV2__GraphicSettings* New_ctor();

  constexpr ::BeatSaber::Settings::__LegacySettingsV2__PerformancePreset*& __cordl_internal_get_customPreset();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::Settings::__LegacySettingsV2__PerformancePreset*> const& __cordl_internal_get_customPreset() const;

  constexpr ::StringW const& __cordl_internal_get_performancePresetKey() const;

  constexpr ::StringW& __cordl_internal_get_performancePresetKey();

  constexpr ::BeatSaber::Settings::__LegacySettingsV2__WindowMode const& __cordl_internal_get_windowMode() const;

  constexpr ::BeatSaber::Settings::__LegacySettingsV2__WindowMode& __cordl_internal_get_windowMode();

  constexpr ::Unity::Mathematics::int2 const& __cordl_internal_get_windowResolution() const;

  constexpr ::Unity::Mathematics::int2& __cordl_internal_get_windowResolution();

  constexpr void __cordl_internal_set_customPreset(::BeatSaber::Settings::__LegacySettingsV2__PerformancePreset* value);

  constexpr void __cordl_internal_set_performancePresetKey(::StringW value);

  constexpr void __cordl_internal_set_windowMode(::BeatSaber::Settings::__LegacySettingsV2__WindowMode value);

  constexpr void __cordl_internal_set_windowResolution(::Unity::Mathematics::int2 value);

  /// @brief Method .ctor, addr 0x2248f90, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LegacySettingsV2__GraphicSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LegacySettingsV2__GraphicSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LegacySettingsV2__GraphicSettings(__LegacySettingsV2__GraphicSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LegacySettingsV2__GraphicSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LegacySettingsV2__GraphicSettings(__LegacySettingsV2__GraphicSettings const&) = delete;

  /// @brief Field performancePresetKey, offset: 0x10, size: 0x8, def value: None
  ::StringW ___performancePresetKey;

  /// @brief Field customPreset, offset: 0x18, size: 0x8, def value: None
  ::BeatSaber::Settings::__LegacySettingsV2__PerformancePreset* ___customPreset;

  /// @brief Field windowMode, offset: 0x20, size: 0x4, def value: None
  ::BeatSaber::Settings::__LegacySettingsV2__WindowMode ___windowMode;

  /// @brief Field windowResolution, offset: 0x24, size: 0x8, def value: None
  ::Unity::Mathematics::int2 ___windowResolution;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17943 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::__LegacySettingsV2__GraphicSettings, 0x30>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__GraphicSettings, ___performancePresetKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__GraphicSettings, ___customPreset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__GraphicSettings, ___windowMode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__GraphicSettings, ___windowResolution) == 0x24, "Offset mismatch!");

} // namespace BeatSaber::Settings
// Type: ::BloomPrepassTextureEffectPreset
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace BeatSaber::Settings {
// Is value type: true
// CS Name: ::LegacySettingsV2::BloomPrepassTextureEffectPreset
struct CORDL_TYPE __LegacySettingsV2__BloomPrepassTextureEffectPreset {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____LegacySettingsV2__BloomPrepassTextureEffectPreset_Unwrapped
  enum struct ____LegacySettingsV2__BloomPrepassTextureEffectPreset_Unwrapped : int32_t {
    __E_HD = static_cast<int32_t>(0x0),
    __E_HDWithoutToneMapping = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____LegacySettingsV2__BloomPrepassTextureEffectPreset_Unwrapped() const noexcept {
    return static_cast<____LegacySettingsV2__BloomPrepassTextureEffectPreset_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LegacySettingsV2__BloomPrepassTextureEffectPreset();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __LegacySettingsV2__BloomPrepassTextureEffectPreset(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field HD value: static_cast<int32_t>(0x0)
  static ::BeatSaber::Settings::__LegacySettingsV2__BloomPrepassTextureEffectPreset const HD;

  /// @brief Field HDWithoutToneMapping value: static_cast<int32_t>(0x1)
  static ::BeatSaber::Settings::__LegacySettingsV2__BloomPrepassTextureEffectPreset const HDWithoutToneMapping;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17945 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::__LegacySettingsV2__BloomPrepassTextureEffectPreset, 0x4>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__BloomPrepassTextureEffectPreset, value__) == 0x0, "Offset mismatch!");

} // namespace BeatSaber::Settings
// Type: ::FoveatedRenderingLevel
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace BeatSaber::Settings {
// Is value type: true
// CS Name: ::LegacySettingsV2::FoveatedRenderingLevel
struct CORDL_TYPE __LegacySettingsV2__FoveatedRenderingLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____LegacySettingsV2__FoveatedRenderingLevel_Unwrapped
  enum struct ____LegacySettingsV2__FoveatedRenderingLevel_Unwrapped : int32_t {
    __E_Off = static_cast<int32_t>(0x0),
    __E_Low = static_cast<int32_t>(0x1),
    __E_Medium = static_cast<int32_t>(0x2),
    __E_High = static_cast<int32_t>(0x3),
    __E_HighTop = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____LegacySettingsV2__FoveatedRenderingLevel_Unwrapped() const noexcept {
    return static_cast<____LegacySettingsV2__FoveatedRenderingLevel_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LegacySettingsV2__FoveatedRenderingLevel();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __LegacySettingsV2__FoveatedRenderingLevel(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field High value: static_cast<int32_t>(0x3)
  static ::BeatSaber::Settings::__LegacySettingsV2__FoveatedRenderingLevel const High;

  /// @brief Field HighTop value: static_cast<int32_t>(0x4)
  static ::BeatSaber::Settings::__LegacySettingsV2__FoveatedRenderingLevel const HighTop;

  /// @brief Field Low value: static_cast<int32_t>(0x1)
  static ::BeatSaber::Settings::__LegacySettingsV2__FoveatedRenderingLevel const Low;

  /// @brief Field Medium value: static_cast<int32_t>(0x2)
  static ::BeatSaber::Settings::__LegacySettingsV2__FoveatedRenderingLevel const Medium;

  /// @brief Field Off value: static_cast<int32_t>(0x0)
  static ::BeatSaber::Settings::__LegacySettingsV2__FoveatedRenderingLevel const Off;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17946 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::__LegacySettingsV2__FoveatedRenderingLevel, 0x4>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__FoveatedRenderingLevel, value__) == 0x0, "Offset mismatch!");

} // namespace BeatSaber::Settings
// Type: ::MainEffectPreset
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace BeatSaber::Settings {
// Is value type: true
// CS Name: ::LegacySettingsV2::MainEffectPreset
struct CORDL_TYPE __LegacySettingsV2__MainEffectPreset {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____LegacySettingsV2__MainEffectPreset_Unwrapped
  enum struct ____LegacySettingsV2__MainEffectPreset_Unwrapped : int32_t {
    __E_Off = static_cast<int32_t>(0x0),
    __E_Pyramid = static_cast<int32_t>(0x1),
    __E_PyramidForBaking = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____LegacySettingsV2__MainEffectPreset_Unwrapped() const noexcept {
    return static_cast<____LegacySettingsV2__MainEffectPreset_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LegacySettingsV2__MainEffectPreset();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __LegacySettingsV2__MainEffectPreset(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Off value: static_cast<int32_t>(0x0)
  static ::BeatSaber::Settings::__LegacySettingsV2__MainEffectPreset const Off;

  /// @brief Field Pyramid value: static_cast<int32_t>(0x1)
  static ::BeatSaber::Settings::__LegacySettingsV2__MainEffectPreset const Pyramid;

  /// @brief Field PyramidForBaking value: static_cast<int32_t>(0x2)
  static ::BeatSaber::Settings::__LegacySettingsV2__MainEffectPreset const PyramidForBaking;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17947 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::__LegacySettingsV2__MainEffectPreset, 0x4>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__MainEffectPreset, value__) == 0x0, "Offset mismatch!");

} // namespace BeatSaber::Settings
// Type: ::MirrorQualityPreset
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace BeatSaber::Settings {
// Is value type: true
// CS Name: ::LegacySettingsV2::MirrorQualityPreset
struct CORDL_TYPE __LegacySettingsV2__MirrorQualityPreset {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____LegacySettingsV2__MirrorQualityPreset_Unwrapped
  enum struct ____LegacySettingsV2__MirrorQualityPreset_Unwrapped : int32_t {
    __E_Off = static_cast<int32_t>(0x0),
    __E_Fake = static_cast<int32_t>(0x1),
    __E_RenderedLQ = static_cast<int32_t>(0x2),
    __E_RenderedHQ = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____LegacySettingsV2__MirrorQualityPreset_Unwrapped() const noexcept {
    return static_cast<____LegacySettingsV2__MirrorQualityPreset_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LegacySettingsV2__MirrorQualityPreset();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __LegacySettingsV2__MirrorQualityPreset(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Fake value: static_cast<int32_t>(0x1)
  static ::BeatSaber::Settings::__LegacySettingsV2__MirrorQualityPreset const Fake;

  /// @brief Field Off value: static_cast<int32_t>(0x0)
  static ::BeatSaber::Settings::__LegacySettingsV2__MirrorQualityPreset const Off;

  /// @brief Field RenderedHQ value: static_cast<int32_t>(0x3)
  static ::BeatSaber::Settings::__LegacySettingsV2__MirrorQualityPreset const RenderedHQ;

  /// @brief Field RenderedLQ value: static_cast<int32_t>(0x2)
  static ::BeatSaber::Settings::__LegacySettingsV2__MirrorQualityPreset const RenderedLQ;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17948 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::__LegacySettingsV2__MirrorQualityPreset, 0x4>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__MirrorQualityPreset, value__) == 0x0, "Offset mismatch!");

} // namespace BeatSaber::Settings
// Type: ::ObstaclesQuality
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace BeatSaber::Settings {
// Is value type: true
// CS Name: ::LegacySettingsV2::ObstaclesQuality
struct CORDL_TYPE __LegacySettingsV2__ObstaclesQuality {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____LegacySettingsV2__ObstaclesQuality_Unwrapped
  enum struct ____LegacySettingsV2__ObstaclesQuality_Unwrapped : int32_t {
    __E_DefaultObstacleQualityBaseOnDisplacement = static_cast<int32_t>(0x0),
    __E_TexturedObstacle = static_cast<int32_t>(0x1),
    __E_ObstacleLW = static_cast<int32_t>(0x2),
    __E_ObstacleHW = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____LegacySettingsV2__ObstaclesQuality_Unwrapped() const noexcept {
    return static_cast<____LegacySettingsV2__ObstaclesQuality_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LegacySettingsV2__ObstaclesQuality();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __LegacySettingsV2__ObstaclesQuality(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field DefaultObstacleQualityBaseOnDisplacement value: static_cast<int32_t>(0x0)
  static ::BeatSaber::Settings::__LegacySettingsV2__ObstaclesQuality const DefaultObstacleQualityBaseOnDisplacement;

  /// @brief Field ObstacleHW value: static_cast<int32_t>(0x3)
  static ::BeatSaber::Settings::__LegacySettingsV2__ObstaclesQuality const ObstacleHW;

  /// @brief Field ObstacleLW value: static_cast<int32_t>(0x2)
  static ::BeatSaber::Settings::__LegacySettingsV2__ObstaclesQuality const ObstacleLW;

  /// @brief Field TexturedObstacle value: static_cast<int32_t>(0x1)
  static ::BeatSaber::Settings::__LegacySettingsV2__ObstaclesQuality const TexturedObstacle;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17949 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::__LegacySettingsV2__ObstaclesQuality, 0x4>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__ObstaclesQuality, value__) == 0x0, "Offset mismatch!");

} // namespace BeatSaber::Settings
// Type: ::ProcessorPerformanceLevel
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace BeatSaber::Settings {
// Is value type: true
// CS Name: ::LegacySettingsV2::ProcessorPerformanceLevel
struct CORDL_TYPE __LegacySettingsV2__ProcessorPerformanceLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____LegacySettingsV2__ProcessorPerformanceLevel_Unwrapped
  enum struct ____LegacySettingsV2__ProcessorPerformanceLevel_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0xffffffff),
    __E_PowerSavings = static_cast<int32_t>(0x0),
    __E_SustainedLow = static_cast<int32_t>(0x1),
    __E_SustainedHigh = static_cast<int32_t>(0x2),
    __E_Boost = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____LegacySettingsV2__ProcessorPerformanceLevel_Unwrapped() const noexcept {
    return static_cast<____LegacySettingsV2__ProcessorPerformanceLevel_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LegacySettingsV2__ProcessorPerformanceLevel();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __LegacySettingsV2__ProcessorPerformanceLevel(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Boost value: static_cast<int32_t>(0x3)
  static ::BeatSaber::Settings::__LegacySettingsV2__ProcessorPerformanceLevel const Boost;

  /// @brief Field PowerSavings value: static_cast<int32_t>(0x0)
  static ::BeatSaber::Settings::__LegacySettingsV2__ProcessorPerformanceLevel const PowerSavings;

  /// @brief Field SustainedHigh value: static_cast<int32_t>(0x2)
  static ::BeatSaber::Settings::__LegacySettingsV2__ProcessorPerformanceLevel const SustainedHigh;

  /// @brief Field SustainedLow value: static_cast<int32_t>(0x1)
  static ::BeatSaber::Settings::__LegacySettingsV2__ProcessorPerformanceLevel const SustainedLow;

  /// @brief Field Unknown value: static_cast<int32_t>(0xffffffff)
  static ::BeatSaber::Settings::__LegacySettingsV2__ProcessorPerformanceLevel const Unknown;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17950 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::__LegacySettingsV2__ProcessorPerformanceLevel, 0x4>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__ProcessorPerformanceLevel, value__) == 0x0, "Offset mismatch!");

} // namespace BeatSaber::Settings
// Type: ::PerformancePreset
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::Settings {
// Is value type: false
// CS Name: ::LegacySettingsV2::PerformancePreset*
class CORDL_TYPE __LegacySettingsV2__PerformancePreset : public ::System::Object {
public:
  // Declarations
  /// @brief Field antiAliasingLevel, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_antiAliasingLevel, put = __cordl_internal_set_antiAliasingLevel)) int32_t antiAliasingLevel;

  /// @brief Field bloomPrePassTextureEffect, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_bloomPrePassTextureEffect,
                      put = __cordl_internal_set_bloomPrePassTextureEffect)) ::BeatSaber::Settings::__LegacySettingsV2__BloomPrepassTextureEffectPreset bloomPrePassTextureEffect;

  /// @brief Field burnMarkTrails, offset 0x36, size 0x1
  __declspec(property(get = __cordl_internal_get_burnMarkTrails, put = __cordl_internal_set_burnMarkTrails)) bool burnMarkTrails;

  /// @brief Field depthTexture, offset 0x35, size 0x1
  __declspec(property(get = __cordl_internal_get_depthTexture, put = __cordl_internal_set_depthTexture)) bool depthTexture;

  /// @brief Field mainEffectGraphics, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_mainEffectGraphics, put = __cordl_internal_set_mainEffectGraphics)) ::BeatSaber::Settings::__LegacySettingsV2__MainEffectPreset mainEffectGraphics;

  /// @brief Field maxNumberOfCutSoundEffects, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_maxNumberOfCutSoundEffects, put = __cordl_internal_set_maxNumberOfCutSoundEffects)) int32_t maxNumberOfCutSoundEffects;

  /// @brief Field maxQueuedFrames, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_maxQueuedFrames, put = __cordl_internal_set_maxQueuedFrames)) int32_t maxQueuedFrames;

  /// @brief Field maxShockwaveParticles, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_maxShockwaveParticles, put = __cordl_internal_set_maxShockwaveParticles)) int32_t maxShockwaveParticles;

  /// @brief Field menuVRResolutionScaleMultiplier, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_menuVRResolutionScaleMultiplier, put = __cordl_internal_set_menuVRResolutionScaleMultiplier)) float_t menuVRResolutionScaleMultiplier;

  /// @brief Field mirrorGraphics, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_mirrorGraphics, put = __cordl_internal_set_mirrorGraphics)) ::BeatSaber::Settings::__LegacySettingsV2__MirrorQualityPreset mirrorGraphics;

  /// @brief Field obstaclesQuality, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_obstaclesQuality, put = __cordl_internal_set_obstaclesQuality)) ::BeatSaber::Settings::__LegacySettingsV2__ObstaclesQuality obstaclesQuality;

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

  static inline ::BeatSaber::Settings::__LegacySettingsV2__PerformancePreset* New_ctor();

  constexpr int32_t const& __cordl_internal_get_antiAliasingLevel() const;

  constexpr int32_t& __cordl_internal_get_antiAliasingLevel();

  constexpr ::BeatSaber::Settings::__LegacySettingsV2__BloomPrepassTextureEffectPreset const& __cordl_internal_get_bloomPrePassTextureEffect() const;

  constexpr ::BeatSaber::Settings::__LegacySettingsV2__BloomPrepassTextureEffectPreset& __cordl_internal_get_bloomPrePassTextureEffect();

  constexpr bool const& __cordl_internal_get_burnMarkTrails() const;

  constexpr bool& __cordl_internal_get_burnMarkTrails();

  constexpr bool const& __cordl_internal_get_depthTexture() const;

  constexpr bool& __cordl_internal_get_depthTexture();

  constexpr ::BeatSaber::Settings::__LegacySettingsV2__MainEffectPreset const& __cordl_internal_get_mainEffectGraphics() const;

  constexpr ::BeatSaber::Settings::__LegacySettingsV2__MainEffectPreset& __cordl_internal_get_mainEffectGraphics();

  constexpr int32_t const& __cordl_internal_get_maxNumberOfCutSoundEffects() const;

  constexpr int32_t& __cordl_internal_get_maxNumberOfCutSoundEffects();

  constexpr int32_t const& __cordl_internal_get_maxQueuedFrames() const;

  constexpr int32_t& __cordl_internal_get_maxQueuedFrames();

  constexpr int32_t const& __cordl_internal_get_maxShockwaveParticles() const;

  constexpr int32_t& __cordl_internal_get_maxShockwaveParticles();

  constexpr float_t const& __cordl_internal_get_menuVRResolutionScaleMultiplier() const;

  constexpr float_t& __cordl_internal_get_menuVRResolutionScaleMultiplier();

  constexpr ::BeatSaber::Settings::__LegacySettingsV2__MirrorQualityPreset const& __cordl_internal_get_mirrorGraphics() const;

  constexpr ::BeatSaber::Settings::__LegacySettingsV2__MirrorQualityPreset& __cordl_internal_get_mirrorGraphics();

  constexpr ::BeatSaber::Settings::__LegacySettingsV2__ObstaclesQuality const& __cordl_internal_get_obstaclesQuality() const;

  constexpr ::BeatSaber::Settings::__LegacySettingsV2__ObstaclesQuality& __cordl_internal_get_obstaclesQuality();

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

  constexpr void __cordl_internal_set_bloomPrePassTextureEffect(::BeatSaber::Settings::__LegacySettingsV2__BloomPrepassTextureEffectPreset value);

  constexpr void __cordl_internal_set_burnMarkTrails(bool value);

  constexpr void __cordl_internal_set_depthTexture(bool value);

  constexpr void __cordl_internal_set_mainEffectGraphics(::BeatSaber::Settings::__LegacySettingsV2__MainEffectPreset value);

  constexpr void __cordl_internal_set_maxNumberOfCutSoundEffects(int32_t value);

  constexpr void __cordl_internal_set_maxQueuedFrames(int32_t value);

  constexpr void __cordl_internal_set_maxShockwaveParticles(int32_t value);

  constexpr void __cordl_internal_set_menuVRResolutionScaleMultiplier(float_t value);

  constexpr void __cordl_internal_set_mirrorGraphics(::BeatSaber::Settings::__LegacySettingsV2__MirrorQualityPreset value);

  constexpr void __cordl_internal_set_obstaclesQuality(::BeatSaber::Settings::__LegacySettingsV2__ObstaclesQuality value);

  constexpr void __cordl_internal_set_presetNameLocalizationTag(::StringW value);

  constexpr void __cordl_internal_set_renderViewportScale(float_t value);

  constexpr void __cordl_internal_set_screenDisplacementEffects(bool value);

  constexpr void __cordl_internal_set_smokeGraphics(bool value);

  constexpr void __cordl_internal_set_targetFramerate(float_t value);

  constexpr void __cordl_internal_set_vSyncCount(int32_t value);

  constexpr void __cordl_internal_set_vrResolutionScale(float_t value);

  /// @brief Method .ctor, addr 0x2249194, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LegacySettingsV2__PerformancePreset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LegacySettingsV2__PerformancePreset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LegacySettingsV2__PerformancePreset(__LegacySettingsV2__PerformancePreset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LegacySettingsV2__PerformancePreset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LegacySettingsV2__PerformancePreset(__LegacySettingsV2__PerformancePreset const&) = delete;

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
  ::BeatSaber::Settings::__LegacySettingsV2__MirrorQualityPreset ___mirrorGraphics;

  /// @brief Field mainEffectGraphics, offset: 0x44, size: 0x4, def value: None
  ::BeatSaber::Settings::__LegacySettingsV2__MainEffectPreset ___mainEffectGraphics;

  /// @brief Field bloomPrePassTextureEffect, offset: 0x48, size: 0x4, def value: None
  ::BeatSaber::Settings::__LegacySettingsV2__BloomPrepassTextureEffectPreset ___bloomPrePassTextureEffect;

  /// @brief Field obstaclesQuality, offset: 0x4c, size: 0x4, def value: None
  ::BeatSaber::Settings::__LegacySettingsV2__ObstaclesQuality ___obstaclesQuality;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17951 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::__LegacySettingsV2__PerformancePreset, 0x50>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__PerformancePreset, ___presetNameLocalizationTag) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__PerformancePreset, ___renderViewportScale) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__PerformancePreset, ___vrResolutionScale) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__PerformancePreset, ___menuVRResolutionScaleMultiplier) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__PerformancePreset, ___antiAliasingLevel) == 0x24, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__PerformancePreset, ___targetFramerate) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__PerformancePreset, ___vSyncCount) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__PerformancePreset, ___maxQueuedFrames) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__PerformancePreset, ___smokeGraphics) == 0x34, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__PerformancePreset, ___depthTexture) == 0x35, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__PerformancePreset, ___burnMarkTrails) == 0x36, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__PerformancePreset, ___screenDisplacementEffects) == 0x37, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__PerformancePreset, ___maxShockwaveParticles) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__PerformancePreset, ___maxNumberOfCutSoundEffects) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__PerformancePreset, ___mirrorGraphics) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__PerformancePreset, ___mainEffectGraphics) == 0x44, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__PerformancePreset, ___bloomPrePassTextureEffect) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__LegacySettingsV2__PerformancePreset, ___obstaclesQuality) == 0x4c, "Offset mismatch!");

} // namespace BeatSaber::Settings
// Type: BeatSaber.Settings::LegacySettingsV2
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::Settings {
// Is value type: false
// CS Name: ::BeatSaber.Settings::LegacySettingsV2*
class CORDL_TYPE LegacySettingsV2 : public ::System::Object {
public:
  // Declarations
  using AudioSettings = ::BeatSaber::Settings::__LegacySettingsV2__AudioSettings;

  using BloomPrepassTextureEffectPreset = ::BeatSaber::Settings::__LegacySettingsV2__BloomPrepassTextureEffectPreset;

  using ControllerSettings = ::BeatSaber::Settings::__LegacySettingsV2__ControllerSettings;

  using CustomServerSettings = ::BeatSaber::Settings::__LegacySettingsV2__CustomServerSettings;

  using DebugSettings = ::BeatSaber::Settings::__LegacySettingsV2__DebugSettings;

  using FoveatedRenderingLevel = ::BeatSaber::Settings::__LegacySettingsV2__FoveatedRenderingLevel;

  using GraphicSettings = ::BeatSaber::Settings::__LegacySettingsV2__GraphicSettings;

  using MainEffectPreset = ::BeatSaber::Settings::__LegacySettingsV2__MainEffectPreset;

  using MainSettings = ::BeatSaber::Settings::__LegacySettingsV2__MainSettings;

  using MirrorQualityPreset = ::BeatSaber::Settings::__LegacySettingsV2__MirrorQualityPreset;

  using ObstaclesQuality = ::BeatSaber::Settings::__LegacySettingsV2__ObstaclesQuality;

  using PerformancePreset = ::BeatSaber::Settings::__LegacySettingsV2__PerformancePreset;

  using ProcessorPerformanceLevel = ::BeatSaber::Settings::__LegacySettingsV2__ProcessorPerformanceLevel;

  using SmoothCameraSettings = ::BeatSaber::Settings::__LegacySettingsV2__SmoothCameraSettings;

  using WindowMode = ::BeatSaber::Settings::__LegacySettingsV2__WindowMode;

  /// @brief Field graphicSettings, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_graphicSettings, put = __cordl_internal_set_graphicSettings)) ::BeatSaber::Settings::__LegacySettingsV2__GraphicSettings* graphicSettings;

  /// @brief Field mainSettings, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mainSettings, put = __cordl_internal_set_mainSettings)) ::BeatSaber::Settings::__LegacySettingsV2__MainSettings* mainSettings;

  /// @brief Method ApplyTo, addr 0x2248a64, size 0x32c, virtual false, abstract: false, final false
  inline void ApplyTo(ByRef<::BeatSaber::Settings::Settings> settings);

  static inline ::BeatSaber::Settings::LegacySettingsV2* New_ctor();

  constexpr ::BeatSaber::Settings::__LegacySettingsV2__GraphicSettings*& __cordl_internal_get_graphicSettings();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::Settings::__LegacySettingsV2__GraphicSettings*> const& __cordl_internal_get_graphicSettings() const;

  constexpr ::BeatSaber::Settings::__LegacySettingsV2__MainSettings*& __cordl_internal_get_mainSettings();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::Settings::__LegacySettingsV2__MainSettings*> const& __cordl_internal_get_mainSettings() const;

  constexpr void __cordl_internal_set_graphicSettings(::BeatSaber::Settings::__LegacySettingsV2__GraphicSettings* value);

  constexpr void __cordl_internal_set_mainSettings(::BeatSaber::Settings::__LegacySettingsV2__MainSettings* value);

  /// @brief Method .ctor, addr 0x2248d90, size 0x8c, virtual false, abstract: false, final false
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

  /// @brief Field mainSettings, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::Settings::__LegacySettingsV2__MainSettings* ___mainSettings;

  /// @brief Field graphicSettings, offset: 0x18, size: 0x8, def value: None
  ::BeatSaber::Settings::__LegacySettingsV2__GraphicSettings* ___graphicSettings;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17952 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::LegacySettingsV2, 0x20>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2, ___mainSettings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV2, ___graphicSettings) == 0x18, "Offset mismatch!");

} // namespace BeatSaber::Settings
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::__LegacySettingsV2__BloomPrepassTextureEffectPreset, "BeatSaber.Settings", "LegacySettingsV2/BloomPrepassTextureEffectPreset");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::__LegacySettingsV2__FoveatedRenderingLevel, "BeatSaber.Settings", "LegacySettingsV2/FoveatedRenderingLevel");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::__LegacySettingsV2__MainEffectPreset, "BeatSaber.Settings", "LegacySettingsV2/MainEffectPreset");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::__LegacySettingsV2__MirrorQualityPreset, "BeatSaber.Settings", "LegacySettingsV2/MirrorQualityPreset");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::__LegacySettingsV2__ObstaclesQuality, "BeatSaber.Settings", "LegacySettingsV2/ObstaclesQuality");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::__LegacySettingsV2__ProcessorPerformanceLevel, "BeatSaber.Settings", "LegacySettingsV2/ProcessorPerformanceLevel");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::__LegacySettingsV2__WindowMode, "BeatSaber.Settings", "LegacySettingsV2/WindowMode");
NEED_NO_BOX(::BeatSaber::Settings::LegacySettingsV2);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::LegacySettingsV2*, "BeatSaber.Settings", "LegacySettingsV2");
NEED_NO_BOX(::BeatSaber::Settings::__LegacySettingsV2__AudioSettings);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::__LegacySettingsV2__AudioSettings*, "BeatSaber.Settings", "LegacySettingsV2/AudioSettings");
NEED_NO_BOX(::BeatSaber::Settings::__LegacySettingsV2__ControllerSettings);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::__LegacySettingsV2__ControllerSettings*, "BeatSaber.Settings", "LegacySettingsV2/ControllerSettings");
NEED_NO_BOX(::BeatSaber::Settings::__LegacySettingsV2__CustomServerSettings);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::__LegacySettingsV2__CustomServerSettings*, "BeatSaber.Settings", "LegacySettingsV2/CustomServerSettings");
NEED_NO_BOX(::BeatSaber::Settings::__LegacySettingsV2__DebugSettings);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::__LegacySettingsV2__DebugSettings*, "BeatSaber.Settings", "LegacySettingsV2/DebugSettings");
NEED_NO_BOX(::BeatSaber::Settings::__LegacySettingsV2__GraphicSettings);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::__LegacySettingsV2__GraphicSettings*, "BeatSaber.Settings", "LegacySettingsV2/GraphicSettings");
NEED_NO_BOX(::BeatSaber::Settings::__LegacySettingsV2__MainSettings);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::__LegacySettingsV2__MainSettings*, "BeatSaber.Settings", "LegacySettingsV2/MainSettings");
NEED_NO_BOX(::BeatSaber::Settings::__LegacySettingsV2__PerformancePreset);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::__LegacySettingsV2__PerformancePreset*, "BeatSaber.Settings", "LegacySettingsV2/PerformancePreset");
NEED_NO_BOX(::BeatSaber::Settings::__LegacySettingsV2__SmoothCameraSettings);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::__LegacySettingsV2__SmoothCameraSettings*, "BeatSaber.Settings", "LegacySettingsV2/SmoothCameraSettings");
