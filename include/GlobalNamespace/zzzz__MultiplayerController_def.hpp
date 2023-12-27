#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerStartState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerController)
namespace Zenject {
class DiContainer;
}
namespace GlobalNamespace {
class MultiplayerLevelScenesTransitionSetupDataSO;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class SongStartSyncController;
}
namespace GlobalNamespace {
class MultiplayerLevelCompletionResults;
}
namespace GlobalNamespace {
class __MultiplayerController____c__DisplayClass45_0;
}
namespace GlobalNamespace {
struct MultiplayerGameState;
}
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace GlobalNamespace {
class MultiplayerResultsData;
}
namespace UnityEngine {
class Coroutine;
}
namespace GlobalNamespace {
class MultiplayerIntroAnimationController;
}
namespace GlobalNamespace {
class IMenuRpcManager;
}
namespace GlobalNamespace {
class __MultiplayerController____c;
}
namespace GlobalNamespace {
class FadeInOutController;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
class MultiplayerLevelFinishedController;
}
namespace GlobalNamespace {
class __MultiplayerController___PerformSongStartSync_d__39;
}
namespace GlobalNamespace {
class MultiplayerOutroAnimationController;
}
namespace GlobalNamespace {
class IGameplayRpcManager;
}
namespace GlobalNamespace {
class MultiplayerPlayersManager;
}
namespace GlobalNamespace {
struct __MultiplayerController__State;
}
namespace GlobalNamespace {
class MultiplayerBadgesProvider;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace GlobalNamespace {
class PlayersSpecificSettingsAtGameStartModel;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
struct MultiplayerPlayerStartState;
}
namespace GlobalNamespace {
class SceneStartSyncController;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
struct __MultiplayerController__State;
}
namespace GlobalNamespace {
class MultiplayerController;
}
namespace GlobalNamespace {
class __MultiplayerController___PerformSongStartSync_d__39;
}
namespace GlobalNamespace {
class __MultiplayerController____c;
}
namespace GlobalNamespace {
class __MultiplayerController____c__DisplayClass45_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__MultiplayerController__State);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerController);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerController____c);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerController____c__DisplayClass45_0);
// Type: ::State
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5198))
// CS Name: ::MultiplayerController::State
struct CORDL_TYPE __MultiplayerController__State {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____MultiplayerController__State_Unwrapped
  enum struct ____MultiplayerController__State_Unwrapped : int32_t {
    __E_CheckingLobbyState = static_cast<int32_t>(0x0),
    __E_WaitingForPlayers = static_cast<int32_t>(0x1),
    __E_SongStartSync = static_cast<int32_t>(0x2),
    __E_Intro = static_cast<int32_t>(0x3),
    __E_Gameplay = static_cast<int32_t>(0x4),
    __E_Outro = static_cast<int32_t>(0x5),
    __E_Finished = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____MultiplayerController__State_Unwrapped() const noexcept {
    return static_cast<____MultiplayerController__State_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MultiplayerController__State(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerController__State();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field CheckingLobbyState value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__MultiplayerController__State const CheckingLobbyState;

  /// @brief Field WaitingForPlayers value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__MultiplayerController__State const WaitingForPlayers;

  /// @brief Field SongStartSync value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__MultiplayerController__State const SongStartSync;

  /// @brief Field Intro value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__MultiplayerController__State const Intro;

  /// @brief Field Gameplay value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__MultiplayerController__State const Gameplay;

  /// @brief Field Outro value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__MultiplayerController__State const Outro;

  /// @brief Field Finished value: static_cast<int32_t>(0x6)
  static ::GlobalNamespace::__MultiplayerController__State const Finished;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerController__State, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<PerformSongStartSync>d__39
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(5239))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5199))
// CS Name: ::MultiplayerController::<PerformSongStartSync>d__39*
class CORDL_TYPE __MultiplayerController___PerformSongStartSync_d__39 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::MultiplayerController* __4__this;

  /// @brief Field localPlayerSyncState, offset 0x28, size 0x4
  __declspec(property(get = __get_localPlayerSyncState, put = __set_localPlayerSyncState))::GlobalNamespace::MultiplayerPlayerStartState localPlayerSyncState;

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

  constexpr ::GlobalNamespace::MultiplayerController*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerController*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::MultiplayerController* value);

  constexpr ::GlobalNamespace::MultiplayerPlayerStartState& __get_localPlayerSyncState();

  constexpr ::GlobalNamespace::MultiplayerPlayerStartState const& __get_localPlayerSyncState() const;

  constexpr void __set_localPlayerSyncState(::GlobalNamespace::MultiplayerPlayerStartState value);

  static inline ::GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x2247ec4 size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x224a038 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x224a03c size 0x834 virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x224b6cc size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x224b6d4 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x224b714 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerController___PerformSongStartSync_d__39", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerController___PerformSongStartSync_d__39(__MultiplayerController___PerformSongStartSync_d__39&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerController___PerformSongStartSync_d__39", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerController___PerformSongStartSync_d__39(__MultiplayerController___PerformSongStartSync_d__39 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerController___PerformSongStartSync_d__39();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerController* _____4__this;

  /// @brief Field localPlayerSyncState, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::MultiplayerPlayerStartState ___localPlayerSyncState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass45_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5200))
// CS Name: ::MultiplayerController::<>c__DisplayClass45_0*
class CORDL_TYPE __MultiplayerController____c__DisplayClass45_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::MultiplayerController* __4__this;

  /// @brief Field introAnimationStartSyncTime, offset 0x18, size 0x8
  __declspec(property(get = __get_introAnimationStartSyncTime, put = __set_introAnimationStartSyncTime)) int64_t introAnimationStartSyncTime;

  constexpr ::GlobalNamespace::MultiplayerController*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerController*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::MultiplayerController* value);

  constexpr int64_t& __get_introAnimationStartSyncTime();

  constexpr int64_t const& __get_introAnimationStartSyncTime() const;

  constexpr void __set_introAnimationStartSyncTime(int64_t value);

  static inline ::GlobalNamespace::__MultiplayerController____c__DisplayClass45_0* New_ctor();

  /// @brief Method .ctor addr 0x22487e0 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <HandleSongStartSyncControllerSyncStartSuccess>b__0 addr 0x224b71c size 0x20 virtual false final false
  inline void _HandleSongStartSyncControllerSyncStartSuccess_b__0();

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerController____c__DisplayClass45_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerController____c__DisplayClass45_0(__MultiplayerController____c__DisplayClass45_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerController____c__DisplayClass45_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerController____c__DisplayClass45_0(__MultiplayerController____c__DisplayClass45_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerController____c__DisplayClass45_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerController* _____4__this;

  /// @brief Field introAnimationStartSyncTime, offset: 0x18, size: 0x8, def value: None
  int64_t ___introAnimationStartSyncTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerController____c__DisplayClass45_0, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5201))
// CS Name: ::MultiplayerController::<>c*
class CORDL_TYPE __MultiplayerController____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__MultiplayerController____c* __9;

  /// @brief Field <>9__50_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__50_0, put = setStaticF___9__50_0))::System::Func_2<::GlobalNamespace::MultiplayerLevelCompletionResults*, bool>* __9__50_0;

  static inline void setStaticF___9(::GlobalNamespace::__MultiplayerController____c* value);

  static inline ::GlobalNamespace::__MultiplayerController____c* getStaticF___9();

  static inline void setStaticF___9__50_0(::System::Func_2<::GlobalNamespace::MultiplayerLevelCompletionResults*, bool>* value);

  static inline ::System::Func_2<::GlobalNamespace::MultiplayerLevelCompletionResults*, bool>* getStaticF___9__50_0();

  static inline ::GlobalNamespace::__MultiplayerController____c* New_ctor();

  /// @brief Method .ctor addr 0x224b7a0 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <EndGameplay>b__50_0 addr 0x224b7a8 size 0x20 virtual false final false
  inline bool _EndGameplay_b__50_0(::GlobalNamespace::MultiplayerLevelCompletionResults* result);

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerController____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerController____c(__MultiplayerController____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerController____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerController____c(__MultiplayerController____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerController____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerController____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::MultiplayerController
// SizeInfo { instance_size: 208, native_size: -1, calculated_instance_size: 208, calculated_native_size: 208, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5198)), TypeDefinitionIndex(TypeDefinitionIndex(5239)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5202))
// CS Name: ::MultiplayerController*
class CORDL_TYPE MultiplayerController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c = ::GlobalNamespace::__MultiplayerController____c;

  using __c__DisplayClass45_0 = ::GlobalNamespace::__MultiplayerController____c__DisplayClass45_0;

  using _PerformSongStartSync_d__39 = ::GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39;

  using State = ::GlobalNamespace::__MultiplayerController__State;

  /// @brief Field _loadingEnvironment, offset 0x18, size 0x8
  __declspec(property(get = __get__loadingEnvironment, put = __set__loadingEnvironment))::UnityEngine::GameObject* _loadingEnvironment;

  /// @brief Field _multiplayerLevelSceneSetupData, offset 0x20, size 0x8
  __declspec(property(get = __get__multiplayerLevelSceneSetupData,
                      put = __set__multiplayerLevelSceneSetupData))::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* _multiplayerLevelSceneSetupData;

  /// @brief Field _gameScenesManager, offset 0x28, size 0x8
  __declspec(property(get = __get__gameScenesManager, put = __set__gameScenesManager))::GlobalNamespace::GameScenesManager* _gameScenesManager;

  /// @brief Field _playersManager, offset 0x30, size 0x8
  __declspec(property(get = __get__playersManager, put = __set__playersManager))::GlobalNamespace::MultiplayerPlayersManager* _playersManager;

  /// @brief Field _sceneStartSyncController, offset 0x38, size 0x8
  __declspec(property(get = __get__sceneStartSyncController, put = __set__sceneStartSyncController))::GlobalNamespace::SceneStartSyncController* _sceneStartSyncController;

  /// @brief Field _songStartSyncController, offset 0x40, size 0x8
  __declspec(property(get = __get__songStartSyncController, put = __set__songStartSyncController))::GlobalNamespace::SongStartSyncController* _songStartSyncController;

  /// @brief Field _multiplayerLevelFinishedController, offset 0x48, size 0x8
  __declspec(property(get = __get__multiplayerLevelFinishedController,
                      put = __set__multiplayerLevelFinishedController))::GlobalNamespace::MultiplayerLevelFinishedController* _multiplayerLevelFinishedController;

  /// @brief Field _fadeInOutController, offset 0x50, size 0x8
  __declspec(property(get = __get__fadeInOutController, put = __set__fadeInOutController))::GlobalNamespace::FadeInOutController* _fadeInOutController;

  /// @brief Field _multiplayerSessionManager, offset 0x58, size 0x8
  __declspec(property(get = __get__multiplayerSessionManager, put = __set__multiplayerSessionManager))::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field _introAnimationController, offset 0x60, size 0x8
  __declspec(property(get = __get__introAnimationController, put = __set__introAnimationController))::GlobalNamespace::MultiplayerIntroAnimationController* _introAnimationController;

  /// @brief Field _outroAnimationController, offset 0x68, size 0x8
  __declspec(property(get = __get__outroAnimationController, put = __set__outroAnimationController))::GlobalNamespace::MultiplayerOutroAnimationController* _outroAnimationController;

  /// @brief Field _menuRpcManager, offset 0x70, size 0x8
  __declspec(property(get = __get__menuRpcManager, put = __set__menuRpcManager))::GlobalNamespace::IMenuRpcManager* _menuRpcManager;

  /// @brief Field _gameplayRpcManager, offset 0x78, size 0x8
  __declspec(property(get = __get__gameplayRpcManager, put = __set__gameplayRpcManager))::GlobalNamespace::IGameplayRpcManager* _gameplayRpcManager;

  /// @brief Field _sceneSetupData, offset 0x80, size 0x8
  __declspec(property(get = __get__sceneSetupData, put = __set__sceneSetupData))::GlobalNamespace::GameplayCoreSceneSetupData* _sceneSetupData;

  /// @brief Field _diContainer, offset 0x88, size 0x8
  __declspec(property(get = __get__diContainer, put = __set__diContainer))::Zenject::DiContainer* _diContainer;

  /// @brief Field _badgesProvider, offset 0x90, size 0x8
  __declspec(property(get = __get__badgesProvider, put = __set__badgesProvider))::GlobalNamespace::MultiplayerBadgesProvider* _badgesProvider;

  /// @brief Field stateChangedEvent, offset 0x98, size 0x8
  __declspec(property(get = __get_stateChangedEvent, put = __set_stateChangedEvent))::System::Action_1<::GlobalNamespace::__MultiplayerController__State>* stateChangedEvent;

  /// @brief Field _startTime, offset 0xa0, size 0x4
  __declspec(property(get = __get__startTime, put = __set__startTime)) float_t _startTime;

  /// @brief Field _localPlayerSyncStartState, offset 0xa4, size 0x4
  __declspec(property(get = __get__localPlayerSyncStartState, put = __set__localPlayerSyncStartState))::GlobalNamespace::MultiplayerPlayerStartState _localPlayerSyncStartState;

  /// @brief Field _state, offset 0xa8, size 0x4
  __declspec(property(get = __get__state, put = __set__state))::GlobalNamespace::__MultiplayerController__State _state;

  /// @brief Field _sessionGameId, offset 0xb0, size 0x8
  __declspec(property(get = __get__sessionGameId, put = __set__sessionGameId))::StringW _sessionGameId;

  /// @brief Field _resultsData, offset 0xb8, size 0x8
  __declspec(property(get = __get__resultsData, put = __set__resultsData))::GlobalNamespace::MultiplayerResultsData* _resultsData;

  /// @brief Field _playersSpecificSettingsAtGameStartModel, offset 0xc0, size 0x8
  __declspec(property(get = __get__playersSpecificSettingsAtGameStartModel,
                      put = __set__playersSpecificSettingsAtGameStartModel))::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* _playersSpecificSettingsAtGameStartModel;

  /// @brief Field _timeoutGetGameStateCoroutine, offset 0xc8, size 0x8
  __declspec(property(get = __get__timeoutGetGameStateCoroutine, put = __set__timeoutGetGameStateCoroutine))::UnityEngine::Coroutine* _timeoutGetGameStateCoroutine;

  __declspec(property(get = get_state))::GlobalNamespace::__MultiplayerController__State state;

  constexpr ::UnityEngine::GameObject*& __get__loadingEnvironment();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__loadingEnvironment() const;

  constexpr void __set__loadingEnvironment(::UnityEngine::GameObject* value);

  constexpr ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*& __get__multiplayerLevelSceneSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*> const& __get__multiplayerLevelSceneSetupData() const;

  constexpr void __set__multiplayerLevelSceneSetupData(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* value);

  constexpr ::GlobalNamespace::GameScenesManager*& __get__gameScenesManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> const& __get__gameScenesManager() const;

  constexpr void __set__gameScenesManager(::GlobalNamespace::GameScenesManager* value);

  constexpr ::GlobalNamespace::MultiplayerPlayersManager*& __get__playersManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerPlayersManager*> const& __get__playersManager() const;

  constexpr void __set__playersManager(::GlobalNamespace::MultiplayerPlayersManager* value);

  constexpr ::GlobalNamespace::SceneStartSyncController*& __get__sceneStartSyncController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SceneStartSyncController*> const& __get__sceneStartSyncController() const;

  constexpr void __set__sceneStartSyncController(::GlobalNamespace::SceneStartSyncController* value);

  constexpr ::GlobalNamespace::SongStartSyncController*& __get__songStartSyncController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongStartSyncController*> const& __get__songStartSyncController() const;

  constexpr void __set__songStartSyncController(::GlobalNamespace::SongStartSyncController* value);

  constexpr ::GlobalNamespace::MultiplayerLevelFinishedController*& __get__multiplayerLevelFinishedController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLevelFinishedController*> const& __get__multiplayerLevelFinishedController() const;

  constexpr void __set__multiplayerLevelFinishedController(::GlobalNamespace::MultiplayerLevelFinishedController* value);

  constexpr ::GlobalNamespace::FadeInOutController*& __get__fadeInOutController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FadeInOutController*> const& __get__fadeInOutController() const;

  constexpr void __set__fadeInOutController(::GlobalNamespace::FadeInOutController* value);

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __get__multiplayerSessionManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const& __get__multiplayerSessionManager() const;

  constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr ::GlobalNamespace::MultiplayerIntroAnimationController*& __get__introAnimationController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerIntroAnimationController*> const& __get__introAnimationController() const;

  constexpr void __set__introAnimationController(::GlobalNamespace::MultiplayerIntroAnimationController* value);

  constexpr ::GlobalNamespace::MultiplayerOutroAnimationController*& __get__outroAnimationController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerOutroAnimationController*> const& __get__outroAnimationController() const;

  constexpr void __set__outroAnimationController(::GlobalNamespace::MultiplayerOutroAnimationController* value);

  constexpr ::GlobalNamespace::IMenuRpcManager*& __get__menuRpcManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMenuRpcManager*> const& __get__menuRpcManager() const;

  constexpr void __set__menuRpcManager(::GlobalNamespace::IMenuRpcManager* value);

  constexpr ::GlobalNamespace::IGameplayRpcManager*& __get__gameplayRpcManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IGameplayRpcManager*> const& __get__gameplayRpcManager() const;

  constexpr void __set__gameplayRpcManager(::GlobalNamespace::IGameplayRpcManager* value);

  constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& __get__sceneSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayCoreSceneSetupData*> const& __get__sceneSetupData() const;

  constexpr void __set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value);

  constexpr ::Zenject::DiContainer*& __get__diContainer();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get__diContainer() const;

  constexpr void __set__diContainer(::Zenject::DiContainer* value);

  constexpr ::GlobalNamespace::MultiplayerBadgesProvider*& __get__badgesProvider();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerBadgesProvider*> const& __get__badgesProvider() const;

  constexpr void __set__badgesProvider(::GlobalNamespace::MultiplayerBadgesProvider* value);

  constexpr ::System::Action_1<::GlobalNamespace::__MultiplayerController__State>*& __get_stateChangedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::__MultiplayerController__State>*> const& __get_stateChangedEvent() const;

  constexpr void __set_stateChangedEvent(::System::Action_1<::GlobalNamespace::__MultiplayerController__State>* value);

  constexpr float_t& __get__startTime();

  constexpr float_t const& __get__startTime() const;

  constexpr void __set__startTime(float_t value);

  constexpr ::GlobalNamespace::MultiplayerPlayerStartState& __get__localPlayerSyncStartState();

  constexpr ::GlobalNamespace::MultiplayerPlayerStartState const& __get__localPlayerSyncStartState() const;

  constexpr void __set__localPlayerSyncStartState(::GlobalNamespace::MultiplayerPlayerStartState value);

  constexpr ::GlobalNamespace::__MultiplayerController__State& __get__state();

  constexpr ::GlobalNamespace::__MultiplayerController__State const& __get__state() const;

  constexpr void __set__state(::GlobalNamespace::__MultiplayerController__State value);

  constexpr ::StringW& __get__sessionGameId();

  constexpr ::StringW const& __get__sessionGameId() const;

  constexpr void __set__sessionGameId(::StringW value);

  constexpr ::GlobalNamespace::MultiplayerResultsData*& __get__resultsData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerResultsData*> const& __get__resultsData() const;

  constexpr void __set__resultsData(::GlobalNamespace::MultiplayerResultsData* value);

  constexpr ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*& __get__playersSpecificSettingsAtGameStartModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*> const& __get__playersSpecificSettingsAtGameStartModel() const;

  constexpr void __set__playersSpecificSettingsAtGameStartModel(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* value);

  constexpr ::UnityEngine::Coroutine*& __get__timeoutGetGameStateCoroutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __get__timeoutGetGameStateCoroutine() const;

  constexpr void __set__timeoutGetGameStateCoroutine(::UnityEngine::Coroutine* value);

  /// @brief Method get_state addr 0x224647c size 0x8 virtual false final false
  inline ::GlobalNamespace::__MultiplayerController__State get_state();

  /// @brief Method add_stateChangedEvent addr 0x2246484 size 0xb0 virtual false final false
  inline void add_stateChangedEvent(::System::Action_1<::GlobalNamespace::__MultiplayerController__State>* value);

  /// @brief Method remove_stateChangedEvent addr 0x2246534 size 0xb0 virtual false final false
  inline void remove_stateChangedEvent(::System::Action_1<::GlobalNamespace::__MultiplayerController__State>* value);

  /// @brief Method Start addr 0x22465e4 size 0x458 virtual false final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x2246eb4 size 0x5e8 virtual false final false
  inline void OnDestroy();

  /// @brief Method HandleIsDisconnectedDuringLoading addr 0x2247538 size 0x8 virtual false final false
  inline void HandleIsDisconnectedDuringLoading();

  /// @brief Method HandleSetMultiplayerGameState addr 0x2247594 size 0x1f4 virtual false final false
  inline void HandleSetMultiplayerGameState(::StringW userId, ::GlobalNamespace::MultiplayerGameState gameState);

  /// @brief Method CreateAndBindPlayersSpecificSettingsAtGameStartModel addr 0x2246a3c size 0x458 virtual false final false
  inline void CreateAndBindPlayersSpecificSettingsAtGameStartModel();

  /// @brief Method StartSceneLoadSync addr 0x2247788 size 0x178 virtual false final false
  inline void StartSceneLoadSync();

  /// @brief Method PerformSongStartSync addr 0x2247e4c size 0x78 virtual false final false
  inline ::System::Collections::IEnumerator* PerformSongStartSync(::GlobalNamespace::MultiplayerPlayerStartState localPlayerSyncState);

  /// @brief Method HandleDidSwitchPlayerToInactive addr 0x2247eec size 0x170 virtual false final false
  inline void HandleDidSwitchPlayerToInactive();

  /// @brief Method HandleSceneStartSyncControllerSyncStartDidSuccess addr 0x2248144 size 0x28 virtual false final false
  inline void HandleSceneStartSyncControllerSyncStartDidSuccess(::StringW sessionGameId);

  /// @brief Method HandleSceneStartSyncControllerSyncStartDidReceiveTooLate addr 0x224816c size 0x28 virtual false final false
  inline void HandleSceneStartSyncControllerSyncStartDidReceiveTooLate(::StringW sessionGameId);

  /// @brief Method HandleInitialGetGameStateFailed addr 0x2248194 size 0xc0 virtual false final false
  inline void HandleInitialGetGameStateFailed();

  /// @brief Method HandleSceneStartSyncControllerSyncStartDidFail addr 0x2248270 size 0x9c virtual false final false
  inline void HandleSceneStartSyncControllerSyncStartDidFail();

  /// @brief Method HandleSongStartSyncControllerSyncStartSuccess addr 0x224857c size 0x264 virtual false final false
  inline void HandleSongStartSyncControllerSyncStartSuccess(int64_t introAnimationStartSyncTime);

  /// @brief Method HandleSongStartSyncControllerSyncResume addr 0x224966c size 0x4e0 virtual false final false
  inline void HandleSongStartSyncControllerSyncResume(int64_t introAnimationStartSyncTime);

  /// @brief Method HandleSongStartSyncControllerSyncStartFailed addr 0x2249bb4 size 0x9c virtual false final false
  inline void HandleSongStartSyncControllerSyncStartFailed();

  /// @brief Method StartGameplay addr 0x2248dec size 0x880 virtual false final false
  inline void StartGameplay(int64_t introAnimationStartSyncTime);

  /// @brief Method HandleAllResultsCollected addr 0x2249c50 size 0x4 virtual false final false
  inline void HandleAllResultsCollected(::GlobalNamespace::MultiplayerLevelCompletionResults* localPlayerResults,
                                        ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>* otherPlayerResults);

  /// @brief Method EndGameplay addr 0x224830c size 0x270 virtual false final false
  inline void EndGameplay(::GlobalNamespace::MultiplayerLevelCompletionResults* localPlayerResults,
                          ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>* otherPlayerResults);

  /// @brief Method HandleOutroAnimationDidFinish addr 0x2249e14 size 0x48 virtual false final false
  inline void HandleOutroAnimationDidFinish();

  /// @brief Method HandleRpcReturnToMenu addr 0x2249e5c size 0x184 virtual false final false
  inline void HandleRpcReturnToMenu(::StringW userId);

  /// @brief Method HandleDisconnected addr 0x2247540 size 0x54 virtual false final false
  inline void HandleDisconnected(::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method ChangeState addr 0x2246e94 size 0x20 virtual false final false
  inline void ChangeState(::GlobalNamespace::__MultiplayerController__State newState);

  /// @brief Method GetCurrentSongTime addr 0x2248084 size 0xc0 virtual false final false
  inline float_t GetCurrentSongTime(int64_t songStartSyncTime);

  /// @brief Method GetSongStartSyncTime addr 0x224805c size 0x28 virtual false final false
  inline int64_t GetSongStartSyncTime(int64_t introAnimationStartSyncTime);

  static inline ::GlobalNamespace::MultiplayerController* New_ctor();

  /// @brief Method .ctor addr 0x2249fe0 size 0x58 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerController(MultiplayerController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerController(MultiplayerController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerController();

public:
  /// @brief Field _loadingEnvironment, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____loadingEnvironment;

  /// @brief Field _multiplayerLevelSceneSetupData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* ____multiplayerLevelSceneSetupData;

  /// @brief Field _gameScenesManager, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::GameScenesManager* ____gameScenesManager;

  /// @brief Field _playersManager, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerPlayersManager* ____playersManager;

  /// @brief Field _sceneStartSyncController, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::SceneStartSyncController* ____sceneStartSyncController;

  /// @brief Field _songStartSyncController, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::SongStartSyncController* ____songStartSyncController;

  /// @brief Field _multiplayerLevelFinishedController, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLevelFinishedController* ____multiplayerLevelFinishedController;

  /// @brief Field _fadeInOutController, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::FadeInOutController* ____fadeInOutController;

  /// @brief Field _multiplayerSessionManager, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field _introAnimationController, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerIntroAnimationController* ____introAnimationController;

  /// @brief Field _outroAnimationController, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerOutroAnimationController* ____outroAnimationController;

  /// @brief Field _menuRpcManager, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::IMenuRpcManager* ____menuRpcManager;

  /// @brief Field _gameplayRpcManager, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::IGameplayRpcManager* ____gameplayRpcManager;

  /// @brief Field _sceneSetupData, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::GameplayCoreSceneSetupData* ____sceneSetupData;

  /// @brief Field _diContainer, offset: 0x88, size: 0x8, def value: None
  ::Zenject::DiContainer* ____diContainer;

  /// @brief Field _badgesProvider, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerBadgesProvider* ____badgesProvider;

  /// @brief Field stateChangedEvent, offset: 0x98, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::__MultiplayerController__State>* ___stateChangedEvent;

  /// @brief Field _startTime, offset: 0xa0, size: 0x4, def value: None
  float_t ____startTime;

  /// @brief Field _localPlayerSyncStartState, offset: 0xa4, size: 0x4, def value: None
  ::GlobalNamespace::MultiplayerPlayerStartState ____localPlayerSyncStartState;

  /// @brief Field _state, offset: 0xa8, size: 0x4, def value: None
  ::GlobalNamespace::__MultiplayerController__State ____state;

  /// @brief Field _sessionGameId, offset: 0xb0, size: 0x8, def value: None
  ::StringW ____sessionGameId;

  /// @brief Field _resultsData, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerResultsData* ____resultsData;

  /// @brief Field _playersSpecificSettingsAtGameStartModel, offset: 0xc0, size: 0x8, def value: None
  ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* ____playersSpecificSettingsAtGameStartModel;

  /// @brief Field _timeoutGetGameStateCoroutine, offset: 0xc8, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ____timeoutGetGameStateCoroutine;

  /// @brief Field kSongTimeToSongStartSyncTimeOffsetMs offset 0xffffffff size 0x8
  static constexpr int64_t kSongTimeToSongStartSyncTimeOffsetMs{ static_cast<int64_t>(0xfffffffffffffda8) };

  /// @brief Field kMinAnimationDurationPercentage offset 0xffffffff size 0x4
  static constexpr float_t kMinAnimationDurationPercentage{ 0.75 };

  /// @brief Field kGetMultiplayerGameStateTimeoutSeconds offset 0xffffffff size 0x4
  static constexpr float_t kGetMultiplayerGameStateTimeoutSeconds{ 20.0 };

  /// @brief Field kDisconnectWaitForInitTimeSeconds offset 0xffffffff size 0x4
  static constexpr float_t kDisconnectWaitForInitTimeSeconds{ 0.5 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerController, 0xd0>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerController__State, "", "MultiplayerController/State");
NEED_NO_BOX(::GlobalNamespace::MultiplayerController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerController*, "", "MultiplayerController");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerController___PerformSongStartSync_d__39*, "", "MultiplayerController/<PerformSongStartSync>d__39");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerController____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerController____c*, "", "MultiplayerController/<>c");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerController____c__DisplayClass45_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerController____c__DisplayClass45_0*, "", "MultiplayerController/<>c__DisplayClass45_0");
