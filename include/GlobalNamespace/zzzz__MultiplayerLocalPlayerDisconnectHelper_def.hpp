#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLocalPlayerDisconnectHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MultiplayerLocalPlayerDisconnectHelper)
namespace GlobalNamespace {
class IGameplayRpcManager;
}
namespace GlobalNamespace {
class IMultiplayerLevelEndActionsListener;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class LobbyPlayerPermissionsModel;
}
namespace GlobalNamespace {
struct MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalPlayerDisconnectHelper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerLocalPlayerDisconnectHelper
class CORDL_TYPE MultiplayerLocalPlayerDisconnectHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Field _gameplayRpcManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayRpcManager, put = __cordl_internal_set__gameplayRpcManager)) ::GlobalNamespace::IGameplayRpcManager* _gameplayRpcManager;

  /// @brief Field _lobbyPlayerPermissionsModel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__lobbyPlayerPermissionsModel,
                      put = __cordl_internal_set__lobbyPlayerPermissionsModel)) ::GlobalNamespace::LobbyPlayerPermissionsModel* _lobbyPlayerPermissionsModel;

  /// @brief Field _multiplayerLevelEndActions, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerLevelEndActions,
                      put = __cordl_internal_set__multiplayerLevelEndActions)) ::GlobalNamespace::IMultiplayerLevelEndActionsListener* _multiplayerLevelEndActions;

  /// @brief Method Disconnect, addr 0x57b7ab4, size 0x208, virtual false, abstract: false, final false
  inline void Disconnect(::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState playerLevelEndState, ::GlobalNamespace::LevelCompletionResults* levelCompletionResults);

  static inline ::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper* New_ctor();

  /// @brief Method ResolveDisconnectButtonString, addr 0x57b7cbc, size 0x80, virtual false, abstract: false, final false
  inline ::StringW ResolveDisconnectButtonString();

  constexpr ::GlobalNamespace::IGameplayRpcManager* const& __cordl_internal_get__gameplayRpcManager() const;

  constexpr ::GlobalNamespace::IGameplayRpcManager*& __cordl_internal_get__gameplayRpcManager();

  constexpr ::GlobalNamespace::LobbyPlayerPermissionsModel* const& __cordl_internal_get__lobbyPlayerPermissionsModel() const;

  constexpr ::GlobalNamespace::LobbyPlayerPermissionsModel*& __cordl_internal_get__lobbyPlayerPermissionsModel();

  constexpr ::GlobalNamespace::IMultiplayerLevelEndActionsListener* const& __cordl_internal_get__multiplayerLevelEndActions() const;

  constexpr ::GlobalNamespace::IMultiplayerLevelEndActionsListener*& __cordl_internal_get__multiplayerLevelEndActions();

  constexpr void __cordl_internal_set__gameplayRpcManager(::GlobalNamespace::IGameplayRpcManager* value);

  constexpr void __cordl_internal_set__lobbyPlayerPermissionsModel(::GlobalNamespace::LobbyPlayerPermissionsModel* value);

  constexpr void __cordl_internal_set__multiplayerLevelEndActions(::GlobalNamespace::IMultiplayerLevelEndActionsListener* value);

  /// @brief Method .ctor, addr 0x57b7d3c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLocalPlayerDisconnectHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalPlayerDisconnectHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLocalPlayerDisconnectHelper(MultiplayerLocalPlayerDisconnectHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalPlayerDisconnectHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLocalPlayerDisconnectHelper(MultiplayerLocalPlayerDisconnectHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6114 };

  /// @brief Field kDisconnectLabel offset 0xffffffff size 0x8
  static constexpr ::ConstString kDisconnectLabel{ u"BUTTON_DISCONNECT" };

  /// @brief Field kEndGameLabel offset 0xffffffff size 0x8
  static constexpr ::ConstString kEndGameLabel{ u"BUTTON_END_GAME" };

  /// @brief Field _gameplayRpcManager, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IGameplayRpcManager* ____gameplayRpcManager;

  /// @brief Field _multiplayerLevelEndActions, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerLevelEndActionsListener* ____multiplayerLevelEndActions;

  /// @brief Field _lobbyPlayerPermissionsModel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::LobbyPlayerPermissionsModel* ____lobbyPlayerPermissionsModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper, ____gameplayRpcManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper, ____multiplayerLevelEndActions) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper, ____lobbyPlayerPermissionsModel) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper*, "", "MultiplayerLocalPlayerDisconnectHelper");
