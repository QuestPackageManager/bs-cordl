#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LegacySettingsModel)
// Forward declare root types
namespace BeatSaber::GameSettings {
class LegacySettingsModel;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::GameSettings::LegacySettingsModel);
// Type: BeatSaber.GameSettings::LegacySettingsModel
// SizeInfo { instance_size: 256, native_size: -1, calculated_instance_size: 256, calculated_native_size: 252, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::GameSettings {
// Is value type: false
// CS Name: ::BeatSaber.GameSettings::LegacySettingsModel*
class CORDL_TYPE LegacySettingsModel : public ::System::Object {
public:
  // Declarations
  /// @brief Field ambientVolumeScale, offset 0xcc, size 0x4
  __declspec(property(get = __cordl_internal_get_ambientVolumeScale, put = __cordl_internal_set_ambientVolumeScale)) float_t ambientVolumeScale;

  /// @brief Field antiAliasingLevel, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_antiAliasingLevel, put = __cordl_internal_set_antiAliasingLevel)) int32_t antiAliasingLevel;

  /// @brief Field audioLatency, offset 0xe4, size 0x4
  __declspec(property(get = __cordl_internal_get_audioLatency, put = __cordl_internal_set_audioLatency)) float_t audioLatency;

  /// @brief Field bloomGraphicsSettings, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_bloomGraphicsSettings, put = __cordl_internal_set_bloomGraphicsSettings)) int32_t bloomGraphicsSettings;

  /// @brief Field burnMarkTrailsEnabled, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_burnMarkTrailsEnabled, put = __cordl_internal_set_burnMarkTrailsEnabled)) bool burnMarkTrailsEnabled;

  /// @brief Field controllerPositionX, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_controllerPositionX, put = __cordl_internal_set_controllerPositionX)) float_t controllerPositionX;

  /// @brief Field controllerPositionY, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_controllerPositionY, put = __cordl_internal_set_controllerPositionY)) float_t controllerPositionY;

  /// @brief Field controllerPositionZ, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_controllerPositionZ, put = __cordl_internal_set_controllerPositionZ)) float_t controllerPositionZ;

  /// @brief Field controllerRotationX, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_controllerRotationX, put = __cordl_internal_set_controllerRotationX)) float_t controllerRotationX;

  /// @brief Field controllerRotationY, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_controllerRotationY, put = __cordl_internal_set_controllerRotationY)) float_t controllerRotationY;

  /// @brief Field controllerRotationZ, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get_controllerRotationZ, put = __cordl_internal_set_controllerRotationZ)) float_t controllerRotationZ;

  /// @brief Field controllersRumbleEnabled, offset 0xd0, size 0x1
  __declspec(property(get = __cordl_internal_get_controllersRumbleEnabled, put = __cordl_internal_set_controllersRumbleEnabled)) bool controllersRumbleEnabled;

  /// @brief Field cpuLevel, offset 0xc0, size 0x4
  __declspec(property(get = __cordl_internal_get_cpuLevel, put = __cordl_internal_set_cpuLevel)) int32_t cpuLevel;

  /// @brief Field customServerHostName, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_customServerHostName, put = __cordl_internal_set_customServerHostName))::StringW customServerHostName;

  /// @brief Field editorResolutionHeight, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_editorResolutionHeight, put = __cordl_internal_set_editorResolutionHeight)) int32_t editorResolutionHeight;

  /// @brief Field editorResolutionWidth, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_editorResolutionWidth, put = __cordl_internal_set_editorResolutionWidth)) int32_t editorResolutionWidth;

  /// @brief Field enableAlphaFeatures, offset 0xd4, size 0x4
  __declspec(property(get = __cordl_internal_get_enableAlphaFeatures, put = __cordl_internal_set_enableAlphaFeatures)) int32_t enableAlphaFeatures;

  /// @brief Field enableFPSCounter, offset 0xf8, size 0x1
  __declspec(property(get = __cordl_internal_get_enableFPSCounter, put = __cordl_internal_set_enableFPSCounter)) bool enableFPSCounter;

  /// @brief Field enableFPSRecorder, offset 0xf9, size 0x1
  __declspec(property(get = __cordl_internal_get_enableFPSRecorder, put = __cordl_internal_set_enableFPSRecorder)) bool enableFPSRecorder;

  /// @brief Field enableMemoryTracker, offset 0xfa, size 0x1
  __declspec(property(get = __cordl_internal_get_enableMemoryTracker, put = __cordl_internal_set_enableMemoryTracker)) bool enableMemoryTracker;

  /// @brief Field forceGameLiftServerEnvironment, offset 0xad, size 0x1
  __declspec(property(get = __cordl_internal_get_forceGameLiftServerEnvironment, put = __cordl_internal_set_forceGameLiftServerEnvironment)) bool forceGameLiftServerEnvironment;

  /// @brief Field gpuLevel, offset 0xbc, size 0x4
  __declspec(property(get = __cordl_internal_get_gpuLevel, put = __cordl_internal_set_gpuLevel)) int32_t gpuLevel;

  /// @brief Field language, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_language, put = __cordl_internal_set_language))::StringW language;

  /// @brief Field mainEffectGraphicsSettings, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_mainEffectGraphicsSettings, put = __cordl_internal_set_mainEffectGraphicsSettings)) int32_t mainEffectGraphicsSettings;

  /// @brief Field maxNumberOfCutSoundEffects, offset 0xe8, size 0x4
  __declspec(property(get = __cordl_internal_get_maxNumberOfCutSoundEffects, put = __cordl_internal_set_maxNumberOfCutSoundEffects)) int32_t maxNumberOfCutSoundEffects;

  /// @brief Field maxShockwaveParticles, offset 0xdc, size 0x4
  __declspec(property(get = __cordl_internal_get_maxShockwaveParticles, put = __cordl_internal_set_maxShockwaveParticles)) int32_t maxShockwaveParticles;

  /// @brief Field menuVRResolutionScaleMultiplier, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_menuVRResolutionScaleMultiplier, put = __cordl_internal_set_menuVRResolutionScaleMultiplier)) float_t menuVRResolutionScaleMultiplier;

  /// @brief Field mirrorGraphicsSettings, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_mirrorGraphicsSettings, put = __cordl_internal_set_mirrorGraphicsSettings)) int32_t mirrorGraphicsSettings;

  /// @brief Field obstaclesQuality, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_obstaclesQuality, put = __cordl_internal_set_obstaclesQuality)) int32_t obstaclesQuality;

  /// @brief Field overrideAudioLatency, offset 0xe0, size 0x1
  __declspec(property(get = __cordl_internal_get_overrideAudioLatency, put = __cordl_internal_set_overrideAudioLatency)) bool overrideAudioLatency;

  /// @brief Field pauseButtonPressDurationLevel, offset 0xd8, size 0x4
  __declspec(property(get = __cordl_internal_get_pauseButtonPressDurationLevel, put = __cordl_internal_set_pauseButtonPressDurationLevel)) int32_t pauseButtonPressDurationLevel;

  /// @brief Field performancePresetKey, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_performancePresetKey, put = __cordl_internal_set_performancePresetKey))::StringW performancePresetKey;

  /// @brief Field roomCenterX, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_roomCenterX, put = __cordl_internal_set_roomCenterX)) float_t roomCenterX;

  /// @brief Field roomCenterY, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_roomCenterY, put = __cordl_internal_set_roomCenterY)) float_t roomCenterY;

  /// @brief Field roomCenterZ, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_roomCenterZ, put = __cordl_internal_set_roomCenterZ)) float_t roomCenterZ;

  /// @brief Field roomRotation, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_roomRotation, put = __cordl_internal_set_roomRotation)) float_t roomRotation;

  /// @brief Field screenDisplacementEffectsEnabled, offset 0x49, size 0x1
  __declspec(property(get = __cordl_internal_get_screenDisplacementEffectsEnabled, put = __cordl_internal_set_screenDisplacementEffectsEnabled)) bool screenDisplacementEffectsEnabled;

  /// @brief Field smokeGraphicsSettings, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_smokeGraphicsSettings, put = __cordl_internal_set_smokeGraphicsSettings)) int32_t smokeGraphicsSettings;

  /// @brief Field smoothCameraEnabled, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_smoothCameraEnabled, put = __cordl_internal_set_smoothCameraEnabled)) int32_t smoothCameraEnabled;

  /// @brief Field smoothCameraFieldOfView, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get_smoothCameraFieldOfView, put = __cordl_internal_set_smoothCameraFieldOfView)) float_t smoothCameraFieldOfView;

  /// @brief Field smoothCameraPositionSmooth, offset 0xa8, size 0x4
  __declspec(property(get = __cordl_internal_get_smoothCameraPositionSmooth, put = __cordl_internal_set_smoothCameraPositionSmooth)) float_t smoothCameraPositionSmooth;

  /// @brief Field smoothCameraRotationSmooth, offset 0xa4, size 0x4
  __declspec(property(get = __cordl_internal_get_smoothCameraRotationSmooth, put = __cordl_internal_set_smoothCameraRotationSmooth)) float_t smoothCameraRotationSmooth;

  /// @brief Field smoothCameraThirdPersonEnabled, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get_smoothCameraThirdPersonEnabled, put = __cordl_internal_set_smoothCameraThirdPersonEnabled)) int32_t smoothCameraThirdPersonEnabled;

  /// @brief Field smoothCameraThirdPersonEulerAnglesX, offset 0x94, size 0x4
  __declspec(property(get = __cordl_internal_get_smoothCameraThirdPersonEulerAnglesX, put = __cordl_internal_set_smoothCameraThirdPersonEulerAnglesX)) float_t smoothCameraThirdPersonEulerAnglesX;

  /// @brief Field smoothCameraThirdPersonEulerAnglesY, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get_smoothCameraThirdPersonEulerAnglesY, put = __cordl_internal_set_smoothCameraThirdPersonEulerAnglesY)) float_t smoothCameraThirdPersonEulerAnglesY;

  /// @brief Field smoothCameraThirdPersonEulerAnglesZ, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get_smoothCameraThirdPersonEulerAnglesZ, put = __cordl_internal_set_smoothCameraThirdPersonEulerAnglesZ)) float_t smoothCameraThirdPersonEulerAnglesZ;

  /// @brief Field smoothCameraThirdPersonPositionX, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get_smoothCameraThirdPersonPositionX, put = __cordl_internal_set_smoothCameraThirdPersonPositionX)) float_t smoothCameraThirdPersonPositionX;

  /// @brief Field smoothCameraThirdPersonPositionY, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get_smoothCameraThirdPersonPositionY, put = __cordl_internal_set_smoothCameraThirdPersonPositionY)) float_t smoothCameraThirdPersonPositionY;

  /// @brief Field smoothCameraThirdPersonPositionZ, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get_smoothCameraThirdPersonPositionZ, put = __cordl_internal_set_smoothCameraThirdPersonPositionZ)) float_t smoothCameraThirdPersonPositionZ;

  /// @brief Field targetFramerate, offset 0xc4, size 0x4
  __declspec(property(get = __cordl_internal_get_targetFramerate, put = __cordl_internal_set_targetFramerate)) float_t targetFramerate;

  /// @brief Field useCustomServerEnvironment, offset 0xac, size 0x1
  __declspec(property(get = __cordl_internal_get_useCustomServerEnvironment, put = __cordl_internal_set_useCustomServerEnvironment)) bool useCustomServerEnvironment;

  /// @brief Field useFixedFoveatedRenderingDuringGameplay, offset 0xb8, size 0x1
  __declspec(property(get = __cordl_internal_get_useFixedFoveatedRenderingDuringGameplay,
                      put = __cordl_internal_set_useFixedFoveatedRenderingDuringGameplay)) bool useFixedFoveatedRenderingDuringGameplay;

  /// @brief Field version, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version))::StringW version;

  /// @brief Field volume, offset 0xc8, size 0x4
  __declspec(property(get = __cordl_internal_get_volume, put = __cordl_internal_set_volume)) float_t volume;

  /// @brief Field vrResolutionScale, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_vrResolutionScale, put = __cordl_internal_set_vrResolutionScale)) float_t vrResolutionScale;

  /// @brief Field wasUpdatedFrom, offset 0xfb, size 0x1
  __declspec(property(get = __cordl_internal_get_wasUpdatedFrom, put = __cordl_internal_set_wasUpdatedFrom)) bool wasUpdatedFrom;

  /// @brief Field windowMode, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_windowMode, put = __cordl_internal_set_windowMode)) int32_t windowMode;

  /// @brief Field windowResolutionHeight, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_windowResolutionHeight, put = __cordl_internal_set_windowResolutionHeight)) int32_t windowResolutionHeight;

  /// @brief Field windowResolutionWidth, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_windowResolutionWidth, put = __cordl_internal_set_windowResolutionWidth)) int32_t windowResolutionWidth;

  static inline ::BeatSaber::GameSettings::LegacySettingsModel* New_ctor();

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

  constexpr int32_t const& __cordl_internal_get_cpuLevel() const;

  constexpr int32_t& __cordl_internal_get_cpuLevel();

  constexpr ::StringW const& __cordl_internal_get_customServerHostName() const;

  constexpr ::StringW& __cordl_internal_get_customServerHostName();

  constexpr int32_t const& __cordl_internal_get_editorResolutionHeight() const;

  constexpr int32_t& __cordl_internal_get_editorResolutionHeight();

  constexpr int32_t const& __cordl_internal_get_editorResolutionWidth() const;

  constexpr int32_t& __cordl_internal_get_editorResolutionWidth();

  constexpr int32_t const& __cordl_internal_get_enableAlphaFeatures() const;

  constexpr int32_t& __cordl_internal_get_enableAlphaFeatures();

  constexpr bool const& __cordl_internal_get_enableFPSCounter() const;

  constexpr bool& __cordl_internal_get_enableFPSCounter();

  constexpr bool const& __cordl_internal_get_enableFPSRecorder() const;

  constexpr bool& __cordl_internal_get_enableFPSRecorder();

  constexpr bool const& __cordl_internal_get_enableMemoryTracker() const;

  constexpr bool& __cordl_internal_get_enableMemoryTracker();

  constexpr bool const& __cordl_internal_get_forceGameLiftServerEnvironment() const;

  constexpr bool& __cordl_internal_get_forceGameLiftServerEnvironment();

  constexpr int32_t const& __cordl_internal_get_gpuLevel() const;

  constexpr int32_t& __cordl_internal_get_gpuLevel();

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

  constexpr int32_t const& __cordl_internal_get_obstaclesQuality() const;

  constexpr int32_t& __cordl_internal_get_obstaclesQuality();

  constexpr bool const& __cordl_internal_get_overrideAudioLatency() const;

  constexpr bool& __cordl_internal_get_overrideAudioLatency();

  constexpr int32_t const& __cordl_internal_get_pauseButtonPressDurationLevel() const;

  constexpr int32_t& __cordl_internal_get_pauseButtonPressDurationLevel();

  constexpr ::StringW const& __cordl_internal_get_performancePresetKey() const;

  constexpr ::StringW& __cordl_internal_get_performancePresetKey();

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

  constexpr bool const& __cordl_internal_get_useFixedFoveatedRenderingDuringGameplay() const;

  constexpr bool& __cordl_internal_get_useFixedFoveatedRenderingDuringGameplay();

  constexpr ::StringW const& __cordl_internal_get_version() const;

  constexpr ::StringW& __cordl_internal_get_version();

  constexpr float_t const& __cordl_internal_get_volume() const;

  constexpr float_t& __cordl_internal_get_volume();

  constexpr float_t const& __cordl_internal_get_vrResolutionScale() const;

  constexpr float_t& __cordl_internal_get_vrResolutionScale();

  constexpr bool const& __cordl_internal_get_wasUpdatedFrom() const;

  constexpr bool& __cordl_internal_get_wasUpdatedFrom();

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

  constexpr void __cordl_internal_set_cpuLevel(int32_t value);

  constexpr void __cordl_internal_set_customServerHostName(::StringW value);

  constexpr void __cordl_internal_set_editorResolutionHeight(int32_t value);

  constexpr void __cordl_internal_set_editorResolutionWidth(int32_t value);

  constexpr void __cordl_internal_set_enableAlphaFeatures(int32_t value);

  constexpr void __cordl_internal_set_enableFPSCounter(bool value);

  constexpr void __cordl_internal_set_enableFPSRecorder(bool value);

  constexpr void __cordl_internal_set_enableMemoryTracker(bool value);

  constexpr void __cordl_internal_set_forceGameLiftServerEnvironment(bool value);

  constexpr void __cordl_internal_set_gpuLevel(int32_t value);

  constexpr void __cordl_internal_set_language(::StringW value);

  constexpr void __cordl_internal_set_mainEffectGraphicsSettings(int32_t value);

  constexpr void __cordl_internal_set_maxNumberOfCutSoundEffects(int32_t value);

  constexpr void __cordl_internal_set_maxShockwaveParticles(int32_t value);

  constexpr void __cordl_internal_set_menuVRResolutionScaleMultiplier(float_t value);

  constexpr void __cordl_internal_set_mirrorGraphicsSettings(int32_t value);

  constexpr void __cordl_internal_set_obstaclesQuality(int32_t value);

  constexpr void __cordl_internal_set_overrideAudioLatency(bool value);

  constexpr void __cordl_internal_set_pauseButtonPressDurationLevel(int32_t value);

  constexpr void __cordl_internal_set_performancePresetKey(::StringW value);

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

  constexpr void __cordl_internal_set_useFixedFoveatedRenderingDuringGameplay(bool value);

  constexpr void __cordl_internal_set_version(::StringW value);

  constexpr void __cordl_internal_set_volume(float_t value);

  constexpr void __cordl_internal_set_vrResolutionScale(float_t value);

  constexpr void __cordl_internal_set_wasUpdatedFrom(bool value);

  constexpr void __cordl_internal_set_windowMode(int32_t value);

  constexpr void __cordl_internal_set_windowResolutionHeight(int32_t value);

  constexpr void __cordl_internal_set_windowResolutionWidth(int32_t value);

  /// @brief Method .ctor, addr 0x105f428, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LegacySettingsModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LegacySettingsModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LegacySettingsModel(LegacySettingsModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LegacySettingsModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LegacySettingsModel(LegacySettingsModel const&) = delete;

  /// @brief Field version, offset: 0x10, size: 0x8, def value: None
  ::StringW ___version;

  /// @brief Field windowResolutionWidth, offset: 0x18, size: 0x4, def value: None
  int32_t ___windowResolutionWidth;

  /// @brief Field windowResolutionHeight, offset: 0x1c, size: 0x4, def value: None
  int32_t ___windowResolutionHeight;

  /// @brief Field editorResolutionWidth, offset: 0x20, size: 0x4, def value: None
  int32_t ___editorResolutionWidth;

  /// @brief Field editorResolutionHeight, offset: 0x24, size: 0x4, def value: None
  int32_t ___editorResolutionHeight;

  /// @brief Field windowMode, offset: 0x28, size: 0x4, def value: None
  int32_t ___windowMode;

  /// @brief Field vrResolutionScale, offset: 0x2c, size: 0x4, def value: None
  float_t ___vrResolutionScale;

  /// @brief Field menuVRResolutionScaleMultiplier, offset: 0x30, size: 0x4, def value: None
  float_t ___menuVRResolutionScaleMultiplier;

  /// @brief Field antiAliasingLevel, offset: 0x34, size: 0x4, def value: None
  int32_t ___antiAliasingLevel;

  /// @brief Field mirrorGraphicsSettings, offset: 0x38, size: 0x4, def value: None
  int32_t ___mirrorGraphicsSettings;

  /// @brief Field mainEffectGraphicsSettings, offset: 0x3c, size: 0x4, def value: None
  int32_t ___mainEffectGraphicsSettings;

  /// @brief Field bloomGraphicsSettings, offset: 0x40, size: 0x4, def value: None
  int32_t ___bloomGraphicsSettings;

  /// @brief Field smokeGraphicsSettings, offset: 0x44, size: 0x4, def value: None
  int32_t ___smokeGraphicsSettings;

  /// @brief Field burnMarkTrailsEnabled, offset: 0x48, size: 0x1, def value: None
  bool ___burnMarkTrailsEnabled;

  /// @brief Field screenDisplacementEffectsEnabled, offset: 0x49, size: 0x1, def value: None
  bool ___screenDisplacementEffectsEnabled;

  /// @brief Field obstaclesQuality, offset: 0x4c, size: 0x4, def value: None
  int32_t ___obstaclesQuality;

  /// @brief Field performancePresetKey, offset: 0x50, size: 0x8, def value: None
  ::StringW ___performancePresetKey;

  /// @brief Field roomCenterX, offset: 0x58, size: 0x4, def value: None
  float_t ___roomCenterX;

  /// @brief Field roomCenterY, offset: 0x5c, size: 0x4, def value: None
  float_t ___roomCenterY;

  /// @brief Field roomCenterZ, offset: 0x60, size: 0x4, def value: None
  float_t ___roomCenterZ;

  /// @brief Field roomRotation, offset: 0x64, size: 0x4, def value: None
  float_t ___roomRotation;

  /// @brief Field controllerPositionX, offset: 0x68, size: 0x4, def value: None
  float_t ___controllerPositionX;

  /// @brief Field controllerPositionY, offset: 0x6c, size: 0x4, def value: None
  float_t ___controllerPositionY;

  /// @brief Field controllerPositionZ, offset: 0x70, size: 0x4, def value: None
  float_t ___controllerPositionZ;

  /// @brief Field controllerRotationX, offset: 0x74, size: 0x4, def value: None
  float_t ___controllerRotationX;

  /// @brief Field controllerRotationY, offset: 0x78, size: 0x4, def value: None
  float_t ___controllerRotationY;

  /// @brief Field controllerRotationZ, offset: 0x7c, size: 0x4, def value: None
  float_t ___controllerRotationZ;

  /// @brief Field smoothCameraEnabled, offset: 0x80, size: 0x4, def value: None
  int32_t ___smoothCameraEnabled;

  /// @brief Field smoothCameraFieldOfView, offset: 0x84, size: 0x4, def value: None
  float_t ___smoothCameraFieldOfView;

  /// @brief Field smoothCameraThirdPersonPositionX, offset: 0x88, size: 0x4, def value: None
  float_t ___smoothCameraThirdPersonPositionX;

  /// @brief Field smoothCameraThirdPersonPositionY, offset: 0x8c, size: 0x4, def value: None
  float_t ___smoothCameraThirdPersonPositionY;

  /// @brief Field smoothCameraThirdPersonPositionZ, offset: 0x90, size: 0x4, def value: None
  float_t ___smoothCameraThirdPersonPositionZ;

  /// @brief Field smoothCameraThirdPersonEulerAnglesX, offset: 0x94, size: 0x4, def value: None
  float_t ___smoothCameraThirdPersonEulerAnglesX;

  /// @brief Field smoothCameraThirdPersonEulerAnglesY, offset: 0x98, size: 0x4, def value: None
  float_t ___smoothCameraThirdPersonEulerAnglesY;

  /// @brief Field smoothCameraThirdPersonEulerAnglesZ, offset: 0x9c, size: 0x4, def value: None
  float_t ___smoothCameraThirdPersonEulerAnglesZ;

  /// @brief Field smoothCameraThirdPersonEnabled, offset: 0xa0, size: 0x4, def value: None
  int32_t ___smoothCameraThirdPersonEnabled;

  /// @brief Field smoothCameraRotationSmooth, offset: 0xa4, size: 0x4, def value: None
  float_t ___smoothCameraRotationSmooth;

  /// @brief Field smoothCameraPositionSmooth, offset: 0xa8, size: 0x4, def value: None
  float_t ___smoothCameraPositionSmooth;

  /// @brief Field useCustomServerEnvironment, offset: 0xac, size: 0x1, def value: None
  bool ___useCustomServerEnvironment;

  /// @brief Field forceGameLiftServerEnvironment, offset: 0xad, size: 0x1, def value: None
  bool ___forceGameLiftServerEnvironment;

  /// @brief Field customServerHostName, offset: 0xb0, size: 0x8, def value: None
  ::StringW ___customServerHostName;

  /// @brief Field useFixedFoveatedRenderingDuringGameplay, offset: 0xb8, size: 0x1, def value: None
  bool ___useFixedFoveatedRenderingDuringGameplay;

  /// @brief Field gpuLevel, offset: 0xbc, size: 0x4, def value: None
  int32_t ___gpuLevel;

  /// @brief Field cpuLevel, offset: 0xc0, size: 0x4, def value: None
  int32_t ___cpuLevel;

  /// @brief Field targetFramerate, offset: 0xc4, size: 0x4, def value: None
  float_t ___targetFramerate;

  /// @brief Field volume, offset: 0xc8, size: 0x4, def value: None
  float_t ___volume;

  /// @brief Field ambientVolumeScale, offset: 0xcc, size: 0x4, def value: None
  float_t ___ambientVolumeScale;

  /// @brief Field controllersRumbleEnabled, offset: 0xd0, size: 0x1, def value: None
  bool ___controllersRumbleEnabled;

  /// @brief Field enableAlphaFeatures, offset: 0xd4, size: 0x4, def value: None
  int32_t ___enableAlphaFeatures;

  /// @brief Field pauseButtonPressDurationLevel, offset: 0xd8, size: 0x4, def value: None
  int32_t ___pauseButtonPressDurationLevel;

  /// @brief Field maxShockwaveParticles, offset: 0xdc, size: 0x4, def value: None
  int32_t ___maxShockwaveParticles;

  /// @brief Field overrideAudioLatency, offset: 0xe0, size: 0x1, def value: None
  bool ___overrideAudioLatency;

  /// @brief Field audioLatency, offset: 0xe4, size: 0x4, def value: None
  float_t ___audioLatency;

  /// @brief Field maxNumberOfCutSoundEffects, offset: 0xe8, size: 0x4, def value: None
  int32_t ___maxNumberOfCutSoundEffects;

  /// @brief Field language, offset: 0xf0, size: 0x8, def value: None
  ::StringW ___language;

  /// @brief Field enableFPSCounter, offset: 0xf8, size: 0x1, def value: None
  bool ___enableFPSCounter;

  /// @brief Field enableFPSRecorder, offset: 0xf9, size: 0x1, def value: None
  bool ___enableFPSRecorder;

  /// @brief Field enableMemoryTracker, offset: 0xfa, size: 0x1, def value: None
  bool ___enableMemoryTracker;

  /// @brief Field wasUpdatedFrom, offset: 0xfb, size: 0x1, def value: None
  bool ___wasUpdatedFrom;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::GameSettings::LegacySettingsModel, 0x100>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___windowResolutionWidth) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___windowResolutionHeight) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___editorResolutionWidth) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___editorResolutionHeight) == 0x24, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___windowMode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___vrResolutionScale) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___menuVRResolutionScaleMultiplier) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___antiAliasingLevel) == 0x34, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___mirrorGraphicsSettings) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___mainEffectGraphicsSettings) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___bloomGraphicsSettings) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___smokeGraphicsSettings) == 0x44, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___burnMarkTrailsEnabled) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___screenDisplacementEffectsEnabled) == 0x49, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___obstaclesQuality) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___performancePresetKey) == 0x50, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___roomCenterX) == 0x58, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___roomCenterY) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___roomCenterZ) == 0x60, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___roomRotation) == 0x64, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___controllerPositionX) == 0x68, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___controllerPositionY) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___controllerPositionZ) == 0x70, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___controllerRotationX) == 0x74, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___controllerRotationY) == 0x78, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___controllerRotationZ) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___smoothCameraEnabled) == 0x80, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___smoothCameraFieldOfView) == 0x84, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___smoothCameraThirdPersonPositionX) == 0x88, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___smoothCameraThirdPersonPositionY) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___smoothCameraThirdPersonPositionZ) == 0x90, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___smoothCameraThirdPersonEulerAnglesX) == 0x94, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___smoothCameraThirdPersonEulerAnglesY) == 0x98, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___smoothCameraThirdPersonEulerAnglesZ) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___smoothCameraThirdPersonEnabled) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___smoothCameraRotationSmooth) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___smoothCameraPositionSmooth) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___useCustomServerEnvironment) == 0xac, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___forceGameLiftServerEnvironment) == 0xad, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___customServerHostName) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___useFixedFoveatedRenderingDuringGameplay) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___gpuLevel) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___cpuLevel) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___targetFramerate) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___volume) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___ambientVolumeScale) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___controllersRumbleEnabled) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___enableAlphaFeatures) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___pauseButtonPressDurationLevel) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___maxShockwaveParticles) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___overrideAudioLatency) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___audioLatency) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___maxNumberOfCutSoundEffects) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___language) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___enableFPSCounter) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___enableFPSRecorder) == 0xf9, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___enableMemoryTracker) == 0xfa, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacySettingsModel, ___wasUpdatedFrom) == 0xfb, "Offset mismatch!");

} // namespace BeatSaber::GameSettings
NEED_NO_BOX(::BeatSaber::GameSettings::LegacySettingsModel);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::GameSettings::LegacySettingsModel*, "BeatSaber.GameSettings", "LegacySettingsModel");
