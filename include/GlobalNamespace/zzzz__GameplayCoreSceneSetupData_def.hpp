#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__LoadBeatmapLevelDataResult_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolManager_def.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
class BeatmapLevel;
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
class GameplayModifiers;
}
namespace GlobalNamespace {
class IBeatmapLevelData;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
struct LoadBeatmapLevelDataResult;
}
namespace GlobalNamespace {
class MainSettingsModelSO;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
class PracticeSettings;
}
namespace GlobalNamespace {
struct __GameplayCoreSceneSetupData___LoadBeatmapLevelData_d__35;
}
namespace GlobalNamespace {
struct __GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__33;
}
namespace GlobalNamespace {
struct __RecordingToolManager__SetupData;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
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
struct __GameplayCoreSceneSetupData___LoadBeatmapLevelData_d__35;
}
namespace GlobalNamespace {
struct __GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__33;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameplayCoreSceneSetupData);
MARK_VAL_T(::GlobalNamespace::__GameplayCoreSceneSetupData___LoadBeatmapLevelData_d__35);
MARK_VAL_T(::GlobalNamespace::__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__33);
// Type: ::<LoadTransformedBeatmapDataAsync>d__33
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::GameplayCoreSceneSetupData::<LoadTransformedBeatmapDataAsync>d__33
struct CORDL_TYPE __GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__33 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x25a0050, size 0x4ec, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x25a053c, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__33();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::GameplayCoreSceneSetupData*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelData*>", modifiers: "", def_value: None }, CppParam { name:
  // "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::AudioClip>>", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: None }]
  constexpr __GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__33(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                 ::GlobalNamespace::GameplayCoreSceneSetupData* __4__this,
                                                                                 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelData*> __u__1,
                                                                                 ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::AudioClip>> __u__2,
                                                                                 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*> __u__3) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::GameplayCoreSceneSetupData* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelData*> __u__1;

  /// @brief Field <>u__2, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::AudioClip>> __u__2;

  /// @brief Field <>u__3, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*> __u__3;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__33, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__33, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__33, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__33, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__33, __u__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__33, __u__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__33, __u__3) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<LoadBeatmapLevelData>d__35
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::GameplayCoreSceneSetupData::<LoadBeatmapLevelData>d__35
struct CORDL_TYPE __GameplayCoreSceneSetupData___LoadBeatmapLevelData_d__35 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x25a0548, size 0x23c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x25a0784, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameplayCoreSceneSetupData___LoadBeatmapLevelData_d__35();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelData*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::GameplayCoreSceneSetupData*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult>", modifiers: "", def_value: None }]
  constexpr __GameplayCoreSceneSetupData___LoadBeatmapLevelData_d__35(int32_t __1__state,
                                                                      ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelData*> __t__builder,
                                                                      ::GlobalNamespace::GameplayCoreSceneSetupData* __4__this,
                                                                      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelData*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::GameplayCoreSceneSetupData* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameplayCoreSceneSetupData___LoadBeatmapLevelData_d__35, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameplayCoreSceneSetupData___LoadBeatmapLevelData_d__35, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameplayCoreSceneSetupData___LoadBeatmapLevelData_d__35, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameplayCoreSceneSetupData___LoadBeatmapLevelData_d__35, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameplayCoreSceneSetupData___LoadBeatmapLevelData_d__35, __u__1) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GameplayCoreSceneSetupData
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 170, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameplayCoreSceneSetupData*
class CORDL_TYPE GameplayCoreSceneSetupData : public ::GlobalNamespace::SceneSetupData {
public:
  // Declarations
  using _LoadBeatmapLevelData_d__35 = ::GlobalNamespace::__GameplayCoreSceneSetupData___LoadBeatmapLevelData_d__35;

  using _LoadTransformedBeatmapDataAsync_d__33 = ::GlobalNamespace::__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__33;

  /// @brief Field _allowNullBeatmapLevelData, offset 0xa8, size 0x1
  __declspec(property(get = __cordl_internal_get__allowNullBeatmapLevelData, put = __cordl_internal_set__allowNullBeatmapLevelData)) bool _allowNullBeatmapLevelData;

  /// @brief Field _audioClipAsyncLoader, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__audioClipAsyncLoader, put = __cordl_internal_set__audioClipAsyncLoader))::GlobalNamespace::AudioClipAsyncLoader* _audioClipAsyncLoader;

  /// @brief Field _beatmapDataLoader, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapDataLoader, put = __cordl_internal_set__beatmapDataLoader))::GlobalNamespace::BeatmapDataLoader* _beatmapDataLoader;

  /// @brief Field <beatmapLevelData>k__BackingField, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelData_k__BackingField,
                      put = __cordl_internal_set__beatmapLevelData_k__BackingField))::GlobalNamespace::IBeatmapLevelData* _beatmapLevelData_k__BackingField;

  /// @brief Field _beatmapLevelsModel, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsModel, put = __cordl_internal_set__beatmapLevelsModel))::GlobalNamespace::BeatmapLevelsModel* _beatmapLevelsModel;

  /// @brief Field _enableBeatmapDataCaching, offset 0xa9, size 0x1
  __declspec(property(get = __cordl_internal_get__enableBeatmapDataCaching, put = __cordl_internal_set__enableBeatmapDataCaching)) bool _enableBeatmapDataCaching;

  /// @brief Field _mainSettingsModel, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__mainSettingsModel, put = __cordl_internal_set__mainSettingsModel))::UnityW<::GlobalNamespace::MainSettingsModelSO> _mainSettingsModel;

  /// @brief Field <songAudioClip>k__BackingField, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__songAudioClip_k__BackingField,
                      put = __cordl_internal_set__songAudioClip_k__BackingField))::UnityW<::UnityEngine::AudioClip> _songAudioClip_k__BackingField;

  /// @brief Field <transformedBeatmapData>k__BackingField, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__transformedBeatmapData_k__BackingField,
                      put = __cordl_internal_set__transformedBeatmapData_k__BackingField))::GlobalNamespace::IReadonlyBeatmapData* _transformedBeatmapData_k__BackingField;

  /// @brief Field beatmapBasicData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapBasicData, put = __cordl_internal_set_beatmapBasicData))::GlobalNamespace::BeatmapBasicData* beatmapBasicData;

  /// @brief Field beatmapKey, offset 0x10, size 0x18
  __declspec(property(get = __cordl_internal_get_beatmapKey, put = __cordl_internal_set_beatmapKey))::GlobalNamespace::BeatmapKey beatmapKey;

  /// @brief Field beatmapLevel, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapLevel, put = __cordl_internal_set_beatmapLevel))::GlobalNamespace::BeatmapLevel* beatmapLevel;

  __declspec(property(get = get_beatmapLevelData, put = set_beatmapLevelData))::GlobalNamespace::IBeatmapLevelData* beatmapLevelData;

  /// @brief Field colorScheme, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_colorScheme, put = __cordl_internal_set_colorScheme))::GlobalNamespace::ColorScheme* colorScheme;

  /// @brief Field environmentInfo, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_environmentInfo, put = __cordl_internal_set_environmentInfo))::UnityW<::GlobalNamespace::EnvironmentInfoSO> environmentInfo;

  /// @brief Field gameplayModifiers, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_gameplayModifiers, put = __cordl_internal_set_gameplayModifiers))::GlobalNamespace::GameplayModifiers* gameplayModifiers;

  /// @brief Field playerSpecificSettings, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_playerSpecificSettings, put = __cordl_internal_set_playerSpecificSettings))::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;

  /// @brief Field practiceSettings, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_practiceSettings, put = __cordl_internal_set_practiceSettings))::GlobalNamespace::PracticeSettings* practiceSettings;

  /// @brief Field recordingToolData, offset 0x68, size 0x3
  __declspec(property(get = __cordl_internal_get_recordingToolData,
                      put = __cordl_internal_set_recordingToolData))::System::Nullable_1<::GlobalNamespace::__RecordingToolManager__SetupData> recordingToolData;

  __declspec(property(get = get_songAudioClip, put = set_songAudioClip))::UnityW<::UnityEngine::AudioClip> songAudioClip;

  __declspec(property(get = get_transformedBeatmapData, put = set_transformedBeatmapData))::GlobalNamespace::IReadonlyBeatmapData* transformedBeatmapData;

  /// @brief Field useTestNoteCutSoundEffects, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_useTestNoteCutSoundEffects, put = __cordl_internal_set_useTestNoteCutSoundEffects)) bool useTestNoteCutSoundEffects;

  /// @brief Method LoadBeatmapLevelData, addr 0x259ff60, size 0xf0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevelData*>* LoadBeatmapLevelData();

  /// @brief Method LoadTransformedBeatmapData, addr 0x259fc5c, size 0x1e8, virtual false, abstract: false, final false
  inline void LoadTransformedBeatmapData();

  /// @brief Method LoadTransformedBeatmapDataAsync, addr 0x259fe98, size 0xc8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* LoadTransformedBeatmapDataAsync();

  static inline ::GlobalNamespace::GameplayCoreSceneSetupData* New_ctor(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                        ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
                                                                        ::GlobalNamespace::PracticeSettings* practiceSettings, bool useTestNoteCutSoundEffects,
                                                                        ::GlobalNamespace::EnvironmentInfoSO* environmentInfo, ::GlobalNamespace::ColorScheme* colorScheme,
                                                                        ::GlobalNamespace::MainSettingsModelSO* mainSettingsModel, ::GlobalNamespace::AudioClipAsyncLoader* audioClipAsyncLoader,
                                                                        ::GlobalNamespace::BeatmapDataLoader* beatmapDataLoader, ::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel,
                                                                        bool enableBeatmapDataCaching, ::System::Nullable_1<::GlobalNamespace::__RecordingToolManager__SetupData> recordingToolData);

  static inline ::GlobalNamespace::GameplayCoreSceneSetupData* New_ctor(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                        ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
                                                                        ::GlobalNamespace::PracticeSettings* practiceSettings, bool useTestNoteCutSoundEffects,
                                                                        ::GlobalNamespace::EnvironmentInfoSO* environmentInfo, ::GlobalNamespace::ColorScheme* colorScheme,
                                                                        ::GlobalNamespace::MainSettingsModelSO* mainSettingsModel, ::GlobalNamespace::AudioClipAsyncLoader* audioClipAsyncLoader,
                                                                        ::GlobalNamespace::BeatmapDataLoader* beatmapDataLoader, bool enableBeatmapDataCaching, bool allowNullBeatmapLevelData,
                                                                        ::System::Nullable_1<::GlobalNamespace::__RecordingToolManager__SetupData> recordingToolData);

  static inline ::GlobalNamespace::GameplayCoreSceneSetupData* New_ctor(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                        ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
                                                                        ::GlobalNamespace::PracticeSettings* practiceSettings, bool useTestNoteCutSoundEffects,
                                                                        ::GlobalNamespace::EnvironmentInfoSO* environmentInfo, ::GlobalNamespace::ColorScheme* colorScheme,
                                                                        ::GlobalNamespace::MainSettingsModelSO* mainSettingsModel, ::GlobalNamespace::AudioClipAsyncLoader* audioClipAsyncLoader,
                                                                        ::GlobalNamespace::BeatmapDataLoader* beatmapDataLoader, bool enableBeatmapDataCaching,
                                                                        ::System::Nullable_1<::GlobalNamespace::__RecordingToolManager__SetupData> recordingToolData);

  static inline ::GlobalNamespace::GameplayCoreSceneSetupData* New_ctor(::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ByRef<::GlobalNamespace::BeatmapKey> beatmapKey,
                                                                        ::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                                                                        ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::PracticeSettings* practiceSettings,
                                                                        bool useTestNoteCutSoundEffects, ::GlobalNamespace::EnvironmentInfoSO* environmentInfo,
                                                                        ::GlobalNamespace::ColorScheme* colorScheme, ::GlobalNamespace::MainSettingsModelSO* mainSettingsModel,
                                                                        ::GlobalNamespace::AudioClipAsyncLoader* audioClipAsyncLoader, ::GlobalNamespace::BeatmapDataLoader* beatmapDataLoader,
                                                                        bool enableBeatmapDataCaching, ::System::Nullable_1<::GlobalNamespace::__RecordingToolManager__SetupData> recordingToolData);

  /// @brief Method TransformBeatmapData, addr 0x259fe44, size 0x54, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IReadonlyBeatmapData* TransformBeatmapData(::GlobalNamespace::IReadonlyBeatmapData* beatmapData);

  constexpr bool const& __cordl_internal_get__allowNullBeatmapLevelData() const;

  constexpr bool& __cordl_internal_get__allowNullBeatmapLevelData();

  constexpr ::GlobalNamespace::AudioClipAsyncLoader*& __cordl_internal_get__audioClipAsyncLoader();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioClipAsyncLoader*> const& __cordl_internal_get__audioClipAsyncLoader() const;

  constexpr ::GlobalNamespace::BeatmapDataLoader*& __cordl_internal_get__beatmapDataLoader();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataLoader*> const& __cordl_internal_get__beatmapDataLoader() const;

  constexpr ::GlobalNamespace::IBeatmapLevelData*& __cordl_internal_get__beatmapLevelData_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevelData*> const& __cordl_internal_get__beatmapLevelData_k__BackingField() const;

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get__beatmapLevelsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> const& __cordl_internal_get__beatmapLevelsModel() const;

  constexpr bool const& __cordl_internal_get__enableBeatmapDataCaching() const;

  constexpr bool& __cordl_internal_get__enableBeatmapDataCaching();

  constexpr ::UnityW<::GlobalNamespace::MainSettingsModelSO> const& __cordl_internal_get__mainSettingsModel() const;

  constexpr ::UnityW<::GlobalNamespace::MainSettingsModelSO>& __cordl_internal_get__mainSettingsModel();

  constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__songAudioClip_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__songAudioClip_k__BackingField();

  constexpr ::GlobalNamespace::IReadonlyBeatmapData*& __cordl_internal_get__transformedBeatmapData_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IReadonlyBeatmapData*> const& __cordl_internal_get__transformedBeatmapData_k__BackingField() const;

  constexpr ::GlobalNamespace::BeatmapBasicData*& __cordl_internal_get_beatmapBasicData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapBasicData*> const& __cordl_internal_get_beatmapBasicData() const;

  constexpr ::GlobalNamespace::BeatmapKey const& __cordl_internal_get_beatmapKey() const;

  constexpr ::GlobalNamespace::BeatmapKey& __cordl_internal_get_beatmapKey();

  constexpr ::GlobalNamespace::BeatmapLevel*& __cordl_internal_get_beatmapLevel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevel*> const& __cordl_internal_get_beatmapLevel() const;

  constexpr ::GlobalNamespace::ColorScheme*& __cordl_internal_get_colorScheme();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorScheme*> const& __cordl_internal_get_colorScheme() const;

  constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO> const& __cordl_internal_get_environmentInfo() const;

  constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO>& __cordl_internal_get_environmentInfo();

  constexpr ::GlobalNamespace::GameplayModifiers*& __cordl_internal_get_gameplayModifiers();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiers*> const& __cordl_internal_get_gameplayModifiers() const;

  constexpr ::GlobalNamespace::PlayerSpecificSettings*& __cordl_internal_get_playerSpecificSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerSpecificSettings*> const& __cordl_internal_get_playerSpecificSettings() const;

  constexpr ::GlobalNamespace::PracticeSettings*& __cordl_internal_get_practiceSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PracticeSettings*> const& __cordl_internal_get_practiceSettings() const;

  constexpr ::System::Nullable_1<::GlobalNamespace::__RecordingToolManager__SetupData> const& __cordl_internal_get_recordingToolData() const;

  constexpr ::System::Nullable_1<::GlobalNamespace::__RecordingToolManager__SetupData>& __cordl_internal_get_recordingToolData();

  constexpr bool const& __cordl_internal_get_useTestNoteCutSoundEffects() const;

  constexpr bool& __cordl_internal_get_useTestNoteCutSoundEffects();

  constexpr void __cordl_internal_set__allowNullBeatmapLevelData(bool value);

  constexpr void __cordl_internal_set__audioClipAsyncLoader(::GlobalNamespace::AudioClipAsyncLoader* value);

  constexpr void __cordl_internal_set__beatmapDataLoader(::GlobalNamespace::BeatmapDataLoader* value);

  constexpr void __cordl_internal_set__beatmapLevelData_k__BackingField(::GlobalNamespace::IBeatmapLevelData* value);

  constexpr void __cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr void __cordl_internal_set__enableBeatmapDataCaching(bool value);

  constexpr void __cordl_internal_set__mainSettingsModel(::UnityW<::GlobalNamespace::MainSettingsModelSO> value);

  constexpr void __cordl_internal_set__songAudioClip_k__BackingField(::UnityW<::UnityEngine::AudioClip> value);

  constexpr void __cordl_internal_set__transformedBeatmapData_k__BackingField(::GlobalNamespace::IReadonlyBeatmapData* value);

  constexpr void __cordl_internal_set_beatmapBasicData(::GlobalNamespace::BeatmapBasicData* value);

  constexpr void __cordl_internal_set_beatmapKey(::GlobalNamespace::BeatmapKey value);

  constexpr void __cordl_internal_set_beatmapLevel(::GlobalNamespace::BeatmapLevel* value);

  constexpr void __cordl_internal_set_colorScheme(::GlobalNamespace::ColorScheme* value);

  constexpr void __cordl_internal_set_environmentInfo(::UnityW<::GlobalNamespace::EnvironmentInfoSO> value);

  constexpr void __cordl_internal_set_gameplayModifiers(::GlobalNamespace::GameplayModifiers* value);

  constexpr void __cordl_internal_set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value);

  constexpr void __cordl_internal_set_practiceSettings(::GlobalNamespace::PracticeSettings* value);

  constexpr void __cordl_internal_set_recordingToolData(::System::Nullable_1<::GlobalNamespace::__RecordingToolManager__SetupData> value);

  constexpr void __cordl_internal_set_useTestNoteCutSoundEffects(bool value);

  /// @brief Method .ctor, addr 0x259f964, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                    ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::PracticeSettings* practiceSettings, bool useTestNoteCutSoundEffects,
                    ::GlobalNamespace::EnvironmentInfoSO* environmentInfo, ::GlobalNamespace::ColorScheme* colorScheme, ::GlobalNamespace::MainSettingsModelSO* mainSettingsModel,
                    ::GlobalNamespace::AudioClipAsyncLoader* audioClipAsyncLoader, ::GlobalNamespace::BeatmapDataLoader* beatmapDataLoader, ::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel,
                    bool enableBeatmapDataCaching, ::System::Nullable_1<::GlobalNamespace::__RecordingToolManager__SetupData> recordingToolData);

  /// @brief Method .ctor, addr 0x259f9c0, size 0x1d4, virtual false, abstract: false, final false
  inline void _ctor(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                    ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::PracticeSettings* practiceSettings, bool useTestNoteCutSoundEffects,
                    ::GlobalNamespace::EnvironmentInfoSO* environmentInfo, ::GlobalNamespace::ColorScheme* colorScheme, ::GlobalNamespace::MainSettingsModelSO* mainSettingsModel,
                    ::GlobalNamespace::AudioClipAsyncLoader* audioClipAsyncLoader, ::GlobalNamespace::BeatmapDataLoader* beatmapDataLoader, bool enableBeatmapDataCaching,
                    bool allowNullBeatmapLevelData, ::System::Nullable_1<::GlobalNamespace::__RecordingToolManager__SetupData> recordingToolData);

  /// @brief Method .ctor, addr 0x259fc10, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                    ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::PracticeSettings* practiceSettings, bool useTestNoteCutSoundEffects,
                    ::GlobalNamespace::EnvironmentInfoSO* environmentInfo, ::GlobalNamespace::ColorScheme* colorScheme, ::GlobalNamespace::MainSettingsModelSO* mainSettingsModel,
                    ::GlobalNamespace::AudioClipAsyncLoader* audioClipAsyncLoader, ::GlobalNamespace::BeatmapDataLoader* beatmapDataLoader, bool enableBeatmapDataCaching,
                    ::System::Nullable_1<::GlobalNamespace::__RecordingToolManager__SetupData> recordingToolData);

  /// @brief Method .ctor, addr 0x259fb94, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                    ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::PracticeSettings* practiceSettings,
                    bool useTestNoteCutSoundEffects, ::GlobalNamespace::EnvironmentInfoSO* environmentInfo, ::GlobalNamespace::ColorScheme* colorScheme,
                    ::GlobalNamespace::MainSettingsModelSO* mainSettingsModel, ::GlobalNamespace::AudioClipAsyncLoader* audioClipAsyncLoader, ::GlobalNamespace::BeatmapDataLoader* beatmapDataLoader,
                    bool enableBeatmapDataCaching, ::System::Nullable_1<::GlobalNamespace::__RecordingToolManager__SetupData> recordingToolData);

  /// @brief Method get_beatmapLevelData, addr 0x259f944, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IBeatmapLevelData* get_beatmapLevelData();

  /// @brief Method get_songAudioClip, addr 0x259f934, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioClip> get_songAudioClip();

  /// @brief Method get_transformedBeatmapData, addr 0x259f954, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IReadonlyBeatmapData* get_transformedBeatmapData();

  /// @brief Method set_beatmapLevelData, addr 0x259f94c, size 0x8, virtual false, abstract: false, final false
  inline void set_beatmapLevelData(::GlobalNamespace::IBeatmapLevelData* value);

  /// @brief Method set_songAudioClip, addr 0x259f93c, size 0x8, virtual false, abstract: false, final false
  inline void set_songAudioClip(::UnityEngine::AudioClip* value);

  /// @brief Method set_transformedBeatmapData, addr 0x259f95c, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field environmentInfo, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EnvironmentInfoSO> ___environmentInfo;

  /// @brief Field colorScheme, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::ColorScheme* ___colorScheme;

  /// @brief Field recordingToolData, offset: 0x68, size: 0x3, def value: None
  ::System::Nullable_1<::GlobalNamespace::__RecordingToolManager__SetupData> ___recordingToolData;

  /// @brief Field <songAudioClip>k__BackingField, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioClip> ____songAudioClip_k__BackingField;

  /// @brief Field <beatmapLevelData>k__BackingField, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevelData* ____beatmapLevelData_k__BackingField;

  /// @brief Field <transformedBeatmapData>k__BackingField, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::IReadonlyBeatmapData* ____transformedBeatmapData_k__BackingField;

  /// @brief Field _mainSettingsModel, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainSettingsModelSO> ____mainSettingsModel;

  /// @brief Field _beatmapLevelsModel, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevelsModel;

  /// @brief Field _audioClipAsyncLoader, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::AudioClipAsyncLoader* ____audioClipAsyncLoader;

  /// @brief Field _beatmapDataLoader, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataLoader* ____beatmapDataLoader;

  /// @brief Field _allowNullBeatmapLevelData, offset: 0xa8, size: 0x1, def value: None
  bool ____allowNullBeatmapLevelData;

  /// @brief Field _enableBeatmapDataCaching, offset: 0xa9, size: 0x1, def value: None
  bool ____enableBeatmapDataCaching;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayCoreSceneSetupData, 0xb0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ___beatmapKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ___beatmapBasicData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ___beatmapLevel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ___gameplayModifiers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ___playerSpecificSettings) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ___practiceSettings) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ___useTestNoteCutSoundEffects) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ___environmentInfo) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ___colorScheme) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ___recordingToolData) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ____songAudioClip_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ____beatmapLevelData_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ____transformedBeatmapData_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ____mainSettingsModel) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ____beatmapLevelsModel) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ____audioClipAsyncLoader) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ____beatmapDataLoader) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ____allowNullBeatmapLevelData) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ____enableBeatmapDataCaching) == 0xa9, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameplayCoreSceneSetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayCoreSceneSetupData*, "", "GameplayCoreSceneSetupData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameplayCoreSceneSetupData___LoadBeatmapLevelData_d__35, "", "GameplayCoreSceneSetupData/<LoadBeatmapLevelData>d__35");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__33, "", "GameplayCoreSceneSetupData/<LoadTransformedBeatmapDataAsync>d__33");
