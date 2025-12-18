#pragma once
// IWYU pragma private; include "GlobalNamespace/ScreenshotLevelStarter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/Settings/zzzz__Settings_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScreenshotLevelStarter)
namespace BeatSaber::Init {
class GameVersionProvider;
}
namespace BeatSaber::Settings {
struct Settings;
}
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
struct BeatmapLevelDataVersion;
}
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
class DeterminismConfig;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class ICoroutineStarter;
}
namespace GlobalNamespace {
class ILevelEndActions;
}
namespace GlobalNamespace {
class IRenderingParamsApplicator;
}
namespace GlobalNamespace {
class MenuTransitionsHelper;
}
namespace GlobalNamespace {
class PauseController;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
struct RunScreenshotLevelData_ScreenshotLevelStarter_BuildSpecificMetadata;
}
namespace GlobalNamespace {
struct RunScreenshotLevelData_ScreenshotLevelStarter_Command;
}
namespace GlobalNamespace {
struct RunScreenshotLevelData_ScreenshotLevelStarter_DeviceMetadata;
}
namespace GlobalNamespace {
struct RunScreenshotLevelData_ScreenshotLevelStarter_FolderMetadata;
}
namespace GlobalNamespace {
struct RunScreenshotLevelData_ScreenshotLevelStarter_SerializedBeatmapKey;
}
namespace GlobalNamespace {
struct RunScreenshotLevelData_ScreenshotLevelStarter_Settings;
}
namespace GlobalNamespace {
struct ScreenshotLevelStarter_RunScreenshotLevelData;
}
namespace GlobalNamespace {
class ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45;
}
namespace GlobalNamespace {
class ScreenshotLevelStarter__RunScreenshotLevel_d__46;
}
namespace GlobalNamespace {
class ScreenshotLevelStarter___c__DisplayClass46_0;
}
namespace GlobalNamespace {
class ScreenshotLevelStarter___c__DisplayClass46_1;
}
namespace GlobalNamespace {
class SerializedBeatmapKey_RunScreenshotLevelData_ScreenshotLevelStarter___c__DisplayClass4_0;
}
namespace GlobalNamespace {
class SettingsManager;
}
namespace GlobalNamespace {
class TimeHelper;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class WaitForEndOfFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class ScreenshotLevelStarter;
}
namespace GlobalNamespace {
class ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45;
}
namespace GlobalNamespace {
class ScreenshotLevelStarter__RunScreenshotLevel_d__46;
}
namespace GlobalNamespace {
class ScreenshotLevelStarter___c__DisplayClass46_0;
}
namespace GlobalNamespace {
class ScreenshotLevelStarter___c__DisplayClass46_1;
}
namespace GlobalNamespace {
class SerializedBeatmapKey_RunScreenshotLevelData_ScreenshotLevelStarter___c__DisplayClass4_0;
}
namespace GlobalNamespace {
struct RunScreenshotLevelData_ScreenshotLevelStarter_BuildSpecificMetadata;
}
namespace GlobalNamespace {
struct RunScreenshotLevelData_ScreenshotLevelStarter_Command;
}
namespace GlobalNamespace {
struct RunScreenshotLevelData_ScreenshotLevelStarter_DeviceMetadata;
}
namespace GlobalNamespace {
struct RunScreenshotLevelData_ScreenshotLevelStarter_FolderMetadata;
}
namespace GlobalNamespace {
struct RunScreenshotLevelData_ScreenshotLevelStarter_SerializedBeatmapKey;
}
namespace GlobalNamespace {
struct RunScreenshotLevelData_ScreenshotLevelStarter_Settings;
}
namespace GlobalNamespace {
struct ScreenshotLevelStarter_RunScreenshotLevelData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ScreenshotLevelStarter);
MARK_REF_PTR_T(::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45);
MARK_REF_PTR_T(::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46);
MARK_REF_PTR_T(::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0);
MARK_REF_PTR_T(::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_1);
MARK_REF_PTR_T(::GlobalNamespace::SerializedBeatmapKey_RunScreenshotLevelData_ScreenshotLevelStarter___c__DisplayClass4_0);
MARK_VAL_T(::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_BuildSpecificMetadata);
MARK_VAL_T(::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command);
MARK_VAL_T(::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_DeviceMetadata);
MARK_VAL_T(::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_FolderMetadata);
MARK_VAL_T(::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_SerializedBeatmapKey);
MARK_VAL_T(::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Settings);
MARK_VAL_T(::GlobalNamespace::ScreenshotLevelStarter_RunScreenshotLevelData);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: ScreenshotLevelStarter/RunScreenshotLevelData/Settings
struct CORDL_TYPE RunScreenshotLevelData_ScreenshotLevelStarter_Settings {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr RunScreenshotLevelData_ScreenshotLevelStarter_Settings();

  // Ctor Parameters [CppParam { name: "framerate", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "screenshotPeriod", ty: "float_t", modifiers: "", def_value: None }, CppParam {
  // name: "overwriteExistingFolder", ty: "bool", modifiers: "", def_value: None }]
  constexpr RunScreenshotLevelData_ScreenshotLevelStarter_Settings(int32_t framerate, float_t screenshotPeriod, bool overwriteExistingFolder) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6851 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field framerate, offset: 0x0, size: 0x4, def value: None
  int32_t framerate;

  /// @brief Field screenshotPeriod, offset: 0x4, size: 0x4, def value: None
  float_t screenshotPeriod;

  /// @brief Field overwriteExistingFolder, offset: 0x8, size: 0x1, def value: None
  bool overwriteExistingFolder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Settings, framerate) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Settings, screenshotPeriod) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Settings, overwriteExistingFolder) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Settings, 0xc>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: ScreenshotLevelStarter/RunScreenshotLevelData/SerializedBeatmapKey
struct CORDL_TYPE RunScreenshotLevelData_ScreenshotLevelStarter_SerializedBeatmapKey {
public:
  // Declarations
  using __c__DisplayClass4_0 = ::GlobalNamespace::SerializedBeatmapKey_RunScreenshotLevelData_ScreenshotLevelStarter___c__DisplayClass4_0;

  /// @brief Method ToBeatmapKey, addr 0x578146c, size 0x484, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapKey ToBeatmapKey(::GlobalNamespace::BeatmapLevelsModel* beatmapLevels);

  /// @brief Method .ctor, addr 0x57808a0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW levelId, ::StringW characteristic, ::StringW difficulty);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RunScreenshotLevelData_ScreenshotLevelStarter_SerializedBeatmapKey();

  // Ctor Parameters [CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "characteristic", ty: "::StringW", modifiers: "", def_value: None }, CppParam {
  // name: "difficulty", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr RunScreenshotLevelData_ScreenshotLevelStarter_SerializedBeatmapKey(::StringW levelId, ::StringW characteristic, ::StringW difficulty) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6854 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field levelId, offset: 0x0, size: 0x8, def value: None
  ::StringW levelId;

  /// @brief Field characteristic, offset: 0x8, size: 0x8, def value: None
  ::StringW characteristic;

  /// @brief Field difficulty, offset: 0x10, size: 0x8, def value: None
  ::StringW difficulty;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_SerializedBeatmapKey, levelId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_SerializedBeatmapKey, characteristic) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_SerializedBeatmapKey, difficulty) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_SerializedBeatmapKey, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies ScreenshotLevelStarter::RunScreenshotLevelData::SerializedBeatmapKey, ScreenshotLevelStarter::RunScreenshotLevelData::Settings
namespace GlobalNamespace {
// Is value type: true
// CS Name: ScreenshotLevelStarter/RunScreenshotLevelData/Command
struct CORDL_TYPE RunScreenshotLevelData_ScreenshotLevelStarter_Command {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr RunScreenshotLevelData_ScreenshotLevelStarter_Command();

  // Ctor Parameters [CppParam { name: "beatmapKey", ty: "::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_SerializedBeatmapKey", modifiers: "", def_value: None }, CppParam { name:
  // "screenshotTimes", ty: "::System::Collections::Generic::List_1<float_t>*", modifiers: "", def_value: None }, CppParam { name: "overrideGlobalSettings", ty: "bool", modifiers: "", def_value: None
  // }, CppParam { name: "settings", ty: "::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Settings", modifiers: "", def_value: None }, CppParam { name: "differenceThreshold", ty:
  // "float_t", modifiers: "", def_value: None }]
  constexpr RunScreenshotLevelData_ScreenshotLevelStarter_Command(::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_SerializedBeatmapKey beatmapKey,
                                                                  ::System::Collections::Generic::List_1<float_t>* screenshotTimes, bool overrideGlobalSettings,
                                                                  ::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Settings settings, float_t differenceThreshold) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6852 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field beatmapKey, offset: 0x0, size: 0x18, def value: None
  ::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_SerializedBeatmapKey beatmapKey;

  /// @brief Field screenshotTimes, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<float_t>* screenshotTimes;

  /// @brief Field overrideGlobalSettings, offset: 0x20, size: 0x1, def value: None
  bool overrideGlobalSettings;

  /// @brief Field settings, offset: 0x24, size: 0xc, def value: None
  ::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Settings settings;

  /// @brief Field differenceThreshold, offset: 0x30, size: 0x4, def value: None
  float_t differenceThreshold;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command, beatmapKey) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command, screenshotTimes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command, overrideGlobalSettings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command, settings) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command, differenceThreshold) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ScreenshotLevelStarter/RunScreenshotLevelData/SerializedBeatmapKey/<>c__DisplayClass4_0
class CORDL_TYPE SerializedBeatmapKey_RunScreenshotLevelData_ScreenshotLevelStarter___c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field localCharacteristic, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_localCharacteristic, put = __cordl_internal_set_localCharacteristic)) ::StringW localCharacteristic;

  static inline ::GlobalNamespace::SerializedBeatmapKey_RunScreenshotLevelData_ScreenshotLevelStarter___c__DisplayClass4_0* New_ctor();

  /// @brief Method <ToBeatmapKey>b__0, addr 0x57818f4, size 0x1c, virtual false, abstract: false, final false
  inline bool _ToBeatmapKey_b__0(::GlobalNamespace::BeatmapCharacteristicSO* characteristicSO);

  constexpr ::StringW const& __cordl_internal_get_localCharacteristic() const;

  constexpr ::StringW& __cordl_internal_get_localCharacteristic();

  constexpr void __cordl_internal_set_localCharacteristic(::StringW value);

  /// @brief Method .ctor, addr 0x57818f0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializedBeatmapKey_RunScreenshotLevelData_ScreenshotLevelStarter___c__DisplayClass4_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SerializedBeatmapKey_RunScreenshotLevelData_ScreenshotLevelStarter___c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerializedBeatmapKey_RunScreenshotLevelData_ScreenshotLevelStarter___c__DisplayClass4_0(SerializedBeatmapKey_RunScreenshotLevelData_ScreenshotLevelStarter___c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerializedBeatmapKey_RunScreenshotLevelData_ScreenshotLevelStarter___c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerializedBeatmapKey_RunScreenshotLevelData_ScreenshotLevelStarter___c__DisplayClass4_0(SerializedBeatmapKey_RunScreenshotLevelData_ScreenshotLevelStarter___c__DisplayClass4_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6853 };

  /// @brief Field localCharacteristic, offset: 0x10, size: 0x8, def value: None
  ::StringW ___localCharacteristic;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SerializedBeatmapKey_RunScreenshotLevelData_ScreenshotLevelStarter___c__DisplayClass4_0, ___localCharacteristic) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SerializedBeatmapKey_RunScreenshotLevelData_ScreenshotLevelStarter___c__DisplayClass4_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatSaber.Settings.Settings, ScreenshotLevelStarter::RunScreenshotLevelData::Command
namespace GlobalNamespace {
// Is value type: true
// CS Name: ScreenshotLevelStarter/RunScreenshotLevelData/FolderMetadata
struct CORDL_TYPE RunScreenshotLevelData_ScreenshotLevelStarter_FolderMetadata {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr RunScreenshotLevelData_ScreenshotLevelStarter_FolderMetadata();

  // Ctor Parameters [CppParam { name: "command", ty: "::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command", modifiers: "", def_value: None }, CppParam { name: "gameSettings", ty:
  // "::BeatSaber::Settings::Settings", modifiers: "", def_value: None }, CppParam { name: "playerSpecificSettings", ty: "::GlobalNamespace::PlayerSpecificSettings*", modifiers: "", def_value: None },
  // CppParam { name: "gameplayModifiers", ty: "::GlobalNamespace::GameplayModifiers*", modifiers: "", def_value: None }]
  constexpr RunScreenshotLevelData_ScreenshotLevelStarter_FolderMetadata(::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command command, ::BeatSaber::Settings::Settings gameSettings,
                                                                         ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
                                                                         ::GlobalNamespace::GameplayModifiers* gameplayModifiers) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6855 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x138 };

  /// @brief Field command, offset: 0x0, size: 0x38, def value: None
  ::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command command;

  /// @brief Field gameSettings, offset: 0x38, size: 0xf0, def value: None
  ::BeatSaber::Settings::Settings gameSettings;

  /// @brief Field playerSpecificSettings, offset: 0x128, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;

  /// @brief Field gameplayModifiers, offset: 0x130, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* gameplayModifiers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_FolderMetadata, command) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_FolderMetadata, gameSettings) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_FolderMetadata, playerSpecificSettings) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_FolderMetadata, gameplayModifiers) == 0x130, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_FolderMetadata, 0x138>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: ScreenshotLevelStarter/RunScreenshotLevelData/DeviceMetadata
struct CORDL_TYPE RunScreenshotLevelData_ScreenshotLevelStarter_DeviceMetadata {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr RunScreenshotLevelData_ScreenshotLevelStarter_DeviceMetadata();

  // Ctor Parameters [CppParam { name: "deviceUID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "deviceName", ty: "::StringW", modifiers: "", def_value: None }, CppParam {
  // name: "deviceType", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "devicePlatform", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "deviceModel", ty:
  // "::StringW", modifiers: "", def_value: None }]
  constexpr RunScreenshotLevelData_ScreenshotLevelStarter_DeviceMetadata(::StringW deviceUID, ::StringW deviceName, ::StringW deviceType, ::StringW devicePlatform, ::StringW deviceModel) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6856 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field deviceUID, offset: 0x0, size: 0x8, def value: None
  ::StringW deviceUID;

  /// @brief Field deviceName, offset: 0x8, size: 0x8, def value: None
  ::StringW deviceName;

  /// @brief Field deviceType, offset: 0x10, size: 0x8, def value: None
  ::StringW deviceType;

  /// @brief Field devicePlatform, offset: 0x18, size: 0x8, def value: None
  ::StringW devicePlatform;

  /// @brief Field deviceModel, offset: 0x20, size: 0x8, def value: None
  ::StringW deviceModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_DeviceMetadata, deviceUID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_DeviceMetadata, deviceName) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_DeviceMetadata, deviceType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_DeviceMetadata, devicePlatform) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_DeviceMetadata, deviceModel) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_DeviceMetadata, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: ScreenshotLevelStarter/RunScreenshotLevelData/BuildSpecificMetadata
struct CORDL_TYPE RunScreenshotLevelData_ScreenshotLevelStarter_BuildSpecificMetadata {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr RunScreenshotLevelData_ScreenshotLevelStarter_BuildSpecificMetadata();

  // Ctor Parameters [CppParam { name: "gameVersion", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr RunScreenshotLevelData_ScreenshotLevelStarter_BuildSpecificMetadata(::StringW gameVersion) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6857 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field gameVersion, offset: 0x0, size: 0x8, def value: None
  ::StringW gameVersion;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_BuildSpecificMetadata, gameVersion) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_BuildSpecificMetadata, 0x8>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies ScreenshotLevelStarter::RunScreenshotLevelData::Settings
namespace GlobalNamespace {
// Is value type: true
// CS Name: ScreenshotLevelStarter/RunScreenshotLevelData
struct CORDL_TYPE ScreenshotLevelStarter_RunScreenshotLevelData {
public:
  // Declarations
  using BuildSpecificMetadata = ::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_BuildSpecificMetadata;

  using Command = ::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command;

  using DeviceMetadata = ::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_DeviceMetadata;

  using FolderMetadata = ::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_FolderMetadata;

  using SerializedBeatmapKey = ::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_SerializedBeatmapKey;

  using Settings = ::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Settings;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenshotLevelStarter_RunScreenshotLevelData();

  // Ctor Parameters [CppParam { name: "globalScreenshotSettings", ty: "::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Settings", modifiers: "", def_value: None }, CppParam { name:
  // "screenshotLevels", ty: "::ArrayW<::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command,::Array<::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command>*>",
  // modifiers: "", def_value: None }]
  constexpr ScreenshotLevelStarter_RunScreenshotLevelData(
      ::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Settings globalScreenshotSettings,
      ::ArrayW<::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command, ::Array<::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command>*> screenshotLevels) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6858 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field globalScreenshotSettings, offset: 0x0, size: 0xc, def value: None
  ::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Settings globalScreenshotSettings;

  /// @brief Field screenshotLevels, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command, ::Array<::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command>*> screenshotLevels;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScreenshotLevelStarter_RunScreenshotLevelData, globalScreenshotSettings) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotLevelStarter_RunScreenshotLevelData, screenshotLevels) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScreenshotLevelStarter_RunScreenshotLevelData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies ScreenshotLevelStarter::RunScreenshotLevelData::Command, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ScreenshotLevelStarter/<>c__DisplayClass46_0
class CORDL_TYPE ScreenshotLevelStarter___c__DisplayClass46_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::ScreenshotLevelStarter* __4__this;

  /// @brief Field audioTimeSyncController, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_audioTimeSyncController, put = __cordl_internal_set_audioTimeSyncController)) ::UnityW<::GlobalNamespace::AudioTimeSyncController>
      audioTimeSyncController;

  /// @brief Field command, offset 0x30, size 0x38
  __declspec(property(get = __cordl_internal_get_command, put = __cordl_internal_set_command)) ::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command command;

  /// @brief Field levelEnded, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_levelEnded, put = __cordl_internal_set_levelEnded)) bool levelEnded;

  /// @brief Field nextScreenshotTimeIndex, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_nextScreenshotTimeIndex, put = __cordl_internal_set_nextScreenshotTimeIndex)) int32_t nextScreenshotTimeIndex;

  /// @brief Field originalFixedDeltaTime, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_originalFixedDeltaTime, put = __cordl_internal_set_originalFixedDeltaTime)) float_t originalFixedDeltaTime;

  /// @brief Field pauseController, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_pauseController, put = __cordl_internal_set_pauseController)) ::UnityW<::GlobalNamespace::PauseController> pauseController;

  static inline ::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0* New_ctor();

  /// @brief Method <RunScreenshotLevel>b__0, addr 0x5781914, size 0x20, virtual false, abstract: false, final false
  inline bool _RunScreenshotLevel_b__0();

  /// @brief Method <RunScreenshotLevel>g__GetNextScreenshotTime|2, addr 0x5781aa8, size 0x94, virtual false, abstract: false, final false
  inline float_t _RunScreenshotLevel_g__GetNextScreenshotTime_2();

  /// @brief Method <RunScreenshotLevel>g__HandleLevelEnded|1, addr 0x5781934, size 0x174, virtual false, abstract: false, final false
  inline void _RunScreenshotLevel_g__HandleLevelEnded_1();

  constexpr ::GlobalNamespace::ScreenshotLevelStarter* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::ScreenshotLevelStarter*& __cordl_internal_get___4__this();

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& __cordl_internal_get_audioTimeSyncController() const;

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& __cordl_internal_get_audioTimeSyncController();

  constexpr ::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command const& __cordl_internal_get_command() const;

  constexpr ::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command& __cordl_internal_get_command();

  constexpr bool const& __cordl_internal_get_levelEnded() const;

  constexpr bool& __cordl_internal_get_levelEnded();

  constexpr int32_t const& __cordl_internal_get_nextScreenshotTimeIndex() const;

  constexpr int32_t& __cordl_internal_get_nextScreenshotTimeIndex();

  constexpr float_t const& __cordl_internal_get_originalFixedDeltaTime() const;

  constexpr float_t& __cordl_internal_get_originalFixedDeltaTime();

  constexpr ::UnityW<::GlobalNamespace::PauseController> const& __cordl_internal_get_pauseController() const;

  constexpr ::UnityW<::GlobalNamespace::PauseController>& __cordl_internal_get_pauseController();

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::ScreenshotLevelStarter* value);

  constexpr void __cordl_internal_set_audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController> value);

  constexpr void __cordl_internal_set_command(::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command value);

  constexpr void __cordl_internal_set_levelEnded(bool value);

  constexpr void __cordl_internal_set_nextScreenshotTimeIndex(int32_t value);

  constexpr void __cordl_internal_set_originalFixedDeltaTime(float_t value);

  constexpr void __cordl_internal_set_pauseController(::UnityW<::GlobalNamespace::PauseController> value);

  /// @brief Method .ctor, addr 0x5781910, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenshotLevelStarter___c__DisplayClass46_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScreenshotLevelStarter___c__DisplayClass46_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenshotLevelStarter___c__DisplayClass46_0(ScreenshotLevelStarter___c__DisplayClass46_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenshotLevelStarter___c__DisplayClass46_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenshotLevelStarter___c__DisplayClass46_0(ScreenshotLevelStarter___c__DisplayClass46_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6859 };

  /// @brief Field audioTimeSyncController, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioTimeSyncController> ___audioTimeSyncController;

  /// @brief Field pauseController, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PauseController> ___pauseController;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::ScreenshotLevelStarter* _____4__this;

  /// @brief Field originalFixedDeltaTime, offset: 0x28, size: 0x4, def value: None
  float_t ___originalFixedDeltaTime;

  /// @brief Field levelEnded, offset: 0x2c, size: 0x1, def value: None
  bool ___levelEnded;

  /// @brief Field command, offset: 0x30, size: 0x38, def value: None
  ::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command ___command;

  /// @brief Field nextScreenshotTimeIndex, offset: 0x68, size: 0x4, def value: None
  int32_t ___nextScreenshotTimeIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0, ___audioTimeSyncController) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0, ___pauseController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0, ___originalFixedDeltaTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0, ___levelEnded) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0, ___command) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0, ___nextScreenshotTimeIndex) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0, 0x70>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ScreenshotLevelStarter/<>c__DisplayClass46_1
class CORDL_TYPE ScreenshotLevelStarter___c__DisplayClass46_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field versionTask, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_versionTask, put = __cordl_internal_set_versionTask)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapLevelDataVersion>* versionTask;

  static inline ::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_1* New_ctor();

  /// @brief Method <RunScreenshotLevel>b__3, addr 0x5781b40, size 0x18, virtual false, abstract: false, final false
  inline bool _RunScreenshotLevel_b__3();

  constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapLevelDataVersion>* const& __cordl_internal_get_versionTask() const;

  constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapLevelDataVersion>*& __cordl_internal_get_versionTask();

  constexpr void __cordl_internal_set_versionTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapLevelDataVersion>* value);

  /// @brief Method .ctor, addr 0x5781b3c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenshotLevelStarter___c__DisplayClass46_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScreenshotLevelStarter___c__DisplayClass46_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenshotLevelStarter___c__DisplayClass46_1(ScreenshotLevelStarter___c__DisplayClass46_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenshotLevelStarter___c__DisplayClass46_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenshotLevelStarter___c__DisplayClass46_1(ScreenshotLevelStarter___c__DisplayClass46_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6860 };

  /// @brief Field versionTask, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapLevelDataVersion>* ___versionTask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_1, ___versionTask) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_1, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapKey, ScreenshotLevelStarter::RunScreenshotLevelData::Command, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ScreenshotLevelStarter/<RunScreenshotLevel>d__46
class CORDL_TYPE ScreenshotLevelStarter__RunScreenshotLevel_d__46 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::ScreenshotLevelStarter* __4__this;

  /// @brief Field <>8__1, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get___8__1, put = __cordl_internal_set___8__1)) ::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_1* __8__1;

  /// @brief Field <>8__2, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get___8__2, put = __cordl_internal_set___8__2)) ::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0* __8__2;

  /// @brief Field <beatmapKey>5__3, offset 0x78, size 0x20
  __declspec(property(get = __cordl_internal_get__beatmapKey_5__3, put = __cordl_internal_set__beatmapKey_5__3)) ::GlobalNamespace::BeatmapKey _beatmapKey_5__3;

  /// @brief Field <beatmapLevel>5__2, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevel_5__2, put = __cordl_internal_set__beatmapLevel_5__2)) ::GlobalNamespace::BeatmapLevel* _beatmapLevel_5__2;

  /// @brief Field <cancellationTokenSource>5__12, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__cancellationTokenSource_5__12,
                      put = __cordl_internal_set__cancellationTokenSource_5__12)) ::System::Threading::CancellationTokenSource* _cancellationTokenSource_5__12;

  /// @brief Field <gameplayModifiers>5__5, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayModifiers_5__5, put = __cordl_internal_set__gameplayModifiers_5__5)) ::GlobalNamespace::GameplayModifiers* _gameplayModifiers_5__5;

  /// @brief Field <levelEndActions>5__7, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__levelEndActions_5__7, put = __cordl_internal_set__levelEndActions_5__7)) ::GlobalNamespace::ILevelEndActions* _levelEndActions_5__7;

  /// @brief Field <nextScreenshotTime>5__9, offset 0xbc, size 0x4
  __declspec(property(get = __cordl_internal_get__nextScreenshotTime_5__9, put = __cordl_internal_set__nextScreenshotTime_5__9)) float_t _nextScreenshotTime_5__9;

  /// @brief Field <playerSpecificSettings>5__6, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__playerSpecificSettings_5__6,
                      put = __cordl_internal_set__playerSpecificSettings_5__6)) ::GlobalNamespace::PlayerSpecificSettings* _playerSpecificSettings_5__6;

  /// @brief Field <renderCamera>5__10, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__renderCamera_5__10, put = __cordl_internal_set__renderCamera_5__10)) ::UnityW<::UnityEngine::Camera> _renderCamera_5__10;

  /// @brief Field <screenshotExportFolderPath>5__4, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__screenshotExportFolderPath_5__4, put = __cordl_internal_set__screenshotExportFolderPath_5__4)) ::StringW _screenshotExportFolderPath_5__4;

  /// @brief Field <screenshotTexture>5__11, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__screenshotTexture_5__11, put = __cordl_internal_set__screenshotTexture_5__11)) ::UnityW<::UnityEngine::Texture2D> _screenshotTexture_5__11;

  /// @brief Field <songDuration>5__8, offset 0xb8, size 0x4
  __declspec(property(get = __cordl_internal_get__songDuration_5__8, put = __cordl_internal_set__songDuration_5__8)) float_t _songDuration_5__8;

  /// @brief Field command, offset 0x28, size 0x38
  __declspec(property(get = __cordl_internal_get_command, put = __cordl_internal_set_command)) ::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command command;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x5781b74, size 0x205c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5783c84, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x5783c8c, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5783cc4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x5781b58, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::GlobalNamespace::ScreenshotLevelStarter* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::ScreenshotLevelStarter*& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_1* const& __cordl_internal_get___8__1() const;

  constexpr ::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_1*& __cordl_internal_get___8__1();

  constexpr ::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0* const& __cordl_internal_get___8__2() const;

  constexpr ::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0*& __cordl_internal_get___8__2();

  constexpr ::GlobalNamespace::BeatmapKey const& __cordl_internal_get__beatmapKey_5__3() const;

  constexpr ::GlobalNamespace::BeatmapKey& __cordl_internal_get__beatmapKey_5__3();

  constexpr ::GlobalNamespace::BeatmapLevel* const& __cordl_internal_get__beatmapLevel_5__2() const;

  constexpr ::GlobalNamespace::BeatmapLevel*& __cordl_internal_get__beatmapLevel_5__2();

  constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get__cancellationTokenSource_5__12() const;

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__cancellationTokenSource_5__12();

  constexpr ::GlobalNamespace::GameplayModifiers* const& __cordl_internal_get__gameplayModifiers_5__5() const;

  constexpr ::GlobalNamespace::GameplayModifiers*& __cordl_internal_get__gameplayModifiers_5__5();

  constexpr ::GlobalNamespace::ILevelEndActions* const& __cordl_internal_get__levelEndActions_5__7() const;

  constexpr ::GlobalNamespace::ILevelEndActions*& __cordl_internal_get__levelEndActions_5__7();

  constexpr float_t const& __cordl_internal_get__nextScreenshotTime_5__9() const;

  constexpr float_t& __cordl_internal_get__nextScreenshotTime_5__9();

  constexpr ::GlobalNamespace::PlayerSpecificSettings* const& __cordl_internal_get__playerSpecificSettings_5__6() const;

  constexpr ::GlobalNamespace::PlayerSpecificSettings*& __cordl_internal_get__playerSpecificSettings_5__6();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__renderCamera_5__10() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__renderCamera_5__10();

  constexpr ::StringW const& __cordl_internal_get__screenshotExportFolderPath_5__4() const;

  constexpr ::StringW& __cordl_internal_get__screenshotExportFolderPath_5__4();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__screenshotTexture_5__11() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__screenshotTexture_5__11();

  constexpr float_t const& __cordl_internal_get__songDuration_5__8() const;

  constexpr float_t& __cordl_internal_get__songDuration_5__8();

  constexpr ::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command const& __cordl_internal_get_command() const;

  constexpr ::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command& __cordl_internal_get_command();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::ScreenshotLevelStarter* value);

  constexpr void __cordl_internal_set___8__1(::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_1* value);

  constexpr void __cordl_internal_set___8__2(::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0* value);

  constexpr void __cordl_internal_set__beatmapKey_5__3(::GlobalNamespace::BeatmapKey value);

  constexpr void __cordl_internal_set__beatmapLevel_5__2(::GlobalNamespace::BeatmapLevel* value);

  constexpr void __cordl_internal_set__cancellationTokenSource_5__12(::System::Threading::CancellationTokenSource* value);

  constexpr void __cordl_internal_set__gameplayModifiers_5__5(::GlobalNamespace::GameplayModifiers* value);

  constexpr void __cordl_internal_set__levelEndActions_5__7(::GlobalNamespace::ILevelEndActions* value);

  constexpr void __cordl_internal_set__nextScreenshotTime_5__9(float_t value);

  constexpr void __cordl_internal_set__playerSpecificSettings_5__6(::GlobalNamespace::PlayerSpecificSettings* value);

  constexpr void __cordl_internal_set__renderCamera_5__10(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set__screenshotExportFolderPath_5__4(::StringW value);

  constexpr void __cordl_internal_set__screenshotTexture_5__11(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set__songDuration_5__8(float_t value);

  constexpr void __cordl_internal_set_command(::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command value);

  /// @brief Method <>m__Finally1, addr 0x5783bd0, size 0xb4, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x5780ba0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenshotLevelStarter__RunScreenshotLevel_d__46();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScreenshotLevelStarter__RunScreenshotLevel_d__46", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenshotLevelStarter__RunScreenshotLevel_d__46(ScreenshotLevelStarter__RunScreenshotLevel_d__46&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenshotLevelStarter__RunScreenshotLevel_d__46", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenshotLevelStarter__RunScreenshotLevel_d__46(ScreenshotLevelStarter__RunScreenshotLevel_d__46 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6861 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::ScreenshotLevelStarter* _____4__this;

  /// @brief Field command, offset: 0x28, size: 0x38, def value: None
  ::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command ___command;

  /// @brief Field <>8__1, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_1* _____8__1;

  /// @brief Field <>8__2, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0* _____8__2;

  /// @brief Field <beatmapLevel>5__2, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* ____beatmapLevel_5__2;

  /// @brief Field <beatmapKey>5__3, offset: 0x78, size: 0x20, def value: None
  ::GlobalNamespace::BeatmapKey ____beatmapKey_5__3;

  /// @brief Field <screenshotExportFolderPath>5__4, offset: 0x98, size: 0x8, def value: None
  ::StringW ____screenshotExportFolderPath_5__4;

  /// @brief Field <gameplayModifiers>5__5, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* ____gameplayModifiers_5__5;

  /// @brief Field <playerSpecificSettings>5__6, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSpecificSettings* ____playerSpecificSettings_5__6;

  /// @brief Field <levelEndActions>5__7, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::ILevelEndActions* ____levelEndActions_5__7;

  /// @brief Field <songDuration>5__8, offset: 0xb8, size: 0x4, def value: None
  float_t ____songDuration_5__8;

  /// @brief Field <nextScreenshotTime>5__9, offset: 0xbc, size: 0x4, def value: None
  float_t ____nextScreenshotTime_5__9;

  /// @brief Field <renderCamera>5__10, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ____renderCamera_5__10;

  /// @brief Field <screenshotTexture>5__11, offset: 0xc8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ____screenshotTexture_5__11;

  /// @brief Field <cancellationTokenSource>5__12, offset: 0xd0, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____cancellationTokenSource_5__12;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46, ___command) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46, _____8__1) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46, _____8__2) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46, ____beatmapLevel_5__2) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46, ____beatmapKey_5__3) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46, ____screenshotExportFolderPath_5__4) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46, ____gameplayModifiers_5__5) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46, ____playerSpecificSettings_5__6) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46, ____levelEndActions_5__7) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46, ____songDuration_5__8) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46, ____nextScreenshotTime_5__9) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46, ____renderCamera_5__10) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46, ____screenshotTexture_5__11) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46, ____cancellationTokenSource_5__12) == 0xd0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46, 0xd8>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ScreenshotLevelStarter/<RunScreenshotLevelQueue>d__45
class CORDL_TYPE ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::ScreenshotLevelStarter* __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x5783cd0, size 0x284, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5783f54, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x5783f5c, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5783f94, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x5783ccc, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::GlobalNamespace::ScreenshotLevelStarter* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::ScreenshotLevelStarter*& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::ScreenshotLevelStarter* value);

  /// @brief Method .ctor, addr 0x5780b1c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45(ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45(ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6862 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::ScreenshotLevelStarter* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45, _____4__this) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ScreenshotLevelStarter
class CORDL_TYPE ScreenshotLevelStarter : public ::System::Object {
public:
  // Declarations
  using RunScreenshotLevelData = ::GlobalNamespace::ScreenshotLevelStarter_RunScreenshotLevelData;

  using _RunScreenshotLevelQueue_d__45 = ::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45;

  using _RunScreenshotLevel_d__46 = ::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46;

  using __c__DisplayClass46_0 = ::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0;

  using __c__DisplayClass46_1 = ::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_1;

  __declspec(property(get = get_Screenshotting)) bool Screenshotting;

  /// @brief Field _beatmapLevels, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevels, put = __cordl_internal_set__beatmapLevels)) ::GlobalNamespace::BeatmapLevelsModel* _beatmapLevels;

  /// @brief Field _cachedGameVersion, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__cachedGameVersion, put = __cordl_internal_set__cachedGameVersion)) ::StringW _cachedGameVersion;

  /// @brief Field _commandQueue, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__commandQueue,
                      put = __cordl_internal_set__commandQueue)) ::System::Collections::Generic::Queue_1<::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command>* _commandQueue;

  /// @brief Field _coroutineStarter, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__coroutineStarter, put = __cordl_internal_set__coroutineStarter)) ::GlobalNamespace::ICoroutineStarter* _coroutineStarter;

  /// @brief Field _determinismConfig, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__determinismConfig, put = __cordl_internal_set__determinismConfig)) ::GlobalNamespace::DeterminismConfig* _determinismConfig;

  /// @brief Field _gameScenesManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__gameScenesManager, put = __cordl_internal_set__gameScenesManager)) ::UnityW<::GlobalNamespace::GameScenesManager> _gameScenesManager;

  /// @brief Field _gameVersionProvider, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__gameVersionProvider, put = __cordl_internal_set__gameVersionProvider)) ::BeatSaber::Init::GameVersionProvider* _gameVersionProvider;

  /// @brief Field _menuTransitionsHelper, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__menuTransitionsHelper, put = __cordl_internal_set__menuTransitionsHelper)) ::UnityW<::GlobalNamespace::MenuTransitionsHelper> _menuTransitionsHelper;

  /// @brief Field _playerDataModel, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel)) ::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _renderingParamsApplicator, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__renderingParamsApplicator,
                      put = __cordl_internal_set__renderingParamsApplicator)) ::GlobalNamespace::IRenderingParamsApplicator* _renderingParamsApplicator;

  /// @brief Field _screenshotQueueCoroutine, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__screenshotQueueCoroutine, put = __cordl_internal_set__screenshotQueueCoroutine)) ::UnityEngine::Coroutine* _screenshotQueueCoroutine;

  /// @brief Field _settingsManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsManager, put = __cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager* _settingsManager;

  /// @brief Field _timeHelper, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__timeHelper, put = __cordl_internal_set__timeHelper)) ::UnityW<::GlobalNamespace::TimeHelper> _timeHelper;

  /// @brief Field kWaitForEndOfFrame, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kWaitForEndOfFrame, put = setStaticF_kWaitForEndOfFrame)) ::UnityEngine::WaitForEndOfFrame* kWaitForEndOfFrame;

  /// @brief Method EnqueueScreenshotLevel, addr 0x57808ac, size 0x11c, virtual false, abstract: false, final false
  inline void EnqueueScreenshotLevel(::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command command);

  /// @brief Method EnqueueScreenshotLevel, addr 0x5780870, size 0x30, virtual false, abstract: false, final false
  inline void EnqueueScreenshotLevel(::StringW levelID, ::StringW characteristic, ::StringW difficulty, float_t screenshotPeriod, ::System::Collections::Generic::List_1<float_t>* screenshotTimes,
                                     int32_t captureFramerate);

  /// @brief Method HandlePauseControllerCanPause, addr 0x5781370, size 0x1c, virtual false, abstract: false, final false
  inline void HandlePauseControllerCanPause(::System::Action_1<bool>* canPause);

  static inline ::GlobalNamespace::ScreenshotLevelStarter* New_ctor();

  /// @brief Method RunScreenshotLevel, addr 0x5780b24, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* RunScreenshotLevel(::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command command);

  /// @brief Method RunScreenshotLevelQueue, addr 0x57809c8, size 0x54, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* RunScreenshotLevelQueue();

  /// @brief Method SaveBuildSpecificMetadata, addr 0x5781134, size 0xf0, virtual false, abstract: false, final false
  static inline void SaveBuildSpecificMetadata(::StringW metadataFolderPath, ::ByRef<::StringW> gameVersion);

  /// @brief Method SaveDeviceMetadata, addr 0x5780f2c, size 0x208, virtual false, abstract: false, final false
  static inline void SaveDeviceMetadata(::StringW metadataFolderPath);

  /// @brief Method SaveMetadata, addr 0x5780ba8, size 0x158, virtual false, abstract: false, final false
  static inline void SaveMetadata(::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command command, ::StringW metadataFolderPath, ::ByRef<::BeatSaber::Settings::Settings> settings,
                                  ::ByRef<::GlobalNamespace::PlayerSpecificSettings*> playerSpecificSettings, ::ByRef<::GlobalNamespace::GameplayModifiers*> gameplayModifiers);

  /// @brief Method SaveMetadataObject, addr 0x5780d00, size 0x22c, virtual false, abstract: false, final false
  static inline void SaveMetadataObject(::System::Object* obj, ::StringW path);

  /// @brief Method StopScreenshotting, addr 0x5780a1c, size 0x100, virtual false, abstract: false, final false
  inline void StopScreenshotting();

  /// @brief Method TakeScreenshotFromCamera, addr 0x5781224, size 0x14c, virtual false, abstract: false, final false
  static inline void TakeScreenshotFromCamera(::UnityEngine::Camera* camera, ::UnityEngine::Texture2D* screenshotTexture);

  constexpr ::GlobalNamespace::BeatmapLevelsModel* const& __cordl_internal_get__beatmapLevels() const;

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get__beatmapLevels();

  constexpr ::StringW const& __cordl_internal_get__cachedGameVersion() const;

  constexpr ::StringW& __cordl_internal_get__cachedGameVersion();

  constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command>* const& __cordl_internal_get__commandQueue() const;

  constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command>*& __cordl_internal_get__commandQueue();

  constexpr ::GlobalNamespace::ICoroutineStarter* const& __cordl_internal_get__coroutineStarter() const;

  constexpr ::GlobalNamespace::ICoroutineStarter*& __cordl_internal_get__coroutineStarter();

  constexpr ::GlobalNamespace::DeterminismConfig* const& __cordl_internal_get__determinismConfig() const;

  constexpr ::GlobalNamespace::DeterminismConfig*& __cordl_internal_get__determinismConfig();

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get__gameScenesManager() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get__gameScenesManager();

  constexpr ::BeatSaber::Init::GameVersionProvider* const& __cordl_internal_get__gameVersionProvider() const;

  constexpr ::BeatSaber::Init::GameVersionProvider*& __cordl_internal_get__gameVersionProvider();

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper> const& __cordl_internal_get__menuTransitionsHelper() const;

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper>& __cordl_internal_get__menuTransitionsHelper();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::GlobalNamespace::IRenderingParamsApplicator* const& __cordl_internal_get__renderingParamsApplicator() const;

  constexpr ::GlobalNamespace::IRenderingParamsApplicator*& __cordl_internal_get__renderingParamsApplicator();

  constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__screenshotQueueCoroutine() const;

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__screenshotQueueCoroutine();

  constexpr ::GlobalNamespace::SettingsManager* const& __cordl_internal_get__settingsManager() const;

  constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager();

  constexpr ::UnityW<::GlobalNamespace::TimeHelper> const& __cordl_internal_get__timeHelper() const;

  constexpr ::UnityW<::GlobalNamespace::TimeHelper>& __cordl_internal_get__timeHelper();

  constexpr void __cordl_internal_set__beatmapLevels(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr void __cordl_internal_set__cachedGameVersion(::StringW value);

  constexpr void __cordl_internal_set__commandQueue(::System::Collections::Generic::Queue_1<::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command>* value);

  constexpr void __cordl_internal_set__coroutineStarter(::GlobalNamespace::ICoroutineStarter* value);

  constexpr void __cordl_internal_set__determinismConfig(::GlobalNamespace::DeterminismConfig* value);

  constexpr void __cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void __cordl_internal_set__gameVersionProvider(::BeatSaber::Init::GameVersionProvider* value);

  constexpr void __cordl_internal_set__menuTransitionsHelper(::UnityW<::GlobalNamespace::MenuTransitionsHelper> value);

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr void __cordl_internal_set__renderingParamsApplicator(::GlobalNamespace::IRenderingParamsApplicator* value);

  constexpr void __cordl_internal_set__screenshotQueueCoroutine(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value);

  constexpr void __cordl_internal_set__timeHelper(::UnityW<::GlobalNamespace::TimeHelper> value);

  /// @brief Method .ctor, addr 0x578138c, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::WaitForEndOfFrame* getStaticF_kWaitForEndOfFrame();

  /// @brief Method get_Screenshotting, addr 0x5780860, size 0x10, virtual false, abstract: false, final false
  inline bool get_Screenshotting();

  static inline void setStaticF_kWaitForEndOfFrame(::UnityEngine::WaitForEndOfFrame* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenshotLevelStarter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScreenshotLevelStarter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenshotLevelStarter(ScreenshotLevelStarter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenshotLevelStarter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenshotLevelStarter(ScreenshotLevelStarter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6863 };

  /// @brief Field kCameraFieldOfView offset 0xffffffff size 0x4
  static constexpr float_t kCameraFieldOfView{ static_cast<float_t>(70.0f) };

  /// @brief Field kCancelledGettingLevelDataVersion offset 0xffffffff size 0x8
  static constexpr ::ConstString kCancelledGettingLevelDataVersion{ u"ScreenshotLevelStarter: Getting level data version was cancelled." };

  /// @brief Field kFmtErrorGettingLevelDataVerison offset 0xffffffff size 0x8
  static constexpr ::ConstString kFmtErrorGettingLevelDataVerison{ u"ScreenshotLevelStarter: Failed getting level data version: {0}" };

  /// @brief Field kFmtMessageDownloadFolder offset 0xffffffff size 0x8
  static constexpr ::ConstString kFmtMessageDownloadFolder{ u"ScreenshotLevelStarter: Screenshots for level found under: {0}" };

  /// @brief Field kFmtMessageErrorCharacteristicNotFound offset 0xffffffff size 0x8
  static constexpr ::ConstString kFmtMessageErrorCharacteristicNotFound{ u"ScreenshotLevelStarter: Level {0} does not have characteristic {1}" };

  /// @brief Field kFmtMessageErrorDifficultyNotFound offset 0xffffffff size 0x8
  static constexpr ::ConstString kFmtMessageErrorDifficultyNotFound{ u"ScreenshotLevelStarter: Level {0} with characteristic {1} does not have difficulty {2}" };

  /// @brief Field kFmtMessageErrorMapNotFound offset 0xffffffff size 0x8
  static constexpr ::ConstString kFmtMessageErrorMapNotFound{ u"ScreenshotLevelStarter: Could not find beatmap level {0}" };

  /// @brief Field kFmtMessageErrorParsingDifficulty offset 0xffffffff size 0x8
  static constexpr ::ConstString kFmtMessageErrorParsingDifficulty{ u"ScreenshotLevelStarter: Unknown difficulty {0}, falling back to ExpertPlus" };

  /// @brief Field kFmtMessageErrorSavingMetadata offset 0xffffffff size 0x8
  static constexpr ::ConstString kFmtMessageErrorSavingMetadata{ u"ScreenshotLevelStarter: Error while saving metadata to file {0}: {1}" };

  /// @brief Field kFmtMessageErrorSavingScreenshot offset 0xffffffff size 0x8
  static constexpr ::ConstString kFmtMessageErrorSavingScreenshot{ u"ScreenshotLevelStarter: Error while saving screenshot to path {0}: {1}" };

  /// @brief Field kFmtMessageSavingMetadata offset 0xffffffff size 0x8
  static constexpr ::ConstString kFmtMessageSavingMetadata{ u"ScreenshotLevelStarter: Writing metadata to path {0}" };

  /// @brief Field kFmtMessageScreenshotTaken offset 0xffffffff size 0x8
  static constexpr ::ConstString kFmtMessageScreenshotTaken{ u"ScreenshotLevelStarter: Writing screenshot to path {0}" };

  /// @brief Field kFmtMessageScreenshottingFinished offset 0xffffffff size 0x8
  static constexpr ::ConstString kFmtMessageScreenshottingFinished{ u"ScreenshotLevelStarter: Finished screenshots for level {0}" };

  /// @brief Field kFmtMessageScreenshottingStarted offset 0xffffffff size 0x8
  static constexpr ::ConstString kFmtMessageScreenshottingStarted{ u"ScreenshotLevelStarter: Starting screenshot test for level {0}, will be stored in {1}" };

  /// @brief Field kFmtMessageSongStarted offset 0xffffffff size 0x8
  static constexpr ::ConstString kFmtMessageSongStarted{ u"ScreenshotLevelStarter: Starting screenshotting of {0}" };

  /// @brief Field kFmtMessageSongsRemaining offset 0xffffffff size 0x8
  static constexpr ::ConstString kFmtMessageSongsRemaining{ u"ScreenshotLevelStarter: -- There are {0} songs in queue..." };

  /// @brief Field kFmtMessaggeWontPlayError offset 0xffffffff size 0x8
  static constexpr ::ConstString kFmtMessaggeWontPlayError{ u"ScreenshotLevelStarter: Failed launching screenshotting for {0} without retrying!" };

  /// @brief Field kFullHDHeight offset 0xffffffff size 0x4
  static constexpr int32_t kFullHDHeight{ static_cast<int32_t>(0x438) };

  /// @brief Field kFullHDWidth offset 0xffffffff size 0x4
  static constexpr int32_t kFullHDWidth{ static_cast<int32_t>(0x780) };

  /// @brief Field kLogPrefix offset 0xffffffff size 0x8
  static constexpr ::ConstString kLogPrefix{ u"ScreenshotLevelStarter: " };

  /// @brief Field kMessageDefaultingToFrameRate offset 0xffffffff size 0x8
  static constexpr ::ConstString kMessageDefaultingToFrameRate{ u"ScreenshotLevelStarter: Defaulting to frame rate of 30 FPS, no valid command.framerate set." };

  /// @brief Field kMessagePlayerSensitivity offset 0xffffffff size 0x8
  static constexpr ::ConstString kMessagePlayerSensitivity{ u"ScreenshotLevelStarter: Player not allowed to play explicit songs" };

  /// @brief Field kMessageQueueFinished offset 0xffffffff size 0x8
  static constexpr ::ConstString kMessageQueueFinished{ u"ScreenshotLevelStarter: ---Finished the screenshot level queue---" };

  /// @brief Field kMessageQueueStarted offset 0xffffffff size 0x8
  static constexpr ::ConstString kMessageQueueStarted{ u"ScreenshotLevelStarter: ---Starting the screenshot level queue---" };

  /// @brief Field kMessageSongFinished offset 0xffffffff size 0x8
  static constexpr ::ConstString kMessageSongFinished{ u"ScreenshotLevelStarter: -- Finished song" };

  /// @brief Field kMessageSongStarted offset 0xffffffff size 0x8
  static constexpr ::ConstString kMessageSongStarted{ u"ScreenshotLevelStarter: -- Started song" };

  /// @brief Field _gameScenesManager, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> ____gameScenesManager;

  /// @brief Field _menuTransitionsHelper, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuTransitionsHelper> ____menuTransitionsHelper;

  /// @brief Field _beatmapLevels, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevels;

  /// @brief Field _gameVersionProvider, offset: 0x28, size: 0x8, def value: None
  ::BeatSaber::Init::GameVersionProvider* ____gameVersionProvider;

  /// @brief Field _settingsManager, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____settingsManager;

  /// @brief Field _determinismConfig, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::DeterminismConfig* ____determinismConfig;

  /// @brief Field _coroutineStarter, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::ICoroutineStarter* ____coroutineStarter;

  /// @brief Field _renderingParamsApplicator, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::IRenderingParamsApplicator* ____renderingParamsApplicator;

  /// @brief Field _playerDataModel, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field _timeHelper, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TimeHelper> ____timeHelper;

  /// @brief Field _commandQueue, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command>* ____commandQueue;

  /// @brief Field _screenshotQueueCoroutine, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ____screenshotQueueCoroutine;

  /// @brief Field _cachedGameVersion, offset: 0x70, size: 0x8, def value: None
  ::StringW ____cachedGameVersion;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScreenshotLevelStarter, ____gameScenesManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotLevelStarter, ____menuTransitionsHelper) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotLevelStarter, ____beatmapLevels) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotLevelStarter, ____gameVersionProvider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotLevelStarter, ____settingsManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotLevelStarter, ____determinismConfig) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotLevelStarter, ____coroutineStarter) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotLevelStarter, ____renderingParamsApplicator) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotLevelStarter, ____playerDataModel) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotLevelStarter, ____timeHelper) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotLevelStarter, ____commandQueue) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotLevelStarter, ____screenshotQueueCoroutine) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotLevelStarter, ____cachedGameVersion) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScreenshotLevelStarter, 0x78>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ScreenshotLevelStarter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScreenshotLevelStarter*, "", "ScreenshotLevelStarter");
NEED_NO_BOX(::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45*, "", "ScreenshotLevelStarter/<RunScreenshotLevelQueue>d__45");
NEED_NO_BOX(::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46*, "", "ScreenshotLevelStarter/<RunScreenshotLevel>d__46");
NEED_NO_BOX(::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0*, "", "ScreenshotLevelStarter/<>c__DisplayClass46_0");
NEED_NO_BOX(::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_1);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_1*, "", "ScreenshotLevelStarter/<>c__DisplayClass46_1");
NEED_NO_BOX(::GlobalNamespace::SerializedBeatmapKey_RunScreenshotLevelData_ScreenshotLevelStarter___c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SerializedBeatmapKey_RunScreenshotLevelData_ScreenshotLevelStarter___c__DisplayClass4_0*, "",
                       "ScreenshotLevelStarter/RunScreenshotLevelData/SerializedBeatmapKey/<>c__DisplayClass4_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_BuildSpecificMetadata, "", "ScreenshotLevelStarter/RunScreenshotLevelData/BuildSpecificMetadata");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command, "", "ScreenshotLevelStarter/RunScreenshotLevelData/Command");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_DeviceMetadata, "", "ScreenshotLevelStarter/RunScreenshotLevelData/DeviceMetadata");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_FolderMetadata, "", "ScreenshotLevelStarter/RunScreenshotLevelData/FolderMetadata");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_SerializedBeatmapKey, "", "ScreenshotLevelStarter/RunScreenshotLevelData/SerializedBeatmapKey");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Settings, "", "ScreenshotLevelStarter/RunScreenshotLevelData/Settings");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScreenshotLevelStarter_RunScreenshotLevelData, "", "ScreenshotLevelStarter/RunScreenshotLevelData");
