#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerLobbyPermissionConfigurationNetSerializable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PoolableSerializable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PlayerLobbyPermissionConfigurationNetSerializable)
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerLobbyPermissionConfigurationNetSerializable;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable);
// Dependencies PoolableSerializable
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerLobbyPermissionConfigurationNetSerializable
class CORDL_TYPE PlayerLobbyPermissionConfigurationNetSerializable : public ::GlobalNamespace::PoolableSerializable {
public:
  // Declarations
  /// @brief Field _hasInvitePermission, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get__hasInvitePermission, put = __cordl_internal_set__hasInvitePermission)) bool _hasInvitePermission;

  /// @brief Field _hasKickVotePermission, offset 0x23, size 0x1
  __declspec(property(get = __cordl_internal_get__hasKickVotePermission, put = __cordl_internal_set__hasKickVotePermission)) bool _hasKickVotePermission;

  /// @brief Field _hasRecommendBeatmapsPermission, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get__hasRecommendBeatmapsPermission, put = __cordl_internal_set__hasRecommendBeatmapsPermission)) bool _hasRecommendBeatmapsPermission;

  /// @brief Field _hasRecommendGameplayModifiersPermission, offset 0x22, size 0x1
  __declspec(property(get = __cordl_internal_get__hasRecommendGameplayModifiersPermission,
                      put = __cordl_internal_set__hasRecommendGameplayModifiersPermission)) bool _hasRecommendGameplayModifiersPermission;

  /// @brief Field _isServerOwner, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__isServerOwner, put = __cordl_internal_set__isServerOwner)) bool _isServerOwner;

  /// @brief Field _userId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__userId, put = __cordl_internal_set__userId)) ::StringW _userId;

  __declspec(property(get = get_hasInvitePermission)) bool hasInvitePermission;

  __declspec(property(get = get_hasKickVotePermission)) bool hasKickVotePermission;

  __declspec(property(get = get_hasRecommendBeatmapsPermission)) bool hasRecommendBeatmapsPermission;

  __declspec(property(get = get_hasRecommendGameplayModifiersPermission)) bool hasRecommendGameplayModifiersPermission;

  __declspec(property(get = get_isServerOwner)) bool isServerOwner;

  __declspec(property(get = get_userId)) ::StringW userId;

  /// @brief Method Deserialize, addr 0x367fb34, size 0x68, virtual true, abstract: false, final false
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Init, addr 0x367fa54, size 0x1c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable* Init(::StringW userId, bool isServerOwner, bool hasRecommendBeatmapsPermission,
                                                                                    bool hasRecommendGameplayModifiersPermission, bool hasKickVotePermission, bool hasInvitePermission);

  static inline ::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable* New_ctor();

  /// @brief Method Obtain, addr 0x367f9e8, size 0x6c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable* Obtain();

  /// @brief Method Serialize, addr 0x367fac8, size 0x6c, virtual true, abstract: false, final false
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  constexpr bool const& __cordl_internal_get__hasInvitePermission() const;

  constexpr bool& __cordl_internal_get__hasInvitePermission();

  constexpr bool const& __cordl_internal_get__hasKickVotePermission() const;

  constexpr bool& __cordl_internal_get__hasKickVotePermission();

  constexpr bool const& __cordl_internal_get__hasRecommendBeatmapsPermission() const;

  constexpr bool& __cordl_internal_get__hasRecommendBeatmapsPermission();

  constexpr bool const& __cordl_internal_get__hasRecommendGameplayModifiersPermission() const;

  constexpr bool& __cordl_internal_get__hasRecommendGameplayModifiersPermission();

  constexpr bool const& __cordl_internal_get__isServerOwner() const;

  constexpr bool& __cordl_internal_get__isServerOwner();

  constexpr ::StringW const& __cordl_internal_get__userId() const;

  constexpr ::StringW& __cordl_internal_get__userId();

  constexpr void __cordl_internal_set__hasInvitePermission(bool value);

  constexpr void __cordl_internal_set__hasKickVotePermission(bool value);

  constexpr void __cordl_internal_set__hasRecommendBeatmapsPermission(bool value);

  constexpr void __cordl_internal_set__hasRecommendGameplayModifiersPermission(bool value);

  constexpr void __cordl_internal_set__isServerOwner(bool value);

  constexpr void __cordl_internal_set__userId(::StringW value);

  /// @brief Method .ctor, addr 0x367fa70, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_hasInvitePermission, addr 0x367f9e0, size 0x8, virtual false, abstract: false, final false
  inline bool get_hasInvitePermission();

  /// @brief Method get_hasKickVotePermission, addr 0x367f9d8, size 0x8, virtual false, abstract: false, final false
  inline bool get_hasKickVotePermission();

  /// @brief Method get_hasRecommendBeatmapsPermission, addr 0x367f9c8, size 0x8, virtual false, abstract: false, final false
  inline bool get_hasRecommendBeatmapsPermission();

  /// @brief Method get_hasRecommendGameplayModifiersPermission, addr 0x367f9d0, size 0x8, virtual false, abstract: false, final false
  inline bool get_hasRecommendGameplayModifiersPermission();

  /// @brief Method get_isServerOwner, addr 0x367f9c0, size 0x8, virtual false, abstract: false, final false
  inline bool get_isServerOwner();

  /// @brief Method get_userId, addr 0x367f9b8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_userId();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerLobbyPermissionConfigurationNetSerializable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerLobbyPermissionConfigurationNetSerializable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerLobbyPermissionConfigurationNetSerializable(PlayerLobbyPermissionConfigurationNetSerializable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerLobbyPermissionConfigurationNetSerializable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerLobbyPermissionConfigurationNetSerializable(PlayerLobbyPermissionConfigurationNetSerializable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20874 };

  /// @brief Field _userId, offset: 0x18, size: 0x8, def value: None
  ::StringW ____userId;

  /// @brief Field _isServerOwner, offset: 0x20, size: 0x1, def value: None
  bool ____isServerOwner;

  /// @brief Field _hasRecommendBeatmapsPermission, offset: 0x21, size: 0x1, def value: None
  bool ____hasRecommendBeatmapsPermission;

  /// @brief Field _hasRecommendGameplayModifiersPermission, offset: 0x22, size: 0x1, def value: None
  bool ____hasRecommendGameplayModifiersPermission;

  /// @brief Field _hasKickVotePermission, offset: 0x23, size: 0x1, def value: None
  bool ____hasKickVotePermission;

  /// @brief Field _hasInvitePermission, offset: 0x24, size: 0x1, def value: None
  bool ____hasInvitePermission;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable, ____userId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable, ____isServerOwner) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable, ____hasRecommendBeatmapsPermission) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable, ____hasRecommendGameplayModifiersPermission) == 0x22, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable, ____hasKickVotePermission) == 0x23, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable, ____hasInvitePermission) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*, "", "PlayerLobbyPermissionConfigurationNetSerializable");
