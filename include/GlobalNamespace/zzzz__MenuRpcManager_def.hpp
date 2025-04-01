#pragma once
// IWYU pragma private; include "GlobalNamespace/MenuRpcManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CannotStartGameReason_def.hpp"
#include "GlobalNamespace/zzzz__IMenuRpcManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerGameState_def.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_1_def.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_2_def.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_3_def.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MenuRpcManager)
namespace GlobalNamespace {
class BeatmapKeyNetSerializable;
}
namespace GlobalNamespace {
struct CannotStartGameReason;
}
namespace GlobalNamespace {
struct EntitlementsStatus;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class MenuRpcManager_CancelCountdownRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_CancelLevelStartRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_CancelStartGameTimeRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_ClearRecommendedBeatmapRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_ClearRecommendedGameplayModifiersRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_ClearSelectedBeatmapRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_ClearSelectedGameplayModifiersRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_GetCountdownEndTimeRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_GetIsEntitledToLevelRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_GetIsInLobbyRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_GetIsReadyRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_GetIsStartButtonEnabledRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_GetMultiplayerGameStateRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_GetOwnedSongPacksRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_GetPlayersPermissionConfigurationRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_GetRecommendedBeatmapRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_GetRecommendedGameplayModifiersRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_GetSelectedBeatmapRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_GetSelectedGameplayModifiersRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_GetStartedLevelRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_InvalidateLevelEntitlementStatusesRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_LevelLoadErrorRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_LevelLoadSuccessRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_RecommendBeatmapRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_RecommendGameplayModifiersRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_RequestKickPlayerRpc;
}
namespace GlobalNamespace {
struct MenuRpcManager_RpcType;
}
namespace GlobalNamespace {
class MenuRpcManager_SelectLevelPackRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_SetCountdownEndTimeRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_SetIsEntitledToLevelRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_SetIsInLobbyRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_SetIsReadyRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_SetIsStartButtonEnabledRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_SetMultiplayerGameStateRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_SetOwnedSongPacksRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_SetPlayersMissingEntitlementsToLevelRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_SetPlayersPermissionConfigurationRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_SetSelectedBeatmapRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_SetSelectedGameplayModifiersRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_SetStartGameTimeRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_StartLevelRpc;
}
namespace GlobalNamespace {
struct MultiplayerGameState;
}
namespace GlobalNamespace {
class PlayersLobbyPermissionConfigurationNetSerializable;
}
namespace GlobalNamespace {
class PlayersMissingEntitlementsNetSerializable;
}
namespace GlobalNamespace {
template <typename TType> class RpcHandler_1;
}
namespace GlobalNamespace {
struct SongPackMask;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T1, typename T2, typename T3> class Action_3;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4> class Action_4;
}
// Forward declare root types
namespace GlobalNamespace {
struct MenuRpcManager_RpcType;
}
namespace GlobalNamespace {
class MenuRpcManager;
}
namespace GlobalNamespace {
class MenuRpcManager_CancelCountdownRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_CancelLevelStartRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_CancelStartGameTimeRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_ClearRecommendedBeatmapRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_ClearRecommendedGameplayModifiersRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_ClearSelectedBeatmapRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_ClearSelectedGameplayModifiersRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_GetCountdownEndTimeRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_GetIsEntitledToLevelRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_GetIsInLobbyRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_GetIsReadyRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_GetIsStartButtonEnabledRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_GetMultiplayerGameStateRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_GetOwnedSongPacksRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_GetPlayersPermissionConfigurationRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_GetRecommendedBeatmapRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_GetRecommendedGameplayModifiersRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_GetSelectedBeatmapRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_GetSelectedGameplayModifiersRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_GetStartedLevelRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_InvalidateLevelEntitlementStatusesRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_LevelLoadErrorRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_LevelLoadSuccessRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_RecommendBeatmapRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_RecommendGameplayModifiersRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_RequestKickPlayerRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_SelectLevelPackRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_SetCountdownEndTimeRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_SetIsEntitledToLevelRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_SetIsInLobbyRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_SetIsReadyRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_SetIsStartButtonEnabledRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_SetMultiplayerGameStateRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_SetOwnedSongPacksRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_SetPlayersMissingEntitlementsToLevelRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_SetPlayersPermissionConfigurationRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_SetSelectedBeatmapRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_SetSelectedGameplayModifiersRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_SetStartGameTimeRpc;
}
namespace GlobalNamespace {
class MenuRpcManager_StartLevelRpc;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MenuRpcManager_RpcType);
MARK_REF_PTR_T(::GlobalNamespace::MenuRpcManager);
MARK_REF_PTR_T(::GlobalNamespace::MenuRpcManager_CancelCountdownRpc);
MARK_REF_PTR_T(::GlobalNamespace::MenuRpcManager_CancelLevelStartRpc);
MARK_REF_PTR_T(::GlobalNamespace::MenuRpcManager_CancelStartGameTimeRpc);
MARK_REF_PTR_T(::GlobalNamespace::MenuRpcManager_ClearRecommendedBeatmapRpc);
MARK_REF_PTR_T(::GlobalNamespace::MenuRpcManager_ClearRecommendedGameplayModifiersRpc);
MARK_REF_PTR_T(::GlobalNamespace::MenuRpcManager_ClearSelectedBeatmapRpc);
MARK_REF_PTR_T(::GlobalNamespace::MenuRpcManager_ClearSelectedGameplayModifiersRpc);
MARK_REF_PTR_T(::GlobalNamespace::MenuRpcManager_GetCountdownEndTimeRpc);
MARK_REF_PTR_T(::GlobalNamespace::MenuRpcManager_GetIsEntitledToLevelRpc);
MARK_REF_PTR_T(::GlobalNamespace::MenuRpcManager_GetIsInLobbyRpc);
MARK_REF_PTR_T(::GlobalNamespace::MenuRpcManager_GetIsReadyRpc);
MARK_REF_PTR_T(::GlobalNamespace::MenuRpcManager_GetIsStartButtonEnabledRpc);
MARK_REF_PTR_T(::GlobalNamespace::MenuRpcManager_GetMultiplayerGameStateRpc);
MARK_REF_PTR_T(::GlobalNamespace::MenuRpcManager_GetOwnedSongPacksRpc);
MARK_REF_PTR_T(::GlobalNamespace::MenuRpcManager_GetPlayersPermissionConfigurationRpc);
MARK_REF_PTR_T(::GlobalNamespace::MenuRpcManager_GetRecommendedBeatmapRpc);
MARK_REF_PTR_T(::GlobalNamespace::MenuRpcManager_GetRecommendedGameplayModifiersRpc);
MARK_REF_PTR_T(::GlobalNamespace::MenuRpcManager_GetSelectedBeatmapRpc);
MARK_REF_PTR_T(::GlobalNamespace::MenuRpcManager_GetSelectedGameplayModifiersRpc);
MARK_REF_PTR_T(::GlobalNamespace::MenuRpcManager_GetStartedLevelRpc);
MARK_REF_PTR_T(::GlobalNamespace::MenuRpcManager_InvalidateLevelEntitlementStatusesRpc);
MARK_REF_PTR_T(::GlobalNamespace::MenuRpcManager_LevelLoadErrorRpc);
MARK_REF_PTR_T(::GlobalNamespace::MenuRpcManager_LevelLoadSuccessRpc);
MARK_REF_PTR_T(::GlobalNamespace::MenuRpcManager_RecommendBeatmapRpc);
MARK_REF_PTR_T(::GlobalNamespace::MenuRpcManager_RecommendGameplayModifiersRpc);
MARK_REF_PTR_T(::GlobalNamespace::MenuRpcManager_RequestKickPlayerRpc);
MARK_REF_PTR_T(::GlobalNamespace::MenuRpcManager_SelectLevelPackRpc);
MARK_REF_PTR_T(::GlobalNamespace::MenuRpcManager_SetCountdownEndTimeRpc);
MARK_REF_PTR_T(::GlobalNamespace::MenuRpcManager_SetIsEntitledToLevelRpc);
MARK_REF_PTR_T(::GlobalNamespace::MenuRpcManager_SetIsInLobbyRpc);
MARK_REF_PTR_T(::GlobalNamespace::MenuRpcManager_SetIsReadyRpc);
MARK_REF_PTR_T(::GlobalNamespace::MenuRpcManager_SetIsStartButtonEnabledRpc);
MARK_REF_PTR_T(::GlobalNamespace::MenuRpcManager_SetMultiplayerGameStateRpc);
MARK_REF_PTR_T(::GlobalNamespace::MenuRpcManager_SetOwnedSongPacksRpc);
MARK_REF_PTR_T(::GlobalNamespace::MenuRpcManager_SetPlayersMissingEntitlementsToLevelRpc);
MARK_REF_PTR_T(::GlobalNamespace::MenuRpcManager_SetPlayersPermissionConfigurationRpc);
MARK_REF_PTR_T(::GlobalNamespace::MenuRpcManager_SetSelectedBeatmapRpc);
MARK_REF_PTR_T(::GlobalNamespace::MenuRpcManager_SetSelectedGameplayModifiersRpc);
MARK_REF_PTR_T(::GlobalNamespace::MenuRpcManager_SetStartGameTimeRpc);
MARK_REF_PTR_T(::GlobalNamespace::MenuRpcManager_StartLevelRpc);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: MenuRpcManager/RpcType
struct CORDL_TYPE MenuRpcManager_RpcType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __MenuRpcManager_RpcType_Unwrapped
  enum struct __MenuRpcManager_RpcType_Unwrapped : uint8_t {
    __E_SetPlayersMissingEntitlementsToLevel = static_cast<uint8_t>(0x0u),
    __E_GetIsEntitledToLevel = static_cast<uint8_t>(0x1u),
    __E_SetIsEntitledToLevel = static_cast<uint8_t>(0x2u),
    __E_InvalidateLevelEntitlementStatuses = static_cast<uint8_t>(0x3u),
    __E_SelectLevelPack = static_cast<uint8_t>(0x4u),
    __E_SetSelectedBeatmap = static_cast<uint8_t>(0x5u),
    __E_GetSelectedBeatmap = static_cast<uint8_t>(0x6u),
    __E_RecommendBeatmap = static_cast<uint8_t>(0x7u),
    __E_ClearRecommendedBeatmap = static_cast<uint8_t>(0x8u),
    __E_GetRecommendedBeatmap = static_cast<uint8_t>(0x9u),
    __E_SetSelectedGameplayModifiers = static_cast<uint8_t>(0xau),
    __E_GetSelectedGameplayModifiers = static_cast<uint8_t>(0xbu),
    __E_RecommendGameplayModifiers = static_cast<uint8_t>(0xcu),
    __E_ClearRecommendedGameplayModifiers = static_cast<uint8_t>(0xdu),
    __E_GetRecommendedGameplayModifiers = static_cast<uint8_t>(0xeu),
    __E_LevelLoadError = static_cast<uint8_t>(0xfu),
    __E_LevelLoadSuccess = static_cast<uint8_t>(0x10u),
    __E_StartLevel = static_cast<uint8_t>(0x11u),
    __E_GetStartedLevel = static_cast<uint8_t>(0x12u),
    __E_CancelLevelStart = static_cast<uint8_t>(0x13u),
    __E_GetMultiplayerGameState = static_cast<uint8_t>(0x14u),
    __E_SetMultiplayerGameState = static_cast<uint8_t>(0x15u),
    __E_GetIsReady = static_cast<uint8_t>(0x16u),
    __E_SetIsReady = static_cast<uint8_t>(0x17u),
    __E_SetStartGameTime = static_cast<uint8_t>(0x18u),
    __E_CancelStartGameTime = static_cast<uint8_t>(0x19u),
    __E_GetIsInLobby = static_cast<uint8_t>(0x1au),
    __E_SetIsInLobby = static_cast<uint8_t>(0x1bu),
    __E_GetCountdownEndTime = static_cast<uint8_t>(0x1cu),
    __E_SetCountdownEndTime = static_cast<uint8_t>(0x1du),
    __E_CancelCountdown = static_cast<uint8_t>(0x1eu),
    __E_GetOwnedSongPacks = static_cast<uint8_t>(0x1fu),
    __E_SetOwnedSongPacks = static_cast<uint8_t>(0x20u),
    __E_RequestKickPlayer = static_cast<uint8_t>(0x21u),
    __E_GetPermissionConfiguration = static_cast<uint8_t>(0x22u),
    __E_SetPermissionConfiguration = static_cast<uint8_t>(0x23u),
    __E_GetIsStartButtonEnabled = static_cast<uint8_t>(0x24u),
    __E_SetIsStartButtonEnabled = static_cast<uint8_t>(0x25u),
    __E_ClearSelectedBeatmap = static_cast<uint8_t>(0x26u),
    __E_ClearSelectedGameplayModifiers = static_cast<uint8_t>(0x27u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MenuRpcManager_RpcType_Unwrapped() const noexcept {
    return static_cast<__MenuRpcManager_RpcType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuRpcManager_RpcType();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr MenuRpcManager_RpcType(uint8_t value__) noexcept;

  /// @brief Field CancelCountdown value: U8(30)
  static ::GlobalNamespace::MenuRpcManager_RpcType const CancelCountdown;

  /// @brief Field CancelLevelStart value: U8(19)
  static ::GlobalNamespace::MenuRpcManager_RpcType const CancelLevelStart;

  /// @brief Field CancelStartGameTime value: U8(25)
  static ::GlobalNamespace::MenuRpcManager_RpcType const CancelStartGameTime;

  /// @brief Field ClearRecommendedBeatmap value: U8(8)
  static ::GlobalNamespace::MenuRpcManager_RpcType const ClearRecommendedBeatmap;

  /// @brief Field ClearRecommendedGameplayModifiers value: U8(13)
  static ::GlobalNamespace::MenuRpcManager_RpcType const ClearRecommendedGameplayModifiers;

  /// @brief Field ClearSelectedBeatmap value: U8(38)
  static ::GlobalNamespace::MenuRpcManager_RpcType const ClearSelectedBeatmap;

  /// @brief Field ClearSelectedGameplayModifiers value: U8(39)
  static ::GlobalNamespace::MenuRpcManager_RpcType const ClearSelectedGameplayModifiers;

  /// @brief Field GetCountdownEndTime value: U8(28)
  static ::GlobalNamespace::MenuRpcManager_RpcType const GetCountdownEndTime;

  /// @brief Field GetIsEntitledToLevel value: U8(1)
  static ::GlobalNamespace::MenuRpcManager_RpcType const GetIsEntitledToLevel;

  /// @brief Field GetIsInLobby value: U8(26)
  static ::GlobalNamespace::MenuRpcManager_RpcType const GetIsInLobby;

  /// @brief Field GetIsReady value: U8(22)
  static ::GlobalNamespace::MenuRpcManager_RpcType const GetIsReady;

  /// @brief Field GetIsStartButtonEnabled value: U8(36)
  static ::GlobalNamespace::MenuRpcManager_RpcType const GetIsStartButtonEnabled;

  /// @brief Field GetMultiplayerGameState value: U8(20)
  static ::GlobalNamespace::MenuRpcManager_RpcType const GetMultiplayerGameState;

  /// @brief Field GetOwnedSongPacks value: U8(31)
  static ::GlobalNamespace::MenuRpcManager_RpcType const GetOwnedSongPacks;

  /// @brief Field GetPermissionConfiguration value: U8(34)
  static ::GlobalNamespace::MenuRpcManager_RpcType const GetPermissionConfiguration;

  /// @brief Field GetRecommendedBeatmap value: U8(9)
  static ::GlobalNamespace::MenuRpcManager_RpcType const GetRecommendedBeatmap;

  /// @brief Field GetRecommendedGameplayModifiers value: U8(14)
  static ::GlobalNamespace::MenuRpcManager_RpcType const GetRecommendedGameplayModifiers;

  /// @brief Field GetSelectedBeatmap value: U8(6)
  static ::GlobalNamespace::MenuRpcManager_RpcType const GetSelectedBeatmap;

  /// @brief Field GetSelectedGameplayModifiers value: U8(11)
  static ::GlobalNamespace::MenuRpcManager_RpcType const GetSelectedGameplayModifiers;

  /// @brief Field GetStartedLevel value: U8(18)
  static ::GlobalNamespace::MenuRpcManager_RpcType const GetStartedLevel;

  /// @brief Field InvalidateLevelEntitlementStatuses value: U8(3)
  static ::GlobalNamespace::MenuRpcManager_RpcType const InvalidateLevelEntitlementStatuses;

  /// @brief Field LevelLoadError value: U8(15)
  static ::GlobalNamespace::MenuRpcManager_RpcType const LevelLoadError;

  /// @brief Field LevelLoadSuccess value: U8(16)
  static ::GlobalNamespace::MenuRpcManager_RpcType const LevelLoadSuccess;

  /// @brief Field RecommendBeatmap value: U8(7)
  static ::GlobalNamespace::MenuRpcManager_RpcType const RecommendBeatmap;

  /// @brief Field RecommendGameplayModifiers value: U8(12)
  static ::GlobalNamespace::MenuRpcManager_RpcType const RecommendGameplayModifiers;

  /// @brief Field RequestKickPlayer value: U8(33)
  static ::GlobalNamespace::MenuRpcManager_RpcType const RequestKickPlayer;

  /// @brief Field SelectLevelPack value: U8(4)
  static ::GlobalNamespace::MenuRpcManager_RpcType const SelectLevelPack;

  /// @brief Field SetCountdownEndTime value: U8(29)
  static ::GlobalNamespace::MenuRpcManager_RpcType const SetCountdownEndTime;

  /// @brief Field SetIsEntitledToLevel value: U8(2)
  static ::GlobalNamespace::MenuRpcManager_RpcType const SetIsEntitledToLevel;

  /// @brief Field SetIsInLobby value: U8(27)
  static ::GlobalNamespace::MenuRpcManager_RpcType const SetIsInLobby;

  /// @brief Field SetIsReady value: U8(23)
  static ::GlobalNamespace::MenuRpcManager_RpcType const SetIsReady;

  /// @brief Field SetIsStartButtonEnabled value: U8(37)
  static ::GlobalNamespace::MenuRpcManager_RpcType const SetIsStartButtonEnabled;

  /// @brief Field SetMultiplayerGameState value: U8(21)
  static ::GlobalNamespace::MenuRpcManager_RpcType const SetMultiplayerGameState;

  /// @brief Field SetOwnedSongPacks value: U8(32)
  static ::GlobalNamespace::MenuRpcManager_RpcType const SetOwnedSongPacks;

  /// @brief Field SetPermissionConfiguration value: U8(35)
  static ::GlobalNamespace::MenuRpcManager_RpcType const SetPermissionConfiguration;

  /// @brief Field SetPlayersMissingEntitlementsToLevel value: U8(0)
  static ::GlobalNamespace::MenuRpcManager_RpcType const SetPlayersMissingEntitlementsToLevel;

  /// @brief Field SetSelectedBeatmap value: U8(5)
  static ::GlobalNamespace::MenuRpcManager_RpcType const SetSelectedBeatmap;

  /// @brief Field SetSelectedGameplayModifiers value: U8(10)
  static ::GlobalNamespace::MenuRpcManager_RpcType const SetSelectedGameplayModifiers;

  /// @brief Field SetStartGameTime value: U8(24)
  static ::GlobalNamespace::MenuRpcManager_RpcType const SetStartGameTime;

  /// @brief Field StartLevel value: U8(17)
  static ::GlobalNamespace::MenuRpcManager_RpcType const StartLevel;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14838 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MenuRpcManager_RpcType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuRpcManager_RpcType, 0x1>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuRpcManager/GetPlayersPermissionConfigurationRpc
class CORDL_TYPE MenuRpcManager_GetPlayersPermissionConfigurationRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::MenuRpcManager_GetPlayersPermissionConfigurationRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22d59f8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuRpcManager_GetPlayersPermissionConfigurationRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_GetPlayersPermissionConfigurationRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuRpcManager_GetPlayersPermissionConfigurationRpc(MenuRpcManager_GetPlayersPermissionConfigurationRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_GetPlayersPermissionConfigurationRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuRpcManager_GetPlayersPermissionConfigurationRpc(MenuRpcManager_GetPlayersPermissionConfigurationRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14839 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuRpcManager_GetPlayersPermissionConfigurationRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall`1<T0>
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuRpcManager/SetPlayersPermissionConfigurationRpc
class CORDL_TYPE MenuRpcManager_SetPlayersPermissionConfigurationRpc : public ::GlobalNamespace::RemoteProcedureCall_1<::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*> {
public:
  // Declarations
  static inline ::GlobalNamespace::MenuRpcManager_SetPlayersPermissionConfigurationRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22d5a08, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuRpcManager_SetPlayersPermissionConfigurationRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_SetPlayersPermissionConfigurationRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuRpcManager_SetPlayersPermissionConfigurationRpc(MenuRpcManager_SetPlayersPermissionConfigurationRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_SetPlayersPermissionConfigurationRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuRpcManager_SetPlayersPermissionConfigurationRpc(MenuRpcManager_SetPlayersPermissionConfigurationRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14840 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuRpcManager_SetPlayersPermissionConfigurationRpc, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall`1<T0>
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuRpcManager/SetPlayersMissingEntitlementsToLevelRpc
class CORDL_TYPE MenuRpcManager_SetPlayersMissingEntitlementsToLevelRpc : public ::GlobalNamespace::RemoteProcedureCall_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*> {
public:
  // Declarations
  static inline ::GlobalNamespace::MenuRpcManager_SetPlayersMissingEntitlementsToLevelRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22d5a50, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuRpcManager_SetPlayersMissingEntitlementsToLevelRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_SetPlayersMissingEntitlementsToLevelRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuRpcManager_SetPlayersMissingEntitlementsToLevelRpc(MenuRpcManager_SetPlayersMissingEntitlementsToLevelRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_SetPlayersMissingEntitlementsToLevelRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuRpcManager_SetPlayersMissingEntitlementsToLevelRpc(MenuRpcManager_SetPlayersMissingEntitlementsToLevelRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14841 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuRpcManager_SetPlayersMissingEntitlementsToLevelRpc, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall`1<T0>
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuRpcManager/GetIsEntitledToLevelRpc
class CORDL_TYPE MenuRpcManager_GetIsEntitledToLevelRpc : public ::GlobalNamespace::RemoteProcedureCall_1<::StringW> {
public:
  // Declarations
  static inline ::GlobalNamespace::MenuRpcManager_GetIsEntitledToLevelRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22d5a98, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuRpcManager_GetIsEntitledToLevelRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_GetIsEntitledToLevelRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuRpcManager_GetIsEntitledToLevelRpc(MenuRpcManager_GetIsEntitledToLevelRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_GetIsEntitledToLevelRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuRpcManager_GetIsEntitledToLevelRpc(MenuRpcManager_GetIsEntitledToLevelRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14842 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuRpcManager_GetIsEntitledToLevelRpc, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall`2<T0, T1>
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuRpcManager/SetIsEntitledToLevelRpc
class CORDL_TYPE MenuRpcManager_SetIsEntitledToLevelRpc : public ::GlobalNamespace::RemoteProcedureCall_2<::StringW, int32_t> {
public:
  // Declarations
  static inline ::GlobalNamespace::MenuRpcManager_SetIsEntitledToLevelRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22d5ae0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuRpcManager_SetIsEntitledToLevelRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_SetIsEntitledToLevelRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuRpcManager_SetIsEntitledToLevelRpc(MenuRpcManager_SetIsEntitledToLevelRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_SetIsEntitledToLevelRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuRpcManager_SetIsEntitledToLevelRpc(MenuRpcManager_SetIsEntitledToLevelRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14843 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuRpcManager_SetIsEntitledToLevelRpc, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuRpcManager/InvalidateLevelEntitlementStatusesRpc
class CORDL_TYPE MenuRpcManager_InvalidateLevelEntitlementStatusesRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::MenuRpcManager_InvalidateLevelEntitlementStatusesRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22d5b28, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuRpcManager_InvalidateLevelEntitlementStatusesRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_InvalidateLevelEntitlementStatusesRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuRpcManager_InvalidateLevelEntitlementStatusesRpc(MenuRpcManager_InvalidateLevelEntitlementStatusesRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_InvalidateLevelEntitlementStatusesRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuRpcManager_InvalidateLevelEntitlementStatusesRpc(MenuRpcManager_InvalidateLevelEntitlementStatusesRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14844 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuRpcManager_InvalidateLevelEntitlementStatusesRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall`1<T0>
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuRpcManager/SelectLevelPackRpc
class CORDL_TYPE MenuRpcManager_SelectLevelPackRpc : public ::GlobalNamespace::RemoteProcedureCall_1<::StringW> {
public:
  // Declarations
  static inline ::GlobalNamespace::MenuRpcManager_SelectLevelPackRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22d5b30, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuRpcManager_SelectLevelPackRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_SelectLevelPackRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuRpcManager_SelectLevelPackRpc(MenuRpcManager_SelectLevelPackRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_SelectLevelPackRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuRpcManager_SelectLevelPackRpc(MenuRpcManager_SelectLevelPackRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14845 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuRpcManager_SelectLevelPackRpc, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall`1<T0>
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuRpcManager/SetSelectedBeatmapRpc
class CORDL_TYPE MenuRpcManager_SetSelectedBeatmapRpc : public ::GlobalNamespace::RemoteProcedureCall_1<::GlobalNamespace::BeatmapKeyNetSerializable*> {
public:
  // Declarations
  static inline ::GlobalNamespace::MenuRpcManager_SetSelectedBeatmapRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22d5b78, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuRpcManager_SetSelectedBeatmapRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_SetSelectedBeatmapRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuRpcManager_SetSelectedBeatmapRpc(MenuRpcManager_SetSelectedBeatmapRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_SetSelectedBeatmapRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuRpcManager_SetSelectedBeatmapRpc(MenuRpcManager_SetSelectedBeatmapRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14846 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuRpcManager_SetSelectedBeatmapRpc, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuRpcManager/ClearSelectedBeatmapRpc
class CORDL_TYPE MenuRpcManager_ClearSelectedBeatmapRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::MenuRpcManager_ClearSelectedBeatmapRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22d5bc0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuRpcManager_ClearSelectedBeatmapRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_ClearSelectedBeatmapRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuRpcManager_ClearSelectedBeatmapRpc(MenuRpcManager_ClearSelectedBeatmapRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_ClearSelectedBeatmapRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuRpcManager_ClearSelectedBeatmapRpc(MenuRpcManager_ClearSelectedBeatmapRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14847 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuRpcManager_ClearSelectedBeatmapRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuRpcManager/GetSelectedBeatmapRpc
class CORDL_TYPE MenuRpcManager_GetSelectedBeatmapRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::MenuRpcManager_GetSelectedBeatmapRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22d5bc8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuRpcManager_GetSelectedBeatmapRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_GetSelectedBeatmapRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuRpcManager_GetSelectedBeatmapRpc(MenuRpcManager_GetSelectedBeatmapRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_GetSelectedBeatmapRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuRpcManager_GetSelectedBeatmapRpc(MenuRpcManager_GetSelectedBeatmapRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14848 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuRpcManager_GetSelectedBeatmapRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall`1<T0>
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuRpcManager/RecommendBeatmapRpc
class CORDL_TYPE MenuRpcManager_RecommendBeatmapRpc : public ::GlobalNamespace::RemoteProcedureCall_1<::GlobalNamespace::BeatmapKeyNetSerializable*> {
public:
  // Declarations
  static inline ::GlobalNamespace::MenuRpcManager_RecommendBeatmapRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22d5bd0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuRpcManager_RecommendBeatmapRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_RecommendBeatmapRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuRpcManager_RecommendBeatmapRpc(MenuRpcManager_RecommendBeatmapRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_RecommendBeatmapRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuRpcManager_RecommendBeatmapRpc(MenuRpcManager_RecommendBeatmapRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14849 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuRpcManager_RecommendBeatmapRpc, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuRpcManager/ClearRecommendedBeatmapRpc
class CORDL_TYPE MenuRpcManager_ClearRecommendedBeatmapRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::MenuRpcManager_ClearRecommendedBeatmapRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22d5c18, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuRpcManager_ClearRecommendedBeatmapRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_ClearRecommendedBeatmapRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuRpcManager_ClearRecommendedBeatmapRpc(MenuRpcManager_ClearRecommendedBeatmapRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_ClearRecommendedBeatmapRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuRpcManager_ClearRecommendedBeatmapRpc(MenuRpcManager_ClearRecommendedBeatmapRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14850 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuRpcManager_ClearRecommendedBeatmapRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuRpcManager/GetRecommendedBeatmapRpc
class CORDL_TYPE MenuRpcManager_GetRecommendedBeatmapRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::MenuRpcManager_GetRecommendedBeatmapRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22d5c20, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuRpcManager_GetRecommendedBeatmapRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_GetRecommendedBeatmapRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuRpcManager_GetRecommendedBeatmapRpc(MenuRpcManager_GetRecommendedBeatmapRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_GetRecommendedBeatmapRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuRpcManager_GetRecommendedBeatmapRpc(MenuRpcManager_GetRecommendedBeatmapRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14851 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuRpcManager_GetRecommendedBeatmapRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall`1<T0>
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuRpcManager/SetSelectedGameplayModifiersRpc
class CORDL_TYPE MenuRpcManager_SetSelectedGameplayModifiersRpc : public ::GlobalNamespace::RemoteProcedureCall_1<::GlobalNamespace::GameplayModifiers*> {
public:
  // Declarations
  static inline ::GlobalNamespace::MenuRpcManager_SetSelectedGameplayModifiersRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22d5c28, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuRpcManager_SetSelectedGameplayModifiersRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_SetSelectedGameplayModifiersRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuRpcManager_SetSelectedGameplayModifiersRpc(MenuRpcManager_SetSelectedGameplayModifiersRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_SetSelectedGameplayModifiersRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuRpcManager_SetSelectedGameplayModifiersRpc(MenuRpcManager_SetSelectedGameplayModifiersRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14852 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuRpcManager_SetSelectedGameplayModifiersRpc, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuRpcManager/ClearSelectedGameplayModifiersRpc
class CORDL_TYPE MenuRpcManager_ClearSelectedGameplayModifiersRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::MenuRpcManager_ClearSelectedGameplayModifiersRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22d5c70, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuRpcManager_ClearSelectedGameplayModifiersRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_ClearSelectedGameplayModifiersRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuRpcManager_ClearSelectedGameplayModifiersRpc(MenuRpcManager_ClearSelectedGameplayModifiersRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_ClearSelectedGameplayModifiersRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuRpcManager_ClearSelectedGameplayModifiersRpc(MenuRpcManager_ClearSelectedGameplayModifiersRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14853 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuRpcManager_ClearSelectedGameplayModifiersRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuRpcManager/GetSelectedGameplayModifiersRpc
class CORDL_TYPE MenuRpcManager_GetSelectedGameplayModifiersRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::MenuRpcManager_GetSelectedGameplayModifiersRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22d5c78, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuRpcManager_GetSelectedGameplayModifiersRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_GetSelectedGameplayModifiersRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuRpcManager_GetSelectedGameplayModifiersRpc(MenuRpcManager_GetSelectedGameplayModifiersRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_GetSelectedGameplayModifiersRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuRpcManager_GetSelectedGameplayModifiersRpc(MenuRpcManager_GetSelectedGameplayModifiersRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14854 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuRpcManager_GetSelectedGameplayModifiersRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall`1<T0>
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuRpcManager/RecommendGameplayModifiersRpc
class CORDL_TYPE MenuRpcManager_RecommendGameplayModifiersRpc : public ::GlobalNamespace::RemoteProcedureCall_1<::GlobalNamespace::GameplayModifiers*> {
public:
  // Declarations
  static inline ::GlobalNamespace::MenuRpcManager_RecommendGameplayModifiersRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22d5c80, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuRpcManager_RecommendGameplayModifiersRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_RecommendGameplayModifiersRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuRpcManager_RecommendGameplayModifiersRpc(MenuRpcManager_RecommendGameplayModifiersRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_RecommendGameplayModifiersRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuRpcManager_RecommendGameplayModifiersRpc(MenuRpcManager_RecommendGameplayModifiersRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14855 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuRpcManager_RecommendGameplayModifiersRpc, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuRpcManager/ClearRecommendedGameplayModifiersRpc
class CORDL_TYPE MenuRpcManager_ClearRecommendedGameplayModifiersRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::MenuRpcManager_ClearRecommendedGameplayModifiersRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22d5cc8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuRpcManager_ClearRecommendedGameplayModifiersRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_ClearRecommendedGameplayModifiersRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuRpcManager_ClearRecommendedGameplayModifiersRpc(MenuRpcManager_ClearRecommendedGameplayModifiersRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_ClearRecommendedGameplayModifiersRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuRpcManager_ClearRecommendedGameplayModifiersRpc(MenuRpcManager_ClearRecommendedGameplayModifiersRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14856 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuRpcManager_ClearRecommendedGameplayModifiersRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuRpcManager/GetRecommendedGameplayModifiersRpc
class CORDL_TYPE MenuRpcManager_GetRecommendedGameplayModifiersRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::MenuRpcManager_GetRecommendedGameplayModifiersRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22d5cd0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuRpcManager_GetRecommendedGameplayModifiersRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_GetRecommendedGameplayModifiersRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuRpcManager_GetRecommendedGameplayModifiersRpc(MenuRpcManager_GetRecommendedGameplayModifiersRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_GetRecommendedGameplayModifiersRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuRpcManager_GetRecommendedGameplayModifiersRpc(MenuRpcManager_GetRecommendedGameplayModifiersRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14857 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuRpcManager_GetRecommendedGameplayModifiersRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuRpcManager/GetIsStartButtonEnabledRpc
class CORDL_TYPE MenuRpcManager_GetIsStartButtonEnabledRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::MenuRpcManager_GetIsStartButtonEnabledRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22d5cd8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuRpcManager_GetIsStartButtonEnabledRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_GetIsStartButtonEnabledRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuRpcManager_GetIsStartButtonEnabledRpc(MenuRpcManager_GetIsStartButtonEnabledRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_GetIsStartButtonEnabledRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuRpcManager_GetIsStartButtonEnabledRpc(MenuRpcManager_GetIsStartButtonEnabledRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14858 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuRpcManager_GetIsStartButtonEnabledRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies CannotStartGameReason, RemoteProcedureCall`1<T0>
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuRpcManager/SetIsStartButtonEnabledRpc
class CORDL_TYPE MenuRpcManager_SetIsStartButtonEnabledRpc : public ::GlobalNamespace::RemoteProcedureCall_1<::GlobalNamespace::CannotStartGameReason> {
public:
  // Declarations
  static inline ::GlobalNamespace::MenuRpcManager_SetIsStartButtonEnabledRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22d5ce0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuRpcManager_SetIsStartButtonEnabledRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_SetIsStartButtonEnabledRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuRpcManager_SetIsStartButtonEnabledRpc(MenuRpcManager_SetIsStartButtonEnabledRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_SetIsStartButtonEnabledRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuRpcManager_SetIsStartButtonEnabledRpc(MenuRpcManager_SetIsStartButtonEnabledRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14859 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuRpcManager_SetIsStartButtonEnabledRpc, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall`1<T0>
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuRpcManager/LevelLoadErrorRpc
class CORDL_TYPE MenuRpcManager_LevelLoadErrorRpc : public ::GlobalNamespace::RemoteProcedureCall_1<::StringW> {
public:
  // Declarations
  static inline ::GlobalNamespace::MenuRpcManager_LevelLoadErrorRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22d5d28, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuRpcManager_LevelLoadErrorRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_LevelLoadErrorRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuRpcManager_LevelLoadErrorRpc(MenuRpcManager_LevelLoadErrorRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_LevelLoadErrorRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuRpcManager_LevelLoadErrorRpc(MenuRpcManager_LevelLoadErrorRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14860 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuRpcManager_LevelLoadErrorRpc, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall`1<T0>
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuRpcManager/LevelLoadSuccessRpc
class CORDL_TYPE MenuRpcManager_LevelLoadSuccessRpc : public ::GlobalNamespace::RemoteProcedureCall_1<::StringW> {
public:
  // Declarations
  static inline ::GlobalNamespace::MenuRpcManager_LevelLoadSuccessRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22d5d70, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuRpcManager_LevelLoadSuccessRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_LevelLoadSuccessRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuRpcManager_LevelLoadSuccessRpc(MenuRpcManager_LevelLoadSuccessRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_LevelLoadSuccessRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuRpcManager_LevelLoadSuccessRpc(MenuRpcManager_LevelLoadSuccessRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14861 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuRpcManager_LevelLoadSuccessRpc, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall`3<T0, T1, T2>
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuRpcManager/StartLevelRpc
class CORDL_TYPE MenuRpcManager_StartLevelRpc : public ::GlobalNamespace::RemoteProcedureCall_3<::GlobalNamespace::BeatmapKeyNetSerializable*, ::GlobalNamespace::GameplayModifiers*, int64_t> {
public:
  // Declarations
  static inline ::GlobalNamespace::MenuRpcManager_StartLevelRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22d5db8, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuRpcManager_StartLevelRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_StartLevelRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuRpcManager_StartLevelRpc(MenuRpcManager_StartLevelRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_StartLevelRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuRpcManager_StartLevelRpc(MenuRpcManager_StartLevelRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14862 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuRpcManager_StartLevelRpc, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuRpcManager/GetStartedLevelRpc
class CORDL_TYPE MenuRpcManager_GetStartedLevelRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::MenuRpcManager_GetStartedLevelRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22d5e00, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuRpcManager_GetStartedLevelRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_GetStartedLevelRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuRpcManager_GetStartedLevelRpc(MenuRpcManager_GetStartedLevelRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_GetStartedLevelRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuRpcManager_GetStartedLevelRpc(MenuRpcManager_GetStartedLevelRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14863 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuRpcManager_GetStartedLevelRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuRpcManager/GetMultiplayerGameStateRpc
class CORDL_TYPE MenuRpcManager_GetMultiplayerGameStateRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::MenuRpcManager_GetMultiplayerGameStateRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22d5e08, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuRpcManager_GetMultiplayerGameStateRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_GetMultiplayerGameStateRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuRpcManager_GetMultiplayerGameStateRpc(MenuRpcManager_GetMultiplayerGameStateRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_GetMultiplayerGameStateRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuRpcManager_GetMultiplayerGameStateRpc(MenuRpcManager_GetMultiplayerGameStateRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14864 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuRpcManager_GetMultiplayerGameStateRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies MultiplayerGameState, RemoteProcedureCall`1<T0>
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuRpcManager/SetMultiplayerGameStateRpc
class CORDL_TYPE MenuRpcManager_SetMultiplayerGameStateRpc : public ::GlobalNamespace::RemoteProcedureCall_1<::GlobalNamespace::MultiplayerGameState> {
public:
  // Declarations
  static inline ::GlobalNamespace::MenuRpcManager_SetMultiplayerGameStateRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22d5e10, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuRpcManager_SetMultiplayerGameStateRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_SetMultiplayerGameStateRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuRpcManager_SetMultiplayerGameStateRpc(MenuRpcManager_SetMultiplayerGameStateRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_SetMultiplayerGameStateRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuRpcManager_SetMultiplayerGameStateRpc(MenuRpcManager_SetMultiplayerGameStateRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14865 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuRpcManager_SetMultiplayerGameStateRpc, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuRpcManager/CancelCountdownRpc
class CORDL_TYPE MenuRpcManager_CancelCountdownRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::MenuRpcManager_CancelCountdownRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22d5e58, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuRpcManager_CancelCountdownRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_CancelCountdownRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuRpcManager_CancelCountdownRpc(MenuRpcManager_CancelCountdownRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_CancelCountdownRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuRpcManager_CancelCountdownRpc(MenuRpcManager_CancelCountdownRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14866 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuRpcManager_CancelCountdownRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall`1<T0>
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuRpcManager/SetCountdownEndTimeRpc
class CORDL_TYPE MenuRpcManager_SetCountdownEndTimeRpc : public ::GlobalNamespace::RemoteProcedureCall_1<int64_t> {
public:
  // Declarations
  static inline ::GlobalNamespace::MenuRpcManager_SetCountdownEndTimeRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22d5e60, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuRpcManager_SetCountdownEndTimeRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_SetCountdownEndTimeRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuRpcManager_SetCountdownEndTimeRpc(MenuRpcManager_SetCountdownEndTimeRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_SetCountdownEndTimeRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuRpcManager_SetCountdownEndTimeRpc(MenuRpcManager_SetCountdownEndTimeRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14867 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuRpcManager_SetCountdownEndTimeRpc, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuRpcManager/GetCountdownEndTimeRpc
class CORDL_TYPE MenuRpcManager_GetCountdownEndTimeRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::MenuRpcManager_GetCountdownEndTimeRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22d5ea8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuRpcManager_GetCountdownEndTimeRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_GetCountdownEndTimeRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuRpcManager_GetCountdownEndTimeRpc(MenuRpcManager_GetCountdownEndTimeRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_GetCountdownEndTimeRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuRpcManager_GetCountdownEndTimeRpc(MenuRpcManager_GetCountdownEndTimeRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14868 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuRpcManager_GetCountdownEndTimeRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuRpcManager/CancelLevelStartRpc
class CORDL_TYPE MenuRpcManager_CancelLevelStartRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::MenuRpcManager_CancelLevelStartRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22d5eb0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuRpcManager_CancelLevelStartRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_CancelLevelStartRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuRpcManager_CancelLevelStartRpc(MenuRpcManager_CancelLevelStartRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_CancelLevelStartRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuRpcManager_CancelLevelStartRpc(MenuRpcManager_CancelLevelStartRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14869 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuRpcManager_CancelLevelStartRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuRpcManager/GetIsReadyRpc
class CORDL_TYPE MenuRpcManager_GetIsReadyRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::MenuRpcManager_GetIsReadyRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22d5eb8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuRpcManager_GetIsReadyRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_GetIsReadyRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuRpcManager_GetIsReadyRpc(MenuRpcManager_GetIsReadyRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_GetIsReadyRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuRpcManager_GetIsReadyRpc(MenuRpcManager_GetIsReadyRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14870 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuRpcManager_GetIsReadyRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall`1<T0>
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuRpcManager/SetIsReadyRpc
class CORDL_TYPE MenuRpcManager_SetIsReadyRpc : public ::GlobalNamespace::RemoteProcedureCall_1<bool> {
public:
  // Declarations
  static inline ::GlobalNamespace::MenuRpcManager_SetIsReadyRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22d5ec0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuRpcManager_SetIsReadyRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_SetIsReadyRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuRpcManager_SetIsReadyRpc(MenuRpcManager_SetIsReadyRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_SetIsReadyRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuRpcManager_SetIsReadyRpc(MenuRpcManager_SetIsReadyRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14871 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuRpcManager_SetIsReadyRpc, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall`1<T0>
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuRpcManager/SetStartGameTimeRpc
class CORDL_TYPE MenuRpcManager_SetStartGameTimeRpc : public ::GlobalNamespace::RemoteProcedureCall_1<int64_t> {
public:
  // Declarations
  static inline ::GlobalNamespace::MenuRpcManager_SetStartGameTimeRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22d5f08, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuRpcManager_SetStartGameTimeRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_SetStartGameTimeRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuRpcManager_SetStartGameTimeRpc(MenuRpcManager_SetStartGameTimeRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_SetStartGameTimeRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuRpcManager_SetStartGameTimeRpc(MenuRpcManager_SetStartGameTimeRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14872 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuRpcManager_SetStartGameTimeRpc, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuRpcManager/CancelStartGameTimeRpc
class CORDL_TYPE MenuRpcManager_CancelStartGameTimeRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::MenuRpcManager_CancelStartGameTimeRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22d5f50, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuRpcManager_CancelStartGameTimeRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_CancelStartGameTimeRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuRpcManager_CancelStartGameTimeRpc(MenuRpcManager_CancelStartGameTimeRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_CancelStartGameTimeRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuRpcManager_CancelStartGameTimeRpc(MenuRpcManager_CancelStartGameTimeRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14873 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuRpcManager_CancelStartGameTimeRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuRpcManager/GetIsInLobbyRpc
class CORDL_TYPE MenuRpcManager_GetIsInLobbyRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::MenuRpcManager_GetIsInLobbyRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22d5f58, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuRpcManager_GetIsInLobbyRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_GetIsInLobbyRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuRpcManager_GetIsInLobbyRpc(MenuRpcManager_GetIsInLobbyRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_GetIsInLobbyRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuRpcManager_GetIsInLobbyRpc(MenuRpcManager_GetIsInLobbyRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14874 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuRpcManager_GetIsInLobbyRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall`1<T0>
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuRpcManager/SetIsInLobbyRpc
class CORDL_TYPE MenuRpcManager_SetIsInLobbyRpc : public ::GlobalNamespace::RemoteProcedureCall_1<bool> {
public:
  // Declarations
  static inline ::GlobalNamespace::MenuRpcManager_SetIsInLobbyRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22d5f60, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuRpcManager_SetIsInLobbyRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_SetIsInLobbyRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuRpcManager_SetIsInLobbyRpc(MenuRpcManager_SetIsInLobbyRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_SetIsInLobbyRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuRpcManager_SetIsInLobbyRpc(MenuRpcManager_SetIsInLobbyRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14875 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuRpcManager_SetIsInLobbyRpc, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuRpcManager/GetOwnedSongPacksRpc
class CORDL_TYPE MenuRpcManager_GetOwnedSongPacksRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::MenuRpcManager_GetOwnedSongPacksRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22d5fa8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuRpcManager_GetOwnedSongPacksRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_GetOwnedSongPacksRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuRpcManager_GetOwnedSongPacksRpc(MenuRpcManager_GetOwnedSongPacksRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_GetOwnedSongPacksRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuRpcManager_GetOwnedSongPacksRpc(MenuRpcManager_GetOwnedSongPacksRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14876 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuRpcManager_GetOwnedSongPacksRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall`1<T0>, SongPackMask
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuRpcManager/SetOwnedSongPacksRpc
class CORDL_TYPE MenuRpcManager_SetOwnedSongPacksRpc : public ::GlobalNamespace::RemoteProcedureCall_1<::GlobalNamespace::SongPackMask> {
public:
  // Declarations
  static inline ::GlobalNamespace::MenuRpcManager_SetOwnedSongPacksRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22d5fb0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuRpcManager_SetOwnedSongPacksRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_SetOwnedSongPacksRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuRpcManager_SetOwnedSongPacksRpc(MenuRpcManager_SetOwnedSongPacksRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_SetOwnedSongPacksRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuRpcManager_SetOwnedSongPacksRpc(MenuRpcManager_SetOwnedSongPacksRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14877 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuRpcManager_SetOwnedSongPacksRpc, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies RemoteProcedureCall`1<T0>
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuRpcManager/RequestKickPlayerRpc
class CORDL_TYPE MenuRpcManager_RequestKickPlayerRpc : public ::GlobalNamespace::RemoteProcedureCall_1<::StringW> {
public:
  // Declarations
  static inline ::GlobalNamespace::MenuRpcManager_RequestKickPlayerRpc* New_ctor();

  /// @brief Method .ctor, addr 0x22d5ff8, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuRpcManager_RequestKickPlayerRpc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_RequestKickPlayerRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuRpcManager_RequestKickPlayerRpc(MenuRpcManager_RequestKickPlayerRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager_RequestKickPlayerRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuRpcManager_RequestKickPlayerRpc(MenuRpcManager_RequestKickPlayerRpc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14878 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuRpcManager_RequestKickPlayerRpc, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IMenuRpcManager, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuRpcManager
class CORDL_TYPE MenuRpcManager : public ::System::Object {
public:
  // Declarations
  using CancelCountdownRpc = ::GlobalNamespace::MenuRpcManager_CancelCountdownRpc;

  using CancelLevelStartRpc = ::GlobalNamespace::MenuRpcManager_CancelLevelStartRpc;

  using CancelStartGameTimeRpc = ::GlobalNamespace::MenuRpcManager_CancelStartGameTimeRpc;

  using ClearRecommendedBeatmapRpc = ::GlobalNamespace::MenuRpcManager_ClearRecommendedBeatmapRpc;

  using ClearRecommendedGameplayModifiersRpc = ::GlobalNamespace::MenuRpcManager_ClearRecommendedGameplayModifiersRpc;

  using ClearSelectedBeatmapRpc = ::GlobalNamespace::MenuRpcManager_ClearSelectedBeatmapRpc;

  using ClearSelectedGameplayModifiersRpc = ::GlobalNamespace::MenuRpcManager_ClearSelectedGameplayModifiersRpc;

  using GetCountdownEndTimeRpc = ::GlobalNamespace::MenuRpcManager_GetCountdownEndTimeRpc;

  using GetIsEntitledToLevelRpc = ::GlobalNamespace::MenuRpcManager_GetIsEntitledToLevelRpc;

  using GetIsInLobbyRpc = ::GlobalNamespace::MenuRpcManager_GetIsInLobbyRpc;

  using GetIsReadyRpc = ::GlobalNamespace::MenuRpcManager_GetIsReadyRpc;

  using GetIsStartButtonEnabledRpc = ::GlobalNamespace::MenuRpcManager_GetIsStartButtonEnabledRpc;

  using GetMultiplayerGameStateRpc = ::GlobalNamespace::MenuRpcManager_GetMultiplayerGameStateRpc;

  using GetOwnedSongPacksRpc = ::GlobalNamespace::MenuRpcManager_GetOwnedSongPacksRpc;

  using GetPlayersPermissionConfigurationRpc = ::GlobalNamespace::MenuRpcManager_GetPlayersPermissionConfigurationRpc;

  using GetRecommendedBeatmapRpc = ::GlobalNamespace::MenuRpcManager_GetRecommendedBeatmapRpc;

  using GetRecommendedGameplayModifiersRpc = ::GlobalNamespace::MenuRpcManager_GetRecommendedGameplayModifiersRpc;

  using GetSelectedBeatmapRpc = ::GlobalNamespace::MenuRpcManager_GetSelectedBeatmapRpc;

  using GetSelectedGameplayModifiersRpc = ::GlobalNamespace::MenuRpcManager_GetSelectedGameplayModifiersRpc;

  using GetStartedLevelRpc = ::GlobalNamespace::MenuRpcManager_GetStartedLevelRpc;

  using InvalidateLevelEntitlementStatusesRpc = ::GlobalNamespace::MenuRpcManager_InvalidateLevelEntitlementStatusesRpc;

  using LevelLoadErrorRpc = ::GlobalNamespace::MenuRpcManager_LevelLoadErrorRpc;

  using LevelLoadSuccessRpc = ::GlobalNamespace::MenuRpcManager_LevelLoadSuccessRpc;

  using RecommendBeatmapRpc = ::GlobalNamespace::MenuRpcManager_RecommendBeatmapRpc;

  using RecommendGameplayModifiersRpc = ::GlobalNamespace::MenuRpcManager_RecommendGameplayModifiersRpc;

  using RequestKickPlayerRpc = ::GlobalNamespace::MenuRpcManager_RequestKickPlayerRpc;

  using RpcType = ::GlobalNamespace::MenuRpcManager_RpcType;

  using SelectLevelPackRpc = ::GlobalNamespace::MenuRpcManager_SelectLevelPackRpc;

  using SetCountdownEndTimeRpc = ::GlobalNamespace::MenuRpcManager_SetCountdownEndTimeRpc;

  using SetIsEntitledToLevelRpc = ::GlobalNamespace::MenuRpcManager_SetIsEntitledToLevelRpc;

  using SetIsInLobbyRpc = ::GlobalNamespace::MenuRpcManager_SetIsInLobbyRpc;

  using SetIsReadyRpc = ::GlobalNamespace::MenuRpcManager_SetIsReadyRpc;

  using SetIsStartButtonEnabledRpc = ::GlobalNamespace::MenuRpcManager_SetIsStartButtonEnabledRpc;

  using SetMultiplayerGameStateRpc = ::GlobalNamespace::MenuRpcManager_SetMultiplayerGameStateRpc;

  using SetOwnedSongPacksRpc = ::GlobalNamespace::MenuRpcManager_SetOwnedSongPacksRpc;

  using SetPlayersMissingEntitlementsToLevelRpc = ::GlobalNamespace::MenuRpcManager_SetPlayersMissingEntitlementsToLevelRpc;

  using SetPlayersPermissionConfigurationRpc = ::GlobalNamespace::MenuRpcManager_SetPlayersPermissionConfigurationRpc;

  using SetSelectedBeatmapRpc = ::GlobalNamespace::MenuRpcManager_SetSelectedBeatmapRpc;

  using SetSelectedGameplayModifiersRpc = ::GlobalNamespace::MenuRpcManager_SetSelectedGameplayModifiersRpc;

  using SetStartGameTimeRpc = ::GlobalNamespace::MenuRpcManager_SetStartGameTimeRpc;

  using StartLevelRpc = ::GlobalNamespace::MenuRpcManager_StartLevelRpc;

  /// @brief Field _multiplayerSessionManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionManager,
                      put = __cordl_internal_set__multiplayerSessionManager)) ::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field _rpcHandler, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__rpcHandler, put = __cordl_internal_set__rpcHandler)) ::GlobalNamespace::RpcHandler_1<::GlobalNamespace::MenuRpcManager_RpcType>* _rpcHandler;

  /// @brief Field cancelCountdownEvent, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_cancelCountdownEvent, put = __cordl_internal_set_cancelCountdownEvent)) ::System::Action_1<::StringW>* cancelCountdownEvent;

  /// @brief Field cancelStartGameTimeEvent, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get_cancelStartGameTimeEvent, put = __cordl_internal_set_cancelStartGameTimeEvent)) ::System::Action_1<::StringW>* cancelStartGameTimeEvent;

  /// @brief Field cancelledLevelStartEvent, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_cancelledLevelStartEvent, put = __cordl_internal_set_cancelledLevelStartEvent)) ::System::Action_1<::StringW>* cancelledLevelStartEvent;

  /// @brief Field clearRecommendedBeatmapEvent, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_clearRecommendedBeatmapEvent, put = __cordl_internal_set_clearRecommendedBeatmapEvent)) ::System::Action_1<::StringW>* clearRecommendedBeatmapEvent;

  /// @brief Field clearRecommendedGameplayModifiersEvent, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_clearRecommendedGameplayModifiersEvent,
                      put = __cordl_internal_set_clearRecommendedGameplayModifiersEvent)) ::System::Action_1<::StringW>* clearRecommendedGameplayModifiersEvent;

  /// @brief Field clearSelectedBeatmapEvent, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_clearSelectedBeatmapEvent, put = __cordl_internal_set_clearSelectedBeatmapEvent)) ::System::Action_1<::StringW>* clearSelectedBeatmapEvent;

  /// @brief Field clearSelectedGameplayModifiersEvent, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_clearSelectedGameplayModifiersEvent,
                      put = __cordl_internal_set_clearSelectedGameplayModifiersEvent)) ::System::Action_1<::StringW>* clearSelectedGameplayModifiersEvent;

  __declspec(property(get = get_enabled, put = set_enabled)) bool enabled;

  __declspec(property(get = get_enabledForAllPlayers)) bool enabledForAllPlayers;

  /// @brief Field getCountdownEndTimeEvent, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_getCountdownEndTimeEvent, put = __cordl_internal_set_getCountdownEndTimeEvent)) ::System::Action_1<::StringW>* getCountdownEndTimeEvent;

  /// @brief Field getIsEntitledToLevelEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_getIsEntitledToLevelEvent, put = __cordl_internal_set_getIsEntitledToLevelEvent)) ::System::Action_2<::StringW, ::StringW>* getIsEntitledToLevelEvent;

  /// @brief Field getIsInLobbyEvent, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get_getIsInLobbyEvent, put = __cordl_internal_set_getIsInLobbyEvent)) ::System::Action_1<::StringW>* getIsInLobbyEvent;

  /// @brief Field getIsReadyEvent, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_getIsReadyEvent, put = __cordl_internal_set_getIsReadyEvent)) ::System::Action_1<::StringW>* getIsReadyEvent;

  /// @brief Field getIsStartButtonEnabledEvent, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_getIsStartButtonEnabledEvent, put = __cordl_internal_set_getIsStartButtonEnabledEvent)) ::System::Action_1<::StringW>* getIsStartButtonEnabledEvent;

  /// @brief Field getMultiplayerGameStateEvent, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_getMultiplayerGameStateEvent, put = __cordl_internal_set_getMultiplayerGameStateEvent)) ::System::Action_1<::StringW>* getMultiplayerGameStateEvent;

  /// @brief Field getOwnedSongPacksEvent, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get_getOwnedSongPacksEvent, put = __cordl_internal_set_getOwnedSongPacksEvent)) ::System::Action_1<::StringW>* getOwnedSongPacksEvent;

  /// @brief Field getPlayersPermissionConfigurationEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_getPlayersPermissionConfigurationEvent,
                      put = __cordl_internal_set_getPlayersPermissionConfigurationEvent)) ::System::Action_1<::StringW>* getPlayersPermissionConfigurationEvent;

  /// @brief Field getRecommendedBeatmapEvent, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_getRecommendedBeatmapEvent, put = __cordl_internal_set_getRecommendedBeatmapEvent)) ::System::Action_1<::StringW>* getRecommendedBeatmapEvent;

  /// @brief Field getRecommendedGameplayModifiersEvent, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_getRecommendedGameplayModifiersEvent,
                      put = __cordl_internal_set_getRecommendedGameplayModifiersEvent)) ::System::Action_1<::StringW>* getRecommendedGameplayModifiersEvent;

  /// @brief Field getSelectedBeatmapEvent, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_getSelectedBeatmapEvent, put = __cordl_internal_set_getSelectedBeatmapEvent)) ::System::Action_1<::StringW>* getSelectedBeatmapEvent;

  /// @brief Field getSelectedGameplayModifiersEvent, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_getSelectedGameplayModifiersEvent,
                      put = __cordl_internal_set_getSelectedGameplayModifiersEvent)) ::System::Action_1<::StringW>* getSelectedGameplayModifiersEvent;

  /// @brief Field getStartedLevelEvent, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_getStartedLevelEvent, put = __cordl_internal_set_getStartedLevelEvent)) ::System::Action_1<::StringW>* getStartedLevelEvent;

  /// @brief Field levelEntitlementStatusesInvalidatedEvent, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_levelEntitlementStatusesInvalidatedEvent,
                      put = __cordl_internal_set_levelEntitlementStatusesInvalidatedEvent)) ::System::Action_1<::StringW>* levelEntitlementStatusesInvalidatedEvent;

  /// @brief Field levelLoadErrorEvent, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_levelLoadErrorEvent, put = __cordl_internal_set_levelLoadErrorEvent)) ::System::Action_2<::StringW, ::StringW>* levelLoadErrorEvent;

  /// @brief Field levelLoadSuccessEvent, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_levelLoadSuccessEvent, put = __cordl_internal_set_levelLoadSuccessEvent)) ::System::Action_2<::StringW, ::StringW>* levelLoadSuccessEvent;

  __declspec(property(get = get_multiplayerSessionManager)) ::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;

  /// @brief Field recommendBeatmapEvent, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_recommendBeatmapEvent,
                      put = __cordl_internal_set_recommendBeatmapEvent)) ::System::Action_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>* recommendBeatmapEvent;

  /// @brief Field recommendGameplayModifiersEvent, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_recommendGameplayModifiersEvent,
                      put = __cordl_internal_set_recommendGameplayModifiersEvent)) ::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>* recommendGameplayModifiersEvent;

  /// @brief Field requestedKickPlayerEvent, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get_requestedKickPlayerEvent, put = __cordl_internal_set_requestedKickPlayerEvent)) ::System::Action_2<::StringW, ::StringW>* requestedKickPlayerEvent;

  /// @brief Field selectedLevelPackEvent, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_selectedLevelPackEvent, put = __cordl_internal_set_selectedLevelPackEvent)) ::System::Action_2<::StringW, ::StringW>* selectedLevelPackEvent;

  /// @brief Field setCountdownEndTimeEvent, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_setCountdownEndTimeEvent, put = __cordl_internal_set_setCountdownEndTimeEvent)) ::System::Action_2<::StringW, int64_t>* setCountdownEndTimeEvent;

  /// @brief Field setIsEntitledToLevelEvent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_setIsEntitledToLevelEvent,
                      put = __cordl_internal_set_setIsEntitledToLevelEvent)) ::System::Action_3<::StringW, ::StringW, ::GlobalNamespace::EntitlementsStatus>* setIsEntitledToLevelEvent;

  /// @brief Field setIsInLobbyEvent, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get_setIsInLobbyEvent, put = __cordl_internal_set_setIsInLobbyEvent)) ::System::Action_2<::StringW, bool>* setIsInLobbyEvent;

  /// @brief Field setIsReadyEvent, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_setIsReadyEvent, put = __cordl_internal_set_setIsReadyEvent)) ::System::Action_2<::StringW, bool>* setIsReadyEvent;

  /// @brief Field setIsStartButtonEnabledEvent, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_setIsStartButtonEnabledEvent,
                      put = __cordl_internal_set_setIsStartButtonEnabledEvent)) ::System::Action_2<::StringW, ::GlobalNamespace::CannotStartGameReason>* setIsStartButtonEnabledEvent;

  /// @brief Field setMultiplayerGameStateEvent, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_setMultiplayerGameStateEvent,
                      put = __cordl_internal_set_setMultiplayerGameStateEvent)) ::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerGameState>* setMultiplayerGameStateEvent;

  /// @brief Field setOwnedSongPacksEvent, offset 0x150, size 0x8
  __declspec(property(get = __cordl_internal_get_setOwnedSongPacksEvent,
                      put = __cordl_internal_set_setOwnedSongPacksEvent)) ::System::Action_2<::StringW, ::GlobalNamespace::SongPackMask>* setOwnedSongPacksEvent;

  /// @brief Field setPlayersMissingEntitlementsToLevelEvent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_setPlayersMissingEntitlementsToLevelEvent,
                      put = __cordl_internal_set_setPlayersMissingEntitlementsToLevelEvent)) ::System::Action_2<::StringW, ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*
      setPlayersMissingEntitlementsToLevelEvent;

  /// @brief Field setPlayersPermissionConfigurationEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_setPlayersPermissionConfigurationEvent,
                      put = __cordl_internal_set_setPlayersPermissionConfigurationEvent)) ::System::Action_2<::StringW, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>*
      setPlayersPermissionConfigurationEvent;

  /// @brief Field setSelectedBeatmapEvent, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_setSelectedBeatmapEvent,
                      put = __cordl_internal_set_setSelectedBeatmapEvent)) ::System::Action_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>* setSelectedBeatmapEvent;

  /// @brief Field setSelectedGameplayModifiersEvent, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_setSelectedGameplayModifiersEvent,
                      put = __cordl_internal_set_setSelectedGameplayModifiersEvent)) ::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>* setSelectedGameplayModifiersEvent;

  /// @brief Field setStartGameTimeEvent, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get_setStartGameTimeEvent, put = __cordl_internal_set_setStartGameTimeEvent)) ::System::Action_2<::StringW, int64_t>* setStartGameTimeEvent;

  /// @brief Field startedLevelEvent, offset 0xd8, size 0x8
  __declspec(property(
      get = __cordl_internal_get_startedLevelEvent,
      put = __cordl_internal_set_startedLevelEvent)) ::System::Action_4<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*, ::GlobalNamespace::GameplayModifiers*, int64_t>* startedLevelEvent;

  __declspec(property(get = get_syncTime)) int64_t syncTime;

  /// @brief Convert operator to "::GlobalNamespace::IMenuRpcManager"
  constexpr operator ::GlobalNamespace::IMenuRpcManager*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CancelCountdown, addr 0x22d4328, size 0x50, virtual false, abstract: false, final false
  inline void CancelCountdown();

  /// @brief Method CancelLevelStart, addr 0x22d48ac, size 0x50, virtual true, abstract: false, final true
  inline void CancelLevelStart();

  /// @brief Method CancelStartGameTime, addr 0x22d5010, size 0x50, virtual false, abstract: false, final false
  inline void CancelStartGameTime();

  /// @brief Method ClearRecommendedBeatmap, addr 0x22d2618, size 0x50, virtual true, abstract: false, final true
  inline void ClearRecommendedBeatmap();

  /// @brief Method ClearRecommendedGameplayModifiers, addr 0x22d30f0, size 0x50, virtual true, abstract: false, final true
  inline void ClearRecommendedGameplayModifiers();

  /// @brief Method ClearSelectedBeatmap, addr 0x22d20ac, size 0x50, virtual false, abstract: false, final false
  inline void ClearSelectedBeatmap();

  /// @brief Method ClearSelectedGameplayModifiers, addr 0x22d2b84, size 0x50, virtual false, abstract: false, final false
  inline void ClearSelectedGameplayModifiers();

  /// @brief Method Dispose, addr 0x22d0f94, size 0x5c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method EnabledForPlayer, addr 0x22d0ff0, size 0xbc, virtual false, abstract: false, final false
  inline bool EnabledForPlayer(::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method GetCountdownEndTime, addr 0x22d46d8, size 0x50, virtual true, abstract: false, final true
  inline void GetCountdownEndTime();

  /// @brief Method GetIsEntitledToLevel, addr 0x22d1780, size 0x58, virtual true, abstract: false, final true
  inline void GetIsEntitledToLevel(::StringW levelId);

  /// @brief Method GetIsInLobby, addr 0x22d51e4, size 0x50, virtual true, abstract: false, final true
  inline void GetIsInLobby();

  /// @brief Method GetIsReady, addr 0x22d4a80, size 0x50, virtual true, abstract: false, final true
  inline void GetIsReady();

  /// @brief Method GetIsStartButtonEnabled, addr 0x22d3488, size 0x50, virtual true, abstract: false, final true
  inline void GetIsStartButtonEnabled();

  /// @brief Method GetMultiplayerGameState, addr 0x22d3f88, size 0x50, virtual true, abstract: false, final true
  inline void GetMultiplayerGameState();

  /// @brief Method GetOwnedSongPacks, addr 0x22d5598, size 0x50, virtual true, abstract: false, final true
  inline void GetOwnedSongPacks();

  /// @brief Method GetPlayersPermissionConfiguration, addr 0x22d120c, size 0x50, virtual true, abstract: false, final true
  inline void GetPlayersPermissionConfiguration();

  /// @brief Method GetRecommendedBeatmap, addr 0x22d27e4, size 0x50, virtual true, abstract: false, final true
  inline void GetRecommendedBeatmap();

  /// @brief Method GetRecommendedGameplayModifiers, addr 0x22d32bc, size 0x50, virtual true, abstract: false, final true
  inline void GetRecommendedGameplayModifiers();

  /// @brief Method GetSelectedBeatmap, addr 0x22d2278, size 0x50, virtual true, abstract: false, final true
  inline void GetSelectedBeatmap();

  /// @brief Method GetSelectedGameplayModifiers, addr 0x22d2d50, size 0x50, virtual true, abstract: false, final true
  inline void GetSelectedGameplayModifiers();

  /// @brief Method GetStartedLevel, addr 0x22d3dbc, size 0x50, virtual true, abstract: false, final true
  inline void GetStartedLevel();

  /// @brief Method InvalidateLevelEntitlementStatuses, addr 0x22d1b38, size 0x50, virtual true, abstract: false, final true
  inline void InvalidateLevelEntitlementStatuses();

  /// @brief Method InvokeCancelCountdown, addr 0x22d4378, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeCancelCountdown(::StringW userId);

  /// @brief Method InvokeCancelLevelStart, addr 0x22d48fc, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeCancelLevelStart(::StringW userId);

  /// @brief Method InvokeCancelStartGameCountdown, addr 0x22d5060, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeCancelStartGameCountdown(::StringW userId);

  /// @brief Method InvokeClearRecommendedBeatmap, addr 0x22d2668, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeClearRecommendedBeatmap(::StringW userId);

  /// @brief Method InvokeClearRecommendedGameplayModifiers, addr 0x22d3140, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeClearRecommendedGameplayModifiers(::StringW userId);

  /// @brief Method InvokeClearSelectedBeatmap, addr 0x22d20fc, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeClearSelectedBeatmap(::StringW userId);

  /// @brief Method InvokeClearSelectedGameplayModifiers, addr 0x22d2bd4, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeClearSelectedGameplayModifiers(::StringW userId);

  /// @brief Method InvokeGetCountdownEndTime, addr 0x22d4728, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeGetCountdownEndTime(::StringW userId);

  /// @brief Method InvokeGetIsEntitledToLevel, addr 0x22d17d8, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeGetIsEntitledToLevel(::StringW userId, ::StringW levelId);

  /// @brief Method InvokeGetIsInLobby, addr 0x22d5234, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeGetIsInLobby(::StringW userId);

  /// @brief Method InvokeGetIsReady, addr 0x22d4ad0, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeGetIsReady(::StringW userId);

  /// @brief Method InvokeGetIsStartButtonEnabled, addr 0x22d34d8, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeGetIsStartButtonEnabled(::StringW userId);

  /// @brief Method InvokeGetMultiplayerGameState, addr 0x22d3fd8, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeGetMultiplayerGameState(::StringW userId);

  /// @brief Method InvokeGetOwnedSongPacks, addr 0x22d55e8, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeGetOwnedSongPacks(::StringW userId);

  /// @brief Method InvokeGetPlayersPermissionConfiguration, addr 0x22d125c, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeGetPlayersPermissionConfiguration(::StringW userId);

  /// @brief Method InvokeGetRecommendedBeatmap, addr 0x22d2834, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeGetRecommendedBeatmap(::StringW userId);

  /// @brief Method InvokeGetRecommendedGameplayModifiers, addr 0x22d330c, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeGetRecommendedGameplayModifiers(::StringW userId);

  /// @brief Method InvokeGetSelectedBeatmapRpc, addr 0x22d22c8, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeGetSelectedBeatmapRpc(::StringW userId);

  /// @brief Method InvokeGetSelectedGameplayModifiers, addr 0x22d2da0, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeGetSelectedGameplayModifiers(::StringW userId);

  /// @brief Method InvokeGetStartedLevel, addr 0x22d3e0c, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeGetStartedLevel(::StringW userId);

  /// @brief Method InvokeKickPlayer, addr 0x22d59dc, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeKickPlayer(::StringW userId, ::StringW kickedPlayerId);

  /// @brief Method InvokeLevelEntitlementStatusesInvalidated, addr 0x22d1b88, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeLevelEntitlementStatusesInvalidated(::StringW userId);

  /// @brief Method InvokeLevelLoadError, addr 0x22d3880, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeLevelLoadError(::StringW userId, ::StringW levelId);

  /// @brief Method InvokeLevelLoadSuccess, addr 0x22d3a54, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeLevelLoadSuccess(::StringW userId, ::StringW levelId);

  /// @brief Method InvokeOnSelectedLevelPackEvent, addr 0x22d1d5c, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeOnSelectedLevelPackEvent(::StringW userId, ::StringW levelPackId);

  /// @brief Method InvokeRecommendBeatmap, addr 0x22d249c, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeRecommendBeatmap(::StringW userId, ::GlobalNamespace::BeatmapKeyNetSerializable* key);

  /// @brief Method InvokeRecommendGameplayModifiers, addr 0x22d2f74, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeRecommendGameplayModifiers(::StringW userId, ::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method InvokeSetCountdownEndTime, addr 0x22d4554, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeSetCountdownEndTime(::StringW userId, int64_t newTime);

  /// @brief Method InvokeSetIsEntitledToLevel, addr 0x22d19bc, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeSetIsEntitledToLevel(::StringW userId, ::StringW levelId, int32_t entitlementStatus);

  /// @brief Method InvokeSetIsInLobby, addr 0x22d5410, size 0x20, virtual false, abstract: false, final false
  inline void InvokeSetIsInLobby(::StringW userId, bool isBack);

  /// @brief Method InvokeSetIsReady, addr 0x22d4cac, size 0x20, virtual false, abstract: false, final false
  inline void InvokeSetIsReady(::StringW userId, bool isReady);

  /// @brief Method InvokeSetIsStartButtonEnabled, addr 0x22d36ac, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeSetIsStartButtonEnabled(::StringW userId, ::GlobalNamespace::CannotStartGameReason reason);

  /// @brief Method InvokeSetMultiplayerGameState, addr 0x22d41ac, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeSetMultiplayerGameState(::StringW userId, ::GlobalNamespace::MultiplayerGameState lobbyState);

  /// @brief Method InvokeSetOwnedSongPacks, addr 0x22d57e0, size 0x3c, virtual false, abstract: false, final false
  inline void InvokeSetOwnedSongPacks(::StringW userId, ::GlobalNamespace::SongPackMask songPackMask);

  /// @brief Method InvokeSetPlayersMissingEntitlementsToLevelRpc, addr 0x22d1604, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeSetPlayersMissingEntitlementsToLevelRpc(::StringW userId, ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable* playersMissingEntitlements);

  /// @brief Method InvokeSetPlayersPermissionConfiguration, addr 0x22d1430, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeSetPlayersPermissionConfiguration(::StringW userId, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable* playersPermissionConfiguration);

  /// @brief Method InvokeSetSelectedBeatmap, addr 0x22d1f30, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeSetSelectedBeatmap(::StringW userId, ::GlobalNamespace::BeatmapKeyNetSerializable* key);

  /// @brief Method InvokeSetSelectedGameplayModifiers, addr 0x22d2a08, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeSetSelectedGameplayModifiers(::StringW userId, ::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method InvokeSetStartGameCountdown, addr 0x22d4e8c, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeSetStartGameCountdown(::StringW userId, int64_t newTime);

  /// @brief Method InvokeStartLevel, addr 0x22d3c40, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeStartLevel(::StringW userId, ::GlobalNamespace::BeatmapKeyNetSerializable* beatmapKeySerializable, ::GlobalNamespace::GameplayModifiers* gameplayModifiers, int64_t startTime);

  /// @brief Method LevelLoadError, addr 0x22d3828, size 0x58, virtual false, abstract: false, final false
  inline void LevelLoadError(::StringW levelId);

  /// @brief Method LevelLoadSuccess, addr 0x22d39fc, size 0x58, virtual false, abstract: false, final false
  inline void LevelLoadSuccess(::StringW levelId);

  static inline ::GlobalNamespace::MenuRpcManager* New_ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager);

  /// @brief Method RecommendBeatmap, addr 0x22d2444, size 0x58, virtual true, abstract: false, final true
  inline void RecommendBeatmap(::GlobalNamespace::BeatmapKeyNetSerializable* key);

  /// @brief Method RecommendGameplayModifiers, addr 0x22d2f1c, size 0x58, virtual true, abstract: false, final true
  inline void RecommendGameplayModifiers(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method RequestKickPlayer, addr 0x22d5984, size 0x58, virtual true, abstract: false, final true
  inline void RequestKickPlayer(::StringW kickedPlayerId);

  /// @brief Method SelectLevelPack, addr 0x22d1d04, size 0x58, virtual false, abstract: false, final false
  inline void SelectLevelPack(::StringW levelPackId);

  /// @brief Method SetCountdownEndTime, addr 0x22d44fc, size 0x58, virtual false, abstract: false, final false
  inline void SetCountdownEndTime(int64_t newTime);

  /// @brief Method SetIsEntitledToLevel, addr 0x22d1954, size 0x68, virtual true, abstract: false, final true
  inline void SetIsEntitledToLevel(::StringW levelId, ::GlobalNamespace::EntitlementsStatus entitlementStatus);

  /// @brief Method SetIsInLobby, addr 0x22d53b8, size 0x58, virtual true, abstract: false, final true
  inline void SetIsInLobby(bool isBack);

  /// @brief Method SetIsReady, addr 0x22d4c54, size 0x58, virtual true, abstract: false, final true
  inline void SetIsReady(bool isReady);

  /// @brief Method SetIsStartButtonEnabled, addr 0x22d3654, size 0x58, virtual true, abstract: false, final true
  inline void SetIsStartButtonEnabled(::GlobalNamespace::CannotStartGameReason reason);

  /// @brief Method SetMultiplayerGameState, addr 0x22d4154, size 0x58, virtual true, abstract: false, final true
  inline void SetMultiplayerGameState(::GlobalNamespace::MultiplayerGameState lobbyState);

  /// @brief Method SetOwnedSongPacks, addr 0x22d576c, size 0x74, virtual true, abstract: false, final true
  inline void SetOwnedSongPacks(::GlobalNamespace::SongPackMask songPackMask);

  /// @brief Method SetPlayersMissingEntitlementsToLevel, addr 0x22d15ac, size 0x58, virtual true, abstract: false, final true
  inline void SetPlayersMissingEntitlementsToLevel(::GlobalNamespace::PlayersMissingEntitlementsNetSerializable* playersMissingEntitlements);

  /// @brief Method SetPlayersPermissionConfiguration, addr 0x22d13d8, size 0x58, virtual true, abstract: false, final true
  inline void SetPlayersPermissionConfiguration(::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable* playersPermissionConfiguration);

  /// @brief Method SetSelectedBeatmap, addr 0x22d1ed8, size 0x58, virtual true, abstract: false, final true
  inline void SetSelectedBeatmap(::GlobalNamespace::BeatmapKeyNetSerializable* key);

  /// @brief Method SetSelectedGameplayModifiers, addr 0x22d29b0, size 0x58, virtual true, abstract: false, final true
  inline void SetSelectedGameplayModifiers(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method SetStartGameTime, addr 0x22d4e34, size 0x58, virtual true, abstract: false, final true
  inline void SetStartGameTime(int64_t newTime);

  /// @brief Method StartLevel, addr 0x22d3bd0, size 0x70, virtual true, abstract: false, final true
  inline void StartLevel(::GlobalNamespace::BeatmapKeyNetSerializable* beatmapKeySerializable, ::GlobalNamespace::GameplayModifiers* gameplayModifiers, int64_t startTime);

  constexpr ::GlobalNamespace::IMultiplayerSessionManager* const& __cordl_internal_get__multiplayerSessionManager() const;

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __cordl_internal_get__multiplayerSessionManager();

  constexpr ::GlobalNamespace::RpcHandler_1<::GlobalNamespace::MenuRpcManager_RpcType>* const& __cordl_internal_get__rpcHandler() const;

  constexpr ::GlobalNamespace::RpcHandler_1<::GlobalNamespace::MenuRpcManager_RpcType>*& __cordl_internal_get__rpcHandler();

  constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_cancelCountdownEvent() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_cancelCountdownEvent();

  constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_cancelStartGameTimeEvent() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_cancelStartGameTimeEvent();

  constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_cancelledLevelStartEvent() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_cancelledLevelStartEvent();

  constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_clearRecommendedBeatmapEvent() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_clearRecommendedBeatmapEvent();

  constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_clearRecommendedGameplayModifiersEvent() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_clearRecommendedGameplayModifiersEvent();

  constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_clearSelectedBeatmapEvent() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_clearSelectedBeatmapEvent();

  constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_clearSelectedGameplayModifiersEvent() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_clearSelectedGameplayModifiersEvent();

  constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_getCountdownEndTimeEvent() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_getCountdownEndTimeEvent();

  constexpr ::System::Action_2<::StringW, ::StringW>* const& __cordl_internal_get_getIsEntitledToLevelEvent() const;

  constexpr ::System::Action_2<::StringW, ::StringW>*& __cordl_internal_get_getIsEntitledToLevelEvent();

  constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_getIsInLobbyEvent() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_getIsInLobbyEvent();

  constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_getIsReadyEvent() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_getIsReadyEvent();

  constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_getIsStartButtonEnabledEvent() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_getIsStartButtonEnabledEvent();

  constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_getMultiplayerGameStateEvent() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_getMultiplayerGameStateEvent();

  constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_getOwnedSongPacksEvent() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_getOwnedSongPacksEvent();

  constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_getPlayersPermissionConfigurationEvent() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_getPlayersPermissionConfigurationEvent();

  constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_getRecommendedBeatmapEvent() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_getRecommendedBeatmapEvent();

  constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_getRecommendedGameplayModifiersEvent() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_getRecommendedGameplayModifiersEvent();

  constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_getSelectedBeatmapEvent() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_getSelectedBeatmapEvent();

  constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_getSelectedGameplayModifiersEvent() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_getSelectedGameplayModifiersEvent();

  constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_getStartedLevelEvent() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_getStartedLevelEvent();

  constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_levelEntitlementStatusesInvalidatedEvent() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_levelEntitlementStatusesInvalidatedEvent();

  constexpr ::System::Action_2<::StringW, ::StringW>* const& __cordl_internal_get_levelLoadErrorEvent() const;

  constexpr ::System::Action_2<::StringW, ::StringW>*& __cordl_internal_get_levelLoadErrorEvent();

  constexpr ::System::Action_2<::StringW, ::StringW>* const& __cordl_internal_get_levelLoadSuccessEvent() const;

  constexpr ::System::Action_2<::StringW, ::StringW>*& __cordl_internal_get_levelLoadSuccessEvent();

  constexpr ::System::Action_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>* const& __cordl_internal_get_recommendBeatmapEvent() const;

  constexpr ::System::Action_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>*& __cordl_internal_get_recommendBeatmapEvent();

  constexpr ::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>* const& __cordl_internal_get_recommendGameplayModifiersEvent() const;

  constexpr ::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>*& __cordl_internal_get_recommendGameplayModifiersEvent();

  constexpr ::System::Action_2<::StringW, ::StringW>* const& __cordl_internal_get_requestedKickPlayerEvent() const;

  constexpr ::System::Action_2<::StringW, ::StringW>*& __cordl_internal_get_requestedKickPlayerEvent();

  constexpr ::System::Action_2<::StringW, ::StringW>* const& __cordl_internal_get_selectedLevelPackEvent() const;

  constexpr ::System::Action_2<::StringW, ::StringW>*& __cordl_internal_get_selectedLevelPackEvent();

  constexpr ::System::Action_2<::StringW, int64_t>* const& __cordl_internal_get_setCountdownEndTimeEvent() const;

  constexpr ::System::Action_2<::StringW, int64_t>*& __cordl_internal_get_setCountdownEndTimeEvent();

  constexpr ::System::Action_3<::StringW, ::StringW, ::GlobalNamespace::EntitlementsStatus>* const& __cordl_internal_get_setIsEntitledToLevelEvent() const;

  constexpr ::System::Action_3<::StringW, ::StringW, ::GlobalNamespace::EntitlementsStatus>*& __cordl_internal_get_setIsEntitledToLevelEvent();

  constexpr ::System::Action_2<::StringW, bool>* const& __cordl_internal_get_setIsInLobbyEvent() const;

  constexpr ::System::Action_2<::StringW, bool>*& __cordl_internal_get_setIsInLobbyEvent();

  constexpr ::System::Action_2<::StringW, bool>* const& __cordl_internal_get_setIsReadyEvent() const;

  constexpr ::System::Action_2<::StringW, bool>*& __cordl_internal_get_setIsReadyEvent();

  constexpr ::System::Action_2<::StringW, ::GlobalNamespace::CannotStartGameReason>* const& __cordl_internal_get_setIsStartButtonEnabledEvent() const;

  constexpr ::System::Action_2<::StringW, ::GlobalNamespace::CannotStartGameReason>*& __cordl_internal_get_setIsStartButtonEnabledEvent();

  constexpr ::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerGameState>* const& __cordl_internal_get_setMultiplayerGameStateEvent() const;

  constexpr ::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerGameState>*& __cordl_internal_get_setMultiplayerGameStateEvent();

  constexpr ::System::Action_2<::StringW, ::GlobalNamespace::SongPackMask>* const& __cordl_internal_get_setOwnedSongPacksEvent() const;

  constexpr ::System::Action_2<::StringW, ::GlobalNamespace::SongPackMask>*& __cordl_internal_get_setOwnedSongPacksEvent();

  constexpr ::System::Action_2<::StringW, ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>* const& __cordl_internal_get_setPlayersMissingEntitlementsToLevelEvent() const;

  constexpr ::System::Action_2<::StringW, ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*& __cordl_internal_get_setPlayersMissingEntitlementsToLevelEvent();

  constexpr ::System::Action_2<::StringW, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>* const& __cordl_internal_get_setPlayersPermissionConfigurationEvent() const;

  constexpr ::System::Action_2<::StringW, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>*& __cordl_internal_get_setPlayersPermissionConfigurationEvent();

  constexpr ::System::Action_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>* const& __cordl_internal_get_setSelectedBeatmapEvent() const;

  constexpr ::System::Action_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>*& __cordl_internal_get_setSelectedBeatmapEvent();

  constexpr ::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>* const& __cordl_internal_get_setSelectedGameplayModifiersEvent() const;

  constexpr ::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>*& __cordl_internal_get_setSelectedGameplayModifiersEvent();

  constexpr ::System::Action_2<::StringW, int64_t>* const& __cordl_internal_get_setStartGameTimeEvent() const;

  constexpr ::System::Action_2<::StringW, int64_t>*& __cordl_internal_get_setStartGameTimeEvent();

  constexpr ::System::Action_4<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*, ::GlobalNamespace::GameplayModifiers*, int64_t>* const& __cordl_internal_get_startedLevelEvent() const;

  constexpr ::System::Action_4<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*, ::GlobalNamespace::GameplayModifiers*, int64_t>*& __cordl_internal_get_startedLevelEvent();

  constexpr void __cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr void __cordl_internal_set__rpcHandler(::GlobalNamespace::RpcHandler_1<::GlobalNamespace::MenuRpcManager_RpcType>* value);

  constexpr void __cordl_internal_set_cancelCountdownEvent(::System::Action_1<::StringW>* value);

  constexpr void __cordl_internal_set_cancelStartGameTimeEvent(::System::Action_1<::StringW>* value);

  constexpr void __cordl_internal_set_cancelledLevelStartEvent(::System::Action_1<::StringW>* value);

  constexpr void __cordl_internal_set_clearRecommendedBeatmapEvent(::System::Action_1<::StringW>* value);

  constexpr void __cordl_internal_set_clearRecommendedGameplayModifiersEvent(::System::Action_1<::StringW>* value);

  constexpr void __cordl_internal_set_clearSelectedBeatmapEvent(::System::Action_1<::StringW>* value);

  constexpr void __cordl_internal_set_clearSelectedGameplayModifiersEvent(::System::Action_1<::StringW>* value);

  constexpr void __cordl_internal_set_getCountdownEndTimeEvent(::System::Action_1<::StringW>* value);

  constexpr void __cordl_internal_set_getIsEntitledToLevelEvent(::System::Action_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set_getIsInLobbyEvent(::System::Action_1<::StringW>* value);

  constexpr void __cordl_internal_set_getIsReadyEvent(::System::Action_1<::StringW>* value);

  constexpr void __cordl_internal_set_getIsStartButtonEnabledEvent(::System::Action_1<::StringW>* value);

  constexpr void __cordl_internal_set_getMultiplayerGameStateEvent(::System::Action_1<::StringW>* value);

  constexpr void __cordl_internal_set_getOwnedSongPacksEvent(::System::Action_1<::StringW>* value);

  constexpr void __cordl_internal_set_getPlayersPermissionConfigurationEvent(::System::Action_1<::StringW>* value);

  constexpr void __cordl_internal_set_getRecommendedBeatmapEvent(::System::Action_1<::StringW>* value);

  constexpr void __cordl_internal_set_getRecommendedGameplayModifiersEvent(::System::Action_1<::StringW>* value);

  constexpr void __cordl_internal_set_getSelectedBeatmapEvent(::System::Action_1<::StringW>* value);

  constexpr void __cordl_internal_set_getSelectedGameplayModifiersEvent(::System::Action_1<::StringW>* value);

  constexpr void __cordl_internal_set_getStartedLevelEvent(::System::Action_1<::StringW>* value);

  constexpr void __cordl_internal_set_levelEntitlementStatusesInvalidatedEvent(::System::Action_1<::StringW>* value);

  constexpr void __cordl_internal_set_levelLoadErrorEvent(::System::Action_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set_levelLoadSuccessEvent(::System::Action_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set_recommendBeatmapEvent(::System::Action_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>* value);

  constexpr void __cordl_internal_set_recommendGameplayModifiersEvent(::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>* value);

  constexpr void __cordl_internal_set_requestedKickPlayerEvent(::System::Action_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set_selectedLevelPackEvent(::System::Action_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set_setCountdownEndTimeEvent(::System::Action_2<::StringW, int64_t>* value);

  constexpr void __cordl_internal_set_setIsEntitledToLevelEvent(::System::Action_3<::StringW, ::StringW, ::GlobalNamespace::EntitlementsStatus>* value);

  constexpr void __cordl_internal_set_setIsInLobbyEvent(::System::Action_2<::StringW, bool>* value);

  constexpr void __cordl_internal_set_setIsReadyEvent(::System::Action_2<::StringW, bool>* value);

  constexpr void __cordl_internal_set_setIsStartButtonEnabledEvent(::System::Action_2<::StringW, ::GlobalNamespace::CannotStartGameReason>* value);

  constexpr void __cordl_internal_set_setMultiplayerGameStateEvent(::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerGameState>* value);

  constexpr void __cordl_internal_set_setOwnedSongPacksEvent(::System::Action_2<::StringW, ::GlobalNamespace::SongPackMask>* value);

  constexpr void __cordl_internal_set_setPlayersMissingEntitlementsToLevelEvent(::System::Action_2<::StringW, ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>* value);

  constexpr void __cordl_internal_set_setPlayersPermissionConfigurationEvent(::System::Action_2<::StringW, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>* value);

  constexpr void __cordl_internal_set_setSelectedBeatmapEvent(::System::Action_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>* value);

  constexpr void __cordl_internal_set_setSelectedGameplayModifiersEvent(::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>* value);

  constexpr void __cordl_internal_set_setStartGameTimeEvent(::System::Action_2<::StringW, int64_t>* value);

  constexpr void __cordl_internal_set_startedLevelEvent(::System::Action_4<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*, ::GlobalNamespace::GameplayModifiers*, int64_t>* value);

  /// @brief Method .ctor, addr 0x22cfee8, size 0x10ac, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager);

  /// @brief Method add_cancelCountdownEvent, addr 0x22d41c8, size 0xb0, virtual true, abstract: false, final true
  inline void add_cancelCountdownEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_cancelStartGameTimeEvent, addr 0x22d4ea8, size 0xb4, virtual false, abstract: false, final false
  inline void add_cancelStartGameTimeEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_cancelledLevelStartEvent, addr 0x22d4744, size 0xb4, virtual true, abstract: false, final true
  inline void add_cancelledLevelStartEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_clearRecommendedBeatmapEvent, addr 0x22d24b8, size 0xb0, virtual true, abstract: false, final true
  inline void add_clearRecommendedBeatmapEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_clearRecommendedGameplayModifiersEvent, addr 0x22d2f90, size 0xb0, virtual true, abstract: false, final true
  inline void add_clearRecommendedGameplayModifiersEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_clearSelectedBeatmapEvent, addr 0x22d1f4c, size 0xb0, virtual true, abstract: false, final true
  inline void add_clearSelectedBeatmapEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_clearSelectedGameplayModifiersEvent, addr 0x22d2a24, size 0xb0, virtual true, abstract: false, final true
  inline void add_clearSelectedGameplayModifiersEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_getCountdownEndTimeEvent, addr 0x22d4570, size 0xb4, virtual false, abstract: false, final false
  inline void add_getCountdownEndTimeEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_getIsEntitledToLevelEvent, addr 0x22d1620, size 0xb0, virtual true, abstract: false, final true
  inline void add_getIsEntitledToLevelEvent(::System::Action_2<::StringW, ::StringW>* value);

  /// @brief Method add_getIsInLobbyEvent, addr 0x22d507c, size 0xb4, virtual true, abstract: false, final true
  inline void add_getIsInLobbyEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_getIsReadyEvent, addr 0x22d4918, size 0xb4, virtual true, abstract: false, final true
  inline void add_getIsReadyEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_getIsStartButtonEnabledEvent, addr 0x22d3328, size 0xb0, virtual true, abstract: false, final true
  inline void add_getIsStartButtonEnabledEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_getMultiplayerGameStateEvent, addr 0x22d3e28, size 0xb0, virtual true, abstract: false, final true
  inline void add_getMultiplayerGameStateEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_getOwnedSongPacksEvent, addr 0x22d5430, size 0xb4, virtual true, abstract: false, final true
  inline void add_getOwnedSongPacksEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_getPlayersPermissionConfigurationEvent, addr 0x22d10ac, size 0xb0, virtual true, abstract: false, final true
  inline void add_getPlayersPermissionConfigurationEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_getRecommendedBeatmapEvent, addr 0x22d2684, size 0xb0, virtual true, abstract: false, final true
  inline void add_getRecommendedBeatmapEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_getRecommendedGameplayModifiersEvent, addr 0x22d315c, size 0xb0, virtual true, abstract: false, final true
  inline void add_getRecommendedGameplayModifiersEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_getSelectedBeatmapEvent, addr 0x22d2118, size 0xb0, virtual true, abstract: false, final true
  inline void add_getSelectedBeatmapEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_getSelectedGameplayModifiersEvent, addr 0x22d2bf0, size 0xb0, virtual true, abstract: false, final true
  inline void add_getSelectedGameplayModifiersEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_getStartedLevelEvent, addr 0x22d3c5c, size 0xb0, virtual true, abstract: false, final true
  inline void add_getStartedLevelEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_levelEntitlementStatusesInvalidatedEvent, addr 0x22d19d8, size 0xb0, virtual true, abstract: false, final true
  inline void add_levelEntitlementStatusesInvalidatedEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_levelLoadErrorEvent, addr 0x22d36c8, size 0xb0, virtual false, abstract: false, final false
  inline void add_levelLoadErrorEvent(::System::Action_2<::StringW, ::StringW>* value);

  /// @brief Method add_levelLoadSuccessEvent, addr 0x22d389c, size 0xb0, virtual false, abstract: false, final false
  inline void add_levelLoadSuccessEvent(::System::Action_2<::StringW, ::StringW>* value);

  /// @brief Method add_recommendBeatmapEvent, addr 0x22d22e4, size 0xb0, virtual true, abstract: false, final true
  inline void add_recommendBeatmapEvent(::System::Action_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>* value);

  /// @brief Method add_recommendGameplayModifiersEvent, addr 0x22d2dbc, size 0xb0, virtual true, abstract: false, final true
  inline void add_recommendGameplayModifiersEvent(::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>* value);

  /// @brief Method add_requestedKickPlayerEvent, addr 0x22d581c, size 0xb4, virtual true, abstract: false, final true
  inline void add_requestedKickPlayerEvent(::System::Action_2<::StringW, ::StringW>* value);

  /// @brief Method add_selectedLevelPackEvent, addr 0x22d1ba4, size 0xb0, virtual false, abstract: false, final false
  inline void add_selectedLevelPackEvent(::System::Action_2<::StringW, ::StringW>* value);

  /// @brief Method add_setCountdownEndTimeEvent, addr 0x22d4394, size 0xb4, virtual true, abstract: false, final true
  inline void add_setCountdownEndTimeEvent(::System::Action_2<::StringW, int64_t>* value);

  /// @brief Method add_setIsEntitledToLevelEvent, addr 0x22d17f4, size 0xb0, virtual true, abstract: false, final true
  inline void add_setIsEntitledToLevelEvent(::System::Action_3<::StringW, ::StringW, ::GlobalNamespace::EntitlementsStatus>* value);

  /// @brief Method add_setIsInLobbyEvent, addr 0x22d5250, size 0xb4, virtual true, abstract: false, final true
  inline void add_setIsInLobbyEvent(::System::Action_2<::StringW, bool>* value);

  /// @brief Method add_setIsReadyEvent, addr 0x22d4aec, size 0xb4, virtual true, abstract: false, final true
  inline void add_setIsReadyEvent(::System::Action_2<::StringW, bool>* value);

  /// @brief Method add_setIsStartButtonEnabledEvent, addr 0x22d34f4, size 0xb0, virtual true, abstract: false, final true
  inline void add_setIsStartButtonEnabledEvent(::System::Action_2<::StringW, ::GlobalNamespace::CannotStartGameReason>* value);

  /// @brief Method add_setMultiplayerGameStateEvent, addr 0x22d3ff4, size 0xb0, virtual true, abstract: false, final true
  inline void add_setMultiplayerGameStateEvent(::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerGameState>* value);

  /// @brief Method add_setOwnedSongPacksEvent, addr 0x22d5604, size 0xb4, virtual true, abstract: false, final true
  inline void add_setOwnedSongPacksEvent(::System::Action_2<::StringW, ::GlobalNamespace::SongPackMask>* value);

  /// @brief Method add_setPlayersMissingEntitlementsToLevelEvent, addr 0x22d144c, size 0xb0, virtual true, abstract: false, final true
  inline void add_setPlayersMissingEntitlementsToLevelEvent(::System::Action_2<::StringW, ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>* value);

  /// @brief Method add_setPlayersPermissionConfigurationEvent, addr 0x22d1278, size 0xb0, virtual true, abstract: false, final true
  inline void add_setPlayersPermissionConfigurationEvent(::System::Action_2<::StringW, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>* value);

  /// @brief Method add_setSelectedBeatmapEvent, addr 0x22d1d78, size 0xb0, virtual true, abstract: false, final true
  inline void add_setSelectedBeatmapEvent(::System::Action_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>* value);

  /// @brief Method add_setSelectedGameplayModifiersEvent, addr 0x22d2850, size 0xb0, virtual true, abstract: false, final true
  inline void add_setSelectedGameplayModifiersEvent(::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>* value);

  /// @brief Method add_setStartGameTimeEvent, addr 0x22d4ccc, size 0xb4, virtual true, abstract: false, final true
  inline void add_setStartGameTimeEvent(::System::Action_2<::StringW, int64_t>* value);

  /// @brief Method add_startedLevelEvent, addr 0x22d3a70, size 0xb0, virtual true, abstract: false, final true
  inline void add_startedLevelEvent(::System::Action_4<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*, ::GlobalNamespace::GameplayModifiers*, int64_t>* value);

  /// @brief Method get_enabled, addr 0x22cfad8, size 0xc0, virtual false, abstract: false, final false
  inline bool get_enabled();

  /// @brief Method get_enabledForAllPlayers, addr 0x22cfc60, size 0x1e4, virtual false, abstract: false, final false
  inline bool get_enabledForAllPlayers();

  /// @brief Method get_multiplayerSessionManager, addr 0x22cfad0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IMultiplayerSessionManager* get_multiplayerSessionManager();

  /// @brief Method get_syncTime, addr 0x22cfe44, size 0xa4, virtual true, abstract: false, final true
  inline int64_t get_syncTime();

  /// @brief Convert to "::GlobalNamespace::IMenuRpcManager"
  constexpr ::GlobalNamespace::IMenuRpcManager* i___GlobalNamespace__IMenuRpcManager() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method remove_cancelCountdownEvent, addr 0x22d4278, size 0xb0, virtual true, abstract: false, final true
  inline void remove_cancelCountdownEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_cancelStartGameTimeEvent, addr 0x22d4f5c, size 0xb4, virtual false, abstract: false, final false
  inline void remove_cancelStartGameTimeEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_cancelledLevelStartEvent, addr 0x22d47f8, size 0xb4, virtual true, abstract: false, final true
  inline void remove_cancelledLevelStartEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_clearRecommendedBeatmapEvent, addr 0x22d2568, size 0xb0, virtual true, abstract: false, final true
  inline void remove_clearRecommendedBeatmapEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_clearRecommendedGameplayModifiersEvent, addr 0x22d3040, size 0xb0, virtual true, abstract: false, final true
  inline void remove_clearRecommendedGameplayModifiersEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_clearSelectedBeatmapEvent, addr 0x22d1ffc, size 0xb0, virtual true, abstract: false, final true
  inline void remove_clearSelectedBeatmapEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_clearSelectedGameplayModifiersEvent, addr 0x22d2ad4, size 0xb0, virtual true, abstract: false, final true
  inline void remove_clearSelectedGameplayModifiersEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_getCountdownEndTimeEvent, addr 0x22d4624, size 0xb4, virtual false, abstract: false, final false
  inline void remove_getCountdownEndTimeEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_getIsEntitledToLevelEvent, addr 0x22d16d0, size 0xb0, virtual true, abstract: false, final true
  inline void remove_getIsEntitledToLevelEvent(::System::Action_2<::StringW, ::StringW>* value);

  /// @brief Method remove_getIsInLobbyEvent, addr 0x22d5130, size 0xb4, virtual true, abstract: false, final true
  inline void remove_getIsInLobbyEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_getIsReadyEvent, addr 0x22d49cc, size 0xb4, virtual true, abstract: false, final true
  inline void remove_getIsReadyEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_getIsStartButtonEnabledEvent, addr 0x22d33d8, size 0xb0, virtual true, abstract: false, final true
  inline void remove_getIsStartButtonEnabledEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_getMultiplayerGameStateEvent, addr 0x22d3ed8, size 0xb0, virtual true, abstract: false, final true
  inline void remove_getMultiplayerGameStateEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_getOwnedSongPacksEvent, addr 0x22d54e4, size 0xb4, virtual true, abstract: false, final true
  inline void remove_getOwnedSongPacksEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_getPlayersPermissionConfigurationEvent, addr 0x22d115c, size 0xb0, virtual true, abstract: false, final true
  inline void remove_getPlayersPermissionConfigurationEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_getRecommendedBeatmapEvent, addr 0x22d2734, size 0xb0, virtual true, abstract: false, final true
  inline void remove_getRecommendedBeatmapEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_getRecommendedGameplayModifiersEvent, addr 0x22d320c, size 0xb0, virtual true, abstract: false, final true
  inline void remove_getRecommendedGameplayModifiersEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_getSelectedBeatmapEvent, addr 0x22d21c8, size 0xb0, virtual true, abstract: false, final true
  inline void remove_getSelectedBeatmapEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_getSelectedGameplayModifiersEvent, addr 0x22d2ca0, size 0xb0, virtual true, abstract: false, final true
  inline void remove_getSelectedGameplayModifiersEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_getStartedLevelEvent, addr 0x22d3d0c, size 0xb0, virtual true, abstract: false, final true
  inline void remove_getStartedLevelEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_levelEntitlementStatusesInvalidatedEvent, addr 0x22d1a88, size 0xb0, virtual true, abstract: false, final true
  inline void remove_levelEntitlementStatusesInvalidatedEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_levelLoadErrorEvent, addr 0x22d3778, size 0xb0, virtual false, abstract: false, final false
  inline void remove_levelLoadErrorEvent(::System::Action_2<::StringW, ::StringW>* value);

  /// @brief Method remove_levelLoadSuccessEvent, addr 0x22d394c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_levelLoadSuccessEvent(::System::Action_2<::StringW, ::StringW>* value);

  /// @brief Method remove_recommendBeatmapEvent, addr 0x22d2394, size 0xb0, virtual true, abstract: false, final true
  inline void remove_recommendBeatmapEvent(::System::Action_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>* value);

  /// @brief Method remove_recommendGameplayModifiersEvent, addr 0x22d2e6c, size 0xb0, virtual true, abstract: false, final true
  inline void remove_recommendGameplayModifiersEvent(::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>* value);

  /// @brief Method remove_requestedKickPlayerEvent, addr 0x22d58d0, size 0xb4, virtual true, abstract: false, final true
  inline void remove_requestedKickPlayerEvent(::System::Action_2<::StringW, ::StringW>* value);

  /// @brief Method remove_selectedLevelPackEvent, addr 0x22d1c54, size 0xb0, virtual false, abstract: false, final false
  inline void remove_selectedLevelPackEvent(::System::Action_2<::StringW, ::StringW>* value);

  /// @brief Method remove_setCountdownEndTimeEvent, addr 0x22d4448, size 0xb4, virtual true, abstract: false, final true
  inline void remove_setCountdownEndTimeEvent(::System::Action_2<::StringW, int64_t>* value);

  /// @brief Method remove_setIsEntitledToLevelEvent, addr 0x22d18a4, size 0xb0, virtual true, abstract: false, final true
  inline void remove_setIsEntitledToLevelEvent(::System::Action_3<::StringW, ::StringW, ::GlobalNamespace::EntitlementsStatus>* value);

  /// @brief Method remove_setIsInLobbyEvent, addr 0x22d5304, size 0xb4, virtual true, abstract: false, final true
  inline void remove_setIsInLobbyEvent(::System::Action_2<::StringW, bool>* value);

  /// @brief Method remove_setIsReadyEvent, addr 0x22d4ba0, size 0xb4, virtual true, abstract: false, final true
  inline void remove_setIsReadyEvent(::System::Action_2<::StringW, bool>* value);

  /// @brief Method remove_setIsStartButtonEnabledEvent, addr 0x22d35a4, size 0xb0, virtual true, abstract: false, final true
  inline void remove_setIsStartButtonEnabledEvent(::System::Action_2<::StringW, ::GlobalNamespace::CannotStartGameReason>* value);

  /// @brief Method remove_setMultiplayerGameStateEvent, addr 0x22d40a4, size 0xb0, virtual true, abstract: false, final true
  inline void remove_setMultiplayerGameStateEvent(::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerGameState>* value);

  /// @brief Method remove_setOwnedSongPacksEvent, addr 0x22d56b8, size 0xb4, virtual true, abstract: false, final true
  inline void remove_setOwnedSongPacksEvent(::System::Action_2<::StringW, ::GlobalNamespace::SongPackMask>* value);

  /// @brief Method remove_setPlayersMissingEntitlementsToLevelEvent, addr 0x22d14fc, size 0xb0, virtual true, abstract: false, final true
  inline void remove_setPlayersMissingEntitlementsToLevelEvent(::System::Action_2<::StringW, ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>* value);

  /// @brief Method remove_setPlayersPermissionConfigurationEvent, addr 0x22d1328, size 0xb0, virtual true, abstract: false, final true
  inline void remove_setPlayersPermissionConfigurationEvent(::System::Action_2<::StringW, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>* value);

  /// @brief Method remove_setSelectedBeatmapEvent, addr 0x22d1e28, size 0xb0, virtual true, abstract: false, final true
  inline void remove_setSelectedBeatmapEvent(::System::Action_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>* value);

  /// @brief Method remove_setSelectedGameplayModifiersEvent, addr 0x22d2900, size 0xb0, virtual true, abstract: false, final true
  inline void remove_setSelectedGameplayModifiersEvent(::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>* value);

  /// @brief Method remove_setStartGameTimeEvent, addr 0x22d4d80, size 0xb4, virtual true, abstract: false, final true
  inline void remove_setStartGameTimeEvent(::System::Action_2<::StringW, int64_t>* value);

  /// @brief Method remove_startedLevelEvent, addr 0x22d3b20, size 0xb0, virtual true, abstract: false, final true
  inline void remove_startedLevelEvent(::System::Action_4<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*, ::GlobalNamespace::GameplayModifiers*, int64_t>* value);

  /// @brief Method set_enabled, addr 0x22cfb98, size 0xc8, virtual false, abstract: false, final false
  inline void set_enabled(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuRpcManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuRpcManager(MenuRpcManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuRpcManager(MenuRpcManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14879 };

  /// @brief Field kMenuState offset 0xffffffff size 0x8
  static constexpr ::ConstString kMenuState{ u"in_menu" };

  /// @brief Field _multiplayerSessionManager, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field _rpcHandler, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::RpcHandler_1<::GlobalNamespace::MenuRpcManager_RpcType>* ____rpcHandler;

  /// @brief Field getPlayersPermissionConfigurationEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___getPlayersPermissionConfigurationEvent;

  /// @brief Field setPlayersPermissionConfigurationEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action_2<::StringW, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>* ___setPlayersPermissionConfigurationEvent;

  /// @brief Field setPlayersMissingEntitlementsToLevelEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action_2<::StringW, ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>* ___setPlayersMissingEntitlementsToLevelEvent;

  /// @brief Field getIsEntitledToLevelEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_2<::StringW, ::StringW>* ___getIsEntitledToLevelEvent;

  /// @brief Field setIsEntitledToLevelEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action_3<::StringW, ::StringW, ::GlobalNamespace::EntitlementsStatus>* ___setIsEntitledToLevelEvent;

  /// @brief Field levelEntitlementStatusesInvalidatedEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___levelEntitlementStatusesInvalidatedEvent;

  /// @brief Field selectedLevelPackEvent, offset: 0x50, size: 0x8, def value: None
  ::System::Action_2<::StringW, ::StringW>* ___selectedLevelPackEvent;

  /// @brief Field setSelectedBeatmapEvent, offset: 0x58, size: 0x8, def value: None
  ::System::Action_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>* ___setSelectedBeatmapEvent;

  /// @brief Field clearSelectedBeatmapEvent, offset: 0x60, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___clearSelectedBeatmapEvent;

  /// @brief Field getSelectedBeatmapEvent, offset: 0x68, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___getSelectedBeatmapEvent;

  /// @brief Field recommendBeatmapEvent, offset: 0x70, size: 0x8, def value: None
  ::System::Action_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>* ___recommendBeatmapEvent;

  /// @brief Field clearRecommendedBeatmapEvent, offset: 0x78, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___clearRecommendedBeatmapEvent;

  /// @brief Field getRecommendedBeatmapEvent, offset: 0x80, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___getRecommendedBeatmapEvent;

  /// @brief Field setSelectedGameplayModifiersEvent, offset: 0x88, size: 0x8, def value: None
  ::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>* ___setSelectedGameplayModifiersEvent;

  /// @brief Field clearSelectedGameplayModifiersEvent, offset: 0x90, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___clearSelectedGameplayModifiersEvent;

  /// @brief Field getSelectedGameplayModifiersEvent, offset: 0x98, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___getSelectedGameplayModifiersEvent;

  /// @brief Field recommendGameplayModifiersEvent, offset: 0xa0, size: 0x8, def value: None
  ::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>* ___recommendGameplayModifiersEvent;

  /// @brief Field clearRecommendedGameplayModifiersEvent, offset: 0xa8, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___clearRecommendedGameplayModifiersEvent;

  /// @brief Field getRecommendedGameplayModifiersEvent, offset: 0xb0, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___getRecommendedGameplayModifiersEvent;

  /// @brief Field getIsStartButtonEnabledEvent, offset: 0xb8, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___getIsStartButtonEnabledEvent;

  /// @brief Field setIsStartButtonEnabledEvent, offset: 0xc0, size: 0x8, def value: None
  ::System::Action_2<::StringW, ::GlobalNamespace::CannotStartGameReason>* ___setIsStartButtonEnabledEvent;

  /// @brief Field levelLoadErrorEvent, offset: 0xc8, size: 0x8, def value: None
  ::System::Action_2<::StringW, ::StringW>* ___levelLoadErrorEvent;

  /// @brief Field levelLoadSuccessEvent, offset: 0xd0, size: 0x8, def value: None
  ::System::Action_2<::StringW, ::StringW>* ___levelLoadSuccessEvent;

  /// @brief Field startedLevelEvent, offset: 0xd8, size: 0x8, def value: None
  ::System::Action_4<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*, ::GlobalNamespace::GameplayModifiers*, int64_t>* ___startedLevelEvent;

  /// @brief Field getStartedLevelEvent, offset: 0xe0, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___getStartedLevelEvent;

  /// @brief Field getMultiplayerGameStateEvent, offset: 0xe8, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___getMultiplayerGameStateEvent;

  /// @brief Field setMultiplayerGameStateEvent, offset: 0xf0, size: 0x8, def value: None
  ::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerGameState>* ___setMultiplayerGameStateEvent;

  /// @brief Field cancelCountdownEvent, offset: 0xf8, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___cancelCountdownEvent;

  /// @brief Field setCountdownEndTimeEvent, offset: 0x100, size: 0x8, def value: None
  ::System::Action_2<::StringW, int64_t>* ___setCountdownEndTimeEvent;

  /// @brief Field getCountdownEndTimeEvent, offset: 0x108, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___getCountdownEndTimeEvent;

  /// @brief Field cancelledLevelStartEvent, offset: 0x110, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___cancelledLevelStartEvent;

  /// @brief Field getIsReadyEvent, offset: 0x118, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___getIsReadyEvent;

  /// @brief Field setIsReadyEvent, offset: 0x120, size: 0x8, def value: None
  ::System::Action_2<::StringW, bool>* ___setIsReadyEvent;

  /// @brief Field setStartGameTimeEvent, offset: 0x128, size: 0x8, def value: None
  ::System::Action_2<::StringW, int64_t>* ___setStartGameTimeEvent;

  /// @brief Field cancelStartGameTimeEvent, offset: 0x130, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___cancelStartGameTimeEvent;

  /// @brief Field getIsInLobbyEvent, offset: 0x138, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___getIsInLobbyEvent;

  /// @brief Field setIsInLobbyEvent, offset: 0x140, size: 0x8, def value: None
  ::System::Action_2<::StringW, bool>* ___setIsInLobbyEvent;

  /// @brief Field getOwnedSongPacksEvent, offset: 0x148, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___getOwnedSongPacksEvent;

  /// @brief Field setOwnedSongPacksEvent, offset: 0x150, size: 0x8, def value: None
  ::System::Action_2<::StringW, ::GlobalNamespace::SongPackMask>* ___setOwnedSongPacksEvent;

  /// @brief Field requestedKickPlayerEvent, offset: 0x158, size: 0x8, def value: None
  ::System::Action_2<::StringW, ::StringW>* ___requestedKickPlayerEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MenuRpcManager, ____multiplayerSessionManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuRpcManager, ____rpcHandler) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuRpcManager, ___getPlayersPermissionConfigurationEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuRpcManager, ___setPlayersPermissionConfigurationEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuRpcManager, ___setPlayersMissingEntitlementsToLevelEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuRpcManager, ___getIsEntitledToLevelEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuRpcManager, ___setIsEntitledToLevelEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuRpcManager, ___levelEntitlementStatusesInvalidatedEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuRpcManager, ___selectedLevelPackEvent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuRpcManager, ___setSelectedBeatmapEvent) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuRpcManager, ___clearSelectedBeatmapEvent) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuRpcManager, ___getSelectedBeatmapEvent) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuRpcManager, ___recommendBeatmapEvent) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuRpcManager, ___clearRecommendedBeatmapEvent) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuRpcManager, ___getRecommendedBeatmapEvent) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuRpcManager, ___setSelectedGameplayModifiersEvent) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuRpcManager, ___clearSelectedGameplayModifiersEvent) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuRpcManager, ___getSelectedGameplayModifiersEvent) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuRpcManager, ___recommendGameplayModifiersEvent) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuRpcManager, ___clearRecommendedGameplayModifiersEvent) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuRpcManager, ___getRecommendedGameplayModifiersEvent) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuRpcManager, ___getIsStartButtonEnabledEvent) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuRpcManager, ___setIsStartButtonEnabledEvent) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuRpcManager, ___levelLoadErrorEvent) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuRpcManager, ___levelLoadSuccessEvent) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuRpcManager, ___startedLevelEvent) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuRpcManager, ___getStartedLevelEvent) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuRpcManager, ___getMultiplayerGameStateEvent) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuRpcManager, ___setMultiplayerGameStateEvent) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuRpcManager, ___cancelCountdownEvent) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuRpcManager, ___setCountdownEndTimeEvent) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuRpcManager, ___getCountdownEndTimeEvent) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuRpcManager, ___cancelledLevelStartEvent) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuRpcManager, ___getIsReadyEvent) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuRpcManager, ___setIsReadyEvent) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuRpcManager, ___setStartGameTimeEvent) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuRpcManager, ___cancelStartGameTimeEvent) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuRpcManager, ___getIsInLobbyEvent) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuRpcManager, ___setIsInLobbyEvent) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuRpcManager, ___getOwnedSongPacksEvent) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuRpcManager, ___setOwnedSongPacksEvent) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuRpcManager, ___requestedKickPlayerEvent) == 0x158, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuRpcManager, 0x160>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuRpcManager_RpcType, "", "MenuRpcManager/RpcType");
NEED_NO_BOX(::GlobalNamespace::MenuRpcManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuRpcManager*, "", "MenuRpcManager");
NEED_NO_BOX(::GlobalNamespace::MenuRpcManager_CancelCountdownRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuRpcManager_CancelCountdownRpc*, "", "MenuRpcManager/CancelCountdownRpc");
NEED_NO_BOX(::GlobalNamespace::MenuRpcManager_CancelLevelStartRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuRpcManager_CancelLevelStartRpc*, "", "MenuRpcManager/CancelLevelStartRpc");
NEED_NO_BOX(::GlobalNamespace::MenuRpcManager_CancelStartGameTimeRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuRpcManager_CancelStartGameTimeRpc*, "", "MenuRpcManager/CancelStartGameTimeRpc");
NEED_NO_BOX(::GlobalNamespace::MenuRpcManager_ClearRecommendedBeatmapRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuRpcManager_ClearRecommendedBeatmapRpc*, "", "MenuRpcManager/ClearRecommendedBeatmapRpc");
NEED_NO_BOX(::GlobalNamespace::MenuRpcManager_ClearRecommendedGameplayModifiersRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuRpcManager_ClearRecommendedGameplayModifiersRpc*, "", "MenuRpcManager/ClearRecommendedGameplayModifiersRpc");
NEED_NO_BOX(::GlobalNamespace::MenuRpcManager_ClearSelectedBeatmapRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuRpcManager_ClearSelectedBeatmapRpc*, "", "MenuRpcManager/ClearSelectedBeatmapRpc");
NEED_NO_BOX(::GlobalNamespace::MenuRpcManager_ClearSelectedGameplayModifiersRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuRpcManager_ClearSelectedGameplayModifiersRpc*, "", "MenuRpcManager/ClearSelectedGameplayModifiersRpc");
NEED_NO_BOX(::GlobalNamespace::MenuRpcManager_GetCountdownEndTimeRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuRpcManager_GetCountdownEndTimeRpc*, "", "MenuRpcManager/GetCountdownEndTimeRpc");
NEED_NO_BOX(::GlobalNamespace::MenuRpcManager_GetIsEntitledToLevelRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuRpcManager_GetIsEntitledToLevelRpc*, "", "MenuRpcManager/GetIsEntitledToLevelRpc");
NEED_NO_BOX(::GlobalNamespace::MenuRpcManager_GetIsInLobbyRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuRpcManager_GetIsInLobbyRpc*, "", "MenuRpcManager/GetIsInLobbyRpc");
NEED_NO_BOX(::GlobalNamespace::MenuRpcManager_GetIsReadyRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuRpcManager_GetIsReadyRpc*, "", "MenuRpcManager/GetIsReadyRpc");
NEED_NO_BOX(::GlobalNamespace::MenuRpcManager_GetIsStartButtonEnabledRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuRpcManager_GetIsStartButtonEnabledRpc*, "", "MenuRpcManager/GetIsStartButtonEnabledRpc");
NEED_NO_BOX(::GlobalNamespace::MenuRpcManager_GetMultiplayerGameStateRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuRpcManager_GetMultiplayerGameStateRpc*, "", "MenuRpcManager/GetMultiplayerGameStateRpc");
NEED_NO_BOX(::GlobalNamespace::MenuRpcManager_GetOwnedSongPacksRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuRpcManager_GetOwnedSongPacksRpc*, "", "MenuRpcManager/GetOwnedSongPacksRpc");
NEED_NO_BOX(::GlobalNamespace::MenuRpcManager_GetPlayersPermissionConfigurationRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuRpcManager_GetPlayersPermissionConfigurationRpc*, "", "MenuRpcManager/GetPlayersPermissionConfigurationRpc");
NEED_NO_BOX(::GlobalNamespace::MenuRpcManager_GetRecommendedBeatmapRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuRpcManager_GetRecommendedBeatmapRpc*, "", "MenuRpcManager/GetRecommendedBeatmapRpc");
NEED_NO_BOX(::GlobalNamespace::MenuRpcManager_GetRecommendedGameplayModifiersRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuRpcManager_GetRecommendedGameplayModifiersRpc*, "", "MenuRpcManager/GetRecommendedGameplayModifiersRpc");
NEED_NO_BOX(::GlobalNamespace::MenuRpcManager_GetSelectedBeatmapRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuRpcManager_GetSelectedBeatmapRpc*, "", "MenuRpcManager/GetSelectedBeatmapRpc");
NEED_NO_BOX(::GlobalNamespace::MenuRpcManager_GetSelectedGameplayModifiersRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuRpcManager_GetSelectedGameplayModifiersRpc*, "", "MenuRpcManager/GetSelectedGameplayModifiersRpc");
NEED_NO_BOX(::GlobalNamespace::MenuRpcManager_GetStartedLevelRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuRpcManager_GetStartedLevelRpc*, "", "MenuRpcManager/GetStartedLevelRpc");
NEED_NO_BOX(::GlobalNamespace::MenuRpcManager_InvalidateLevelEntitlementStatusesRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuRpcManager_InvalidateLevelEntitlementStatusesRpc*, "", "MenuRpcManager/InvalidateLevelEntitlementStatusesRpc");
NEED_NO_BOX(::GlobalNamespace::MenuRpcManager_LevelLoadErrorRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuRpcManager_LevelLoadErrorRpc*, "", "MenuRpcManager/LevelLoadErrorRpc");
NEED_NO_BOX(::GlobalNamespace::MenuRpcManager_LevelLoadSuccessRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuRpcManager_LevelLoadSuccessRpc*, "", "MenuRpcManager/LevelLoadSuccessRpc");
NEED_NO_BOX(::GlobalNamespace::MenuRpcManager_RecommendBeatmapRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuRpcManager_RecommendBeatmapRpc*, "", "MenuRpcManager/RecommendBeatmapRpc");
NEED_NO_BOX(::GlobalNamespace::MenuRpcManager_RecommendGameplayModifiersRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuRpcManager_RecommendGameplayModifiersRpc*, "", "MenuRpcManager/RecommendGameplayModifiersRpc");
NEED_NO_BOX(::GlobalNamespace::MenuRpcManager_RequestKickPlayerRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuRpcManager_RequestKickPlayerRpc*, "", "MenuRpcManager/RequestKickPlayerRpc");
NEED_NO_BOX(::GlobalNamespace::MenuRpcManager_SelectLevelPackRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuRpcManager_SelectLevelPackRpc*, "", "MenuRpcManager/SelectLevelPackRpc");
NEED_NO_BOX(::GlobalNamespace::MenuRpcManager_SetCountdownEndTimeRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuRpcManager_SetCountdownEndTimeRpc*, "", "MenuRpcManager/SetCountdownEndTimeRpc");
NEED_NO_BOX(::GlobalNamespace::MenuRpcManager_SetIsEntitledToLevelRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuRpcManager_SetIsEntitledToLevelRpc*, "", "MenuRpcManager/SetIsEntitledToLevelRpc");
NEED_NO_BOX(::GlobalNamespace::MenuRpcManager_SetIsInLobbyRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuRpcManager_SetIsInLobbyRpc*, "", "MenuRpcManager/SetIsInLobbyRpc");
NEED_NO_BOX(::GlobalNamespace::MenuRpcManager_SetIsReadyRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuRpcManager_SetIsReadyRpc*, "", "MenuRpcManager/SetIsReadyRpc");
NEED_NO_BOX(::GlobalNamespace::MenuRpcManager_SetIsStartButtonEnabledRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuRpcManager_SetIsStartButtonEnabledRpc*, "", "MenuRpcManager/SetIsStartButtonEnabledRpc");
NEED_NO_BOX(::GlobalNamespace::MenuRpcManager_SetMultiplayerGameStateRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuRpcManager_SetMultiplayerGameStateRpc*, "", "MenuRpcManager/SetMultiplayerGameStateRpc");
NEED_NO_BOX(::GlobalNamespace::MenuRpcManager_SetOwnedSongPacksRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuRpcManager_SetOwnedSongPacksRpc*, "", "MenuRpcManager/SetOwnedSongPacksRpc");
NEED_NO_BOX(::GlobalNamespace::MenuRpcManager_SetPlayersMissingEntitlementsToLevelRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuRpcManager_SetPlayersMissingEntitlementsToLevelRpc*, "", "MenuRpcManager/SetPlayersMissingEntitlementsToLevelRpc");
NEED_NO_BOX(::GlobalNamespace::MenuRpcManager_SetPlayersPermissionConfigurationRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuRpcManager_SetPlayersPermissionConfigurationRpc*, "", "MenuRpcManager/SetPlayersPermissionConfigurationRpc");
NEED_NO_BOX(::GlobalNamespace::MenuRpcManager_SetSelectedBeatmapRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuRpcManager_SetSelectedBeatmapRpc*, "", "MenuRpcManager/SetSelectedBeatmapRpc");
NEED_NO_BOX(::GlobalNamespace::MenuRpcManager_SetSelectedGameplayModifiersRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuRpcManager_SetSelectedGameplayModifiersRpc*, "", "MenuRpcManager/SetSelectedGameplayModifiersRpc");
NEED_NO_BOX(::GlobalNamespace::MenuRpcManager_SetStartGameTimeRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuRpcManager_SetStartGameTimeRpc*, "", "MenuRpcManager/SetStartGameTimeRpc");
NEED_NO_BOX(::GlobalNamespace::MenuRpcManager_StartLevelRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuRpcManager_StartLevelRpc*, "", "MenuRpcManager/StartLevelRpc");
