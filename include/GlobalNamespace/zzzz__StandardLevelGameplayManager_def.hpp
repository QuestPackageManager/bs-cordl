#pragma once
// IWYU pragma private; include "GlobalNamespace/StandardLevelGameplayManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StandardLevelGameplayManager)
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class GameEnergyCounter;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
class GameSongController;
}
namespace GlobalNamespace {
class ILevelEndActions;
}
namespace GlobalNamespace {
class ILevelStartController;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class IReturnToMenuController;
}
namespace GlobalNamespace {
struct LevelCompletionResults_LevelEndStateType;
}
namespace GlobalNamespace {
class PauseController;
}
namespace GlobalNamespace {
struct StandardLevelGameplayManager_GameState;
}
namespace GlobalNamespace {
class StandardLevelGameplayManager_InitData;
}
namespace GlobalNamespace {
class StandardLevelGameplayManager__Start_d__27;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class WaitForFixedUpdate;
}
// Forward declare root types
namespace GlobalNamespace {
struct StandardLevelGameplayManager_GameState;
}
namespace GlobalNamespace {
class StandardLevelGameplayManager;
}
namespace GlobalNamespace {
class StandardLevelGameplayManager_InitData;
}
namespace GlobalNamespace {
class StandardLevelGameplayManager__Start_d__27;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::StandardLevelGameplayManager_GameState);
MARK_REF_PTR_T(::GlobalNamespace::StandardLevelGameplayManager);
MARK_REF_PTR_T(::GlobalNamespace::StandardLevelGameplayManager_InitData);
MARK_REF_PTR_T(::GlobalNamespace::StandardLevelGameplayManager__Start_d__27);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: StandardLevelGameplayManager/InitData
class CORDL_TYPE StandardLevelGameplayManager_InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field continueGameplayWith0Energy, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_continueGameplayWith0Energy, put = __cordl_internal_set_continueGameplayWith0Energy)) bool continueGameplayWith0Energy;

  static inline ::GlobalNamespace::StandardLevelGameplayManager_InitData* New_ctor(bool continueGameplayWith0Energy);

  constexpr bool const& __cordl_internal_get_continueGameplayWith0Energy() const;

  constexpr bool& __cordl_internal_get_continueGameplayWith0Energy();

  constexpr void __cordl_internal_set_continueGameplayWith0Energy(bool value);

  /// @brief Method .ctor, addr 0x57944c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(bool continueGameplayWith0Energy);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardLevelGameplayManager_InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelGameplayManager_InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandardLevelGameplayManager_InitData(StandardLevelGameplayManager_InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelGameplayManager_InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandardLevelGameplayManager_InitData(StandardLevelGameplayManager_InitData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5983 };

  /// @brief Field continueGameplayWith0Energy, offset: 0x10, size: 0x1, def value: None
  bool ___continueGameplayWith0Energy;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StandardLevelGameplayManager_InitData, ___continueGameplayWith0Energy) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardLevelGameplayManager_InitData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: StandardLevelGameplayManager/GameState
struct CORDL_TYPE StandardLevelGameplayManager_GameState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __StandardLevelGameplayManager_GameState_Unwrapped
  enum struct __StandardLevelGameplayManager_GameState_Unwrapped : int32_t {
    __E_Intro = static_cast<int32_t>(0x0),
    __E_Playing = static_cast<int32_t>(0x1),
    __E_Paused = static_cast<int32_t>(0x2),
    __E_Resuming = static_cast<int32_t>(0x3),
    __E_Finished = static_cast<int32_t>(0x4),
    __E_Failed = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __StandardLevelGameplayManager_GameState_Unwrapped() const noexcept {
    return static_cast<__StandardLevelGameplayManager_GameState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardLevelGameplayManager_GameState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr StandardLevelGameplayManager_GameState(int32_t value__) noexcept;

  /// @brief Field Failed value: I32(5)
  static ::GlobalNamespace::StandardLevelGameplayManager_GameState const Failed;

  /// @brief Field Finished value: I32(4)
  static ::GlobalNamespace::StandardLevelGameplayManager_GameState const Finished;

  /// @brief Field Intro value: I32(0)
  static ::GlobalNamespace::StandardLevelGameplayManager_GameState const Intro;

  /// @brief Field Paused value: I32(2)
  static ::GlobalNamespace::StandardLevelGameplayManager_GameState const Paused;

  /// @brief Field Playing value: I32(1)
  static ::GlobalNamespace::StandardLevelGameplayManager_GameState const Playing;

  /// @brief Field Resuming value: I32(3)
  static ::GlobalNamespace::StandardLevelGameplayManager_GameState const Resuming;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5984 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StandardLevelGameplayManager_GameState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardLevelGameplayManager_GameState, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: StandardLevelGameplayManager/<Start>d__27
class CORDL_TYPE StandardLevelGameplayManager__Start_d__27 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::StandardLevelGameplayManager> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x57944d0, size 0x780, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::StandardLevelGameplayManager__Start_d__27* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5794c50, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x5794c58, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5794c90, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x57944cc, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::StandardLevelGameplayManager> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::StandardLevelGameplayManager>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::StandardLevelGameplayManager> value);

  /// @brief Method .ctor, addr 0x5793f1c, size 0x8, virtual false, abstract: false, final false
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
  constexpr StandardLevelGameplayManager__Start_d__27();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelGameplayManager__Start_d__27", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandardLevelGameplayManager__Start_d__27(StandardLevelGameplayManager__Start_d__27&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelGameplayManager__Start_d__27", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandardLevelGameplayManager__Start_d__27(StandardLevelGameplayManager__Start_d__27 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5985 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StandardLevelGameplayManager> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StandardLevelGameplayManager__Start_d__27, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelGameplayManager__Start_d__27, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelGameplayManager__Start_d__27, _____4__this) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardLevelGameplayManager__Start_d__27, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies LevelCompletionResults::LevelEndStateType, StandardLevelGameplayManager::GameState, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: StandardLevelGameplayManager
class CORDL_TYPE StandardLevelGameplayManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using GameState = ::GlobalNamespace::StandardLevelGameplayManager_GameState;

  using InitData = ::GlobalNamespace::StandardLevelGameplayManager_InitData;

  using _Start_d__27 = ::GlobalNamespace::StandardLevelGameplayManager__Start_d__27;

  /// @brief Field _audioTimeSyncController, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSyncController, put = __cordl_internal_set__audioTimeSyncController)) ::UnityW<::GlobalNamespace::AudioTimeSyncController>
      _audioTimeSyncController;

  /// @brief Field _beatmapCallbacksController, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController)) ::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _beatmapData, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapData, put = __cordl_internal_set__beatmapData)) ::GlobalNamespace::IReadonlyBeatmapData* _beatmapData;

  /// @brief Field _gameEnergyCounter, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__gameEnergyCounter, put = __cordl_internal_set__gameEnergyCounter)) ::UnityW<::GlobalNamespace::GameEnergyCounter> _gameEnergyCounter;

  /// @brief Field _gameScenesManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__gameScenesManager, put = __cordl_internal_set__gameScenesManager)) ::UnityW<::GlobalNamespace::GameScenesManager> _gameScenesManager;

  /// @brief Field _gameSongController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__gameSongController, put = __cordl_internal_set__gameSongController)) ::UnityW<::GlobalNamespace::GameSongController> _gameSongController;

  /// @brief Field _gameState, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get__gameState, put = __cordl_internal_set__gameState)) ::GlobalNamespace::StandardLevelGameplayManager_GameState _gameState;

  /// @brief Field _initData, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData)) ::GlobalNamespace::StandardLevelGameplayManager_InitData* _initData;

  /// @brief Field _levelEndStateType, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get__levelEndStateType, put = __cordl_internal_set__levelEndStateType)) ::GlobalNamespace::LevelCompletionResults_LevelEndStateType _levelEndStateType;

  /// @brief Field _pauseController, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__pauseController, put = __cordl_internal_set__pauseController)) ::UnityW<::GlobalNamespace::PauseController> _pauseController;

  /// @brief Field _prePauseGameState, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get__prePauseGameState, put = __cordl_internal_set__prePauseGameState)) ::GlobalNamespace::StandardLevelGameplayManager_GameState _prePauseGameState;

  /// @brief Field _returnToMenuController, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__returnToMenuController, put = __cordl_internal_set__returnToMenuController)) ::GlobalNamespace::IReturnToMenuController* _returnToMenuController;

  /// @brief Field kWaitForFixedUpdate, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kWaitForFixedUpdate, put = setStaticF_kWaitForFixedUpdate)) ::UnityEngine::WaitForFixedUpdate* kWaitForFixedUpdate;

  /// @brief Field levelDidStartEvent, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_levelDidStartEvent, put = __cordl_internal_set_levelDidStartEvent)) ::System::Action* levelDidStartEvent;

  __declspec(property(get = get_levelEndStateType)) ::GlobalNamespace::LevelCompletionResults_LevelEndStateType levelEndStateType;

  /// @brief Field levelFailedEvent, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_levelFailedEvent, put = __cordl_internal_set_levelFailedEvent)) ::System::Action* levelFailedEvent;

  /// @brief Field levelFinishedEvent, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_levelFinishedEvent, put = __cordl_internal_set_levelFinishedEvent)) ::System::Action* levelFinishedEvent;

  /// @brief Convert operator to "::GlobalNamespace::ILevelEndActions"
  constexpr operator ::GlobalNamespace::ILevelEndActions*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::ILevelStartController"
  constexpr operator ::GlobalNamespace::ILevelStartController*() noexcept;

  /// @brief Method Awake, addr 0x5793ec0, size 0x8, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleGameEnergyDidReach0, addr 0x579434c, size 0x50, virtual false, abstract: false, final false
  inline void HandleGameEnergyDidReach0();

  /// @brief Method HandlePauseControllerCanPause, addr 0x57943d0, size 0x38, virtual false, abstract: false, final false
  inline void HandlePauseControllerCanPause(::System::Action_1<bool>* canPause);

  /// @brief Method HandlePauseControllerDidPause, addr 0x5794408, size 0x1c, virtual false, abstract: false, final false
  inline void HandlePauseControllerDidPause();

  /// @brief Method HandlePauseControllerDidResume, addr 0x579443c, size 0x18, virtual false, abstract: false, final false
  inline void HandlePauseControllerDidResume();

  /// @brief Method HandlePauseControllerDidStartResume, addr 0x5794424, size 0x18, virtual false, abstract: false, final false
  inline void HandlePauseControllerDidStartResume();

  /// @brief Method HandleSongDidFinish, addr 0x579439c, size 0x34, virtual false, abstract: false, final false
  inline void HandleSongDidFinish();

  static inline ::GlobalNamespace::StandardLevelGameplayManager* New_ctor();

  /// @brief Method OnDestroy, addr 0x5793f24, size 0x3c8, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x5793ec8, size 0x54, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* Start();

  /// @brief Method Update, addr 0x57942ec, size 0x60, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& __cordl_internal_get__audioTimeSyncController() const;

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& __cordl_internal_get__audioTimeSyncController();

  constexpr ::GlobalNamespace::BeatmapCallbacksController* const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::GlobalNamespace::IReadonlyBeatmapData* const& __cordl_internal_get__beatmapData() const;

  constexpr ::GlobalNamespace::IReadonlyBeatmapData*& __cordl_internal_get__beatmapData();

  constexpr ::UnityW<::GlobalNamespace::GameEnergyCounter> const& __cordl_internal_get__gameEnergyCounter() const;

  constexpr ::UnityW<::GlobalNamespace::GameEnergyCounter>& __cordl_internal_get__gameEnergyCounter();

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get__gameScenesManager() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get__gameScenesManager();

  constexpr ::UnityW<::GlobalNamespace::GameSongController> const& __cordl_internal_get__gameSongController() const;

  constexpr ::UnityW<::GlobalNamespace::GameSongController>& __cordl_internal_get__gameSongController();

  constexpr ::GlobalNamespace::StandardLevelGameplayManager_GameState const& __cordl_internal_get__gameState() const;

  constexpr ::GlobalNamespace::StandardLevelGameplayManager_GameState& __cordl_internal_get__gameState();

  constexpr ::GlobalNamespace::StandardLevelGameplayManager_InitData* const& __cordl_internal_get__initData() const;

  constexpr ::GlobalNamespace::StandardLevelGameplayManager_InitData*& __cordl_internal_get__initData();

  constexpr ::GlobalNamespace::LevelCompletionResults_LevelEndStateType const& __cordl_internal_get__levelEndStateType() const;

  constexpr ::GlobalNamespace::LevelCompletionResults_LevelEndStateType& __cordl_internal_get__levelEndStateType();

  constexpr ::UnityW<::GlobalNamespace::PauseController> const& __cordl_internal_get__pauseController() const;

  constexpr ::UnityW<::GlobalNamespace::PauseController>& __cordl_internal_get__pauseController();

  constexpr ::GlobalNamespace::StandardLevelGameplayManager_GameState const& __cordl_internal_get__prePauseGameState() const;

  constexpr ::GlobalNamespace::StandardLevelGameplayManager_GameState& __cordl_internal_get__prePauseGameState();

  constexpr ::GlobalNamespace::IReturnToMenuController* const& __cordl_internal_get__returnToMenuController() const;

  constexpr ::GlobalNamespace::IReturnToMenuController*& __cordl_internal_get__returnToMenuController();

  constexpr ::System::Action* const& __cordl_internal_get_levelDidStartEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_levelDidStartEvent();

  constexpr ::System::Action* const& __cordl_internal_get_levelFailedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_levelFailedEvent();

  constexpr ::System::Action* const& __cordl_internal_get_levelFinishedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_levelFinishedEvent();

  constexpr void __cordl_internal_set__audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController> value);

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr void __cordl_internal_set__beatmapData(::GlobalNamespace::IReadonlyBeatmapData* value);

  constexpr void __cordl_internal_set__gameEnergyCounter(::UnityW<::GlobalNamespace::GameEnergyCounter> value);

  constexpr void __cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void __cordl_internal_set__gameSongController(::UnityW<::GlobalNamespace::GameSongController> value);

  constexpr void __cordl_internal_set__gameState(::GlobalNamespace::StandardLevelGameplayManager_GameState value);

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::StandardLevelGameplayManager_InitData* value);

  constexpr void __cordl_internal_set__levelEndStateType(::GlobalNamespace::LevelCompletionResults_LevelEndStateType value);

  constexpr void __cordl_internal_set__pauseController(::UnityW<::GlobalNamespace::PauseController> value);

  constexpr void __cordl_internal_set__prePauseGameState(::GlobalNamespace::StandardLevelGameplayManager_GameState value);

  constexpr void __cordl_internal_set__returnToMenuController(::GlobalNamespace::IReturnToMenuController* value);

  constexpr void __cordl_internal_set_levelDidStartEvent(::System::Action* value);

  constexpr void __cordl_internal_set_levelFailedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_levelFinishedEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x5794454, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_levelDidStartEvent, addr 0x5793ab0, size 0xac, virtual true, abstract: false, final true
  inline void add_levelDidStartEvent(::System::Action* value);

  /// @brief Method add_levelFailedEvent, addr 0x5793d60, size 0xac, virtual true, abstract: false, final true
  inline void add_levelFailedEvent(::System::Action* value);

  /// @brief Method add_levelFinishedEvent, addr 0x5793c08, size 0xac, virtual true, abstract: false, final true
  inline void add_levelFinishedEvent(::System::Action* value);

  static inline ::UnityEngine::WaitForFixedUpdate* getStaticF_kWaitForFixedUpdate();

  /// @brief Method get_levelEndStateType, addr 0x5793eb8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::LevelCompletionResults_LevelEndStateType get_levelEndStateType();

  /// @brief Convert to "::GlobalNamespace::ILevelEndActions"
  constexpr ::GlobalNamespace::ILevelEndActions* i___GlobalNamespace__ILevelEndActions() noexcept;

  /// @brief Convert to "::GlobalNamespace::ILevelStartController"
  constexpr ::GlobalNamespace::ILevelStartController* i___GlobalNamespace__ILevelStartController() noexcept;

  /// @brief Method remove_levelDidStartEvent, addr 0x5793b5c, size 0xac, virtual true, abstract: false, final true
  inline void remove_levelDidStartEvent(::System::Action* value);

  /// @brief Method remove_levelFailedEvent, addr 0x5793e0c, size 0xac, virtual true, abstract: false, final true
  inline void remove_levelFailedEvent(::System::Action* value);

  /// @brief Method remove_levelFinishedEvent, addr 0x5793cb4, size 0xac, virtual true, abstract: false, final true
  inline void remove_levelFinishedEvent(::System::Action* value);

  static inline void setStaticF_kWaitForFixedUpdate(::UnityEngine::WaitForFixedUpdate* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardLevelGameplayManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelGameplayManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandardLevelGameplayManager(StandardLevelGameplayManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelGameplayManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandardLevelGameplayManager(StandardLevelGameplayManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5986 };

  /// @brief Field _gameScenesManager, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> ____gameScenesManager;

  /// @brief Field _gameSongController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameSongController> ____gameSongController;

  /// @brief Field _gameEnergyCounter, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameEnergyCounter> ____gameEnergyCounter;

  /// @brief Field _pauseController, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PauseController> ____pauseController;

  /// @brief Field _initData, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::StandardLevelGameplayManager_InitData* ____initData;

  /// @brief Field _audioTimeSyncController, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioTimeSyncController> ____audioTimeSyncController;

  /// @brief Field _beatmapData, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::IReadonlyBeatmapData* ____beatmapData;

  /// @brief Field _returnToMenuController, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::IReturnToMenuController* ____returnToMenuController;

  /// @brief Field _beatmapCallbacksController, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field levelDidStartEvent, offset: 0x68, size: 0x8, def value: None
  ::System::Action* ___levelDidStartEvent;

  /// @brief Field levelFinishedEvent, offset: 0x70, size: 0x8, def value: None
  ::System::Action* ___levelFinishedEvent;

  /// @brief Field levelFailedEvent, offset: 0x78, size: 0x8, def value: None
  ::System::Action* ___levelFailedEvent;

  /// @brief Field _gameState, offset: 0x80, size: 0x4, def value: None
  ::GlobalNamespace::StandardLevelGameplayManager_GameState ____gameState;

  /// @brief Field _levelEndStateType, offset: 0x84, size: 0x4, def value: None
  ::GlobalNamespace::LevelCompletionResults_LevelEndStateType ____levelEndStateType;

  /// @brief Field _prePauseGameState, offset: 0x88, size: 0x4, def value: None
  ::GlobalNamespace::StandardLevelGameplayManager_GameState ____prePauseGameState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StandardLevelGameplayManager, ____gameScenesManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelGameplayManager, ____gameSongController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelGameplayManager, ____gameEnergyCounter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelGameplayManager, ____pauseController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelGameplayManager, ____initData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelGameplayManager, ____audioTimeSyncController) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelGameplayManager, ____beatmapData) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelGameplayManager, ____returnToMenuController) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelGameplayManager, ____beatmapCallbacksController) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelGameplayManager, ___levelDidStartEvent) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelGameplayManager, ___levelFinishedEvent) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelGameplayManager, ___levelFailedEvent) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelGameplayManager, ____gameState) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelGameplayManager, ____levelEndStateType) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelGameplayManager, ____prePauseGameState) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardLevelGameplayManager, 0x90>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelGameplayManager_GameState, "", "StandardLevelGameplayManager/GameState");
NEED_NO_BOX(::GlobalNamespace::StandardLevelGameplayManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelGameplayManager*, "", "StandardLevelGameplayManager");
NEED_NO_BOX(::GlobalNamespace::StandardLevelGameplayManager_InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelGameplayManager_InitData*, "", "StandardLevelGameplayManager/InitData");
NEED_NO_BOX(::GlobalNamespace::StandardLevelGameplayManager__Start_d__27);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelGameplayManager__Start_d__27*, "", "StandardLevelGameplayManager/<Start>d__27");
