#pragma once
// IWYU pragma private; include "GlobalNamespace/GameplayCoreSceneSetupData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_def.hpp"
#include "GlobalNamespace/zzzz__LoadBeatmapLevelDataResult_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolManager_def.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameplayCoreSceneSetupData)
namespace GlobalNamespace {
class AudioClipAsyncLoader;
}
namespace GlobalNamespace {
class BeatmapBasicData;
}
namespace GlobalNamespace {
class BeatmapDataLoader;
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
class BeatmapLevelsEntitlementModel;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
class ColorScheme;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
class EnvironmentsListModel;
}
namespace GlobalNamespace {
struct GameplayCoreSceneSetupData__LoadBeatmapLevelData_d__39;
}
namespace GlobalNamespace {
struct GameplayCoreSceneSetupData__LoadTransformedBeatmapDataAsync_d__37;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class IBeatmapLevelData;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
class PracticeSettings;
}
namespace GlobalNamespace {
struct RecordingToolManager_SetupData;
}
namespace GlobalNamespace {
class SettingsManager;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace GlobalNamespace {
struct GameplayCoreSceneSetupData__LoadBeatmapLevelData_d__39;
}
namespace GlobalNamespace {
struct GameplayCoreSceneSetupData__LoadTransformedBeatmapDataAsync_d__37;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameplayCoreSceneSetupData);
MARK_VAL_T(::GlobalNamespace::GameplayCoreSceneSetupData__LoadBeatmapLevelData_d__39);
MARK_VAL_T(::GlobalNamespace::GameplayCoreSceneSetupData__LoadTransformedBeatmapDataAsync_d__37);
// Dependencies BeatmapLevelDataVersion, LoadBeatmapLevelDataResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameplayCoreSceneSetupData/<LoadBeatmapLevelData>d__39
struct CORDL_TYPE GameplayCoreSceneSetupData__LoadBeatmapLevelData_d__39 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3b48904, size 0x2a0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3b48ba4, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayCoreSceneSetupData__LoadBeatmapLevelData_d__39();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelData*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::GameplayCoreSceneSetupData*", modifiers: "", def_value: None }, CppParam { name: "beatmapLevelDataVersion", ty: "::GlobalNamespace::BeatmapLevelDataVersion", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult>", modifiers: "", def_value: None }]
  constexpr GameplayCoreSceneSetupData__LoadBeatmapLevelData_d__39(int32_t __1__state,
                                                                   ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelData*> __t__builder,
                                                                   ::GlobalNamespace::GameplayCoreSceneSetupData* __4__this, ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion,
                                                                   ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5240 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelData*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::GameplayCoreSceneSetupData* __4__this;

  /// @brief Field beatmapLevelDataVersion, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData__LoadBeatmapLevelData_d__39, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData__LoadBeatmapLevelData_d__39, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData__LoadBeatmapLevelData_d__39, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData__LoadBeatmapLevelData_d__39, beatmapLevelDataVersion) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData__LoadBeatmapLevelData_d__39, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayCoreSceneSetupData__LoadBeatmapLevelData_d__39, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapLevelDataVersion, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameplayCoreSceneSetupData/<LoadTransformedBeatmapDataAsync>d__37
struct CORDL_TYPE GameplayCoreSceneSetupData__LoadTransformedBeatmapDataAsync_d__37 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3b48c20, size 0x828, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3b49448, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayCoreSceneSetupData__LoadTransformedBeatmapDataAsync_d__37();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::GameplayCoreSceneSetupData*", modifiers: "",
  // def_value: None }, CppParam { name: "_beatmapLevelDataVersion_5__2", ty: "::GlobalNamespace::BeatmapLevelDataVersion", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataVersion>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelData*>", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::AudioClip>>", modifiers: "", def_value: None }, CppParam { name: "__u__4", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: None }]
  constexpr GameplayCoreSceneSetupData__LoadTransformedBeatmapDataAsync_d__37(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                              ::GlobalNamespace::GameplayCoreSceneSetupData* __4__this,
                                                                              ::GlobalNamespace::BeatmapLevelDataVersion _beatmapLevelDataVersion_5__2,
                                                                              ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataVersion> __u__1,
                                                                              ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelData*> __u__2,
                                                                              ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::AudioClip>> __u__3,
                                                                              ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*> __u__4) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5241 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::GameplayCoreSceneSetupData* __4__this;

  /// @brief Field <beatmapLevelDataVersion>5__2, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapLevelDataVersion _beatmapLevelDataVersion_5__2;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataVersion> __u__1;

  /// @brief Field <>u__2, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelData*> __u__2;

  /// @brief Field <>u__3, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::AudioClip>> __u__3;

  /// @brief Field <>u__4, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*> __u__4;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData__LoadTransformedBeatmapDataAsync_d__37, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData__LoadTransformedBeatmapDataAsync_d__37, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData__LoadTransformedBeatmapDataAsync_d__37, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData__LoadTransformedBeatmapDataAsync_d__37, _beatmapLevelDataVersion_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData__LoadTransformedBeatmapDataAsync_d__37, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData__LoadTransformedBeatmapDataAsync_d__37, __u__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData__LoadTransformedBeatmapDataAsync_d__37, __u__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData__LoadTransformedBeatmapDataAsync_d__37, __u__4) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayCoreSceneSetupData__LoadTransformedBeatmapDataAsync_d__37, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapKey, RecordingToolManager::SetupData, SceneSetupData, System.Nullable`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameplayCoreSceneSetupData
class CORDL_TYPE GameplayCoreSceneSetupData : public ::GlobalNamespace::SceneSetupData {
public:
  // Declarations
  using _LoadBeatmapLevelData_d__39 = ::GlobalNamespace::GameplayCoreSceneSetupData__LoadBeatmapLevelData_d__39;

  using _LoadTransformedBeatmapDataAsync_d__37 = ::GlobalNamespace::GameplayCoreSceneSetupData__LoadTransformedBeatmapDataAsync_d__37;

  /// @brief Field _allowNullBeatmapLevelData, offset 0xc0, size 0x1
  __declspec(property(get = __cordl_internal_get__allowNullBeatmapLevelData, put = __cordl_internal_set__allowNullBeatmapLevelData)) bool _allowNullBeatmapLevelData;

  /// @brief Field _audioClipAsyncLoader, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__audioClipAsyncLoader, put = __cordl_internal_set__audioClipAsyncLoader)) ::GlobalNamespace::AudioClipAsyncLoader* _audioClipAsyncLoader;

  /// @brief Field _beatmapDataLoader, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapDataLoader, put = __cordl_internal_set__beatmapDataLoader)) ::GlobalNamespace::BeatmapDataLoader* _beatmapDataLoader;

  /// @brief Field <beatmapLevelData>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelData_k__BackingField,
                      put = __cordl_internal_set__beatmapLevelData_k__BackingField)) ::GlobalNamespace::IBeatmapLevelData* _beatmapLevelData_k__BackingField;

  /// @brief Field _beatmapLevelsEntitlementModel, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsEntitlementModel,
                      put = __cordl_internal_set__beatmapLevelsEntitlementModel)) ::GlobalNamespace::BeatmapLevelsEntitlementModel* _beatmapLevelsEntitlementModel;

  /// @brief Field _beatmapLevelsModel, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsModel, put = __cordl_internal_set__beatmapLevelsModel)) ::GlobalNamespace::BeatmapLevelsModel* _beatmapLevelsModel;

  /// @brief Field _enableBeatmapDataCaching, offset 0xc1, size 0x1
  __declspec(property(get = __cordl_internal_get__enableBeatmapDataCaching, put = __cordl_internal_set__enableBeatmapDataCaching)) bool _enableBeatmapDataCaching;

  /// @brief Field _settingsManager, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsManager, put = __cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager* _settingsManager;

  /// @brief Field <songAudioClip>k__BackingField, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__songAudioClip_k__BackingField, put = __cordl_internal_set__songAudioClip_k__BackingField)) ::UnityW<::UnityEngine::AudioClip>
      _songAudioClip_k__BackingField;

  /// @brief Field <transformedBeatmapData>k__BackingField, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__transformedBeatmapData_k__BackingField,
                      put = __cordl_internal_set__transformedBeatmapData_k__BackingField)) ::GlobalNamespace::IReadonlyBeatmapData* _transformedBeatmapData_k__BackingField;

  /// @brief Field beatmapBasicData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapBasicData, put = __cordl_internal_set_beatmapBasicData)) ::GlobalNamespace::BeatmapBasicData* beatmapBasicData;

  /// @brief Field beatmapKey, offset 0x10, size 0x18
  __declspec(property(get = __cordl_internal_get_beatmapKey, put = __cordl_internal_set_beatmapKey)) ::GlobalNamespace::BeatmapKey beatmapKey;

  /// @brief Field beatmapLevel, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapLevel, put = __cordl_internal_set_beatmapLevel)) ::GlobalNamespace::BeatmapLevel* beatmapLevel;

  __declspec(property(get = get_beatmapLevelData, put = set_beatmapLevelData)) ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData;

  /// @brief Field colorScheme, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_colorScheme, put = __cordl_internal_set_colorScheme)) ::GlobalNamespace::ColorScheme* colorScheme;

  /// @brief Field environmentsListModel, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_environmentsListModel, put = __cordl_internal_set_environmentsListModel)) ::GlobalNamespace::EnvironmentsListModel* environmentsListModel;

  /// @brief Field gameplayModifiers, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_gameplayModifiers, put = __cordl_internal_set_gameplayModifiers)) ::GlobalNamespace::GameplayModifiers* gameplayModifiers;

  /// @brief Field originalEnvironmentInfo, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_originalEnvironmentInfo, put = __cordl_internal_set_originalEnvironmentInfo)) ::UnityW<::GlobalNamespace::EnvironmentInfoSO> originalEnvironmentInfo;

  /// @brief Field playerSpecificSettings, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_playerSpecificSettings, put = __cordl_internal_set_playerSpecificSettings)) ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;

  /// @brief Field practiceSettings, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_practiceSettings, put = __cordl_internal_set_practiceSettings)) ::GlobalNamespace::PracticeSettings* practiceSettings;

  /// @brief Field recordingToolData, offset 0x70, size 0x3
  __declspec(property(get = __cordl_internal_get_recordingToolData, put = __cordl_internal_set_recordingToolData)) ::System::Nullable_1<::GlobalNamespace::RecordingToolManager_SetupData>
      recordingToolData;

  __declspec(property(get = get_songAudioClip, put = set_songAudioClip)) ::UnityW<::UnityEngine::AudioClip> songAudioClip;

  /// @brief Field targetEnvironmentInfo, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_targetEnvironmentInfo, put = __cordl_internal_set_targetEnvironmentInfo)) ::UnityW<::GlobalNamespace::EnvironmentInfoSO> targetEnvironmentInfo;

  __declspec(property(get = get_transformedBeatmapData, put = set_transformedBeatmapData)) ::GlobalNamespace::IReadonlyBeatmapData* transformedBeatmapData;

  /// @brief Field useTestNoteCutSoundEffects, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_useTestNoteCutSoundEffects, put = __cordl_internal_set_useTestNoteCutSoundEffects)) bool useTestNoteCutSoundEffects;

  /// @brief Method ApplyDisableUpdateAlwaysConfiguration, addr 0x3b48360, size 0x6c, virtual false, abstract: false, final false
  inline void ApplyDisableUpdateAlwaysConfiguration();

  /// @brief Method LoadBeatmapLevelData, addr 0x3b48814, size 0xf0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevelData*>* LoadBeatmapLevelData(::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion);

  /// @brief Method LoadTransformedBeatmapData, addr 0x3b483cc, size 0x320, virtual false, abstract: false, final false
  inline void LoadTransformedBeatmapData();

  /// @brief Method LoadTransformedBeatmapDataAsync, addr 0x3b48750, size 0xc4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* LoadTransformedBeatmapDataAsync();

  static inline ::GlobalNamespace::GameplayCoreSceneSetupData*
  New_ctor(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
           ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::PracticeSettings* practiceSettings, bool useTestNoteCutSoundEffects,
           ::GlobalNamespace::EnvironmentInfoSO* targetEnvironmentInfo, ::GlobalNamespace::EnvironmentInfoSO* originalEnvironmentInfo, ::GlobalNamespace::ColorScheme* colorScheme,
           ::GlobalNamespace::SettingsManager* settingsManager, ::GlobalNamespace::AudioClipAsyncLoader* audioClipAsyncLoader, ::GlobalNamespace::BeatmapDataLoader* beatmapDataLoader,
           ::GlobalNamespace::BeatmapLevelsEntitlementModel* beatmapLevelsEntitlementModel, bool enableBeatmapDataCaching, bool allowNullBeatmapLevelData,
           ::GlobalNamespace::EnvironmentsListModel* environmentsListModel, ::System::Nullable_1<::GlobalNamespace::RecordingToolManager_SetupData> recordingToolData);

  static inline ::GlobalNamespace::GameplayCoreSceneSetupData*
  New_ctor(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
           ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::PracticeSettings* practiceSettings, bool useTestNoteCutSoundEffects,
           ::GlobalNamespace::EnvironmentInfoSO* targetEnvironmentInfo, ::GlobalNamespace::EnvironmentInfoSO* originalEnvironmentInfo, ::GlobalNamespace::ColorScheme* colorScheme,
           ::GlobalNamespace::SettingsManager* settingsManager, ::GlobalNamespace::AudioClipAsyncLoader* audioClipAsyncLoader, ::GlobalNamespace::BeatmapDataLoader* beatmapDataLoader,
           ::GlobalNamespace::BeatmapLevelsEntitlementModel* beatmapLevelsEntitlementModel, bool enableBeatmapDataCaching, ::GlobalNamespace::EnvironmentsListModel* environmentsListModel,
           ::System::Nullable_1<::GlobalNamespace::RecordingToolManager_SetupData> recordingToolData);

  static inline ::GlobalNamespace::GameplayCoreSceneSetupData*
  New_ctor(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
           ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::PracticeSettings* practiceSettings, bool useTestNoteCutSoundEffects,
           ::GlobalNamespace::EnvironmentInfoSO* targetEnvironmentInfo, ::GlobalNamespace::EnvironmentInfoSO* originalEnvironmentInfo, ::GlobalNamespace::ColorScheme* colorScheme,
           ::GlobalNamespace::SettingsManager* settingsManager, ::GlobalNamespace::AudioClipAsyncLoader* audioClipAsyncLoader, ::GlobalNamespace::BeatmapDataLoader* beatmapDataLoader,
           ::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel, ::GlobalNamespace::BeatmapLevelsEntitlementModel* beatmapLevelsEntitlementModel, bool enableBeatmapDataCaching,
           ::GlobalNamespace::EnvironmentsListModel* environmentsListModel, ::System::Nullable_1<::GlobalNamespace::RecordingToolManager_SetupData> recordingToolData);

  static inline ::GlobalNamespace::GameplayCoreSceneSetupData*
  New_ctor(::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
           ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::PracticeSettings* practiceSettings,
           bool useTestNoteCutSoundEffects, ::GlobalNamespace::EnvironmentInfoSO* targetEnvironmentInfo, ::GlobalNamespace::EnvironmentInfoSO* originalEnvironmentInfo,
           ::GlobalNamespace::ColorScheme* colorScheme, ::GlobalNamespace::SettingsManager* settingsManager, ::GlobalNamespace::AudioClipAsyncLoader* audioClipAsyncLoader,
           ::GlobalNamespace::BeatmapDataLoader* beatmapDataLoader, ::GlobalNamespace::BeatmapLevelsEntitlementModel* beatmapLevelsEntitlementModel, bool enableBeatmapDataCaching,
           ::GlobalNamespace::EnvironmentsListModel* environmentsListModel, ::System::Nullable_1<::GlobalNamespace::RecordingToolManager_SetupData> recordingToolData);

  /// @brief Method TransformBeatmapData, addr 0x3b486ec, size 0x64, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IReadonlyBeatmapData* TransformBeatmapData(::GlobalNamespace::IReadonlyBeatmapData* beatmapData);

  constexpr bool const& __cordl_internal_get__allowNullBeatmapLevelData() const;

  constexpr bool& __cordl_internal_get__allowNullBeatmapLevelData();

  constexpr ::GlobalNamespace::AudioClipAsyncLoader* const& __cordl_internal_get__audioClipAsyncLoader() const;

  constexpr ::GlobalNamespace::AudioClipAsyncLoader*& __cordl_internal_get__audioClipAsyncLoader();

  constexpr ::GlobalNamespace::BeatmapDataLoader* const& __cordl_internal_get__beatmapDataLoader() const;

  constexpr ::GlobalNamespace::BeatmapDataLoader*& __cordl_internal_get__beatmapDataLoader();

  constexpr ::GlobalNamespace::IBeatmapLevelData* const& __cordl_internal_get__beatmapLevelData_k__BackingField() const;

  constexpr ::GlobalNamespace::IBeatmapLevelData*& __cordl_internal_get__beatmapLevelData_k__BackingField();

  constexpr ::GlobalNamespace::BeatmapLevelsEntitlementModel* const& __cordl_internal_get__beatmapLevelsEntitlementModel() const;

  constexpr ::GlobalNamespace::BeatmapLevelsEntitlementModel*& __cordl_internal_get__beatmapLevelsEntitlementModel();

  constexpr ::GlobalNamespace::BeatmapLevelsModel* const& __cordl_internal_get__beatmapLevelsModel() const;

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get__beatmapLevelsModel();

  constexpr bool const& __cordl_internal_get__enableBeatmapDataCaching() const;

  constexpr bool& __cordl_internal_get__enableBeatmapDataCaching();

  constexpr ::GlobalNamespace::SettingsManager* const& __cordl_internal_get__settingsManager() const;

  constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager();

  constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__songAudioClip_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__songAudioClip_k__BackingField();

  constexpr ::GlobalNamespace::IReadonlyBeatmapData* const& __cordl_internal_get__transformedBeatmapData_k__BackingField() const;

  constexpr ::GlobalNamespace::IReadonlyBeatmapData*& __cordl_internal_get__transformedBeatmapData_k__BackingField();

  constexpr ::GlobalNamespace::BeatmapBasicData* const& __cordl_internal_get_beatmapBasicData() const;

  constexpr ::GlobalNamespace::BeatmapBasicData*& __cordl_internal_get_beatmapBasicData();

  constexpr ::GlobalNamespace::BeatmapKey const& __cordl_internal_get_beatmapKey() const;

  constexpr ::GlobalNamespace::BeatmapKey& __cordl_internal_get_beatmapKey();

  constexpr ::GlobalNamespace::BeatmapLevel* const& __cordl_internal_get_beatmapLevel() const;

  constexpr ::GlobalNamespace::BeatmapLevel*& __cordl_internal_get_beatmapLevel();

  constexpr ::GlobalNamespace::ColorScheme* const& __cordl_internal_get_colorScheme() const;

  constexpr ::GlobalNamespace::ColorScheme*& __cordl_internal_get_colorScheme();

  constexpr ::GlobalNamespace::EnvironmentsListModel* const& __cordl_internal_get_environmentsListModel() const;

  constexpr ::GlobalNamespace::EnvironmentsListModel*& __cordl_internal_get_environmentsListModel();

  constexpr ::GlobalNamespace::GameplayModifiers* const& __cordl_internal_get_gameplayModifiers() const;

  constexpr ::GlobalNamespace::GameplayModifiers*& __cordl_internal_get_gameplayModifiers();

  constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO> const& __cordl_internal_get_originalEnvironmentInfo() const;

  constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO>& __cordl_internal_get_originalEnvironmentInfo();

  constexpr ::GlobalNamespace::PlayerSpecificSettings* const& __cordl_internal_get_playerSpecificSettings() const;

  constexpr ::GlobalNamespace::PlayerSpecificSettings*& __cordl_internal_get_playerSpecificSettings();

  constexpr ::GlobalNamespace::PracticeSettings* const& __cordl_internal_get_practiceSettings() const;

  constexpr ::GlobalNamespace::PracticeSettings*& __cordl_internal_get_practiceSettings();

  constexpr ::System::Nullable_1<::GlobalNamespace::RecordingToolManager_SetupData> const& __cordl_internal_get_recordingToolData() const;

  constexpr ::System::Nullable_1<::GlobalNamespace::RecordingToolManager_SetupData>& __cordl_internal_get_recordingToolData();

  constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO> const& __cordl_internal_get_targetEnvironmentInfo() const;

  constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO>& __cordl_internal_get_targetEnvironmentInfo();

  constexpr bool const& __cordl_internal_get_useTestNoteCutSoundEffects() const;

  constexpr bool& __cordl_internal_get_useTestNoteCutSoundEffects();

  constexpr void __cordl_internal_set__allowNullBeatmapLevelData(bool value);

  constexpr void __cordl_internal_set__audioClipAsyncLoader(::GlobalNamespace::AudioClipAsyncLoader* value);

  constexpr void __cordl_internal_set__beatmapDataLoader(::GlobalNamespace::BeatmapDataLoader* value);

  constexpr void __cordl_internal_set__beatmapLevelData_k__BackingField(::GlobalNamespace::IBeatmapLevelData* value);

  constexpr void __cordl_internal_set__beatmapLevelsEntitlementModel(::GlobalNamespace::BeatmapLevelsEntitlementModel* value);

  constexpr void __cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr void __cordl_internal_set__enableBeatmapDataCaching(bool value);

  constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value);

  constexpr void __cordl_internal_set__songAudioClip_k__BackingField(::UnityW<::UnityEngine::AudioClip> value);

  constexpr void __cordl_internal_set__transformedBeatmapData_k__BackingField(::GlobalNamespace::IReadonlyBeatmapData* value);

  constexpr void __cordl_internal_set_beatmapBasicData(::GlobalNamespace::BeatmapBasicData* value);

  constexpr void __cordl_internal_set_beatmapKey(::GlobalNamespace::BeatmapKey value);

  constexpr void __cordl_internal_set_beatmapLevel(::GlobalNamespace::BeatmapLevel* value);

  constexpr void __cordl_internal_set_colorScheme(::GlobalNamespace::ColorScheme* value);

  constexpr void __cordl_internal_set_environmentsListModel(::GlobalNamespace::EnvironmentsListModel* value);

  constexpr void __cordl_internal_set_gameplayModifiers(::GlobalNamespace::GameplayModifiers* value);

  constexpr void __cordl_internal_set_originalEnvironmentInfo(::UnityW<::GlobalNamespace::EnvironmentInfoSO> value);

  constexpr void __cordl_internal_set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value);

  constexpr void __cordl_internal_set_practiceSettings(::GlobalNamespace::PracticeSettings* value);

  constexpr void __cordl_internal_set_recordingToolData(::System::Nullable_1<::GlobalNamespace::RecordingToolManager_SetupData> value);

  constexpr void __cordl_internal_set_targetEnvironmentInfo(::UnityW<::GlobalNamespace::EnvironmentInfoSO> value);

  constexpr void __cordl_internal_set_useTestNoteCutSoundEffects(bool value);

  /// @brief Method .ctor, addr 0x3b480e4, size 0x1b0, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                    ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::PracticeSettings* practiceSettings, bool useTestNoteCutSoundEffects,
                    ::GlobalNamespace::EnvironmentInfoSO* targetEnvironmentInfo, ::GlobalNamespace::EnvironmentInfoSO* originalEnvironmentInfo, ::GlobalNamespace::ColorScheme* colorScheme,
                    ::GlobalNamespace::SettingsManager* settingsManager, ::GlobalNamespace::AudioClipAsyncLoader* audioClipAsyncLoader, ::GlobalNamespace::BeatmapDataLoader* beatmapDataLoader,
                    ::GlobalNamespace::BeatmapLevelsEntitlementModel* beatmapLevelsEntitlementModel, bool enableBeatmapDataCaching, bool allowNullBeatmapLevelData,
                    ::GlobalNamespace::EnvironmentsListModel* environmentsListModel, ::System::Nullable_1<::GlobalNamespace::RecordingToolManager_SetupData> recordingToolData);

  /// @brief Method .ctor, addr 0x3b48314, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                    ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::PracticeSettings* practiceSettings, bool useTestNoteCutSoundEffects,
                    ::GlobalNamespace::EnvironmentInfoSO* targetEnvironmentInfo, ::GlobalNamespace::EnvironmentInfoSO* originalEnvironmentInfo, ::GlobalNamespace::ColorScheme* colorScheme,
                    ::GlobalNamespace::SettingsManager* settingsManager, ::GlobalNamespace::AudioClipAsyncLoader* audioClipAsyncLoader, ::GlobalNamespace::BeatmapDataLoader* beatmapDataLoader,
                    ::GlobalNamespace::BeatmapLevelsEntitlementModel* beatmapLevelsEntitlementModel, bool enableBeatmapDataCaching, ::GlobalNamespace::EnvironmentsListModel* environmentsListModel,
                    ::System::Nullable_1<::GlobalNamespace::RecordingToolManager_SetupData> recordingToolData);

  /// @brief Method .ctor, addr 0x3b48088, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                    ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::PracticeSettings* practiceSettings, bool useTestNoteCutSoundEffects,
                    ::GlobalNamespace::EnvironmentInfoSO* targetEnvironmentInfo, ::GlobalNamespace::EnvironmentInfoSO* originalEnvironmentInfo, ::GlobalNamespace::ColorScheme* colorScheme,
                    ::GlobalNamespace::SettingsManager* settingsManager, ::GlobalNamespace::AudioClipAsyncLoader* audioClipAsyncLoader, ::GlobalNamespace::BeatmapDataLoader* beatmapDataLoader,
                    ::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel, ::GlobalNamespace::BeatmapLevelsEntitlementModel* beatmapLevelsEntitlementModel, bool enableBeatmapDataCaching,
                    ::GlobalNamespace::EnvironmentsListModel* environmentsListModel, ::System::Nullable_1<::GlobalNamespace::RecordingToolManager_SetupData> recordingToolData);

  /// @brief Method .ctor, addr 0x3b48294, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                    ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::PracticeSettings* practiceSettings,
                    bool useTestNoteCutSoundEffects, ::GlobalNamespace::EnvironmentInfoSO* targetEnvironmentInfo, ::GlobalNamespace::EnvironmentInfoSO* originalEnvironmentInfo,
                    ::GlobalNamespace::ColorScheme* colorScheme, ::GlobalNamespace::SettingsManager* settingsManager, ::GlobalNamespace::AudioClipAsyncLoader* audioClipAsyncLoader,
                    ::GlobalNamespace::BeatmapDataLoader* beatmapDataLoader, ::GlobalNamespace::BeatmapLevelsEntitlementModel* beatmapLevelsEntitlementModel, bool enableBeatmapDataCaching,
                    ::GlobalNamespace::EnvironmentsListModel* environmentsListModel, ::System::Nullable_1<::GlobalNamespace::RecordingToolManager_SetupData> recordingToolData);

  /// @brief Method get_beatmapLevelData, addr 0x3b48068, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IBeatmapLevelData* get_beatmapLevelData();

  /// @brief Method get_songAudioClip, addr 0x3b48058, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioClip> get_songAudioClip();

  /// @brief Method get_transformedBeatmapData, addr 0x3b48078, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IReadonlyBeatmapData* get_transformedBeatmapData();

  /// @brief Method set_beatmapLevelData, addr 0x3b48070, size 0x8, virtual false, abstract: false, final false
  inline void set_beatmapLevelData(::GlobalNamespace::IBeatmapLevelData* value);

  /// @brief Method set_songAudioClip, addr 0x3b48060, size 0x8, virtual false, abstract: false, final false
  inline void set_songAudioClip(::UnityEngine::AudioClip* value);

  /// @brief Method set_transformedBeatmapData, addr 0x3b48080, size 0x8, virtual false, abstract: false, final false
  inline void set_transformedBeatmapData(::GlobalNamespace::IReadonlyBeatmapData* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayCoreSceneSetupData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameplayCoreSceneSetupData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayCoreSceneSetupData(GameplayCoreSceneSetupData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayCoreSceneSetupData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayCoreSceneSetupData(GameplayCoreSceneSetupData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5242 };

  /// @brief Field beatmapKey, offset: 0x10, size: 0x18, def value: None
  ::GlobalNamespace::BeatmapKey ___beatmapKey;

  /// @brief Field beatmapBasicData, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapBasicData* ___beatmapBasicData;

  /// @brief Field beatmapLevel, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* ___beatmapLevel;

  /// @brief Field gameplayModifiers, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* ___gameplayModifiers;

  /// @brief Field playerSpecificSettings, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSpecificSettings* ___playerSpecificSettings;

  /// @brief Field practiceSettings, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::PracticeSettings* ___practiceSettings;

  /// @brief Field useTestNoteCutSoundEffects, offset: 0x50, size: 0x1, def value: None
  bool ___useTestNoteCutSoundEffects;

  /// @brief Field targetEnvironmentInfo, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EnvironmentInfoSO> ___targetEnvironmentInfo;

  /// @brief Field originalEnvironmentInfo, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EnvironmentInfoSO> ___originalEnvironmentInfo;

  /// @brief Field colorScheme, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::ColorScheme* ___colorScheme;

  /// @brief Field recordingToolData, offset: 0x70, size: 0x3, def value: None
  ::System::Nullable_1<::GlobalNamespace::RecordingToolManager_SetupData> ___recordingToolData;

  /// @brief Field environmentsListModel, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentsListModel* ___environmentsListModel;

  /// @brief Field <songAudioClip>k__BackingField, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioClip> ____songAudioClip_k__BackingField;

  /// @brief Field <beatmapLevelData>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevelData* ____beatmapLevelData_k__BackingField;

  /// @brief Field <transformedBeatmapData>k__BackingField, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::IReadonlyBeatmapData* ____transformedBeatmapData_k__BackingField;

  /// @brief Field _settingsManager, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____settingsManager;

  /// @brief Field _beatmapLevelsModel, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevelsModel;

  /// @brief Field _beatmapLevelsEntitlementModel, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsEntitlementModel* ____beatmapLevelsEntitlementModel;

  /// @brief Field _audioClipAsyncLoader, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::AudioClipAsyncLoader* ____audioClipAsyncLoader;

  /// @brief Field _beatmapDataLoader, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataLoader* ____beatmapDataLoader;

  /// @brief Field _allowNullBeatmapLevelData, offset: 0xc0, size: 0x1, def value: None
  bool ____allowNullBeatmapLevelData;

  /// @brief Field _enableBeatmapDataCaching, offset: 0xc1, size: 0x1, def value: None
  bool ____enableBeatmapDataCaching;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ___beatmapKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ___beatmapBasicData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ___beatmapLevel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ___gameplayModifiers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ___playerSpecificSettings) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ___practiceSettings) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ___useTestNoteCutSoundEffects) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ___targetEnvironmentInfo) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ___originalEnvironmentInfo) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ___colorScheme) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ___recordingToolData) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ___environmentsListModel) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ____songAudioClip_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ____beatmapLevelData_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ____transformedBeatmapData_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ____settingsManager) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ____beatmapLevelsModel) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ____beatmapLevelsEntitlementModel) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ____audioClipAsyncLoader) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ____beatmapDataLoader) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ____allowNullBeatmapLevelData) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ____enableBeatmapDataCaching) == 0xc1, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayCoreSceneSetupData, 0xc8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameplayCoreSceneSetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayCoreSceneSetupData*, "", "GameplayCoreSceneSetupData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayCoreSceneSetupData__LoadBeatmapLevelData_d__39, "", "GameplayCoreSceneSetupData/<LoadBeatmapLevelData>d__39");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayCoreSceneSetupData__LoadTransformedBeatmapDataAsync_d__37, "", "GameplayCoreSceneSetupData/<LoadTransformedBeatmapDataAsync>d__37");
