#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MainSettingsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__ObstaclesQuality_def.hpp"
#include "GlobalNamespace/zzzz__PerformancePreset_def.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MainSettingsModelSO)
namespace GlobalNamespace {
class BoolSO;
}
namespace GlobalNamespace {
class FloatSO;
}
namespace GlobalNamespace {
class ISaveData;
}
namespace GlobalNamespace {
class IntSO;
}
namespace GlobalNamespace {
class LanguageSO;
}
namespace GlobalNamespace {
class ObstaclesQualitySO;
}
namespace GlobalNamespace {
class PerformancePreset;
}
namespace GlobalNamespace {
class StringSO;
}
namespace GlobalNamespace {
class Vector2IntSO;
}
namespace GlobalNamespace {
class Vector3SO;
}
namespace GlobalNamespace {
class __MainSettingsModelSO__Config;
}
namespace GlobalNamespace {
struct __MainSettingsModelSO__WindowMode;
}
namespace GlobalNamespace {
struct __MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
struct __MainSettingsModelSO__WindowMode;
}
namespace GlobalNamespace {
class MainSettingsModelSO;
}
namespace GlobalNamespace {
class __MainSettingsModelSO__Config;
}
namespace GlobalNamespace {
struct __MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__MainSettingsModelSO__WindowMode);
MARK_REF_PTR_T(::GlobalNamespace::MainSettingsModelSO);
MARK_REF_PTR_T(::GlobalNamespace::__MainSettingsModelSO__Config);
MARK_VAL_T(::GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71);
// Type: ::WindowMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4433))
// CS Name: ::MainSettingsModelSO::WindowMode
struct CORDL_TYPE __MainSettingsModelSO__WindowMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____MainSettingsModelSO__WindowMode_Unwrapped
  enum struct ____MainSettingsModelSO__WindowMode_Unwrapped : int32_t {
    __E_Windowed = static_cast<int32_t>(0x0),
    __E_Fullscreen = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____MainSettingsModelSO__WindowMode_Unwrapped() const noexcept {
    return static_cast<____MainSettingsModelSO__WindowMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MainSettingsModelSO__WindowMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MainSettingsModelSO__WindowMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Windowed value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__MainSettingsModelSO__WindowMode const Windowed;

  /// @brief Field Fullscreen value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__MainSettingsModelSO__WindowMode const Fullscreen;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MainSettingsModelSO__WindowMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__WindowMode, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Config
// SizeInfo { instance_size: 256, native_size: -1, calculated_instance_size: 256, calculated_native_size: 251, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(4433)), TypeDefinitionIndex(TypeDefinitionIndex(4442))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4434))
// CS Name: ::MainSettingsModelSO::Config*
class CORDL_TYPE __MainSettingsModelSO__Config : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0x10, size 0x8
  __declspec(property(get = __get_version, put = __set_version))::StringW version;

  /// @brief Field windowResolutionWidth, offset 0x18, size 0x4
  __declspec(property(get = __get_windowResolutionWidth, put = __set_windowResolutionWidth)) int32_t windowResolutionWidth;

  /// @brief Field windowResolutionHeight, offset 0x1c, size 0x4
  __declspec(property(get = __get_windowResolutionHeight, put = __set_windowResolutionHeight)) int32_t windowResolutionHeight;

  /// @brief Field editorResolutionWidth, offset 0x20, size 0x4
  __declspec(property(get = __get_editorResolutionWidth, put = __set_editorResolutionWidth)) int32_t editorResolutionWidth;

  /// @brief Field editorResolutionHeight, offset 0x24, size 0x4
  __declspec(property(get = __get_editorResolutionHeight, put = __set_editorResolutionHeight)) int32_t editorResolutionHeight;

  /// @brief Field windowMode, offset 0x28, size 0x4
  __declspec(property(get = __get_windowMode, put = __set_windowMode))::GlobalNamespace::__MainSettingsModelSO__WindowMode windowMode;

  /// @brief Field vrResolutionScale, offset 0x2c, size 0x4
  __declspec(property(get = __get_vrResolutionScale, put = __set_vrResolutionScale)) float_t vrResolutionScale;

  /// @brief Field menuVRResolutionScaleMultiplier, offset 0x30, size 0x4
  __declspec(property(get = __get_menuVRResolutionScaleMultiplier, put = __set_menuVRResolutionScaleMultiplier)) float_t menuVRResolutionScaleMultiplier;

  /// @brief Field antiAliasingLevel, offset 0x34, size 0x4
  __declspec(property(get = __get_antiAliasingLevel, put = __set_antiAliasingLevel)) int32_t antiAliasingLevel;

  /// @brief Field mirrorGraphicsSettings, offset 0x38, size 0x4
  __declspec(property(get = __get_mirrorGraphicsSettings, put = __set_mirrorGraphicsSettings)) int32_t mirrorGraphicsSettings;

  /// @brief Field mainEffectGraphicsSettings, offset 0x3c, size 0x4
  __declspec(property(get = __get_mainEffectGraphicsSettings, put = __set_mainEffectGraphicsSettings)) int32_t mainEffectGraphicsSettings;

  /// @brief Field bloomGraphicsSettings, offset 0x40, size 0x4
  __declspec(property(get = __get_bloomGraphicsSettings, put = __set_bloomGraphicsSettings)) int32_t bloomGraphicsSettings;

  /// @brief Field smokeGraphicsSettings, offset 0x44, size 0x4
  __declspec(property(get = __get_smokeGraphicsSettings, put = __set_smokeGraphicsSettings)) int32_t smokeGraphicsSettings;

  /// @brief Field burnMarkTrailsEnabled, offset 0x48, size 0x1
  __declspec(property(get = __get_burnMarkTrailsEnabled, put = __set_burnMarkTrailsEnabled)) bool burnMarkTrailsEnabled;

  /// @brief Field screenDisplacementEffectsEnabled, offset 0x49, size 0x1
  __declspec(property(get = __get_screenDisplacementEffectsEnabled, put = __set_screenDisplacementEffectsEnabled)) bool screenDisplacementEffectsEnabled;

  /// @brief Field obstaclesQuality, offset 0x4c, size 0x4
  __declspec(property(get = __get_obstaclesQuality, put = __set_obstaclesQuality))::GlobalNamespace::ObstaclesQuality obstaclesQuality;

  /// @brief Field performancePresetKey, offset 0x50, size 0x8
  __declspec(property(get = __get_performancePresetKey, put = __set_performancePresetKey))::StringW performancePresetKey;

  /// @brief Field roomCenterX, offset 0x58, size 0x4
  __declspec(property(get = __get_roomCenterX, put = __set_roomCenterX)) float_t roomCenterX;

  /// @brief Field roomCenterY, offset 0x5c, size 0x4
  __declspec(property(get = __get_roomCenterY, put = __set_roomCenterY)) float_t roomCenterY;

  /// @brief Field roomCenterZ, offset 0x60, size 0x4
  __declspec(property(get = __get_roomCenterZ, put = __set_roomCenterZ)) float_t roomCenterZ;

  /// @brief Field roomRotation, offset 0x64, size 0x4
  __declspec(property(get = __get_roomRotation, put = __set_roomRotation)) float_t roomRotation;

  /// @brief Field controllerPositionX, offset 0x68, size 0x4
  __declspec(property(get = __get_controllerPositionX, put = __set_controllerPositionX)) float_t controllerPositionX;

  /// @brief Field controllerPositionY, offset 0x6c, size 0x4
  __declspec(property(get = __get_controllerPositionY, put = __set_controllerPositionY)) float_t controllerPositionY;

  /// @brief Field controllerPositionZ, offset 0x70, size 0x4
  __declspec(property(get = __get_controllerPositionZ, put = __set_controllerPositionZ)) float_t controllerPositionZ;

  /// @brief Field controllerRotationX, offset 0x74, size 0x4
  __declspec(property(get = __get_controllerRotationX, put = __set_controllerRotationX)) float_t controllerRotationX;

  /// @brief Field controllerRotationY, offset 0x78, size 0x4
  __declspec(property(get = __get_controllerRotationY, put = __set_controllerRotationY)) float_t controllerRotationY;

  /// @brief Field controllerRotationZ, offset 0x7c, size 0x4
  __declspec(property(get = __get_controllerRotationZ, put = __set_controllerRotationZ)) float_t controllerRotationZ;

  /// @brief Field smoothCameraEnabled, offset 0x80, size 0x4
  __declspec(property(get = __get_smoothCameraEnabled, put = __set_smoothCameraEnabled)) int32_t smoothCameraEnabled;

  /// @brief Field smoothCameraFieldOfView, offset 0x84, size 0x4
  __declspec(property(get = __get_smoothCameraFieldOfView, put = __set_smoothCameraFieldOfView)) float_t smoothCameraFieldOfView;

  /// @brief Field smoothCameraThirdPersonPositionX, offset 0x88, size 0x4
  __declspec(property(get = __get_smoothCameraThirdPersonPositionX, put = __set_smoothCameraThirdPersonPositionX)) float_t smoothCameraThirdPersonPositionX;

  /// @brief Field smoothCameraThirdPersonPositionY, offset 0x8c, size 0x4
  __declspec(property(get = __get_smoothCameraThirdPersonPositionY, put = __set_smoothCameraThirdPersonPositionY)) float_t smoothCameraThirdPersonPositionY;

  /// @brief Field smoothCameraThirdPersonPositionZ, offset 0x90, size 0x4
  __declspec(property(get = __get_smoothCameraThirdPersonPositionZ, put = __set_smoothCameraThirdPersonPositionZ)) float_t smoothCameraThirdPersonPositionZ;

  /// @brief Field smoothCameraThirdPersonEulerAnglesX, offset 0x94, size 0x4
  __declspec(property(get = __get_smoothCameraThirdPersonEulerAnglesX, put = __set_smoothCameraThirdPersonEulerAnglesX)) float_t smoothCameraThirdPersonEulerAnglesX;

  /// @brief Field smoothCameraThirdPersonEulerAnglesY, offset 0x98, size 0x4
  __declspec(property(get = __get_smoothCameraThirdPersonEulerAnglesY, put = __set_smoothCameraThirdPersonEulerAnglesY)) float_t smoothCameraThirdPersonEulerAnglesY;

  /// @brief Field smoothCameraThirdPersonEulerAnglesZ, offset 0x9c, size 0x4
  __declspec(property(get = __get_smoothCameraThirdPersonEulerAnglesZ, put = __set_smoothCameraThirdPersonEulerAnglesZ)) float_t smoothCameraThirdPersonEulerAnglesZ;

  /// @brief Field smoothCameraThirdPersonEnabled, offset 0xa0, size 0x4
  __declspec(property(get = __get_smoothCameraThirdPersonEnabled, put = __set_smoothCameraThirdPersonEnabled)) int32_t smoothCameraThirdPersonEnabled;

  /// @brief Field smoothCameraRotationSmooth, offset 0xa4, size 0x4
  __declspec(property(get = __get_smoothCameraRotationSmooth, put = __set_smoothCameraRotationSmooth)) float_t smoothCameraRotationSmooth;

  /// @brief Field smoothCameraPositionSmooth, offset 0xa8, size 0x4
  __declspec(property(get = __get_smoothCameraPositionSmooth, put = __set_smoothCameraPositionSmooth)) float_t smoothCameraPositionSmooth;

  /// @brief Field useCustomServerEnvironment, offset 0xac, size 0x1
  __declspec(property(get = __get_useCustomServerEnvironment, put = __set_useCustomServerEnvironment)) bool useCustomServerEnvironment;

  /// @brief Field forceGameLiftServerEnvironment, offset 0xad, size 0x1
  __declspec(property(get = __get_forceGameLiftServerEnvironment, put = __set_forceGameLiftServerEnvironment)) bool forceGameLiftServerEnvironment;

  /// @brief Field customServerHostName, offset 0xb0, size 0x8
  __declspec(property(get = __get_customServerHostName, put = __set_customServerHostName))::StringW customServerHostName;

  /// @brief Field useFixedFoveatedRenderingDuringGameplay, offset 0xb8, size 0x1
  __declspec(property(get = __get_useFixedFoveatedRenderingDuringGameplay, put = __set_useFixedFoveatedRenderingDuringGameplay)) bool useFixedFoveatedRenderingDuringGameplay;

  /// @brief Field gpuLevel, offset 0xbc, size 0x4
  __declspec(property(get = __get_gpuLevel, put = __set_gpuLevel)) int32_t gpuLevel;

  /// @brief Field cpuLevel, offset 0xc0, size 0x4
  __declspec(property(get = __get_cpuLevel, put = __set_cpuLevel)) int32_t cpuLevel;

  /// @brief Field targetFramerate, offset 0xc4, size 0x4
  __declspec(property(get = __get_targetFramerate, put = __set_targetFramerate)) float_t targetFramerate;

  /// @brief Field volume, offset 0xc8, size 0x4
  __declspec(property(get = __get_volume, put = __set_volume)) float_t volume;

  /// @brief Field ambientVolumeScale, offset 0xcc, size 0x4
  __declspec(property(get = __get_ambientVolumeScale, put = __set_ambientVolumeScale)) float_t ambientVolumeScale;

  /// @brief Field controllersRumbleEnabled, offset 0xd0, size 0x1
  __declspec(property(get = __get_controllersRumbleEnabled, put = __set_controllersRumbleEnabled)) bool controllersRumbleEnabled;

  /// @brief Field enableAlphaFeatures, offset 0xd4, size 0x4
  __declspec(property(get = __get_enableAlphaFeatures, put = __set_enableAlphaFeatures)) int32_t enableAlphaFeatures;

  /// @brief Field pauseButtonPressDurationLevel, offset 0xd8, size 0x4
  __declspec(property(get = __get_pauseButtonPressDurationLevel, put = __set_pauseButtonPressDurationLevel)) int32_t pauseButtonPressDurationLevel;

  /// @brief Field maxShockwaveParticles, offset 0xdc, size 0x4
  __declspec(property(get = __get_maxShockwaveParticles, put = __set_maxShockwaveParticles)) int32_t maxShockwaveParticles;

  /// @brief Field overrideAudioLatency, offset 0xe0, size 0x1
  __declspec(property(get = __get_overrideAudioLatency, put = __set_overrideAudioLatency)) bool overrideAudioLatency;

  /// @brief Field audioLatency, offset 0xe4, size 0x4
  __declspec(property(get = __get_audioLatency, put = __set_audioLatency)) float_t audioLatency;

  /// @brief Field maxNumberOfCutSoundEffects, offset 0xe8, size 0x4
  __declspec(property(get = __get_maxNumberOfCutSoundEffects, put = __set_maxNumberOfCutSoundEffects)) int32_t maxNumberOfCutSoundEffects;

  /// @brief Field language, offset 0xf0, size 0x8
  __declspec(property(get = __get_language, put = __set_language))::StringW language;

  /// @brief Field enableFPSCounter, offset 0xf8, size 0x1
  __declspec(property(get = __get_enableFPSCounter, put = __set_enableFPSCounter)) bool enableFPSCounter;

  /// @brief Field enableFPSRecorder, offset 0xf9, size 0x1
  __declspec(property(get = __get_enableFPSRecorder, put = __set_enableFPSRecorder)) bool enableFPSRecorder;

  /// @brief Field enableMemoryTracker, offset 0xfa, size 0x1
  __declspec(property(get = __get_enableMemoryTracker, put = __set_enableMemoryTracker)) bool enableMemoryTracker;

  constexpr ::StringW& __get_version();

  constexpr ::StringW const& __get_version() const;

  constexpr void __set_version(::StringW value);

  constexpr int32_t& __get_windowResolutionWidth();

  constexpr int32_t const& __get_windowResolutionWidth() const;

  constexpr void __set_windowResolutionWidth(int32_t value);

  constexpr int32_t& __get_windowResolutionHeight();

  constexpr int32_t const& __get_windowResolutionHeight() const;

  constexpr void __set_windowResolutionHeight(int32_t value);

  constexpr int32_t& __get_editorResolutionWidth();

  constexpr int32_t const& __get_editorResolutionWidth() const;

  constexpr void __set_editorResolutionWidth(int32_t value);

  constexpr int32_t& __get_editorResolutionHeight();

  constexpr int32_t const& __get_editorResolutionHeight() const;

  constexpr void __set_editorResolutionHeight(int32_t value);

  constexpr ::GlobalNamespace::__MainSettingsModelSO__WindowMode& __get_windowMode();

  constexpr ::GlobalNamespace::__MainSettingsModelSO__WindowMode const& __get_windowMode() const;

  constexpr void __set_windowMode(::GlobalNamespace::__MainSettingsModelSO__WindowMode value);

  constexpr float_t& __get_vrResolutionScale();

  constexpr float_t const& __get_vrResolutionScale() const;

  constexpr void __set_vrResolutionScale(float_t value);

  constexpr float_t& __get_menuVRResolutionScaleMultiplier();

  constexpr float_t const& __get_menuVRResolutionScaleMultiplier() const;

  constexpr void __set_menuVRResolutionScaleMultiplier(float_t value);

  constexpr int32_t& __get_antiAliasingLevel();

  constexpr int32_t const& __get_antiAliasingLevel() const;

  constexpr void __set_antiAliasingLevel(int32_t value);

  constexpr int32_t& __get_mirrorGraphicsSettings();

  constexpr int32_t const& __get_mirrorGraphicsSettings() const;

  constexpr void __set_mirrorGraphicsSettings(int32_t value);

  constexpr int32_t& __get_mainEffectGraphicsSettings();

  constexpr int32_t const& __get_mainEffectGraphicsSettings() const;

  constexpr void __set_mainEffectGraphicsSettings(int32_t value);

  constexpr int32_t& __get_bloomGraphicsSettings();

  constexpr int32_t const& __get_bloomGraphicsSettings() const;

  constexpr void __set_bloomGraphicsSettings(int32_t value);

  constexpr int32_t& __get_smokeGraphicsSettings();

  constexpr int32_t const& __get_smokeGraphicsSettings() const;

  constexpr void __set_smokeGraphicsSettings(int32_t value);

  constexpr bool& __get_burnMarkTrailsEnabled();

  constexpr bool const& __get_burnMarkTrailsEnabled() const;

  constexpr void __set_burnMarkTrailsEnabled(bool value);

  constexpr bool& __get_screenDisplacementEffectsEnabled();

  constexpr bool const& __get_screenDisplacementEffectsEnabled() const;

  constexpr void __set_screenDisplacementEffectsEnabled(bool value);

  constexpr ::GlobalNamespace::ObstaclesQuality& __get_obstaclesQuality();

  constexpr ::GlobalNamespace::ObstaclesQuality const& __get_obstaclesQuality() const;

  constexpr void __set_obstaclesQuality(::GlobalNamespace::ObstaclesQuality value);

  constexpr ::StringW& __get_performancePresetKey();

  constexpr ::StringW const& __get_performancePresetKey() const;

  constexpr void __set_performancePresetKey(::StringW value);

  constexpr float_t& __get_roomCenterX();

  constexpr float_t const& __get_roomCenterX() const;

  constexpr void __set_roomCenterX(float_t value);

  constexpr float_t& __get_roomCenterY();

  constexpr float_t const& __get_roomCenterY() const;

  constexpr void __set_roomCenterY(float_t value);

  constexpr float_t& __get_roomCenterZ();

  constexpr float_t const& __get_roomCenterZ() const;

  constexpr void __set_roomCenterZ(float_t value);

  constexpr float_t& __get_roomRotation();

  constexpr float_t const& __get_roomRotation() const;

  constexpr void __set_roomRotation(float_t value);

  constexpr float_t& __get_controllerPositionX();

  constexpr float_t const& __get_controllerPositionX() const;

  constexpr void __set_controllerPositionX(float_t value);

  constexpr float_t& __get_controllerPositionY();

  constexpr float_t const& __get_controllerPositionY() const;

  constexpr void __set_controllerPositionY(float_t value);

  constexpr float_t& __get_controllerPositionZ();

  constexpr float_t const& __get_controllerPositionZ() const;

  constexpr void __set_controllerPositionZ(float_t value);

  constexpr float_t& __get_controllerRotationX();

  constexpr float_t const& __get_controllerRotationX() const;

  constexpr void __set_controllerRotationX(float_t value);

  constexpr float_t& __get_controllerRotationY();

  constexpr float_t const& __get_controllerRotationY() const;

  constexpr void __set_controllerRotationY(float_t value);

  constexpr float_t& __get_controllerRotationZ();

  constexpr float_t const& __get_controllerRotationZ() const;

  constexpr void __set_controllerRotationZ(float_t value);

  constexpr int32_t& __get_smoothCameraEnabled();

  constexpr int32_t const& __get_smoothCameraEnabled() const;

  constexpr void __set_smoothCameraEnabled(int32_t value);

  constexpr float_t& __get_smoothCameraFieldOfView();

  constexpr float_t const& __get_smoothCameraFieldOfView() const;

  constexpr void __set_smoothCameraFieldOfView(float_t value);

  constexpr float_t& __get_smoothCameraThirdPersonPositionX();

  constexpr float_t const& __get_smoothCameraThirdPersonPositionX() const;

  constexpr void __set_smoothCameraThirdPersonPositionX(float_t value);

  constexpr float_t& __get_smoothCameraThirdPersonPositionY();

  constexpr float_t const& __get_smoothCameraThirdPersonPositionY() const;

  constexpr void __set_smoothCameraThirdPersonPositionY(float_t value);

  constexpr float_t& __get_smoothCameraThirdPersonPositionZ();

  constexpr float_t const& __get_smoothCameraThirdPersonPositionZ() const;

  constexpr void __set_smoothCameraThirdPersonPositionZ(float_t value);

  constexpr float_t& __get_smoothCameraThirdPersonEulerAnglesX();

  constexpr float_t const& __get_smoothCameraThirdPersonEulerAnglesX() const;

  constexpr void __set_smoothCameraThirdPersonEulerAnglesX(float_t value);

  constexpr float_t& __get_smoothCameraThirdPersonEulerAnglesY();

  constexpr float_t const& __get_smoothCameraThirdPersonEulerAnglesY() const;

  constexpr void __set_smoothCameraThirdPersonEulerAnglesY(float_t value);

  constexpr float_t& __get_smoothCameraThirdPersonEulerAnglesZ();

  constexpr float_t const& __get_smoothCameraThirdPersonEulerAnglesZ() const;

  constexpr void __set_smoothCameraThirdPersonEulerAnglesZ(float_t value);

  constexpr int32_t& __get_smoothCameraThirdPersonEnabled();

  constexpr int32_t const& __get_smoothCameraThirdPersonEnabled() const;

  constexpr void __set_smoothCameraThirdPersonEnabled(int32_t value);

  constexpr float_t& __get_smoothCameraRotationSmooth();

  constexpr float_t const& __get_smoothCameraRotationSmooth() const;

  constexpr void __set_smoothCameraRotationSmooth(float_t value);

  constexpr float_t& __get_smoothCameraPositionSmooth();

  constexpr float_t const& __get_smoothCameraPositionSmooth() const;

  constexpr void __set_smoothCameraPositionSmooth(float_t value);

  constexpr bool& __get_useCustomServerEnvironment();

  constexpr bool const& __get_useCustomServerEnvironment() const;

  constexpr void __set_useCustomServerEnvironment(bool value);

  constexpr bool& __get_forceGameLiftServerEnvironment();

  constexpr bool const& __get_forceGameLiftServerEnvironment() const;

  constexpr void __set_forceGameLiftServerEnvironment(bool value);

  constexpr ::StringW& __get_customServerHostName();

  constexpr ::StringW const& __get_customServerHostName() const;

  constexpr void __set_customServerHostName(::StringW value);

  constexpr bool& __get_useFixedFoveatedRenderingDuringGameplay();

  constexpr bool const& __get_useFixedFoveatedRenderingDuringGameplay() const;

  constexpr void __set_useFixedFoveatedRenderingDuringGameplay(bool value);

  constexpr int32_t& __get_gpuLevel();

  constexpr int32_t const& __get_gpuLevel() const;

  constexpr void __set_gpuLevel(int32_t value);

  constexpr int32_t& __get_cpuLevel();

  constexpr int32_t const& __get_cpuLevel() const;

  constexpr void __set_cpuLevel(int32_t value);

  constexpr float_t& __get_targetFramerate();

  constexpr float_t const& __get_targetFramerate() const;

  constexpr void __set_targetFramerate(float_t value);

  constexpr float_t& __get_volume();

  constexpr float_t const& __get_volume() const;

  constexpr void __set_volume(float_t value);

  constexpr float_t& __get_ambientVolumeScale();

  constexpr float_t const& __get_ambientVolumeScale() const;

  constexpr void __set_ambientVolumeScale(float_t value);

  constexpr bool& __get_controllersRumbleEnabled();

  constexpr bool const& __get_controllersRumbleEnabled() const;

  constexpr void __set_controllersRumbleEnabled(bool value);

  constexpr int32_t& __get_enableAlphaFeatures();

  constexpr int32_t const& __get_enableAlphaFeatures() const;

  constexpr void __set_enableAlphaFeatures(int32_t value);

  constexpr int32_t& __get_pauseButtonPressDurationLevel();

  constexpr int32_t const& __get_pauseButtonPressDurationLevel() const;

  constexpr void __set_pauseButtonPressDurationLevel(int32_t value);

  constexpr int32_t& __get_maxShockwaveParticles();

  constexpr int32_t const& __get_maxShockwaveParticles() const;

  constexpr void __set_maxShockwaveParticles(int32_t value);

  constexpr bool& __get_overrideAudioLatency();

  constexpr bool const& __get_overrideAudioLatency() const;

  constexpr void __set_overrideAudioLatency(bool value);

  constexpr float_t& __get_audioLatency();

  constexpr float_t const& __get_audioLatency() const;

  constexpr void __set_audioLatency(float_t value);

  constexpr int32_t& __get_maxNumberOfCutSoundEffects();

  constexpr int32_t const& __get_maxNumberOfCutSoundEffects() const;

  constexpr void __set_maxNumberOfCutSoundEffects(int32_t value);

  constexpr ::StringW& __get_language();

  constexpr ::StringW const& __get_language() const;

  constexpr void __set_language(::StringW value);

  constexpr bool& __get_enableFPSCounter();

  constexpr bool const& __get_enableFPSCounter() const;

  constexpr void __set_enableFPSCounter(bool value);

  constexpr bool& __get_enableFPSRecorder();

  constexpr bool const& __get_enableFPSRecorder() const;

  constexpr void __set_enableFPSRecorder(bool value);

  constexpr bool& __get_enableMemoryTracker();

  constexpr bool const& __get_enableMemoryTracker() const;

  constexpr void __set_enableMemoryTracker(bool value);

  static inline ::GlobalNamespace::__MainSettingsModelSO__Config* New_ctor();

  /// @brief Method .ctor, addr 0x234f6d0, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__MainSettingsModelSO__Config* New_ctor(::System::ValueTuple_2<::StringW, ::GlobalNamespace::PerformancePreset*> performancePresetToLoad);

  /// @brief Method .ctor, addr 0x234f7ac, size 0xfc, virtual false, abstract: false, final false
  inline void _ctor(::System::ValueTuple_2<::StringW, ::GlobalNamespace::PerformancePreset*> performancePresetToLoad);

  /// @brief Method ApplyPerformancePreset, addr 0x234f8a8, size 0x1c0, virtual false, abstract: false, final false
  inline void ApplyPerformancePreset(::System::ValueTuple_2<::StringW, ::GlobalNamespace::PerformancePreset*> performancePresetToLoad);

  // Ctor Parameters [CppParam { name: "", ty: "__MainSettingsModelSO__Config", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MainSettingsModelSO__Config(__MainSettingsModelSO__Config&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MainSettingsModelSO__Config", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MainSettingsModelSO__Config(__MainSettingsModelSO__Config const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MainSettingsModelSO__Config();

public:
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
  ::GlobalNamespace::__MainSettingsModelSO__WindowMode ___windowMode;

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
  ::GlobalNamespace::ObstaclesQuality ___obstaclesQuality;

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MainSettingsModelSO__Config, 0x100>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___windowResolutionWidth) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___windowResolutionHeight) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___editorResolutionWidth) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___editorResolutionHeight) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___windowMode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___vrResolutionScale) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___menuVRResolutionScaleMultiplier) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___antiAliasingLevel) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___mirrorGraphicsSettings) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___mainEffectGraphicsSettings) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___bloomGraphicsSettings) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___smokeGraphicsSettings) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___burnMarkTrailsEnabled) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___screenDisplacementEffectsEnabled) == 0x49, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___obstaclesQuality) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___performancePresetKey) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___roomCenterX) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___roomCenterY) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___roomCenterZ) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___roomRotation) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___controllerPositionX) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___controllerPositionY) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___controllerPositionZ) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___controllerRotationX) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___controllerRotationY) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___controllerRotationZ) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___smoothCameraEnabled) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___smoothCameraFieldOfView) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___smoothCameraThirdPersonPositionX) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___smoothCameraThirdPersonPositionY) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___smoothCameraThirdPersonPositionZ) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___smoothCameraThirdPersonEulerAnglesX) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___smoothCameraThirdPersonEulerAnglesY) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___smoothCameraThirdPersonEulerAnglesZ) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___smoothCameraThirdPersonEnabled) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___smoothCameraRotationSmooth) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___smoothCameraPositionSmooth) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___useCustomServerEnvironment) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___forceGameLiftServerEnvironment) == 0xad, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___customServerHostName) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___useFixedFoveatedRenderingDuringGameplay) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___gpuLevel) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___cpuLevel) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___targetFramerate) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___volume) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___ambientVolumeScale) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___controllersRumbleEnabled) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___enableAlphaFeatures) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___pauseButtonPressDurationLevel) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___maxShockwaveParticles) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___overrideAudioLatency) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___audioLatency) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___maxNumberOfCutSoundEffects) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___language) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___enableFPSCounter) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___enableFPSRecorder) == 0xf9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO__Config, ___enableMemoryTracker) == 0xfa, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<ForceApplyPerformancePresetAsync>d__71
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(2507)), TypeDefinitionIndex(TypeDefinitionIndex(4443)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 896 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2507), inst: 5315 }),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 870 }), TypeDefinitionIndex(TypeDefinitionIndex(3401))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4435)) CS
// Name: ::MainSettingsModelSO::<ForceApplyPerformancePresetAsync>d__71
struct CORDL_TYPE __MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0x234fe44, size 0x358, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2350378, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "config", ty: "::GlobalNamespace::__MainSettingsModelSO__Config*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>>", modifiers: "",
  // def_value: None }, CppParam { name: "__7__wrap1", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PerformancePreset*>", modifiers: "", def_value: None }]
  constexpr __MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::__MainSettingsModelSO__Config* config,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW, ::GlobalNamespace::PerformancePreset*>> __u__1, ::StringW __7__wrap1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PerformancePreset*> __u__2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field config, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__MainSettingsModelSO__Config* config;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW, ::GlobalNamespace::PerformancePreset*>> __u__1;

  /// @brief Field <>7__wrap1, offset: 0x30, size: 0x8, def value: None
  ::StringW __7__wrap1;

  /// @brief Field <>u__2, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PerformancePreset*> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71, config) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71, __u__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71, __7__wrap1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71, __u__2) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MainSettingsModelSO
// SizeInfo { instance_size: 424, native_size: -1, calculated_instance_size: 424, calculated_native_size: 424, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448)), TypeDefinitionIndex(TypeDefinitionIndex(4443)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2507), inst: 5315
// }), TypeDefinitionIndex(TypeDefinitionIndex(15857)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 870 }), TypeDefinitionIndex(TypeDefinitionIndex(2507))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(4436)) CS Name: ::MainSettingsModelSO*
class CORDL_TYPE MainSettingsModelSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using _ForceApplyPerformancePresetAsync_d__71 = ::GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71;

  using Config = ::GlobalNamespace::__MainSettingsModelSO__Config;

  using WindowMode = ::GlobalNamespace::__MainSettingsModelSO__WindowMode;

  /// @brief Field vrResolutionScale, offset 0x18, size 0x8
  __declspec(property(get = __get_vrResolutionScale, put = __set_vrResolutionScale))::GlobalNamespace::FloatSO* vrResolutionScale;

  /// @brief Field menuVRResolutionScaleMultiplier, offset 0x20, size 0x8
  __declspec(property(get = __get_menuVRResolutionScaleMultiplier, put = __set_menuVRResolutionScaleMultiplier))::GlobalNamespace::FloatSO* menuVRResolutionScaleMultiplier;

  /// @brief Field windowResolution, offset 0x28, size 0x8
  __declspec(property(get = __get_windowResolution, put = __set_windowResolution))::GlobalNamespace::Vector2IntSO* windowResolution;

  /// @brief Field editorWindowResolution, offset 0x30, size 0x8
  __declspec(property(get = __get_editorWindowResolution, put = __set_editorWindowResolution))::GlobalNamespace::Vector2IntSO* editorWindowResolution;

  /// @brief Field fullscreen, offset 0x38, size 0x8
  __declspec(property(get = __get_fullscreen, put = __set_fullscreen))::GlobalNamespace::BoolSO* fullscreen;

  /// @brief Field antiAliasingLevel, offset 0x40, size 0x8
  __declspec(property(get = __get_antiAliasingLevel, put = __set_antiAliasingLevel))::GlobalNamespace::IntSO* antiAliasingLevel;

  /// @brief Field volume, offset 0x48, size 0x8
  __declspec(property(get = __get_volume, put = __set_volume))::GlobalNamespace::FloatSO* volume;

  /// @brief Field ambientVolumeScale, offset 0x50, size 0x8
  __declspec(property(get = __get_ambientVolumeScale, put = __set_ambientVolumeScale))::GlobalNamespace::FloatSO* ambientVolumeScale;

  /// @brief Field controllersRumbleEnabled, offset 0x58, size 0x8
  __declspec(property(get = __get_controllersRumbleEnabled, put = __set_controllersRumbleEnabled))::GlobalNamespace::BoolSO* controllersRumbleEnabled;

  /// @brief Field roomCenter, offset 0x60, size 0x8
  __declspec(property(get = __get_roomCenter, put = __set_roomCenter))::GlobalNamespace::Vector3SO* roomCenter;

  /// @brief Field roomRotation, offset 0x68, size 0x8
  __declspec(property(get = __get_roomRotation, put = __set_roomRotation))::GlobalNamespace::FloatSO* roomRotation;

  /// @brief Field controllerPosition, offset 0x70, size 0x8
  __declspec(property(get = __get_controllerPosition, put = __set_controllerPosition))::GlobalNamespace::Vector3SO* controllerPosition;

  /// @brief Field controllerRotation, offset 0x78, size 0x8
  __declspec(property(get = __get_controllerRotation, put = __set_controllerRotation))::GlobalNamespace::Vector3SO* controllerRotation;

  /// @brief Field mirrorGraphicsSettings, offset 0x80, size 0x8
  __declspec(property(get = __get_mirrorGraphicsSettings, put = __set_mirrorGraphicsSettings))::GlobalNamespace::IntSO* mirrorGraphicsSettings;

  /// @brief Field mainEffectGraphicsSettings, offset 0x88, size 0x8
  __declspec(property(get = __get_mainEffectGraphicsSettings, put = __set_mainEffectGraphicsSettings))::GlobalNamespace::IntSO* mainEffectGraphicsSettings;

  /// @brief Field bloomPrePassGraphicsSettings, offset 0x90, size 0x8
  __declspec(property(get = __get_bloomPrePassGraphicsSettings, put = __set_bloomPrePassGraphicsSettings))::GlobalNamespace::IntSO* bloomPrePassGraphicsSettings;

  /// @brief Field smokeGraphicsSettings, offset 0x98, size 0x8
  __declspec(property(get = __get_smokeGraphicsSettings, put = __set_smokeGraphicsSettings))::GlobalNamespace::BoolSO* smokeGraphicsSettings;

  /// @brief Field enableAlphaFeatures, offset 0xa0, size 0x8
  __declspec(property(get = __get_enableAlphaFeatures, put = __set_enableAlphaFeatures))::GlobalNamespace::BoolSO* enableAlphaFeatures;

  /// @brief Field pauseButtonPressDurationLevel, offset 0xa8, size 0x8
  __declspec(property(get = __get_pauseButtonPressDurationLevel, put = __set_pauseButtonPressDurationLevel))::GlobalNamespace::IntSO* pauseButtonPressDurationLevel;

  /// @brief Field burnMarkTrailsEnabled, offset 0xb0, size 0x8
  __declspec(property(get = __get_burnMarkTrailsEnabled, put = __set_burnMarkTrailsEnabled))::GlobalNamespace::BoolSO* burnMarkTrailsEnabled;

  /// @brief Field screenDisplacementEffectsEnabled, offset 0xb8, size 0x8
  __declspec(property(get = __get_screenDisplacementEffectsEnabled, put = __set_screenDisplacementEffectsEnabled))::GlobalNamespace::BoolSO* screenDisplacementEffectsEnabled;

  /// @brief Field obstaclesQuality, offset 0xc0, size 0x8
  __declspec(property(get = __get_obstaclesQuality, put = __set_obstaclesQuality))::GlobalNamespace::ObstaclesQualitySO* obstaclesQuality;

  /// @brief Field performancePresetKey, offset 0xc8, size 0x8
  __declspec(property(get = __get_performancePresetKey, put = __set_performancePresetKey))::GlobalNamespace::StringSO* performancePresetKey;

  /// @brief Field smoothCameraEnabled, offset 0xd0, size 0x8
  __declspec(property(get = __get_smoothCameraEnabled, put = __set_smoothCameraEnabled))::GlobalNamespace::BoolSO* smoothCameraEnabled;

  /// @brief Field smoothCameraFieldOfView, offset 0xd8, size 0x8
  __declspec(property(get = __get_smoothCameraFieldOfView, put = __set_smoothCameraFieldOfView))::GlobalNamespace::FloatSO* smoothCameraFieldOfView;

  /// @brief Field smoothCameraThirdPersonPosition, offset 0xe0, size 0x8
  __declspec(property(get = __get_smoothCameraThirdPersonPosition, put = __set_smoothCameraThirdPersonPosition))::GlobalNamespace::Vector3SO* smoothCameraThirdPersonPosition;

  /// @brief Field smoothCameraThirdPersonEulerAngles, offset 0xe8, size 0x8
  __declspec(property(get = __get_smoothCameraThirdPersonEulerAngles, put = __set_smoothCameraThirdPersonEulerAngles))::GlobalNamespace::Vector3SO* smoothCameraThirdPersonEulerAngles;

  /// @brief Field smoothCameraThirdPersonEnabled, offset 0xf0, size 0x8
  __declspec(property(get = __get_smoothCameraThirdPersonEnabled, put = __set_smoothCameraThirdPersonEnabled))::GlobalNamespace::BoolSO* smoothCameraThirdPersonEnabled;

  /// @brief Field smoothCameraRotationSmooth, offset 0xf8, size 0x8
  __declspec(property(get = __get_smoothCameraRotationSmooth, put = __set_smoothCameraRotationSmooth))::GlobalNamespace::FloatSO* smoothCameraRotationSmooth;

  /// @brief Field smoothCameraPositionSmooth, offset 0x100, size 0x8
  __declspec(property(get = __get_smoothCameraPositionSmooth, put = __set_smoothCameraPositionSmooth))::GlobalNamespace::FloatSO* smoothCameraPositionSmooth;

  /// @brief Field overrideAudioLatency, offset 0x108, size 0x8
  __declspec(property(get = __get_overrideAudioLatency, put = __set_overrideAudioLatency))::GlobalNamespace::BoolSO* overrideAudioLatency;

  /// @brief Field audioLatency, offset 0x110, size 0x8
  __declspec(property(get = __get_audioLatency, put = __set_audioLatency))::GlobalNamespace::FloatSO* audioLatency;

  /// @brief Field maxShockwaveParticles, offset 0x118, size 0x8
  __declspec(property(get = __get_maxShockwaveParticles, put = __set_maxShockwaveParticles))::GlobalNamespace::IntSO* maxShockwaveParticles;

  /// @brief Field maxNumberOfCutSoundEffects, offset 0x120, size 0x8
  __declspec(property(get = __get_maxNumberOfCutSoundEffects, put = __set_maxNumberOfCutSoundEffects))::GlobalNamespace::IntSO* maxNumberOfCutSoundEffects;

  /// @brief Field language, offset 0x128, size 0x8
  __declspec(property(get = __get_language, put = __set_language))::GlobalNamespace::LanguageSO* language;

  /// @brief Field useCustomServerEnvironment, offset 0x130, size 0x8
  __declspec(property(get = __get_useCustomServerEnvironment, put = __set_useCustomServerEnvironment))::GlobalNamespace::BoolSO* useCustomServerEnvironment;

  /// @brief Field forceGameLiftServerEnvironment, offset 0x138, size 0x8
  __declspec(property(get = __get_forceGameLiftServerEnvironment, put = __set_forceGameLiftServerEnvironment))::GlobalNamespace::BoolSO* forceGameLiftServerEnvironment;

  /// @brief Field customServerHostName, offset 0x140, size 0x8
  __declspec(property(get = __get_customServerHostName, put = __set_customServerHostName))::GlobalNamespace::StringSO* customServerHostName;

  /// @brief Field enableFPSCounter, offset 0x148, size 0x8
  __declspec(property(get = __get_enableFPSCounter, put = __set_enableFPSCounter))::GlobalNamespace::BoolSO* enableFPSCounter;

  /// @brief Field enableFPSRecorder, offset 0x150, size 0x8
  __declspec(property(get = __get_enableFPSRecorder, put = __set_enableFPSRecorder))::GlobalNamespace::BoolSO* enableFPSRecorder;

  /// @brief Field enableMemoryTracker, offset 0x158, size 0x8
  __declspec(property(get = __get_enableMemoryTracker, put = __set_enableMemoryTracker))::GlobalNamespace::BoolSO* enableMemoryTracker;

  /// @brief Field useFixedFoveatedRenderingDuringGameplay, offset 0x160, size 0x8
  __declspec(property(get = __get_useFixedFoveatedRenderingDuringGameplay, put = __set_useFixedFoveatedRenderingDuringGameplay))::GlobalNamespace::BoolSO* useFixedFoveatedRenderingDuringGameplay;

  /// @brief Field gpuLevel, offset 0x168, size 0x8
  __declspec(property(get = __get_gpuLevel, put = __set_gpuLevel))::GlobalNamespace::IntSO* gpuLevel;

  /// @brief Field cpuLevel, offset 0x170, size 0x8
  __declspec(property(get = __get_cpuLevel, put = __set_cpuLevel))::GlobalNamespace::IntSO* cpuLevel;

  /// @brief Field targetFramerate, offset 0x178, size 0x8
  __declspec(property(get = __get_targetFramerate, put = __set_targetFramerate))::GlobalNamespace::FloatSO* targetFramerate;

  /// @brief Field depthTextureEnabled, offset 0x180, size 0x8
  __declspec(property(get = __get_depthTextureEnabled, put = __set_depthTextureEnabled))::GlobalNamespace::BoolSO* depthTextureEnabled;

  /// @brief Field <createScreenshotDuringTheGame>k__BackingField, offset 0x188, size 0x1
  __declspec(property(get = __get__createScreenshotDuringTheGame_k__BackingField, put = __set__createScreenshotDuringTheGame_k__BackingField)) bool _createScreenshotDuringTheGame_k__BackingField;

  /// @brief Field <playingForTheFirstTime>k__BackingField, offset 0x189, size 0x1
  __declspec(property(get = __get__playingForTheFirstTime_k__BackingField, put = __set__playingForTheFirstTime_k__BackingField)) bool _playingForTheFirstTime_k__BackingField;

  /// @brief Field _playingForTheFirstTimeChecked, offset 0x18a, size 0x1
  __declspec(property(get = __get__playingForTheFirstTimeChecked, put = __set__playingForTheFirstTimeChecked)) bool _playingForTheFirstTimeChecked;

  /// @brief Field _isLoaded, offset 0x18b, size 0x1
  __declspec(property(get = __get__isLoaded, put = __set__isLoaded)) bool _isLoaded;

  /// @brief Field _defaultPerformancePreset, offset 0x190, size 0x18
  __declspec(property(get = __get__defaultPerformancePreset,
                      put = __set__defaultPerformancePreset))::System::Nullable_1<::System::ValueTuple_2<::StringW, ::GlobalNamespace::PerformancePreset*>> _defaultPerformancePreset;

  /// @brief Field bestGraphicsPreset, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_bestGraphicsPreset, put = setStaticF_bestGraphicsPreset))::GlobalNamespace::PerformancePreset* bestGraphicsPreset;

  __declspec(property(get = get_createScreenshotDuringTheGame, put = set_createScreenshotDuringTheGame)) bool createScreenshotDuringTheGame;

  __declspec(property(get = get_playingForTheFirstTime, put = set_playingForTheFirstTime)) bool playingForTheFirstTime;

  constexpr ::GlobalNamespace::FloatSO*& __get_vrResolutionScale();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> const& __get_vrResolutionScale() const;

  constexpr void __set_vrResolutionScale(::GlobalNamespace::FloatSO* value);

  constexpr ::GlobalNamespace::FloatSO*& __get_menuVRResolutionScaleMultiplier();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> const& __get_menuVRResolutionScaleMultiplier() const;

  constexpr void __set_menuVRResolutionScaleMultiplier(::GlobalNamespace::FloatSO* value);

  constexpr ::GlobalNamespace::Vector2IntSO*& __get_windowResolution();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Vector2IntSO*> const& __get_windowResolution() const;

  constexpr void __set_windowResolution(::GlobalNamespace::Vector2IntSO* value);

  constexpr ::GlobalNamespace::Vector2IntSO*& __get_editorWindowResolution();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Vector2IntSO*> const& __get_editorWindowResolution() const;

  constexpr void __set_editorWindowResolution(::GlobalNamespace::Vector2IntSO* value);

  constexpr ::GlobalNamespace::BoolSO*& __get_fullscreen();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& __get_fullscreen() const;

  constexpr void __set_fullscreen(::GlobalNamespace::BoolSO* value);

  constexpr ::GlobalNamespace::IntSO*& __get_antiAliasingLevel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IntSO*> const& __get_antiAliasingLevel() const;

  constexpr void __set_antiAliasingLevel(::GlobalNamespace::IntSO* value);

  constexpr ::GlobalNamespace::FloatSO*& __get_volume();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> const& __get_volume() const;

  constexpr void __set_volume(::GlobalNamespace::FloatSO* value);

  constexpr ::GlobalNamespace::FloatSO*& __get_ambientVolumeScale();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> const& __get_ambientVolumeScale() const;

  constexpr void __set_ambientVolumeScale(::GlobalNamespace::FloatSO* value);

  constexpr ::GlobalNamespace::BoolSO*& __get_controllersRumbleEnabled();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& __get_controllersRumbleEnabled() const;

  constexpr void __set_controllersRumbleEnabled(::GlobalNamespace::BoolSO* value);

  constexpr ::GlobalNamespace::Vector3SO*& __get_roomCenter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Vector3SO*> const& __get_roomCenter() const;

  constexpr void __set_roomCenter(::GlobalNamespace::Vector3SO* value);

  constexpr ::GlobalNamespace::FloatSO*& __get_roomRotation();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> const& __get_roomRotation() const;

  constexpr void __set_roomRotation(::GlobalNamespace::FloatSO* value);

  constexpr ::GlobalNamespace::Vector3SO*& __get_controllerPosition();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Vector3SO*> const& __get_controllerPosition() const;

  constexpr void __set_controllerPosition(::GlobalNamespace::Vector3SO* value);

  constexpr ::GlobalNamespace::Vector3SO*& __get_controllerRotation();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Vector3SO*> const& __get_controllerRotation() const;

  constexpr void __set_controllerRotation(::GlobalNamespace::Vector3SO* value);

  constexpr ::GlobalNamespace::IntSO*& __get_mirrorGraphicsSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IntSO*> const& __get_mirrorGraphicsSettings() const;

  constexpr void __set_mirrorGraphicsSettings(::GlobalNamespace::IntSO* value);

  constexpr ::GlobalNamespace::IntSO*& __get_mainEffectGraphicsSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IntSO*> const& __get_mainEffectGraphicsSettings() const;

  constexpr void __set_mainEffectGraphicsSettings(::GlobalNamespace::IntSO* value);

  constexpr ::GlobalNamespace::IntSO*& __get_bloomPrePassGraphicsSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IntSO*> const& __get_bloomPrePassGraphicsSettings() const;

  constexpr void __set_bloomPrePassGraphicsSettings(::GlobalNamespace::IntSO* value);

  constexpr ::GlobalNamespace::BoolSO*& __get_smokeGraphicsSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& __get_smokeGraphicsSettings() const;

  constexpr void __set_smokeGraphicsSettings(::GlobalNamespace::BoolSO* value);

  constexpr ::GlobalNamespace::BoolSO*& __get_enableAlphaFeatures();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& __get_enableAlphaFeatures() const;

  constexpr void __set_enableAlphaFeatures(::GlobalNamespace::BoolSO* value);

  constexpr ::GlobalNamespace::IntSO*& __get_pauseButtonPressDurationLevel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IntSO*> const& __get_pauseButtonPressDurationLevel() const;

  constexpr void __set_pauseButtonPressDurationLevel(::GlobalNamespace::IntSO* value);

  constexpr ::GlobalNamespace::BoolSO*& __get_burnMarkTrailsEnabled();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& __get_burnMarkTrailsEnabled() const;

  constexpr void __set_burnMarkTrailsEnabled(::GlobalNamespace::BoolSO* value);

  constexpr ::GlobalNamespace::BoolSO*& __get_screenDisplacementEffectsEnabled();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& __get_screenDisplacementEffectsEnabled() const;

  constexpr void __set_screenDisplacementEffectsEnabled(::GlobalNamespace::BoolSO* value);

  constexpr ::GlobalNamespace::ObstaclesQualitySO*& __get_obstaclesQuality();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ObstaclesQualitySO*> const& __get_obstaclesQuality() const;

  constexpr void __set_obstaclesQuality(::GlobalNamespace::ObstaclesQualitySO* value);

  constexpr ::GlobalNamespace::StringSO*& __get_performancePresetKey();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StringSO*> const& __get_performancePresetKey() const;

  constexpr void __set_performancePresetKey(::GlobalNamespace::StringSO* value);

  constexpr ::GlobalNamespace::BoolSO*& __get_smoothCameraEnabled();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& __get_smoothCameraEnabled() const;

  constexpr void __set_smoothCameraEnabled(::GlobalNamespace::BoolSO* value);

  constexpr ::GlobalNamespace::FloatSO*& __get_smoothCameraFieldOfView();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> const& __get_smoothCameraFieldOfView() const;

  constexpr void __set_smoothCameraFieldOfView(::GlobalNamespace::FloatSO* value);

  constexpr ::GlobalNamespace::Vector3SO*& __get_smoothCameraThirdPersonPosition();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Vector3SO*> const& __get_smoothCameraThirdPersonPosition() const;

  constexpr void __set_smoothCameraThirdPersonPosition(::GlobalNamespace::Vector3SO* value);

  constexpr ::GlobalNamespace::Vector3SO*& __get_smoothCameraThirdPersonEulerAngles();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Vector3SO*> const& __get_smoothCameraThirdPersonEulerAngles() const;

  constexpr void __set_smoothCameraThirdPersonEulerAngles(::GlobalNamespace::Vector3SO* value);

  constexpr ::GlobalNamespace::BoolSO*& __get_smoothCameraThirdPersonEnabled();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& __get_smoothCameraThirdPersonEnabled() const;

  constexpr void __set_smoothCameraThirdPersonEnabled(::GlobalNamespace::BoolSO* value);

  constexpr ::GlobalNamespace::FloatSO*& __get_smoothCameraRotationSmooth();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> const& __get_smoothCameraRotationSmooth() const;

  constexpr void __set_smoothCameraRotationSmooth(::GlobalNamespace::FloatSO* value);

  constexpr ::GlobalNamespace::FloatSO*& __get_smoothCameraPositionSmooth();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> const& __get_smoothCameraPositionSmooth() const;

  constexpr void __set_smoothCameraPositionSmooth(::GlobalNamespace::FloatSO* value);

  constexpr ::GlobalNamespace::BoolSO*& __get_overrideAudioLatency();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& __get_overrideAudioLatency() const;

  constexpr void __set_overrideAudioLatency(::GlobalNamespace::BoolSO* value);

  constexpr ::GlobalNamespace::FloatSO*& __get_audioLatency();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> const& __get_audioLatency() const;

  constexpr void __set_audioLatency(::GlobalNamespace::FloatSO* value);

  constexpr ::GlobalNamespace::IntSO*& __get_maxShockwaveParticles();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IntSO*> const& __get_maxShockwaveParticles() const;

  constexpr void __set_maxShockwaveParticles(::GlobalNamespace::IntSO* value);

  constexpr ::GlobalNamespace::IntSO*& __get_maxNumberOfCutSoundEffects();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IntSO*> const& __get_maxNumberOfCutSoundEffects() const;

  constexpr void __set_maxNumberOfCutSoundEffects(::GlobalNamespace::IntSO* value);

  constexpr ::GlobalNamespace::LanguageSO*& __get_language();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LanguageSO*> const& __get_language() const;

  constexpr void __set_language(::GlobalNamespace::LanguageSO* value);

  constexpr ::GlobalNamespace::BoolSO*& __get_useCustomServerEnvironment();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& __get_useCustomServerEnvironment() const;

  constexpr void __set_useCustomServerEnvironment(::GlobalNamespace::BoolSO* value);

  constexpr ::GlobalNamespace::BoolSO*& __get_forceGameLiftServerEnvironment();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& __get_forceGameLiftServerEnvironment() const;

  constexpr void __set_forceGameLiftServerEnvironment(::GlobalNamespace::BoolSO* value);

  constexpr ::GlobalNamespace::StringSO*& __get_customServerHostName();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StringSO*> const& __get_customServerHostName() const;

  constexpr void __set_customServerHostName(::GlobalNamespace::StringSO* value);

  constexpr ::GlobalNamespace::BoolSO*& __get_enableFPSCounter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& __get_enableFPSCounter() const;

  constexpr void __set_enableFPSCounter(::GlobalNamespace::BoolSO* value);

  constexpr ::GlobalNamespace::BoolSO*& __get_enableFPSRecorder();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& __get_enableFPSRecorder() const;

  constexpr void __set_enableFPSRecorder(::GlobalNamespace::BoolSO* value);

  constexpr ::GlobalNamespace::BoolSO*& __get_enableMemoryTracker();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& __get_enableMemoryTracker() const;

  constexpr void __set_enableMemoryTracker(::GlobalNamespace::BoolSO* value);

  constexpr ::GlobalNamespace::BoolSO*& __get_useFixedFoveatedRenderingDuringGameplay();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& __get_useFixedFoveatedRenderingDuringGameplay() const;

  constexpr void __set_useFixedFoveatedRenderingDuringGameplay(::GlobalNamespace::BoolSO* value);

  constexpr ::GlobalNamespace::IntSO*& __get_gpuLevel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IntSO*> const& __get_gpuLevel() const;

  constexpr void __set_gpuLevel(::GlobalNamespace::IntSO* value);

  constexpr ::GlobalNamespace::IntSO*& __get_cpuLevel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IntSO*> const& __get_cpuLevel() const;

  constexpr void __set_cpuLevel(::GlobalNamespace::IntSO* value);

  constexpr ::GlobalNamespace::FloatSO*& __get_targetFramerate();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> const& __get_targetFramerate() const;

  constexpr void __set_targetFramerate(::GlobalNamespace::FloatSO* value);

  constexpr ::GlobalNamespace::BoolSO*& __get_depthTextureEnabled();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& __get_depthTextureEnabled() const;

  constexpr void __set_depthTextureEnabled(::GlobalNamespace::BoolSO* value);

  constexpr bool& __get__createScreenshotDuringTheGame_k__BackingField();

  constexpr bool const& __get__createScreenshotDuringTheGame_k__BackingField() const;

  constexpr void __set__createScreenshotDuringTheGame_k__BackingField(bool value);

  constexpr bool& __get__playingForTheFirstTime_k__BackingField();

  constexpr bool const& __get__playingForTheFirstTime_k__BackingField() const;

  constexpr void __set__playingForTheFirstTime_k__BackingField(bool value);

  constexpr bool& __get__playingForTheFirstTimeChecked();

  constexpr bool const& __get__playingForTheFirstTimeChecked() const;

  constexpr void __set__playingForTheFirstTimeChecked(bool value);

  constexpr bool& __get__isLoaded();

  constexpr bool const& __get__isLoaded() const;

  constexpr void __set__isLoaded(bool value);

  constexpr ::System::Nullable_1<::System::ValueTuple_2<::StringW, ::GlobalNamespace::PerformancePreset*>>& __get__defaultPerformancePreset();

  constexpr ::System::Nullable_1<::System::ValueTuple_2<::StringW, ::GlobalNamespace::PerformancePreset*>> const& __get__defaultPerformancePreset() const;

  constexpr void __set__defaultPerformancePreset(::System::Nullable_1<::System::ValueTuple_2<::StringW, ::GlobalNamespace::PerformancePreset*>> value);

  static inline void setStaticF_bestGraphicsPreset(::GlobalNamespace::PerformancePreset* value);

  static inline ::GlobalNamespace::PerformancePreset* getStaticF_bestGraphicsPreset();

  /// @brief Method get_createScreenshotDuringTheGame, addr 0x234e734, size 0x8, virtual false, abstract: false, final false
  inline bool get_createScreenshotDuringTheGame();

  /// @brief Method set_createScreenshotDuringTheGame, addr 0x234e73c, size 0xc, virtual false, abstract: false, final false
  inline void set_createScreenshotDuringTheGame(bool value);

  /// @brief Method get_playingForTheFirstTime, addr 0x234e748, size 0x8, virtual false, abstract: false, final false
  inline bool get_playingForTheFirstTime();

  /// @brief Method set_playingForTheFirstTime, addr 0x234e750, size 0xc, virtual false, abstract: false, final false
  inline void set_playingForTheFirstTime(bool value);

  /// @brief Method Initialize, addr 0x234e75c, size 0x1dc, virtual false, abstract: false, final false
  inline void Initialize(::GlobalNamespace::ISaveData* saveData, ::System::Nullable_1<::System::ValueTuple_2<::StringW, ::GlobalNamespace::PerformancePreset*>> defaultPerformancePreset);

  /// @brief Method Save, addr 0x234f1cc, size 0x504, virtual false, abstract: false, final false
  inline void Save(::GlobalNamespace::ISaveData* saveData);

  /// @brief Method Load, addr 0x234e938, size 0x894, virtual false, abstract: false, final false
  inline void Load(::GlobalNamespace::ISaveData* saveData, bool forced);

  /// @brief Method ForceApplyPerformancePresetAsync, addr 0x234fa68, size 0xc8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ForceApplyPerformancePresetAsync(::GlobalNamespace::__MainSettingsModelSO__Config* config);

  /// @brief Method __DeleteSettingsFiles, addr 0x234fb30, size 0x140, virtual false, abstract: false, final false
  inline void __DeleteSettingsFiles();

  static inline ::GlobalNamespace::MainSettingsModelSO* New_ctor();

  /// @brief Method .ctor, addr 0x234fc70, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MainSettingsModelSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainSettingsModelSO(MainSettingsModelSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainSettingsModelSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainSettingsModelSO(MainSettingsModelSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainSettingsModelSO();

public:
  /// @brief Field vrResolutionScale, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::FloatSO* ___vrResolutionScale;

  /// @brief Field menuVRResolutionScaleMultiplier, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::FloatSO* ___menuVRResolutionScaleMultiplier;

  /// @brief Field windowResolution, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::Vector2IntSO* ___windowResolution;

  /// @brief Field editorWindowResolution, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::Vector2IntSO* ___editorWindowResolution;

  /// @brief Field fullscreen, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::BoolSO* ___fullscreen;

  /// @brief Field antiAliasingLevel, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::IntSO* ___antiAliasingLevel;

  /// @brief Field volume, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::FloatSO* ___volume;

  /// @brief Field ambientVolumeScale, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::FloatSO* ___ambientVolumeScale;

  /// @brief Field controllersRumbleEnabled, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::BoolSO* ___controllersRumbleEnabled;

  /// @brief Field roomCenter, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::Vector3SO* ___roomCenter;

  /// @brief Field roomRotation, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::FloatSO* ___roomRotation;

  /// @brief Field controllerPosition, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::Vector3SO* ___controllerPosition;

  /// @brief Field controllerRotation, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::Vector3SO* ___controllerRotation;

  /// @brief Field mirrorGraphicsSettings, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::IntSO* ___mirrorGraphicsSettings;

  /// @brief Field mainEffectGraphicsSettings, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::IntSO* ___mainEffectGraphicsSettings;

  /// @brief Field bloomPrePassGraphicsSettings, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::IntSO* ___bloomPrePassGraphicsSettings;

  /// @brief Field smokeGraphicsSettings, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::BoolSO* ___smokeGraphicsSettings;

  /// @brief Field enableAlphaFeatures, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::BoolSO* ___enableAlphaFeatures;

  /// @brief Field pauseButtonPressDurationLevel, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::IntSO* ___pauseButtonPressDurationLevel;

  /// @brief Field burnMarkTrailsEnabled, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::BoolSO* ___burnMarkTrailsEnabled;

  /// @brief Field screenDisplacementEffectsEnabled, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::BoolSO* ___screenDisplacementEffectsEnabled;

  /// @brief Field obstaclesQuality, offset: 0xc0, size: 0x8, def value: None
  ::GlobalNamespace::ObstaclesQualitySO* ___obstaclesQuality;

  /// @brief Field performancePresetKey, offset: 0xc8, size: 0x8, def value: None
  ::GlobalNamespace::StringSO* ___performancePresetKey;

  /// @brief Field smoothCameraEnabled, offset: 0xd0, size: 0x8, def value: None
  ::GlobalNamespace::BoolSO* ___smoothCameraEnabled;

  /// @brief Field smoothCameraFieldOfView, offset: 0xd8, size: 0x8, def value: None
  ::GlobalNamespace::FloatSO* ___smoothCameraFieldOfView;

  /// @brief Field smoothCameraThirdPersonPosition, offset: 0xe0, size: 0x8, def value: None
  ::GlobalNamespace::Vector3SO* ___smoothCameraThirdPersonPosition;

  /// @brief Field smoothCameraThirdPersonEulerAngles, offset: 0xe8, size: 0x8, def value: None
  ::GlobalNamespace::Vector3SO* ___smoothCameraThirdPersonEulerAngles;

  /// @brief Field smoothCameraThirdPersonEnabled, offset: 0xf0, size: 0x8, def value: None
  ::GlobalNamespace::BoolSO* ___smoothCameraThirdPersonEnabled;

  /// @brief Field smoothCameraRotationSmooth, offset: 0xf8, size: 0x8, def value: None
  ::GlobalNamespace::FloatSO* ___smoothCameraRotationSmooth;

  /// @brief Field smoothCameraPositionSmooth, offset: 0x100, size: 0x8, def value: None
  ::GlobalNamespace::FloatSO* ___smoothCameraPositionSmooth;

  /// @brief Field overrideAudioLatency, offset: 0x108, size: 0x8, def value: None
  ::GlobalNamespace::BoolSO* ___overrideAudioLatency;

  /// @brief Field audioLatency, offset: 0x110, size: 0x8, def value: None
  ::GlobalNamespace::FloatSO* ___audioLatency;

  /// @brief Field maxShockwaveParticles, offset: 0x118, size: 0x8, def value: None
  ::GlobalNamespace::IntSO* ___maxShockwaveParticles;

  /// @brief Field maxNumberOfCutSoundEffects, offset: 0x120, size: 0x8, def value: None
  ::GlobalNamespace::IntSO* ___maxNumberOfCutSoundEffects;

  /// @brief Field language, offset: 0x128, size: 0x8, def value: None
  ::GlobalNamespace::LanguageSO* ___language;

  /// @brief Field useCustomServerEnvironment, offset: 0x130, size: 0x8, def value: None
  ::GlobalNamespace::BoolSO* ___useCustomServerEnvironment;

  /// @brief Field forceGameLiftServerEnvironment, offset: 0x138, size: 0x8, def value: None
  ::GlobalNamespace::BoolSO* ___forceGameLiftServerEnvironment;

  /// @brief Field customServerHostName, offset: 0x140, size: 0x8, def value: None
  ::GlobalNamespace::StringSO* ___customServerHostName;

  /// @brief Field enableFPSCounter, offset: 0x148, size: 0x8, def value: None
  ::GlobalNamespace::BoolSO* ___enableFPSCounter;

  /// @brief Field enableFPSRecorder, offset: 0x150, size: 0x8, def value: None
  ::GlobalNamespace::BoolSO* ___enableFPSRecorder;

  /// @brief Field enableMemoryTracker, offset: 0x158, size: 0x8, def value: None
  ::GlobalNamespace::BoolSO* ___enableMemoryTracker;

  /// @brief Field useFixedFoveatedRenderingDuringGameplay, offset: 0x160, size: 0x8, def value: None
  ::GlobalNamespace::BoolSO* ___useFixedFoveatedRenderingDuringGameplay;

  /// @brief Field gpuLevel, offset: 0x168, size: 0x8, def value: None
  ::GlobalNamespace::IntSO* ___gpuLevel;

  /// @brief Field cpuLevel, offset: 0x170, size: 0x8, def value: None
  ::GlobalNamespace::IntSO* ___cpuLevel;

  /// @brief Field targetFramerate, offset: 0x178, size: 0x8, def value: None
  ::GlobalNamespace::FloatSO* ___targetFramerate;

  /// @brief Field depthTextureEnabled, offset: 0x180, size: 0x8, def value: None
  ::GlobalNamespace::BoolSO* ___depthTextureEnabled;

  /// @brief Field <createScreenshotDuringTheGame>k__BackingField, offset: 0x188, size: 0x1, def value: None
  bool ____createScreenshotDuringTheGame_k__BackingField;

  /// @brief Field <playingForTheFirstTime>k__BackingField, offset: 0x189, size: 0x1, def value: None
  bool ____playingForTheFirstTime_k__BackingField;

  /// @brief Field _playingForTheFirstTimeChecked, offset: 0x18a, size: 0x1, def value: None
  bool ____playingForTheFirstTimeChecked;

  /// @brief Field _isLoaded, offset: 0x18b, size: 0x1, def value: None
  bool ____isLoaded;

  /// @brief Field _defaultPerformancePreset, offset: 0x190, size: 0x18, def value: None
  ::System::Nullable_1<::System::ValueTuple_2<::StringW, ::GlobalNamespace::PerformancePreset*>> ____defaultPerformancePreset;

  /// @brief Field kDefaultPlayerHeight offset 0xffffffff size 0x4
  static constexpr float_t kDefaultPlayerHeight{ 1.8 };

  /// @brief Field kHeadPosToPlayerHeightOffset offset 0xffffffff size 0x4
  static constexpr float_t kHeadPosToPlayerHeightOffset{ 0.1 };

  /// @brief Field kFileName offset 0xffffffff size 0x8
  static constexpr ::ConstString kFileName{ u"settings.cfg" };

  /// @brief Field kTempFileName offset 0xffffffff size 0x8
  static constexpr ::ConstString kTempFileName{ u"settings.cfg.tmp" };

  /// @brief Field kBackupFileName offset 0xffffffff size 0x8
  static constexpr ::ConstString kBackupFileName{ u"settings.cfg.bak" };

  /// @brief Field kCurrentVersion offset 0xffffffff size 0x8
  static constexpr ::ConstString kCurrentVersion{ u"2.1.0" };

  /// @brief Field kControllersPositionOffsetLimit offset 0xffffffff size 0x4
  static constexpr float_t kControllersPositionOffsetLimit{ 0.1 };

  /// @brief Field kControllersRotationOffsetLimit offset 0xffffffff size 0x4
  static constexpr float_t kControllersRotationOffsetLimit{ 180.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainSettingsModelSO, 0x1a8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelSO, ___vrResolutionScale) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelSO, ___menuVRResolutionScaleMultiplier) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelSO, ___windowResolution) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelSO, ___editorWindowResolution) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelSO, ___fullscreen) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelSO, ___antiAliasingLevel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelSO, ___volume) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelSO, ___ambientVolumeScale) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelSO, ___controllersRumbleEnabled) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelSO, ___roomCenter) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelSO, ___roomRotation) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelSO, ___controllerPosition) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelSO, ___controllerRotation) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelSO, ___mirrorGraphicsSettings) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelSO, ___mainEffectGraphicsSettings) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelSO, ___bloomPrePassGraphicsSettings) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelSO, ___smokeGraphicsSettings) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelSO, ___enableAlphaFeatures) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelSO, ___pauseButtonPressDurationLevel) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelSO, ___burnMarkTrailsEnabled) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelSO, ___screenDisplacementEffectsEnabled) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelSO, ___obstaclesQuality) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelSO, ___performancePresetKey) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelSO, ___smoothCameraEnabled) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelSO, ___smoothCameraFieldOfView) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelSO, ___smoothCameraThirdPersonPosition) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelSO, ___smoothCameraThirdPersonEulerAngles) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelSO, ___smoothCameraThirdPersonEnabled) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelSO, ___smoothCameraRotationSmooth) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelSO, ___smoothCameraPositionSmooth) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelSO, ___overrideAudioLatency) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelSO, ___audioLatency) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelSO, ___maxShockwaveParticles) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelSO, ___maxNumberOfCutSoundEffects) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelSO, ___language) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelSO, ___useCustomServerEnvironment) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelSO, ___forceGameLiftServerEnvironment) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelSO, ___customServerHostName) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelSO, ___enableFPSCounter) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelSO, ___enableFPSRecorder) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelSO, ___enableMemoryTracker) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelSO, ___useFixedFoveatedRenderingDuringGameplay) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelSO, ___gpuLevel) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelSO, ___cpuLevel) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelSO, ___targetFramerate) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelSO, ___depthTextureEnabled) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelSO, ____createScreenshotDuringTheGame_k__BackingField) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelSO, ____playingForTheFirstTime_k__BackingField) == 0x189, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelSO, ____playingForTheFirstTimeChecked) == 0x18a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelSO, ____isLoaded) == 0x18b, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelSO, ____defaultPerformancePreset) == 0x190, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MainSettingsModelSO__WindowMode, "", "MainSettingsModelSO/WindowMode");
NEED_NO_BOX(::GlobalNamespace::MainSettingsModelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainSettingsModelSO*, "", "MainSettingsModelSO");
NEED_NO_BOX(::GlobalNamespace::__MainSettingsModelSO__Config);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MainSettingsModelSO__Config*, "", "MainSettingsModelSO/Config");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71, "", "MainSettingsModelSO/<ForceApplyPerformancePresetAsync>d__71");
