#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionLevelGameplayManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ILevelEndActions_def.hpp"
#include "GlobalNamespace/zzzz__ILevelStartController_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MissionLevelGameplayManager)
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
struct LevelCompletionResults_LevelEndStateType;
}
namespace GlobalNamespace {
struct MissionLevelGameplayManager_GameState;
}
namespace GlobalNamespace {
class MissionLevelGameplayManager_InitData;
}
namespace GlobalNamespace {
class MissionLevelGameplayManager__Start_d__26;
}
namespace GlobalNamespace {
class MissionObjectiveCheckersManager;
}
namespace GlobalNamespace {
class PauseController;
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
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct MissionLevelGameplayManager_GameState;
}
namespace GlobalNamespace {
class MissionLevelGameplayManager;
}
namespace GlobalNamespace {
class MissionLevelGameplayManager_InitData;
}
namespace GlobalNamespace {
class MissionLevelGameplayManager__Start_d__26;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MissionLevelGameplayManager_GameState);
MARK_REF_PTR_T(::GlobalNamespace::MissionLevelGameplayManager);
MARK_REF_PTR_T(::GlobalNamespace::MissionLevelGameplayManager_InitData);
MARK_REF_PTR_T(::GlobalNamespace::MissionLevelGameplayManager__Start_d__26);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MissionLevelGameplayManager/InitData
class CORDL_TYPE MissionLevelGameplayManager_InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field failOn0Energy, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_failOn0Energy, put = __cordl_internal_set_failOn0Energy)) bool failOn0Energy;

  static inline ::GlobalNamespace::MissionLevelGameplayManager_InitData* New_ctor(bool failOn0Energy);

  constexpr bool const& __cordl_internal_get_failOn0Energy() const;

  constexpr bool& __cordl_internal_get_failOn0Energy();

  constexpr void __cordl_internal_set_failOn0Energy(bool value);

  /// @brief Method .ctor, addr 0x3ba9030, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(bool failOn0Energy);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionLevelGameplayManager_InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionLevelGameplayManager_InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionLevelGameplayManager_InitData(MissionLevelGameplayManager_InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionLevelGameplayManager_InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionLevelGameplayManager_InitData(MissionLevelGameplayManager_InitData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4395 };

  /// @brief Field failOn0Energy, offset: 0x10, size: 0x1, def value: None
  bool ___failOn0Energy;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MissionLevelGameplayManager_InitData, ___failOn0Energy) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionLevelGameplayManager_InitData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: MissionLevelGameplayManager/GameState
struct CORDL_TYPE MissionLevelGameplayManager_GameState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MissionLevelGameplayManager_GameState_Unwrapped
  enum struct __MissionLevelGameplayManager_GameState_Unwrapped : int32_t {
    __E_Intro = static_cast<int32_t>(0x0),
    __E_Playing = static_cast<int32_t>(0x1),
    __E_Paused = static_cast<int32_t>(0x2),
    __E_Resuming = static_cast<int32_t>(0x3),
    __E_Finished = static_cast<int32_t>(0x4),
    __E_Failed = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MissionLevelGameplayManager_GameState_Unwrapped() const noexcept {
    return static_cast<__MissionLevelGameplayManager_GameState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionLevelGameplayManager_GameState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MissionLevelGameplayManager_GameState(int32_t value__) noexcept;

  /// @brief Field Failed value: I32(5)
  static ::GlobalNamespace::MissionLevelGameplayManager_GameState const Failed;

  /// @brief Field Finished value: I32(4)
  static ::GlobalNamespace::MissionLevelGameplayManager_GameState const Finished;

  /// @brief Field Intro value: I32(0)
  static ::GlobalNamespace::MissionLevelGameplayManager_GameState const Intro;

  /// @brief Field Paused value: I32(2)
  static ::GlobalNamespace::MissionLevelGameplayManager_GameState const Paused;

  /// @brief Field Playing value: I32(1)
  static ::GlobalNamespace::MissionLevelGameplayManager_GameState const Playing;

  /// @brief Field Resuming value: I32(3)
  static ::GlobalNamespace::MissionLevelGameplayManager_GameState const Resuming;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4396 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MissionLevelGameplayManager_GameState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionLevelGameplayManager_GameState, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MissionLevelGameplayManager/<Start>d__26
class CORDL_TYPE MissionLevelGameplayManager__Start_d__26 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::MissionLevelGameplayManager> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x3ba905c, size 0x3f0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::MissionLevelGameplayManager__Start_d__26* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x3ba96d0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3ba96d8, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3ba9710, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3ba9058, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::MissionLevelGameplayManager> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MissionLevelGameplayManager>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MissionLevelGameplayManager> value);

  /// @brief Method .ctor, addr 0x3ba8924, size 0x28, virtual false, abstract: false, final false
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
  constexpr MissionLevelGameplayManager__Start_d__26();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionLevelGameplayManager__Start_d__26", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionLevelGameplayManager__Start_d__26(MissionLevelGameplayManager__Start_d__26&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionLevelGameplayManager__Start_d__26", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionLevelGameplayManager__Start_d__26(MissionLevelGameplayManager__Start_d__26 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4397 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionLevelGameplayManager> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MissionLevelGameplayManager__Start_d__26, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelGameplayManager__Start_d__26, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelGameplayManager__Start_d__26, _____4__this) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionLevelGameplayManager__Start_d__26, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies ILevelEndActions, ILevelStartController, LevelCompletionResults::LevelEndStateType, MissionLevelGameplayManager::GameState, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MissionLevelGameplayManager
class CORDL_TYPE MissionLevelGameplayManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using GameState = ::GlobalNamespace::MissionLevelGameplayManager_GameState;

  using InitData = ::GlobalNamespace::MissionLevelGameplayManager_InitData;

  using _Start_d__26 = ::GlobalNamespace::MissionLevelGameplayManager__Start_d__26;

  /// @brief Field _gameEnergyCounter, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__gameEnergyCounter, put = __cordl_internal_set__gameEnergyCounter)) ::UnityW<::GlobalNamespace::GameEnergyCounter> _gameEnergyCounter;

  /// @brief Field _gameScenesManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__gameScenesManager, put = __cordl_internal_set__gameScenesManager)) ::UnityW<::GlobalNamespace::GameScenesManager> _gameScenesManager;

  /// @brief Field _gameSongController, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__gameSongController, put = __cordl_internal_set__gameSongController)) ::UnityW<::GlobalNamespace::GameSongController> _gameSongController;

  /// @brief Field _gameState, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get__gameState, put = __cordl_internal_set__gameState)) ::GlobalNamespace::MissionLevelGameplayManager_GameState _gameState;

  /// @brief Field _initData, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData)) ::GlobalNamespace::MissionLevelGameplayManager_InitData* _initData;

  /// @brief Field _levelEndStateType, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get__levelEndStateType, put = __cordl_internal_set__levelEndStateType)) ::GlobalNamespace::LevelCompletionResults_LevelEndStateType _levelEndStateType;

  /// @brief Field _missionObjectiveCheckersManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__missionObjectiveCheckersManager,
                      put = __cordl_internal_set__missionObjectiveCheckersManager)) ::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager>
      _missionObjectiveCheckersManager;

  /// @brief Field _pauseController, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__pauseController, put = __cordl_internal_set__pauseController)) ::UnityW<::GlobalNamespace::PauseController> _pauseController;

  /// @brief Field _prePauseGameState, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get__prePauseGameState, put = __cordl_internal_set__prePauseGameState)) ::GlobalNamespace::MissionLevelGameplayManager_GameState _prePauseGameState;

  /// @brief Field levelDidStartEvent, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_levelDidStartEvent, put = __cordl_internal_set_levelDidStartEvent)) ::System::Action* levelDidStartEvent;

  __declspec(property(get = get_levelEndStateType)) ::GlobalNamespace::LevelCompletionResults_LevelEndStateType levelEndStateType;

  /// @brief Field levelFailedEvent, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_levelFailedEvent, put = __cordl_internal_set_levelFailedEvent)) ::System::Action* levelFailedEvent;

  /// @brief Field levelFinishedEvent, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_levelFinishedEvent, put = __cordl_internal_set_levelFinishedEvent)) ::System::Action* levelFinishedEvent;

  /// @brief Field levelWillStartIntroEvent, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_levelWillStartIntroEvent, put = __cordl_internal_set_levelWillStartIntroEvent)) ::System::Action* levelWillStartIntroEvent;

  /// @brief Convert operator to "::GlobalNamespace::ILevelEndActions"
  constexpr operator ::GlobalNamespace::ILevelEndActions*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::ILevelStartController"
  constexpr operator ::GlobalNamespace::ILevelStartController*() noexcept;

  /// @brief Method Awake, addr 0x3ba88bc, size 0x8, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleGameEnergyDidReach0, addr 0x3ba8ed8, size 0x5c, virtual false, abstract: false, final false
  inline void HandleGameEnergyDidReach0();

  /// @brief Method HandleMissionObjectiveCheckersManagerObjectiveDidFail, addr 0x3ba8f34, size 0x3c, virtual false, abstract: false, final false
  inline void HandleMissionObjectiveCheckersManagerObjectiveDidFail();

  /// @brief Method HandlePauseControllerCanPause, addr 0x3ba8fa4, size 0x3c, virtual false, abstract: false, final false
  inline void HandlePauseControllerCanPause(::System::Action_1<bool>* canPause);

  /// @brief Method HandlePauseControllerDidPause, addr 0x3ba8fe0, size 0x18, virtual false, abstract: false, final false
  inline void HandlePauseControllerDidPause();

  /// @brief Method HandlePauseControllerDidResume, addr 0x3ba9010, size 0x18, virtual false, abstract: false, final false
  inline void HandlePauseControllerDidResume();

  /// @brief Method HandlePauseControllerDidStartResume, addr 0x3ba8ff8, size 0x18, virtual false, abstract: false, final false
  inline void HandlePauseControllerDidStartResume();

  /// @brief Method HandleSongDidFinish, addr 0x3ba8f70, size 0x34, virtual false, abstract: false, final false
  inline void HandleSongDidFinish();

  static inline ::GlobalNamespace::MissionLevelGameplayManager* New_ctor();

  /// @brief Method OnDestroy, addr 0x3ba894c, size 0x308, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x3ba88c4, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* Start();

  constexpr ::UnityW<::GlobalNamespace::GameEnergyCounter> const& __cordl_internal_get__gameEnergyCounter() const;

  constexpr ::UnityW<::GlobalNamespace::GameEnergyCounter>& __cordl_internal_get__gameEnergyCounter();

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get__gameScenesManager() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get__gameScenesManager();

  constexpr ::UnityW<::GlobalNamespace::GameSongController> const& __cordl_internal_get__gameSongController() const;

  constexpr ::UnityW<::GlobalNamespace::GameSongController>& __cordl_internal_get__gameSongController();

  constexpr ::GlobalNamespace::MissionLevelGameplayManager_GameState const& __cordl_internal_get__gameState() const;

  constexpr ::GlobalNamespace::MissionLevelGameplayManager_GameState& __cordl_internal_get__gameState();

  constexpr ::GlobalNamespace::MissionLevelGameplayManager_InitData* const& __cordl_internal_get__initData() const;

  constexpr ::GlobalNamespace::MissionLevelGameplayManager_InitData*& __cordl_internal_get__initData();

  constexpr ::GlobalNamespace::LevelCompletionResults_LevelEndStateType const& __cordl_internal_get__levelEndStateType() const;

  constexpr ::GlobalNamespace::LevelCompletionResults_LevelEndStateType& __cordl_internal_get__levelEndStateType();

  constexpr ::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager> const& __cordl_internal_get__missionObjectiveCheckersManager() const;

  constexpr ::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager>& __cordl_internal_get__missionObjectiveCheckersManager();

  constexpr ::UnityW<::GlobalNamespace::PauseController> const& __cordl_internal_get__pauseController() const;

  constexpr ::UnityW<::GlobalNamespace::PauseController>& __cordl_internal_get__pauseController();

  constexpr ::GlobalNamespace::MissionLevelGameplayManager_GameState const& __cordl_internal_get__prePauseGameState() const;

  constexpr ::GlobalNamespace::MissionLevelGameplayManager_GameState& __cordl_internal_get__prePauseGameState();

  constexpr ::System::Action* const& __cordl_internal_get_levelDidStartEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_levelDidStartEvent();

  constexpr ::System::Action* const& __cordl_internal_get_levelFailedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_levelFailedEvent();

  constexpr ::System::Action* const& __cordl_internal_get_levelFinishedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_levelFinishedEvent();

  constexpr ::System::Action* const& __cordl_internal_get_levelWillStartIntroEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_levelWillStartIntroEvent();

  constexpr void __cordl_internal_set__gameEnergyCounter(::UnityW<::GlobalNamespace::GameEnergyCounter> value);

  constexpr void __cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void __cordl_internal_set__gameSongController(::UnityW<::GlobalNamespace::GameSongController> value);

  constexpr void __cordl_internal_set__gameState(::GlobalNamespace::MissionLevelGameplayManager_GameState value);

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::MissionLevelGameplayManager_InitData* value);

  constexpr void __cordl_internal_set__levelEndStateType(::GlobalNamespace::LevelCompletionResults_LevelEndStateType value);

  constexpr void __cordl_internal_set__missionObjectiveCheckersManager(::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager> value);

  constexpr void __cordl_internal_set__pauseController(::UnityW<::GlobalNamespace::PauseController> value);

  constexpr void __cordl_internal_set__prePauseGameState(::GlobalNamespace::MissionLevelGameplayManager_GameState value);

  constexpr void __cordl_internal_set_levelDidStartEvent(::System::Action* value);

  constexpr void __cordl_internal_set_levelFailedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_levelFinishedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_levelWillStartIntroEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x3ba9028, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_levelDidStartEvent, addr 0x3ba850c, size 0x9c, virtual true, abstract: false, final true
  inline void add_levelDidStartEvent(::System::Action* value);

  /// @brief Method add_levelFailedEvent, addr 0x3ba877c, size 0x9c, virtual true, abstract: false, final true
  inline void add_levelFailedEvent(::System::Action* value);

  /// @brief Method add_levelFinishedEvent, addr 0x3ba8644, size 0x9c, virtual true, abstract: false, final true
  inline void add_levelFinishedEvent(::System::Action* value);

  /// @brief Method add_levelWillStartIntroEvent, addr 0x3ba83d4, size 0x9c, virtual true, abstract: false, final true
  inline void add_levelWillStartIntroEvent(::System::Action* value);

  /// @brief Method get_levelEndStateType, addr 0x3ba88b4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::LevelCompletionResults_LevelEndStateType get_levelEndStateType();

  /// @brief Convert to "::GlobalNamespace::ILevelEndActions"
  constexpr ::GlobalNamespace::ILevelEndActions* i___GlobalNamespace__ILevelEndActions() noexcept;

  /// @brief Convert to "::GlobalNamespace::ILevelStartController"
  constexpr ::GlobalNamespace::ILevelStartController* i___GlobalNamespace__ILevelStartController() noexcept;

  /// @brief Method remove_levelDidStartEvent, addr 0x3ba85a8, size 0x9c, virtual true, abstract: false, final true
  inline void remove_levelDidStartEvent(::System::Action* value);

  /// @brief Method remove_levelFailedEvent, addr 0x3ba8818, size 0x9c, virtual true, abstract: false, final true
  inline void remove_levelFailedEvent(::System::Action* value);

  /// @brief Method remove_levelFinishedEvent, addr 0x3ba86e0, size 0x9c, virtual true, abstract: false, final true
  inline void remove_levelFinishedEvent(::System::Action* value);

  /// @brief Method remove_levelWillStartIntroEvent, addr 0x3ba8470, size 0x9c, virtual true, abstract: false, final true
  inline void remove_levelWillStartIntroEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionLevelGameplayManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionLevelGameplayManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionLevelGameplayManager(MissionLevelGameplayManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionLevelGameplayManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionLevelGameplayManager(MissionLevelGameplayManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4398 };

  /// @brief Field _missionObjectiveCheckersManager, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager> ____missionObjectiveCheckersManager;

  /// @brief Field _gameScenesManager, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> ____gameScenesManager;

  /// @brief Field _gameSongController, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameSongController> ____gameSongController;

  /// @brief Field _gameEnergyCounter, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameEnergyCounter> ____gameEnergyCounter;

  /// @brief Field _pauseController, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PauseController> ____pauseController;

  /// @brief Field _initData, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::MissionLevelGameplayManager_InitData* ____initData;

  /// @brief Field levelWillStartIntroEvent, offset: 0x50, size: 0x8, def value: None
  ::System::Action* ___levelWillStartIntroEvent;

  /// @brief Field levelDidStartEvent, offset: 0x58, size: 0x8, def value: None
  ::System::Action* ___levelDidStartEvent;

  /// @brief Field levelFinishedEvent, offset: 0x60, size: 0x8, def value: None
  ::System::Action* ___levelFinishedEvent;

  /// @brief Field levelFailedEvent, offset: 0x68, size: 0x8, def value: None
  ::System::Action* ___levelFailedEvent;

  /// @brief Field _gameState, offset: 0x70, size: 0x4, def value: None
  ::GlobalNamespace::MissionLevelGameplayManager_GameState ____gameState;

  /// @brief Field _prePauseGameState, offset: 0x74, size: 0x4, def value: None
  ::GlobalNamespace::MissionLevelGameplayManager_GameState ____prePauseGameState;

  /// @brief Field _levelEndStateType, offset: 0x78, size: 0x4, def value: None
  ::GlobalNamespace::LevelCompletionResults_LevelEndStateType ____levelEndStateType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MissionLevelGameplayManager, ____missionObjectiveCheckersManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelGameplayManager, ____gameScenesManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelGameplayManager, ____gameSongController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelGameplayManager, ____gameEnergyCounter) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelGameplayManager, ____pauseController) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelGameplayManager, ____initData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelGameplayManager, ___levelWillStartIntroEvent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelGameplayManager, ___levelDidStartEvent) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelGameplayManager, ___levelFinishedEvent) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelGameplayManager, ___levelFailedEvent) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelGameplayManager, ____gameState) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelGameplayManager, ____prePauseGameState) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelGameplayManager, ____levelEndStateType) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionLevelGameplayManager, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionLevelGameplayManager_GameState, "", "MissionLevelGameplayManager/GameState");
NEED_NO_BOX(::GlobalNamespace::MissionLevelGameplayManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionLevelGameplayManager*, "", "MissionLevelGameplayManager");
NEED_NO_BOX(::GlobalNamespace::MissionLevelGameplayManager_InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionLevelGameplayManager_InitData*, "", "MissionLevelGameplayManager/InitData");
NEED_NO_BOX(::GlobalNamespace::MissionLevelGameplayManager__Start_d__26);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionLevelGameplayManager__Start_d__26*, "", "MissionLevelGameplayManager/<Start>d__26");
