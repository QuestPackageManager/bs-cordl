#pragma once
// IWYU pragma private; include "BeatSaber/Settings/LegacySettingsV1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LegacySettingsV1)
namespace BeatSaber::Settings {
struct Settings;
}
// Forward declare root types
namespace BeatSaber::Settings {
class LegacySettingsV1;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Settings::LegacySettingsV1);
// Type: BeatSaber.Settings::LegacySettingsV1
// SizeInfo { instance_size: 216, native_size: -1, calculated_instance_size: 216, calculated_native_size: 211, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::Settings {
// Is value type: false
// CS Name: ::BeatSaber.Settings::LegacySettingsV1*
class CORDL_TYPE LegacySettingsV1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field ambientVolumeScale, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_ambientVolumeScale, put = __cordl_internal_set_ambientVolumeScale)) float_t ambientVolumeScale;

  /// @brief Field antiAliasingLevel, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get_antiAliasingLevel, put = __cordl_internal_set_antiAliasingLevel)) int32_t antiAliasingLevel;

  /// @brief Field audioLatency, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_audioLatency, put = __cordl_internal_set_audioLatency)) float_t audioLatency;

  /// @brief Field bloomGraphicsSettings, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get_bloomGraphicsSettings, put = __cordl_internal_set_bloomGraphicsSettings)) int32_t bloomGraphicsSettings;

  /// @brief Field burnMarkTrailsEnabled, offset 0xa8, size 0x1
  __declspec(property(get = __cordl_internal_get_burnMarkTrailsEnabled, put = __cordl_internal_set_burnMarkTrailsEnabled)) bool burnMarkTrailsEnabled;

  /// @brief Field controllerPositionX, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_controllerPositionX, put = __cordl_internal_set_controllerPositionX)) float_t controllerPositionX;

  /// @brief Field controllerPositionY, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_controllerPositionY, put = __cordl_internal_set_controllerPositionY)) float_t controllerPositionY;

  /// @brief Field controllerPositionZ, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_controllerPositionZ, put = __cordl_internal_set_controllerPositionZ)) float_t controllerPositionZ;

  /// @brief Field controllerRotationX, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_controllerRotationX, put = __cordl_internal_set_controllerRotationX)) float_t controllerRotationX;

  /// @brief Field controllerRotationY, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_controllerRotationY, put = __cordl_internal_set_controllerRotationY)) float_t controllerRotationY;

  /// @brief Field controllerRotationZ, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_controllerRotationZ, put = __cordl_internal_set_controllerRotationZ)) float_t controllerRotationZ;

  /// @brief Field controllersRumbleEnabled, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_controllersRumbleEnabled, put = __cordl_internal_set_controllersRumbleEnabled)) bool controllersRumbleEnabled;

  /// @brief Field customServerHostName, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_customServerHostName, put = __cordl_internal_set_customServerHostName)) ::StringW customServerHostName;

  /// @brief Field enableFPSCounter, offset 0xd1, size 0x1
  __declspec(property(get = __cordl_internal_get_enableFPSCounter, put = __cordl_internal_set_enableFPSCounter)) bool enableFPSCounter;

  /// @brief Field enableFPSRecorder, offset 0xd2, size 0x1
  __declspec(property(get = __cordl_internal_get_enableFPSRecorder, put = __cordl_internal_set_enableFPSRecorder)) bool enableFPSRecorder;

  /// @brief Field enableMemoryTracker, offset 0xd0, size 0x1
  __declspec(property(get = __cordl_internal_get_enableMemoryTracker, put = __cordl_internal_set_enableMemoryTracker)) bool enableMemoryTracker;

  /// @brief Field forceGameLiftServerEnvironment, offset 0xc1, size 0x1
  __declspec(property(get = __cordl_internal_get_forceGameLiftServerEnvironment, put = __cordl_internal_set_forceGameLiftServerEnvironment)) bool forceGameLiftServerEnvironment;

  /// @brief Field language, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_language, put = __cordl_internal_set_language)) ::StringW language;

  /// @brief Field mainEffectGraphicsSettings, offset 0x94, size 0x4
  __declspec(property(get = __cordl_internal_get_mainEffectGraphicsSettings, put = __cordl_internal_set_mainEffectGraphicsSettings)) int32_t mainEffectGraphicsSettings;

  /// @brief Field maxNumberOfCutSoundEffects, offset 0xb0, size 0x4
  __declspec(property(get = __cordl_internal_get_maxNumberOfCutSoundEffects, put = __cordl_internal_set_maxNumberOfCutSoundEffects)) int32_t maxNumberOfCutSoundEffects;

  /// @brief Field maxShockwaveParticles, offset 0xac, size 0x4
  __declspec(property(get = __cordl_internal_get_maxShockwaveParticles, put = __cordl_internal_set_maxShockwaveParticles)) int32_t maxShockwaveParticles;

  /// @brief Field menuVRResolutionScaleMultiplier, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get_menuVRResolutionScaleMultiplier, put = __cordl_internal_set_menuVRResolutionScaleMultiplier)) float_t menuVRResolutionScaleMultiplier;

  /// @brief Field mirrorGraphicsSettings, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get_mirrorGraphicsSettings, put = __cordl_internal_set_mirrorGraphicsSettings)) int32_t mirrorGraphicsSettings;

  /// @brief Field overrideAudioLatency, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get_overrideAudioLatency, put = __cordl_internal_set_overrideAudioLatency)) bool overrideAudioLatency;

  /// @brief Field pauseButtonPressDurationLevel, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_pauseButtonPressDurationLevel, put = __cordl_internal_set_pauseButtonPressDurationLevel)) int32_t pauseButtonPressDurationLevel;

  /// @brief Field roomCenterX, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_roomCenterX, put = __cordl_internal_set_roomCenterX)) float_t roomCenterX;

  /// @brief Field roomCenterY, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_roomCenterY, put = __cordl_internal_set_roomCenterY)) float_t roomCenterY;

  /// @brief Field roomCenterZ, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_roomCenterZ, put = __cordl_internal_set_roomCenterZ)) float_t roomCenterZ;

  /// @brief Field roomRotation, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_roomRotation, put = __cordl_internal_set_roomRotation)) float_t roomRotation;

  /// @brief Field screenDisplacementEffectsEnabled, offset 0xa0, size 0x1
  __declspec(property(get = __cordl_internal_get_screenDisplacementEffectsEnabled, put = __cordl_internal_set_screenDisplacementEffectsEnabled)) bool screenDisplacementEffectsEnabled;

  /// @brief Field smokeGraphicsSettings, offset 0xa4, size 0x4
  __declspec(property(get = __cordl_internal_get_smokeGraphicsSettings, put = __cordl_internal_set_smokeGraphicsSettings)) int32_t smokeGraphicsSettings;

  /// @brief Field smoothCameraEnabled, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_smoothCameraEnabled, put = __cordl_internal_set_smoothCameraEnabled)) int32_t smoothCameraEnabled;

  /// @brief Field smoothCameraFieldOfView, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_smoothCameraFieldOfView, put = __cordl_internal_set_smoothCameraFieldOfView)) float_t smoothCameraFieldOfView;

  /// @brief Field smoothCameraPositionSmooth, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_smoothCameraPositionSmooth, put = __cordl_internal_set_smoothCameraPositionSmooth)) float_t smoothCameraPositionSmooth;

  /// @brief Field smoothCameraRotationSmooth, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_smoothCameraRotationSmooth, put = __cordl_internal_set_smoothCameraRotationSmooth)) float_t smoothCameraRotationSmooth;

  /// @brief Field smoothCameraThirdPersonEnabled, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_smoothCameraThirdPersonEnabled, put = __cordl_internal_set_smoothCameraThirdPersonEnabled)) int32_t smoothCameraThirdPersonEnabled;

  /// @brief Field smoothCameraThirdPersonEulerAnglesX, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_smoothCameraThirdPersonEulerAnglesX, put = __cordl_internal_set_smoothCameraThirdPersonEulerAnglesX)) float_t smoothCameraThirdPersonEulerAnglesX;

  /// @brief Field smoothCameraThirdPersonEulerAnglesY, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_smoothCameraThirdPersonEulerAnglesY, put = __cordl_internal_set_smoothCameraThirdPersonEulerAnglesY)) float_t smoothCameraThirdPersonEulerAnglesY;

  /// @brief Field smoothCameraThirdPersonEulerAnglesZ, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_smoothCameraThirdPersonEulerAnglesZ, put = __cordl_internal_set_smoothCameraThirdPersonEulerAnglesZ)) float_t smoothCameraThirdPersonEulerAnglesZ;

  /// @brief Field smoothCameraThirdPersonPositionX, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_smoothCameraThirdPersonPositionX, put = __cordl_internal_set_smoothCameraThirdPersonPositionX)) float_t smoothCameraThirdPersonPositionX;

  /// @brief Field smoothCameraThirdPersonPositionY, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_smoothCameraThirdPersonPositionY, put = __cordl_internal_set_smoothCameraThirdPersonPositionY)) float_t smoothCameraThirdPersonPositionY;

  /// @brief Field smoothCameraThirdPersonPositionZ, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_smoothCameraThirdPersonPositionZ, put = __cordl_internal_set_smoothCameraThirdPersonPositionZ)) float_t smoothCameraThirdPersonPositionZ;

  /// @brief Field targetFramerate, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get_targetFramerate, put = __cordl_internal_set_targetFramerate)) float_t targetFramerate;

  /// @brief Field useCustomServerEnvironment, offset 0xc0, size 0x1
  __declspec(property(get = __cordl_internal_get_useCustomServerEnvironment, put = __cordl_internal_set_useCustomServerEnvironment)) bool useCustomServerEnvironment;

  /// @brief Field volume, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_volume, put = __cordl_internal_set_volume)) float_t volume;

  /// @brief Field vrResolutionScale, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get_vrResolutionScale, put = __cordl_internal_set_vrResolutionScale)) float_t vrResolutionScale;

  /// @brief Field windowMode, offset 0xb4, size 0x4
  __declspec(property(get = __cordl_internal_get_windowMode, put = __cordl_internal_set_windowMode)) int32_t windowMode;

  /// @brief Field windowResolutionHeight, offset 0xbc, size 0x4
  __declspec(property(get = __cordl_internal_get_windowResolutionHeight, put = __cordl_internal_set_windowResolutionHeight)) int32_t windowResolutionHeight;

  /// @brief Field windowResolutionWidth, offset 0xb8, size 0x4
  __declspec(property(get = __cordl_internal_get_windowResolutionWidth, put = __cordl_internal_set_windowResolutionWidth)) int32_t windowResolutionWidth;

  /// @brief Method ApplyTo, addr 0x223d978, size 0x1c0, virtual false, abstract: false, final false
  inline void ApplyTo(ByRef<::BeatSaber::Settings::Settings> settings);

  static inline ::BeatSaber::Settings::LegacySettingsV1* New_ctor();

  constexpr float_t const& __cordl_internal_get_ambientVolumeScale() const;

  constexpr float_t& __cordl_internal_get_ambientVolumeScale();

  constexpr int32_t const& __cordl_internal_get_antiAliasingLevel() const;

  constexpr int32_t& __cordl_internal_get_antiAliasingLevel();

  constexpr float_t const& __cordl_internal_get_audioLatency() const;

  constexpr float_t& __cordl_internal_get_audioLatency();

  constexpr int32_t const& __cordl_internal_get_bloomGraphicsSettings() const;

  constexpr int32_t& __cordl_internal_get_bloomGraphicsSettings();

  constexpr bool const& __cordl_internal_get_burnMarkTrailsEnabled() const;

  constexpr bool& __cordl_internal_get_burnMarkTrailsEnabled();

  constexpr float_t const& __cordl_internal_get_controllerPositionX() const;

  constexpr float_t& __cordl_internal_get_controllerPositionX();

  constexpr float_t const& __cordl_internal_get_controllerPositionY() const;

  constexpr float_t& __cordl_internal_get_controllerPositionY();

  constexpr float_t const& __cordl_internal_get_controllerPositionZ() const;

  constexpr float_t& __cordl_internal_get_controllerPositionZ();

  constexpr float_t const& __cordl_internal_get_controllerRotationX() const;

  constexpr float_t& __cordl_internal_get_controllerRotationX();

  constexpr float_t const& __cordl_internal_get_controllerRotationY() const;

  constexpr float_t& __cordl_internal_get_controllerRotationY();

  constexpr float_t const& __cordl_internal_get_controllerRotationZ() const;

  constexpr float_t& __cordl_internal_get_controllerRotationZ();

  constexpr bool const& __cordl_internal_get_controllersRumbleEnabled() const;

  constexpr bool& __cordl_internal_get_controllersRumbleEnabled();

  constexpr ::StringW const& __cordl_internal_get_customServerHostName() const;

  constexpr ::StringW& __cordl_internal_get_customServerHostName();

  constexpr bool const& __cordl_internal_get_enableFPSCounter() const;

  constexpr bool& __cordl_internal_get_enableFPSCounter();

  constexpr bool const& __cordl_internal_get_enableFPSRecorder() const;

  constexpr bool& __cordl_internal_get_enableFPSRecorder();

  constexpr bool const& __cordl_internal_get_enableMemoryTracker() const;

  constexpr bool& __cordl_internal_get_enableMemoryTracker();

  constexpr bool const& __cordl_internal_get_forceGameLiftServerEnvironment() const;

  constexpr bool& __cordl_internal_get_forceGameLiftServerEnvironment();

  constexpr ::StringW const& __cordl_internal_get_language() const;

  constexpr ::StringW& __cordl_internal_get_language();

  constexpr int32_t const& __cordl_internal_get_mainEffectGraphicsSettings() const;

  constexpr int32_t& __cordl_internal_get_mainEffectGraphicsSettings();

  constexpr int32_t const& __cordl_internal_get_maxNumberOfCutSoundEffects() const;

  constexpr int32_t& __cordl_internal_get_maxNumberOfCutSoundEffects();

  constexpr int32_t const& __cordl_internal_get_maxShockwaveParticles() const;

  constexpr int32_t& __cordl_internal_get_maxShockwaveParticles();

  constexpr float_t const& __cordl_internal_get_menuVRResolutionScaleMultiplier() const;

  constexpr float_t& __cordl_internal_get_menuVRResolutionScaleMultiplier();

  constexpr int32_t const& __cordl_internal_get_mirrorGraphicsSettings() const;

  constexpr int32_t& __cordl_internal_get_mirrorGraphicsSettings();

  constexpr bool const& __cordl_internal_get_overrideAudioLatency() const;

  constexpr bool& __cordl_internal_get_overrideAudioLatency();

  constexpr int32_t const& __cordl_internal_get_pauseButtonPressDurationLevel() const;

  constexpr int32_t& __cordl_internal_get_pauseButtonPressDurationLevel();

  constexpr float_t const& __cordl_internal_get_roomCenterX() const;

  constexpr float_t& __cordl_internal_get_roomCenterX();

  constexpr float_t const& __cordl_internal_get_roomCenterY() const;

  constexpr float_t& __cordl_internal_get_roomCenterY();

  constexpr float_t const& __cordl_internal_get_roomCenterZ() const;

  constexpr float_t& __cordl_internal_get_roomCenterZ();

  constexpr float_t const& __cordl_internal_get_roomRotation() const;

  constexpr float_t& __cordl_internal_get_roomRotation();

  constexpr bool const& __cordl_internal_get_screenDisplacementEffectsEnabled() const;

  constexpr bool& __cordl_internal_get_screenDisplacementEffectsEnabled();

  constexpr int32_t const& __cordl_internal_get_smokeGraphicsSettings() const;

  constexpr int32_t& __cordl_internal_get_smokeGraphicsSettings();

  constexpr int32_t const& __cordl_internal_get_smoothCameraEnabled() const;

  constexpr int32_t& __cordl_internal_get_smoothCameraEnabled();

  constexpr float_t const& __cordl_internal_get_smoothCameraFieldOfView() const;

  constexpr float_t& __cordl_internal_get_smoothCameraFieldOfView();

  constexpr float_t const& __cordl_internal_get_smoothCameraPositionSmooth() const;

  constexpr float_t& __cordl_internal_get_smoothCameraPositionSmooth();

  constexpr float_t const& __cordl_internal_get_smoothCameraRotationSmooth() const;

  constexpr float_t& __cordl_internal_get_smoothCameraRotationSmooth();

  constexpr int32_t const& __cordl_internal_get_smoothCameraThirdPersonEnabled() const;

  constexpr int32_t& __cordl_internal_get_smoothCameraThirdPersonEnabled();

  constexpr float_t const& __cordl_internal_get_smoothCameraThirdPersonEulerAnglesX() const;

  constexpr float_t& __cordl_internal_get_smoothCameraThirdPersonEulerAnglesX();

  constexpr float_t const& __cordl_internal_get_smoothCameraThirdPersonEulerAnglesY() const;

  constexpr float_t& __cordl_internal_get_smoothCameraThirdPersonEulerAnglesY();

  constexpr float_t const& __cordl_internal_get_smoothCameraThirdPersonEulerAnglesZ() const;

  constexpr float_t& __cordl_internal_get_smoothCameraThirdPersonEulerAnglesZ();

  constexpr float_t const& __cordl_internal_get_smoothCameraThirdPersonPositionX() const;

  constexpr float_t& __cordl_internal_get_smoothCameraThirdPersonPositionX();

  constexpr float_t const& __cordl_internal_get_smoothCameraThirdPersonPositionY() const;

  constexpr float_t& __cordl_internal_get_smoothCameraThirdPersonPositionY();

  constexpr float_t const& __cordl_internal_get_smoothCameraThirdPersonPositionZ() const;

  constexpr float_t& __cordl_internal_get_smoothCameraThirdPersonPositionZ();

  constexpr float_t const& __cordl_internal_get_targetFramerate() const;

  constexpr float_t& __cordl_internal_get_targetFramerate();

  constexpr bool const& __cordl_internal_get_useCustomServerEnvironment() const;

  constexpr bool& __cordl_internal_get_useCustomServerEnvironment();

  constexpr float_t const& __cordl_internal_get_volume() const;

  constexpr float_t& __cordl_internal_get_volume();

  constexpr float_t const& __cordl_internal_get_vrResolutionScale() const;

  constexpr float_t& __cordl_internal_get_vrResolutionScale();

  constexpr int32_t const& __cordl_internal_get_windowMode() const;

  constexpr int32_t& __cordl_internal_get_windowMode();

  constexpr int32_t const& __cordl_internal_get_windowResolutionHeight() const;

  constexpr int32_t& __cordl_internal_get_windowResolutionHeight();

  constexpr int32_t const& __cordl_internal_get_windowResolutionWidth() const;

  constexpr int32_t& __cordl_internal_get_windowResolutionWidth();

  constexpr void __cordl_internal_set_ambientVolumeScale(float_t value);

  constexpr void __cordl_internal_set_antiAliasingLevel(int32_t value);

  constexpr void __cordl_internal_set_audioLatency(float_t value);

  constexpr void __cordl_internal_set_bloomGraphicsSettings(int32_t value);

  constexpr void __cordl_internal_set_burnMarkTrailsEnabled(bool value);

  constexpr void __cordl_internal_set_controllerPositionX(float_t value);

  constexpr void __cordl_internal_set_controllerPositionY(float_t value);

  constexpr void __cordl_internal_set_controllerPositionZ(float_t value);

  constexpr void __cordl_internal_set_controllerRotationX(float_t value);

  constexpr void __cordl_internal_set_controllerRotationY(float_t value);

  constexpr void __cordl_internal_set_controllerRotationZ(float_t value);

  constexpr void __cordl_internal_set_controllersRumbleEnabled(bool value);

  constexpr void __cordl_internal_set_customServerHostName(::StringW value);

  constexpr void __cordl_internal_set_enableFPSCounter(bool value);

  constexpr void __cordl_internal_set_enableFPSRecorder(bool value);

  constexpr void __cordl_internal_set_enableMemoryTracker(bool value);

  constexpr void __cordl_internal_set_forceGameLiftServerEnvironment(bool value);

  constexpr void __cordl_internal_set_language(::StringW value);

  constexpr void __cordl_internal_set_mainEffectGraphicsSettings(int32_t value);

  constexpr void __cordl_internal_set_maxNumberOfCutSoundEffects(int32_t value);

  constexpr void __cordl_internal_set_maxShockwaveParticles(int32_t value);

  constexpr void __cordl_internal_set_menuVRResolutionScaleMultiplier(float_t value);

  constexpr void __cordl_internal_set_mirrorGraphicsSettings(int32_t value);

  constexpr void __cordl_internal_set_overrideAudioLatency(bool value);

  constexpr void __cordl_internal_set_pauseButtonPressDurationLevel(int32_t value);

  constexpr void __cordl_internal_set_roomCenterX(float_t value);

  constexpr void __cordl_internal_set_roomCenterY(float_t value);

  constexpr void __cordl_internal_set_roomCenterZ(float_t value);

  constexpr void __cordl_internal_set_roomRotation(float_t value);

  constexpr void __cordl_internal_set_screenDisplacementEffectsEnabled(bool value);

  constexpr void __cordl_internal_set_smokeGraphicsSettings(int32_t value);

  constexpr void __cordl_internal_set_smoothCameraEnabled(int32_t value);

  constexpr void __cordl_internal_set_smoothCameraFieldOfView(float_t value);

  constexpr void __cordl_internal_set_smoothCameraPositionSmooth(float_t value);

  constexpr void __cordl_internal_set_smoothCameraRotationSmooth(float_t value);

  constexpr void __cordl_internal_set_smoothCameraThirdPersonEnabled(int32_t value);

  constexpr void __cordl_internal_set_smoothCameraThirdPersonEulerAnglesX(float_t value);

  constexpr void __cordl_internal_set_smoothCameraThirdPersonEulerAnglesY(float_t value);

  constexpr void __cordl_internal_set_smoothCameraThirdPersonEulerAnglesZ(float_t value);

  constexpr void __cordl_internal_set_smoothCameraThirdPersonPositionX(float_t value);

  constexpr void __cordl_internal_set_smoothCameraThirdPersonPositionY(float_t value);

  constexpr void __cordl_internal_set_smoothCameraThirdPersonPositionZ(float_t value);

  constexpr void __cordl_internal_set_targetFramerate(float_t value);

  constexpr void __cordl_internal_set_useCustomServerEnvironment(bool value);

  constexpr void __cordl_internal_set_volume(float_t value);

  constexpr void __cordl_internal_set_vrResolutionScale(float_t value);

  constexpr void __cordl_internal_set_windowMode(int32_t value);

  constexpr void __cordl_internal_set_windowResolutionHeight(int32_t value);

  constexpr void __cordl_internal_set_windowResolutionWidth(int32_t value);

  /// @brief Method .ctor, addr 0x223db38, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LegacySettingsV1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LegacySettingsV1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LegacySettingsV1(LegacySettingsV1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LegacySettingsV1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LegacySettingsV1(LegacySettingsV1 const&) = delete;

  /// @brief Field roomCenterX, offset: 0x10, size: 0x4, def value: None
  float_t ___roomCenterX;

  /// @brief Field roomCenterY, offset: 0x14, size: 0x4, def value: None
  float_t ___roomCenterY;

  /// @brief Field roomCenterZ, offset: 0x18, size: 0x4, def value: None
  float_t ___roomCenterZ;

  /// @brief Field roomRotation, offset: 0x1c, size: 0x4, def value: None
  float_t ___roomRotation;

  /// @brief Field controllerPositionX, offset: 0x20, size: 0x4, def value: None
  float_t ___controllerPositionX;

  /// @brief Field controllerPositionY, offset: 0x24, size: 0x4, def value: None
  float_t ___controllerPositionY;

  /// @brief Field controllerPositionZ, offset: 0x28, size: 0x4, def value: None
  float_t ___controllerPositionZ;

  /// @brief Field controllerRotationX, offset: 0x2c, size: 0x4, def value: None
  float_t ___controllerRotationX;

  /// @brief Field controllerRotationY, offset: 0x30, size: 0x4, def value: None
  float_t ___controllerRotationY;

  /// @brief Field controllerRotationZ, offset: 0x34, size: 0x4, def value: None
  float_t ___controllerRotationZ;

  /// @brief Field controllersRumbleEnabled, offset: 0x38, size: 0x1, def value: None
  bool ___controllersRumbleEnabled;

  /// @brief Field smoothCameraEnabled, offset: 0x3c, size: 0x4, def value: None
  int32_t ___smoothCameraEnabled;

  /// @brief Field smoothCameraFieldOfView, offset: 0x40, size: 0x4, def value: None
  float_t ___smoothCameraFieldOfView;

  /// @brief Field smoothCameraPositionSmooth, offset: 0x44, size: 0x4, def value: None
  float_t ___smoothCameraPositionSmooth;

  /// @brief Field smoothCameraRotationSmooth, offset: 0x48, size: 0x4, def value: None
  float_t ___smoothCameraRotationSmooth;

  /// @brief Field smoothCameraThirdPersonEnabled, offset: 0x4c, size: 0x4, def value: None
  int32_t ___smoothCameraThirdPersonEnabled;

  /// @brief Field smoothCameraThirdPersonPositionX, offset: 0x50, size: 0x4, def value: None
  float_t ___smoothCameraThirdPersonPositionX;

  /// @brief Field smoothCameraThirdPersonPositionY, offset: 0x54, size: 0x4, def value: None
  float_t ___smoothCameraThirdPersonPositionY;

  /// @brief Field smoothCameraThirdPersonPositionZ, offset: 0x58, size: 0x4, def value: None
  float_t ___smoothCameraThirdPersonPositionZ;

  /// @brief Field smoothCameraThirdPersonEulerAnglesX, offset: 0x5c, size: 0x4, def value: None
  float_t ___smoothCameraThirdPersonEulerAnglesX;

  /// @brief Field smoothCameraThirdPersonEulerAnglesY, offset: 0x60, size: 0x4, def value: None
  float_t ___smoothCameraThirdPersonEulerAnglesY;

  /// @brief Field smoothCameraThirdPersonEulerAnglesZ, offset: 0x64, size: 0x4, def value: None
  float_t ___smoothCameraThirdPersonEulerAnglesZ;

  /// @brief Field volume, offset: 0x68, size: 0x4, def value: None
  float_t ___volume;

  /// @brief Field ambientVolumeScale, offset: 0x6c, size: 0x4, def value: None
  float_t ___ambientVolumeScale;

  /// @brief Field overrideAudioLatency, offset: 0x70, size: 0x1, def value: None
  bool ___overrideAudioLatency;

  /// @brief Field audioLatency, offset: 0x74, size: 0x4, def value: None
  float_t ___audioLatency;

  /// @brief Field language, offset: 0x78, size: 0x8, def value: None
  ::StringW ___language;

  /// @brief Field pauseButtonPressDurationLevel, offset: 0x80, size: 0x4, def value: None
  int32_t ___pauseButtonPressDurationLevel;

  /// @brief Field vrResolutionScale, offset: 0x84, size: 0x4, def value: None
  float_t ___vrResolutionScale;

  /// @brief Field menuVRResolutionScaleMultiplier, offset: 0x88, size: 0x4, def value: None
  float_t ___menuVRResolutionScaleMultiplier;

  /// @brief Field antiAliasingLevel, offset: 0x8c, size: 0x4, def value: None
  int32_t ___antiAliasingLevel;

  /// @brief Field targetFramerate, offset: 0x90, size: 0x4, def value: None
  float_t ___targetFramerate;

  /// @brief Field mainEffectGraphicsSettings, offset: 0x94, size: 0x4, def value: None
  int32_t ___mainEffectGraphicsSettings;

  /// @brief Field bloomGraphicsSettings, offset: 0x98, size: 0x4, def value: None
  int32_t ___bloomGraphicsSettings;

  /// @brief Field mirrorGraphicsSettings, offset: 0x9c, size: 0x4, def value: None
  int32_t ___mirrorGraphicsSettings;

  /// @brief Field screenDisplacementEffectsEnabled, offset: 0xa0, size: 0x1, def value: None
  bool ___screenDisplacementEffectsEnabled;

  /// @brief Field smokeGraphicsSettings, offset: 0xa4, size: 0x4, def value: None
  int32_t ___smokeGraphicsSettings;

  /// @brief Field burnMarkTrailsEnabled, offset: 0xa8, size: 0x1, def value: None
  bool ___burnMarkTrailsEnabled;

  /// @brief Field maxShockwaveParticles, offset: 0xac, size: 0x4, def value: None
  int32_t ___maxShockwaveParticles;

  /// @brief Field maxNumberOfCutSoundEffects, offset: 0xb0, size: 0x4, def value: None
  int32_t ___maxNumberOfCutSoundEffects;

  /// @brief Field windowMode, offset: 0xb4, size: 0x4, def value: None
  int32_t ___windowMode;

  /// @brief Field windowResolutionWidth, offset: 0xb8, size: 0x4, def value: None
  int32_t ___windowResolutionWidth;

  /// @brief Field windowResolutionHeight, offset: 0xbc, size: 0x4, def value: None
  int32_t ___windowResolutionHeight;

  /// @brief Field useCustomServerEnvironment, offset: 0xc0, size: 0x1, def value: None
  bool ___useCustomServerEnvironment;

  /// @brief Field forceGameLiftServerEnvironment, offset: 0xc1, size: 0x1, def value: None
  bool ___forceGameLiftServerEnvironment;

  /// @brief Field customServerHostName, offset: 0xc8, size: 0x8, def value: None
  ::StringW ___customServerHostName;

  /// @brief Field enableMemoryTracker, offset: 0xd0, size: 0x1, def value: None
  bool ___enableMemoryTracker;

  /// @brief Field enableFPSCounter, offset: 0xd1, size: 0x1, def value: None
  bool ___enableFPSCounter;

  /// @brief Field enableFPSRecorder, offset: 0xd2, size: 0x1, def value: None
  bool ___enableFPSRecorder;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17929 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::LegacySettingsV1, 0xd8>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV1, ___roomCenterX) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV1, ___roomCenterY) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV1, ___roomCenterZ) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV1, ___roomRotation) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV1, ___controllerPositionX) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV1, ___controllerPositionY) == 0x24, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV1, ___controllerPositionZ) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV1, ___controllerRotationX) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV1, ___controllerRotationY) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV1, ___controllerRotationZ) == 0x34, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV1, ___controllersRumbleEnabled) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV1, ___smoothCameraEnabled) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV1, ___smoothCameraFieldOfView) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV1, ___smoothCameraPositionSmooth) == 0x44, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV1, ___smoothCameraRotationSmooth) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV1, ___smoothCameraThirdPersonEnabled) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV1, ___smoothCameraThirdPersonPositionX) == 0x50, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV1, ___smoothCameraThirdPersonPositionY) == 0x54, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV1, ___smoothCameraThirdPersonPositionZ) == 0x58, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV1, ___smoothCameraThirdPersonEulerAnglesX) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV1, ___smoothCameraThirdPersonEulerAnglesY) == 0x60, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV1, ___smoothCameraThirdPersonEulerAnglesZ) == 0x64, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV1, ___volume) == 0x68, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV1, ___ambientVolumeScale) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV1, ___overrideAudioLatency) == 0x70, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV1, ___audioLatency) == 0x74, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV1, ___language) == 0x78, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV1, ___pauseButtonPressDurationLevel) == 0x80, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV1, ___vrResolutionScale) == 0x84, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV1, ___menuVRResolutionScaleMultiplier) == 0x88, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV1, ___antiAliasingLevel) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV1, ___targetFramerate) == 0x90, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV1, ___mainEffectGraphicsSettings) == 0x94, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV1, ___bloomGraphicsSettings) == 0x98, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV1, ___mirrorGraphicsSettings) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV1, ___screenDisplacementEffectsEnabled) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV1, ___smokeGraphicsSettings) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV1, ___burnMarkTrailsEnabled) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV1, ___maxShockwaveParticles) == 0xac, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV1, ___maxNumberOfCutSoundEffects) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV1, ___windowMode) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV1, ___windowResolutionWidth) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV1, ___windowResolutionHeight) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV1, ___useCustomServerEnvironment) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV1, ___forceGameLiftServerEnvironment) == 0xc1, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV1, ___customServerHostName) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV1, ___enableMemoryTracker) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV1, ___enableFPSCounter) == 0xd1, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::LegacySettingsV1, ___enableFPSRecorder) == 0xd2, "Offset mismatch!");

} // namespace BeatSaber::Settings
NEED_NO_BOX(::BeatSaber::Settings::LegacySettingsV1);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::LegacySettingsV1*, "BeatSaber.Settings", "LegacySettingsV1");
