#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerPlayerStartState_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerController)
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace GlobalNamespace {
class FadeInOutController;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace GlobalNamespace {
class IGameplayRpcManager;
}
namespace GlobalNamespace {
class IMenuRpcManager;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class IStartSeekSongController;
}
namespace GlobalNamespace {
class MultiplayerBadgesProvider;
}
namespace GlobalNamespace {
struct MultiplayerController_State;
}
namespace GlobalNamespace {
class MultiplayerController__PerformSongStartSync_d__39;
}
namespace GlobalNamespace {
class MultiplayerController___c;
}
namespace GlobalNamespace {
class MultiplayerController___c__DisplayClass45_0;
}
namespace GlobalNamespace {
struct MultiplayerGameState;
}
namespace GlobalNamespace {
class MultiplayerIntroAnimationController;
}
namespace GlobalNamespace {
class MultiplayerLevelCompletionResults;
}
namespace GlobalNamespace {
class MultiplayerLevelFinishedController;
}
namespace GlobalNamespace {
class MultiplayerLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class MultiplayerOutroAnimationController;
}
namespace GlobalNamespace {
struct MultiplayerPlayerStartState;
}
namespace GlobalNamespace {
class MultiplayerPlayersManager;
}
namespace GlobalNamespace {
class MultiplayerResultsData;
}
namespace GlobalNamespace {
class PlayersSpecificSettingsAtGameStartModel;
}
namespace GlobalNamespace {
class SceneStartSyncController;
}
namespace GlobalNamespace {
class SongStartSyncController;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class GameObject;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
struct MultiplayerController_State;
}
namespace GlobalNamespace {
class MultiplayerController;
}
namespace GlobalNamespace {
class MultiplayerController__PerformSongStartSync_d__39;
}
namespace GlobalNamespace {
class MultiplayerController___c;
}
namespace GlobalNamespace {
class MultiplayerController___c__DisplayClass45_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MultiplayerController_State);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerController);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerController___c);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerController___c__DisplayClass45_0);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: MultiplayerController/State
struct CORDL_TYPE MultiplayerController_State {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MultiplayerController_State_Unwrapped
  enum struct __MultiplayerController_State_Unwrapped : int32_t {
    __E_CheckingLobbyState = static_cast<int32_t>(0x0),
    __E_WaitingForPlayers = static_cast<int32_t>(0x1),
    __E_SongStartSync = static_cast<int32_t>(0x2),
    __E_Intro = static_cast<int32_t>(0x3),
    __E_Gameplay = static_cast<int32_t>(0x4),
    __E_Outro = static_cast<int32_t>(0x5),
    __E_Finished = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MultiplayerController_State_Unwrapped() const noexcept {
    return static_cast<__MultiplayerController_State_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerController_State();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MultiplayerController_State(int32_t value__) noexcept;

  /// @brief Field CheckingLobbyState value: I32(0)
  static ::GlobalNamespace::MultiplayerController_State const CheckingLobbyState;

  /// @brief Field Finished value: I32(6)
  static ::GlobalNamespace::MultiplayerController_State const Finished;

  /// @brief Field Gameplay value: I32(4)
  static ::GlobalNamespace::MultiplayerController_State const Gameplay;

  /// @brief Field Intro value: I32(3)
  static ::GlobalNamespace::MultiplayerController_State const Intro;

  /// @brief Field Outro value: I32(5)
  static ::GlobalNamespace::MultiplayerController_State const Outro;

  /// @brief Field SongStartSync value: I32(2)
  static ::GlobalNamespace::MultiplayerController_State const SongStartSync;

  /// @brief Field WaitingForPlayers value: I32(1)
  static ::GlobalNamespace::MultiplayerController_State const WaitingForPlayers;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4561 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerController_State, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerController_State, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerController/<>c
class CORDL_TYPE MultiplayerController___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::MultiplayerController___c* __9;

  /// @brief Field <>9__50_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__50_0, put = setStaticF___9__50_0)) ::System::Func_2<::GlobalNamespace::MultiplayerLevelCompletionResults*, bool>* __9__50_0;

  static inline ::GlobalNamespace::MultiplayerController___c* New_ctor();

  /// @brief Method <EndGameplay>b__50_0, addr 0x3bccb10, size 0x20, virtual false, abstract: false, final false
  inline bool _EndGameplay_b__50_0(::GlobalNamespace::MultiplayerLevelCompletionResults* result);

  /// @brief Method .ctor, addr 0x3bccb08, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::MultiplayerController___c* getStaticF___9();

  static inline ::System::Func_2<::GlobalNamespace::MultiplayerLevelCompletionResults*, bool>* getStaticF___9__50_0();

  static inline void setStaticF___9(::GlobalNamespace::MultiplayerController___c* value);

  static inline void setStaticF___9__50_0(::System::Func_2<::GlobalNamespace::MultiplayerLevelCompletionResults*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerController___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerController___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerController___c(MultiplayerController___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerController___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerController___c(MultiplayerController___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4562 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerController___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerController/<>c__DisplayClass45_0
class CORDL_TYPE MultiplayerController___c__DisplayClass45_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::MultiplayerController> __4__this;

  /// @brief Field introAnimationStartSyncTime, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_introAnimationStartSyncTime, put = __cordl_internal_set_introAnimationStartSyncTime)) int64_t introAnimationStartSyncTime;

  static inline ::GlobalNamespace::MultiplayerController___c__DisplayClass45_0* New_ctor();

  /// @brief Method <HandleSongStartSyncControllerSyncStartSuccess>b__0, addr 0x3bccb30, size 0x20, virtual false, abstract: false, final false
  inline void _HandleSongStartSyncControllerSyncStartSuccess_b__0();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerController>& __cordl_internal_get___4__this();

  constexpr int64_t const& __cordl_internal_get_introAnimationStartSyncTime() const;

  constexpr int64_t& __cordl_internal_get_introAnimationStartSyncTime();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MultiplayerController> value);

  constexpr void __cordl_internal_set_introAnimationStartSyncTime(int64_t value);

  /// @brief Method .ctor, addr 0x3bcb278, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerController___c__DisplayClass45_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerController___c__DisplayClass45_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerController___c__DisplayClass45_0(MultiplayerController___c__DisplayClass45_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerController___c__DisplayClass45_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerController___c__DisplayClass45_0(MultiplayerController___c__DisplayClass45_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4563 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerController> _____4__this;

  /// @brief Field introAnimationStartSyncTime, offset: 0x18, size: 0x8, def value: None
  int64_t ___introAnimationStartSyncTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerController___c__DisplayClass45_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerController___c__DisplayClass45_0, ___introAnimationStartSyncTime) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerController___c__DisplayClass45_0, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies MultiplayerPlayerStartState, System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerController/<PerformSongStartSync>d__39
class CORDL_TYPE MultiplayerController__PerformSongStartSync_d__39 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::MultiplayerController> __4__this;

  /// @brief Field <songController>5__2, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__songController_5__2, put = __cordl_internal_set__songController_5__2)) ::GlobalNamespace::IStartSeekSongController* _songController_5__2;

  /// @brief Field localPlayerSyncState, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_localPlayerSyncState, put = __cordl_internal_set_localPlayerSyncState)) ::GlobalNamespace::MultiplayerPlayerStartState localPlayerSyncState;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x3bccb54, size 0x998, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x3bce358, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3bce360, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3bce398, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3bccb50, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerController>& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::IStartSeekSongController* const& __cordl_internal_get__songController_5__2() const;

  constexpr ::GlobalNamespace::IStartSeekSongController*& __cordl_internal_get__songController_5__2();

  constexpr ::GlobalNamespace::MultiplayerPlayerStartState const& __cordl_internal_get_localPlayerSyncState() const;

  constexpr ::GlobalNamespace::MultiplayerPlayerStartState& __cordl_internal_get_localPlayerSyncState();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MultiplayerController> value);

  constexpr void __cordl_internal_set__songController_5__2(::GlobalNamespace::IStartSeekSongController* value);

  constexpr void __cordl_internal_set_localPlayerSyncState(::GlobalNamespace::MultiplayerPlayerStartState value);

  /// @brief Method .ctor, addr 0x3bca974, size 0x28, virtual false, abstract: false, final false
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
  constexpr MultiplayerController__PerformSongStartSync_d__39();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerController__PerformSongStartSync_d__39", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerController__PerformSongStartSync_d__39(MultiplayerController__PerformSongStartSync_d__39&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerController__PerformSongStartSync_d__39", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerController__PerformSongStartSync_d__39(MultiplayerController__PerformSongStartSync_d__39 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4564 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerController> _____4__this;

  /// @brief Field localPlayerSyncState, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::MultiplayerPlayerStartState ___localPlayerSyncState;

  /// @brief Field <songController>5__2, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IStartSeekSongController* ____songController_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39, ___localPlayerSyncState) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39, ____songController_5__2) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies MultiplayerController::State, MultiplayerPlayerStartState, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerController
class CORDL_TYPE MultiplayerController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using State = ::GlobalNamespace::MultiplayerController_State;

  using _PerformSongStartSync_d__39 = ::GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39;

  using __c = ::GlobalNamespace::MultiplayerController___c;

  using __c__DisplayClass45_0 = ::GlobalNamespace::MultiplayerController___c__DisplayClass45_0;

  /// @brief Field _badgesProvider, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__badgesProvider, put = __cordl_internal_set__badgesProvider)) ::GlobalNamespace::MultiplayerBadgesProvider* _badgesProvider;

  /// @brief Field _diContainer, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__diContainer, put = __cordl_internal_set__diContainer)) ::Zenject::DiContainer* _diContainer;

  /// @brief Field _fadeInOutController, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__fadeInOutController, put = __cordl_internal_set__fadeInOutController)) ::UnityW<::GlobalNamespace::FadeInOutController> _fadeInOutController;

  /// @brief Field _gameScenesManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__gameScenesManager, put = __cordl_internal_set__gameScenesManager)) ::UnityW<::GlobalNamespace::GameScenesManager> _gameScenesManager;

  /// @brief Field _gameplayRpcManager, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayRpcManager, put = __cordl_internal_set__gameplayRpcManager)) ::GlobalNamespace::IGameplayRpcManager* _gameplayRpcManager;

  /// @brief Field _introAnimationController, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__introAnimationController, put = __cordl_internal_set__introAnimationController)) ::UnityW<::GlobalNamespace::MultiplayerIntroAnimationController>
      _introAnimationController;

  /// @brief Field _loadingEnvironment, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__loadingEnvironment, put = __cordl_internal_set__loadingEnvironment)) ::UnityW<::UnityEngine::GameObject> _loadingEnvironment;

  /// @brief Field _localPlayerSyncStartState, offset 0xac, size 0x4
  __declspec(property(get = __cordl_internal_get__localPlayerSyncStartState,
                      put = __cordl_internal_set__localPlayerSyncStartState)) ::GlobalNamespace::MultiplayerPlayerStartState _localPlayerSyncStartState;

  /// @brief Field _menuRpcManager, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__menuRpcManager, put = __cordl_internal_set__menuRpcManager)) ::GlobalNamespace::IMenuRpcManager* _menuRpcManager;

  /// @brief Field _multiplayerLevelFinishedController, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerLevelFinishedController,
                      put = __cordl_internal_set__multiplayerLevelFinishedController)) ::UnityW<::GlobalNamespace::MultiplayerLevelFinishedController>
      _multiplayerLevelFinishedController;

  /// @brief Field _multiplayerLevelSceneSetupData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerLevelSceneSetupData,
                      put = __cordl_internal_set__multiplayerLevelSceneSetupData)) ::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>
      _multiplayerLevelSceneSetupData;

  /// @brief Field _multiplayerSessionManager, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionManager,
                      put = __cordl_internal_set__multiplayerSessionManager)) ::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field _outroAnimationController, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__outroAnimationController, put = __cordl_internal_set__outroAnimationController)) ::UnityW<::GlobalNamespace::MultiplayerOutroAnimationController>
      _outroAnimationController;

  /// @brief Field _playersManager, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__playersManager, put = __cordl_internal_set__playersManager)) ::UnityW<::GlobalNamespace::MultiplayerPlayersManager> _playersManager;

  /// @brief Field _playersSpecificSettingsAtGameStartModel, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__playersSpecificSettingsAtGameStartModel,
                      put = __cordl_internal_set__playersSpecificSettingsAtGameStartModel)) ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* _playersSpecificSettingsAtGameStartModel;

  /// @brief Field _resultsData, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__resultsData, put = __cordl_internal_set__resultsData)) ::GlobalNamespace::MultiplayerResultsData* _resultsData;

  /// @brief Field _sceneSetupData, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneSetupData, put = __cordl_internal_set__sceneSetupData)) ::GlobalNamespace::GameplayCoreSceneSetupData* _sceneSetupData;

  /// @brief Field _sceneStartSyncController, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneStartSyncController, put = __cordl_internal_set__sceneStartSyncController)) ::UnityW<::GlobalNamespace::SceneStartSyncController>
      _sceneStartSyncController;

  /// @brief Field _sessionGameId, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__sessionGameId, put = __cordl_internal_set__sessionGameId)) ::StringW _sessionGameId;

  /// @brief Field _songStartSyncController, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__songStartSyncController, put = __cordl_internal_set__songStartSyncController)) ::UnityW<::GlobalNamespace::SongStartSyncController>
      _songStartSyncController;

  /// @brief Field _startTime, offset 0xa8, size 0x4
  __declspec(property(get = __cordl_internal_get__startTime, put = __cordl_internal_set__startTime)) float_t _startTime;

  /// @brief Field _state, offset 0xb0, size 0x4
  __declspec(property(get = __cordl_internal_get__state, put = __cordl_internal_set__state)) ::GlobalNamespace::MultiplayerController_State _state;

  /// @brief Field _timeoutGetGameStateCoroutine, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__timeoutGetGameStateCoroutine, put = __cordl_internal_set__timeoutGetGameStateCoroutine)) ::UnityEngine::Coroutine* _timeoutGetGameStateCoroutine;

  __declspec(property(get = get_state)) ::GlobalNamespace::MultiplayerController_State state;

  /// @brief Field stateChangedEvent, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_stateChangedEvent,
                      put = __cordl_internal_set_stateChangedEvent)) ::System::Action_1<::GlobalNamespace::MultiplayerController_State>* stateChangedEvent;

  /// @brief Method ChangeState, addr 0x3bc9ec8, size 0x20, virtual false, abstract: false, final false
  inline void ChangeState(::GlobalNamespace::MultiplayerController_State newState);

  /// @brief Method CreateAndBindPlayersSpecificSettingsAtGameStartModel, addr 0x3bc9aa4, size 0x424, virtual false, abstract: false, final false
  inline void CreateAndBindPlayersSpecificSettingsAtGameStartModel();

  /// @brief Method EndGameplay, addr 0x3bcadb4, size 0x268, virtual false, abstract: false, final false
  inline void EndGameplay(::GlobalNamespace::MultiplayerLevelCompletionResults* localPlayerResults,
                          ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>* otherPlayerResults);

  /// @brief Method GetCurrentSongTime, addr 0x3bcab34, size 0xc0, virtual false, abstract: false, final false
  inline float_t GetCurrentSongTime(int64_t songStartSyncTime);

  /// @brief Method GetSongStartSyncTime, addr 0x3bcab0c, size 0x28, virtual false, abstract: false, final false
  inline int64_t GetSongStartSyncTime(int64_t introAnimationStartSyncTime);

  /// @brief Method HandleAllResultsCollected, addr 0x3bcc6c8, size 0x4, virtual false, abstract: false, final false
  inline void HandleAllResultsCollected(::GlobalNamespace::MultiplayerLevelCompletionResults* localPlayerResults,
                                        ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>* otherPlayerResults);

  /// @brief Method HandleDidSwitchPlayerToInactive, addr 0x3bca99c, size 0x170, virtual false, abstract: false, final false
  inline void HandleDidSwitchPlayerToInactive();

  /// @brief Method HandleDisconnected, addr 0x3bca558, size 0x54, virtual false, abstract: false, final false
  inline void HandleDisconnected(::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method HandleInitialGetGameStateFailed, addr 0x3bcac44, size 0xbc, virtual false, abstract: false, final false
  inline void HandleInitialGetGameStateFailed();

  /// @brief Method HandleIsDisconnectedDuringLoading, addr 0x3bca550, size 0x8, virtual false, abstract: false, final false
  inline void HandleIsDisconnectedDuringLoading();

  /// @brief Method HandleOutroAnimationDidFinish, addr 0x3bcc888, size 0x48, virtual false, abstract: false, final false
  inline void HandleOutroAnimationDidFinish();

  /// @brief Method HandleRpcReturnToMenu, addr 0x3bcc8d0, size 0x184, virtual false, abstract: false, final false
  inline void HandleRpcReturnToMenu(::StringW userId);

  /// @brief Method HandleSceneStartSyncControllerSyncStartDidFail, addr 0x3bcad1c, size 0x98, virtual false, abstract: false, final false
  inline void HandleSceneStartSyncControllerSyncStartDidFail();

  /// @brief Method HandleSceneStartSyncControllerSyncStartDidReceiveTooLate, addr 0x3bcac1c, size 0x28, virtual false, abstract: false, final false
  inline void HandleSceneStartSyncControllerSyncStartDidReceiveTooLate(::StringW sessionGameId);

  /// @brief Method HandleSceneStartSyncControllerSyncStartDidSuccess, addr 0x3bcabf4, size 0x28, virtual false, abstract: false, final false
  inline void HandleSceneStartSyncControllerSyncStartDidSuccess(::StringW sessionGameId);

  /// @brief Method HandleSetMultiplayerGameState, addr 0x3bca5ac, size 0x1ec, virtual false, abstract: false, final false
  inline void HandleSetMultiplayerGameState(::StringW userId, ::GlobalNamespace::MultiplayerGameState gameState);

  /// @brief Method HandleSongStartSyncControllerSyncResume, addr 0x3bcc0ec, size 0x4dc, virtual false, abstract: false, final false
  inline void HandleSongStartSyncControllerSyncResume(int64_t introAnimationStartSyncTime);

  /// @brief Method HandleSongStartSyncControllerSyncStartFailed, addr 0x3bcc630, size 0x98, virtual false, abstract: false, final false
  inline void HandleSongStartSyncControllerSyncStartFailed();

  /// @brief Method HandleSongStartSyncControllerSyncStartSuccess, addr 0x3bcb01c, size 0x25c, virtual false, abstract: false, final false
  inline void HandleSongStartSyncControllerSyncStartSuccess(int64_t introAnimationStartSyncTime);

  static inline ::GlobalNamespace::MultiplayerController* New_ctor();

  /// @brief Method OnDestroy, addr 0x3bc9ee8, size 0x5cc, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method PerformSongStartSync, addr 0x3bca904, size 0x70, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* PerformSongStartSync(::GlobalNamespace::MultiplayerPlayerStartState localPlayerSyncState);

  /// @brief Method Start, addr 0x3bc9664, size 0x440, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method StartGameplay, addr 0x3bcb874, size 0x878, virtual false, abstract: false, final false
  inline void StartGameplay(int64_t introAnimationStartSyncTime);

  /// @brief Method StartSceneLoadSync, addr 0x3bca798, size 0x16c, virtual false, abstract: false, final false
  inline void StartSceneLoadSync();

  constexpr ::GlobalNamespace::MultiplayerBadgesProvider* const& __cordl_internal_get__badgesProvider() const;

  constexpr ::GlobalNamespace::MultiplayerBadgesProvider*& __cordl_internal_get__badgesProvider();

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get__diContainer() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__diContainer();

  constexpr ::UnityW<::GlobalNamespace::FadeInOutController> const& __cordl_internal_get__fadeInOutController() const;

  constexpr ::UnityW<::GlobalNamespace::FadeInOutController>& __cordl_internal_get__fadeInOutController();

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get__gameScenesManager() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get__gameScenesManager();

  constexpr ::GlobalNamespace::IGameplayRpcManager* const& __cordl_internal_get__gameplayRpcManager() const;

  constexpr ::GlobalNamespace::IGameplayRpcManager*& __cordl_internal_get__gameplayRpcManager();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerIntroAnimationController> const& __cordl_internal_get__introAnimationController() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerIntroAnimationController>& __cordl_internal_get__introAnimationController();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__loadingEnvironment() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__loadingEnvironment();

  constexpr ::GlobalNamespace::MultiplayerPlayerStartState const& __cordl_internal_get__localPlayerSyncStartState() const;

  constexpr ::GlobalNamespace::MultiplayerPlayerStartState& __cordl_internal_get__localPlayerSyncStartState();

  constexpr ::GlobalNamespace::IMenuRpcManager* const& __cordl_internal_get__menuRpcManager() const;

  constexpr ::GlobalNamespace::IMenuRpcManager*& __cordl_internal_get__menuRpcManager();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLevelFinishedController> const& __cordl_internal_get__multiplayerLevelFinishedController() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLevelFinishedController>& __cordl_internal_get__multiplayerLevelFinishedController();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO> const& __cordl_internal_get__multiplayerLevelSceneSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>& __cordl_internal_get__multiplayerLevelSceneSetupData();

  constexpr ::GlobalNamespace::IMultiplayerSessionManager* const& __cordl_internal_get__multiplayerSessionManager() const;

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __cordl_internal_get__multiplayerSessionManager();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerOutroAnimationController> const& __cordl_internal_get__outroAnimationController() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerOutroAnimationController>& __cordl_internal_get__outroAnimationController();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerPlayersManager> const& __cordl_internal_get__playersManager() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerPlayersManager>& __cordl_internal_get__playersManager();

  constexpr ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* const& __cordl_internal_get__playersSpecificSettingsAtGameStartModel() const;

  constexpr ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*& __cordl_internal_get__playersSpecificSettingsAtGameStartModel();

  constexpr ::GlobalNamespace::MultiplayerResultsData* const& __cordl_internal_get__resultsData() const;

  constexpr ::GlobalNamespace::MultiplayerResultsData*& __cordl_internal_get__resultsData();

  constexpr ::GlobalNamespace::GameplayCoreSceneSetupData* const& __cordl_internal_get__sceneSetupData() const;

  constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& __cordl_internal_get__sceneSetupData();

  constexpr ::UnityW<::GlobalNamespace::SceneStartSyncController> const& __cordl_internal_get__sceneStartSyncController() const;

  constexpr ::UnityW<::GlobalNamespace::SceneStartSyncController>& __cordl_internal_get__sceneStartSyncController();

  constexpr ::StringW const& __cordl_internal_get__sessionGameId() const;

  constexpr ::StringW& __cordl_internal_get__sessionGameId();

  constexpr ::UnityW<::GlobalNamespace::SongStartSyncController> const& __cordl_internal_get__songStartSyncController() const;

  constexpr ::UnityW<::GlobalNamespace::SongStartSyncController>& __cordl_internal_get__songStartSyncController();

  constexpr float_t const& __cordl_internal_get__startTime() const;

  constexpr float_t& __cordl_internal_get__startTime();

  constexpr ::GlobalNamespace::MultiplayerController_State const& __cordl_internal_get__state() const;

  constexpr ::GlobalNamespace::MultiplayerController_State& __cordl_internal_get__state();

  constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__timeoutGetGameStateCoroutine() const;

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__timeoutGetGameStateCoroutine();

  constexpr ::System::Action_1<::GlobalNamespace::MultiplayerController_State>* const& __cordl_internal_get_stateChangedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::MultiplayerController_State>*& __cordl_internal_get_stateChangedEvent();

  constexpr void __cordl_internal_set__badgesProvider(::GlobalNamespace::MultiplayerBadgesProvider* value);

  constexpr void __cordl_internal_set__diContainer(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__fadeInOutController(::UnityW<::GlobalNamespace::FadeInOutController> value);

  constexpr void __cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void __cordl_internal_set__gameplayRpcManager(::GlobalNamespace::IGameplayRpcManager* value);

  constexpr void __cordl_internal_set__introAnimationController(::UnityW<::GlobalNamespace::MultiplayerIntroAnimationController> value);

  constexpr void __cordl_internal_set__loadingEnvironment(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__localPlayerSyncStartState(::GlobalNamespace::MultiplayerPlayerStartState value);

  constexpr void __cordl_internal_set__menuRpcManager(::GlobalNamespace::IMenuRpcManager* value);

  constexpr void __cordl_internal_set__multiplayerLevelFinishedController(::UnityW<::GlobalNamespace::MultiplayerLevelFinishedController> value);

  constexpr void __cordl_internal_set__multiplayerLevelSceneSetupData(::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO> value);

  constexpr void __cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr void __cordl_internal_set__outroAnimationController(::UnityW<::GlobalNamespace::MultiplayerOutroAnimationController> value);

  constexpr void __cordl_internal_set__playersManager(::UnityW<::GlobalNamespace::MultiplayerPlayersManager> value);

  constexpr void __cordl_internal_set__playersSpecificSettingsAtGameStartModel(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* value);

  constexpr void __cordl_internal_set__resultsData(::GlobalNamespace::MultiplayerResultsData* value);

  constexpr void __cordl_internal_set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value);

  constexpr void __cordl_internal_set__sceneStartSyncController(::UnityW<::GlobalNamespace::SceneStartSyncController> value);

  constexpr void __cordl_internal_set__sessionGameId(::StringW value);

  constexpr void __cordl_internal_set__songStartSyncController(::UnityW<::GlobalNamespace::SongStartSyncController> value);

  constexpr void __cordl_internal_set__startTime(float_t value);

  constexpr void __cordl_internal_set__state(::GlobalNamespace::MultiplayerController_State value);

  constexpr void __cordl_internal_set__timeoutGetGameStateCoroutine(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set_stateChangedEvent(::System::Action_1<::GlobalNamespace::MultiplayerController_State>* value);

  /// @brief Method .ctor, addr 0x3bcca54, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_stateChangedEvent, addr 0x3bc9504, size 0xb0, virtual false, abstract: false, final false
  inline void add_stateChangedEvent(::System::Action_1<::GlobalNamespace::MultiplayerController_State>* value);

  /// @brief Method get_state, addr 0x3bc94fc, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MultiplayerController_State get_state();

  /// @brief Method remove_stateChangedEvent, addr 0x3bc95b4, size 0xb0, virtual false, abstract: false, final false
  inline void remove_stateChangedEvent(::System::Action_1<::GlobalNamespace::MultiplayerController_State>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerController(MultiplayerController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerController(MultiplayerController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4565 };

  /// @brief Field kDisconnectWaitForInitTimeSeconds offset 0xffffffff size 0x4
  static constexpr float_t kDisconnectWaitForInitTimeSeconds{ static_cast<float_t>(0.5f) };

  /// @brief Field kGetMultiplayerGameStateTimeoutSeconds offset 0xffffffff size 0x4
  static constexpr float_t kGetMultiplayerGameStateTimeoutSeconds{ static_cast<float_t>(20.0f) };

  /// @brief Field kMinAnimationDurationPercentage offset 0xffffffff size 0x4
  static constexpr float_t kMinAnimationDurationPercentage{ static_cast<float_t>(0.75f) };

  /// @brief Field kSongTimeToSongStartSyncTimeOffsetMs offset 0xffffffff size 0x8
  static constexpr int64_t kSongTimeToSongStartSyncTimeOffsetMs{ static_cast<int64_t>(0xfffffffffffffda8) };

  /// @brief Field _loadingEnvironment, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____loadingEnvironment;

  /// @brief Field _multiplayerLevelSceneSetupData, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO> ____multiplayerLevelSceneSetupData;

  /// @brief Field _gameScenesManager, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> ____gameScenesManager;

  /// @brief Field _playersManager, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerPlayersManager> ____playersManager;

  /// @brief Field _sceneStartSyncController, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SceneStartSyncController> ____sceneStartSyncController;

  /// @brief Field _songStartSyncController, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SongStartSyncController> ____songStartSyncController;

  /// @brief Field _multiplayerLevelFinishedController, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerLevelFinishedController> ____multiplayerLevelFinishedController;

  /// @brief Field _fadeInOutController, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FadeInOutController> ____fadeInOutController;

  /// @brief Field _multiplayerSessionManager, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field _introAnimationController, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerIntroAnimationController> ____introAnimationController;

  /// @brief Field _outroAnimationController, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerOutroAnimationController> ____outroAnimationController;

  /// @brief Field _menuRpcManager, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::IMenuRpcManager* ____menuRpcManager;

  /// @brief Field _gameplayRpcManager, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::IGameplayRpcManager* ____gameplayRpcManager;

  /// @brief Field _sceneSetupData, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::GameplayCoreSceneSetupData* ____sceneSetupData;

  /// @brief Field _diContainer, offset: 0x90, size: 0x8, def value: None
  ::Zenject::DiContainer* ____diContainer;

  /// @brief Field _badgesProvider, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerBadgesProvider* ____badgesProvider;

  /// @brief Field stateChangedEvent, offset: 0xa0, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::MultiplayerController_State>* ___stateChangedEvent;

  /// @brief Field _startTime, offset: 0xa8, size: 0x4, def value: None
  float_t ____startTime;

  /// @brief Field _localPlayerSyncStartState, offset: 0xac, size: 0x4, def value: None
  ::GlobalNamespace::MultiplayerPlayerStartState ____localPlayerSyncStartState;

  /// @brief Field _state, offset: 0xb0, size: 0x4, def value: None
  ::GlobalNamespace::MultiplayerController_State ____state;

  /// @brief Field _sessionGameId, offset: 0xb8, size: 0x8, def value: None
  ::StringW ____sessionGameId;

  /// @brief Field _resultsData, offset: 0xc0, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerResultsData* ____resultsData;

  /// @brief Field _playersSpecificSettingsAtGameStartModel, offset: 0xc8, size: 0x8, def value: None
  ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* ____playersSpecificSettingsAtGameStartModel;

  /// @brief Field _timeoutGetGameStateCoroutine, offset: 0xd0, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ____timeoutGetGameStateCoroutine;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerController, ____loadingEnvironment) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerController, ____multiplayerLevelSceneSetupData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerController, ____gameScenesManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerController, ____playersManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerController, ____sceneStartSyncController) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerController, ____songStartSyncController) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerController, ____multiplayerLevelFinishedController) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerController, ____fadeInOutController) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerController, ____multiplayerSessionManager) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerController, ____introAnimationController) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerController, ____outroAnimationController) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerController, ____menuRpcManager) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerController, ____gameplayRpcManager) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerController, ____sceneSetupData) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerController, ____diContainer) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerController, ____badgesProvider) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerController, ___stateChangedEvent) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerController, ____startTime) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerController, ____localPlayerSyncStartState) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerController, ____state) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerController, ____sessionGameId) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerController, ____resultsData) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerController, ____playersSpecificSettingsAtGameStartModel) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerController, ____timeoutGetGameStateCoroutine) == 0xd0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerController, 0xd8>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerController_State, "", "MultiplayerController/State");
NEED_NO_BOX(::GlobalNamespace::MultiplayerController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerController*, "", "MultiplayerController");
NEED_NO_BOX(::GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39*, "", "MultiplayerController/<PerformSongStartSync>d__39");
NEED_NO_BOX(::GlobalNamespace::MultiplayerController___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerController___c*, "", "MultiplayerController/<>c");
NEED_NO_BOX(::GlobalNamespace::MultiplayerController___c__DisplayClass45_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerController___c__DisplayClass45_0*, "", "MultiplayerController/<>c__DisplayClass45_0");
