#pragma once
// IWYU pragma private; include "GlobalNamespace/MockPlayer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayer_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MockPlayer)
namespace GlobalNamespace {
class BeatmapCharacteristicCollection;
}
namespace GlobalNamespace {
class BeatmapDataLoader;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace GlobalNamespace {
class EnvironmentsListModel;
}
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class IGameplayRpcManager;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class MockPlayerFiniteStateMachine;
}
namespace GlobalNamespace {
class MockPlayerSettings;
}
namespace GlobalNamespace {
struct MultiplayerAvatarsData;
}
namespace GlobalNamespace {
class NodePoseSyncStateManager;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MockPlayer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockPlayer);
// Dependencies BeatmapLevelSelectionMask, GameplayServerConfiguration, IConnectedPlayer, INetworkPlayer, MultiplayerAvatarsData, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MockPlayer
class CORDL_TYPE MockPlayer : public ::System::Object {
public:
  // Declarations
  /// @brief Field <canBlock>k__BackingField, offset 0x7f, size 0x1
  __declspec(property(get = __cordl_internal_get__canBlock_k__BackingField, put = __cordl_internal_set__canBlock_k__BackingField)) bool _canBlock_k__BackingField;

  /// @brief Field <canInvite>k__BackingField, offset 0x7b, size 0x1
  __declspec(property(get = __cordl_internal_get__canInvite_k__BackingField, put = __cordl_internal_set__canInvite_k__BackingField)) bool _canInvite_k__BackingField;

  /// @brief Field <canKick>k__BackingField, offset 0x7d, size 0x1
  __declspec(property(get = __cordl_internal_get__canKick_k__BackingField, put = __cordl_internal_set__canKick_k__BackingField)) bool _canKick_k__BackingField;

  /// @brief Field <canLeave>k__BackingField, offset 0x7e, size 0x1
  __declspec(property(get = __cordl_internal_get__canLeave_k__BackingField, put = __cordl_internal_set__canLeave_k__BackingField)) bool _canLeave_k__BackingField;

  /// @brief Field <canUnblock>k__BackingField, offset 0x80, size 0x1
  __declspec(property(get = __cordl_internal_get__canUnblock_k__BackingField, put = __cordl_internal_set__canUnblock_k__BackingField)) bool _canUnblock_k__BackingField;

  /// @brief Field <configuration>k__BackingField, offset 0x60, size 0x18
  __declspec(property(get = __cordl_internal_get__configuration_k__BackingField,
                      put = __cordl_internal_set__configuration_k__BackingField)) ::GlobalNamespace::GameplayServerConfiguration _configuration_k__BackingField;

  /// @brief Field <currentPartySize>k__BackingField, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__currentPartySize_k__BackingField, put = __cordl_internal_set__currentPartySize_k__BackingField)) int32_t _currentPartySize_k__BackingField;

  /// @brief Field _fsm, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__fsm, put = __cordl_internal_set__fsm)) ::GlobalNamespace::MockPlayerFiniteStateMachine* _fsm;

  /// @brief Field _gameplayRpcManager, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayRpcManager, put = __cordl_internal_set__gameplayRpcManager)) ::GlobalNamespace::IGameplayRpcManager* _gameplayRpcManager;

  /// @brief Field <isConnected>k__BackingField, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get__isConnected_k__BackingField, put = __cordl_internal_set__isConnected_k__BackingField)) bool _isConnected_k__BackingField;

  /// @brief Field <isConnectionOwner>k__BackingField, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__isConnectionOwner_k__BackingField, put = __cordl_internal_set__isConnectionOwner_k__BackingField)) bool _isConnectionOwner_k__BackingField;

  /// @brief Field <isKicked>k__BackingField, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get__isKicked_k__BackingField, put = __cordl_internal_set__isKicked_k__BackingField)) bool _isKicked_k__BackingField;

  /// @brief Field <isMe>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__isMe_k__BackingField, put = __cordl_internal_set__isMe_k__BackingField)) bool _isMe_k__BackingField;

  /// @brief Field <isMyPartyOwner>k__BackingField, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get__isMyPartyOwner_k__BackingField, put = __cordl_internal_set__isMyPartyOwner_k__BackingField)) bool _isMyPartyOwner_k__BackingField;

  /// @brief Field _isReady, offset 0x81, size 0x1
  __declspec(property(get = __cordl_internal_get__isReady, put = __cordl_internal_set__isReady)) bool _isReady;

  /// @brief Field <isWaitingOnInvite>k__BackingField, offset 0x7c, size 0x1
  __declspec(property(get = __cordl_internal_get__isWaitingOnInvite_k__BackingField, put = __cordl_internal_set__isWaitingOnInvite_k__BackingField)) bool _isWaitingOnInvite_k__BackingField;

  /// @brief Field <isWaitingOnJoin>k__BackingField, offset 0x7a, size 0x1
  __declspec(property(get = __cordl_internal_get__isWaitingOnJoin_k__BackingField, put = __cordl_internal_set__isWaitingOnJoin_k__BackingField)) bool _isWaitingOnJoin_k__BackingField;

  /// @brief Field <multiplayerAvatarsData>k__BackingField, offset 0x18, size 0x18
  __declspec(property(get = __cordl_internal_get__multiplayerAvatarsData_k__BackingField,
                      put = __cordl_internal_set__multiplayerAvatarsData_k__BackingField)) ::GlobalNamespace::MultiplayerAvatarsData _multiplayerAvatarsData_k__BackingField;

  /// @brief Field _playerState, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__playerState, put = __cordl_internal_set__playerState)) ::System::Collections::Generic::HashSet_1<::StringW>* _playerState;

  /// @brief Field <requiresPassword>k__BackingField, offset 0x79, size 0x1
  __declspec(property(get = __cordl_internal_get__requiresPassword_k__BackingField, put = __cordl_internal_set__requiresPassword_k__BackingField)) bool _requiresPassword_k__BackingField;

  /// @brief Field <selectionMask>k__BackingField, offset 0x38, size 0x28
  __declspec(property(get = __cordl_internal_get__selectionMask_k__BackingField,
                      put = __cordl_internal_set__selectionMask_k__BackingField)) ::GlobalNamespace::BeatmapLevelSelectionMask _selectionMask_k__BackingField;

  /// @brief Field _settings, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__settings, put = __cordl_internal_set__settings)) ::GlobalNamespace::MockPlayerSettings* _settings;

  __declspec(property(get = get_autoConnect)) bool autoConnect;

  __declspec(property(get = get_canBlock, put = set_canBlock)) bool canBlock;

  __declspec(property(get = get_canInvite, put = set_canInvite)) bool canInvite;

  __declspec(property(get = get_canJoin)) bool canJoin;

  __declspec(property(get = get_canKick, put = set_canKick)) bool canKick;

  __declspec(property(get = get_canLeave, put = set_canLeave)) bool canLeave;

  __declspec(property(get = get_canUnblock, put = set_canUnblock)) bool canUnblock;

  __declspec(property(get = get_configuration, put = set_configuration)) ::GlobalNamespace::GameplayServerConfiguration configuration;

  __declspec(property(get = get_connectedPlayer)) ::GlobalNamespace::IConnectedPlayer* connectedPlayer;

  __declspec(property(get = get_currentLatency)) int64_t currentLatency;

  __declspec(property(get = get_currentPartySize, put = set_currentPartySize)) int32_t currentPartySize;

  __declspec(property(get = get_disconnectedReason)) ::GlobalNamespace::DisconnectedReason disconnectedReason;

  __declspec(property(get = get_finishedLevel, put = set_finishedLevel)) bool finishedLevel;

  __declspec(property(get = get_hasValidLatency)) bool hasValidLatency;

  __declspec(property(get = get_inactiveByDefault)) bool inactiveByDefault;

  __declspec(property(get = get_isActive, put = set_isActive)) bool isActive;

  __declspec(property(get = get_isConnected, put = set_isConnected)) bool isConnected;

  __declspec(property(get = get_isConnectionOwner, put = set_isConnectionOwner)) bool isConnectionOwner;

  __declspec(property(get = get_isDedicatedServer, put = set_isDedicatedServer)) bool isDedicatedServer;

  __declspec(property(get = get_isKicked, put = set_isKicked)) bool isKicked;

  __declspec(property(get = get_isMe)) bool isMe;

  __declspec(property(get = get_isMyPartyOwner, put = set_isMyPartyOwner)) bool isMyPartyOwner;

  __declspec(property(get = get_isPlayer, put = set_isPlayer)) bool isPlayer;

  __declspec(property(get = get_isReady, put = set_isReady)) bool isReady;

  __declspec(property(get = get_isTerminating, put = set_isTerminating)) bool isTerminating;

  __declspec(property(get = get_isWaitingOnInvite, put = set_isWaitingOnInvite)) bool isWaitingOnInvite;

  __declspec(property(get = get_isWaitingOnJoin, put = set_isWaitingOnJoin)) bool isWaitingOnJoin;

  __declspec(property(get = get_multiplayerAvatarsData, put = set_multiplayerAvatarsData)) ::GlobalNamespace::MultiplayerAvatarsData multiplayerAvatarsData;

  __declspec(property(get = get_offsetSyncTime)) int64_t offsetSyncTime;

  __declspec(property(get = get_requiresPassword, put = set_requiresPassword)) bool requiresPassword;

  __declspec(property(get = get_selectionMask, put = set_selectionMask)) ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask;

  __declspec(property(get = get_sortIndex)) int32_t sortIndex;

  __declspec(property(get = get_userId)) ::StringW userId;

  __declspec(property(get = get_userName)) ::StringW userName;

  __declspec(property(get = get_wantsToPlayNextLevel, put = set_wantsToPlayNextLevel)) bool wantsToPlayNextLevel;

  __declspec(property(get = get_wasActiveAtLevelStart, put = set_wasActiveAtLevelStart)) bool wasActiveAtLevelStart;

  /// @brief Convert operator to "::GlobalNamespace::IConnectedPlayer"
  constexpr operator ::GlobalNamespace::IConnectedPlayer*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::INetworkPlayer"
  constexpr operator ::GlobalNamespace::INetworkPlayer*() noexcept;

  /// @brief Method Block, addr 0x3bc9744, size 0x38, virtual true, abstract: false, final true
  inline void Block();

  /// @brief Method Connect, addr 0x3bc84a0, size 0x11d4, virtual true, abstract: false, final false
  inline void Connect(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager, ::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel,
                      ::GlobalNamespace::BeatmapDataLoader* beatmapDataLoader, ::GlobalNamespace::EnvironmentsListModel* environmentsListModel,
                      ::GlobalNamespace::BeatmapCharacteristicCollection* beatmapCharacteristicCollection, ::GlobalNamespace::NodePoseSyncStateManager* nodePoseSyncStateManager);

  /// @brief Method Disconnect, addr 0x3bc9674, size 0x28, virtual true, abstract: false, final false
  inline void Disconnect();

  /// @brief Method HasState, addr 0x3bc7ed0, size 0x58, virtual true, abstract: false, final true
  inline bool HasState(::StringW state);

  /// @brief Method Invite, addr 0x3bc97b8, size 0x38, virtual true, abstract: false, final true
  inline void Invite();

  /// @brief Method Join, addr 0x3bc9828, size 0x38, virtual true, abstract: false, final false
  inline void Join();

  /// @brief Method Join, addr 0x3bc97f0, size 0x38, virtual true, abstract: false, final false
  inline void Join(::StringW password);

  /// @brief Method Kick, addr 0x3bc9780, size 0x38, virtual true, abstract: false, final true
  inline void Kick();

  /// @brief Method Leave, addr 0x3bc977c, size 0x4, virtual true, abstract: false, final true
  inline void Leave();

  static inline ::GlobalNamespace::MockPlayer* New_ctor(::GlobalNamespace::MockPlayerSettings* settings, bool isLocalPlayer);

  /// @brief Method RecommendBeatmapLevel, addr 0x3bc9980, size 0x1c, virtual false, abstract: false, final false
  inline void RecommendBeatmapLevel(::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, ::StringW beatmapLevelId);

  /// @brief Method SendInviteResponse, addr 0x3bc970c, size 0x38, virtual true, abstract: false, final true
  inline void SendInviteResponse(bool accept);

  /// @brief Method SendJoinResponse, addr 0x3bc96d4, size 0x38, virtual true, abstract: false, final true
  inline void SendJoinResponse(bool accept);

  /// @brief Method SetState, addr 0x3bc7f80, size 0x94, virtual false, abstract: false, final false
  inline bool SetState(::StringW state, bool value);

  /// @brief Method SimulateFail, addr 0x3bc9860, size 0x40, virtual false, abstract: false, final false
  inline void SimulateFail();

  /// @brief Method SimulateGiveUp, addr 0x3bc98a0, size 0x3c, virtual false, abstract: false, final false
  inline void SimulateGiveUp();

  /// @brief Method SimulateReturnToMainMenu, addr 0x3bc98dc, size 0xa4, virtual false, abstract: false, final false
  inline void SimulateReturnToMainMenu();

  /// @brief Method Tick, addr 0x3bc848c, size 0x14, virtual false, abstract: false, final false
  inline void Tick();

  /// @brief Method Unblock, addr 0x3bc969c, size 0x38, virtual true, abstract: false, final true
  inline void Unblock();

  constexpr bool const& __cordl_internal_get__canBlock_k__BackingField() const;

  constexpr bool& __cordl_internal_get__canBlock_k__BackingField();

  constexpr bool const& __cordl_internal_get__canInvite_k__BackingField() const;

  constexpr bool& __cordl_internal_get__canInvite_k__BackingField();

  constexpr bool const& __cordl_internal_get__canKick_k__BackingField() const;

  constexpr bool& __cordl_internal_get__canKick_k__BackingField();

  constexpr bool const& __cordl_internal_get__canLeave_k__BackingField() const;

  constexpr bool& __cordl_internal_get__canLeave_k__BackingField();

  constexpr bool const& __cordl_internal_get__canUnblock_k__BackingField() const;

  constexpr bool& __cordl_internal_get__canUnblock_k__BackingField();

  constexpr ::GlobalNamespace::GameplayServerConfiguration const& __cordl_internal_get__configuration_k__BackingField() const;

  constexpr ::GlobalNamespace::GameplayServerConfiguration& __cordl_internal_get__configuration_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__currentPartySize_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__currentPartySize_k__BackingField();

  constexpr ::GlobalNamespace::MockPlayerFiniteStateMachine* const& __cordl_internal_get__fsm() const;

  constexpr ::GlobalNamespace::MockPlayerFiniteStateMachine*& __cordl_internal_get__fsm();

  constexpr ::GlobalNamespace::IGameplayRpcManager* const& __cordl_internal_get__gameplayRpcManager() const;

  constexpr ::GlobalNamespace::IGameplayRpcManager*& __cordl_internal_get__gameplayRpcManager();

  constexpr bool const& __cordl_internal_get__isConnected_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isConnected_k__BackingField();

  constexpr bool const& __cordl_internal_get__isConnectionOwner_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isConnectionOwner_k__BackingField();

  constexpr bool const& __cordl_internal_get__isKicked_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isKicked_k__BackingField();

  constexpr bool const& __cordl_internal_get__isMe_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isMe_k__BackingField();

  constexpr bool const& __cordl_internal_get__isMyPartyOwner_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isMyPartyOwner_k__BackingField();

  constexpr bool const& __cordl_internal_get__isReady() const;

  constexpr bool& __cordl_internal_get__isReady();

  constexpr bool const& __cordl_internal_get__isWaitingOnInvite_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isWaitingOnInvite_k__BackingField();

  constexpr bool const& __cordl_internal_get__isWaitingOnJoin_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isWaitingOnJoin_k__BackingField();

  constexpr ::GlobalNamespace::MultiplayerAvatarsData const& __cordl_internal_get__multiplayerAvatarsData_k__BackingField() const;

  constexpr ::GlobalNamespace::MultiplayerAvatarsData& __cordl_internal_get__multiplayerAvatarsData_k__BackingField();

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& __cordl_internal_get__playerState() const;

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get__playerState();

  constexpr bool const& __cordl_internal_get__requiresPassword_k__BackingField() const;

  constexpr bool& __cordl_internal_get__requiresPassword_k__BackingField();

  constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& __cordl_internal_get__selectionMask_k__BackingField() const;

  constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& __cordl_internal_get__selectionMask_k__BackingField();

  constexpr ::GlobalNamespace::MockPlayerSettings* const& __cordl_internal_get__settings() const;

  constexpr ::GlobalNamespace::MockPlayerSettings*& __cordl_internal_get__settings();

  constexpr void __cordl_internal_set__canBlock_k__BackingField(bool value);

  constexpr void __cordl_internal_set__canInvite_k__BackingField(bool value);

  constexpr void __cordl_internal_set__canKick_k__BackingField(bool value);

  constexpr void __cordl_internal_set__canLeave_k__BackingField(bool value);

  constexpr void __cordl_internal_set__canUnblock_k__BackingField(bool value);

  constexpr void __cordl_internal_set__configuration_k__BackingField(::GlobalNamespace::GameplayServerConfiguration value);

  constexpr void __cordl_internal_set__currentPartySize_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__fsm(::GlobalNamespace::MockPlayerFiniteStateMachine* value);

  constexpr void __cordl_internal_set__gameplayRpcManager(::GlobalNamespace::IGameplayRpcManager* value);

  constexpr void __cordl_internal_set__isConnected_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isConnectionOwner_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isKicked_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isMe_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isMyPartyOwner_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isReady(bool value);

  constexpr void __cordl_internal_set__isWaitingOnInvite_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isWaitingOnJoin_k__BackingField(bool value);

  constexpr void __cordl_internal_set__multiplayerAvatarsData_k__BackingField(::GlobalNamespace::MultiplayerAvatarsData value);

  constexpr void __cordl_internal_set__playerState(::System::Collections::Generic::HashSet_1<::StringW>* value);

  constexpr void __cordl_internal_set__requiresPassword_k__BackingField(bool value);

  constexpr void __cordl_internal_set__selectionMask_k__BackingField(::GlobalNamespace::BeatmapLevelSelectionMask value);

  constexpr void __cordl_internal_set__settings(::GlobalNamespace::MockPlayerSettings* value);

  /// @brief Method .ctor, addr 0x3bc83d4, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::MockPlayerSettings* settings, bool isLocalPlayer);

  /// @brief Method get_autoConnect, addr 0x3bc7c20, size 0x1c, virtual false, abstract: false, final false
  inline bool get_autoConnect();

  /// @brief Method get_canBlock, addr 0x3bc7e60, size 0x8, virtual true, abstract: false, final true
  inline bool get_canBlock();

  /// @brief Method get_canInvite, addr 0x3bc7e10, size 0x8, virtual true, abstract: false, final true
  inline bool get_canInvite();

  /// @brief Method get_canJoin, addr 0x3bc7de0, size 0x8, virtual true, abstract: false, final false
  inline bool get_canJoin();

  /// @brief Method get_canKick, addr 0x3bc7e38, size 0x8, virtual true, abstract: false, final true
  inline bool get_canKick();

  /// @brief Method get_canLeave, addr 0x3bc7e4c, size 0x8, virtual true, abstract: false, final true
  inline bool get_canLeave();

  /// @brief Method get_canUnblock, addr 0x3bc7e74, size 0x8, virtual true, abstract: false, final true
  inline bool get_canUnblock();

  /// @brief Method get_configuration, addr 0x3bc7da0, size 0x14, virtual true, abstract: false, final true
  inline ::GlobalNamespace::GameplayServerConfiguration get_configuration();

  /// @brief Method get_connectedPlayer, addr 0x3bc7ddc, size 0x4, virtual true, abstract: false, final true
  inline ::GlobalNamespace::IConnectedPlayer* get_connectedPlayer();

  /// @brief Method get_currentLatency, addr 0x3bc7d18, size 0x2c, virtual true, abstract: false, final true
  inline int64_t get_currentLatency();

  /// @brief Method get_currentPartySize, addr 0x3bc7d60, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_currentPartySize();

  /// @brief Method get_disconnectedReason, addr 0x3bc7ca8, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::DisconnectedReason get_disconnectedReason();

  /// @brief Method get_finishedLevel, addr 0x3bc8294, size 0x48, virtual false, abstract: false, final false
  inline bool get_finishedLevel();

  /// @brief Method get_hasValidLatency, addr 0x3bc7d44, size 0x8, virtual true, abstract: false, final true
  inline bool get_hasValidLatency();

  /// @brief Method get_inactiveByDefault, addr 0x3bc7c3c, size 0x1c, virtual false, abstract: false, final false
  inline bool get_inactiveByDefault();

  /// @brief Method get_isActive, addr 0x3bc81f4, size 0x48, virtual false, abstract: false, final false
  inline bool get_isActive();

  /// @brief Method get_isConnected, addr 0x3bc7c58, size 0x8, virtual true, abstract: false, final true
  inline bool get_isConnected();

  /// @brief Method get_isConnectionOwner, addr 0x3bc7c94, size 0x8, virtual true, abstract: false, final true
  inline bool get_isConnectionOwner();

  /// @brief Method get_isDedicatedServer, addr 0x3bc8014, size 0x48, virtual false, abstract: false, final false
  inline bool get_isDedicatedServer();

  /// @brief Method get_isKicked, addr 0x3bc7d4c, size 0x8, virtual true, abstract: false, final true
  inline bool get_isKicked();

  /// @brief Method get_isMe, addr 0x3bc7bc4, size 0x8, virtual true, abstract: false, final true
  inline bool get_isMe();

  /// @brief Method get_isMyPartyOwner, addr 0x3bc7dc8, size 0x8, virtual true, abstract: false, final true
  inline bool get_isMyPartyOwner();

  /// @brief Method get_isPlayer, addr 0x3bc7e88, size 0x48, virtual false, abstract: false, final false
  inline bool get_isPlayer();

  /// @brief Method get_isReady, addr 0x3bc7b84, size 0x8, virtual false, abstract: false, final false
  inline bool get_isReady();

  /// @brief Method get_isTerminating, addr 0x3bc8334, size 0x48, virtual false, abstract: false, final false
  inline bool get_isTerminating();

  /// @brief Method get_isWaitingOnInvite, addr 0x3bc7e24, size 0x8, virtual true, abstract: false, final true
  inline bool get_isWaitingOnInvite();

  /// @brief Method get_isWaitingOnJoin, addr 0x3bc7dfc, size 0x8, virtual true, abstract: false, final true
  inline bool get_isWaitingOnJoin();

  /// @brief Method get_multiplayerAvatarsData, addr 0x3bc7c6c, size 0x14, virtual true, abstract: false, final true
  inline ::GlobalNamespace::MultiplayerAvatarsData get_multiplayerAvatarsData();

  /// @brief Method get_offsetSyncTime, addr 0x3bc7cb0, size 0x68, virtual true, abstract: false, final true
  inline int64_t get_offsetSyncTime();

  /// @brief Method get_requiresPassword, addr 0x3bc7de8, size 0x8, virtual true, abstract: false, final true
  inline bool get_requiresPassword();

  /// @brief Method get_selectionMask, addr 0x3bc7d70, size 0x18, virtual true, abstract: false, final true
  inline ::GlobalNamespace::BeatmapLevelSelectionMask get_selectionMask();

  /// @brief Method get_sortIndex, addr 0x3bc7c04, size 0x1c, virtual true, abstract: false, final true
  inline int32_t get_sortIndex();

  /// @brief Method get_userId, addr 0x3bc7bcc, size 0x1c, virtual true, abstract: false, final true
  inline ::StringW get_userId();

  /// @brief Method get_userName, addr 0x3bc7be8, size 0x1c, virtual true, abstract: false, final true
  inline ::StringW get_userName();

  /// @brief Method get_wantsToPlayNextLevel, addr 0x3bc80b4, size 0x48, virtual false, abstract: false, final false
  inline bool get_wantsToPlayNextLevel();

  /// @brief Method get_wasActiveAtLevelStart, addr 0x3bc8154, size 0x48, virtual false, abstract: false, final false
  inline bool get_wasActiveAtLevelStart();

  /// @brief Convert to "::GlobalNamespace::IConnectedPlayer"
  constexpr ::GlobalNamespace::IConnectedPlayer* i___GlobalNamespace__IConnectedPlayer() noexcept;

  /// @brief Convert to "::GlobalNamespace::INetworkPlayer"
  constexpr ::GlobalNamespace::INetworkPlayer* i___GlobalNamespace__INetworkPlayer() noexcept;

  /// @brief Method set_canBlock, addr 0x3bc7e68, size 0xc, virtual false, abstract: false, final false
  inline void set_canBlock(bool value);

  /// @brief Method set_canInvite, addr 0x3bc7e18, size 0xc, virtual false, abstract: false, final false
  inline void set_canInvite(bool value);

  /// @brief Method set_canKick, addr 0x3bc7e40, size 0xc, virtual false, abstract: false, final false
  inline void set_canKick(bool value);

  /// @brief Method set_canLeave, addr 0x3bc7e54, size 0xc, virtual false, abstract: false, final false
  inline void set_canLeave(bool value);

  /// @brief Method set_canUnblock, addr 0x3bc7e7c, size 0xc, virtual false, abstract: false, final false
  inline void set_canUnblock(bool value);

  /// @brief Method set_configuration, addr 0x3bc7db4, size 0x14, virtual false, abstract: false, final false
  inline void set_configuration(::GlobalNamespace::GameplayServerConfiguration value);

  /// @brief Method set_currentPartySize, addr 0x3bc7d68, size 0x8, virtual false, abstract: false, final false
  inline void set_currentPartySize(int32_t value);

  /// @brief Method set_finishedLevel, addr 0x3bc82dc, size 0x58, virtual false, abstract: false, final false
  inline void set_finishedLevel(bool value);

  /// @brief Method set_isActive, addr 0x3bc823c, size 0x58, virtual false, abstract: false, final false
  inline void set_isActive(bool value);

  /// @brief Method set_isConnected, addr 0x3bc7c60, size 0xc, virtual false, abstract: false, final false
  inline void set_isConnected(bool value);

  /// @brief Method set_isConnectionOwner, addr 0x3bc7c9c, size 0xc, virtual false, abstract: false, final false
  inline void set_isConnectionOwner(bool value);

  /// @brief Method set_isDedicatedServer, addr 0x3bc805c, size 0x58, virtual false, abstract: false, final false
  inline void set_isDedicatedServer(bool value);

  /// @brief Method set_isKicked, addr 0x3bc7d54, size 0xc, virtual false, abstract: false, final false
  inline void set_isKicked(bool value);

  /// @brief Method set_isMyPartyOwner, addr 0x3bc7dd0, size 0xc, virtual false, abstract: false, final false
  inline void set_isMyPartyOwner(bool value);

  /// @brief Method set_isPlayer, addr 0x3bc7f28, size 0x58, virtual false, abstract: false, final false
  inline void set_isPlayer(bool value);

  /// @brief Method set_isReady, addr 0x3bc7b8c, size 0x38, virtual false, abstract: false, final false
  inline void set_isReady(bool value);

  /// @brief Method set_isTerminating, addr 0x3bc837c, size 0x58, virtual false, abstract: false, final false
  inline void set_isTerminating(bool value);

  /// @brief Method set_isWaitingOnInvite, addr 0x3bc7e2c, size 0xc, virtual false, abstract: false, final false
  inline void set_isWaitingOnInvite(bool value);

  /// @brief Method set_isWaitingOnJoin, addr 0x3bc7e04, size 0xc, virtual false, abstract: false, final false
  inline void set_isWaitingOnJoin(bool value);

  /// @brief Method set_multiplayerAvatarsData, addr 0x3bc7c80, size 0x14, virtual false, abstract: false, final false
  inline void set_multiplayerAvatarsData(::GlobalNamespace::MultiplayerAvatarsData value);

  /// @brief Method set_requiresPassword, addr 0x3bc7df0, size 0xc, virtual false, abstract: false, final false
  inline void set_requiresPassword(bool value);

  /// @brief Method set_selectionMask, addr 0x3bc7d88, size 0x18, virtual false, abstract: false, final false
  inline void set_selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value);

  /// @brief Method set_wantsToPlayNextLevel, addr 0x3bc80fc, size 0x58, virtual false, abstract: false, final false
  inline void set_wantsToPlayNextLevel(bool value);

  /// @brief Method set_wasActiveAtLevelStart, addr 0x3bc819c, size 0x58, virtual false, abstract: false, final false
  inline void set_wasActiveAtLevelStart(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockPlayer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MockPlayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockPlayer(MockPlayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockPlayer(MockPlayer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4542 };

  /// @brief Field <isMe>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____isMe_k__BackingField;

  /// @brief Field <isConnected>k__BackingField, offset: 0x11, size: 0x1, def value: None
  bool ____isConnected_k__BackingField;

  /// @brief Field <multiplayerAvatarsData>k__BackingField, offset: 0x18, size: 0x18, def value: None
  ::GlobalNamespace::MultiplayerAvatarsData ____multiplayerAvatarsData_k__BackingField;

  /// @brief Field <isConnectionOwner>k__BackingField, offset: 0x30, size: 0x1, def value: None
  bool ____isConnectionOwner_k__BackingField;

  /// @brief Field <isKicked>k__BackingField, offset: 0x31, size: 0x1, def value: None
  bool ____isKicked_k__BackingField;

  /// @brief Field <currentPartySize>k__BackingField, offset: 0x34, size: 0x4, def value: None
  int32_t ____currentPartySize_k__BackingField;

  /// @brief Field <selectionMask>k__BackingField, offset: 0x38, size: 0x28, def value: None
  ::GlobalNamespace::BeatmapLevelSelectionMask ____selectionMask_k__BackingField;

  /// @brief Field <configuration>k__BackingField, offset: 0x60, size: 0x18, def value: None
  ::GlobalNamespace::GameplayServerConfiguration ____configuration_k__BackingField;

  /// @brief Field <isMyPartyOwner>k__BackingField, offset: 0x78, size: 0x1, def value: None
  bool ____isMyPartyOwner_k__BackingField;

  /// @brief Field <requiresPassword>k__BackingField, offset: 0x79, size: 0x1, def value: None
  bool ____requiresPassword_k__BackingField;

  /// @brief Field <isWaitingOnJoin>k__BackingField, offset: 0x7a, size: 0x1, def value: None
  bool ____isWaitingOnJoin_k__BackingField;

  /// @brief Field <canInvite>k__BackingField, offset: 0x7b, size: 0x1, def value: None
  bool ____canInvite_k__BackingField;

  /// @brief Field <isWaitingOnInvite>k__BackingField, offset: 0x7c, size: 0x1, def value: None
  bool ____isWaitingOnInvite_k__BackingField;

  /// @brief Field <canKick>k__BackingField, offset: 0x7d, size: 0x1, def value: None
  bool ____canKick_k__BackingField;

  /// @brief Field <canLeave>k__BackingField, offset: 0x7e, size: 0x1, def value: None
  bool ____canLeave_k__BackingField;

  /// @brief Field <canBlock>k__BackingField, offset: 0x7f, size: 0x1, def value: None
  bool ____canBlock_k__BackingField;

  /// @brief Field <canUnblock>k__BackingField, offset: 0x80, size: 0x1, def value: None
  bool ____canUnblock_k__BackingField;

  /// @brief Field _isReady, offset: 0x81, size: 0x1, def value: None
  bool ____isReady;

  /// @brief Field _playerState, offset: 0x88, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ____playerState;

  /// @brief Field _settings, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::MockPlayerSettings* ____settings;

  /// @brief Field _fsm, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::MockPlayerFiniteStateMachine* ____fsm;

  /// @brief Field _gameplayRpcManager, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::IGameplayRpcManager* ____gameplayRpcManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MockPlayer, ____isMe_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayer, ____isConnected_k__BackingField) == 0x11, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayer, ____multiplayerAvatarsData_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayer, ____isConnectionOwner_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayer, ____isKicked_k__BackingField) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayer, ____currentPartySize_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayer, ____selectionMask_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayer, ____configuration_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayer, ____isMyPartyOwner_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayer, ____requiresPassword_k__BackingField) == 0x79, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayer, ____isWaitingOnJoin_k__BackingField) == 0x7a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayer, ____canInvite_k__BackingField) == 0x7b, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayer, ____isWaitingOnInvite_k__BackingField) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayer, ____canKick_k__BackingField) == 0x7d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayer, ____canLeave_k__BackingField) == 0x7e, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayer, ____canBlock_k__BackingField) == 0x7f, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayer, ____canUnblock_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayer, ____isReady) == 0x81, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayer, ____playerState) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayer, ____settings) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayer, ____fsm) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayer, ____gameplayRpcManager) == 0xa0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockPlayer, 0xa8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockPlayer*, "", "MockPlayer");
