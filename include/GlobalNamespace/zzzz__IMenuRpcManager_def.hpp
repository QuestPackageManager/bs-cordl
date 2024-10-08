#pragma once
// IWYU pragma private; include "GlobalNamespace/IMenuRpcManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IMenuRpcManager)
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
struct MultiplayerGameState;
}
namespace GlobalNamespace {
class PlayersLobbyPermissionConfigurationNetSerializable;
}
namespace GlobalNamespace {
class PlayersMissingEntitlementsNetSerializable;
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
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class IMenuRpcManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IMenuRpcManager);
// Type: ::IMenuRpcManager
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IMenuRpcManager*
class CORDL_TYPE IMenuRpcManager {
public:
  // Declarations
  __declspec(property(get = get_syncTime)) int64_t syncTime;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CancelLevelStart, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void CancelLevelStart();

  /// @brief Method ClearRecommendedBeatmap, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ClearRecommendedBeatmap();

  /// @brief Method ClearRecommendedGameplayModifiers, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ClearRecommendedGameplayModifiers();

  /// @brief Method GetCountdownEndTime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void GetCountdownEndTime();

  /// @brief Method GetIsEntitledToLevel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void GetIsEntitledToLevel(::StringW levelId);

  /// @brief Method GetIsInLobby, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void GetIsInLobby();

  /// @brief Method GetIsReady, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void GetIsReady();

  /// @brief Method GetIsStartButtonEnabled, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void GetIsStartButtonEnabled();

  /// @brief Method GetMultiplayerGameState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void GetMultiplayerGameState();

  /// @brief Method GetOwnedSongPacks, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void GetOwnedSongPacks();

  /// @brief Method GetPlayersPermissionConfiguration, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void GetPlayersPermissionConfiguration();

  /// @brief Method GetRecommendedBeatmap, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void GetRecommendedBeatmap();

  /// @brief Method GetRecommendedGameplayModifiers, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void GetRecommendedGameplayModifiers();

  /// @brief Method GetSelectedBeatmap, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void GetSelectedBeatmap();

  /// @brief Method GetSelectedGameplayModifiers, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void GetSelectedGameplayModifiers();

  /// @brief Method GetStartedLevel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void GetStartedLevel();

  /// @brief Method InvalidateLevelEntitlementStatuses, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void InvalidateLevelEntitlementStatuses();

  /// @brief Method RecommendBeatmap, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void RecommendBeatmap(::GlobalNamespace::BeatmapKeyNetSerializable* key);

  /// @brief Method RecommendGameplayModifiers, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void RecommendGameplayModifiers(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method RequestKickPlayer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void RequestKickPlayer(::StringW kickedPlayerId);

  /// @brief Method SetIsEntitledToLevel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetIsEntitledToLevel(::StringW levelId, ::GlobalNamespace::EntitlementsStatus entitlementStatus);

  /// @brief Method SetIsInLobby, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetIsInLobby(bool isBack);

  /// @brief Method SetIsReady, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetIsReady(bool isReady);

  /// @brief Method SetIsStartButtonEnabled, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetIsStartButtonEnabled(::GlobalNamespace::CannotStartGameReason reason);

  /// @brief Method SetMultiplayerGameState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetMultiplayerGameState(::GlobalNamespace::MultiplayerGameState lobbyState);

  /// @brief Method SetOwnedSongPacks, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetOwnedSongPacks(::GlobalNamespace::SongPackMask songPackMask);

  /// @brief Method SetPlayersMissingEntitlementsToLevel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetPlayersMissingEntitlementsToLevel(::GlobalNamespace::PlayersMissingEntitlementsNetSerializable* playersMissingEntitlements);

  /// @brief Method SetPlayersPermissionConfiguration, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetPlayersPermissionConfiguration(::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable* permissions);

  /// @brief Method SetSelectedBeatmap, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetSelectedBeatmap(::GlobalNamespace::BeatmapKeyNetSerializable* key);

  /// @brief Method SetSelectedGameplayModifiers, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetSelectedGameplayModifiers(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method SetStartGameTime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetStartGameTime(int64_t newTime);

  /// @brief Method StartLevel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void StartLevel(::GlobalNamespace::BeatmapKeyNetSerializable* beatmapKeySerializable, ::GlobalNamespace::GameplayModifiers* gameplayModifiers, int64_t startTime);

  /// @brief Method add_cancelCountdownEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_cancelCountdownEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_cancelledLevelStartEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_cancelledLevelStartEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_clearRecommendedBeatmapEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_clearRecommendedBeatmapEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_clearRecommendedGameplayModifiersEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_clearRecommendedGameplayModifiersEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_clearSelectedBeatmapEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_clearSelectedBeatmapEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_clearSelectedGameplayModifiersEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_clearSelectedGameplayModifiersEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_getIsEntitledToLevelEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_getIsEntitledToLevelEvent(::System::Action_2<::StringW, ::StringW>* value);

  /// @brief Method add_getIsInLobbyEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_getIsInLobbyEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_getIsReadyEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_getIsReadyEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_getIsStartButtonEnabledEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_getIsStartButtonEnabledEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_getMultiplayerGameStateEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_getMultiplayerGameStateEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_getOwnedSongPacksEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_getOwnedSongPacksEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_getPlayersPermissionConfigurationEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_getPlayersPermissionConfigurationEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_getRecommendedBeatmapEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_getRecommendedBeatmapEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_getRecommendedGameplayModifiersEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_getRecommendedGameplayModifiersEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_getSelectedBeatmapEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_getSelectedBeatmapEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_getSelectedGameplayModifiersEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_getSelectedGameplayModifiersEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_getStartedLevelEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_getStartedLevelEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_levelEntitlementStatusesInvalidatedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_levelEntitlementStatusesInvalidatedEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_recommendBeatmapEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_recommendBeatmapEvent(::System::Action_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>* value);

  /// @brief Method add_recommendGameplayModifiersEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_recommendGameplayModifiersEvent(::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>* value);

  /// @brief Method add_requestedKickPlayerEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_requestedKickPlayerEvent(::System::Action_2<::StringW, ::StringW>* value);

  /// @brief Method add_setCountdownEndTimeEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_setCountdownEndTimeEvent(::System::Action_2<::StringW, int64_t>* value);

  /// @brief Method add_setIsEntitledToLevelEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_setIsEntitledToLevelEvent(::System::Action_3<::StringW, ::StringW, ::GlobalNamespace::EntitlementsStatus>* value);

  /// @brief Method add_setIsInLobbyEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_setIsInLobbyEvent(::System::Action_2<::StringW, bool>* value);

  /// @brief Method add_setIsReadyEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_setIsReadyEvent(::System::Action_2<::StringW, bool>* value);

  /// @brief Method add_setIsStartButtonEnabledEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_setIsStartButtonEnabledEvent(::System::Action_2<::StringW, ::GlobalNamespace::CannotStartGameReason>* value);

  /// @brief Method add_setMultiplayerGameStateEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_setMultiplayerGameStateEvent(::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerGameState>* value);

  /// @brief Method add_setOwnedSongPacksEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_setOwnedSongPacksEvent(::System::Action_2<::StringW, ::GlobalNamespace::SongPackMask>* value);

  /// @brief Method add_setPlayersMissingEntitlementsToLevelEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_setPlayersMissingEntitlementsToLevelEvent(::System::Action_2<::StringW, ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>* value);

  /// @brief Method add_setPlayersPermissionConfigurationEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_setPlayersPermissionConfigurationEvent(::System::Action_2<::StringW, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>* value);

  /// @brief Method add_setSelectedBeatmapEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_setSelectedBeatmapEvent(::System::Action_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>* value);

  /// @brief Method add_setSelectedGameplayModifiersEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_setSelectedGameplayModifiersEvent(::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>* value);

  /// @brief Method add_setStartGameTimeEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_setStartGameTimeEvent(::System::Action_2<::StringW, int64_t>* value);

  /// @brief Method add_startedLevelEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_startedLevelEvent(::System::Action_4<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*, ::GlobalNamespace::GameplayModifiers*, int64_t>* value);

  /// @brief Method get_syncTime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int64_t get_syncTime();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method remove_cancelCountdownEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_cancelCountdownEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_cancelledLevelStartEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_cancelledLevelStartEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_clearRecommendedBeatmapEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_clearRecommendedBeatmapEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_clearRecommendedGameplayModifiersEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_clearRecommendedGameplayModifiersEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_clearSelectedBeatmapEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_clearSelectedBeatmapEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_clearSelectedGameplayModifiersEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_clearSelectedGameplayModifiersEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_getIsEntitledToLevelEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_getIsEntitledToLevelEvent(::System::Action_2<::StringW, ::StringW>* value);

  /// @brief Method remove_getIsInLobbyEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_getIsInLobbyEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_getIsReadyEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_getIsReadyEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_getIsStartButtonEnabledEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_getIsStartButtonEnabledEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_getMultiplayerGameStateEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_getMultiplayerGameStateEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_getOwnedSongPacksEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_getOwnedSongPacksEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_getPlayersPermissionConfigurationEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_getPlayersPermissionConfigurationEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_getRecommendedBeatmapEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_getRecommendedBeatmapEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_getRecommendedGameplayModifiersEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_getRecommendedGameplayModifiersEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_getSelectedBeatmapEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_getSelectedBeatmapEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_getSelectedGameplayModifiersEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_getSelectedGameplayModifiersEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_getStartedLevelEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_getStartedLevelEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_levelEntitlementStatusesInvalidatedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_levelEntitlementStatusesInvalidatedEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_recommendBeatmapEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_recommendBeatmapEvent(::System::Action_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>* value);

  /// @brief Method remove_recommendGameplayModifiersEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_recommendGameplayModifiersEvent(::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>* value);

  /// @brief Method remove_requestedKickPlayerEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_requestedKickPlayerEvent(::System::Action_2<::StringW, ::StringW>* value);

  /// @brief Method remove_setCountdownEndTimeEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_setCountdownEndTimeEvent(::System::Action_2<::StringW, int64_t>* value);

  /// @brief Method remove_setIsEntitledToLevelEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_setIsEntitledToLevelEvent(::System::Action_3<::StringW, ::StringW, ::GlobalNamespace::EntitlementsStatus>* value);

  /// @brief Method remove_setIsInLobbyEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_setIsInLobbyEvent(::System::Action_2<::StringW, bool>* value);

  /// @brief Method remove_setIsReadyEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_setIsReadyEvent(::System::Action_2<::StringW, bool>* value);

  /// @brief Method remove_setIsStartButtonEnabledEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_setIsStartButtonEnabledEvent(::System::Action_2<::StringW, ::GlobalNamespace::CannotStartGameReason>* value);

  /// @brief Method remove_setMultiplayerGameStateEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_setMultiplayerGameStateEvent(::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerGameState>* value);

  /// @brief Method remove_setOwnedSongPacksEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_setOwnedSongPacksEvent(::System::Action_2<::StringW, ::GlobalNamespace::SongPackMask>* value);

  /// @brief Method remove_setPlayersMissingEntitlementsToLevelEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_setPlayersMissingEntitlementsToLevelEvent(::System::Action_2<::StringW, ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>* value);

  /// @brief Method remove_setPlayersPermissionConfigurationEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_setPlayersPermissionConfigurationEvent(::System::Action_2<::StringW, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>* value);

  /// @brief Method remove_setSelectedBeatmapEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_setSelectedBeatmapEvent(::System::Action_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>* value);

  /// @brief Method remove_setSelectedGameplayModifiersEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_setSelectedGameplayModifiersEvent(::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>* value);

  /// @brief Method remove_setStartGameTimeEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_setStartGameTimeEvent(::System::Action_2<::StringW, int64_t>* value);

  /// @brief Method remove_startedLevelEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_startedLevelEvent(::System::Action_4<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*, ::GlobalNamespace::GameplayModifiers*, int64_t>* value);

  // Ctor Parameters [CppParam { name: "", ty: "IMenuRpcManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IMenuRpcManager(IMenuRpcManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IMenuRpcManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMenuRpcManager(IMenuRpcManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14757 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IMenuRpcManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IMenuRpcManager*, "", "IMenuRpcManager");
