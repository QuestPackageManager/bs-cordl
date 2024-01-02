#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerPlayersManager)
namespace GlobalNamespace {
class __MultiplayerConnectedPlayerFacade__Factory;
}
namespace GlobalNamespace {
class __MultiplayerPlayersManager___SwitchLocalPlayerToInactiveCoroutine_d__51;
}
namespace GlobalNamespace {
class IMultiplayerLevelEndActionsPublisher;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
struct MultiplayerPlayerLayout;
}
namespace GlobalNamespace {
class MultiplayerLocalInactivePlayerFacade;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class MultiplayerLayoutProvider;
}
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
class BeatmapObjectSpawnCenter;
}
namespace Zenject {
class DiContainer;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class MultiplayerLevelCompletionResults;
}
namespace GlobalNamespace {
class __MultiplayerLocalActivePlayerFacade__Factory;
}
namespace GlobalNamespace {
struct MultiplayerPlayerStartState;
}
namespace GlobalNamespace {
class FadeInOutController;
}
namespace GlobalNamespace {
class __MultiplayerLocalInactivePlayerFacade__Factory;
}
namespace GlobalNamespace {
class MultiplayerLocalActivePlayerFacade;
}
namespace GlobalNamespace {
class IStartSeekSongControllerProvider;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerFacade;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerPlayersManager;
}
namespace GlobalNamespace {
class __MultiplayerPlayersManager___SwitchLocalPlayerToInactiveCoroutine_d__51;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerPlayersManager);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerPlayersManager___SwitchLocalPlayerToInactiveCoroutine_d__51);
// Type: ::<SwitchLocalPlayerToInactiveCoroutine>d__51
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5237))
// CS Name: ::MultiplayerPlayersManager::<SwitchLocalPlayerToInactiveCoroutine>d__51*
class CORDL_TYPE __MultiplayerPlayersManager___SwitchLocalPlayerToInactiveCoroutine_d__51 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::MultiplayerPlayersManager* __4__this;

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

  constexpr ::GlobalNamespace::MultiplayerPlayersManager*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerPlayersManager*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::MultiplayerPlayersManager* value);

  static inline ::GlobalNamespace::__MultiplayerPlayersManager___SwitchLocalPlayerToInactiveCoroutine_d__51* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x2257220, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x2257340, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x2257344, size 0x3cc, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2257710, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2257718, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2257758, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerPlayersManager___SwitchLocalPlayerToInactiveCoroutine_d__51", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerPlayersManager___SwitchLocalPlayerToInactiveCoroutine_d__51(__MultiplayerPlayersManager___SwitchLocalPlayerToInactiveCoroutine_d__51&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerPlayersManager___SwitchLocalPlayerToInactiveCoroutine_d__51", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerPlayersManager___SwitchLocalPlayerToInactiveCoroutine_d__51(__MultiplayerPlayersManager___SwitchLocalPlayerToInactiveCoroutine_d__51 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerPlayersManager___SwitchLocalPlayerToInactiveCoroutine_d__51();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerPlayersManager* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerPlayersManager___SwitchLocalPlayerToInactiveCoroutine_d__51, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerPlayersManager___SwitchLocalPlayerToInactiveCoroutine_d__51, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerPlayersManager___SwitchLocalPlayerToInactiveCoroutine_d__51, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerPlayersManager___SwitchLocalPlayerToInactiveCoroutine_d__51, _____4__this) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MultiplayerPlayersManager
// SizeInfo { instance_size: 224, native_size: -1, calculated_instance_size: 224, calculated_native_size: 224, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5238))
// CS Name: ::MultiplayerPlayersManager*
class CORDL_TYPE MultiplayerPlayersManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _SwitchLocalPlayerToInactiveCoroutine_d__51 = ::GlobalNamespace::__MultiplayerPlayersManager___SwitchLocalPlayerToInactiveCoroutine_d__51;

  /// @brief Field _activeLocalPlayerControllerPrefab, offset 0x18, size 0x8
  __declspec(property(get = __get__activeLocalPlayerControllerPrefab,
                      put = __set__activeLocalPlayerControllerPrefab))::GlobalNamespace::MultiplayerLocalActivePlayerFacade* _activeLocalPlayerControllerPrefab;

  /// @brief Field _activeLocalPlayerDuelControllerPrefab, offset 0x20, size 0x8
  __declspec(property(get = __get__activeLocalPlayerDuelControllerPrefab,
                      put = __set__activeLocalPlayerDuelControllerPrefab))::GlobalNamespace::MultiplayerLocalActivePlayerFacade* _activeLocalPlayerDuelControllerPrefab;

  /// @brief Field _inactiveLocalPlayerControllerPrefab, offset 0x28, size 0x8
  __declspec(property(get = __get__inactiveLocalPlayerControllerPrefab,
                      put = __set__inactiveLocalPlayerControllerPrefab))::GlobalNamespace::MultiplayerLocalInactivePlayerFacade* _inactiveLocalPlayerControllerPrefab;

  /// @brief Field _connectedPlayerControllerPrefab, offset 0x30, size 0x8
  __declspec(property(get = __get__connectedPlayerControllerPrefab, put = __set__connectedPlayerControllerPrefab))::GlobalNamespace::MultiplayerConnectedPlayerFacade* _connectedPlayerControllerPrefab;

  /// @brief Field _connectedPlayerDuelControllerPrefab, offset 0x38, size 0x8
  __declspec(property(get = __get__connectedPlayerDuelControllerPrefab,
                      put = __set__connectedPlayerDuelControllerPrefab))::GlobalNamespace::MultiplayerConnectedPlayerFacade* _connectedPlayerDuelControllerPrefab;

  /// @brief Field _multiplayerSessionManager, offset 0x40, size 0x8
  __declspec(property(get = __get__multiplayerSessionManager, put = __set__multiplayerSessionManager))::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field _beatmapObjectSpawnCenter, offset 0x48, size 0x8
  __declspec(property(get = __get__beatmapObjectSpawnCenter, put = __set__beatmapObjectSpawnCenter))::GlobalNamespace::BeatmapObjectSpawnCenter* _beatmapObjectSpawnCenter;

  /// @brief Field _layoutProvider, offset 0x50, size 0x8
  __declspec(property(get = __get__layoutProvider, put = __set__layoutProvider))::GlobalNamespace::MultiplayerLayoutProvider* _layoutProvider;

  /// @brief Field _fadeInOutController, offset 0x58, size 0x8
  __declspec(property(get = __get__fadeInOutController, put = __set__fadeInOutController))::GlobalNamespace::FadeInOutController* _fadeInOutController;

  /// @brief Field _container, offset 0x60, size 0x8
  __declspec(property(get = __get__container, put = __set__container))::Zenject::DiContainer* _container;

  /// @brief Field <playerSpawningFinished>k__BackingField, offset 0x68, size 0x1
  __declspec(property(get = __get__playerSpawningFinished_k__BackingField, put = __set__playerSpawningFinished_k__BackingField)) bool _playerSpawningFinished_k__BackingField;

  /// @brief Field playerSpawningDidFinishEvent, offset 0x70, size 0x8
  __declspec(property(get = __get_playerSpawningDidFinishEvent, put = __set_playerSpawningDidFinishEvent))::System::Action* playerSpawningDidFinishEvent;

  /// @brief Field didSwitchPlayerToInactiveEvent, offset 0x78, size 0x8
  __declspec(property(get = __get_didSwitchPlayerToInactiveEvent, put = __set_didSwitchPlayerToInactiveEvent))::System::Action* didSwitchPlayerToInactiveEvent;

  /// @brief Field playerDidFinishEvent, offset 0x80, size 0x8
  __declspec(property(get = __get_playerDidFinishEvent, put = __set_playerDidFinishEvent))::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* playerDidFinishEvent;

  /// @brief Field playerNetworkDidFailedEvent, offset 0x88, size 0x8
  __declspec(property(get = __get_playerNetworkDidFailedEvent,
                      put = __set_playerNetworkDidFailedEvent))::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* playerNetworkDidFailedEvent;

  /// @brief Field _activeLocalPlayerFacade, offset 0x90, size 0x8
  __declspec(property(get = __get__activeLocalPlayerFacade, put = __set__activeLocalPlayerFacade))::GlobalNamespace::MultiplayerLocalActivePlayerFacade* _activeLocalPlayerFacade;

  /// @brief Field _inactiveLocalPlayerFacade, offset 0x98, size 0x8
  __declspec(property(get = __get__inactiveLocalPlayerFacade, put = __set__inactiveLocalPlayerFacade))::GlobalNamespace::MultiplayerLocalInactivePlayerFacade* _inactiveLocalPlayerFacade;

  /// @brief Field _currentEventsPublisher, offset 0xa0, size 0x8
  __declspec(property(get = __get__currentEventsPublisher, put = __set__currentEventsPublisher))::GlobalNamespace::IMultiplayerLevelEndActionsPublisher* _currentEventsPublisher;

  /// @brief Field _currentStartSeekSongControllerProvider, offset 0xa8, size 0x8
  __declspec(property(get = __get__currentStartSeekSongControllerProvider,
                      put = __set__currentStartSeekSongControllerProvider))::GlobalNamespace::IStartSeekSongControllerProvider* _currentStartSeekSongControllerProvider;

  /// @brief Field _activeLocalPlayerFactory, offset 0xb0, size 0x8
  __declspec(property(get = __get__activeLocalPlayerFactory, put = __set__activeLocalPlayerFactory))::GlobalNamespace::__MultiplayerLocalActivePlayerFacade__Factory* _activeLocalPlayerFactory;

  /// @brief Field _inactiveLocalPlayerFactory, offset 0xb8, size 0x8
  __declspec(property(get = __get__inactiveLocalPlayerFactory, put = __set__inactiveLocalPlayerFactory))::GlobalNamespace::__MultiplayerLocalInactivePlayerFacade__Factory* _inactiveLocalPlayerFactory;

  /// @brief Field _connectedPlayerFactory, offset 0xc0, size 0x8
  __declspec(property(get = __get__connectedPlayerFactory, put = __set__connectedPlayerFactory))::GlobalNamespace::__MultiplayerConnectedPlayerFacade__Factory* _connectedPlayerFactory;

  /// @brief Field _connectedPlayerControllersMap, offset 0xc8, size 0x8
  __declspec(property(
      get = __get__connectedPlayerControllersMap,
      put = __set__connectedPlayerControllersMap))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerConnectedPlayerFacade*>* _connectedPlayerControllersMap;

  /// @brief Field _connectedPlayerCenterFacingRotationsMap, offset 0xd0, size 0x8
  __declspec(property(get = __get__connectedPlayerCenterFacingRotationsMap,
                      put = __set__connectedPlayerCenterFacingRotationsMap))::System::Collections::Generic::Dictionary_2<::StringW, float_t>* _connectedPlayerCenterFacingRotationsMap;

  /// @brief Field _allActiveAtGameStartPlayers, offset 0xd8, size 0x8
  __declspec(property(get = __get__allActiveAtGameStartPlayers,
                      put = __set__allActiveAtGameStartPlayers))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>* _allActiveAtGameStartPlayers;

  __declspec(property(get = get_playerSpawningFinished, put = set_playerSpawningFinished)) bool playerSpawningFinished;

  __declspec(property(get = get_allActiveAtGameStartPlayers))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>* allActiveAtGameStartPlayers;

  __declspec(property(get = get_localPlayerStartSeekSongController))::GlobalNamespace::IStartSeekSongControllerProvider* localPlayerStartSeekSongController;

  __declspec(property(get = get_activeLocalPlayerFacade))::GlobalNamespace::MultiplayerLocalActivePlayerFacade* activeLocalPlayerFacade;

  __declspec(property(get = get_inactivePlayerFacade))::GlobalNamespace::MultiplayerLocalInactivePlayerFacade* inactivePlayerFacade;

  __declspec(property(get = get_localPlayerTransform))::UnityEngine::Transform* localPlayerTransform;

  /// @brief Convert operator to "::GlobalNamespace::IMultiplayerLevelEndActionsPublisher"
  constexpr operator ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*() noexcept;

  constexpr ::GlobalNamespace::MultiplayerLocalActivePlayerFacade*& __get__activeLocalPlayerControllerPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*> const& __get__activeLocalPlayerControllerPrefab() const;

  constexpr void __set__activeLocalPlayerControllerPrefab(::GlobalNamespace::MultiplayerLocalActivePlayerFacade* value);

  constexpr ::GlobalNamespace::MultiplayerLocalActivePlayerFacade*& __get__activeLocalPlayerDuelControllerPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*> const& __get__activeLocalPlayerDuelControllerPrefab() const;

  constexpr void __set__activeLocalPlayerDuelControllerPrefab(::GlobalNamespace::MultiplayerLocalActivePlayerFacade* value);

  constexpr ::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*& __get__inactiveLocalPlayerControllerPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*> const& __get__inactiveLocalPlayerControllerPrefab() const;

  constexpr void __set__inactiveLocalPlayerControllerPrefab(::GlobalNamespace::MultiplayerLocalInactivePlayerFacade* value);

  constexpr ::GlobalNamespace::MultiplayerConnectedPlayerFacade*& __get__connectedPlayerControllerPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerConnectedPlayerFacade*> const& __get__connectedPlayerControllerPrefab() const;

  constexpr void __set__connectedPlayerControllerPrefab(::GlobalNamespace::MultiplayerConnectedPlayerFacade* value);

  constexpr ::GlobalNamespace::MultiplayerConnectedPlayerFacade*& __get__connectedPlayerDuelControllerPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerConnectedPlayerFacade*> const& __get__connectedPlayerDuelControllerPrefab() const;

  constexpr void __set__connectedPlayerDuelControllerPrefab(::GlobalNamespace::MultiplayerConnectedPlayerFacade* value);

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __get__multiplayerSessionManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const& __get__multiplayerSessionManager() const;

  constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr ::GlobalNamespace::BeatmapObjectSpawnCenter*& __get__beatmapObjectSpawnCenter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectSpawnCenter*> const& __get__beatmapObjectSpawnCenter() const;

  constexpr void __set__beatmapObjectSpawnCenter(::GlobalNamespace::BeatmapObjectSpawnCenter* value);

  constexpr ::GlobalNamespace::MultiplayerLayoutProvider*& __get__layoutProvider();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLayoutProvider*> const& __get__layoutProvider() const;

  constexpr void __set__layoutProvider(::GlobalNamespace::MultiplayerLayoutProvider* value);

  constexpr ::GlobalNamespace::FadeInOutController*& __get__fadeInOutController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FadeInOutController*> const& __get__fadeInOutController() const;

  constexpr void __set__fadeInOutController(::GlobalNamespace::FadeInOutController* value);

  constexpr ::Zenject::DiContainer*& __get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get__container() const;

  constexpr void __set__container(::Zenject::DiContainer* value);

  constexpr bool& __get__playerSpawningFinished_k__BackingField();

  constexpr bool const& __get__playerSpawningFinished_k__BackingField() const;

  constexpr void __set__playerSpawningFinished_k__BackingField(bool value);

  constexpr ::System::Action*& __get_playerSpawningDidFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_playerSpawningDidFinishEvent() const;

  constexpr void __set_playerSpawningDidFinishEvent(::System::Action* value);

  constexpr ::System::Action*& __get_didSwitchPlayerToInactiveEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_didSwitchPlayerToInactiveEvent() const;

  constexpr void __set_didSwitchPlayerToInactiveEvent(::System::Action* value);

  constexpr ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*& __get_playerDidFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*> const& __get_playerDidFinishEvent() const;

  constexpr void __set_playerDidFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);

  constexpr ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*& __get_playerNetworkDidFailedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*> const& __get_playerNetworkDidFailedEvent() const;

  constexpr void __set_playerNetworkDidFailedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);

  constexpr ::GlobalNamespace::MultiplayerLocalActivePlayerFacade*& __get__activeLocalPlayerFacade();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*> const& __get__activeLocalPlayerFacade() const;

  constexpr void __set__activeLocalPlayerFacade(::GlobalNamespace::MultiplayerLocalActivePlayerFacade* value);

  constexpr ::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*& __get__inactiveLocalPlayerFacade();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*> const& __get__inactiveLocalPlayerFacade() const;

  constexpr void __set__inactiveLocalPlayerFacade(::GlobalNamespace::MultiplayerLocalInactivePlayerFacade* value);

  constexpr ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*& __get__currentEventsPublisher();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*> const& __get__currentEventsPublisher() const;

  constexpr void __set__currentEventsPublisher(::GlobalNamespace::IMultiplayerLevelEndActionsPublisher* value);

  constexpr ::GlobalNamespace::IStartSeekSongControllerProvider*& __get__currentStartSeekSongControllerProvider();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IStartSeekSongControllerProvider*> const& __get__currentStartSeekSongControllerProvider() const;

  constexpr void __set__currentStartSeekSongControllerProvider(::GlobalNamespace::IStartSeekSongControllerProvider* value);

  constexpr ::GlobalNamespace::__MultiplayerLocalActivePlayerFacade__Factory*& __get__activeLocalPlayerFactory();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MultiplayerLocalActivePlayerFacade__Factory*> const& __get__activeLocalPlayerFactory() const;

  constexpr void __set__activeLocalPlayerFactory(::GlobalNamespace::__MultiplayerLocalActivePlayerFacade__Factory* value);

  constexpr ::GlobalNamespace::__MultiplayerLocalInactivePlayerFacade__Factory*& __get__inactiveLocalPlayerFactory();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MultiplayerLocalInactivePlayerFacade__Factory*> const& __get__inactiveLocalPlayerFactory() const;

  constexpr void __set__inactiveLocalPlayerFactory(::GlobalNamespace::__MultiplayerLocalInactivePlayerFacade__Factory* value);

  constexpr ::GlobalNamespace::__MultiplayerConnectedPlayerFacade__Factory*& __get__connectedPlayerFactory();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MultiplayerConnectedPlayerFacade__Factory*> const& __get__connectedPlayerFactory() const;

  constexpr void __set__connectedPlayerFactory(::GlobalNamespace::__MultiplayerConnectedPlayerFacade__Factory* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerConnectedPlayerFacade*>*& __get__connectedPlayerControllersMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerConnectedPlayerFacade*>*> const&
  __get__connectedPlayerControllersMap() const;

  constexpr void __set__connectedPlayerControllersMap(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerConnectedPlayerFacade*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, float_t>*& __get__connectedPlayerCenterFacingRotationsMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, float_t>*> const& __get__connectedPlayerCenterFacingRotationsMap() const;

  constexpr void __set__connectedPlayerCenterFacingRotationsMap(::System::Collections::Generic::Dictionary_2<::StringW, float_t>* value);

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>*& __get__allActiveAtGameStartPlayers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>*> const& __get__allActiveAtGameStartPlayers() const;

  constexpr void __set__allActiveAtGameStartPlayers(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method get_playerSpawningFinished, addr 0x2256c04, size 0x8, virtual false, abstract: false, final false
  inline bool get_playerSpawningFinished();

  /// @brief Method set_playerSpawningFinished, addr 0x2256c0c, size 0xc, virtual false, abstract: false, final false
  inline void set_playerSpawningFinished(bool value);

  /// @brief Method get_allActiveAtGameStartPlayers, addr 0x2256c18, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>* get_allActiveAtGameStartPlayers();

  /// @brief Method get_localPlayerStartSeekSongController, addr 0x2256c20, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IStartSeekSongControllerProvider* get_localPlayerStartSeekSongController();

  /// @brief Method get_activeLocalPlayerFacade, addr 0x2256c28, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MultiplayerLocalActivePlayerFacade* get_activeLocalPlayerFacade();

  /// @brief Method get_inactivePlayerFacade, addr 0x2256c30, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MultiplayerLocalInactivePlayerFacade* get_inactivePlayerFacade();

  /// @brief Method get_localPlayerTransform, addr 0x2252da4, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Transform* get_localPlayerTransform();

  /// @brief Method add_playerSpawningDidFinishEvent, addr 0x2253eb8, size 0x9c, virtual false, abstract: false, final false
  inline void add_playerSpawningDidFinishEvent(::System::Action* value);

  /// @brief Method remove_playerSpawningDidFinishEvent, addr 0x22547c8, size 0x9c, virtual false, abstract: false, final false
  inline void remove_playerSpawningDidFinishEvent(::System::Action* value);

  /// @brief Method add_didSwitchPlayerToInactiveEvent, addr 0x224b1b8, size 0x9c, virtual false, abstract: false, final false
  inline void add_didSwitchPlayerToInactiveEvent(::System::Action* value);

  /// @brief Method remove_didSwitchPlayerToInactiveEvent, addr 0x224749c, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didSwitchPlayerToInactiveEvent(::System::Action* value);

  /// @brief Method add_playerDidFinishEvent, addr 0x2256c38, size 0xb0, virtual true, abstract: false, final true
  inline void add_playerDidFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);

  /// @brief Method remove_playerDidFinishEvent, addr 0x2256ce8, size 0xb0, virtual true, abstract: false, final true
  inline void remove_playerDidFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);

  /// @brief Method add_playerNetworkDidFailedEvent, addr 0x2256d98, size 0xb0, virtual true, abstract: false, final true
  inline void add_playerNetworkDidFailedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);

  /// @brief Method remove_playerNetworkDidFailedEvent, addr 0x2256e48, size 0xb0, virtual true, abstract: false, final true
  inline void remove_playerNetworkDidFailedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);

  /// @brief Method SpawnPlayers, addr 0x224a870, size 0x948, virtual false, abstract: false, final false
  inline void SpawnPlayers(::GlobalNamespace::MultiplayerPlayerStartState localPlayerStartState,
                           ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>* allActiveAtGameStartPlayers);

  /// @brief Method TryGetConnectedPlayerController, addr 0x2249b4c, size 0x68, virtual false, abstract: false, final false
  inline bool TryGetConnectedPlayerController(::StringW userId, ByRef<::GlobalNamespace::MultiplayerConnectedPlayerFacade*> connectedPlayerController);

  /// @brief Method TryGetConnectedCenterFacingRotation, addr 0x2257130, size 0x68, virtual false, abstract: false, final false
  inline bool TryGetConnectedCenterFacingRotation(::StringW userId, ByRef<float_t> centerFacingRotation);

  /// @brief Method SwitchLocalPlayerToInactive, addr 0x2257198, size 0x20, virtual false, abstract: false, final false
  inline void SwitchLocalPlayerToInactive();

  /// @brief Method ReportLocalPlayerNetworkDidFailed, addr 0x2248254, size 0x1c, virtual false, abstract: false, final false
  inline void ReportLocalPlayerNetworkDidFailed(::GlobalNamespace::MultiplayerLevelCompletionResults* levelCompletionResults);

  /// @brief Method SwitchLocalPlayerToInactiveCoroutine, addr 0x22571b8, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* SwitchLocalPlayerToInactiveCoroutine();

  /// @brief Method BindPlayerFactories, addr 0x2256ef8, size 0x238, virtual false, abstract: false, final false
  inline void BindPlayerFactories(::GlobalNamespace::MultiplayerPlayerLayout layout);

  /// @brief Method HandlePlayerDidFinish, addr 0x2257248, size 0x1c, virtual false, abstract: false, final false
  inline void HandlePlayerDidFinish(::GlobalNamespace::MultiplayerLevelCompletionResults* levelCompletionResults);

  /// @brief Method HandlePlayerNetworkDidFailed, addr 0x2257264, size 0x1c, virtual false, abstract: false, final false
  inline void HandlePlayerNetworkDidFailed(::GlobalNamespace::MultiplayerLevelCompletionResults* levelCompletionResults);

  static inline ::GlobalNamespace::MultiplayerPlayersManager* New_ctor();

  /// @brief Method .ctor, addr 0x2257280, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerPlayersManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerPlayersManager(MultiplayerPlayersManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerPlayersManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerPlayersManager(MultiplayerPlayersManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerPlayersManager();

public:
  /// @brief Field _activeLocalPlayerControllerPrefab, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLocalActivePlayerFacade* ____activeLocalPlayerControllerPrefab;

  /// @brief Field _activeLocalPlayerDuelControllerPrefab, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLocalActivePlayerFacade* ____activeLocalPlayerDuelControllerPrefab;

  /// @brief Field _inactiveLocalPlayerControllerPrefab, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLocalInactivePlayerFacade* ____inactiveLocalPlayerControllerPrefab;

  /// @brief Field _connectedPlayerControllerPrefab, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerConnectedPlayerFacade* ____connectedPlayerControllerPrefab;

  /// @brief Field _connectedPlayerDuelControllerPrefab, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerConnectedPlayerFacade* ____connectedPlayerDuelControllerPrefab;

  /// @brief Field _multiplayerSessionManager, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field _beatmapObjectSpawnCenter, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectSpawnCenter* ____beatmapObjectSpawnCenter;

  /// @brief Field _layoutProvider, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLayoutProvider* ____layoutProvider;

  /// @brief Field _fadeInOutController, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::FadeInOutController* ____fadeInOutController;

  /// @brief Field _container, offset: 0x60, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field <playerSpawningFinished>k__BackingField, offset: 0x68, size: 0x1, def value: None
  bool ____playerSpawningFinished_k__BackingField;

  /// @brief Field playerSpawningDidFinishEvent, offset: 0x70, size: 0x8, def value: None
  ::System::Action* ___playerSpawningDidFinishEvent;

  /// @brief Field didSwitchPlayerToInactiveEvent, offset: 0x78, size: 0x8, def value: None
  ::System::Action* ___didSwitchPlayerToInactiveEvent;

  /// @brief Field playerDidFinishEvent, offset: 0x80, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* ___playerDidFinishEvent;

  /// @brief Field playerNetworkDidFailedEvent, offset: 0x88, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* ___playerNetworkDidFailedEvent;

  /// @brief Field _activeLocalPlayerFacade, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLocalActivePlayerFacade* ____activeLocalPlayerFacade;

  /// @brief Field _inactiveLocalPlayerFacade, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLocalInactivePlayerFacade* ____inactiveLocalPlayerFacade;

  /// @brief Field _currentEventsPublisher, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher* ____currentEventsPublisher;

  /// @brief Field _currentStartSeekSongControllerProvider, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::IStartSeekSongControllerProvider* ____currentStartSeekSongControllerProvider;

  /// @brief Field _activeLocalPlayerFactory, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::__MultiplayerLocalActivePlayerFacade__Factory* ____activeLocalPlayerFactory;

  /// @brief Field _inactiveLocalPlayerFactory, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::__MultiplayerLocalInactivePlayerFacade__Factory* ____inactiveLocalPlayerFactory;

  /// @brief Field _connectedPlayerFactory, offset: 0xc0, size: 0x8, def value: None
  ::GlobalNamespace::__MultiplayerConnectedPlayerFacade__Factory* ____connectedPlayerFactory;

  /// @brief Field _connectedPlayerControllersMap, offset: 0xc8, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerConnectedPlayerFacade*>* ____connectedPlayerControllersMap;

  /// @brief Field _connectedPlayerCenterFacingRotationsMap, offset: 0xd0, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, float_t>* ____connectedPlayerCenterFacingRotationsMap;

  /// @brief Field _allActiveAtGameStartPlayers, offset: 0xd8, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>* ____allActiveAtGameStartPlayers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerPlayersManager, 0xe0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager, ____activeLocalPlayerControllerPrefab) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager, ____activeLocalPlayerDuelControllerPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager, ____inactiveLocalPlayerControllerPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager, ____connectedPlayerControllerPrefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager, ____connectedPlayerDuelControllerPrefab) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager, ____multiplayerSessionManager) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager, ____beatmapObjectSpawnCenter) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager, ____layoutProvider) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager, ____fadeInOutController) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager, ____container) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager, ____playerSpawningFinished_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager, ___playerSpawningDidFinishEvent) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager, ___didSwitchPlayerToInactiveEvent) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager, ___playerDidFinishEvent) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager, ___playerNetworkDidFailedEvent) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager, ____activeLocalPlayerFacade) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager, ____inactiveLocalPlayerFacade) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager, ____currentEventsPublisher) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager, ____currentStartSeekSongControllerProvider) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager, ____activeLocalPlayerFactory) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager, ____inactiveLocalPlayerFactory) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager, ____connectedPlayerFactory) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager, ____connectedPlayerControllersMap) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager, ____connectedPlayerCenterFacingRotationsMap) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayersManager, ____allActiveAtGameStartPlayers) == 0xd8, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerPlayersManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerPlayersManager*, "", "MultiplayerPlayersManager");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerPlayersManager___SwitchLocalPlayerToInactiveCoroutine_d__51);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerPlayersManager___SwitchLocalPlayerToInactiveCoroutine_d__51*, "", "MultiplayerPlayersManager/<SwitchLocalPlayerToInactiveCoroutine>d__51");
