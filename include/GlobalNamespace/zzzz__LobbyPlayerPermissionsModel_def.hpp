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
// Type: ::LobbyPlayerPermissionsModel
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LobbyPlayerPermissionsModel*
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
  __declspec(property(get = __cordl_internal_get__menuRpcManager, put = __cordl_internal_set__menuRpcManager))::GlobalNamespace::IMenuRpcManager* _menuRpcManager;

  /// @brief Field _multiplayerSessionManager, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionManager,
                      put = __cordl_internal_set__multiplayerSessionManager))::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  __declspec(property(get = get_hasInvitePermission, put = set_hasInvitePermission)) bool hasInvitePermission;

  __declspec(property(get = get_hasKickVotePermission, put = set_hasKickVotePermission)) bool hasKickVotePermission;

  __declspec(property(get = get_hasRecommendBeatmapPermission, put = set_hasRecommendBeatmapPermission)) bool hasRecommendBeatmapPermission;

  __declspec(property(get = get_hasRecommendModifiersPermission, put = set_hasRecommendModifiersPermission)) bool hasRecommendModifiersPermission;

  __declspec(property(get = get_isPartyOwner, put = set_isPartyOwner)) bool isPartyOwner;

  /// @brief Field permissionsChangedEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_permissionsChangedEvent, put = __cordl_internal_set_permissionsChangedEvent))::System::Action* permissionsChangedEvent;

  /// @brief Method Activate, addr 0x14e0020, size 0xf0, virtual false, abstract: false, final false
  inline void Activate();

  /// @brief Method Deactivate, addr 0x14e02b0, size 0xf0, virtual false, abstract: false, final false
  inline void Deactivate();

  /// @brief Method HandleMenuRpcManagerSetPlayersPermissionConfiguration, addr 0x14e0950, size 0x2ac, virtual false, abstract: false, final false
  inline void HandleMenuRpcManagerSetPlayersPermissionConfiguration(::StringW userId, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable* playersLobbyPermissionConfiguration);

  static inline ::GlobalNamespace::LobbyPlayerPermissionsModel* New_ctor();

  /// @brief Method SetPlayerPermissions, addr 0x14e090c, size 0x44, virtual false, abstract: false, final false
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

  constexpr ::GlobalNamespace::IMenuRpcManager*& __cordl_internal_get__menuRpcManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMenuRpcManager*> const& __cordl_internal_get__menuRpcManager() const;

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __cordl_internal_get__multiplayerSessionManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const& __cordl_internal_get__multiplayerSessionManager() const;

  constexpr ::System::Action*& __cordl_internal_get_permissionsChangedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_permissionsChangedEvent() const;

  constexpr void __cordl_internal_set__hasInvitePermission_k__BackingField(bool value);

  constexpr void __cordl_internal_set__hasKickVotePermission_k__BackingField(bool value);

  constexpr void __cordl_internal_set__hasRecommendBeatmapPermission_k__BackingField(bool value);

  constexpr void __cordl_internal_set__hasRecommendModifiersPermission_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isPartyOwner_k__BackingField(bool value);

  constexpr void __cordl_internal_set__menuRpcManager(::GlobalNamespace::IMenuRpcManager* value);

  constexpr void __cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr void __cordl_internal_set_permissionsChangedEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x14e0bfc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_permissionsChangedEvent, addr 0x14e07d4, size 0x9c, virtual false, abstract: false, final false
  inline void add_permissionsChangedEvent(::System::Action* value);

  /// @brief Method get_hasInvitePermission, addr 0x14e07c0, size 0x8, virtual false, abstract: false, final false
  inline bool get_hasInvitePermission();

  /// @brief Method get_hasKickVotePermission, addr 0x14e07ac, size 0x8, virtual false, abstract: false, final false
  inline bool get_hasKickVotePermission();

  /// @brief Method get_hasRecommendBeatmapPermission, addr 0x14e0784, size 0x8, virtual false, abstract: false, final false
  inline bool get_hasRecommendBeatmapPermission();

  /// @brief Method get_hasRecommendModifiersPermission, addr 0x14e0798, size 0x8, virtual false, abstract: false, final false
  inline bool get_hasRecommendModifiersPermission();

  /// @brief Method get_isPartyOwner, addr 0x14e0770, size 0x8, virtual false, abstract: false, final false
  inline bool get_isPartyOwner();

  /// @brief Method remove_permissionsChangedEvent, addr 0x14e0870, size 0x9c, virtual false, abstract: false, final false
  inline void remove_permissionsChangedEvent(::System::Action* value);

  /// @brief Method set_hasInvitePermission, addr 0x14e07c8, size 0xc, virtual false, abstract: false, final false
  inline void set_hasInvitePermission(bool value);

  /// @brief Method set_hasKickVotePermission, addr 0x14e07b4, size 0xc, virtual false, abstract: false, final false
  inline void set_hasKickVotePermission(bool value);

  /// @brief Method set_hasRecommendBeatmapPermission, addr 0x14e078c, size 0xc, virtual false, abstract: false, final false
  inline void set_hasRecommendBeatmapPermission(bool value);

  /// @brief Method set_hasRecommendModifiersPermission, addr 0x14e07a0, size 0xc, virtual false, abstract: false, final false
  inline void set_hasRecommendModifiersPermission(bool value);

  /// @brief Method set_isPartyOwner, addr 0x14e0778, size 0xc, virtual false, abstract: false, final false
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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LobbyPlayerPermissionsModel, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyPlayerPermissionsModel, ____menuRpcManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyPlayerPermissionsModel, ____multiplayerSessionManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyPlayerPermissionsModel, ____isPartyOwner_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyPlayerPermissionsModel, ____hasRecommendBeatmapPermission_k__BackingField) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyPlayerPermissionsModel, ____hasRecommendModifiersPermission_k__BackingField) == 0x22, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyPlayerPermissionsModel, ____hasKickVotePermission_k__BackingField) == 0x23, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyPlayerPermissionsModel, ____hasInvitePermission_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyPlayerPermissionsModel, ___permissionsChangedEvent) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LobbyPlayerPermissionsModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LobbyPlayerPermissionsModel*, "", "LobbyPlayerPermissionsModel");
