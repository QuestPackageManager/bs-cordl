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
namespace System {
class Action;
}
namespace GlobalNamespace {
class MissionObjectiveCheckersManager;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
class ILevelEndActions;
}
namespace GlobalNamespace {
class ILevelStartController;
}
namespace GlobalNamespace {
class __MissionLevelGameplayManager___Start_d__23;
}
namespace GlobalNamespace {
class GameEnergyCounter;
}
namespace GlobalNamespace {
class __MissionLevelGameplayManager__InitData;
}
namespace GlobalNamespace {
struct __MissionLevelGameplayManager__GameState;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
class GameSongController;
}
namespace GlobalNamespace {
class PauseController;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class Object;
}
namespace System {
class IDisposable;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5018))
// CS Name: ::MissionLevelGameplayManager::InitData*
class CORDL_TYPE __MissionLevelGameplayManager__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field failOn0Energy, offset 0x10, size 0x1
  __declspec(property(get = __get_failOn0Energy, put = __set_failOn0Energy)) bool failOn0Energy;

  constexpr bool& __get_failOn0Energy();

  constexpr bool const& __get_failOn0Energy() const;

  constexpr void __set_failOn0Energy(bool value);

  static inline ::GlobalNamespace::__MissionLevelGameplayManager__InitData* New_ctor(bool failOn0Energy);

  /// @brief Method .ctor addr 0x23bc598 size 0x28 virtual false final false
  inline void _ctor(bool failOn0Energy);

  // Ctor Parameters [CppParam { name: "", ty: "__MissionLevelGameplayManager__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MissionLevelGameplayManager__InitData(__MissionLevelGameplayManager__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MissionLevelGameplayManager__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MissionLevelGameplayManager__InitData(__MissionLevelGameplayManager__InitData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MissionLevelGameplayManager__InitData();

public:
  /// @brief Field failOn0Energy, offset: 0x10, size: 0x1, def value: None
  bool ___failOn0Energy;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MissionLevelGameplayManager__InitData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::GameState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5019))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MissionLevelGameplayManager__GameState(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MissionLevelGameplayManager__GameState();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Intro value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__MissionLevelGameplayManager__GameState const Intro;

  /// @brief Field Playing value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__MissionLevelGameplayManager__GameState const Playing;

  /// @brief Field Paused value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__MissionLevelGameplayManager__GameState const Paused;

  /// @brief Field Finished value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__MissionLevelGameplayManager__GameState const Finished;

  /// @brief Field Failed value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__MissionLevelGameplayManager__GameState const Failed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MissionLevelGameplayManager__GameState, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<Start>d__23
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5020))
// CS Name: ::MissionLevelGameplayManager::<Start>d__23*
class CORDL_TYPE __MissionLevelGameplayManager___Start_d__23 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::MissionLevelGameplayManager* __4__this;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Object*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Object* value);

  constexpr ::GlobalNamespace::MissionLevelGameplayManager*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionLevelGameplayManager*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::MissionLevelGameplayManager* value);

  static inline ::GlobalNamespace::__MissionLevelGameplayManager___Start_d__23* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x23bbf94 size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x23bc5c0 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x23bc5c4 size 0x3c0 virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x23bcb6c size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x23bcb74 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x23bcbb4 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__MissionLevelGameplayManager___Start_d__23", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MissionLevelGameplayManager___Start_d__23(__MissionLevelGameplayManager___Start_d__23&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MissionLevelGameplayManager___Start_d__23", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MissionLevelGameplayManager___Start_d__23(__MissionLevelGameplayManager___Start_d__23 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MissionLevelGameplayManager___Start_d__23();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MissionLevelGameplayManager* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MissionLevelGameplayManager___Start_d__23, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::MissionLevelGameplayManager
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(5019))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5021))
// CS Name: ::MissionLevelGameplayManager*
class CORDL_TYPE MissionLevelGameplayManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _Start_d__23 = ::GlobalNamespace::__MissionLevelGameplayManager___Start_d__23;

  using GameState = ::GlobalNamespace::__MissionLevelGameplayManager__GameState;

  using InitData = ::GlobalNamespace::__MissionLevelGameplayManager__InitData;

  /// @brief Field _missionObjectiveCheckersManager, offset 0x18, size 0x8
  __declspec(property(get = __get__missionObjectiveCheckersManager, put = __set__missionObjectiveCheckersManager))::GlobalNamespace::MissionObjectiveCheckersManager* _missionObjectiveCheckersManager;

  /// @brief Field _gameScenesManager, offset 0x20, size 0x8
  __declspec(property(get = __get__gameScenesManager, put = __set__gameScenesManager))::GlobalNamespace::GameScenesManager* _gameScenesManager;

  /// @brief Field _gameSongController, offset 0x28, size 0x8
  __declspec(property(get = __get__gameSongController, put = __set__gameSongController))::GlobalNamespace::GameSongController* _gameSongController;

  /// @brief Field _gameEnergyCounter, offset 0x30, size 0x8
  __declspec(property(get = __get__gameEnergyCounter, put = __set__gameEnergyCounter))::GlobalNamespace::GameEnergyCounter* _gameEnergyCounter;

  /// @brief Field _pauseController, offset 0x38, size 0x8
  __declspec(property(get = __get__pauseController, put = __set__pauseController))::GlobalNamespace::PauseController* _pauseController;

  /// @brief Field _initData, offset 0x40, size 0x8
  __declspec(property(get = __get__initData, put = __set__initData))::GlobalNamespace::__MissionLevelGameplayManager__InitData* _initData;

  /// @brief Field levelWillStartIntroEvent, offset 0x48, size 0x8
  __declspec(property(get = __get_levelWillStartIntroEvent, put = __set_levelWillStartIntroEvent))::System::Action* levelWillStartIntroEvent;

  /// @brief Field levelDidStartEvent, offset 0x50, size 0x8
  __declspec(property(get = __get_levelDidStartEvent, put = __set_levelDidStartEvent))::System::Action* levelDidStartEvent;

  /// @brief Field levelFailedEvent, offset 0x58, size 0x8
  __declspec(property(get = __get_levelFailedEvent, put = __set_levelFailedEvent))::System::Action* levelFailedEvent;

  /// @brief Field levelFinishedEvent, offset 0x60, size 0x8
  __declspec(property(get = __get_levelFinishedEvent, put = __set_levelFinishedEvent))::System::Action* levelFinishedEvent;

  /// @brief Field _gameState, offset 0x68, size 0x4
  __declspec(property(get = __get__gameState, put = __set__gameState))::GlobalNamespace::__MissionLevelGameplayManager__GameState _gameState;

  /// @brief Field _prePauseGameState, offset 0x6c, size 0x4
  __declspec(property(get = __get__prePauseGameState, put = __set__prePauseGameState))::GlobalNamespace::__MissionLevelGameplayManager__GameState _prePauseGameState;

  /// @brief Convert operator to "::GlobalNamespace::ILevelEndActions"
  constexpr operator ::GlobalNamespace::ILevelEndActions*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::ILevelStartController"
  constexpr operator ::GlobalNamespace::ILevelStartController*() noexcept;

  constexpr ::GlobalNamespace::MissionObjectiveCheckersManager*& __get__missionObjectiveCheckersManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionObjectiveCheckersManager*> const& __get__missionObjectiveCheckersManager() const;

  constexpr void __set__missionObjectiveCheckersManager(::GlobalNamespace::MissionObjectiveCheckersManager* value);

  constexpr ::GlobalNamespace::GameScenesManager*& __get__gameScenesManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> const& __get__gameScenesManager() const;

  constexpr void __set__gameScenesManager(::GlobalNamespace::GameScenesManager* value);

  constexpr ::GlobalNamespace::GameSongController*& __get__gameSongController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameSongController*> const& __get__gameSongController() const;

  constexpr void __set__gameSongController(::GlobalNamespace::GameSongController* value);

  constexpr ::GlobalNamespace::GameEnergyCounter*& __get__gameEnergyCounter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameEnergyCounter*> const& __get__gameEnergyCounter() const;

  constexpr void __set__gameEnergyCounter(::GlobalNamespace::GameEnergyCounter* value);

  constexpr ::GlobalNamespace::PauseController*& __get__pauseController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PauseController*> const& __get__pauseController() const;

  constexpr void __set__pauseController(::GlobalNamespace::PauseController* value);

  constexpr ::GlobalNamespace::__MissionLevelGameplayManager__InitData*& __get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MissionLevelGameplayManager__InitData*> const& __get__initData() const;

  constexpr void __set__initData(::GlobalNamespace::__MissionLevelGameplayManager__InitData* value);

  constexpr ::System::Action*& __get_levelWillStartIntroEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_levelWillStartIntroEvent() const;

  constexpr void __set_levelWillStartIntroEvent(::System::Action* value);

  constexpr ::System::Action*& __get_levelDidStartEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_levelDidStartEvent() const;

  constexpr void __set_levelDidStartEvent(::System::Action* value);

  constexpr ::System::Action*& __get_levelFailedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_levelFailedEvent() const;

  constexpr void __set_levelFailedEvent(::System::Action* value);

  constexpr ::System::Action*& __get_levelFinishedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_levelFinishedEvent() const;

  constexpr void __set_levelFinishedEvent(::System::Action* value);

  constexpr ::GlobalNamespace::__MissionLevelGameplayManager__GameState& __get__gameState();

  constexpr ::GlobalNamespace::__MissionLevelGameplayManager__GameState const& __get__gameState() const;

  constexpr void __set__gameState(::GlobalNamespace::__MissionLevelGameplayManager__GameState value);

  constexpr ::GlobalNamespace::__MissionLevelGameplayManager__GameState& __get__prePauseGameState();

  constexpr ::GlobalNamespace::__MissionLevelGameplayManager__GameState const& __get__prePauseGameState() const;

  constexpr void __set__prePauseGameState(::GlobalNamespace::__MissionLevelGameplayManager__GameState value);

  /// @brief Method add_levelWillStartIntroEvent addr 0x23bba44 size 0x9c virtual true final true
  inline void add_levelWillStartIntroEvent(::System::Action* value);

  /// @brief Method remove_levelWillStartIntroEvent addr 0x23bbae0 size 0x9c virtual true final true
  inline void remove_levelWillStartIntroEvent(::System::Action* value);

  /// @brief Method add_levelDidStartEvent addr 0x23bbb7c size 0x9c virtual true final true
  inline void add_levelDidStartEvent(::System::Action* value);

  /// @brief Method remove_levelDidStartEvent addr 0x23bbc18 size 0x9c virtual true final true
  inline void remove_levelDidStartEvent(::System::Action* value);

  /// @brief Method add_levelFailedEvent addr 0x23bbcb4 size 0x9c virtual true final true
  inline void add_levelFailedEvent(::System::Action* value);

  /// @brief Method remove_levelFailedEvent addr 0x23bbd50 size 0x9c virtual true final true
  inline void remove_levelFailedEvent(::System::Action* value);

  /// @brief Method add_levelFinishedEvent addr 0x23bbdec size 0x9c virtual true final true
  inline void add_levelFinishedEvent(::System::Action* value);

  /// @brief Method remove_levelFinishedEvent addr 0x23bbe88 size 0x9c virtual true final true
  inline void remove_levelFinishedEvent(::System::Action* value);

  /// @brief Method Awake addr 0x23bbf24 size 0x8 virtual false final false
  inline void Awake();

  /// @brief Method Start addr 0x23bbf2c size 0x68 virtual false final false
  inline ::System::Collections::IEnumerator* Start();

  /// @brief Method OnDestroy addr 0x23bbfbc size 0x2dc virtual false final false
  inline void OnDestroy();

  /// @brief Method HandleGameEnergyDidReach0 addr 0x23bc480 size 0x54 virtual false final false
  inline void HandleGameEnergyDidReach0();

  /// @brief Method HandleMissionObjectiveCheckersManagerObjectiveDidFail addr 0x23bc4d4 size 0x34 virtual false final false
  inline void HandleMissionObjectiveCheckersManagerObjectiveDidFail();

  /// @brief Method HandleSongDidFinish addr 0x23bc508 size 0x34 virtual false final false
  inline void HandleSongDidFinish();

  /// @brief Method HandlePauseControllerCanPause addr 0x23bc53c size 0x24 virtual false final false
  inline void HandlePauseControllerCanPause(::System::Action_1<bool>* canPause);

  /// @brief Method HandlePauseControllerDidPause addr 0x23bc560 size 0x18 virtual false final false
  inline void HandlePauseControllerDidPause();

  /// @brief Method HandlePauseControllerDidResume addr 0x23bc578 size 0x18 virtual false final false
  inline void HandlePauseControllerDidResume();

  static inline ::GlobalNamespace::MissionLevelGameplayManager* New_ctor();

  /// @brief Method .ctor addr 0x23bc590 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MissionLevelGameplayManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionLevelGameplayManager(MissionLevelGameplayManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionLevelGameplayManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionLevelGameplayManager(MissionLevelGameplayManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionLevelGameplayManager();

public:
  /// @brief Field _missionObjectiveCheckersManager, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MissionObjectiveCheckersManager* ____missionObjectiveCheckersManager;

  /// @brief Field _gameScenesManager, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::GameScenesManager* ____gameScenesManager;

  /// @brief Field _gameSongController, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::GameSongController* ____gameSongController;

  /// @brief Field _gameEnergyCounter, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::GameEnergyCounter* ____gameEnergyCounter;

  /// @brief Field _pauseController, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::PauseController* ____pauseController;

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

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MissionLevelGameplayManager__GameState, "", "MissionLevelGameplayManager/GameState");
NEED_NO_BOX(::GlobalNamespace::MissionLevelGameplayManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionLevelGameplayManager*, "", "MissionLevelGameplayManager");
NEED_NO_BOX(::GlobalNamespace::__MissionLevelGameplayManager__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MissionLevelGameplayManager__InitData*, "", "MissionLevelGameplayManager/InitData");
NEED_NO_BOX(::GlobalNamespace::__MissionLevelGameplayManager___Start_d__23);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MissionLevelGameplayManager___Start_d__23*, "", "MissionLevelGameplayManager/<Start>d__23");
