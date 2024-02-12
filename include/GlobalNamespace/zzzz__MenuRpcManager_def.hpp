#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapKeyNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__CannotStartGameReason_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerGameState_def.hpp"
#include "GlobalNamespace/zzzz__PlayersLobbyPermissionConfigurationNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__PlayersMissingEntitlementsNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_1_def.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_2_def.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_3_def.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
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
class IMenuRpcManager;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
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
namespace GlobalNamespace {
class __MenuRpcManager__CancelCountdownRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__CancelLevelStartRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__CancelStartGameTimeRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__ClearRecommendedBeatmapRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__ClearRecommendedGameplayModifiersRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__ClearSelectedBeatmapRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__ClearSelectedGameplayModifiersRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__GetCountdownEndTimeRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__GetIsEntitledToLevelRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__GetIsInLobbyRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__GetIsReadyRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__GetIsStartButtonEnabledRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__GetMultiplayerGameStateRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__GetOwnedSongPacksRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__GetPlayersPermissionConfigurationRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__GetRecommendedBeatmapRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__GetRecommendedGameplayModifiersRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__GetSelectedBeatmapRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__GetSelectedGameplayModifiersRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__GetStartedLevelRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__InvalidateLevelEntitlementStatusesRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__LevelLoadErrorRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__LevelLoadSuccessRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__RecommendBeatmapRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__RecommendGameplayModifiersRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__RequestKickPlayerRpc;
}
namespace GlobalNamespace {
struct __MenuRpcManager__RpcType;
}
namespace GlobalNamespace {
class __MenuRpcManager__SelectLevelPackRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__SetCountdownEndTimeRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__SetIsEntitledToLevelRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__SetIsInLobbyRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__SetIsReadyRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__SetIsStartButtonEnabledRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__SetMultiplayerGameStateRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__SetOwnedSongPacksRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__SetPlayersMissingEntitlementsToLevelRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__SetPlayersPermissionConfigurationRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__SetSelectedBeatmapRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__SetSelectedGameplayModifiersRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__SetStartGameTimeRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__StartLevelRpc;
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
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
struct __MenuRpcManager__RpcType;
}
namespace GlobalNamespace {
class MenuRpcManager;
}
namespace GlobalNamespace {
class __MenuRpcManager__CancelCountdownRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__CancelLevelStartRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__CancelStartGameTimeRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__ClearRecommendedBeatmapRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__ClearRecommendedGameplayModifiersRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__ClearSelectedBeatmapRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__ClearSelectedGameplayModifiersRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__GetCountdownEndTimeRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__GetIsEntitledToLevelRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__GetIsInLobbyRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__GetIsReadyRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__GetIsStartButtonEnabledRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__GetMultiplayerGameStateRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__GetOwnedSongPacksRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__GetPlayersPermissionConfigurationRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__GetRecommendedBeatmapRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__GetRecommendedGameplayModifiersRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__GetSelectedBeatmapRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__GetSelectedGameplayModifiersRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__GetStartedLevelRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__InvalidateLevelEntitlementStatusesRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__LevelLoadErrorRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__LevelLoadSuccessRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__RecommendBeatmapRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__RecommendGameplayModifiersRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__RequestKickPlayerRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__SelectLevelPackRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__SetCountdownEndTimeRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__SetIsEntitledToLevelRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__SetIsInLobbyRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__SetIsReadyRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__SetIsStartButtonEnabledRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__SetMultiplayerGameStateRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__SetOwnedSongPacksRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__SetPlayersMissingEntitlementsToLevelRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__SetPlayersPermissionConfigurationRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__SetSelectedBeatmapRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__SetSelectedGameplayModifiersRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__SetStartGameTimeRpc;
}
namespace GlobalNamespace {
class __MenuRpcManager__StartLevelRpc;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__MenuRpcManager__RpcType);
MARK_REF_PTR_T(::GlobalNamespace::MenuRpcManager);
MARK_REF_PTR_T(::GlobalNamespace::__MenuRpcManager__CancelCountdownRpc);
MARK_REF_PTR_T(::GlobalNamespace::__MenuRpcManager__CancelLevelStartRpc);
MARK_REF_PTR_T(::GlobalNamespace::__MenuRpcManager__CancelStartGameTimeRpc);
MARK_REF_PTR_T(::GlobalNamespace::__MenuRpcManager__ClearRecommendedBeatmapRpc);
MARK_REF_PTR_T(::GlobalNamespace::__MenuRpcManager__ClearRecommendedGameplayModifiersRpc);
MARK_REF_PTR_T(::GlobalNamespace::__MenuRpcManager__ClearSelectedBeatmapRpc);
MARK_REF_PTR_T(::GlobalNamespace::__MenuRpcManager__ClearSelectedGameplayModifiersRpc);
MARK_REF_PTR_T(::GlobalNamespace::__MenuRpcManager__GetCountdownEndTimeRpc);
MARK_REF_PTR_T(::GlobalNamespace::__MenuRpcManager__GetIsEntitledToLevelRpc);
MARK_REF_PTR_T(::GlobalNamespace::__MenuRpcManager__GetIsInLobbyRpc);
MARK_REF_PTR_T(::GlobalNamespace::__MenuRpcManager__GetIsReadyRpc);
MARK_REF_PTR_T(::GlobalNamespace::__MenuRpcManager__GetIsStartButtonEnabledRpc);
MARK_REF_PTR_T(::GlobalNamespace::__MenuRpcManager__GetMultiplayerGameStateRpc);
MARK_REF_PTR_T(::GlobalNamespace::__MenuRpcManager__GetOwnedSongPacksRpc);
MARK_REF_PTR_T(::GlobalNamespace::__MenuRpcManager__GetPlayersPermissionConfigurationRpc);
MARK_REF_PTR_T(::GlobalNamespace::__MenuRpcManager__GetRecommendedBeatmapRpc);
MARK_REF_PTR_T(::GlobalNamespace::__MenuRpcManager__GetRecommendedGameplayModifiersRpc);
MARK_REF_PTR_T(::GlobalNamespace::__MenuRpcManager__GetSelectedBeatmapRpc);
MARK_REF_PTR_T(::GlobalNamespace::__MenuRpcManager__GetSelectedGameplayModifiersRpc);
MARK_REF_PTR_T(::GlobalNamespace::__MenuRpcManager__GetStartedLevelRpc);
MARK_REF_PTR_T(::GlobalNamespace::__MenuRpcManager__InvalidateLevelEntitlementStatusesRpc);
MARK_REF_PTR_T(::GlobalNamespace::__MenuRpcManager__LevelLoadErrorRpc);
MARK_REF_PTR_T(::GlobalNamespace::__MenuRpcManager__LevelLoadSuccessRpc);
MARK_REF_PTR_T(::GlobalNamespace::__MenuRpcManager__RecommendBeatmapRpc);
MARK_REF_PTR_T(::GlobalNamespace::__MenuRpcManager__RecommendGameplayModifiersRpc);
MARK_REF_PTR_T(::GlobalNamespace::__MenuRpcManager__RequestKickPlayerRpc);
MARK_REF_PTR_T(::GlobalNamespace::__MenuRpcManager__SelectLevelPackRpc);
MARK_REF_PTR_T(::GlobalNamespace::__MenuRpcManager__SetCountdownEndTimeRpc);
MARK_REF_PTR_T(::GlobalNamespace::__MenuRpcManager__SetIsEntitledToLevelRpc);
MARK_REF_PTR_T(::GlobalNamespace::__MenuRpcManager__SetIsInLobbyRpc);
MARK_REF_PTR_T(::GlobalNamespace::__MenuRpcManager__SetIsReadyRpc);
MARK_REF_PTR_T(::GlobalNamespace::__MenuRpcManager__SetIsStartButtonEnabledRpc);
MARK_REF_PTR_T(::GlobalNamespace::__MenuRpcManager__SetMultiplayerGameStateRpc);
MARK_REF_PTR_T(::GlobalNamespace::__MenuRpcManager__SetOwnedSongPacksRpc);
MARK_REF_PTR_T(::GlobalNamespace::__MenuRpcManager__SetPlayersMissingEntitlementsToLevelRpc);
MARK_REF_PTR_T(::GlobalNamespace::__MenuRpcManager__SetPlayersPermissionConfigurationRpc);
MARK_REF_PTR_T(::GlobalNamespace::__MenuRpcManager__SetSelectedBeatmapRpc);
MARK_REF_PTR_T(::GlobalNamespace::__MenuRpcManager__SetSelectedGameplayModifiersRpc);
MARK_REF_PTR_T(::GlobalNamespace::__MenuRpcManager__SetStartGameTimeRpc);
MARK_REF_PTR_T(::GlobalNamespace::__MenuRpcManager__StartLevelRpc);
// Type: ::RpcType
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12731))
// CS Name: ::MenuRpcManager::RpcType
struct CORDL_TYPE __MenuRpcManager__RpcType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct ____MenuRpcManager__RpcType_Unwrapped
  enum struct ____MenuRpcManager__RpcType_Unwrapped : uint8_t {
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
  constexpr operator ____MenuRpcManager__RpcType_Unwrapped() const noexcept {
    return static_cast<____MenuRpcManager__RpcType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr __MenuRpcManager__RpcType(uint8_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuRpcManager__RpcType();

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field SetPlayersMissingEntitlementsToLevel value: static_cast<uint8_t>(0x0u)
  static ::GlobalNamespace::__MenuRpcManager__RpcType const SetPlayersMissingEntitlementsToLevel;

  /// @brief Field GetIsEntitledToLevel value: static_cast<uint8_t>(0x1u)
  static ::GlobalNamespace::__MenuRpcManager__RpcType const GetIsEntitledToLevel;

  /// @brief Field SetIsEntitledToLevel value: static_cast<uint8_t>(0x2u)
  static ::GlobalNamespace::__MenuRpcManager__RpcType const SetIsEntitledToLevel;

  /// @brief Field InvalidateLevelEntitlementStatuses value: static_cast<uint8_t>(0x3u)
  static ::GlobalNamespace::__MenuRpcManager__RpcType const InvalidateLevelEntitlementStatuses;

  /// @brief Field SelectLevelPack value: static_cast<uint8_t>(0x4u)
  static ::GlobalNamespace::__MenuRpcManager__RpcType const SelectLevelPack;

  /// @brief Field SetSelectedBeatmap value: static_cast<uint8_t>(0x5u)
  static ::GlobalNamespace::__MenuRpcManager__RpcType const SetSelectedBeatmap;

  /// @brief Field GetSelectedBeatmap value: static_cast<uint8_t>(0x6u)
  static ::GlobalNamespace::__MenuRpcManager__RpcType const GetSelectedBeatmap;

  /// @brief Field RecommendBeatmap value: static_cast<uint8_t>(0x7u)
  static ::GlobalNamespace::__MenuRpcManager__RpcType const RecommendBeatmap;

  /// @brief Field ClearRecommendedBeatmap value: static_cast<uint8_t>(0x8u)
  static ::GlobalNamespace::__MenuRpcManager__RpcType const ClearRecommendedBeatmap;

  /// @brief Field GetRecommendedBeatmap value: static_cast<uint8_t>(0x9u)
  static ::GlobalNamespace::__MenuRpcManager__RpcType const GetRecommendedBeatmap;

  /// @brief Field SetSelectedGameplayModifiers value: static_cast<uint8_t>(0xau)
  static ::GlobalNamespace::__MenuRpcManager__RpcType const SetSelectedGameplayModifiers;

  /// @brief Field GetSelectedGameplayModifiers value: static_cast<uint8_t>(0xbu)
  static ::GlobalNamespace::__MenuRpcManager__RpcType const GetSelectedGameplayModifiers;

  /// @brief Field RecommendGameplayModifiers value: static_cast<uint8_t>(0xcu)
  static ::GlobalNamespace::__MenuRpcManager__RpcType const RecommendGameplayModifiers;

  /// @brief Field ClearRecommendedGameplayModifiers value: static_cast<uint8_t>(0xdu)
  static ::GlobalNamespace::__MenuRpcManager__RpcType const ClearRecommendedGameplayModifiers;

  /// @brief Field GetRecommendedGameplayModifiers value: static_cast<uint8_t>(0xeu)
  static ::GlobalNamespace::__MenuRpcManager__RpcType const GetRecommendedGameplayModifiers;

  /// @brief Field LevelLoadError value: static_cast<uint8_t>(0xfu)
  static ::GlobalNamespace::__MenuRpcManager__RpcType const LevelLoadError;

  /// @brief Field LevelLoadSuccess value: static_cast<uint8_t>(0x10u)
  static ::GlobalNamespace::__MenuRpcManager__RpcType const LevelLoadSuccess;

  /// @brief Field StartLevel value: static_cast<uint8_t>(0x11u)
  static ::GlobalNamespace::__MenuRpcManager__RpcType const StartLevel;

  /// @brief Field GetStartedLevel value: static_cast<uint8_t>(0x12u)
  static ::GlobalNamespace::__MenuRpcManager__RpcType const GetStartedLevel;

  /// @brief Field CancelLevelStart value: static_cast<uint8_t>(0x13u)
  static ::GlobalNamespace::__MenuRpcManager__RpcType const CancelLevelStart;

  /// @brief Field GetMultiplayerGameState value: static_cast<uint8_t>(0x14u)
  static ::GlobalNamespace::__MenuRpcManager__RpcType const GetMultiplayerGameState;

  /// @brief Field SetMultiplayerGameState value: static_cast<uint8_t>(0x15u)
  static ::GlobalNamespace::__MenuRpcManager__RpcType const SetMultiplayerGameState;

  /// @brief Field GetIsReady value: static_cast<uint8_t>(0x16u)
  static ::GlobalNamespace::__MenuRpcManager__RpcType const GetIsReady;

  /// @brief Field SetIsReady value: static_cast<uint8_t>(0x17u)
  static ::GlobalNamespace::__MenuRpcManager__RpcType const SetIsReady;

  /// @brief Field SetStartGameTime value: static_cast<uint8_t>(0x18u)
  static ::GlobalNamespace::__MenuRpcManager__RpcType const SetStartGameTime;

  /// @brief Field CancelStartGameTime value: static_cast<uint8_t>(0x19u)
  static ::GlobalNamespace::__MenuRpcManager__RpcType const CancelStartGameTime;

  /// @brief Field GetIsInLobby value: static_cast<uint8_t>(0x1au)
  static ::GlobalNamespace::__MenuRpcManager__RpcType const GetIsInLobby;

  /// @brief Field SetIsInLobby value: static_cast<uint8_t>(0x1bu)
  static ::GlobalNamespace::__MenuRpcManager__RpcType const SetIsInLobby;

  /// @brief Field GetCountdownEndTime value: static_cast<uint8_t>(0x1cu)
  static ::GlobalNamespace::__MenuRpcManager__RpcType const GetCountdownEndTime;

  /// @brief Field SetCountdownEndTime value: static_cast<uint8_t>(0x1du)
  static ::GlobalNamespace::__MenuRpcManager__RpcType const SetCountdownEndTime;

  /// @brief Field CancelCountdown value: static_cast<uint8_t>(0x1eu)
  static ::GlobalNamespace::__MenuRpcManager__RpcType const CancelCountdown;

  /// @brief Field GetOwnedSongPacks value: static_cast<uint8_t>(0x1fu)
  static ::GlobalNamespace::__MenuRpcManager__RpcType const GetOwnedSongPacks;

  /// @brief Field SetOwnedSongPacks value: static_cast<uint8_t>(0x20u)
  static ::GlobalNamespace::__MenuRpcManager__RpcType const SetOwnedSongPacks;

  /// @brief Field RequestKickPlayer value: static_cast<uint8_t>(0x21u)
  static ::GlobalNamespace::__MenuRpcManager__RpcType const RequestKickPlayer;

  /// @brief Field GetPermissionConfiguration value: static_cast<uint8_t>(0x22u)
  static ::GlobalNamespace::__MenuRpcManager__RpcType const GetPermissionConfiguration;

  /// @brief Field SetPermissionConfiguration value: static_cast<uint8_t>(0x23u)
  static ::GlobalNamespace::__MenuRpcManager__RpcType const SetPermissionConfiguration;

  /// @brief Field GetIsStartButtonEnabled value: static_cast<uint8_t>(0x24u)
  static ::GlobalNamespace::__MenuRpcManager__RpcType const GetIsStartButtonEnabled;

  /// @brief Field SetIsStartButtonEnabled value: static_cast<uint8_t>(0x25u)
  static ::GlobalNamespace::__MenuRpcManager__RpcType const SetIsStartButtonEnabled;

  /// @brief Field ClearSelectedBeatmap value: static_cast<uint8_t>(0x26u)
  static ::GlobalNamespace::__MenuRpcManager__RpcType const ClearSelectedBeatmap;

  /// @brief Field ClearSelectedGameplayModifiers value: static_cast<uint8_t>(0x27u)
  static ::GlobalNamespace::__MenuRpcManager__RpcType const ClearSelectedGameplayModifiers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuRpcManager__RpcType, 0x1>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MenuRpcManager__RpcType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GetPlayersPermissionConfigurationRpc
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12834))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12732))
// CS Name: ::MenuRpcManager::GetPlayersPermissionConfigurationRpc*
class CORDL_TYPE __MenuRpcManager__GetPlayersPermissionConfigurationRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::__MenuRpcManager__GetPlayersPermissionConfigurationRpc* New_ctor();

  /// @brief Method .ctor, addr 0xe74074, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__GetPlayersPermissionConfigurationRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuRpcManager__GetPlayersPermissionConfigurationRpc(__MenuRpcManager__GetPlayersPermissionConfigurationRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__GetPlayersPermissionConfigurationRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuRpcManager__GetPlayersPermissionConfigurationRpc(__MenuRpcManager__GetPlayersPermissionConfigurationRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuRpcManager__GetPlayersPermissionConfigurationRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuRpcManager__GetPlayersPermissionConfigurationRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SetPlayersPermissionConfigurationRpc
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12835)), TypeDefinitionIndex(TypeDefinitionIndex(14904)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12835), inst:
// 4883 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(12733)) CS Name: ::MenuRpcManager::SetPlayersPermissionConfigurationRpc*
class CORDL_TYPE __MenuRpcManager__SetPlayersPermissionConfigurationRpc : public ::GlobalNamespace::RemoteProcedureCall_1<::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__MenuRpcManager__SetPlayersPermissionConfigurationRpc* New_ctor();

  /// @brief Method .ctor, addr 0xe74084, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__SetPlayersPermissionConfigurationRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuRpcManager__SetPlayersPermissionConfigurationRpc(__MenuRpcManager__SetPlayersPermissionConfigurationRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__SetPlayersPermissionConfigurationRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuRpcManager__SetPlayersPermissionConfigurationRpc(__MenuRpcManager__SetPlayersPermissionConfigurationRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuRpcManager__SetPlayersPermissionConfigurationRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuRpcManager__SetPlayersPermissionConfigurationRpc, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SetPlayersMissingEntitlementsToLevelRpc
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12835)), TypeDefinitionIndex(TypeDefinitionIndex(14905)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12835), inst:
// 380 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(12734)) CS Name: ::MenuRpcManager::SetPlayersMissingEntitlementsToLevelRpc*
class CORDL_TYPE __MenuRpcManager__SetPlayersMissingEntitlementsToLevelRpc : public ::GlobalNamespace::RemoteProcedureCall_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__MenuRpcManager__SetPlayersMissingEntitlementsToLevelRpc* New_ctor();

  /// @brief Method .ctor, addr 0xe740cc, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__SetPlayersMissingEntitlementsToLevelRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuRpcManager__SetPlayersMissingEntitlementsToLevelRpc(__MenuRpcManager__SetPlayersMissingEntitlementsToLevelRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__SetPlayersMissingEntitlementsToLevelRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuRpcManager__SetPlayersMissingEntitlementsToLevelRpc(__MenuRpcManager__SetPlayersMissingEntitlementsToLevelRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuRpcManager__SetPlayersMissingEntitlementsToLevelRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuRpcManager__SetPlayersMissingEntitlementsToLevelRpc, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::GetIsEntitledToLevelRpc
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12835)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12835), inst: 398 })]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12735))
// CS Name: ::MenuRpcManager::GetIsEntitledToLevelRpc*
class CORDL_TYPE __MenuRpcManager__GetIsEntitledToLevelRpc : public ::GlobalNamespace::RemoteProcedureCall_1<::StringW> {
public:
  // Declarations
  static inline ::GlobalNamespace::__MenuRpcManager__GetIsEntitledToLevelRpc* New_ctor();

  /// @brief Method .ctor, addr 0xe74114, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__GetIsEntitledToLevelRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuRpcManager__GetIsEntitledToLevelRpc(__MenuRpcManager__GetIsEntitledToLevelRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__GetIsEntitledToLevelRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuRpcManager__GetIsEntitledToLevelRpc(__MenuRpcManager__GetIsEntitledToLevelRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuRpcManager__GetIsEntitledToLevelRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuRpcManager__GetIsEntitledToLevelRpc, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SetIsEntitledToLevelRpc
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12836)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12836), inst: 1399 })]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12736))
// CS Name: ::MenuRpcManager::SetIsEntitledToLevelRpc*
class CORDL_TYPE __MenuRpcManager__SetIsEntitledToLevelRpc : public ::GlobalNamespace::RemoteProcedureCall_2<::StringW, int32_t> {
public:
  // Declarations
  static inline ::GlobalNamespace::__MenuRpcManager__SetIsEntitledToLevelRpc* New_ctor();

  /// @brief Method .ctor, addr 0xe7415c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__SetIsEntitledToLevelRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuRpcManager__SetIsEntitledToLevelRpc(__MenuRpcManager__SetIsEntitledToLevelRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__SetIsEntitledToLevelRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuRpcManager__SetIsEntitledToLevelRpc(__MenuRpcManager__SetIsEntitledToLevelRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuRpcManager__SetIsEntitledToLevelRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuRpcManager__SetIsEntitledToLevelRpc, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::InvalidateLevelEntitlementStatusesRpc
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12834))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12737))
// CS Name: ::MenuRpcManager::InvalidateLevelEntitlementStatusesRpc*
class CORDL_TYPE __MenuRpcManager__InvalidateLevelEntitlementStatusesRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::__MenuRpcManager__InvalidateLevelEntitlementStatusesRpc* New_ctor();

  /// @brief Method .ctor, addr 0xe741a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__InvalidateLevelEntitlementStatusesRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuRpcManager__InvalidateLevelEntitlementStatusesRpc(__MenuRpcManager__InvalidateLevelEntitlementStatusesRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__InvalidateLevelEntitlementStatusesRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuRpcManager__InvalidateLevelEntitlementStatusesRpc(__MenuRpcManager__InvalidateLevelEntitlementStatusesRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuRpcManager__InvalidateLevelEntitlementStatusesRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuRpcManager__InvalidateLevelEntitlementStatusesRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SelectLevelPackRpc
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12835)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12835), inst: 398 })]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12738))
// CS Name: ::MenuRpcManager::SelectLevelPackRpc*
class CORDL_TYPE __MenuRpcManager__SelectLevelPackRpc : public ::GlobalNamespace::RemoteProcedureCall_1<::StringW> {
public:
  // Declarations
  static inline ::GlobalNamespace::__MenuRpcManager__SelectLevelPackRpc* New_ctor();

  /// @brief Method .ctor, addr 0xe741ac, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__SelectLevelPackRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuRpcManager__SelectLevelPackRpc(__MenuRpcManager__SelectLevelPackRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__SelectLevelPackRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuRpcManager__SelectLevelPackRpc(__MenuRpcManager__SelectLevelPackRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuRpcManager__SelectLevelPackRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuRpcManager__SelectLevelPackRpc, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SetSelectedBeatmapRpc
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12835)), TypeDefinitionIndex(TypeDefinitionIndex(14860)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12835), inst:
// 3243 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(12739)) CS Name: ::MenuRpcManager::SetSelectedBeatmapRpc*
class CORDL_TYPE __MenuRpcManager__SetSelectedBeatmapRpc : public ::GlobalNamespace::RemoteProcedureCall_1<::GlobalNamespace::BeatmapKeyNetSerializable*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__MenuRpcManager__SetSelectedBeatmapRpc* New_ctor();

  /// @brief Method .ctor, addr 0xe741f4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__SetSelectedBeatmapRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuRpcManager__SetSelectedBeatmapRpc(__MenuRpcManager__SetSelectedBeatmapRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__SetSelectedBeatmapRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuRpcManager__SetSelectedBeatmapRpc(__MenuRpcManager__SetSelectedBeatmapRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuRpcManager__SetSelectedBeatmapRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuRpcManager__SetSelectedBeatmapRpc, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ClearSelectedBeatmapRpc
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12834))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12740))
// CS Name: ::MenuRpcManager::ClearSelectedBeatmapRpc*
class CORDL_TYPE __MenuRpcManager__ClearSelectedBeatmapRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::__MenuRpcManager__ClearSelectedBeatmapRpc* New_ctor();

  /// @brief Method .ctor, addr 0xe7423c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__ClearSelectedBeatmapRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuRpcManager__ClearSelectedBeatmapRpc(__MenuRpcManager__ClearSelectedBeatmapRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__ClearSelectedBeatmapRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuRpcManager__ClearSelectedBeatmapRpc(__MenuRpcManager__ClearSelectedBeatmapRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuRpcManager__ClearSelectedBeatmapRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuRpcManager__ClearSelectedBeatmapRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::GetSelectedBeatmapRpc
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12834))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12741))
// CS Name: ::MenuRpcManager::GetSelectedBeatmapRpc*
class CORDL_TYPE __MenuRpcManager__GetSelectedBeatmapRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::__MenuRpcManager__GetSelectedBeatmapRpc* New_ctor();

  /// @brief Method .ctor, addr 0xe74244, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__GetSelectedBeatmapRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuRpcManager__GetSelectedBeatmapRpc(__MenuRpcManager__GetSelectedBeatmapRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__GetSelectedBeatmapRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuRpcManager__GetSelectedBeatmapRpc(__MenuRpcManager__GetSelectedBeatmapRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuRpcManager__GetSelectedBeatmapRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuRpcManager__GetSelectedBeatmapRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::RecommendBeatmapRpc
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12835)), TypeDefinitionIndex(TypeDefinitionIndex(14860)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12835), inst:
// 3243 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(12742)) CS Name: ::MenuRpcManager::RecommendBeatmapRpc*
class CORDL_TYPE __MenuRpcManager__RecommendBeatmapRpc : public ::GlobalNamespace::RemoteProcedureCall_1<::GlobalNamespace::BeatmapKeyNetSerializable*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__MenuRpcManager__RecommendBeatmapRpc* New_ctor();

  /// @brief Method .ctor, addr 0xe7424c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__RecommendBeatmapRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuRpcManager__RecommendBeatmapRpc(__MenuRpcManager__RecommendBeatmapRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__RecommendBeatmapRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuRpcManager__RecommendBeatmapRpc(__MenuRpcManager__RecommendBeatmapRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuRpcManager__RecommendBeatmapRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuRpcManager__RecommendBeatmapRpc, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ClearRecommendedBeatmapRpc
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12834))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12743))
// CS Name: ::MenuRpcManager::ClearRecommendedBeatmapRpc*
class CORDL_TYPE __MenuRpcManager__ClearRecommendedBeatmapRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::__MenuRpcManager__ClearRecommendedBeatmapRpc* New_ctor();

  /// @brief Method .ctor, addr 0xe74294, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__ClearRecommendedBeatmapRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuRpcManager__ClearRecommendedBeatmapRpc(__MenuRpcManager__ClearRecommendedBeatmapRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__ClearRecommendedBeatmapRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuRpcManager__ClearRecommendedBeatmapRpc(__MenuRpcManager__ClearRecommendedBeatmapRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuRpcManager__ClearRecommendedBeatmapRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuRpcManager__ClearRecommendedBeatmapRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::GetRecommendedBeatmapRpc
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12834))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12744))
// CS Name: ::MenuRpcManager::GetRecommendedBeatmapRpc*
class CORDL_TYPE __MenuRpcManager__GetRecommendedBeatmapRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::__MenuRpcManager__GetRecommendedBeatmapRpc* New_ctor();

  /// @brief Method .ctor, addr 0xe7429c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__GetRecommendedBeatmapRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuRpcManager__GetRecommendedBeatmapRpc(__MenuRpcManager__GetRecommendedBeatmapRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__GetRecommendedBeatmapRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuRpcManager__GetRecommendedBeatmapRpc(__MenuRpcManager__GetRecommendedBeatmapRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuRpcManager__GetRecommendedBeatmapRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuRpcManager__GetRecommendedBeatmapRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SetSelectedGameplayModifiersRpc
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12835)), TypeDefinitionIndex(TypeDefinitionIndex(14875)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12835), inst:
// 314 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(12745)) CS Name: ::MenuRpcManager::SetSelectedGameplayModifiersRpc*
class CORDL_TYPE __MenuRpcManager__SetSelectedGameplayModifiersRpc : public ::GlobalNamespace::RemoteProcedureCall_1<::GlobalNamespace::GameplayModifiers*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__MenuRpcManager__SetSelectedGameplayModifiersRpc* New_ctor();

  /// @brief Method .ctor, addr 0xe742a4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__SetSelectedGameplayModifiersRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuRpcManager__SetSelectedGameplayModifiersRpc(__MenuRpcManager__SetSelectedGameplayModifiersRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__SetSelectedGameplayModifiersRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuRpcManager__SetSelectedGameplayModifiersRpc(__MenuRpcManager__SetSelectedGameplayModifiersRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuRpcManager__SetSelectedGameplayModifiersRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuRpcManager__SetSelectedGameplayModifiersRpc, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ClearSelectedGameplayModifiersRpc
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12834))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12746))
// CS Name: ::MenuRpcManager::ClearSelectedGameplayModifiersRpc*
class CORDL_TYPE __MenuRpcManager__ClearSelectedGameplayModifiersRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::__MenuRpcManager__ClearSelectedGameplayModifiersRpc* New_ctor();

  /// @brief Method .ctor, addr 0xe742ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__ClearSelectedGameplayModifiersRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuRpcManager__ClearSelectedGameplayModifiersRpc(__MenuRpcManager__ClearSelectedGameplayModifiersRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__ClearSelectedGameplayModifiersRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuRpcManager__ClearSelectedGameplayModifiersRpc(__MenuRpcManager__ClearSelectedGameplayModifiersRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuRpcManager__ClearSelectedGameplayModifiersRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuRpcManager__ClearSelectedGameplayModifiersRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::GetSelectedGameplayModifiersRpc
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12834))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12747))
// CS Name: ::MenuRpcManager::GetSelectedGameplayModifiersRpc*
class CORDL_TYPE __MenuRpcManager__GetSelectedGameplayModifiersRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::__MenuRpcManager__GetSelectedGameplayModifiersRpc* New_ctor();

  /// @brief Method .ctor, addr 0xe742f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__GetSelectedGameplayModifiersRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuRpcManager__GetSelectedGameplayModifiersRpc(__MenuRpcManager__GetSelectedGameplayModifiersRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__GetSelectedGameplayModifiersRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuRpcManager__GetSelectedGameplayModifiersRpc(__MenuRpcManager__GetSelectedGameplayModifiersRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuRpcManager__GetSelectedGameplayModifiersRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuRpcManager__GetSelectedGameplayModifiersRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::RecommendGameplayModifiersRpc
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12835)), TypeDefinitionIndex(TypeDefinitionIndex(14875)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12835), inst:
// 314 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(12748)) CS Name: ::MenuRpcManager::RecommendGameplayModifiersRpc*
class CORDL_TYPE __MenuRpcManager__RecommendGameplayModifiersRpc : public ::GlobalNamespace::RemoteProcedureCall_1<::GlobalNamespace::GameplayModifiers*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__MenuRpcManager__RecommendGameplayModifiersRpc* New_ctor();

  /// @brief Method .ctor, addr 0xe742fc, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__RecommendGameplayModifiersRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuRpcManager__RecommendGameplayModifiersRpc(__MenuRpcManager__RecommendGameplayModifiersRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__RecommendGameplayModifiersRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuRpcManager__RecommendGameplayModifiersRpc(__MenuRpcManager__RecommendGameplayModifiersRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuRpcManager__RecommendGameplayModifiersRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuRpcManager__RecommendGameplayModifiersRpc, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ClearRecommendedGameplayModifiersRpc
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12834))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12749))
// CS Name: ::MenuRpcManager::ClearRecommendedGameplayModifiersRpc*
class CORDL_TYPE __MenuRpcManager__ClearRecommendedGameplayModifiersRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::__MenuRpcManager__ClearRecommendedGameplayModifiersRpc* New_ctor();

  /// @brief Method .ctor, addr 0xe74344, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__ClearRecommendedGameplayModifiersRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuRpcManager__ClearRecommendedGameplayModifiersRpc(__MenuRpcManager__ClearRecommendedGameplayModifiersRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__ClearRecommendedGameplayModifiersRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuRpcManager__ClearRecommendedGameplayModifiersRpc(__MenuRpcManager__ClearRecommendedGameplayModifiersRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuRpcManager__ClearRecommendedGameplayModifiersRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuRpcManager__ClearRecommendedGameplayModifiersRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::GetRecommendedGameplayModifiersRpc
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12834))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12750))
// CS Name: ::MenuRpcManager::GetRecommendedGameplayModifiersRpc*
class CORDL_TYPE __MenuRpcManager__GetRecommendedGameplayModifiersRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::__MenuRpcManager__GetRecommendedGameplayModifiersRpc* New_ctor();

  /// @brief Method .ctor, addr 0xe7434c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__GetRecommendedGameplayModifiersRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuRpcManager__GetRecommendedGameplayModifiersRpc(__MenuRpcManager__GetRecommendedGameplayModifiersRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__GetRecommendedGameplayModifiersRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuRpcManager__GetRecommendedGameplayModifiersRpc(__MenuRpcManager__GetRecommendedGameplayModifiersRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuRpcManager__GetRecommendedGameplayModifiersRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuRpcManager__GetRecommendedGameplayModifiersRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::GetIsStartButtonEnabledRpc
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12834))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12751))
// CS Name: ::MenuRpcManager::GetIsStartButtonEnabledRpc*
class CORDL_TYPE __MenuRpcManager__GetIsStartButtonEnabledRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::__MenuRpcManager__GetIsStartButtonEnabledRpc* New_ctor();

  /// @brief Method .ctor, addr 0xe74354, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__GetIsStartButtonEnabledRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuRpcManager__GetIsStartButtonEnabledRpc(__MenuRpcManager__GetIsStartButtonEnabledRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__GetIsStartButtonEnabledRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuRpcManager__GetIsStartButtonEnabledRpc(__MenuRpcManager__GetIsStartButtonEnabledRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuRpcManager__GetIsStartButtonEnabledRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuRpcManager__GetIsStartButtonEnabledRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SetIsStartButtonEnabledRpc
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12586)), TypeDefinitionIndex(TypeDefinitionIndex(12835)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12835), inst:
// 291 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(12752)) CS Name: ::MenuRpcManager::SetIsStartButtonEnabledRpc*
class CORDL_TYPE __MenuRpcManager__SetIsStartButtonEnabledRpc : public ::GlobalNamespace::RemoteProcedureCall_1<::GlobalNamespace::CannotStartGameReason> {
public:
  // Declarations
  static inline ::GlobalNamespace::__MenuRpcManager__SetIsStartButtonEnabledRpc* New_ctor();

  /// @brief Method .ctor, addr 0xe7435c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__SetIsStartButtonEnabledRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuRpcManager__SetIsStartButtonEnabledRpc(__MenuRpcManager__SetIsStartButtonEnabledRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__SetIsStartButtonEnabledRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuRpcManager__SetIsStartButtonEnabledRpc(__MenuRpcManager__SetIsStartButtonEnabledRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuRpcManager__SetIsStartButtonEnabledRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuRpcManager__SetIsStartButtonEnabledRpc, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelLoadErrorRpc
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12835)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12835), inst: 398 })]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12753))
// CS Name: ::MenuRpcManager::LevelLoadErrorRpc*
class CORDL_TYPE __MenuRpcManager__LevelLoadErrorRpc : public ::GlobalNamespace::RemoteProcedureCall_1<::StringW> {
public:
  // Declarations
  static inline ::GlobalNamespace::__MenuRpcManager__LevelLoadErrorRpc* New_ctor();

  /// @brief Method .ctor, addr 0xe743a4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__LevelLoadErrorRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuRpcManager__LevelLoadErrorRpc(__MenuRpcManager__LevelLoadErrorRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__LevelLoadErrorRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuRpcManager__LevelLoadErrorRpc(__MenuRpcManager__LevelLoadErrorRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuRpcManager__LevelLoadErrorRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuRpcManager__LevelLoadErrorRpc, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelLoadSuccessRpc
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12835)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12835), inst: 398 })]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12754))
// CS Name: ::MenuRpcManager::LevelLoadSuccessRpc*
class CORDL_TYPE __MenuRpcManager__LevelLoadSuccessRpc : public ::GlobalNamespace::RemoteProcedureCall_1<::StringW> {
public:
  // Declarations
  static inline ::GlobalNamespace::__MenuRpcManager__LevelLoadSuccessRpc* New_ctor();

  /// @brief Method .ctor, addr 0xe743ec, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__LevelLoadSuccessRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuRpcManager__LevelLoadSuccessRpc(__MenuRpcManager__LevelLoadSuccessRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__LevelLoadSuccessRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuRpcManager__LevelLoadSuccessRpc(__MenuRpcManager__LevelLoadSuccessRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuRpcManager__LevelLoadSuccessRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuRpcManager__LevelLoadSuccessRpc, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::StartLevelRpc
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12837)), TypeDefinitionIndex(TypeDefinitionIndex(14860)), TypeDefinitionIndex(TypeDefinitionIndex(14875)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12837), inst: 4900 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(12755)) CS Name: ::MenuRpcManager::StartLevelRpc*
class CORDL_TYPE __MenuRpcManager__StartLevelRpc : public ::GlobalNamespace::RemoteProcedureCall_3<::GlobalNamespace::BeatmapKeyNetSerializable*, ::GlobalNamespace::GameplayModifiers*, int64_t> {
public:
  // Declarations
  static inline ::GlobalNamespace::__MenuRpcManager__StartLevelRpc* New_ctor();

  /// @brief Method .ctor, addr 0xe74434, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__StartLevelRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuRpcManager__StartLevelRpc(__MenuRpcManager__StartLevelRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__StartLevelRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuRpcManager__StartLevelRpc(__MenuRpcManager__StartLevelRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuRpcManager__StartLevelRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuRpcManager__StartLevelRpc, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::GetStartedLevelRpc
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12834))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12756))
// CS Name: ::MenuRpcManager::GetStartedLevelRpc*
class CORDL_TYPE __MenuRpcManager__GetStartedLevelRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::__MenuRpcManager__GetStartedLevelRpc* New_ctor();

  /// @brief Method .ctor, addr 0xe7447c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__GetStartedLevelRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuRpcManager__GetStartedLevelRpc(__MenuRpcManager__GetStartedLevelRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__GetStartedLevelRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuRpcManager__GetStartedLevelRpc(__MenuRpcManager__GetStartedLevelRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuRpcManager__GetStartedLevelRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuRpcManager__GetStartedLevelRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::GetMultiplayerGameStateRpc
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12834))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12757))
// CS Name: ::MenuRpcManager::GetMultiplayerGameStateRpc*
class CORDL_TYPE __MenuRpcManager__GetMultiplayerGameStateRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::__MenuRpcManager__GetMultiplayerGameStateRpc* New_ctor();

  /// @brief Method .ctor, addr 0xe74484, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__GetMultiplayerGameStateRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuRpcManager__GetMultiplayerGameStateRpc(__MenuRpcManager__GetMultiplayerGameStateRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__GetMultiplayerGameStateRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuRpcManager__GetMultiplayerGameStateRpc(__MenuRpcManager__GetMultiplayerGameStateRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuRpcManager__GetMultiplayerGameStateRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuRpcManager__GetMultiplayerGameStateRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SetMultiplayerGameStateRpc
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12778)), TypeDefinitionIndex(TypeDefinitionIndex(12835)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12835), inst:
// 358 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(12758)) CS Name: ::MenuRpcManager::SetMultiplayerGameStateRpc*
class CORDL_TYPE __MenuRpcManager__SetMultiplayerGameStateRpc : public ::GlobalNamespace::RemoteProcedureCall_1<::GlobalNamespace::MultiplayerGameState> {
public:
  // Declarations
  static inline ::GlobalNamespace::__MenuRpcManager__SetMultiplayerGameStateRpc* New_ctor();

  /// @brief Method .ctor, addr 0xe7448c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__SetMultiplayerGameStateRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuRpcManager__SetMultiplayerGameStateRpc(__MenuRpcManager__SetMultiplayerGameStateRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__SetMultiplayerGameStateRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuRpcManager__SetMultiplayerGameStateRpc(__MenuRpcManager__SetMultiplayerGameStateRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuRpcManager__SetMultiplayerGameStateRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuRpcManager__SetMultiplayerGameStateRpc, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::CancelCountdownRpc
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12834))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12759))
// CS Name: ::MenuRpcManager::CancelCountdownRpc*
class CORDL_TYPE __MenuRpcManager__CancelCountdownRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::__MenuRpcManager__CancelCountdownRpc* New_ctor();

  /// @brief Method .ctor, addr 0xe744d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__CancelCountdownRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuRpcManager__CancelCountdownRpc(__MenuRpcManager__CancelCountdownRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__CancelCountdownRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuRpcManager__CancelCountdownRpc(__MenuRpcManager__CancelCountdownRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuRpcManager__CancelCountdownRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuRpcManager__CancelCountdownRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SetCountdownEndTimeRpc
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12835)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12835), inst: 333 })]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12760))
// CS Name: ::MenuRpcManager::SetCountdownEndTimeRpc*
class CORDL_TYPE __MenuRpcManager__SetCountdownEndTimeRpc : public ::GlobalNamespace::RemoteProcedureCall_1<int64_t> {
public:
  // Declarations
  static inline ::GlobalNamespace::__MenuRpcManager__SetCountdownEndTimeRpc* New_ctor();

  /// @brief Method .ctor, addr 0xe744dc, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__SetCountdownEndTimeRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuRpcManager__SetCountdownEndTimeRpc(__MenuRpcManager__SetCountdownEndTimeRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__SetCountdownEndTimeRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuRpcManager__SetCountdownEndTimeRpc(__MenuRpcManager__SetCountdownEndTimeRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuRpcManager__SetCountdownEndTimeRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuRpcManager__SetCountdownEndTimeRpc, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::GetCountdownEndTimeRpc
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12834))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12761))
// CS Name: ::MenuRpcManager::GetCountdownEndTimeRpc*
class CORDL_TYPE __MenuRpcManager__GetCountdownEndTimeRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::__MenuRpcManager__GetCountdownEndTimeRpc* New_ctor();

  /// @brief Method .ctor, addr 0xe74524, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__GetCountdownEndTimeRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuRpcManager__GetCountdownEndTimeRpc(__MenuRpcManager__GetCountdownEndTimeRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__GetCountdownEndTimeRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuRpcManager__GetCountdownEndTimeRpc(__MenuRpcManager__GetCountdownEndTimeRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuRpcManager__GetCountdownEndTimeRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuRpcManager__GetCountdownEndTimeRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::CancelLevelStartRpc
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12834))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12762))
// CS Name: ::MenuRpcManager::CancelLevelStartRpc*
class CORDL_TYPE __MenuRpcManager__CancelLevelStartRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::__MenuRpcManager__CancelLevelStartRpc* New_ctor();

  /// @brief Method .ctor, addr 0xe7452c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__CancelLevelStartRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuRpcManager__CancelLevelStartRpc(__MenuRpcManager__CancelLevelStartRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__CancelLevelStartRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuRpcManager__CancelLevelStartRpc(__MenuRpcManager__CancelLevelStartRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuRpcManager__CancelLevelStartRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuRpcManager__CancelLevelStartRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::GetIsReadyRpc
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12834))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12763))
// CS Name: ::MenuRpcManager::GetIsReadyRpc*
class CORDL_TYPE __MenuRpcManager__GetIsReadyRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::__MenuRpcManager__GetIsReadyRpc* New_ctor();

  /// @brief Method .ctor, addr 0xe74534, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__GetIsReadyRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuRpcManager__GetIsReadyRpc(__MenuRpcManager__GetIsReadyRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__GetIsReadyRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuRpcManager__GetIsReadyRpc(__MenuRpcManager__GetIsReadyRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuRpcManager__GetIsReadyRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuRpcManager__GetIsReadyRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SetIsReadyRpc
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12835)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12835), inst: 77 })]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12764))
// CS Name: ::MenuRpcManager::SetIsReadyRpc*
class CORDL_TYPE __MenuRpcManager__SetIsReadyRpc : public ::GlobalNamespace::RemoteProcedureCall_1<bool> {
public:
  // Declarations
  static inline ::GlobalNamespace::__MenuRpcManager__SetIsReadyRpc* New_ctor();

  /// @brief Method .ctor, addr 0xe7453c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__SetIsReadyRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuRpcManager__SetIsReadyRpc(__MenuRpcManager__SetIsReadyRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__SetIsReadyRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuRpcManager__SetIsReadyRpc(__MenuRpcManager__SetIsReadyRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuRpcManager__SetIsReadyRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuRpcManager__SetIsReadyRpc, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SetStartGameTimeRpc
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12835)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12835), inst: 333 })]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12765))
// CS Name: ::MenuRpcManager::SetStartGameTimeRpc*
class CORDL_TYPE __MenuRpcManager__SetStartGameTimeRpc : public ::GlobalNamespace::RemoteProcedureCall_1<int64_t> {
public:
  // Declarations
  static inline ::GlobalNamespace::__MenuRpcManager__SetStartGameTimeRpc* New_ctor();

  /// @brief Method .ctor, addr 0xe74584, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__SetStartGameTimeRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuRpcManager__SetStartGameTimeRpc(__MenuRpcManager__SetStartGameTimeRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__SetStartGameTimeRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuRpcManager__SetStartGameTimeRpc(__MenuRpcManager__SetStartGameTimeRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuRpcManager__SetStartGameTimeRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuRpcManager__SetStartGameTimeRpc, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::CancelStartGameTimeRpc
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12834))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12766))
// CS Name: ::MenuRpcManager::CancelStartGameTimeRpc*
class CORDL_TYPE __MenuRpcManager__CancelStartGameTimeRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::__MenuRpcManager__CancelStartGameTimeRpc* New_ctor();

  /// @brief Method .ctor, addr 0xe745cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__CancelStartGameTimeRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuRpcManager__CancelStartGameTimeRpc(__MenuRpcManager__CancelStartGameTimeRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__CancelStartGameTimeRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuRpcManager__CancelStartGameTimeRpc(__MenuRpcManager__CancelStartGameTimeRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuRpcManager__CancelStartGameTimeRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuRpcManager__CancelStartGameTimeRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::GetIsInLobbyRpc
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12834))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12767))
// CS Name: ::MenuRpcManager::GetIsInLobbyRpc*
class CORDL_TYPE __MenuRpcManager__GetIsInLobbyRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::__MenuRpcManager__GetIsInLobbyRpc* New_ctor();

  /// @brief Method .ctor, addr 0xe745d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__GetIsInLobbyRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuRpcManager__GetIsInLobbyRpc(__MenuRpcManager__GetIsInLobbyRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__GetIsInLobbyRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuRpcManager__GetIsInLobbyRpc(__MenuRpcManager__GetIsInLobbyRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuRpcManager__GetIsInLobbyRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuRpcManager__GetIsInLobbyRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SetIsInLobbyRpc
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12835)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12835), inst: 77 })]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12768))
// CS Name: ::MenuRpcManager::SetIsInLobbyRpc*
class CORDL_TYPE __MenuRpcManager__SetIsInLobbyRpc : public ::GlobalNamespace::RemoteProcedureCall_1<bool> {
public:
  // Declarations
  static inline ::GlobalNamespace::__MenuRpcManager__SetIsInLobbyRpc* New_ctor();

  /// @brief Method .ctor, addr 0xe745dc, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__SetIsInLobbyRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuRpcManager__SetIsInLobbyRpc(__MenuRpcManager__SetIsInLobbyRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__SetIsInLobbyRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuRpcManager__SetIsInLobbyRpc(__MenuRpcManager__SetIsInLobbyRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuRpcManager__SetIsInLobbyRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuRpcManager__SetIsInLobbyRpc, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::GetOwnedSongPacksRpc
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12834))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12769))
// CS Name: ::MenuRpcManager::GetOwnedSongPacksRpc*
class CORDL_TYPE __MenuRpcManager__GetOwnedSongPacksRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::__MenuRpcManager__GetOwnedSongPacksRpc* New_ctor();

  /// @brief Method .ctor, addr 0xe74624, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__GetOwnedSongPacksRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuRpcManager__GetOwnedSongPacksRpc(__MenuRpcManager__GetOwnedSongPacksRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__GetOwnedSongPacksRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuRpcManager__GetOwnedSongPacksRpc(__MenuRpcManager__GetOwnedSongPacksRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuRpcManager__GetOwnedSongPacksRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuRpcManager__GetOwnedSongPacksRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SetOwnedSongPacksRpc
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12835)), TypeDefinitionIndex(TypeDefinitionIndex(14920)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12835), inst:
// 3322 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(12770)) CS Name: ::MenuRpcManager::SetOwnedSongPacksRpc*
class CORDL_TYPE __MenuRpcManager__SetOwnedSongPacksRpc : public ::GlobalNamespace::RemoteProcedureCall_1<::GlobalNamespace::SongPackMask> {
public:
  // Declarations
  static inline ::GlobalNamespace::__MenuRpcManager__SetOwnedSongPacksRpc* New_ctor();

  /// @brief Method .ctor, addr 0xe7462c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__SetOwnedSongPacksRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuRpcManager__SetOwnedSongPacksRpc(__MenuRpcManager__SetOwnedSongPacksRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__SetOwnedSongPacksRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuRpcManager__SetOwnedSongPacksRpc(__MenuRpcManager__SetOwnedSongPacksRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuRpcManager__SetOwnedSongPacksRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuRpcManager__SetOwnedSongPacksRpc, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::RequestKickPlayerRpc
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12835)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12835), inst: 398 })]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12771))
// CS Name: ::MenuRpcManager::RequestKickPlayerRpc*
class CORDL_TYPE __MenuRpcManager__RequestKickPlayerRpc : public ::GlobalNamespace::RemoteProcedureCall_1<::StringW> {
public:
  // Declarations
  static inline ::GlobalNamespace::__MenuRpcManager__RequestKickPlayerRpc* New_ctor();

  /// @brief Method .ctor, addr 0xe74674, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__RequestKickPlayerRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuRpcManager__RequestKickPlayerRpc(__MenuRpcManager__RequestKickPlayerRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuRpcManager__RequestKickPlayerRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuRpcManager__RequestKickPlayerRpc(__MenuRpcManager__RequestKickPlayerRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuRpcManager__RequestKickPlayerRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuRpcManager__RequestKickPlayerRpc, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::MenuRpcManager
// SizeInfo { instance_size: 352, native_size: -1, calculated_instance_size: 352, calculated_native_size: 352, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12772))
// CS Name: ::MenuRpcManager*
class CORDL_TYPE MenuRpcManager : public ::System::Object {
public:
  // Declarations
  using RequestKickPlayerRpc = ::GlobalNamespace::__MenuRpcManager__RequestKickPlayerRpc;

  using SetOwnedSongPacksRpc = ::GlobalNamespace::__MenuRpcManager__SetOwnedSongPacksRpc;

  using GetOwnedSongPacksRpc = ::GlobalNamespace::__MenuRpcManager__GetOwnedSongPacksRpc;

  using SetIsInLobbyRpc = ::GlobalNamespace::__MenuRpcManager__SetIsInLobbyRpc;

  using GetIsInLobbyRpc = ::GlobalNamespace::__MenuRpcManager__GetIsInLobbyRpc;

  using CancelStartGameTimeRpc = ::GlobalNamespace::__MenuRpcManager__CancelStartGameTimeRpc;

  using SetStartGameTimeRpc = ::GlobalNamespace::__MenuRpcManager__SetStartGameTimeRpc;

  using SetIsReadyRpc = ::GlobalNamespace::__MenuRpcManager__SetIsReadyRpc;

  using GetIsReadyRpc = ::GlobalNamespace::__MenuRpcManager__GetIsReadyRpc;

  using CancelLevelStartRpc = ::GlobalNamespace::__MenuRpcManager__CancelLevelStartRpc;

  using GetCountdownEndTimeRpc = ::GlobalNamespace::__MenuRpcManager__GetCountdownEndTimeRpc;

  using SetCountdownEndTimeRpc = ::GlobalNamespace::__MenuRpcManager__SetCountdownEndTimeRpc;

  using CancelCountdownRpc = ::GlobalNamespace::__MenuRpcManager__CancelCountdownRpc;

  using SetMultiplayerGameStateRpc = ::GlobalNamespace::__MenuRpcManager__SetMultiplayerGameStateRpc;

  using GetMultiplayerGameStateRpc = ::GlobalNamespace::__MenuRpcManager__GetMultiplayerGameStateRpc;

  using GetStartedLevelRpc = ::GlobalNamespace::__MenuRpcManager__GetStartedLevelRpc;

  using StartLevelRpc = ::GlobalNamespace::__MenuRpcManager__StartLevelRpc;

  using LevelLoadSuccessRpc = ::GlobalNamespace::__MenuRpcManager__LevelLoadSuccessRpc;

  using LevelLoadErrorRpc = ::GlobalNamespace::__MenuRpcManager__LevelLoadErrorRpc;

  using SetIsStartButtonEnabledRpc = ::GlobalNamespace::__MenuRpcManager__SetIsStartButtonEnabledRpc;

  using GetIsStartButtonEnabledRpc = ::GlobalNamespace::__MenuRpcManager__GetIsStartButtonEnabledRpc;

  using GetRecommendedGameplayModifiersRpc = ::GlobalNamespace::__MenuRpcManager__GetRecommendedGameplayModifiersRpc;

  using ClearRecommendedGameplayModifiersRpc = ::GlobalNamespace::__MenuRpcManager__ClearRecommendedGameplayModifiersRpc;

  using RecommendGameplayModifiersRpc = ::GlobalNamespace::__MenuRpcManager__RecommendGameplayModifiersRpc;

  using GetSelectedGameplayModifiersRpc = ::GlobalNamespace::__MenuRpcManager__GetSelectedGameplayModifiersRpc;

  using ClearSelectedGameplayModifiersRpc = ::GlobalNamespace::__MenuRpcManager__ClearSelectedGameplayModifiersRpc;

  using SetSelectedGameplayModifiersRpc = ::GlobalNamespace::__MenuRpcManager__SetSelectedGameplayModifiersRpc;

  using GetRecommendedBeatmapRpc = ::GlobalNamespace::__MenuRpcManager__GetRecommendedBeatmapRpc;

  using ClearRecommendedBeatmapRpc = ::GlobalNamespace::__MenuRpcManager__ClearRecommendedBeatmapRpc;

  using RecommendBeatmapRpc = ::GlobalNamespace::__MenuRpcManager__RecommendBeatmapRpc;

  using GetSelectedBeatmapRpc = ::GlobalNamespace::__MenuRpcManager__GetSelectedBeatmapRpc;

  using ClearSelectedBeatmapRpc = ::GlobalNamespace::__MenuRpcManager__ClearSelectedBeatmapRpc;

  using SetSelectedBeatmapRpc = ::GlobalNamespace::__MenuRpcManager__SetSelectedBeatmapRpc;

  using SelectLevelPackRpc = ::GlobalNamespace::__MenuRpcManager__SelectLevelPackRpc;

  using InvalidateLevelEntitlementStatusesRpc = ::GlobalNamespace::__MenuRpcManager__InvalidateLevelEntitlementStatusesRpc;

  using SetIsEntitledToLevelRpc = ::GlobalNamespace::__MenuRpcManager__SetIsEntitledToLevelRpc;

  using GetIsEntitledToLevelRpc = ::GlobalNamespace::__MenuRpcManager__GetIsEntitledToLevelRpc;

  using SetPlayersMissingEntitlementsToLevelRpc = ::GlobalNamespace::__MenuRpcManager__SetPlayersMissingEntitlementsToLevelRpc;

  using SetPlayersPermissionConfigurationRpc = ::GlobalNamespace::__MenuRpcManager__SetPlayersPermissionConfigurationRpc;

  using GetPlayersPermissionConfigurationRpc = ::GlobalNamespace::__MenuRpcManager__GetPlayersPermissionConfigurationRpc;

  using RpcType = ::GlobalNamespace::__MenuRpcManager__RpcType;

  /// @brief Field _multiplayerSessionManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionManager,
                      put = __cordl_internal_set__multiplayerSessionManager))::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field _rpcHandler, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__rpcHandler, put = __cordl_internal_set__rpcHandler))::GlobalNamespace::RpcHandler_1<::GlobalNamespace::__MenuRpcManager__RpcType>* _rpcHandler;

  /// @brief Field getPlayersPermissionConfigurationEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_getPlayersPermissionConfigurationEvent,
                      put = __cordl_internal_set_getPlayersPermissionConfigurationEvent))::System::Action_1<::StringW>* getPlayersPermissionConfigurationEvent;

  /// @brief Field setPlayersPermissionConfigurationEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_setPlayersPermissionConfigurationEvent, put = __cordl_internal_set_setPlayersPermissionConfigurationEvent))::System::Action_2<
      ::StringW, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>* setPlayersPermissionConfigurationEvent;

  /// @brief Field setPlayersMissingEntitlementsToLevelEvent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_setPlayersMissingEntitlementsToLevelEvent, put = __cordl_internal_set_setPlayersMissingEntitlementsToLevelEvent))::System::Action_2<
      ::StringW, ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>* setPlayersMissingEntitlementsToLevelEvent;

  /// @brief Field getIsEntitledToLevelEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_getIsEntitledToLevelEvent, put = __cordl_internal_set_getIsEntitledToLevelEvent))::System::Action_2<::StringW, ::StringW>* getIsEntitledToLevelEvent;

  /// @brief Field setIsEntitledToLevelEvent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_setIsEntitledToLevelEvent,
                      put = __cordl_internal_set_setIsEntitledToLevelEvent))::System::Action_3<::StringW, ::StringW, ::GlobalNamespace::EntitlementsStatus>* setIsEntitledToLevelEvent;

  /// @brief Field levelEntitlementStatusesInvalidatedEvent, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_levelEntitlementStatusesInvalidatedEvent,
                      put = __cordl_internal_set_levelEntitlementStatusesInvalidatedEvent))::System::Action_1<::StringW>* levelEntitlementStatusesInvalidatedEvent;

  /// @brief Field selectedLevelPackEvent, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_selectedLevelPackEvent, put = __cordl_internal_set_selectedLevelPackEvent))::System::Action_2<::StringW, ::StringW>* selectedLevelPackEvent;

  /// @brief Field setSelectedBeatmapEvent, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_setSelectedBeatmapEvent,
                      put = __cordl_internal_set_setSelectedBeatmapEvent))::System::Action_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>* setSelectedBeatmapEvent;

  /// @brief Field clearSelectedBeatmapEvent, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_clearSelectedBeatmapEvent, put = __cordl_internal_set_clearSelectedBeatmapEvent))::System::Action_1<::StringW>* clearSelectedBeatmapEvent;

  /// @brief Field getSelectedBeatmapEvent, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_getSelectedBeatmapEvent, put = __cordl_internal_set_getSelectedBeatmapEvent))::System::Action_1<::StringW>* getSelectedBeatmapEvent;

  /// @brief Field recommendBeatmapEvent, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_recommendBeatmapEvent,
                      put = __cordl_internal_set_recommendBeatmapEvent))::System::Action_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>* recommendBeatmapEvent;

  /// @brief Field clearRecommendedBeatmapEvent, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_clearRecommendedBeatmapEvent, put = __cordl_internal_set_clearRecommendedBeatmapEvent))::System::Action_1<::StringW>* clearRecommendedBeatmapEvent;

  /// @brief Field getRecommendedBeatmapEvent, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_getRecommendedBeatmapEvent, put = __cordl_internal_set_getRecommendedBeatmapEvent))::System::Action_1<::StringW>* getRecommendedBeatmapEvent;

  /// @brief Field setSelectedGameplayModifiersEvent, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_setSelectedGameplayModifiersEvent,
                      put = __cordl_internal_set_setSelectedGameplayModifiersEvent))::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>* setSelectedGameplayModifiersEvent;

  /// @brief Field clearSelectedGameplayModifiersEvent, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_clearSelectedGameplayModifiersEvent,
                      put = __cordl_internal_set_clearSelectedGameplayModifiersEvent))::System::Action_1<::StringW>* clearSelectedGameplayModifiersEvent;

  /// @brief Field getSelectedGameplayModifiersEvent, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_getSelectedGameplayModifiersEvent,
                      put = __cordl_internal_set_getSelectedGameplayModifiersEvent))::System::Action_1<::StringW>* getSelectedGameplayModifiersEvent;

  /// @brief Field recommendGameplayModifiersEvent, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_recommendGameplayModifiersEvent,
                      put = __cordl_internal_set_recommendGameplayModifiersEvent))::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>* recommendGameplayModifiersEvent;

  /// @brief Field clearRecommendedGameplayModifiersEvent, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_clearRecommendedGameplayModifiersEvent,
                      put = __cordl_internal_set_clearRecommendedGameplayModifiersEvent))::System::Action_1<::StringW>* clearRecommendedGameplayModifiersEvent;

  /// @brief Field getRecommendedGameplayModifiersEvent, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_getRecommendedGameplayModifiersEvent,
                      put = __cordl_internal_set_getRecommendedGameplayModifiersEvent))::System::Action_1<::StringW>* getRecommendedGameplayModifiersEvent;

  /// @brief Field getIsStartButtonEnabledEvent, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_getIsStartButtonEnabledEvent, put = __cordl_internal_set_getIsStartButtonEnabledEvent))::System::Action_1<::StringW>* getIsStartButtonEnabledEvent;

  /// @brief Field setIsStartButtonEnabledEvent, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_setIsStartButtonEnabledEvent,
                      put = __cordl_internal_set_setIsStartButtonEnabledEvent))::System::Action_2<::StringW, ::GlobalNamespace::CannotStartGameReason>* setIsStartButtonEnabledEvent;

  /// @brief Field levelLoadErrorEvent, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_levelLoadErrorEvent, put = __cordl_internal_set_levelLoadErrorEvent))::System::Action_2<::StringW, ::StringW>* levelLoadErrorEvent;

  /// @brief Field levelLoadSuccessEvent, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_levelLoadSuccessEvent, put = __cordl_internal_set_levelLoadSuccessEvent))::System::Action_2<::StringW, ::StringW>* levelLoadSuccessEvent;

  /// @brief Field startedLevelEvent, offset 0xd8, size 0x8
  __declspec(property(
      get = __cordl_internal_get_startedLevelEvent,
      put = __cordl_internal_set_startedLevelEvent))::System::Action_4<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*, ::GlobalNamespace::GameplayModifiers*, int64_t>* startedLevelEvent;

  /// @brief Field getStartedLevelEvent, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_getStartedLevelEvent, put = __cordl_internal_set_getStartedLevelEvent))::System::Action_1<::StringW>* getStartedLevelEvent;

  /// @brief Field getMultiplayerGameStateEvent, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_getMultiplayerGameStateEvent, put = __cordl_internal_set_getMultiplayerGameStateEvent))::System::Action_1<::StringW>* getMultiplayerGameStateEvent;

  /// @brief Field setMultiplayerGameStateEvent, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_setMultiplayerGameStateEvent,
                      put = __cordl_internal_set_setMultiplayerGameStateEvent))::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerGameState>* setMultiplayerGameStateEvent;

  /// @brief Field cancelCountdownEvent, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_cancelCountdownEvent, put = __cordl_internal_set_cancelCountdownEvent))::System::Action_1<::StringW>* cancelCountdownEvent;

  /// @brief Field setCountdownEndTimeEvent, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_setCountdownEndTimeEvent, put = __cordl_internal_set_setCountdownEndTimeEvent))::System::Action_2<::StringW, int64_t>* setCountdownEndTimeEvent;

  /// @brief Field getCountdownEndTimeEvent, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_getCountdownEndTimeEvent, put = __cordl_internal_set_getCountdownEndTimeEvent))::System::Action_1<::StringW>* getCountdownEndTimeEvent;

  /// @brief Field cancelledLevelStartEvent, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_cancelledLevelStartEvent, put = __cordl_internal_set_cancelledLevelStartEvent))::System::Action_1<::StringW>* cancelledLevelStartEvent;

  /// @brief Field getIsReadyEvent, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_getIsReadyEvent, put = __cordl_internal_set_getIsReadyEvent))::System::Action_1<::StringW>* getIsReadyEvent;

  /// @brief Field setIsReadyEvent, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_setIsReadyEvent, put = __cordl_internal_set_setIsReadyEvent))::System::Action_2<::StringW, bool>* setIsReadyEvent;

  /// @brief Field setStartGameTimeEvent, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get_setStartGameTimeEvent, put = __cordl_internal_set_setStartGameTimeEvent))::System::Action_2<::StringW, int64_t>* setStartGameTimeEvent;

  /// @brief Field cancelStartGameTimeEvent, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get_cancelStartGameTimeEvent, put = __cordl_internal_set_cancelStartGameTimeEvent))::System::Action_1<::StringW>* cancelStartGameTimeEvent;

  /// @brief Field getIsInLobbyEvent, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get_getIsInLobbyEvent, put = __cordl_internal_set_getIsInLobbyEvent))::System::Action_1<::StringW>* getIsInLobbyEvent;

  /// @brief Field setIsInLobbyEvent, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get_setIsInLobbyEvent, put = __cordl_internal_set_setIsInLobbyEvent))::System::Action_2<::StringW, bool>* setIsInLobbyEvent;

  /// @brief Field getOwnedSongPacksEvent, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get_getOwnedSongPacksEvent, put = __cordl_internal_set_getOwnedSongPacksEvent))::System::Action_1<::StringW>* getOwnedSongPacksEvent;

  /// @brief Field setOwnedSongPacksEvent, offset 0x150, size 0x8
  __declspec(property(get = __cordl_internal_get_setOwnedSongPacksEvent,
                      put = __cordl_internal_set_setOwnedSongPacksEvent))::System::Action_2<::StringW, ::GlobalNamespace::SongPackMask>* setOwnedSongPacksEvent;

  /// @brief Field requestedKickPlayerEvent, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get_requestedKickPlayerEvent, put = __cordl_internal_set_requestedKickPlayerEvent))::System::Action_2<::StringW, ::StringW>* requestedKickPlayerEvent;

  __declspec(property(get = get_multiplayerSessionManager))::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;

  __declspec(property(get = get_enabled, put = set_enabled)) bool enabled;

  __declspec(property(get = get_enabledForAllPlayers)) bool enabledForAllPlayers;

  __declspec(property(get = get_syncTime)) int64_t syncTime;

  /// @brief Convert operator to "::GlobalNamespace::IMenuRpcManager"
  constexpr operator ::GlobalNamespace::IMenuRpcManager*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IMenuRpcManager"
  constexpr ::GlobalNamespace::IMenuRpcManager* i___GlobalNamespace__IMenuRpcManager() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __cordl_internal_get__multiplayerSessionManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const& __cordl_internal_get__multiplayerSessionManager() const;

  constexpr void __cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr ::GlobalNamespace::RpcHandler_1<::GlobalNamespace::__MenuRpcManager__RpcType>*& __cordl_internal_get__rpcHandler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RpcHandler_1<::GlobalNamespace::__MenuRpcManager__RpcType>*> const& __cordl_internal_get__rpcHandler() const;

  constexpr void __cordl_internal_set__rpcHandler(::GlobalNamespace::RpcHandler_1<::GlobalNamespace::__MenuRpcManager__RpcType>* value);

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_getPlayersPermissionConfigurationEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __cordl_internal_get_getPlayersPermissionConfigurationEvent() const;

  constexpr void __cordl_internal_set_getPlayersPermissionConfigurationEvent(::System::Action_1<::StringW>* value);

  constexpr ::System::Action_2<::StringW, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>*& __cordl_internal_get_setPlayersPermissionConfigurationEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>*> const&
  __cordl_internal_get_setPlayersPermissionConfigurationEvent() const;

  constexpr void __cordl_internal_set_setPlayersPermissionConfigurationEvent(::System::Action_2<::StringW, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>* value);

  constexpr ::System::Action_2<::StringW, ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*& __cordl_internal_get_setPlayersMissingEntitlementsToLevelEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW, ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*> const&
  __cordl_internal_get_setPlayersMissingEntitlementsToLevelEvent() const;

  constexpr void __cordl_internal_set_setPlayersMissingEntitlementsToLevelEvent(::System::Action_2<::StringW, ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>* value);

  constexpr ::System::Action_2<::StringW, ::StringW>*& __cordl_internal_get_getIsEntitledToLevelEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW, ::StringW>*> const& __cordl_internal_get_getIsEntitledToLevelEvent() const;

  constexpr void __cordl_internal_set_getIsEntitledToLevelEvent(::System::Action_2<::StringW, ::StringW>* value);

  constexpr ::System::Action_3<::StringW, ::StringW, ::GlobalNamespace::EntitlementsStatus>*& __cordl_internal_get_setIsEntitledToLevelEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::StringW, ::StringW, ::GlobalNamespace::EntitlementsStatus>*> const& __cordl_internal_get_setIsEntitledToLevelEvent() const;

  constexpr void __cordl_internal_set_setIsEntitledToLevelEvent(::System::Action_3<::StringW, ::StringW, ::GlobalNamespace::EntitlementsStatus>* value);

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_levelEntitlementStatusesInvalidatedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __cordl_internal_get_levelEntitlementStatusesInvalidatedEvent() const;

  constexpr void __cordl_internal_set_levelEntitlementStatusesInvalidatedEvent(::System::Action_1<::StringW>* value);

  constexpr ::System::Action_2<::StringW, ::StringW>*& __cordl_internal_get_selectedLevelPackEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW, ::StringW>*> const& __cordl_internal_get_selectedLevelPackEvent() const;

  constexpr void __cordl_internal_set_selectedLevelPackEvent(::System::Action_2<::StringW, ::StringW>* value);

  constexpr ::System::Action_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>*& __cordl_internal_get_setSelectedBeatmapEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>*> const& __cordl_internal_get_setSelectedBeatmapEvent() const;

  constexpr void __cordl_internal_set_setSelectedBeatmapEvent(::System::Action_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>* value);

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_clearSelectedBeatmapEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __cordl_internal_get_clearSelectedBeatmapEvent() const;

  constexpr void __cordl_internal_set_clearSelectedBeatmapEvent(::System::Action_1<::StringW>* value);

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_getSelectedBeatmapEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __cordl_internal_get_getSelectedBeatmapEvent() const;

  constexpr void __cordl_internal_set_getSelectedBeatmapEvent(::System::Action_1<::StringW>* value);

  constexpr ::System::Action_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>*& __cordl_internal_get_recommendBeatmapEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>*> const& __cordl_internal_get_recommendBeatmapEvent() const;

  constexpr void __cordl_internal_set_recommendBeatmapEvent(::System::Action_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>* value);

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_clearRecommendedBeatmapEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __cordl_internal_get_clearRecommendedBeatmapEvent() const;

  constexpr void __cordl_internal_set_clearRecommendedBeatmapEvent(::System::Action_1<::StringW>* value);

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_getRecommendedBeatmapEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __cordl_internal_get_getRecommendedBeatmapEvent() const;

  constexpr void __cordl_internal_set_getRecommendedBeatmapEvent(::System::Action_1<::StringW>* value);

  constexpr ::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>*& __cordl_internal_get_setSelectedGameplayModifiersEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>*> const& __cordl_internal_get_setSelectedGameplayModifiersEvent() const;

  constexpr void __cordl_internal_set_setSelectedGameplayModifiersEvent(::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>* value);

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_clearSelectedGameplayModifiersEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __cordl_internal_get_clearSelectedGameplayModifiersEvent() const;

  constexpr void __cordl_internal_set_clearSelectedGameplayModifiersEvent(::System::Action_1<::StringW>* value);

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_getSelectedGameplayModifiersEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __cordl_internal_get_getSelectedGameplayModifiersEvent() const;

  constexpr void __cordl_internal_set_getSelectedGameplayModifiersEvent(::System::Action_1<::StringW>* value);

  constexpr ::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>*& __cordl_internal_get_recommendGameplayModifiersEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>*> const& __cordl_internal_get_recommendGameplayModifiersEvent() const;

  constexpr void __cordl_internal_set_recommendGameplayModifiersEvent(::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>* value);

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_clearRecommendedGameplayModifiersEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __cordl_internal_get_clearRecommendedGameplayModifiersEvent() const;

  constexpr void __cordl_internal_set_clearRecommendedGameplayModifiersEvent(::System::Action_1<::StringW>* value);

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_getRecommendedGameplayModifiersEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __cordl_internal_get_getRecommendedGameplayModifiersEvent() const;

  constexpr void __cordl_internal_set_getRecommendedGameplayModifiersEvent(::System::Action_1<::StringW>* value);

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_getIsStartButtonEnabledEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __cordl_internal_get_getIsStartButtonEnabledEvent() const;

  constexpr void __cordl_internal_set_getIsStartButtonEnabledEvent(::System::Action_1<::StringW>* value);

  constexpr ::System::Action_2<::StringW, ::GlobalNamespace::CannotStartGameReason>*& __cordl_internal_get_setIsStartButtonEnabledEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW, ::GlobalNamespace::CannotStartGameReason>*> const& __cordl_internal_get_setIsStartButtonEnabledEvent() const;

  constexpr void __cordl_internal_set_setIsStartButtonEnabledEvent(::System::Action_2<::StringW, ::GlobalNamespace::CannotStartGameReason>* value);

  constexpr ::System::Action_2<::StringW, ::StringW>*& __cordl_internal_get_levelLoadErrorEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW, ::StringW>*> const& __cordl_internal_get_levelLoadErrorEvent() const;

  constexpr void __cordl_internal_set_levelLoadErrorEvent(::System::Action_2<::StringW, ::StringW>* value);

  constexpr ::System::Action_2<::StringW, ::StringW>*& __cordl_internal_get_levelLoadSuccessEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW, ::StringW>*> const& __cordl_internal_get_levelLoadSuccessEvent() const;

  constexpr void __cordl_internal_set_levelLoadSuccessEvent(::System::Action_2<::StringW, ::StringW>* value);

  constexpr ::System::Action_4<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*, ::GlobalNamespace::GameplayModifiers*, int64_t>*& __cordl_internal_get_startedLevelEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_4<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*, ::GlobalNamespace::GameplayModifiers*, int64_t>*> const&
  __cordl_internal_get_startedLevelEvent() const;

  constexpr void __cordl_internal_set_startedLevelEvent(::System::Action_4<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*, ::GlobalNamespace::GameplayModifiers*, int64_t>* value);

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_getStartedLevelEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __cordl_internal_get_getStartedLevelEvent() const;

  constexpr void __cordl_internal_set_getStartedLevelEvent(::System::Action_1<::StringW>* value);

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_getMultiplayerGameStateEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __cordl_internal_get_getMultiplayerGameStateEvent() const;

  constexpr void __cordl_internal_set_getMultiplayerGameStateEvent(::System::Action_1<::StringW>* value);

  constexpr ::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerGameState>*& __cordl_internal_get_setMultiplayerGameStateEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerGameState>*> const& __cordl_internal_get_setMultiplayerGameStateEvent() const;

  constexpr void __cordl_internal_set_setMultiplayerGameStateEvent(::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerGameState>* value);

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_cancelCountdownEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __cordl_internal_get_cancelCountdownEvent() const;

  constexpr void __cordl_internal_set_cancelCountdownEvent(::System::Action_1<::StringW>* value);

  constexpr ::System::Action_2<::StringW, int64_t>*& __cordl_internal_get_setCountdownEndTimeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW, int64_t>*> const& __cordl_internal_get_setCountdownEndTimeEvent() const;

  constexpr void __cordl_internal_set_setCountdownEndTimeEvent(::System::Action_2<::StringW, int64_t>* value);

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_getCountdownEndTimeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __cordl_internal_get_getCountdownEndTimeEvent() const;

  constexpr void __cordl_internal_set_getCountdownEndTimeEvent(::System::Action_1<::StringW>* value);

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_cancelledLevelStartEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __cordl_internal_get_cancelledLevelStartEvent() const;

  constexpr void __cordl_internal_set_cancelledLevelStartEvent(::System::Action_1<::StringW>* value);

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_getIsReadyEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __cordl_internal_get_getIsReadyEvent() const;

  constexpr void __cordl_internal_set_getIsReadyEvent(::System::Action_1<::StringW>* value);

  constexpr ::System::Action_2<::StringW, bool>*& __cordl_internal_get_setIsReadyEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW, bool>*> const& __cordl_internal_get_setIsReadyEvent() const;

  constexpr void __cordl_internal_set_setIsReadyEvent(::System::Action_2<::StringW, bool>* value);

  constexpr ::System::Action_2<::StringW, int64_t>*& __cordl_internal_get_setStartGameTimeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW, int64_t>*> const& __cordl_internal_get_setStartGameTimeEvent() const;

  constexpr void __cordl_internal_set_setStartGameTimeEvent(::System::Action_2<::StringW, int64_t>* value);

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_cancelStartGameTimeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __cordl_internal_get_cancelStartGameTimeEvent() const;

  constexpr void __cordl_internal_set_cancelStartGameTimeEvent(::System::Action_1<::StringW>* value);

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_getIsInLobbyEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __cordl_internal_get_getIsInLobbyEvent() const;

  constexpr void __cordl_internal_set_getIsInLobbyEvent(::System::Action_1<::StringW>* value);

  constexpr ::System::Action_2<::StringW, bool>*& __cordl_internal_get_setIsInLobbyEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW, bool>*> const& __cordl_internal_get_setIsInLobbyEvent() const;

  constexpr void __cordl_internal_set_setIsInLobbyEvent(::System::Action_2<::StringW, bool>* value);

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_getOwnedSongPacksEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __cordl_internal_get_getOwnedSongPacksEvent() const;

  constexpr void __cordl_internal_set_getOwnedSongPacksEvent(::System::Action_1<::StringW>* value);

  constexpr ::System::Action_2<::StringW, ::GlobalNamespace::SongPackMask>*& __cordl_internal_get_setOwnedSongPacksEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW, ::GlobalNamespace::SongPackMask>*> const& __cordl_internal_get_setOwnedSongPacksEvent() const;

  constexpr void __cordl_internal_set_setOwnedSongPacksEvent(::System::Action_2<::StringW, ::GlobalNamespace::SongPackMask>* value);

  constexpr ::System::Action_2<::StringW, ::StringW>*& __cordl_internal_get_requestedKickPlayerEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW, ::StringW>*> const& __cordl_internal_get_requestedKickPlayerEvent() const;

  constexpr void __cordl_internal_set_requestedKickPlayerEvent(::System::Action_2<::StringW, ::StringW>* value);

  /// @brief Method get_multiplayerSessionManager, addr 0xe6e0b0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IMultiplayerSessionManager* get_multiplayerSessionManager();

  /// @brief Method get_enabled, addr 0xe6e0b8, size 0xc0, virtual false, abstract: false, final false
  inline bool get_enabled();

  /// @brief Method set_enabled, addr 0xe6e178, size 0xc8, virtual false, abstract: false, final false
  inline void set_enabled(bool value);

  /// @brief Method get_enabledForAllPlayers, addr 0xe6e240, size 0x1dc, virtual false, abstract: false, final false
  inline bool get_enabledForAllPlayers();

  /// @brief Method get_syncTime, addr 0xe6e41c, size 0xa4, virtual true, abstract: false, final true
  inline int64_t get_syncTime();

  static inline ::GlobalNamespace::MenuRpcManager* New_ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager);

  /// @brief Method .ctor, addr 0xe6e4c0, size 0x1150, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager);

  /// @brief Method Dispose, addr 0xe6f610, size 0x5c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method EnabledForPlayer, addr 0xe6f66c, size 0xbc, virtual false, abstract: false, final false
  inline bool EnabledForPlayer(::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method add_getPlayersPermissionConfigurationEvent, addr 0xe6f728, size 0xb0, virtual true, abstract: false, final true
  inline void add_getPlayersPermissionConfigurationEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_getPlayersPermissionConfigurationEvent, addr 0xe6f7d8, size 0xb0, virtual true, abstract: false, final true
  inline void remove_getPlayersPermissionConfigurationEvent(::System::Action_1<::StringW>* value);

  /// @brief Method GetPlayersPermissionConfiguration, addr 0xe6f888, size 0x50, virtual true, abstract: false, final true
  inline void GetPlayersPermissionConfiguration();

  /// @brief Method InvokeGetPlayersPermissionConfiguration, addr 0xe6f8d8, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeGetPlayersPermissionConfiguration(::StringW userId);

  /// @brief Method add_setPlayersPermissionConfigurationEvent, addr 0xe6f8f4, size 0xb0, virtual true, abstract: false, final true
  inline void add_setPlayersPermissionConfigurationEvent(::System::Action_2<::StringW, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>* value);

  /// @brief Method remove_setPlayersPermissionConfigurationEvent, addr 0xe6f9a4, size 0xb0, virtual true, abstract: false, final true
  inline void remove_setPlayersPermissionConfigurationEvent(::System::Action_2<::StringW, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>* value);

  /// @brief Method SetPlayersPermissionConfiguration, addr 0xe6fa54, size 0x58, virtual true, abstract: false, final true
  inline void SetPlayersPermissionConfiguration(::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable* playersPermissionConfiguration);

  /// @brief Method InvokeSetPlayersPermissionConfiguration, addr 0xe6faac, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeSetPlayersPermissionConfiguration(::StringW userId, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable* playersPermissionConfiguration);

  /// @brief Method add_setPlayersMissingEntitlementsToLevelEvent, addr 0xe6fac8, size 0xb0, virtual true, abstract: false, final true
  inline void add_setPlayersMissingEntitlementsToLevelEvent(::System::Action_2<::StringW, ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>* value);

  /// @brief Method remove_setPlayersMissingEntitlementsToLevelEvent, addr 0xe6fb78, size 0xb0, virtual true, abstract: false, final true
  inline void remove_setPlayersMissingEntitlementsToLevelEvent(::System::Action_2<::StringW, ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>* value);

  /// @brief Method SetPlayersMissingEntitlementsToLevel, addr 0xe6fc28, size 0x58, virtual true, abstract: false, final true
  inline void SetPlayersMissingEntitlementsToLevel(::GlobalNamespace::PlayersMissingEntitlementsNetSerializable* playersMissingEntitlements);

  /// @brief Method InvokeSetPlayersMissingEntitlementsToLevelRpc, addr 0xe6fc80, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeSetPlayersMissingEntitlementsToLevelRpc(::StringW userId, ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable* playersMissingEntitlements);

  /// @brief Method add_getIsEntitledToLevelEvent, addr 0xe6fc9c, size 0xb0, virtual true, abstract: false, final true
  inline void add_getIsEntitledToLevelEvent(::System::Action_2<::StringW, ::StringW>* value);

  /// @brief Method remove_getIsEntitledToLevelEvent, addr 0xe6fd4c, size 0xb0, virtual true, abstract: false, final true
  inline void remove_getIsEntitledToLevelEvent(::System::Action_2<::StringW, ::StringW>* value);

  /// @brief Method GetIsEntitledToLevel, addr 0xe6fdfc, size 0x58, virtual true, abstract: false, final true
  inline void GetIsEntitledToLevel(::StringW levelId);

  /// @brief Method InvokeGetIsEntitledToLevel, addr 0xe6fe54, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeGetIsEntitledToLevel(::StringW userId, ::StringW levelId);

  /// @brief Method add_setIsEntitledToLevelEvent, addr 0xe6fe70, size 0xb0, virtual true, abstract: false, final true
  inline void add_setIsEntitledToLevelEvent(::System::Action_3<::StringW, ::StringW, ::GlobalNamespace::EntitlementsStatus>* value);

  /// @brief Method remove_setIsEntitledToLevelEvent, addr 0xe6ff20, size 0xb0, virtual true, abstract: false, final true
  inline void remove_setIsEntitledToLevelEvent(::System::Action_3<::StringW, ::StringW, ::GlobalNamespace::EntitlementsStatus>* value);

  /// @brief Method SetIsEntitledToLevel, addr 0xe6ffd0, size 0x68, virtual true, abstract: false, final true
  inline void SetIsEntitledToLevel(::StringW levelId, ::GlobalNamespace::EntitlementsStatus entitlementStatus);

  /// @brief Method InvokeSetIsEntitledToLevel, addr 0xe70038, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeSetIsEntitledToLevel(::StringW userId, ::StringW levelId, int32_t entitlementStatus);

  /// @brief Method add_levelEntitlementStatusesInvalidatedEvent, addr 0xe70054, size 0xb0, virtual true, abstract: false, final true
  inline void add_levelEntitlementStatusesInvalidatedEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_levelEntitlementStatusesInvalidatedEvent, addr 0xe70104, size 0xb0, virtual true, abstract: false, final true
  inline void remove_levelEntitlementStatusesInvalidatedEvent(::System::Action_1<::StringW>* value);

  /// @brief Method InvalidateLevelEntitlementStatuses, addr 0xe701b4, size 0x50, virtual true, abstract: false, final true
  inline void InvalidateLevelEntitlementStatuses();

  /// @brief Method InvokeLevelEntitlementStatusesInvalidated, addr 0xe70204, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeLevelEntitlementStatusesInvalidated(::StringW userId);

  /// @brief Method add_selectedLevelPackEvent, addr 0xe70220, size 0xb0, virtual false, abstract: false, final false
  inline void add_selectedLevelPackEvent(::System::Action_2<::StringW, ::StringW>* value);

  /// @brief Method remove_selectedLevelPackEvent, addr 0xe702d0, size 0xb0, virtual false, abstract: false, final false
  inline void remove_selectedLevelPackEvent(::System::Action_2<::StringW, ::StringW>* value);

  /// @brief Method SelectLevelPack, addr 0xe70380, size 0x58, virtual false, abstract: false, final false
  inline void SelectLevelPack(::StringW levelPackId);

  /// @brief Method InvokeOnSelectedLevelPackEvent, addr 0xe703d8, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeOnSelectedLevelPackEvent(::StringW userId, ::StringW levelPackId);

  /// @brief Method add_setSelectedBeatmapEvent, addr 0xe703f4, size 0xb0, virtual true, abstract: false, final true
  inline void add_setSelectedBeatmapEvent(::System::Action_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>* value);

  /// @brief Method remove_setSelectedBeatmapEvent, addr 0xe704a4, size 0xb0, virtual true, abstract: false, final true
  inline void remove_setSelectedBeatmapEvent(::System::Action_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>* value);

  /// @brief Method SetSelectedBeatmap, addr 0xe70554, size 0x58, virtual true, abstract: false, final true
  inline void SetSelectedBeatmap(::GlobalNamespace::BeatmapKeyNetSerializable* key);

  /// @brief Method InvokeSetSelectedBeatmap, addr 0xe705ac, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeSetSelectedBeatmap(::StringW userId, ::GlobalNamespace::BeatmapKeyNetSerializable* key);

  /// @brief Method add_clearSelectedBeatmapEvent, addr 0xe705c8, size 0xb0, virtual true, abstract: false, final true
  inline void add_clearSelectedBeatmapEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_clearSelectedBeatmapEvent, addr 0xe70678, size 0xb0, virtual true, abstract: false, final true
  inline void remove_clearSelectedBeatmapEvent(::System::Action_1<::StringW>* value);

  /// @brief Method ClearSelectedBeatmap, addr 0xe70728, size 0x50, virtual false, abstract: false, final false
  inline void ClearSelectedBeatmap();

  /// @brief Method InvokeClearSelectedBeatmap, addr 0xe70778, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeClearSelectedBeatmap(::StringW userId);

  /// @brief Method add_getSelectedBeatmapEvent, addr 0xe70794, size 0xb0, virtual true, abstract: false, final true
  inline void add_getSelectedBeatmapEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_getSelectedBeatmapEvent, addr 0xe70844, size 0xb0, virtual true, abstract: false, final true
  inline void remove_getSelectedBeatmapEvent(::System::Action_1<::StringW>* value);

  /// @brief Method GetSelectedBeatmap, addr 0xe708f4, size 0x50, virtual true, abstract: false, final true
  inline void GetSelectedBeatmap();

  /// @brief Method InvokeGetSelectedBeatmapRpc, addr 0xe70944, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeGetSelectedBeatmapRpc(::StringW userId);

  /// @brief Method add_recommendBeatmapEvent, addr 0xe70960, size 0xb0, virtual true, abstract: false, final true
  inline void add_recommendBeatmapEvent(::System::Action_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>* value);

  /// @brief Method remove_recommendBeatmapEvent, addr 0xe70a10, size 0xb0, virtual true, abstract: false, final true
  inline void remove_recommendBeatmapEvent(::System::Action_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>* value);

  /// @brief Method RecommendBeatmap, addr 0xe70ac0, size 0x58, virtual true, abstract: false, final true
  inline void RecommendBeatmap(::GlobalNamespace::BeatmapKeyNetSerializable* key);

  /// @brief Method InvokeRecommendBeatmap, addr 0xe70b18, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeRecommendBeatmap(::StringW userId, ::GlobalNamespace::BeatmapKeyNetSerializable* key);

  /// @brief Method add_clearRecommendedBeatmapEvent, addr 0xe70b34, size 0xb0, virtual true, abstract: false, final true
  inline void add_clearRecommendedBeatmapEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_clearRecommendedBeatmapEvent, addr 0xe70be4, size 0xb0, virtual true, abstract: false, final true
  inline void remove_clearRecommendedBeatmapEvent(::System::Action_1<::StringW>* value);

  /// @brief Method ClearRecommendedBeatmap, addr 0xe70c94, size 0x50, virtual true, abstract: false, final true
  inline void ClearRecommendedBeatmap();

  /// @brief Method InvokeClearRecommendedBeatmap, addr 0xe70ce4, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeClearRecommendedBeatmap(::StringW userId);

  /// @brief Method add_getRecommendedBeatmapEvent, addr 0xe70d00, size 0xb0, virtual true, abstract: false, final true
  inline void add_getRecommendedBeatmapEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_getRecommendedBeatmapEvent, addr 0xe70db0, size 0xb0, virtual true, abstract: false, final true
  inline void remove_getRecommendedBeatmapEvent(::System::Action_1<::StringW>* value);

  /// @brief Method GetRecommendedBeatmap, addr 0xe70e60, size 0x50, virtual true, abstract: false, final true
  inline void GetRecommendedBeatmap();

  /// @brief Method InvokeGetRecommendedBeatmap, addr 0xe70eb0, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeGetRecommendedBeatmap(::StringW userId);

  /// @brief Method add_setSelectedGameplayModifiersEvent, addr 0xe70ecc, size 0xb0, virtual true, abstract: false, final true
  inline void add_setSelectedGameplayModifiersEvent(::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>* value);

  /// @brief Method remove_setSelectedGameplayModifiersEvent, addr 0xe70f7c, size 0xb0, virtual true, abstract: false, final true
  inline void remove_setSelectedGameplayModifiersEvent(::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>* value);

  /// @brief Method SetSelectedGameplayModifiers, addr 0xe7102c, size 0x58, virtual true, abstract: false, final true
  inline void SetSelectedGameplayModifiers(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method InvokeSetSelectedGameplayModifiers, addr 0xe71084, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeSetSelectedGameplayModifiers(::StringW userId, ::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method add_clearSelectedGameplayModifiersEvent, addr 0xe710a0, size 0xb0, virtual true, abstract: false, final true
  inline void add_clearSelectedGameplayModifiersEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_clearSelectedGameplayModifiersEvent, addr 0xe71150, size 0xb0, virtual true, abstract: false, final true
  inline void remove_clearSelectedGameplayModifiersEvent(::System::Action_1<::StringW>* value);

  /// @brief Method ClearSelectedGameplayModifiers, addr 0xe71200, size 0x50, virtual false, abstract: false, final false
  inline void ClearSelectedGameplayModifiers();

  /// @brief Method InvokeClearSelectedGameplayModifiers, addr 0xe71250, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeClearSelectedGameplayModifiers(::StringW userId);

  /// @brief Method add_getSelectedGameplayModifiersEvent, addr 0xe7126c, size 0xb0, virtual true, abstract: false, final true
  inline void add_getSelectedGameplayModifiersEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_getSelectedGameplayModifiersEvent, addr 0xe7131c, size 0xb0, virtual true, abstract: false, final true
  inline void remove_getSelectedGameplayModifiersEvent(::System::Action_1<::StringW>* value);

  /// @brief Method GetSelectedGameplayModifiers, addr 0xe713cc, size 0x50, virtual true, abstract: false, final true
  inline void GetSelectedGameplayModifiers();

  /// @brief Method InvokeGetSelectedGameplayModifiers, addr 0xe7141c, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeGetSelectedGameplayModifiers(::StringW userId);

  /// @brief Method add_recommendGameplayModifiersEvent, addr 0xe71438, size 0xb0, virtual true, abstract: false, final true
  inline void add_recommendGameplayModifiersEvent(::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>* value);

  /// @brief Method remove_recommendGameplayModifiersEvent, addr 0xe714e8, size 0xb0, virtual true, abstract: false, final true
  inline void remove_recommendGameplayModifiersEvent(::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>* value);

  /// @brief Method RecommendGameplayModifiers, addr 0xe71598, size 0x58, virtual true, abstract: false, final true
  inline void RecommendGameplayModifiers(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method InvokeRecommendGameplayModifiers, addr 0xe715f0, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeRecommendGameplayModifiers(::StringW userId, ::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method add_clearRecommendedGameplayModifiersEvent, addr 0xe7160c, size 0xb0, virtual true, abstract: false, final true
  inline void add_clearRecommendedGameplayModifiersEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_clearRecommendedGameplayModifiersEvent, addr 0xe716bc, size 0xb0, virtual true, abstract: false, final true
  inline void remove_clearRecommendedGameplayModifiersEvent(::System::Action_1<::StringW>* value);

  /// @brief Method ClearRecommendedGameplayModifiers, addr 0xe7176c, size 0x50, virtual true, abstract: false, final true
  inline void ClearRecommendedGameplayModifiers();

  /// @brief Method InvokeClearRecommendedGameplayModifiers, addr 0xe717bc, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeClearRecommendedGameplayModifiers(::StringW userId);

  /// @brief Method add_getRecommendedGameplayModifiersEvent, addr 0xe717d8, size 0xb0, virtual true, abstract: false, final true
  inline void add_getRecommendedGameplayModifiersEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_getRecommendedGameplayModifiersEvent, addr 0xe71888, size 0xb0, virtual true, abstract: false, final true
  inline void remove_getRecommendedGameplayModifiersEvent(::System::Action_1<::StringW>* value);

  /// @brief Method GetRecommendedGameplayModifiers, addr 0xe71938, size 0x50, virtual true, abstract: false, final true
  inline void GetRecommendedGameplayModifiers();

  /// @brief Method InvokeGetRecommendedGameplayModifiers, addr 0xe71988, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeGetRecommendedGameplayModifiers(::StringW userId);

  /// @brief Method add_getIsStartButtonEnabledEvent, addr 0xe719a4, size 0xb0, virtual true, abstract: false, final true
  inline void add_getIsStartButtonEnabledEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_getIsStartButtonEnabledEvent, addr 0xe71a54, size 0xb0, virtual true, abstract: false, final true
  inline void remove_getIsStartButtonEnabledEvent(::System::Action_1<::StringW>* value);

  /// @brief Method GetIsStartButtonEnabled, addr 0xe71b04, size 0x50, virtual true, abstract: false, final true
  inline void GetIsStartButtonEnabled();

  /// @brief Method InvokeGetIsStartButtonEnabled, addr 0xe71b54, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeGetIsStartButtonEnabled(::StringW userId);

  /// @brief Method add_setIsStartButtonEnabledEvent, addr 0xe71b70, size 0xb0, virtual true, abstract: false, final true
  inline void add_setIsStartButtonEnabledEvent(::System::Action_2<::StringW, ::GlobalNamespace::CannotStartGameReason>* value);

  /// @brief Method remove_setIsStartButtonEnabledEvent, addr 0xe71c20, size 0xb0, virtual true, abstract: false, final true
  inline void remove_setIsStartButtonEnabledEvent(::System::Action_2<::StringW, ::GlobalNamespace::CannotStartGameReason>* value);

  /// @brief Method SetIsStartButtonEnabled, addr 0xe71cd0, size 0x58, virtual true, abstract: false, final true
  inline void SetIsStartButtonEnabled(::GlobalNamespace::CannotStartGameReason reason);

  /// @brief Method InvokeSetIsStartButtonEnabled, addr 0xe71d28, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeSetIsStartButtonEnabled(::StringW userId, ::GlobalNamespace::CannotStartGameReason reason);

  /// @brief Method add_levelLoadErrorEvent, addr 0xe71d44, size 0xb0, virtual false, abstract: false, final false
  inline void add_levelLoadErrorEvent(::System::Action_2<::StringW, ::StringW>* value);

  /// @brief Method remove_levelLoadErrorEvent, addr 0xe71df4, size 0xb0, virtual false, abstract: false, final false
  inline void remove_levelLoadErrorEvent(::System::Action_2<::StringW, ::StringW>* value);

  /// @brief Method LevelLoadError, addr 0xe71ea4, size 0x58, virtual false, abstract: false, final false
  inline void LevelLoadError(::StringW levelId);

  /// @brief Method InvokeLevelLoadError, addr 0xe71efc, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeLevelLoadError(::StringW userId, ::StringW levelId);

  /// @brief Method add_levelLoadSuccessEvent, addr 0xe71f18, size 0xb0, virtual false, abstract: false, final false
  inline void add_levelLoadSuccessEvent(::System::Action_2<::StringW, ::StringW>* value);

  /// @brief Method remove_levelLoadSuccessEvent, addr 0xe71fc8, size 0xb0, virtual false, abstract: false, final false
  inline void remove_levelLoadSuccessEvent(::System::Action_2<::StringW, ::StringW>* value);

  /// @brief Method LevelLoadSuccess, addr 0xe72078, size 0x58, virtual false, abstract: false, final false
  inline void LevelLoadSuccess(::StringW levelId);

  /// @brief Method InvokeLevelLoadSuccess, addr 0xe720d0, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeLevelLoadSuccess(::StringW userId, ::StringW levelId);

  /// @brief Method add_startedLevelEvent, addr 0xe720ec, size 0xb0, virtual true, abstract: false, final true
  inline void add_startedLevelEvent(::System::Action_4<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*, ::GlobalNamespace::GameplayModifiers*, int64_t>* value);

  /// @brief Method remove_startedLevelEvent, addr 0xe7219c, size 0xb0, virtual true, abstract: false, final true
  inline void remove_startedLevelEvent(::System::Action_4<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*, ::GlobalNamespace::GameplayModifiers*, int64_t>* value);

  /// @brief Method StartLevel, addr 0xe7224c, size 0x70, virtual true, abstract: false, final true
  inline void StartLevel(::GlobalNamespace::BeatmapKeyNetSerializable* beatmapKeySerializable, ::GlobalNamespace::GameplayModifiers* gameplayModifiers, int64_t startTime);

  /// @brief Method InvokeStartLevel, addr 0xe722bc, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeStartLevel(::StringW userId, ::GlobalNamespace::BeatmapKeyNetSerializable* beatmapKeySerializable, ::GlobalNamespace::GameplayModifiers* gameplayModifiers, int64_t startTime);

  /// @brief Method add_getStartedLevelEvent, addr 0xe722d8, size 0xb0, virtual true, abstract: false, final true
  inline void add_getStartedLevelEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_getStartedLevelEvent, addr 0xe72388, size 0xb0, virtual true, abstract: false, final true
  inline void remove_getStartedLevelEvent(::System::Action_1<::StringW>* value);

  /// @brief Method GetStartedLevel, addr 0xe72438, size 0x50, virtual true, abstract: false, final true
  inline void GetStartedLevel();

  /// @brief Method InvokeGetStartedLevel, addr 0xe72488, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeGetStartedLevel(::StringW userId);

  /// @brief Method add_getMultiplayerGameStateEvent, addr 0xe724a4, size 0xb0, virtual true, abstract: false, final true
  inline void add_getMultiplayerGameStateEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_getMultiplayerGameStateEvent, addr 0xe72554, size 0xb0, virtual true, abstract: false, final true
  inline void remove_getMultiplayerGameStateEvent(::System::Action_1<::StringW>* value);

  /// @brief Method GetMultiplayerGameState, addr 0xe72604, size 0x50, virtual true, abstract: false, final true
  inline void GetMultiplayerGameState();

  /// @brief Method InvokeGetMultiplayerGameState, addr 0xe72654, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeGetMultiplayerGameState(::StringW userId);

  /// @brief Method add_setMultiplayerGameStateEvent, addr 0xe72670, size 0xb0, virtual true, abstract: false, final true
  inline void add_setMultiplayerGameStateEvent(::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerGameState>* value);

  /// @brief Method remove_setMultiplayerGameStateEvent, addr 0xe72720, size 0xb0, virtual true, abstract: false, final true
  inline void remove_setMultiplayerGameStateEvent(::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerGameState>* value);

  /// @brief Method SetMultiplayerGameState, addr 0xe727d0, size 0x58, virtual true, abstract: false, final true
  inline void SetMultiplayerGameState(::GlobalNamespace::MultiplayerGameState lobbyState);

  /// @brief Method InvokeSetMultiplayerGameState, addr 0xe72828, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeSetMultiplayerGameState(::StringW userId, ::GlobalNamespace::MultiplayerGameState lobbyState);

  /// @brief Method add_cancelCountdownEvent, addr 0xe72844, size 0xb0, virtual true, abstract: false, final true
  inline void add_cancelCountdownEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_cancelCountdownEvent, addr 0xe728f4, size 0xb0, virtual true, abstract: false, final true
  inline void remove_cancelCountdownEvent(::System::Action_1<::StringW>* value);

  /// @brief Method CancelCountdown, addr 0xe729a4, size 0x50, virtual false, abstract: false, final false
  inline void CancelCountdown();

  /// @brief Method InvokeCancelCountdown, addr 0xe729f4, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeCancelCountdown(::StringW userId);

  /// @brief Method add_setCountdownEndTimeEvent, addr 0xe72a10, size 0xb4, virtual true, abstract: false, final true
  inline void add_setCountdownEndTimeEvent(::System::Action_2<::StringW, int64_t>* value);

  /// @brief Method remove_setCountdownEndTimeEvent, addr 0xe72ac4, size 0xb4, virtual true, abstract: false, final true
  inline void remove_setCountdownEndTimeEvent(::System::Action_2<::StringW, int64_t>* value);

  /// @brief Method SetCountdownEndTime, addr 0xe72b78, size 0x58, virtual false, abstract: false, final false
  inline void SetCountdownEndTime(int64_t newTime);

  /// @brief Method InvokeSetCountdownEndTime, addr 0xe72bd0, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeSetCountdownEndTime(::StringW userId, int64_t newTime);

  /// @brief Method add_getCountdownEndTimeEvent, addr 0xe72bec, size 0xb4, virtual false, abstract: false, final false
  inline void add_getCountdownEndTimeEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_getCountdownEndTimeEvent, addr 0xe72ca0, size 0xb4, virtual false, abstract: false, final false
  inline void remove_getCountdownEndTimeEvent(::System::Action_1<::StringW>* value);

  /// @brief Method GetCountdownEndTime, addr 0xe72d54, size 0x50, virtual true, abstract: false, final true
  inline void GetCountdownEndTime();

  /// @brief Method InvokeGetCountdownEndTime, addr 0xe72da4, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeGetCountdownEndTime(::StringW userId);

  /// @brief Method add_cancelledLevelStartEvent, addr 0xe72dc0, size 0xb4, virtual true, abstract: false, final true
  inline void add_cancelledLevelStartEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_cancelledLevelStartEvent, addr 0xe72e74, size 0xb4, virtual true, abstract: false, final true
  inline void remove_cancelledLevelStartEvent(::System::Action_1<::StringW>* value);

  /// @brief Method CancelLevelStart, addr 0xe72f28, size 0x50, virtual true, abstract: false, final true
  inline void CancelLevelStart();

  /// @brief Method InvokeCancelLevelStart, addr 0xe72f78, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeCancelLevelStart(::StringW userId);

  /// @brief Method add_getIsReadyEvent, addr 0xe72f94, size 0xb4, virtual true, abstract: false, final true
  inline void add_getIsReadyEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_getIsReadyEvent, addr 0xe73048, size 0xb4, virtual true, abstract: false, final true
  inline void remove_getIsReadyEvent(::System::Action_1<::StringW>* value);

  /// @brief Method GetIsReady, addr 0xe730fc, size 0x50, virtual true, abstract: false, final true
  inline void GetIsReady();

  /// @brief Method InvokeGetIsReady, addr 0xe7314c, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeGetIsReady(::StringW userId);

  /// @brief Method add_setIsReadyEvent, addr 0xe73168, size 0xb4, virtual true, abstract: false, final true
  inline void add_setIsReadyEvent(::System::Action_2<::StringW, bool>* value);

  /// @brief Method remove_setIsReadyEvent, addr 0xe7321c, size 0xb4, virtual true, abstract: false, final true
  inline void remove_setIsReadyEvent(::System::Action_2<::StringW, bool>* value);

  /// @brief Method SetIsReady, addr 0xe732d0, size 0x58, virtual true, abstract: false, final true
  inline void SetIsReady(bool isReady);

  /// @brief Method InvokeSetIsReady, addr 0xe73328, size 0x20, virtual false, abstract: false, final false
  inline void InvokeSetIsReady(::StringW userId, bool isReady);

  /// @brief Method add_setStartGameTimeEvent, addr 0xe73348, size 0xb4, virtual true, abstract: false, final true
  inline void add_setStartGameTimeEvent(::System::Action_2<::StringW, int64_t>* value);

  /// @brief Method remove_setStartGameTimeEvent, addr 0xe733fc, size 0xb4, virtual true, abstract: false, final true
  inline void remove_setStartGameTimeEvent(::System::Action_2<::StringW, int64_t>* value);

  /// @brief Method SetStartGameTime, addr 0xe734b0, size 0x58, virtual true, abstract: false, final true
  inline void SetStartGameTime(int64_t newTime);

  /// @brief Method InvokeSetStartGameCountdown, addr 0xe73508, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeSetStartGameCountdown(::StringW userId, int64_t newTime);

  /// @brief Method add_cancelStartGameTimeEvent, addr 0xe73524, size 0xb4, virtual false, abstract: false, final false
  inline void add_cancelStartGameTimeEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_cancelStartGameTimeEvent, addr 0xe735d8, size 0xb4, virtual false, abstract: false, final false
  inline void remove_cancelStartGameTimeEvent(::System::Action_1<::StringW>* value);

  /// @brief Method CancelStartGameTime, addr 0xe7368c, size 0x50, virtual false, abstract: false, final false
  inline void CancelStartGameTime();

  /// @brief Method InvokeCancelStartGameCountdown, addr 0xe736dc, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeCancelStartGameCountdown(::StringW userId);

  /// @brief Method add_getIsInLobbyEvent, addr 0xe736f8, size 0xb4, virtual true, abstract: false, final true
  inline void add_getIsInLobbyEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_getIsInLobbyEvent, addr 0xe737ac, size 0xb4, virtual true, abstract: false, final true
  inline void remove_getIsInLobbyEvent(::System::Action_1<::StringW>* value);

  /// @brief Method GetIsInLobby, addr 0xe73860, size 0x50, virtual true, abstract: false, final true
  inline void GetIsInLobby();

  /// @brief Method InvokeGetIsInLobby, addr 0xe738b0, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeGetIsInLobby(::StringW userId);

  /// @brief Method add_setIsInLobbyEvent, addr 0xe738cc, size 0xb4, virtual true, abstract: false, final true
  inline void add_setIsInLobbyEvent(::System::Action_2<::StringW, bool>* value);

  /// @brief Method remove_setIsInLobbyEvent, addr 0xe73980, size 0xb4, virtual true, abstract: false, final true
  inline void remove_setIsInLobbyEvent(::System::Action_2<::StringW, bool>* value);

  /// @brief Method SetIsInLobby, addr 0xe73a34, size 0x58, virtual true, abstract: false, final true
  inline void SetIsInLobby(bool isBack);

  /// @brief Method InvokeSetIsInLobby, addr 0xe73a8c, size 0x20, virtual false, abstract: false, final false
  inline void InvokeSetIsInLobby(::StringW userId, bool isBack);

  /// @brief Method add_getOwnedSongPacksEvent, addr 0xe73aac, size 0xb4, virtual true, abstract: false, final true
  inline void add_getOwnedSongPacksEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_getOwnedSongPacksEvent, addr 0xe73b60, size 0xb4, virtual true, abstract: false, final true
  inline void remove_getOwnedSongPacksEvent(::System::Action_1<::StringW>* value);

  /// @brief Method GetOwnedSongPacks, addr 0xe73c14, size 0x50, virtual true, abstract: false, final true
  inline void GetOwnedSongPacks();

  /// @brief Method InvokeGetOwnedSongPacks, addr 0xe73c64, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeGetOwnedSongPacks(::StringW userId);

  /// @brief Method add_setOwnedSongPacksEvent, addr 0xe73c80, size 0xb4, virtual true, abstract: false, final true
  inline void add_setOwnedSongPacksEvent(::System::Action_2<::StringW, ::GlobalNamespace::SongPackMask>* value);

  /// @brief Method remove_setOwnedSongPacksEvent, addr 0xe73d34, size 0xb4, virtual true, abstract: false, final true
  inline void remove_setOwnedSongPacksEvent(::System::Action_2<::StringW, ::GlobalNamespace::SongPackMask>* value);

  /// @brief Method SetOwnedSongPacks, addr 0xe73de8, size 0x74, virtual true, abstract: false, final true
  inline void SetOwnedSongPacks(::GlobalNamespace::SongPackMask songPackMask);

  /// @brief Method InvokeSetOwnedSongPacks, addr 0xe73e5c, size 0x3c, virtual false, abstract: false, final false
  inline void InvokeSetOwnedSongPacks(::StringW userId, ::GlobalNamespace::SongPackMask songPackMask);

  /// @brief Method add_requestedKickPlayerEvent, addr 0xe73e98, size 0xb4, virtual true, abstract: false, final true
  inline void add_requestedKickPlayerEvent(::System::Action_2<::StringW, ::StringW>* value);

  /// @brief Method remove_requestedKickPlayerEvent, addr 0xe73f4c, size 0xb4, virtual true, abstract: false, final true
  inline void remove_requestedKickPlayerEvent(::System::Action_2<::StringW, ::StringW>* value);

  /// @brief Method RequestKickPlayer, addr 0xe74000, size 0x58, virtual true, abstract: false, final true
  inline void RequestKickPlayer(::StringW kickedPlayerId);

  /// @brief Method InvokeKickPlayer, addr 0xe74058, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeKickPlayer(::StringW userId, ::StringW kickedPlayerId);

  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuRpcManager(MenuRpcManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuRpcManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuRpcManager(MenuRpcManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuRpcManager();

public:
  /// @brief Field _multiplayerSessionManager, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field _rpcHandler, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::RpcHandler_1<::GlobalNamespace::__MenuRpcManager__RpcType>* ____rpcHandler;

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

  /// @brief Field kMenuState offset 0xffffffff size 0x8
  static constexpr ::ConstString kMenuState{ u"in_menu" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuRpcManager, 0x160>, "Size mismatch!");

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

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuRpcManager__RpcType, "", "MenuRpcManager/RpcType");
NEED_NO_BOX(::GlobalNamespace::MenuRpcManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuRpcManager*, "", "MenuRpcManager");
NEED_NO_BOX(::GlobalNamespace::__MenuRpcManager__CancelCountdownRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuRpcManager__CancelCountdownRpc*, "", "MenuRpcManager/CancelCountdownRpc");
NEED_NO_BOX(::GlobalNamespace::__MenuRpcManager__CancelLevelStartRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuRpcManager__CancelLevelStartRpc*, "", "MenuRpcManager/CancelLevelStartRpc");
NEED_NO_BOX(::GlobalNamespace::__MenuRpcManager__CancelStartGameTimeRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuRpcManager__CancelStartGameTimeRpc*, "", "MenuRpcManager/CancelStartGameTimeRpc");
NEED_NO_BOX(::GlobalNamespace::__MenuRpcManager__ClearRecommendedBeatmapRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuRpcManager__ClearRecommendedBeatmapRpc*, "", "MenuRpcManager/ClearRecommendedBeatmapRpc");
NEED_NO_BOX(::GlobalNamespace::__MenuRpcManager__ClearRecommendedGameplayModifiersRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuRpcManager__ClearRecommendedGameplayModifiersRpc*, "", "MenuRpcManager/ClearRecommendedGameplayModifiersRpc");
NEED_NO_BOX(::GlobalNamespace::__MenuRpcManager__ClearSelectedBeatmapRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuRpcManager__ClearSelectedBeatmapRpc*, "", "MenuRpcManager/ClearSelectedBeatmapRpc");
NEED_NO_BOX(::GlobalNamespace::__MenuRpcManager__ClearSelectedGameplayModifiersRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuRpcManager__ClearSelectedGameplayModifiersRpc*, "", "MenuRpcManager/ClearSelectedGameplayModifiersRpc");
NEED_NO_BOX(::GlobalNamespace::__MenuRpcManager__GetCountdownEndTimeRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuRpcManager__GetCountdownEndTimeRpc*, "", "MenuRpcManager/GetCountdownEndTimeRpc");
NEED_NO_BOX(::GlobalNamespace::__MenuRpcManager__GetIsEntitledToLevelRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuRpcManager__GetIsEntitledToLevelRpc*, "", "MenuRpcManager/GetIsEntitledToLevelRpc");
NEED_NO_BOX(::GlobalNamespace::__MenuRpcManager__GetIsInLobbyRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuRpcManager__GetIsInLobbyRpc*, "", "MenuRpcManager/GetIsInLobbyRpc");
NEED_NO_BOX(::GlobalNamespace::__MenuRpcManager__GetIsReadyRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuRpcManager__GetIsReadyRpc*, "", "MenuRpcManager/GetIsReadyRpc");
NEED_NO_BOX(::GlobalNamespace::__MenuRpcManager__GetIsStartButtonEnabledRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuRpcManager__GetIsStartButtonEnabledRpc*, "", "MenuRpcManager/GetIsStartButtonEnabledRpc");
NEED_NO_BOX(::GlobalNamespace::__MenuRpcManager__GetMultiplayerGameStateRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuRpcManager__GetMultiplayerGameStateRpc*, "", "MenuRpcManager/GetMultiplayerGameStateRpc");
NEED_NO_BOX(::GlobalNamespace::__MenuRpcManager__GetOwnedSongPacksRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuRpcManager__GetOwnedSongPacksRpc*, "", "MenuRpcManager/GetOwnedSongPacksRpc");
NEED_NO_BOX(::GlobalNamespace::__MenuRpcManager__GetPlayersPermissionConfigurationRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuRpcManager__GetPlayersPermissionConfigurationRpc*, "", "MenuRpcManager/GetPlayersPermissionConfigurationRpc");
NEED_NO_BOX(::GlobalNamespace::__MenuRpcManager__GetRecommendedBeatmapRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuRpcManager__GetRecommendedBeatmapRpc*, "", "MenuRpcManager/GetRecommendedBeatmapRpc");
NEED_NO_BOX(::GlobalNamespace::__MenuRpcManager__GetRecommendedGameplayModifiersRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuRpcManager__GetRecommendedGameplayModifiersRpc*, "", "MenuRpcManager/GetRecommendedGameplayModifiersRpc");
NEED_NO_BOX(::GlobalNamespace::__MenuRpcManager__GetSelectedBeatmapRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuRpcManager__GetSelectedBeatmapRpc*, "", "MenuRpcManager/GetSelectedBeatmapRpc");
NEED_NO_BOX(::GlobalNamespace::__MenuRpcManager__GetSelectedGameplayModifiersRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuRpcManager__GetSelectedGameplayModifiersRpc*, "", "MenuRpcManager/GetSelectedGameplayModifiersRpc");
NEED_NO_BOX(::GlobalNamespace::__MenuRpcManager__GetStartedLevelRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuRpcManager__GetStartedLevelRpc*, "", "MenuRpcManager/GetStartedLevelRpc");
NEED_NO_BOX(::GlobalNamespace::__MenuRpcManager__InvalidateLevelEntitlementStatusesRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuRpcManager__InvalidateLevelEntitlementStatusesRpc*, "", "MenuRpcManager/InvalidateLevelEntitlementStatusesRpc");
NEED_NO_BOX(::GlobalNamespace::__MenuRpcManager__LevelLoadErrorRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuRpcManager__LevelLoadErrorRpc*, "", "MenuRpcManager/LevelLoadErrorRpc");
NEED_NO_BOX(::GlobalNamespace::__MenuRpcManager__LevelLoadSuccessRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuRpcManager__LevelLoadSuccessRpc*, "", "MenuRpcManager/LevelLoadSuccessRpc");
NEED_NO_BOX(::GlobalNamespace::__MenuRpcManager__RecommendBeatmapRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuRpcManager__RecommendBeatmapRpc*, "", "MenuRpcManager/RecommendBeatmapRpc");
NEED_NO_BOX(::GlobalNamespace::__MenuRpcManager__RecommendGameplayModifiersRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuRpcManager__RecommendGameplayModifiersRpc*, "", "MenuRpcManager/RecommendGameplayModifiersRpc");
NEED_NO_BOX(::GlobalNamespace::__MenuRpcManager__RequestKickPlayerRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuRpcManager__RequestKickPlayerRpc*, "", "MenuRpcManager/RequestKickPlayerRpc");
NEED_NO_BOX(::GlobalNamespace::__MenuRpcManager__SelectLevelPackRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuRpcManager__SelectLevelPackRpc*, "", "MenuRpcManager/SelectLevelPackRpc");
NEED_NO_BOX(::GlobalNamespace::__MenuRpcManager__SetCountdownEndTimeRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuRpcManager__SetCountdownEndTimeRpc*, "", "MenuRpcManager/SetCountdownEndTimeRpc");
NEED_NO_BOX(::GlobalNamespace::__MenuRpcManager__SetIsEntitledToLevelRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuRpcManager__SetIsEntitledToLevelRpc*, "", "MenuRpcManager/SetIsEntitledToLevelRpc");
NEED_NO_BOX(::GlobalNamespace::__MenuRpcManager__SetIsInLobbyRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuRpcManager__SetIsInLobbyRpc*, "", "MenuRpcManager/SetIsInLobbyRpc");
NEED_NO_BOX(::GlobalNamespace::__MenuRpcManager__SetIsReadyRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuRpcManager__SetIsReadyRpc*, "", "MenuRpcManager/SetIsReadyRpc");
NEED_NO_BOX(::GlobalNamespace::__MenuRpcManager__SetIsStartButtonEnabledRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuRpcManager__SetIsStartButtonEnabledRpc*, "", "MenuRpcManager/SetIsStartButtonEnabledRpc");
NEED_NO_BOX(::GlobalNamespace::__MenuRpcManager__SetMultiplayerGameStateRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuRpcManager__SetMultiplayerGameStateRpc*, "", "MenuRpcManager/SetMultiplayerGameStateRpc");
NEED_NO_BOX(::GlobalNamespace::__MenuRpcManager__SetOwnedSongPacksRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuRpcManager__SetOwnedSongPacksRpc*, "", "MenuRpcManager/SetOwnedSongPacksRpc");
NEED_NO_BOX(::GlobalNamespace::__MenuRpcManager__SetPlayersMissingEntitlementsToLevelRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuRpcManager__SetPlayersMissingEntitlementsToLevelRpc*, "", "MenuRpcManager/SetPlayersMissingEntitlementsToLevelRpc");
NEED_NO_BOX(::GlobalNamespace::__MenuRpcManager__SetPlayersPermissionConfigurationRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuRpcManager__SetPlayersPermissionConfigurationRpc*, "", "MenuRpcManager/SetPlayersPermissionConfigurationRpc");
NEED_NO_BOX(::GlobalNamespace::__MenuRpcManager__SetSelectedBeatmapRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuRpcManager__SetSelectedBeatmapRpc*, "", "MenuRpcManager/SetSelectedBeatmapRpc");
NEED_NO_BOX(::GlobalNamespace::__MenuRpcManager__SetSelectedGameplayModifiersRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuRpcManager__SetSelectedGameplayModifiersRpc*, "", "MenuRpcManager/SetSelectedGameplayModifiersRpc");
NEED_NO_BOX(::GlobalNamespace::__MenuRpcManager__SetStartGameTimeRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuRpcManager__SetStartGameTimeRpc*, "", "MenuRpcManager/SetStartGameTimeRpc");
NEED_NO_BOX(::GlobalNamespace::__MenuRpcManager__StartLevelRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuRpcManager__StartLevelRpc*, "", "MenuRpcManager/StartLevelRpc");
