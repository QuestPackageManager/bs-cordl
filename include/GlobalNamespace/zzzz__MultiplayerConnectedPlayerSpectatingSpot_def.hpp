#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerConnectedPlayerSpectatingSpot.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MultiplayerConnectedPlayerSpectatingSpot)
namespace GlobalNamespace {
class IBeatSaberConnectedPlayer;
}
namespace GlobalNamespace {
class IBeatSaberMultiplayerSessionManager;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class IMultiplayerObservable;
}
namespace GlobalNamespace {
class IMultiplayerSpectatingSpot;
}
namespace GlobalNamespace {
class MultiplayerSpectatingSpotManager;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerConnectedPlayerSpectatingSpot;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerConnectedPlayerSpectatingSpot
class CORDL_TYPE MultiplayerConnectedPlayerSpectatingSpot : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _connectedPlayer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__connectedPlayer, put = __cordl_internal_set__connectedPlayer)) ::GlobalNamespace::IBeatSaberConnectedPlayer* _connectedPlayer;

  /// @brief Field _multiplayerSessionManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionManager,
                      put = __cordl_internal_set__multiplayerSessionManager)) ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field <observable>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__observable_k__BackingField,
                      put = __cordl_internal_set__observable_k__BackingField)) ::GlobalNamespace::IMultiplayerObservable* _observable_k__BackingField;

  /// @brief Field _playerFailed, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__playerFailed, put = __cordl_internal_set__playerFailed)) bool _playerFailed;

  /// @brief Field _spectatingSpotManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__spectatingSpotManager,
                      put = __cordl_internal_set__spectatingSpotManager)) ::GlobalNamespace::MultiplayerSpectatingSpotManager* _spectatingSpotManager;

  /// @brief Field hasBeenRemovedEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_hasBeenRemovedEvent,
                      put = __cordl_internal_set_hasBeenRemovedEvent)) ::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* hasBeenRemovedEvent;

  __declspec(property(get = get_isMain)) bool isMain;

  /// @brief Field isObservedChangedEvent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_isObservedChangedEvent, put = __cordl_internal_set_isObservedChangedEvent)) ::System::Action_1<bool>* isObservedChangedEvent;

  __declspec(property(get = get_observable, put = set_observable)) ::GlobalNamespace::IMultiplayerObservable* observable;

  __declspec(property(get = get_spotName)) ::StringW spotName;

  /// @brief Convert operator to "::GlobalNamespace::IMultiplayerSpectatingSpot"
  constexpr operator ::GlobalNamespace::IMultiplayerSpectatingSpot*() noexcept;

  /// @brief Method HandlePlayerDisconnected, addr 0x583e37c, size 0x4, virtual false, abstract: false, final false
  inline void HandlePlayerDisconnected(::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  /// @brief Method HandlePlayerStateChanged, addr 0x583e378, size 0x4, virtual false, abstract: false, final false
  inline void HandlePlayerStateChanged(::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  /// @brief Method IMultiplayerSpectatingSpot.get_transform, addr 0x583e384, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::Transform> IMultiplayerSpectatingSpot_get_transform();

  static inline ::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot* New_ctor();

  /// @brief Method OnDestroy, addr 0x583e038, size 0x1ac, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method ReloadBasedOnPlayerCurrentState, addr 0x583e204, size 0x174, virtual false, abstract: false, final false
  inline void ReloadBasedOnPlayerCurrentState(::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  /// @brief Method SetIsObserved, addr 0x583e1e4, size 0x20, virtual true, abstract: false, final true
  inline void SetIsObserved(bool isObserved);

  /// @brief Method Start, addr 0x583dcd0, size 0x1f4, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer* const& __cordl_internal_get__connectedPlayer() const;

  constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer*& __cordl_internal_get__connectedPlayer();

  constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* const& __cordl_internal_get__multiplayerSessionManager() const;

  constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager*& __cordl_internal_get__multiplayerSessionManager();

  constexpr ::GlobalNamespace::IMultiplayerObservable* const& __cordl_internal_get__observable_k__BackingField() const;

  constexpr ::GlobalNamespace::IMultiplayerObservable*& __cordl_internal_get__observable_k__BackingField();

  constexpr bool const& __cordl_internal_get__playerFailed() const;

  constexpr bool& __cordl_internal_get__playerFailed();

  constexpr ::GlobalNamespace::MultiplayerSpectatingSpotManager* const& __cordl_internal_get__spectatingSpotManager() const;

  constexpr ::GlobalNamespace::MultiplayerSpectatingSpotManager*& __cordl_internal_get__spectatingSpotManager();

  constexpr ::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* const& __cordl_internal_get_hasBeenRemovedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>*& __cordl_internal_get_hasBeenRemovedEvent();

  constexpr ::System::Action_1<bool>* const& __cordl_internal_get_isObservedChangedEvent() const;

  constexpr ::System::Action_1<bool>*& __cordl_internal_get_isObservedChangedEvent();

  constexpr void __cordl_internal_set__connectedPlayer(::GlobalNamespace::IBeatSaberConnectedPlayer* value);

  constexpr void __cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* value);

  constexpr void __cordl_internal_set__observable_k__BackingField(::GlobalNamespace::IMultiplayerObservable* value);

  constexpr void __cordl_internal_set__playerFailed(bool value);

  constexpr void __cordl_internal_set__spectatingSpotManager(::GlobalNamespace::MultiplayerSpectatingSpotManager* value);

  constexpr void __cordl_internal_set_hasBeenRemovedEvent(::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* value);

  constexpr void __cordl_internal_set_isObservedChangedEvent(::System::Action_1<bool>* value);

  /// @brief Method .ctor, addr 0x583e380, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_hasBeenRemovedEvent, addr 0x583d910, size 0xc0, virtual true, abstract: false, final true
  inline void add_hasBeenRemovedEvent(::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* value);

  /// @brief Method add_isObservedChangedEvent, addr 0x583da90, size 0xc0, virtual false, abstract: false, final false
  inline void add_isObservedChangedEvent(::System::Action_1<bool>* value);

  /// @brief Method get_isMain, addr 0x583dcc8, size 0x8, virtual true, abstract: false, final true
  inline bool get_isMain();

  /// @brief Method get_observable, addr 0x583dc10, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::IMultiplayerObservable* get_observable();

  /// @brief Method get_spotName, addr 0x583dc20, size 0xa8, virtual true, abstract: false, final true
  inline ::StringW get_spotName();

  /// @brief Convert to "::GlobalNamespace::IMultiplayerSpectatingSpot"
  constexpr ::GlobalNamespace::IMultiplayerSpectatingSpot* i___GlobalNamespace__IMultiplayerSpectatingSpot() noexcept;

  /// @brief Method remove_hasBeenRemovedEvent, addr 0x583d9d0, size 0xc0, virtual true, abstract: false, final true
  inline void remove_hasBeenRemovedEvent(::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* value);

  /// @brief Method remove_isObservedChangedEvent, addr 0x583db50, size 0xc0, virtual false, abstract: false, final false
  inline void remove_isObservedChangedEvent(::System::Action_1<bool>* value);

  /// @brief Method set_observable, addr 0x583dc18, size 0x8, virtual false, abstract: false, final false
  inline void set_observable(::GlobalNamespace::IMultiplayerObservable* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerConnectedPlayerSpectatingSpot();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerSpectatingSpot", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerConnectedPlayerSpectatingSpot(MultiplayerConnectedPlayerSpectatingSpot&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerSpectatingSpot", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerConnectedPlayerSpectatingSpot(MultiplayerConnectedPlayerSpectatingSpot const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6202 };

  /// @brief Field _connectedPlayer, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IBeatSaberConnectedPlayer* ____connectedPlayer;

  /// @brief Field _multiplayerSessionManager, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field _spectatingSpotManager, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerSpectatingSpotManager* ____spectatingSpotManager;

  /// @brief Field hasBeenRemovedEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* ___hasBeenRemovedEvent;

  /// @brief Field isObservedChangedEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action_1<bool>* ___isObservedChangedEvent;

  /// @brief Field <observable>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerObservable* ____observable_k__BackingField;

  /// @brief Field _playerFailed, offset: 0x50, size: 0x1, def value: None
  bool ____playerFailed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot, ____connectedPlayer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot, ____multiplayerSessionManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot, ____spectatingSpotManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot, ___hasBeenRemovedEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot, ___isObservedChangedEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot, ____observable_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot, ____playerFailed) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*, "", "MultiplayerConnectedPlayerSpectatingSpot");
