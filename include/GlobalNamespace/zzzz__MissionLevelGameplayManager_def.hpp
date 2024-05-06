#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MissionLevelGameplayManager_def.hpp"
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
class ILevelEndActions;
}
namespace GlobalNamespace {
class ILevelStartController;
}
namespace GlobalNamespace {
class MissionObjectiveCheckersManager;
}
namespace GlobalNamespace {
class PauseController;
}
namespace GlobalNamespace {
struct __MissionLevelGameplayManager__GameState;
}
namespace GlobalNamespace {
class __MissionLevelGameplayManager__InitData;
}
namespace GlobalNamespace {
class __MissionLevelGameplayManager___Start_d__23;
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
// Forward declare root types
namespace GlobalNamespace {
struct __MissionLevelGameplayManager__GameState;
}
namespace GlobalNamespace {
class MissionLevelGameplayManager;
}
namespace GlobalNamespace {
class __MissionLevelGameplayManager__InitData;
}
namespace GlobalNamespace {
class __MissionLevelGameplayManager___Start_d__23;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__MissionLevelGameplayManager__GameState);
MARK_REF_PTR_T(::GlobalNamespace::MissionLevelGameplayManager);
MARK_REF_PTR_T(::GlobalNamespace::__MissionLevelGameplayManager__InitData);
MARK_REF_PTR_T(::GlobalNamespace::__MissionLevelGameplayManager___Start_d__23);
// Type: ::InitData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MissionLevelGameplayManager::InitData*
class CORDL_TYPE __MissionLevelGameplayManager__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field failOn0Energy, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_failOn0Energy, put = __cordl_internal_set_failOn0Energy)) bool failOn0Energy;

  static inline ::GlobalNamespace::__MissionLevelGameplayManager__InitData* New_ctor(bool failOn0Energy);

  constexpr bool const& __cordl_internal_get_failOn0Energy() const;

  constexpr bool& __cordl_internal_get_failOn0Energy();

  constexpr void __cordl_internal_set_failOn0Energy(bool value);

  /// @brief Method .ctor, addr 0x26dd584, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(bool failOn0Energy);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MissionLevelGameplayManager__InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MissionLevelGameplayManager__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MissionLevelGameplayManager__InitData(__MissionLevelGameplayManager__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MissionLevelGameplayManager__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MissionLevelGameplayManager__InitData(__MissionLevelGameplayManager__InitData const&) = delete;

  /// @brief Field failOn0Energy, offset: 0x10, size: 0x1, def value: None
  bool ___failOn0Energy;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MissionLevelGameplayManager__InitData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionLevelGameplayManager__InitData, ___failOn0Energy) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GameState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::MissionLevelGameplayManager::GameState
struct CORDL_TYPE __MissionLevelGameplayManager__GameState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____MissionLevelGameplayManager__GameState_Unwrapped
  enum struct ____MissionLevelGameplayManager__GameState_Unwrapped : int32_t {
    __E_Intro = static_cast<int32_t>(0x0),
    __E_Playing = static_cast<int32_t>(0x1),
    __E_Paused = static_cast<int32_t>(0x2),
    __E_Finished = static_cast<int32_t>(0x3),
    __E_Failed = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____MissionLevelGameplayManager__GameState_Unwrapped() const noexcept {
    return static_cast<____MissionLevelGameplayManager__GameState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MissionLevelGameplayManager__GameState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MissionLevelGameplayManager__GameState(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Failed value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__MissionLevelGameplayManager__GameState const Failed;

  /// @brief Field Finished value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__MissionLevelGameplayManager__GameState const Finished;

  /// @brief Field Intro value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__MissionLevelGameplayManager__GameState const Intro;

  /// @brief Field Paused value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__MissionLevelGameplayManager__GameState const Paused;

  /// @brief Field Playing value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__MissionLevelGameplayManager__GameState const Playing;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MissionLevelGameplayManager__GameState, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionLevelGameplayManager__GameState, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<Start>d__23
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MissionLevelGameplayManager::<Start>d__23*
class CORDL_TYPE __MissionLevelGameplayManager___Start_d__23 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::MissionLevelGameplayManager> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x26dd5b0, size 0x3c0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__MissionLevelGameplayManager___Start_d__23* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x26ddb58, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x26ddb60, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x26ddba0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x26dd5ac, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::MissionLevelGameplayManager> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MissionLevelGameplayManager>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MissionLevelGameplayManager> value);

  /// @brief Method .ctor, addr 0x26dcf80, size 0x28, virtual false, abstract: false, final false
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
  constexpr __MissionLevelGameplayManager___Start_d__23();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MissionLevelGameplayManager___Start_d__23", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MissionLevelGameplayManager___Start_d__23(__MissionLevelGameplayManager___Start_d__23&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MissionLevelGameplayManager___Start_d__23", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MissionLevelGameplayManager___Start_d__23(__MissionLevelGameplayManager___Start_d__23 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionLevelGameplayManager> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MissionLevelGameplayManager___Start_d__23, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionLevelGameplayManager___Start_d__23, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionLevelGameplayManager___Start_d__23, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionLevelGameplayManager___Start_d__23, _____4__this) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MissionLevelGameplayManager
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MissionLevelGameplayManager*
class CORDL_TYPE MissionLevelGameplayManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using GameState = ::GlobalNamespace::__MissionLevelGameplayManager__GameState;

  using InitData = ::GlobalNamespace::__MissionLevelGameplayManager__InitData;

  using _Start_d__23 = ::GlobalNamespace::__MissionLevelGameplayManager___Start_d__23;

  /// @brief Field _gameEnergyCounter, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__gameEnergyCounter, put = __cordl_internal_set__gameEnergyCounter))::UnityW<::GlobalNamespace::GameEnergyCounter> _gameEnergyCounter;

  /// @brief Field _gameScenesManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__gameScenesManager, put = __cordl_internal_set__gameScenesManager))::UnityW<::GlobalNamespace::GameScenesManager> _gameScenesManager;

  /// @brief Field _gameSongController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__gameSongController, put = __cordl_internal_set__gameSongController))::UnityW<::GlobalNamespace::GameSongController> _gameSongController;

  /// @brief Field _gameState, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__gameState, put = __cordl_internal_set__gameState))::GlobalNamespace::__MissionLevelGameplayManager__GameState _gameState;

  /// @brief Field _initData, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData))::GlobalNamespace::__MissionLevelGameplayManager__InitData* _initData;

  /// @brief Field _missionObjectiveCheckersManager, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__missionObjectiveCheckersManager,
                      put = __cordl_internal_set__missionObjectiveCheckersManager))::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager> _missionObjectiveCheckersManager;

  /// @brief Field _pauseController, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__pauseController, put = __cordl_internal_set__pauseController))::UnityW<::GlobalNamespace::PauseController> _pauseController;

  /// @brief Field _prePauseGameState, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get__prePauseGameState, put = __cordl_internal_set__prePauseGameState))::GlobalNamespace::__MissionLevelGameplayManager__GameState _prePauseGameState;

  /// @brief Field levelDidStartEvent, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_levelDidStartEvent, put = __cordl_internal_set_levelDidStartEvent))::System::Action* levelDidStartEvent;

  /// @brief Field levelFailedEvent, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_levelFailedEvent, put = __cordl_internal_set_levelFailedEvent))::System::Action* levelFailedEvent;

  /// @brief Field levelFinishedEvent, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_levelFinishedEvent, put = __cordl_internal_set_levelFinishedEvent))::System::Action* levelFinishedEvent;

  /// @brief Field levelWillStartIntroEvent, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_levelWillStartIntroEvent, put = __cordl_internal_set_levelWillStartIntroEvent))::System::Action* levelWillStartIntroEvent;

  /// @brief Convert operator to "::GlobalNamespace::ILevelEndActions"
  constexpr operator ::GlobalNamespace::ILevelEndActions*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::ILevelStartController"
  constexpr operator ::GlobalNamespace::ILevelStartController*() noexcept;

  /// @brief Method Awake, addr 0x26dcf10, size 0x8, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleGameEnergyDidReach0, addr 0x26dd46c, size 0x54, virtual false, abstract: false, final false
  inline void HandleGameEnergyDidReach0();

  /// @brief Method HandleMissionObjectiveCheckersManagerObjectiveDidFail, addr 0x26dd4c0, size 0x34, virtual false, abstract: false, final false
  inline void HandleMissionObjectiveCheckersManagerObjectiveDidFail();

  /// @brief Method HandlePauseControllerCanPause, addr 0x26dd528, size 0x24, virtual false, abstract: false, final false
  inline void HandlePauseControllerCanPause(::System::Action_1<bool>* canPause);

  /// @brief Method HandlePauseControllerDidPause, addr 0x26dd54c, size 0x18, virtual false, abstract: false, final false
  inline void HandlePauseControllerDidPause();

  /// @brief Method HandlePauseControllerDidResume, addr 0x26dd564, size 0x18, virtual false, abstract: false, final false
  inline void HandlePauseControllerDidResume();

  /// @brief Method HandleSongDidFinish, addr 0x26dd4f4, size 0x34, virtual false, abstract: false, final false
  inline void HandleSongDidFinish();

  static inline ::GlobalNamespace::MissionLevelGameplayManager* New_ctor();

  /// @brief Method OnDestroy, addr 0x26dcfa8, size 0x2dc, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x26dcf18, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* Start();

  constexpr ::UnityW<::GlobalNamespace::GameEnergyCounter> const& __cordl_internal_get__gameEnergyCounter() const;

  constexpr ::UnityW<::GlobalNamespace::GameEnergyCounter>& __cordl_internal_get__gameEnergyCounter();

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get__gameScenesManager() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get__gameScenesManager();

  constexpr ::UnityW<::GlobalNamespace::GameSongController> const& __cordl_internal_get__gameSongController() const;

  constexpr ::UnityW<::GlobalNamespace::GameSongController>& __cordl_internal_get__gameSongController();

  constexpr ::GlobalNamespace::__MissionLevelGameplayManager__GameState const& __cordl_internal_get__gameState() const;

  constexpr ::GlobalNamespace::__MissionLevelGameplayManager__GameState& __cordl_internal_get__gameState();

  constexpr ::GlobalNamespace::__MissionLevelGameplayManager__InitData*& __cordl_internal_get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MissionLevelGameplayManager__InitData*> const& __cordl_internal_get__initData() const;

  constexpr ::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager> const& __cordl_internal_get__missionObjectiveCheckersManager() const;

  constexpr ::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager>& __cordl_internal_get__missionObjectiveCheckersManager();

  constexpr ::UnityW<::GlobalNamespace::PauseController> const& __cordl_internal_get__pauseController() const;

  constexpr ::UnityW<::GlobalNamespace::PauseController>& __cordl_internal_get__pauseController();

  constexpr ::GlobalNamespace::__MissionLevelGameplayManager__GameState const& __cordl_internal_get__prePauseGameState() const;

  constexpr ::GlobalNamespace::__MissionLevelGameplayManager__GameState& __cordl_internal_get__prePauseGameState();

  constexpr ::System::Action*& __cordl_internal_get_levelDidStartEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_levelDidStartEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_levelFailedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_levelFailedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_levelFinishedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_levelFinishedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_levelWillStartIntroEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_levelWillStartIntroEvent() const;

  constexpr void __cordl_internal_set__gameEnergyCounter(::UnityW<::GlobalNamespace::GameEnergyCounter> value);

  constexpr void __cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void __cordl_internal_set__gameSongController(::UnityW<::GlobalNamespace::GameSongController> value);

  constexpr void __cordl_internal_set__gameState(::GlobalNamespace::__MissionLevelGameplayManager__GameState value);

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::__MissionLevelGameplayManager__InitData* value);

  constexpr void __cordl_internal_set__missionObjectiveCheckersManager(::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager> value);

  constexpr void __cordl_internal_set__pauseController(::UnityW<::GlobalNamespace::PauseController> value);

  constexpr void __cordl_internal_set__prePauseGameState(::GlobalNamespace::__MissionLevelGameplayManager__GameState value);

  constexpr void __cordl_internal_set_levelDidStartEvent(::System::Action* value);

  constexpr void __cordl_internal_set_levelFailedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_levelFinishedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_levelWillStartIntroEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x26dd57c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_levelDidStartEvent, addr 0x26dcb68, size 0x9c, virtual true, abstract: false, final true
  inline void add_levelDidStartEvent(::System::Action* value);

  /// @brief Method add_levelFailedEvent, addr 0x26dcca0, size 0x9c, virtual true, abstract: false, final true
  inline void add_levelFailedEvent(::System::Action* value);

  /// @brief Method add_levelFinishedEvent, addr 0x26dcdd8, size 0x9c, virtual true, abstract: false, final true
  inline void add_levelFinishedEvent(::System::Action* value);

  /// @brief Method add_levelWillStartIntroEvent, addr 0x26dca30, size 0x9c, virtual true, abstract: false, final true
  inline void add_levelWillStartIntroEvent(::System::Action* value);

  /// @brief Convert to "::GlobalNamespace::ILevelEndActions"
  constexpr ::GlobalNamespace::ILevelEndActions* i___GlobalNamespace__ILevelEndActions() noexcept;

  /// @brief Convert to "::GlobalNamespace::ILevelStartController"
  constexpr ::GlobalNamespace::ILevelStartController* i___GlobalNamespace__ILevelStartController() noexcept;

  /// @brief Method remove_levelDidStartEvent, addr 0x26dcc04, size 0x9c, virtual true, abstract: false, final true
  inline void remove_levelDidStartEvent(::System::Action* value);

  /// @brief Method remove_levelFailedEvent, addr 0x26dcd3c, size 0x9c, virtual true, abstract: false, final true
  inline void remove_levelFailedEvent(::System::Action* value);

  /// @brief Method remove_levelFinishedEvent, addr 0x26dce74, size 0x9c, virtual true, abstract: false, final true
  inline void remove_levelFinishedEvent(::System::Action* value);

  /// @brief Method remove_levelWillStartIntroEvent, addr 0x26dcacc, size 0x9c, virtual true, abstract: false, final true
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

  /// @brief Field _missionObjectiveCheckersManager, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager> ____missionObjectiveCheckersManager;

  /// @brief Field _gameScenesManager, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> ____gameScenesManager;

  /// @brief Field _gameSongController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameSongController> ____gameSongController;

  /// @brief Field _gameEnergyCounter, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameEnergyCounter> ____gameEnergyCounter;

  /// @brief Field _pauseController, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PauseController> ____pauseController;

  /// @brief Field _initData, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::__MissionLevelGameplayManager__InitData* ____initData;

  /// @brief Field levelWillStartIntroEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action* ___levelWillStartIntroEvent;

  /// @brief Field levelDidStartEvent, offset: 0x50, size: 0x8, def value: None
  ::System::Action* ___levelDidStartEvent;

  /// @brief Field levelFailedEvent, offset: 0x58, size: 0x8, def value: None
  ::System::Action* ___levelFailedEvent;

  /// @brief Field levelFinishedEvent, offset: 0x60, size: 0x8, def value: None
  ::System::Action* ___levelFinishedEvent;

  /// @brief Field _gameState, offset: 0x68, size: 0x4, def value: None
  ::GlobalNamespace::__MissionLevelGameplayManager__GameState ____gameState;

  /// @brief Field _prePauseGameState, offset: 0x6c, size: 0x4, def value: None
  ::GlobalNamespace::__MissionLevelGameplayManager__GameState ____prePauseGameState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionLevelGameplayManager, 0x70>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelGameplayManager, ____missionObjectiveCheckersManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelGameplayManager, ____gameScenesManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelGameplayManager, ____gameSongController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelGameplayManager, ____gameEnergyCounter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelGameplayManager, ____pauseController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelGameplayManager, ____initData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelGameplayManager, ___levelWillStartIntroEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelGameplayManager, ___levelDidStartEvent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelGameplayManager, ___levelFailedEvent) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelGameplayManager, ___levelFinishedEvent) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelGameplayManager, ____gameState) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelGameplayManager, ____prePauseGameState) == 0x6c, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MissionLevelGameplayManager__GameState, "", "MissionLevelGameplayManager/GameState");
NEED_NO_BOX(::GlobalNamespace::MissionLevelGameplayManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionLevelGameplayManager*, "", "MissionLevelGameplayManager");
NEED_NO_BOX(::GlobalNamespace::__MissionLevelGameplayManager__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MissionLevelGameplayManager__InitData*, "", "MissionLevelGameplayManager/InitData");
NEED_NO_BOX(::GlobalNamespace::__MissionLevelGameplayManager___Start_d__23);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MissionLevelGameplayManager___Start_d__23*, "", "MissionLevelGameplayManager/<Start>d__23");
