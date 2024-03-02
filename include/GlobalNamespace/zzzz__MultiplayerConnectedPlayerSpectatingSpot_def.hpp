#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MultiplayerConnectedPlayerSpectatingSpot)
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class IMultiplayerObservable;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
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
// Type: ::MultiplayerConnectedPlayerSpectatingSpot
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 73, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerConnectedPlayerSpectatingSpot*
class CORDL_TYPE MultiplayerConnectedPlayerSpectatingSpot : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _connectedPlayer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__connectedPlayer, put = __cordl_internal_set__connectedPlayer))::GlobalNamespace::IConnectedPlayer* _connectedPlayer;

  /// @brief Field _multiplayerSessionManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionManager,
                      put = __cordl_internal_set__multiplayerSessionManager))::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field <observable>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__observable_k__BackingField,
                      put = __cordl_internal_set__observable_k__BackingField))::GlobalNamespace::IMultiplayerObservable* _observable_k__BackingField;

  /// @brief Field _playerFailed, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__playerFailed, put = __cordl_internal_set__playerFailed)) bool _playerFailed;

  /// @brief Field _spectatingSpotManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__spectatingSpotManager, put = __cordl_internal_set__spectatingSpotManager))::GlobalNamespace::MultiplayerSpectatingSpotManager* _spectatingSpotManager;

  /// @brief Field hasBeenRemovedEvent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_hasBeenRemovedEvent,
                      put = __cordl_internal_set_hasBeenRemovedEvent))::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* hasBeenRemovedEvent;

  __declspec(property(get = get_isMain)) bool isMain;

  /// @brief Field isObservedChangedEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_isObservedChangedEvent, put = __cordl_internal_set_isObservedChangedEvent))::System::Action_1<bool>* isObservedChangedEvent;

  __declspec(property(get = get_observable, put = set_observable))::GlobalNamespace::IMultiplayerObservable* observable;

  __declspec(property(get = get_spotName))::StringW spotName;

  /// @brief Convert operator to "::GlobalNamespace::IMultiplayerSpectatingSpot"
  constexpr operator ::GlobalNamespace::IMultiplayerSpectatingSpot*() noexcept;

  /// @brief Method HandlePlayerDisconnected, addr 0x248a800, size 0x4, virtual false, abstract: false, final false
  inline void HandlePlayerDisconnected(::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  /// @brief Method HandlePlayerStateChanged, addr 0x248a7fc, size 0x4, virtual false, abstract: false, final false
  inline void HandlePlayerStateChanged(::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  /// @brief Method IMultiplayerSpectatingSpot.get_transform, addr 0x248a80c, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::Transform> IMultiplayerSpectatingSpot_get_transform();

  static inline ::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot* New_ctor();

  /// @brief Method OnDestroy, addr 0x248a4c4, size 0x1a4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method ReloadBasedOnPlayerCurrentState, addr 0x248a688, size 0x174, virtual false, abstract: false, final false
  inline void ReloadBasedOnPlayerCurrentState(::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  /// @brief Method SetIsObserved, addr 0x248a668, size 0x20, virtual true, abstract: false, final true
  inline void SetIsObserved(bool isObserved);

  /// @brief Method Start, addr 0x248a16c, size 0x1f4, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::IConnectedPlayer*& __cordl_internal_get__connectedPlayer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> const& __cordl_internal_get__connectedPlayer() const;

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __cordl_internal_get__multiplayerSessionManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const& __cordl_internal_get__multiplayerSessionManager() const;

  constexpr ::GlobalNamespace::IMultiplayerObservable*& __cordl_internal_get__observable_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerObservable*> const& __cordl_internal_get__observable_k__BackingField() const;

  constexpr bool const& __cordl_internal_get__playerFailed() const;

  constexpr bool& __cordl_internal_get__playerFailed();

  constexpr ::GlobalNamespace::MultiplayerSpectatingSpotManager*& __cordl_internal_get__spectatingSpotManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerSpectatingSpotManager*> const& __cordl_internal_get__spectatingSpotManager() const;

  constexpr ::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>*& __cordl_internal_get_hasBeenRemovedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>*> const& __cordl_internal_get_hasBeenRemovedEvent() const;

  constexpr ::System::Action_1<bool>*& __cordl_internal_get_isObservedChangedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<bool>*> const& __cordl_internal_get_isObservedChangedEvent() const;

  constexpr void __cordl_internal_set__connectedPlayer(::GlobalNamespace::IConnectedPlayer* value);

  constexpr void __cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr void __cordl_internal_set__observable_k__BackingField(::GlobalNamespace::IMultiplayerObservable* value);

  constexpr void __cordl_internal_set__playerFailed(bool value);

  constexpr void __cordl_internal_set__spectatingSpotManager(::GlobalNamespace::MultiplayerSpectatingSpotManager* value);

  constexpr void __cordl_internal_set_hasBeenRemovedEvent(::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* value);

  constexpr void __cordl_internal_set_isObservedChangedEvent(::System::Action_1<bool>* value);

  /// @brief Method .ctor, addr 0x248a804, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_hasBeenRemovedEvent, addr 0x2489df0, size 0xb0, virtual true, abstract: false, final true
  inline void add_hasBeenRemovedEvent(::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* value);

  /// @brief Method add_isObservedChangedEvent, addr 0x2489f50, size 0xb0, virtual false, abstract: false, final false
  inline void add_isObservedChangedEvent(::System::Action_1<bool>* value);

  /// @brief Method get_isMain, addr 0x248a164, size 0x8, virtual true, abstract: false, final true
  inline bool get_isMain();

  /// @brief Method get_observable, addr 0x248a0b0, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::IMultiplayerObservable* get_observable();

  /// @brief Method get_spotName, addr 0x248a0c0, size 0xa4, virtual true, abstract: false, final true
  inline ::StringW get_spotName();

  /// @brief Convert to "::GlobalNamespace::IMultiplayerSpectatingSpot"
  constexpr ::GlobalNamespace::IMultiplayerSpectatingSpot* i___GlobalNamespace__IMultiplayerSpectatingSpot() noexcept;

  /// @brief Method remove_hasBeenRemovedEvent, addr 0x2489ea0, size 0xb0, virtual true, abstract: false, final true
  inline void remove_hasBeenRemovedEvent(::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* value);

  /// @brief Method remove_isObservedChangedEvent, addr 0x248a000, size 0xb0, virtual false, abstract: false, final false
  inline void remove_isObservedChangedEvent(::System::Action_1<bool>* value);

  /// @brief Method set_observable, addr 0x248a0b8, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _connectedPlayer, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayer* ____connectedPlayer;

  /// @brief Field _multiplayerSessionManager, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field _spectatingSpotManager, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerSpectatingSpotManager* ____spectatingSpotManager;

  /// @brief Field hasBeenRemovedEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* ___hasBeenRemovedEvent;

  /// @brief Field isObservedChangedEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<bool>* ___isObservedChangedEvent;

  /// @brief Field <observable>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerObservable* ____observable_k__BackingField;

  /// @brief Field _playerFailed, offset: 0x48, size: 0x1, def value: None
  bool ____playerFailed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot, ____connectedPlayer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot, ____multiplayerSessionManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot, ____spectatingSpotManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot, ___hasBeenRemovedEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot, ___isObservedChangedEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot, ____observable_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot, ____playerFailed) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*, "", "MultiplayerConnectedPlayerSpectatingSpot");
