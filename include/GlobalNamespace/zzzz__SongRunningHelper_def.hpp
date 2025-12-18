#pragma once
// IWYU pragma private; include "GlobalNamespace/SongRunningHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolManager_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SongRunningHelper)
namespace GlobalNamespace {
class BeatmapCharacteristicCollection;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
class EnvironmentsListModel;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
struct GameplayModifiers_SongSpeed;
}
namespace GlobalNamespace {
class ICoroutineStarter;
}
namespace GlobalNamespace {
class ILevelEndActions;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class MenuTransitionsHelper;
}
namespace GlobalNamespace {
class PauseController;
}
namespace GlobalNamespace {
struct RecordingToolManager_SetupData;
}
namespace GlobalNamespace {
class SongRunningHelper_MessageStrings;
}
namespace GlobalNamespace {
struct SongRunningHelper_QueuedSongParams;
}
namespace GlobalNamespace {
class SongRunningHelper__StartLevel_d__14;
}
namespace GlobalNamespace {
class SongRunningHelper___c__DisplayClass14_0;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class SongRunningHelper;
}
namespace GlobalNamespace {
class SongRunningHelper_MessageStrings;
}
namespace GlobalNamespace {
class SongRunningHelper__StartLevel_d__14;
}
namespace GlobalNamespace {
class SongRunningHelper___c__DisplayClass14_0;
}
namespace GlobalNamespace {
struct SongRunningHelper_QueuedSongParams;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SongRunningHelper);
MARK_REF_PTR_T(::GlobalNamespace::SongRunningHelper_MessageStrings);
MARK_REF_PTR_T(::GlobalNamespace::SongRunningHelper__StartLevel_d__14);
MARK_REF_PTR_T(::GlobalNamespace::SongRunningHelper___c__DisplayClass14_0);
MARK_VAL_T(::GlobalNamespace::SongRunningHelper_QueuedSongParams);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SongRunningHelper/MessageStrings
class CORDL_TYPE SongRunningHelper_MessageStrings : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SongRunningHelper_MessageStrings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SongRunningHelper_MessageStrings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SongRunningHelper_MessageStrings(SongRunningHelper_MessageStrings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SongRunningHelper_MessageStrings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SongRunningHelper_MessageStrings(SongRunningHelper_MessageStrings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5599 };

  /// @brief Field kFmtMessageSongStarted offset 0xffffffff size 0x8
  static constexpr ::ConstString kFmtMessageSongStarted{ u"RunSong: Starting song {0}" };

  /// @brief Field kFmtMessageSongsRemaining offset 0xffffffff size 0x8
  static constexpr ::ConstString kFmtMessageSongsRemaining{ u"RunSong: -- There are {0} songs in queue..." };

  /// @brief Field kLogPrefix offset 0xffffffff size 0x8
  static constexpr ::ConstString kLogPrefix{ u"RunSong: " };

  /// @brief Field kMessageQueueFinished offset 0xffffffff size 0x8
  static constexpr ::ConstString kMessageQueueFinished{ u"RunSong: ---Finished the runsong level queue---" };

  /// @brief Field kMessageQueueStarted offset 0xffffffff size 0x8
  static constexpr ::ConstString kMessageQueueStarted{ u"RunSong: ---Starting the runsong level queue---" };

  /// @brief Field kMessageSongFinished offset 0xffffffff size 0x8
  static constexpr ::ConstString kMessageSongFinished{ u"RunSong: -- Finished song" };

  /// @brief Field kMessageSongStarted offset 0xffffffff size 0x8
  static constexpr ::ConstString kMessageSongStarted{ u"RunSong: -- Started song" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongRunningHelper_MessageStrings, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapDifficulty, GameplayModifiers::SongSpeed, RecordingToolManager::SetupData
namespace GlobalNamespace {
// Is value type: true
// CS Name: SongRunningHelper/QueuedSongParams
struct CORDL_TYPE SongRunningHelper_QueuedSongParams {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x5711dcc, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BeatmapLevel* beatmapLevel, ::StringW characteristic, ::GlobalNamespace::BeatmapDifficulty difficulty, bool advancedHud,
                    ::GlobalNamespace::GameplayModifiers_SongSpeed songSpeed, ::GlobalNamespace::RecordingToolManager_SetupData recordingToolData, bool zenMode, bool disablePause,
                    ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* songFinishedCallback);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SongRunningHelper_QueuedSongParams();

  // Ctor Parameters [CppParam { name: "beatmapLevel", ty: "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "difficulty", ty:
  // "::GlobalNamespace::BeatmapDifficulty", modifiers: "", def_value: None }, CppParam { name: "characteristic", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "advancedHud", ty:
  // "bool", modifiers: "", def_value: None }, CppParam { name: "songSpeed", ty: "::GlobalNamespace::GameplayModifiers_SongSpeed", modifiers: "", def_value: None }, CppParam { name:
  // "recordingToolData", ty: "::GlobalNamespace::RecordingToolManager_SetupData", modifiers: "", def_value: None }, CppParam { name: "songFinishedCallback", ty:
  // "::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>,::GlobalNamespace::LevelCompletionResults*>*", modifiers: "", def_value: None }, CppParam { name:
  // "zenMode", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "disablePause", ty: "bool", modifiers: "", def_value: None }]
  constexpr SongRunningHelper_QueuedSongParams(
      ::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::BeatmapDifficulty difficulty, ::StringW characteristic, bool advancedHud,
      ::GlobalNamespace::GameplayModifiers_SongSpeed songSpeed, ::GlobalNamespace::RecordingToolManager_SetupData recordingToolData,
      ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* songFinishedCallback, bool zenMode,
      bool disablePause) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5600 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field beatmapLevel, offset: 0x0, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* beatmapLevel;

  /// @brief Field difficulty, offset: 0x8, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty difficulty;

  /// @brief Field characteristic, offset: 0x10, size: 0x8, def value: None
  ::StringW characteristic;

  /// @brief Field advancedHud, offset: 0x18, size: 0x1, def value: None
  bool advancedHud;

  /// @brief Field songSpeed, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::GameplayModifiers_SongSpeed songSpeed;

  /// @brief Field recordingToolData, offset: 0x20, size: 0x2, def value: None
  ::GlobalNamespace::RecordingToolManager_SetupData recordingToolData;

  /// @brief Field songFinishedCallback, offset: 0x28, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* songFinishedCallback;

  /// @brief Field zenMode, offset: 0x30, size: 0x1, def value: None
  bool zenMode;

  /// @brief Field disablePause, offset: 0x31, size: 0x1, def value: None
  bool disablePause;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SongRunningHelper_QueuedSongParams, beatmapLevel) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongRunningHelper_QueuedSongParams, difficulty) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongRunningHelper_QueuedSongParams, characteristic) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongRunningHelper_QueuedSongParams, advancedHud) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongRunningHelper_QueuedSongParams, songSpeed) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongRunningHelper_QueuedSongParams, recordingToolData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongRunningHelper_QueuedSongParams, songFinishedCallback) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongRunningHelper_QueuedSongParams, zenMode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongRunningHelper_QueuedSongParams, disablePause) == 0x31, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongRunningHelper_QueuedSongParams, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies SongRunningHelper::QueuedSongParams, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SongRunningHelper/<>c__DisplayClass14_0
class CORDL_TYPE SongRunningHelper___c__DisplayClass14_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::SongRunningHelper* __4__this;

  /// @brief Field levelEndActions, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_levelEndActions, put = __cordl_internal_set_levelEndActions)) ::GlobalNamespace::ILevelEndActions* levelEndActions;

  /// @brief Field pauseController, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_pauseController, put = __cordl_internal_set_pauseController)) ::UnityW<::GlobalNamespace::PauseController> pauseController;

  /// @brief Field queuedSongParams, offset 0x18, size 0x38
  __declspec(property(get = __cordl_internal_get_queuedSongParams, put = __cordl_internal_set_queuedSongParams)) ::GlobalNamespace::SongRunningHelper_QueuedSongParams queuedSongParams;

  static inline ::GlobalNamespace::SongRunningHelper___c__DisplayClass14_0* New_ctor();

  /// @brief Method <StartLevel>g__HandleLevelDidFinishCallback|0, addr 0x5711e00, size 0x45c, virtual false, abstract: false, final false
  inline void _StartLevel_g__HandleLevelDidFinishCallback_0(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelScenesTransition,
                                                            ::GlobalNamespace::LevelCompletionResults* results);

  /// @brief Method <StartLevel>g__HandleLevelEnded|1, addr 0x571225c, size 0x270, virtual false, abstract: false, final false
  inline void _StartLevel_g__HandleLevelEnded_1();

  constexpr ::GlobalNamespace::SongRunningHelper* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::SongRunningHelper*& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::ILevelEndActions* const& __cordl_internal_get_levelEndActions() const;

  constexpr ::GlobalNamespace::ILevelEndActions*& __cordl_internal_get_levelEndActions();

  constexpr ::UnityW<::GlobalNamespace::PauseController> const& __cordl_internal_get_pauseController() const;

  constexpr ::UnityW<::GlobalNamespace::PauseController>& __cordl_internal_get_pauseController();

  constexpr ::GlobalNamespace::SongRunningHelper_QueuedSongParams const& __cordl_internal_get_queuedSongParams() const;

  constexpr ::GlobalNamespace::SongRunningHelper_QueuedSongParams& __cordl_internal_get_queuedSongParams();

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::SongRunningHelper* value);

  constexpr void __cordl_internal_set_levelEndActions(::GlobalNamespace::ILevelEndActions* value);

  constexpr void __cordl_internal_set_pauseController(::UnityW<::GlobalNamespace::PauseController> value);

  constexpr void __cordl_internal_set_queuedSongParams(::GlobalNamespace::SongRunningHelper_QueuedSongParams value);

  /// @brief Method .ctor, addr 0x5711dfc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SongRunningHelper___c__DisplayClass14_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SongRunningHelper___c__DisplayClass14_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SongRunningHelper___c__DisplayClass14_0(SongRunningHelper___c__DisplayClass14_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SongRunningHelper___c__DisplayClass14_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SongRunningHelper___c__DisplayClass14_0(SongRunningHelper___c__DisplayClass14_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5601 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::SongRunningHelper* _____4__this;

  /// @brief Field queuedSongParams, offset: 0x18, size: 0x38, def value: None
  ::GlobalNamespace::SongRunningHelper_QueuedSongParams ___queuedSongParams;

  /// @brief Field pauseController, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PauseController> ___pauseController;

  /// @brief Field levelEndActions, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::ILevelEndActions* ___levelEndActions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SongRunningHelper___c__DisplayClass14_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongRunningHelper___c__DisplayClass14_0, ___queuedSongParams) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongRunningHelper___c__DisplayClass14_0, ___pauseController) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongRunningHelper___c__DisplayClass14_0, ___levelEndActions) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongRunningHelper___c__DisplayClass14_0, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies SongRunningHelper::QueuedSongParams, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SongRunningHelper/<StartLevel>d__14
class CORDL_TYPE SongRunningHelper__StartLevel_d__14 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::SongRunningHelper* __4__this;

  /// @brief Field <>8__1, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get___8__1, put = __cordl_internal_set___8__1)) ::GlobalNamespace::SongRunningHelper___c__DisplayClass14_0* __8__1;

  /// @brief Field queuedSongParams, offset 0x28, size 0x38
  __declspec(property(get = __cordl_internal_get_queuedSongParams, put = __cordl_internal_set_queuedSongParams)) ::GlobalNamespace::SongRunningHelper_QueuedSongParams queuedSongParams;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x57124d0, size 0x89c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::SongRunningHelper__StartLevel_d__14* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5712d6c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x5712d74, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5712dac, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x57124cc, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::GlobalNamespace::SongRunningHelper* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::SongRunningHelper*& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::SongRunningHelper___c__DisplayClass14_0* const& __cordl_internal_get___8__1() const;

  constexpr ::GlobalNamespace::SongRunningHelper___c__DisplayClass14_0*& __cordl_internal_get___8__1();

  constexpr ::GlobalNamespace::SongRunningHelper_QueuedSongParams const& __cordl_internal_get_queuedSongParams() const;

  constexpr ::GlobalNamespace::SongRunningHelper_QueuedSongParams& __cordl_internal_get_queuedSongParams();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::SongRunningHelper* value);

  constexpr void __cordl_internal_set___8__1(::GlobalNamespace::SongRunningHelper___c__DisplayClass14_0* value);

  constexpr void __cordl_internal_set_queuedSongParams(::GlobalNamespace::SongRunningHelper_QueuedSongParams value);

  /// @brief Method .ctor, addr 0x5711d34, size 0x8, virtual false, abstract: false, final false
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
  constexpr SongRunningHelper__StartLevel_d__14();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SongRunningHelper__StartLevel_d__14", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SongRunningHelper__StartLevel_d__14(SongRunningHelper__StartLevel_d__14&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SongRunningHelper__StartLevel_d__14", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SongRunningHelper__StartLevel_d__14(SongRunningHelper__StartLevel_d__14 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5602 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::SongRunningHelper* _____4__this;

  /// @brief Field queuedSongParams, offset: 0x28, size: 0x38, def value: None
  ::GlobalNamespace::SongRunningHelper_QueuedSongParams ___queuedSongParams;

  /// @brief Field <>8__1, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::SongRunningHelper___c__DisplayClass14_0* _____8__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SongRunningHelper__StartLevel_d__14, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongRunningHelper__StartLevel_d__14, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongRunningHelper__StartLevel_d__14, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongRunningHelper__StartLevel_d__14, ___queuedSongParams) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongRunningHelper__StartLevel_d__14, _____8__1) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongRunningHelper__StartLevel_d__14, 0x68>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies SongRunningHelper::QueuedSongParams, System.Nullable`1<T>, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SongRunningHelper
class CORDL_TYPE SongRunningHelper : public ::System::Object {
public:
  // Declarations
  using MessageStrings = ::GlobalNamespace::SongRunningHelper_MessageStrings;

  using QueuedSongParams = ::GlobalNamespace::SongRunningHelper_QueuedSongParams;

  using _StartLevel_d__14 = ::GlobalNamespace::SongRunningHelper__StartLevel_d__14;

  using __c__DisplayClass14_0 = ::GlobalNamespace::SongRunningHelper___c__DisplayClass14_0;

  __declspec(property(get = get_SongsRunning)) bool SongsRunning;

  /// @brief Field _beatmapCharacteristics, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCharacteristics,
                      put = __cordl_internal_set__beatmapCharacteristics)) ::GlobalNamespace::BeatmapCharacteristicCollection* _beatmapCharacteristics;

  /// @brief Field _beatmapLevels, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevels, put = __cordl_internal_set__beatmapLevels)) ::GlobalNamespace::BeatmapLevelsModel* _beatmapLevels;

  /// @brief Field _coroutineStarter, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__coroutineStarter, put = __cordl_internal_set__coroutineStarter)) ::GlobalNamespace::ICoroutineStarter* _coroutineStarter;

  /// @brief Field _current, offset 0x48, size 0x40
  __declspec(property(get = __cordl_internal_get__current, put = __cordl_internal_set__current)) ::System::Nullable_1<::GlobalNamespace::SongRunningHelper_QueuedSongParams> _current;

  /// @brief Field _environmentsListModel, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentsListModel, put = __cordl_internal_set__environmentsListModel)) ::GlobalNamespace::EnvironmentsListModel* _environmentsListModel;

  /// @brief Field _gameScenesManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__gameScenesManager, put = __cordl_internal_set__gameScenesManager)) ::UnityW<::GlobalNamespace::GameScenesManager> _gameScenesManager;

  /// @brief Field _menuTransitionsHelper, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__menuTransitionsHelper, put = __cordl_internal_set__menuTransitionsHelper)) ::UnityW<::GlobalNamespace::MenuTransitionsHelper> _menuTransitionsHelper;

  /// @brief Field _playQueue, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__playQueue,
                      put = __cordl_internal_set__playQueue)) ::System::Collections::Generic::Queue_1<::GlobalNamespace::SongRunningHelper_QueuedSongParams>* _playQueue;

  /// @brief Method EnqueueLevel, addr 0x5711a68, size 0x250, virtual false, abstract: false, final false
  inline bool EnqueueLevel(::GlobalNamespace::SongRunningHelper_QueuedSongParams queuedSongParams);

  /// @brief Method FindBeatmapLevelPackBeatmaps, addr 0x5711850, size 0x218, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::BeatmapLevel*, ::Array<::GlobalNamespace::BeatmapLevel*>*> FindBeatmapLevelPackBeatmaps(::StringW packId, bool ignoreCase);

  /// @brief Method HandlePauseControllerCanPause, addr 0x5711d3c, size 0x1c, virtual false, abstract: false, final false
  inline void HandlePauseControllerCanPause(::System::Action_1<bool>* canPause);

  static inline ::GlobalNamespace::SongRunningHelper* New_ctor();

  /// @brief Method StartLevel, addr 0x5711cb8, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* StartLevel(::GlobalNamespace::SongRunningHelper_QueuedSongParams queuedSongParams);

  constexpr ::GlobalNamespace::BeatmapCharacteristicCollection* const& __cordl_internal_get__beatmapCharacteristics() const;

  constexpr ::GlobalNamespace::BeatmapCharacteristicCollection*& __cordl_internal_get__beatmapCharacteristics();

  constexpr ::GlobalNamespace::BeatmapLevelsModel* const& __cordl_internal_get__beatmapLevels() const;

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get__beatmapLevels();

  constexpr ::GlobalNamespace::ICoroutineStarter* const& __cordl_internal_get__coroutineStarter() const;

  constexpr ::GlobalNamespace::ICoroutineStarter*& __cordl_internal_get__coroutineStarter();

  constexpr ::System::Nullable_1<::GlobalNamespace::SongRunningHelper_QueuedSongParams> const& __cordl_internal_get__current() const;

  constexpr ::System::Nullable_1<::GlobalNamespace::SongRunningHelper_QueuedSongParams>& __cordl_internal_get__current();

  constexpr ::GlobalNamespace::EnvironmentsListModel* const& __cordl_internal_get__environmentsListModel() const;

  constexpr ::GlobalNamespace::EnvironmentsListModel*& __cordl_internal_get__environmentsListModel();

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get__gameScenesManager() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get__gameScenesManager();

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper> const& __cordl_internal_get__menuTransitionsHelper() const;

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper>& __cordl_internal_get__menuTransitionsHelper();

  constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::SongRunningHelper_QueuedSongParams>* const& __cordl_internal_get__playQueue() const;

  constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::SongRunningHelper_QueuedSongParams>*& __cordl_internal_get__playQueue();

  constexpr void __cordl_internal_set__beatmapCharacteristics(::GlobalNamespace::BeatmapCharacteristicCollection* value);

  constexpr void __cordl_internal_set__beatmapLevels(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr void __cordl_internal_set__coroutineStarter(::GlobalNamespace::ICoroutineStarter* value);

  constexpr void __cordl_internal_set__current(::System::Nullable_1<::GlobalNamespace::SongRunningHelper_QueuedSongParams> value);

  constexpr void __cordl_internal_set__environmentsListModel(::GlobalNamespace::EnvironmentsListModel* value);

  constexpr void __cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void __cordl_internal_set__menuTransitionsHelper(::UnityW<::GlobalNamespace::MenuTransitionsHelper> value);

  constexpr void __cordl_internal_set__playQueue(::System::Collections::Generic::Queue_1<::GlobalNamespace::SongRunningHelper_QueuedSongParams>* value);

  /// @brief Method .ctor, addr 0x5711d58, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_SongsRunning, addr 0x571180c, size 0x44, virtual false, abstract: false, final false
  inline bool get_SongsRunning();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SongRunningHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SongRunningHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SongRunningHelper(SongRunningHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SongRunningHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SongRunningHelper(SongRunningHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5603 };

  /// @brief Field _beatmapCharacteristics, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCharacteristicCollection* ____beatmapCharacteristics;

  /// @brief Field _menuTransitionsHelper, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuTransitionsHelper> ____menuTransitionsHelper;

  /// @brief Field _beatmapLevels, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevels;

  /// @brief Field _environmentsListModel, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentsListModel* ____environmentsListModel;

  /// @brief Field _gameScenesManager, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> ____gameScenesManager;

  /// @brief Field _coroutineStarter, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::ICoroutineStarter* ____coroutineStarter;

  /// @brief Field _playQueue, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::GlobalNamespace::SongRunningHelper_QueuedSongParams>* ____playQueue;

  /// @brief Field _current, offset: 0x48, size: 0x40, def value: None
  ::System::Nullable_1<::GlobalNamespace::SongRunningHelper_QueuedSongParams> ____current;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SongRunningHelper, ____beatmapCharacteristics) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongRunningHelper, ____menuTransitionsHelper) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongRunningHelper, ____beatmapLevels) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongRunningHelper, ____environmentsListModel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongRunningHelper, ____gameScenesManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongRunningHelper, ____coroutineStarter) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongRunningHelper, ____playQueue) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongRunningHelper, ____current) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongRunningHelper, 0x88>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SongRunningHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongRunningHelper*, "", "SongRunningHelper");
NEED_NO_BOX(::GlobalNamespace::SongRunningHelper_MessageStrings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongRunningHelper_MessageStrings*, "", "SongRunningHelper/MessageStrings");
NEED_NO_BOX(::GlobalNamespace::SongRunningHelper__StartLevel_d__14);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongRunningHelper__StartLevel_d__14*, "", "SongRunningHelper/<StartLevel>d__14");
NEED_NO_BOX(::GlobalNamespace::SongRunningHelper___c__DisplayClass14_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongRunningHelper___c__DisplayClass14_0*, "", "SongRunningHelper/<>c__DisplayClass14_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongRunningHelper_QueuedSongParams, "", "SongRunningHelper/QueuedSongParams");
