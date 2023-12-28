#pragma once
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
// Type: ::PlayerLobbyPermissionConfigurationNetSerializable
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 37, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15033))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15030))
// CS Name: ::PlayerLobbyPermissionConfigurationNetSerializable*
class CORDL_TYPE PlayerLobbyPermissionConfigurationNetSerializable : public ::GlobalNamespace::PoolableSerializable {
public:
  // Declarations
  /// @brief Field _userId, offset 0x18, size 0x8
  __declspec(property(get = __get__userId, put = __set__userId))::StringW _userId;

  /// @brief Field _isServerOwner, offset 0x20, size 0x1
  __declspec(property(get = __get__isServerOwner, put = __set__isServerOwner)) bool _isServerOwner;

  /// @brief Field _hasRecommendBeatmapsPermission, offset 0x21, size 0x1
  __declspec(property(get = __get__hasRecommendBeatmapsPermission, put = __set__hasRecommendBeatmapsPermission)) bool _hasRecommendBeatmapsPermission;

  /// @brief Field _hasRecommendGameplayModifiersPermission, offset 0x22, size 0x1
  __declspec(property(get = __get__hasRecommendGameplayModifiersPermission, put = __set__hasRecommendGameplayModifiersPermission)) bool _hasRecommendGameplayModifiersPermission;

  /// @brief Field _hasKickVotePermission, offset 0x23, size 0x1
  __declspec(property(get = __get__hasKickVotePermission, put = __set__hasKickVotePermission)) bool _hasKickVotePermission;

  /// @brief Field _hasInvitePermission, offset 0x24, size 0x1
  __declspec(property(get = __get__hasInvitePermission, put = __set__hasInvitePermission)) bool _hasInvitePermission;

  __declspec(property(get = get_userId))::StringW userId;

  __declspec(property(get = get_isServerOwner)) bool isServerOwner;

  __declspec(property(get = get_hasRecommendBeatmapsPermission)) bool hasRecommendBeatmapsPermission;

  __declspec(property(get = get_hasRecommendGameplayModifiersPermission)) bool hasRecommendGameplayModifiersPermission;

  __declspec(property(get = get_hasKickVotePermission)) bool hasKickVotePermission;

  __declspec(property(get = get_hasInvitePermission)) bool hasInvitePermission;

  constexpr ::StringW& __get__userId();

  constexpr ::StringW const& __get__userId() const;

  constexpr void __set__userId(::StringW value);

  constexpr bool& __get__isServerOwner();

  constexpr bool const& __get__isServerOwner() const;

  constexpr void __set__isServerOwner(bool value);

  constexpr bool& __get__hasRecommendBeatmapsPermission();

  constexpr bool const& __get__hasRecommendBeatmapsPermission() const;

  constexpr void __set__hasRecommendBeatmapsPermission(bool value);

  constexpr bool& __get__hasRecommendGameplayModifiersPermission();

  constexpr bool const& __get__hasRecommendGameplayModifiersPermission() const;

  constexpr void __set__hasRecommendGameplayModifiersPermission(bool value);

  constexpr bool& __get__hasKickVotePermission();

  constexpr bool const& __get__hasKickVotePermission() const;

  constexpr void __set__hasKickVotePermission(bool value);

  constexpr bool& __get__hasInvitePermission();

  constexpr bool const& __get__hasInvitePermission() const;

  constexpr void __set__hasInvitePermission(bool value);

  /// @brief Method get_userId addr 0x12a55a0 size 0x8 virtual false final false
  inline ::StringW get_userId();

  /// @brief Method get_isServerOwner addr 0x12a55a8 size 0x8 virtual false final false
  inline bool get_isServerOwner();

  /// @brief Method get_hasRecommendBeatmapsPermission addr 0x12a55b0 size 0x8 virtual false final false
  inline bool get_hasRecommendBeatmapsPermission();

  /// @brief Method get_hasRecommendGameplayModifiersPermission addr 0x12a55b8 size 0x8 virtual false final false
  inline bool get_hasRecommendGameplayModifiersPermission();

  /// @brief Method get_hasKickVotePermission addr 0x12a55c0 size 0x8 virtual false final false
  inline bool get_hasKickVotePermission();

  /// @brief Method get_hasInvitePermission addr 0x12a55c8 size 0x8 virtual false final false
  inline bool get_hasInvitePermission();

  /// @brief Method Obtain addr 0x12a55d0 size 0x64 virtual false final false
  static inline ::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable* Obtain();

  /// @brief Method Init addr 0x12a5634 size 0x30 virtual false final false
  inline ::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable* Init(::StringW userId, bool isServerOwner, bool hasRecommendBeatmapsPermission,
                                                                                    bool hasRecommendGameplayModifiersPermission, bool hasKickVotePermission, bool hasInvitePermission);

  static inline ::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable* New_ctor();

  /// @brief Method .ctor addr 0x12a5664 size 0x58 virtual false final false
  inline void _ctor();

  /// @brief Method Serialize addr 0x12a56bc size 0x60 virtual true final false
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Deserialize addr 0x12a571c size 0x6c virtual true final false
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  // Ctor Parameters [CppParam { name: "", ty: "PlayerLobbyPermissionConfigurationNetSerializable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerLobbyPermissionConfigurationNetSerializable(PlayerLobbyPermissionConfigurationNetSerializable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerLobbyPermissionConfigurationNetSerializable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerLobbyPermissionConfigurationNetSerializable(PlayerLobbyPermissionConfigurationNetSerializable const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerLobbyPermissionConfigurationNetSerializable();

public:
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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*, "", "PlayerLobbyPermissionConfigurationNetSerializable");
