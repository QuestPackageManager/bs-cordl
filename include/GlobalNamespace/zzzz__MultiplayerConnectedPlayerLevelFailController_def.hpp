#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerConnectedPlayerLevelFailController)
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class VFXController;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerConnectedPlayerLevelFailController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerConnectedPlayerLevelFailController);
// Type: ::MultiplayerConnectedPlayerLevelFailController
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 65, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerConnectedPlayerLevelFailController*
class CORDL_TYPE MultiplayerConnectedPlayerLevelFailController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _beatmapObjectManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectManager, put = __cordl_internal_set__beatmapObjectManager))::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  /// @brief Field _connectedPlayer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__connectedPlayer, put = __cordl_internal_set__connectedPlayer))::GlobalNamespace::IConnectedPlayer* _connectedPlayer;

  /// @brief Field _failVFXController, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__failVFXController, put = __cordl_internal_set__failVFXController))::UnityW<::GlobalNamespace::VFXController> _failVFXController;

  /// @brief Field _multiplayerSessionManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionManager,
                      put = __cordl_internal_set__multiplayerSessionManager))::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field _wasActive, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__wasActive, put = __cordl_internal_set__wasActive)) bool _wasActive;

  /// @brief Field playerDidFailEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_playerDidFailEvent, put = __cordl_internal_set_playerDidFailEvent))::System::Action* playerDidFailEvent;

  /// @brief Method CheckIfPlayerFailed, addr 0x25ec484, size 0x1ec, virtual false, abstract: false, final false
  inline void CheckIfPlayerFailed(::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method HandlePlayerDisconnected, addr 0x25ec670, size 0x4, virtual false, abstract: false, final false
  inline void HandlePlayerDisconnected(::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method HandlePlayerStateChanged, addr 0x25ec674, size 0x4, virtual false, abstract: false, final false
  inline void HandlePlayerStateChanged(::GlobalNamespace::IConnectedPlayer* player);

  static inline ::GlobalNamespace::MultiplayerConnectedPlayerLevelFailController* New_ctor();

  /// @brief Method OnDestroy, addr 0x25ec2e0, size 0x1a4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x25ec138, size 0x1a8, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __cordl_internal_get__beatmapObjectManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& __cordl_internal_get__beatmapObjectManager() const;

  constexpr ::GlobalNamespace::IConnectedPlayer*& __cordl_internal_get__connectedPlayer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> const& __cordl_internal_get__connectedPlayer() const;

  constexpr ::UnityW<::GlobalNamespace::VFXController> const& __cordl_internal_get__failVFXController() const;

  constexpr ::UnityW<::GlobalNamespace::VFXController>& __cordl_internal_get__failVFXController();

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __cordl_internal_get__multiplayerSessionManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const& __cordl_internal_get__multiplayerSessionManager() const;

  constexpr bool const& __cordl_internal_get__wasActive() const;

  constexpr bool& __cordl_internal_get__wasActive();

  constexpr ::System::Action*& __cordl_internal_get_playerDidFailEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_playerDidFailEvent() const;

  constexpr void __cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  constexpr void __cordl_internal_set__connectedPlayer(::GlobalNamespace::IConnectedPlayer* value);

  constexpr void __cordl_internal_set__failVFXController(::UnityW<::GlobalNamespace::VFXController> value);

  constexpr void __cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr void __cordl_internal_set__wasActive(bool value);

  constexpr void __cordl_internal_set_playerDidFailEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x25ec678, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_playerDidFailEvent, addr 0x25eb560, size 0x9c, virtual false, abstract: false, final false
  inline void add_playerDidFailEvent(::System::Action* value);

  /// @brief Method remove_playerDidFailEvent, addr 0x25eb07c, size 0x9c, virtual false, abstract: false, final false
  inline void remove_playerDidFailEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerConnectedPlayerLevelFailController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerLevelFailController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerConnectedPlayerLevelFailController(MultiplayerConnectedPlayerLevelFailController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerLevelFailController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerConnectedPlayerLevelFailController(MultiplayerConnectedPlayerLevelFailController const&) = delete;

  /// @brief Field _failVFXController, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::VFXController> ____failVFXController;

  /// @brief Field _multiplayerSessionManager, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field _beatmapObjectManager, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____beatmapObjectManager;

  /// @brief Field _connectedPlayer, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayer* ____connectedPlayer;

  /// @brief Field playerDidFailEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action* ___playerDidFailEvent;

  /// @brief Field _wasActive, offset: 0x40, size: 0x1, def value: None
  bool ____wasActive;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerConnectedPlayerLevelFailController, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerLevelFailController, ____failVFXController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerLevelFailController, ____multiplayerSessionManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerLevelFailController, ____beatmapObjectManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerLevelFailController, ____connectedPlayer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerLevelFailController, ___playerDidFailEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerLevelFailController, ____wasActive) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerLevelFailController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerLevelFailController*, "", "MultiplayerConnectedPlayerLevelFailController");
