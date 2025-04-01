#pragma once
// IWYU pragma private; include "GlobalNamespace/LobbyPlayerPermissionsModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LobbyPlayerPermissionsModel)
namespace GlobalNamespace {
class IMenuRpcManager;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class PlayersLobbyPermissionConfigurationNetSerializable;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class LobbyPlayerPermissionsModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LobbyPlayerPermissionsModel);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LobbyPlayerPermissionsModel
class CORDL_TYPE LobbyPlayerPermissionsModel : public ::System::Object {
public:
  // Declarations
  /// @brief Field <hasInvitePermission>k__BackingField, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get__hasInvitePermission_k__BackingField, put = __cordl_internal_set__hasInvitePermission_k__BackingField)) bool _hasInvitePermission_k__BackingField;

  /// @brief Field <hasKickVotePermission>k__BackingField, offset 0x23, size 0x1
  __declspec(property(get = __cordl_internal_get__hasKickVotePermission_k__BackingField,
                      put = __cordl_internal_set__hasKickVotePermission_k__BackingField)) bool _hasKickVotePermission_k__BackingField;

  /// @brief Field <hasRecommendBeatmapPermission>k__BackingField, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get__hasRecommendBeatmapPermission_k__BackingField,
                      put = __cordl_internal_set__hasRecommendBeatmapPermission_k__BackingField)) bool _hasRecommendBeatmapPermission_k__BackingField;

  /// @brief Field <hasRecommendModifiersPermission>k__BackingField, offset 0x22, size 0x1
  __declspec(property(get = __cordl_internal_get__hasRecommendModifiersPermission_k__BackingField,
                      put = __cordl_internal_set__hasRecommendModifiersPermission_k__BackingField)) bool _hasRecommendModifiersPermission_k__BackingField;

  /// @brief Field <isPartyOwner>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__isPartyOwner_k__BackingField, put = __cordl_internal_set__isPartyOwner_k__BackingField)) bool _isPartyOwner_k__BackingField;

  /// @brief Field _menuRpcManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__menuRpcManager, put = __cordl_internal_set__menuRpcManager)) ::GlobalNamespace::IMenuRpcManager* _menuRpcManager;

  /// @brief Field _multiplayerSessionManager, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionManager,
                      put = __cordl_internal_set__multiplayerSessionManager)) ::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  __declspec(property(get = get_hasInvitePermission, put = set_hasInvitePermission)) bool hasInvitePermission;

  __declspec(property(get = get_hasKickVotePermission, put = set_hasKickVotePermission)) bool hasKickVotePermission;

  __declspec(property(get = get_hasRecommendBeatmapPermission, put = set_hasRecommendBeatmapPermission)) bool hasRecommendBeatmapPermission;

  __declspec(property(get = get_hasRecommendModifiersPermission, put = set_hasRecommendModifiersPermission)) bool hasRecommendModifiersPermission;

  __declspec(property(get = get_isPartyOwner, put = set_isPartyOwner)) bool isPartyOwner;

  /// @brief Field permissionsChangedEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_permissionsChangedEvent, put = __cordl_internal_set_permissionsChangedEvent)) ::System::Action* permissionsChangedEvent;

  /// @brief Method Activate, addr 0x26d9068, size 0xf4, virtual false, abstract: false, final false
  inline void Activate();

  /// @brief Method Deactivate, addr 0x26d92fc, size 0xf4, virtual false, abstract: false, final false
  inline void Deactivate();

  /// @brief Method HandleMenuRpcManagerSetPlayersPermissionConfiguration, addr 0x26d99a0, size 0x2ac, virtual false, abstract: false, final false
  inline void HandleMenuRpcManagerSetPlayersPermissionConfiguration(::StringW userId, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable* playersLobbyPermissionConfiguration);

  static inline ::GlobalNamespace::LobbyPlayerPermissionsModel* New_ctor();

  /// @brief Method SetPlayerPermissions, addr 0x26d995c, size 0x44, virtual false, abstract: false, final false
  inline void SetPlayerPermissions(bool isPartyOwner, bool hasRecommendBeatmapPermission, bool hasRecommendModifiersPermission, bool hasKickVotePermission, bool hasInvitePermission);

  constexpr bool const& __cordl_internal_get__hasInvitePermission_k__BackingField() const;

  constexpr bool& __cordl_internal_get__hasInvitePermission_k__BackingField();

  constexpr bool const& __cordl_internal_get__hasKickVotePermission_k__BackingField() const;

  constexpr bool& __cordl_internal_get__hasKickVotePermission_k__BackingField();

  constexpr bool const& __cordl_internal_get__hasRecommendBeatmapPermission_k__BackingField() const;

  constexpr bool& __cordl_internal_get__hasRecommendBeatmapPermission_k__BackingField();

  constexpr bool const& __cordl_internal_get__hasRecommendModifiersPermission_k__BackingField() const;

  constexpr bool& __cordl_internal_get__hasRecommendModifiersPermission_k__BackingField();

  constexpr bool const& __cordl_internal_get__isPartyOwner_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isPartyOwner_k__BackingField();

  constexpr ::GlobalNamespace::IMenuRpcManager* const& __cordl_internal_get__menuRpcManager() const;

  constexpr ::GlobalNamespace::IMenuRpcManager*& __cordl_internal_get__menuRpcManager();

  constexpr ::GlobalNamespace::IMultiplayerSessionManager* const& __cordl_internal_get__multiplayerSessionManager() const;

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __cordl_internal_get__multiplayerSessionManager();

  constexpr ::System::Action* const& __cordl_internal_get_permissionsChangedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_permissionsChangedEvent();

  constexpr void __cordl_internal_set__hasInvitePermission_k__BackingField(bool value);

  constexpr void __cordl_internal_set__hasKickVotePermission_k__BackingField(bool value);

  constexpr void __cordl_internal_set__hasRecommendBeatmapPermission_k__BackingField(bool value);

  constexpr void __cordl_internal_set__hasRecommendModifiersPermission_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isPartyOwner_k__BackingField(bool value);

  constexpr void __cordl_internal_set__menuRpcManager(::GlobalNamespace::IMenuRpcManager* value);

  constexpr void __cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr void __cordl_internal_set_permissionsChangedEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x26d9c4c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_permissionsChangedEvent, addr 0x26d9824, size 0x9c, virtual false, abstract: false, final false
  inline void add_permissionsChangedEvent(::System::Action* value);

  /// @brief Method get_hasInvitePermission, addr 0x26d9810, size 0x8, virtual false, abstract: false, final false
  inline bool get_hasInvitePermission();

  /// @brief Method get_hasKickVotePermission, addr 0x26d97fc, size 0x8, virtual false, abstract: false, final false
  inline bool get_hasKickVotePermission();

  /// @brief Method get_hasRecommendBeatmapPermission, addr 0x26d97d4, size 0x8, virtual false, abstract: false, final false
  inline bool get_hasRecommendBeatmapPermission();

  /// @brief Method get_hasRecommendModifiersPermission, addr 0x26d97e8, size 0x8, virtual false, abstract: false, final false
  inline bool get_hasRecommendModifiersPermission();

  /// @brief Method get_isPartyOwner, addr 0x26d97c0, size 0x8, virtual false, abstract: false, final false
  inline bool get_isPartyOwner();

  /// @brief Method remove_permissionsChangedEvent, addr 0x26d98c0, size 0x9c, virtual false, abstract: false, final false
  inline void remove_permissionsChangedEvent(::System::Action* value);

  /// @brief Method set_hasInvitePermission, addr 0x26d9818, size 0xc, virtual false, abstract: false, final false
  inline void set_hasInvitePermission(bool value);

  /// @brief Method set_hasKickVotePermission, addr 0x26d9804, size 0xc, virtual false, abstract: false, final false
  inline void set_hasKickVotePermission(bool value);

  /// @brief Method set_hasRecommendBeatmapPermission, addr 0x26d97dc, size 0xc, virtual false, abstract: false, final false
  inline void set_hasRecommendBeatmapPermission(bool value);

  /// @brief Method set_hasRecommendModifiersPermission, addr 0x26d97f0, size 0xc, virtual false, abstract: false, final false
  inline void set_hasRecommendModifiersPermission(bool value);

  /// @brief Method set_isPartyOwner, addr 0x26d97c8, size 0xc, virtual false, abstract: false, final false
  inline void set_isPartyOwner(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LobbyPlayerPermissionsModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LobbyPlayerPermissionsModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LobbyPlayerPermissionsModel(LobbyPlayerPermissionsModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LobbyPlayerPermissionsModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LobbyPlayerPermissionsModel(LobbyPlayerPermissionsModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13106 };

  /// @brief Field _menuRpcManager, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IMenuRpcManager* ____menuRpcManager;

  /// @brief Field _multiplayerSessionManager, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field <isPartyOwner>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____isPartyOwner_k__BackingField;

  /// @brief Field <hasRecommendBeatmapPermission>k__BackingField, offset: 0x21, size: 0x1, def value: None
  bool ____hasRecommendBeatmapPermission_k__BackingField;

  /// @brief Field <hasRecommendModifiersPermission>k__BackingField, offset: 0x22, size: 0x1, def value: None
  bool ____hasRecommendModifiersPermission_k__BackingField;

  /// @brief Field <hasKickVotePermission>k__BackingField, offset: 0x23, size: 0x1, def value: None
  bool ____hasKickVotePermission_k__BackingField;

  /// @brief Field <hasInvitePermission>k__BackingField, offset: 0x24, size: 0x1, def value: None
  bool ____hasInvitePermission_k__BackingField;

  /// @brief Field permissionsChangedEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action* ___permissionsChangedEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LobbyPlayerPermissionsModel, ____menuRpcManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyPlayerPermissionsModel, ____multiplayerSessionManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyPlayerPermissionsModel, ____isPartyOwner_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyPlayerPermissionsModel, ____hasRecommendBeatmapPermission_k__BackingField) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyPlayerPermissionsModel, ____hasRecommendModifiersPermission_k__BackingField) == 0x22, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyPlayerPermissionsModel, ____hasKickVotePermission_k__BackingField) == 0x23, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyPlayerPermissionsModel, ____hasInvitePermission_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyPlayerPermissionsModel, ___permissionsChangedEvent) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LobbyPlayerPermissionsModel, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LobbyPlayerPermissionsModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LobbyPlayerPermissionsModel*, "", "LobbyPlayerPermissionsModel");
