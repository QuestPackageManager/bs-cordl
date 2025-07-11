#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerPlayersManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IMultiplayerLevelEndActionsPublisher_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerPlayersManager)
namespace GlobalNamespace {
class BeatmapObjectSpawnCenter;
}
namespace GlobalNamespace {
class FadeInOutController;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class IMultiplayerLevelEndActionsPublisher;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class IStartSeekSongControllerProvider;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerFacade_Factory;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerFacade;
}
namespace GlobalNamespace {
class MultiplayerLayoutProvider;
}
namespace GlobalNamespace {
class MultiplayerLevelCompletionResults;
}
namespace GlobalNamespace {
class MultiplayerLocalActivePlayerFacade_Factory;
}
namespace GlobalNamespace {
class MultiplayerLocalActivePlayerFacade;
}
namespace GlobalNamespace {
class MultiplayerLocalInactivePlayerFacade_Factory;
}
namespace GlobalNamespace {
class MultiplayerLocalInactivePlayerFacade;
}
namespace GlobalNamespace {
struct MultiplayerPlayerLayout;
}
namespace GlobalNamespace {
struct MultiplayerPlayerStartState;
}
namespace GlobalNamespace {
class MultiplayerPlayersManager__SwitchLocalPlayerToInactiveCoroutine_d__51;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
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
namespace UnityEngine {
class Transform;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerPlayersManager;
}
namespace GlobalNamespace {
class MultiplayerPlayersManager__SwitchLocalPlayerToInactiveCoroutine_d__51;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerPlayersManager);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerPlayersManager__SwitchLocalPlayerToInactiveCoroutine_d__51);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerPlayersManager/<SwitchLocalPlayerToInactiveCoroutine>d__51
class CORDL_TYPE MultiplayerPlayersManager__SwitchLocalPlayerToInactiveCoroutine_d__51 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::MultiplayerPlayersManager> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x3bdf898, size 0x3d0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::MultiplayerPlayersManager__SwitchLocalPlayerToInactiveCoroutine_d__51* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x3bdfc68, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3bdfc70, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3bdfca8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3bdf894, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerPlayersManager> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerPlayersManager>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MultiplayerPlayersManager> value);

  /// @brief Method .ctor, addr 0x3bdf770, size 0x28, virtual false, abstract: false, final false
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
  constexpr MultiplayerPlayersManager__SwitchLocalPlayerToInactiveCoroutine_d__51();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerPlayersManager__SwitchLocalPlayerToInactiveCoroutine_d__51", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerPlayersManager__SwitchLocalPlayerToInactiveCoroutine_d__51(MultiplayerPlayersManager__SwitchLocalPlayerToInactiveCoroutine_d__51&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerPlayersManager__SwitchLocalPlayerToInactiveCoroutine_d__51", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerPlayersManager__SwitchLocalPlayerToInactiveCoroutine_d__51(MultiplayerPlayersManager__SwitchLocalPlayerToInactiveCoroutine_d__51 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4602 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerPlayersManager> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager__SwitchLocalPlayerToInactiveCoroutine_d__51, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager__SwitchLocalPlayerToInactiveCoroutine_d__51, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager__SwitchLocalPlayerToInactiveCoroutine_d__51, _____4__this) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerPlayersManager__SwitchLocalPlayerToInactiveCoroutine_d__51, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IMultiplayerLevelEndActionsPublisher, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerPlayersManager
class CORDL_TYPE MultiplayerPlayersManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _SwitchLocalPlayerToInactiveCoroutine_d__51 = ::GlobalNamespace::MultiplayerPlayersManager__SwitchLocalPlayerToInactiveCoroutine_d__51;

  /// @brief Field _activeLocalPlayerControllerPrefab, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__activeLocalPlayerControllerPrefab,
                      put = __cordl_internal_set__activeLocalPlayerControllerPrefab)) ::UnityW<::GlobalNamespace::MultiplayerLocalActivePlayerFacade>
      _activeLocalPlayerControllerPrefab;

  /// @brief Field _activeLocalPlayerDuelControllerPrefab, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__activeLocalPlayerDuelControllerPrefab,
                      put = __cordl_internal_set__activeLocalPlayerDuelControllerPrefab)) ::UnityW<::GlobalNamespace::MultiplayerLocalActivePlayerFacade>
      _activeLocalPlayerDuelControllerPrefab;

  /// @brief Field _activeLocalPlayerFacade, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__activeLocalPlayerFacade, put = __cordl_internal_set__activeLocalPlayerFacade)) ::UnityW<::GlobalNamespace::MultiplayerLocalActivePlayerFacade>
      _activeLocalPlayerFacade;

  /// @brief Field _activeLocalPlayerFactory, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__activeLocalPlayerFactory,
                      put = __cordl_internal_set__activeLocalPlayerFactory)) ::GlobalNamespace::MultiplayerLocalActivePlayerFacade_Factory* _activeLocalPlayerFactory;

  /// @brief Field _allActiveAtGameStartPlayers, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__allActiveAtGameStartPlayers,
                      put = __cordl_internal_set__allActiveAtGameStartPlayers)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>* _allActiveAtGameStartPlayers;

  /// @brief Field _beatmapObjectSpawnCenter, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectSpawnCenter, put = __cordl_internal_set__beatmapObjectSpawnCenter)) ::UnityW<::GlobalNamespace::BeatmapObjectSpawnCenter>
      _beatmapObjectSpawnCenter;

  /// @brief Field _connectedPlayerCenterFacingRotationsMap, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__connectedPlayerCenterFacingRotationsMap,
                      put = __cordl_internal_set__connectedPlayerCenterFacingRotationsMap)) ::System::Collections::Generic::Dictionary_2<::StringW, float_t>* _connectedPlayerCenterFacingRotationsMap;

  /// @brief Field _connectedPlayerControllerPrefab, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__connectedPlayerControllerPrefab,
                      put = __cordl_internal_set__connectedPlayerControllerPrefab)) ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerFacade>
      _connectedPlayerControllerPrefab;

  /// @brief Field _connectedPlayerControllersMap, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__connectedPlayerControllersMap, put = __cordl_internal_set__connectedPlayerControllersMap)) ::System::Collections::Generic::Dictionary_2<
      ::StringW, ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerFacade>>* _connectedPlayerControllersMap;

  /// @brief Field _connectedPlayerDuelControllerPrefab, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__connectedPlayerDuelControllerPrefab,
                      put = __cordl_internal_set__connectedPlayerDuelControllerPrefab)) ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerFacade>
      _connectedPlayerDuelControllerPrefab;

  /// @brief Field _connectedPlayerFactory, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__connectedPlayerFactory,
                      put = __cordl_internal_set__connectedPlayerFactory)) ::GlobalNamespace::MultiplayerConnectedPlayerFacade_Factory* _connectedPlayerFactory;

  /// @brief Field _container, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container)) ::Zenject::DiContainer* _container;

  /// @brief Field _currentEventsPublisher, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__currentEventsPublisher,
                      put = __cordl_internal_set__currentEventsPublisher)) ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher* _currentEventsPublisher;

  /// @brief Field _currentStartSeekSongControllerProvider, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__currentStartSeekSongControllerProvider,
                      put = __cordl_internal_set__currentStartSeekSongControllerProvider)) ::GlobalNamespace::IStartSeekSongControllerProvider* _currentStartSeekSongControllerProvider;

  /// @brief Field _fadeInOutController, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__fadeInOutController, put = __cordl_internal_set__fadeInOutController)) ::UnityW<::GlobalNamespace::FadeInOutController> _fadeInOutController;

  /// @brief Field _inactiveLocalPlayerControllerPrefab, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__inactiveLocalPlayerControllerPrefab,
                      put = __cordl_internal_set__inactiveLocalPlayerControllerPrefab)) ::UnityW<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade>
      _inactiveLocalPlayerControllerPrefab;

  /// @brief Field _inactiveLocalPlayerFacade, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__inactiveLocalPlayerFacade, put = __cordl_internal_set__inactiveLocalPlayerFacade)) ::UnityW<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade>
      _inactiveLocalPlayerFacade;

  /// @brief Field _inactiveLocalPlayerFactory, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__inactiveLocalPlayerFactory,
                      put = __cordl_internal_set__inactiveLocalPlayerFactory)) ::GlobalNamespace::MultiplayerLocalInactivePlayerFacade_Factory* _inactiveLocalPlayerFactory;

  /// @brief Field _layoutProvider, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__layoutProvider, put = __cordl_internal_set__layoutProvider)) ::GlobalNamespace::MultiplayerLayoutProvider* _layoutProvider;

  /// @brief Field _multiplayerSessionManager, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionManager,
                      put = __cordl_internal_set__multiplayerSessionManager)) ::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field <playerSpawningFinished>k__BackingField, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get__playerSpawningFinished_k__BackingField,
                      put = __cordl_internal_set__playerSpawningFinished_k__BackingField)) bool _playerSpawningFinished_k__BackingField;

  __declspec(property(get = get_activeLocalPlayerFacade)) ::UnityW<::GlobalNamespace::MultiplayerLocalActivePlayerFacade> activeLocalPlayerFacade;

  __declspec(property(get = get_allActiveAtGameStartPlayers)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>* allActiveAtGameStartPlayers;

  /// @brief Field didSwitchPlayerToInactiveEvent, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_didSwitchPlayerToInactiveEvent, put = __cordl_internal_set_didSwitchPlayerToInactiveEvent)) ::System::Action* didSwitchPlayerToInactiveEvent;

  __declspec(property(get = get_inactivePlayerFacade)) ::UnityW<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade> inactivePlayerFacade;

  __declspec(property(get = get_localPlayerStartSeekSongController)) ::GlobalNamespace::IStartSeekSongControllerProvider* localPlayerStartSeekSongController;

  __declspec(property(get = get_localPlayerTransform)) ::UnityW<::UnityEngine::Transform> localPlayerTransform;

  /// @brief Field playerDidFinishEvent, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_playerDidFinishEvent,
                      put = __cordl_internal_set_playerDidFinishEvent)) ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* playerDidFinishEvent;

  /// @brief Field playerNetworkDidFailedEvent, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_playerNetworkDidFailedEvent,
                      put = __cordl_internal_set_playerNetworkDidFailedEvent)) ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* playerNetworkDidFailedEvent;

  /// @brief Field playerSpawningDidFinishEvent, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_playerSpawningDidFinishEvent, put = __cordl_internal_set_playerSpawningDidFinishEvent)) ::System::Action* playerSpawningDidFinishEvent;

  __declspec(property(get = get_playerSpawningFinished, put = set_playerSpawningFinished)) bool playerSpawningFinished;

  /// @brief Convert operator to "::GlobalNamespace::IMultiplayerLevelEndActionsPublisher"
  constexpr operator ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*() noexcept;

  /// @brief Method BindPlayerFactories, addr 0x3bdf460, size 0x248, virtual false, abstract: false, final false
  inline void BindPlayerFactories(::GlobalNamespace::MultiplayerPlayerLayout layout);

  /// @brief Method HandlePlayerDidFinish, addr 0x3bdf798, size 0x1c, virtual false, abstract: false, final false
  inline void HandlePlayerDidFinish(::GlobalNamespace::MultiplayerLevelCompletionResults* levelCompletionResults);

  /// @brief Method HandlePlayerNetworkDidFailed, addr 0x3bdf7b4, size 0x1c, virtual false, abstract: false, final false
  inline void HandlePlayerNetworkDidFailed(::GlobalNamespace::MultiplayerLevelCompletionResults* levelCompletionResults);

  static inline ::GlobalNamespace::MultiplayerPlayersManager* New_ctor();

  /// @brief Method ReportLocalPlayerNetworkDidFailed, addr 0x3bcf954, size 0x1c, virtual false, abstract: false, final false
  inline void ReportLocalPlayerNetworkDidFailed(::GlobalNamespace::MultiplayerLevelCompletionResults* levelCompletionResults);

  /// @brief Method SpawnPlayers, addr 0x3bd2140, size 0x93c, virtual false, abstract: false, final false
  inline void SpawnPlayers(::GlobalNamespace::MultiplayerPlayerStartState localPlayerStartState,
                           ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>* allActiveAtGameStartPlayers);

  /// @brief Method SwitchLocalPlayerToInactive, addr 0x3bd2f8c, size 0x20, virtual false, abstract: false, final false
  inline void SwitchLocalPlayerToInactive();

  /// @brief Method SwitchLocalPlayerToInactiveCoroutine, addr 0x3bdf710, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* SwitchLocalPlayerToInactiveCoroutine();

  /// @brief Method TryGetConnectedCenterFacingRotation, addr 0x3bdf6a8, size 0x68, virtual false, abstract: false, final false
  inline bool TryGetConnectedCenterFacingRotation(::StringW userId, ::ByRef<float_t> centerFacingRotation);

  /// @brief Method TryGetConnectedPlayerController, addr 0x3bd121c, size 0x68, virtual false, abstract: false, final false
  inline bool TryGetConnectedPlayerController(::StringW userId, ::ByRef<::GlobalNamespace::MultiplayerConnectedPlayerFacade*> connectedPlayerController);

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLocalActivePlayerFacade> const& __cordl_internal_get__activeLocalPlayerControllerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLocalActivePlayerFacade>& __cordl_internal_get__activeLocalPlayerControllerPrefab();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLocalActivePlayerFacade> const& __cordl_internal_get__activeLocalPlayerDuelControllerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLocalActivePlayerFacade>& __cordl_internal_get__activeLocalPlayerDuelControllerPrefab();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLocalActivePlayerFacade> const& __cordl_internal_get__activeLocalPlayerFacade() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLocalActivePlayerFacade>& __cordl_internal_get__activeLocalPlayerFacade();

  constexpr ::GlobalNamespace::MultiplayerLocalActivePlayerFacade_Factory* const& __cordl_internal_get__activeLocalPlayerFactory() const;

  constexpr ::GlobalNamespace::MultiplayerLocalActivePlayerFacade_Factory*& __cordl_internal_get__activeLocalPlayerFactory();

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>* const& __cordl_internal_get__allActiveAtGameStartPlayers() const;

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>*& __cordl_internal_get__allActiveAtGameStartPlayers();

  constexpr ::UnityW<::GlobalNamespace::BeatmapObjectSpawnCenter> const& __cordl_internal_get__beatmapObjectSpawnCenter() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapObjectSpawnCenter>& __cordl_internal_get__beatmapObjectSpawnCenter();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, float_t>* const& __cordl_internal_get__connectedPlayerCenterFacingRotationsMap() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, float_t>*& __cordl_internal_get__connectedPlayerCenterFacingRotationsMap();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerFacade> const& __cordl_internal_get__connectedPlayerControllerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerFacade>& __cordl_internal_get__connectedPlayerControllerPrefab();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerFacade>>* const& __cordl_internal_get__connectedPlayerControllersMap() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerFacade>>*& __cordl_internal_get__connectedPlayerControllersMap();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerFacade> const& __cordl_internal_get__connectedPlayerDuelControllerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerFacade>& __cordl_internal_get__connectedPlayerDuelControllerPrefab();

  constexpr ::GlobalNamespace::MultiplayerConnectedPlayerFacade_Factory* const& __cordl_internal_get__connectedPlayerFactory() const;

  constexpr ::GlobalNamespace::MultiplayerConnectedPlayerFacade_Factory*& __cordl_internal_get__connectedPlayerFactory();

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get__container() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher* const& __cordl_internal_get__currentEventsPublisher() const;

  constexpr ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*& __cordl_internal_get__currentEventsPublisher();

  constexpr ::GlobalNamespace::IStartSeekSongControllerProvider* const& __cordl_internal_get__currentStartSeekSongControllerProvider() const;

  constexpr ::GlobalNamespace::IStartSeekSongControllerProvider*& __cordl_internal_get__currentStartSeekSongControllerProvider();

  constexpr ::UnityW<::GlobalNamespace::FadeInOutController> const& __cordl_internal_get__fadeInOutController() const;

  constexpr ::UnityW<::GlobalNamespace::FadeInOutController>& __cordl_internal_get__fadeInOutController();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade> const& __cordl_internal_get__inactiveLocalPlayerControllerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade>& __cordl_internal_get__inactiveLocalPlayerControllerPrefab();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade> const& __cordl_internal_get__inactiveLocalPlayerFacade() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade>& __cordl_internal_get__inactiveLocalPlayerFacade();

  constexpr ::GlobalNamespace::MultiplayerLocalInactivePlayerFacade_Factory* const& __cordl_internal_get__inactiveLocalPlayerFactory() const;

  constexpr ::GlobalNamespace::MultiplayerLocalInactivePlayerFacade_Factory*& __cordl_internal_get__inactiveLocalPlayerFactory();

  constexpr ::GlobalNamespace::MultiplayerLayoutProvider* const& __cordl_internal_get__layoutProvider() const;

  constexpr ::GlobalNamespace::MultiplayerLayoutProvider*& __cordl_internal_get__layoutProvider();

  constexpr ::GlobalNamespace::IMultiplayerSessionManager* const& __cordl_internal_get__multiplayerSessionManager() const;

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __cordl_internal_get__multiplayerSessionManager();

  constexpr bool const& __cordl_internal_get__playerSpawningFinished_k__BackingField() const;

  constexpr bool& __cordl_internal_get__playerSpawningFinished_k__BackingField();

  constexpr ::System::Action* const& __cordl_internal_get_didSwitchPlayerToInactiveEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_didSwitchPlayerToInactiveEvent();

  constexpr ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* const& __cordl_internal_get_playerDidFinishEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*& __cordl_internal_get_playerDidFinishEvent();

  constexpr ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* const& __cordl_internal_get_playerNetworkDidFailedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*& __cordl_internal_get_playerNetworkDidFailedEvent();

  constexpr ::System::Action* const& __cordl_internal_get_playerSpawningDidFinishEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_playerSpawningDidFinishEvent();

  constexpr void __cordl_internal_set__activeLocalPlayerControllerPrefab(::UnityW<::GlobalNamespace::MultiplayerLocalActivePlayerFacade> value);

  constexpr void __cordl_internal_set__activeLocalPlayerDuelControllerPrefab(::UnityW<::GlobalNamespace::MultiplayerLocalActivePlayerFacade> value);

  constexpr void __cordl_internal_set__activeLocalPlayerFacade(::UnityW<::GlobalNamespace::MultiplayerLocalActivePlayerFacade> value);

  constexpr void __cordl_internal_set__activeLocalPlayerFactory(::GlobalNamespace::MultiplayerLocalActivePlayerFacade_Factory* value);

  constexpr void __cordl_internal_set__allActiveAtGameStartPlayers(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>* value);

  constexpr void __cordl_internal_set__beatmapObjectSpawnCenter(::UnityW<::GlobalNamespace::BeatmapObjectSpawnCenter> value);

  constexpr void __cordl_internal_set__connectedPlayerCenterFacingRotationsMap(::System::Collections::Generic::Dictionary_2<::StringW, float_t>* value);

  constexpr void __cordl_internal_set__connectedPlayerControllerPrefab(::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerFacade> value);

  constexpr void __cordl_internal_set__connectedPlayerControllersMap(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerFacade>>* value);

  constexpr void __cordl_internal_set__connectedPlayerDuelControllerPrefab(::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerFacade> value);

  constexpr void __cordl_internal_set__connectedPlayerFactory(::GlobalNamespace::MultiplayerConnectedPlayerFacade_Factory* value);

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__currentEventsPublisher(::GlobalNamespace::IMultiplayerLevelEndActionsPublisher* value);

  constexpr void __cordl_internal_set__currentStartSeekSongControllerProvider(::GlobalNamespace::IStartSeekSongControllerProvider* value);

  constexpr void __cordl_internal_set__fadeInOutController(::UnityW<::GlobalNamespace::FadeInOutController> value);

  constexpr void __cordl_internal_set__inactiveLocalPlayerControllerPrefab(::UnityW<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade> value);

  constexpr void __cordl_internal_set__inactiveLocalPlayerFacade(::UnityW<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade> value);

  constexpr void __cordl_internal_set__inactiveLocalPlayerFactory(::GlobalNamespace::MultiplayerLocalInactivePlayerFacade_Factory* value);

  constexpr void __cordl_internal_set__layoutProvider(::GlobalNamespace::MultiplayerLayoutProvider* value);

  constexpr void __cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr void __cordl_internal_set__playerSpawningFinished_k__BackingField(bool value);

  constexpr void __cordl_internal_set_didSwitchPlayerToInactiveEvent(::System::Action* value);

  constexpr void __cordl_internal_set_playerDidFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);

  constexpr void __cordl_internal_set_playerNetworkDidFailedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);

  constexpr void __cordl_internal_set_playerSpawningDidFinishEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x3bdf7d0, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didSwitchPlayerToInactiveEvent, addr 0x3bd2a7c, size 0x9c, virtual false, abstract: false, final false
  inline void add_didSwitchPlayerToInactiveEvent(::System::Action* value);

  /// @brief Method add_playerDidFinishEvent, addr 0x3bdf1a0, size 0xb0, virtual true, abstract: false, final true
  inline void add_playerDidFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);

  /// @brief Method add_playerNetworkDidFailedEvent, addr 0x3bdf300, size 0xb0, virtual true, abstract: false, final true
  inline void add_playerNetworkDidFailedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);

  /// @brief Method add_playerSpawningDidFinishEvent, addr 0x3bdd090, size 0x9c, virtual false, abstract: false, final false
  inline void add_playerSpawningDidFinishEvent(::System::Action* value);

  /// @brief Method get_activeLocalPlayerFacade, addr 0x3bdf190, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::MultiplayerLocalActivePlayerFacade> get_activeLocalPlayerFacade();

  /// @brief Method get_allActiveAtGameStartPlayers, addr 0x3bdf180, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>* get_allActiveAtGameStartPlayers();

  /// @brief Method get_inactivePlayerFacade, addr 0x3bdf198, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade> get_inactivePlayerFacade();

  /// @brief Method get_localPlayerStartSeekSongController, addr 0x3bdf188, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IStartSeekSongControllerProvider* get_localPlayerStartSeekSongController();

  /// @brief Method get_localPlayerTransform, addr 0x3bdbf9c, size 0x80, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_localPlayerTransform();

  /// @brief Method get_playerSpawningFinished, addr 0x3bdf16c, size 0x8, virtual false, abstract: false, final false
  inline bool get_playerSpawningFinished();

  /// @brief Convert to "::GlobalNamespace::IMultiplayerLevelEndActionsPublisher"
  constexpr ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher* i___GlobalNamespace__IMultiplayerLevelEndActionsPublisher() noexcept;

  /// @brief Method remove_didSwitchPlayerToInactiveEvent, addr 0x3bcf108, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didSwitchPlayerToInactiveEvent(::System::Action* value);

  /// @brief Method remove_playerDidFinishEvent, addr 0x3bdf250, size 0xb0, virtual true, abstract: false, final true
  inline void remove_playerDidFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);

  /// @brief Method remove_playerNetworkDidFailedEvent, addr 0x3bdf3b0, size 0xb0, virtual true, abstract: false, final true
  inline void remove_playerNetworkDidFailedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);

  /// @brief Method remove_playerSpawningDidFinishEvent, addr 0x3bdd1f8, size 0x9c, virtual false, abstract: false, final false
  inline void remove_playerSpawningDidFinishEvent(::System::Action* value);

  /// @brief Method set_playerSpawningFinished, addr 0x3bdf174, size 0xc, virtual false, abstract: false, final false
  inline void set_playerSpawningFinished(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerPlayersManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerPlayersManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerPlayersManager(MultiplayerPlayersManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerPlayersManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerPlayersManager(MultiplayerPlayersManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4603 };

  /// @brief Field _activeLocalPlayerControllerPrefab, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerLocalActivePlayerFacade> ____activeLocalPlayerControllerPrefab;

  /// @brief Field _activeLocalPlayerDuelControllerPrefab, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerLocalActivePlayerFacade> ____activeLocalPlayerDuelControllerPrefab;

  /// @brief Field _inactiveLocalPlayerControllerPrefab, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade> ____inactiveLocalPlayerControllerPrefab;

  /// @brief Field _connectedPlayerControllerPrefab, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerFacade> ____connectedPlayerControllerPrefab;

  /// @brief Field _connectedPlayerDuelControllerPrefab, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerFacade> ____connectedPlayerDuelControllerPrefab;

  /// @brief Field _multiplayerSessionManager, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field _beatmapObjectSpawnCenter, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapObjectSpawnCenter> ____beatmapObjectSpawnCenter;

  /// @brief Field _layoutProvider, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLayoutProvider* ____layoutProvider;

  /// @brief Field _fadeInOutController, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FadeInOutController> ____fadeInOutController;

  /// @brief Field _container, offset: 0x68, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field <playerSpawningFinished>k__BackingField, offset: 0x70, size: 0x1, def value: None
  bool ____playerSpawningFinished_k__BackingField;

  /// @brief Field playerSpawningDidFinishEvent, offset: 0x78, size: 0x8, def value: None
  ::System::Action* ___playerSpawningDidFinishEvent;

  /// @brief Field didSwitchPlayerToInactiveEvent, offset: 0x80, size: 0x8, def value: None
  ::System::Action* ___didSwitchPlayerToInactiveEvent;

  /// @brief Field playerDidFinishEvent, offset: 0x88, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* ___playerDidFinishEvent;

  /// @brief Field playerNetworkDidFailedEvent, offset: 0x90, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* ___playerNetworkDidFailedEvent;

  /// @brief Field _activeLocalPlayerFacade, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerLocalActivePlayerFacade> ____activeLocalPlayerFacade;

  /// @brief Field _inactiveLocalPlayerFacade, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade> ____inactiveLocalPlayerFacade;

  /// @brief Field _currentEventsPublisher, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher* ____currentEventsPublisher;

  /// @brief Field _currentStartSeekSongControllerProvider, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::IStartSeekSongControllerProvider* ____currentStartSeekSongControllerProvider;

  /// @brief Field _activeLocalPlayerFactory, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLocalActivePlayerFacade_Factory* ____activeLocalPlayerFactory;

  /// @brief Field _inactiveLocalPlayerFactory, offset: 0xc0, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLocalInactivePlayerFacade_Factory* ____inactiveLocalPlayerFactory;

  /// @brief Field _connectedPlayerFactory, offset: 0xc8, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerConnectedPlayerFacade_Factory* ____connectedPlayerFactory;

  /// @brief Field _connectedPlayerControllersMap, offset: 0xd0, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerFacade>>* ____connectedPlayerControllersMap;

  /// @brief Field _connectedPlayerCenterFacingRotationsMap, offset: 0xd8, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, float_t>* ____connectedPlayerCenterFacingRotationsMap;

  /// @brief Field _allActiveAtGameStartPlayers, offset: 0xe0, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>* ____allActiveAtGameStartPlayers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager, ____activeLocalPlayerControllerPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager, ____activeLocalPlayerDuelControllerPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager, ____inactiveLocalPlayerControllerPrefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager, ____connectedPlayerControllerPrefab) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager, ____connectedPlayerDuelControllerPrefab) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager, ____multiplayerSessionManager) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager, ____beatmapObjectSpawnCenter) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager, ____layoutProvider) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager, ____fadeInOutController) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager, ____container) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager, ____playerSpawningFinished_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager, ___playerSpawningDidFinishEvent) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager, ___didSwitchPlayerToInactiveEvent) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager, ___playerDidFinishEvent) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager, ___playerNetworkDidFailedEvent) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager, ____activeLocalPlayerFacade) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager, ____inactiveLocalPlayerFacade) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager, ____currentEventsPublisher) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager, ____currentStartSeekSongControllerProvider) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager, ____activeLocalPlayerFactory) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager, ____inactiveLocalPlayerFactory) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager, ____connectedPlayerFactory) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager, ____connectedPlayerControllersMap) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager, ____connectedPlayerCenterFacingRotationsMap) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager, ____allActiveAtGameStartPlayers) == 0xe0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerPlayersManager, 0xe8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerPlayersManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerPlayersManager*, "", "MultiplayerPlayersManager");
NEED_NO_BOX(::GlobalNamespace::MultiplayerPlayersManager__SwitchLocalPlayerToInactiveCoroutine_d__51);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerPlayersManager__SwitchLocalPlayerToInactiveCoroutine_d__51*, "", "MultiplayerPlayersManager/<SwitchLocalPlayerToInactiveCoroutine>d__51");
