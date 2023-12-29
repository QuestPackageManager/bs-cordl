#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarData_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MockPlayer)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace GlobalNamespace {
class IGameplayRpcManager;
}
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace GlobalNamespace {
class MockPlayerFiniteStateMachine;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
class NodePoseSyncStateManager;
}
namespace GlobalNamespace {
class MockPlayerSettings;
}
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace GlobalNamespace {
struct MultiplayerAvatarData;
}
namespace GlobalNamespace {
class INetworkPlayer;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class AvatarPartsModel;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
// Forward declare root types
namespace GlobalNamespace {
class MockPlayer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockPlayer);
// Type: ::MockPlayer
// SizeInfo { instance_size: 240, native_size: -1, calculated_instance_size: 240, calculated_native_size: 240, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(15167)), TypeDefinitionIndex(TypeDefinitionIndex(12687)),
// TypeDefinitionIndex(TypeDefinitionIndex(12614))} Self: TypeDefinitionIndex(TypeDefinitionIndex(5284)) CS Name: ::MockPlayer*
class CORDL_TYPE MockPlayer : public ::System::Object {
public:
  // Declarations
  /// @brief Field <isMe>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __get__isMe_k__BackingField, put = __set__isMe_k__BackingField)) bool _isMe_k__BackingField;

  /// @brief Field <isConnected>k__BackingField, offset 0x11, size 0x1
  __declspec(property(get = __get__isConnected_k__BackingField, put = __set__isConnected_k__BackingField)) bool _isConnected_k__BackingField;

  /// @brief Field <multiplayerAvatarData>k__BackingField, offset 0x18, size 0x70
  __declspec(property(get = __get__multiplayerAvatarData_k__BackingField,
                      put = __set__multiplayerAvatarData_k__BackingField))::GlobalNamespace::MultiplayerAvatarData _multiplayerAvatarData_k__BackingField;

  /// @brief Field <isConnectionOwner>k__BackingField, offset 0x88, size 0x1
  __declspec(property(get = __get__isConnectionOwner_k__BackingField, put = __set__isConnectionOwner_k__BackingField)) bool _isConnectionOwner_k__BackingField;

  /// @brief Field <isKicked>k__BackingField, offset 0x89, size 0x1
  __declspec(property(get = __get__isKicked_k__BackingField, put = __set__isKicked_k__BackingField)) bool _isKicked_k__BackingField;

  /// @brief Field <currentPartySize>k__BackingField, offset 0x8c, size 0x4
  __declspec(property(get = __get__currentPartySize_k__BackingField, put = __set__currentPartySize_k__BackingField)) int32_t _currentPartySize_k__BackingField;

  /// @brief Field <selectionMask>k__BackingField, offset 0x90, size 0x18
  __declspec(property(get = __get__selectionMask_k__BackingField, put = __set__selectionMask_k__BackingField))::GlobalNamespace::BeatmapLevelSelectionMask _selectionMask_k__BackingField;

  /// @brief Field <configuration>k__BackingField, offset 0xa8, size 0x18
  __declspec(property(get = __get__configuration_k__BackingField, put = __set__configuration_k__BackingField))::GlobalNamespace::GameplayServerConfiguration _configuration_k__BackingField;

  /// @brief Field <isMyPartyOwner>k__BackingField, offset 0xc0, size 0x1
  __declspec(property(get = __get__isMyPartyOwner_k__BackingField, put = __set__isMyPartyOwner_k__BackingField)) bool _isMyPartyOwner_k__BackingField;

  /// @brief Field <requiresPassword>k__BackingField, offset 0xc1, size 0x1
  __declspec(property(get = __get__requiresPassword_k__BackingField, put = __set__requiresPassword_k__BackingField)) bool _requiresPassword_k__BackingField;

  /// @brief Field <isWaitingOnJoin>k__BackingField, offset 0xc2, size 0x1
  __declspec(property(get = __get__isWaitingOnJoin_k__BackingField, put = __set__isWaitingOnJoin_k__BackingField)) bool _isWaitingOnJoin_k__BackingField;

  /// @brief Field <canInvite>k__BackingField, offset 0xc3, size 0x1
  __declspec(property(get = __get__canInvite_k__BackingField, put = __set__canInvite_k__BackingField)) bool _canInvite_k__BackingField;

  /// @brief Field <isWaitingOnInvite>k__BackingField, offset 0xc4, size 0x1
  __declspec(property(get = __get__isWaitingOnInvite_k__BackingField, put = __set__isWaitingOnInvite_k__BackingField)) bool _isWaitingOnInvite_k__BackingField;

  /// @brief Field <canKick>k__BackingField, offset 0xc5, size 0x1
  __declspec(property(get = __get__canKick_k__BackingField, put = __set__canKick_k__BackingField)) bool _canKick_k__BackingField;

  /// @brief Field <canLeave>k__BackingField, offset 0xc6, size 0x1
  __declspec(property(get = __get__canLeave_k__BackingField, put = __set__canLeave_k__BackingField)) bool _canLeave_k__BackingField;

  /// @brief Field <canBlock>k__BackingField, offset 0xc7, size 0x1
  __declspec(property(get = __get__canBlock_k__BackingField, put = __set__canBlock_k__BackingField)) bool _canBlock_k__BackingField;

  /// @brief Field <canUnblock>k__BackingField, offset 0xc8, size 0x1
  __declspec(property(get = __get__canUnblock_k__BackingField, put = __set__canUnblock_k__BackingField)) bool _canUnblock_k__BackingField;

  /// @brief Field _isReady, offset 0xc9, size 0x1
  __declspec(property(get = __get__isReady, put = __set__isReady)) bool _isReady;

  /// @brief Field _playerState, offset 0xd0, size 0x8
  __declspec(property(get = __get__playerState, put = __set__playerState))::System::Collections::Generic::HashSet_1<::StringW>* _playerState;

  /// @brief Field _settings, offset 0xd8, size 0x8
  __declspec(property(get = __get__settings, put = __set__settings))::GlobalNamespace::MockPlayerSettings* _settings;

  /// @brief Field _fsm, offset 0xe0, size 0x8
  __declspec(property(get = __get__fsm, put = __set__fsm))::GlobalNamespace::MockPlayerFiniteStateMachine* _fsm;

  /// @brief Field _gameplayRpcManager, offset 0xe8, size 0x8
  __declspec(property(get = __get__gameplayRpcManager, put = __set__gameplayRpcManager))::GlobalNamespace::IGameplayRpcManager* _gameplayRpcManager;

  __declspec(property(get = get_isReady, put = set_isReady)) bool isReady;

  __declspec(property(get = get_isMe)) bool isMe;

  __declspec(property(get = get_userId))::StringW userId;

  __declspec(property(get = get_userName))::StringW userName;

  __declspec(property(get = get_sortIndex)) int32_t sortIndex;

  __declspec(property(get = get_autoConnect)) bool autoConnect;

  __declspec(property(get = get_inactiveByDefault)) bool inactiveByDefault;

  __declspec(property(get = get_isConnected, put = set_isConnected)) bool isConnected;

  __declspec(property(get = get_multiplayerAvatarData, put = set_multiplayerAvatarData))::GlobalNamespace::MultiplayerAvatarData multiplayerAvatarData;

  __declspec(property(get = get_isConnectionOwner, put = set_isConnectionOwner)) bool isConnectionOwner;

  __declspec(property(get = get_disconnectedReason))::GlobalNamespace::DisconnectedReason disconnectedReason;

  __declspec(property(get = get_offsetSyncTime)) float_t offsetSyncTime;

  __declspec(property(get = get_hasValidLatency)) bool hasValidLatency;

  __declspec(property(get = get_currentLatency)) float_t currentLatency;

  __declspec(property(get = get_isKicked, put = set_isKicked)) bool isKicked;

  __declspec(property(get = get_currentPartySize, put = set_currentPartySize)) int32_t currentPartySize;

  __declspec(property(get = get_selectionMask, put = set_selectionMask))::GlobalNamespace::BeatmapLevelSelectionMask selectionMask;

  __declspec(property(get = get_configuration, put = set_configuration))::GlobalNamespace::GameplayServerConfiguration configuration;

  __declspec(property(get = get_isMyPartyOwner, put = set_isMyPartyOwner)) bool isMyPartyOwner;

  __declspec(property(get = get_connectedPlayer))::GlobalNamespace::IConnectedPlayer* connectedPlayer;

  __declspec(property(get = get_canJoin)) bool canJoin;

  __declspec(property(get = get_requiresPassword, put = set_requiresPassword)) bool requiresPassword;

  __declspec(property(get = get_isWaitingOnJoin, put = set_isWaitingOnJoin)) bool isWaitingOnJoin;

  __declspec(property(get = get_canInvite, put = set_canInvite)) bool canInvite;

  __declspec(property(get = get_isWaitingOnInvite, put = set_isWaitingOnInvite)) bool isWaitingOnInvite;

  __declspec(property(get = get_canKick, put = set_canKick)) bool canKick;

  __declspec(property(get = get_canLeave, put = set_canLeave)) bool canLeave;

  __declspec(property(get = get_canBlock, put = set_canBlock)) bool canBlock;

  __declspec(property(get = get_canUnblock, put = set_canUnblock)) bool canUnblock;

  __declspec(property(get = get_isPlayer, put = set_isPlayer)) bool isPlayer;

  __declspec(property(get = get_isDedicatedServer, put = set_isDedicatedServer)) bool isDedicatedServer;

  __declspec(property(get = get_wantsToPlayNextLevel, put = set_wantsToPlayNextLevel)) bool wantsToPlayNextLevel;

  __declspec(property(get = get_wasActiveAtLevelStart, put = set_wasActiveAtLevelStart)) bool wasActiveAtLevelStart;

  __declspec(property(get = get_isActive, put = set_isActive)) bool isActive;

  __declspec(property(get = get_finishedLevel, put = set_finishedLevel)) bool finishedLevel;

  __declspec(property(get = get_isTerminating, put = set_isTerminating)) bool isTerminating;

  /// @brief Convert operator to "::GlobalNamespace::IConnectedPlayer"
  constexpr operator ::GlobalNamespace::IConnectedPlayer*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::INetworkPlayer"
  constexpr operator ::GlobalNamespace::INetworkPlayer*() noexcept;

  constexpr bool& __get__isMe_k__BackingField();

  constexpr bool const& __get__isMe_k__BackingField() const;

  constexpr void __set__isMe_k__BackingField(bool value);

  constexpr bool& __get__isConnected_k__BackingField();

  constexpr bool const& __get__isConnected_k__BackingField() const;

  constexpr void __set__isConnected_k__BackingField(bool value);

  constexpr ::GlobalNamespace::MultiplayerAvatarData& __get__multiplayerAvatarData_k__BackingField();

  constexpr ::GlobalNamespace::MultiplayerAvatarData const& __get__multiplayerAvatarData_k__BackingField() const;

  constexpr void __set__multiplayerAvatarData_k__BackingField(::GlobalNamespace::MultiplayerAvatarData value);

  constexpr bool& __get__isConnectionOwner_k__BackingField();

  constexpr bool const& __get__isConnectionOwner_k__BackingField() const;

  constexpr void __set__isConnectionOwner_k__BackingField(bool value);

  constexpr bool& __get__isKicked_k__BackingField();

  constexpr bool const& __get__isKicked_k__BackingField() const;

  constexpr void __set__isKicked_k__BackingField(bool value);

  constexpr int32_t& __get__currentPartySize_k__BackingField();

  constexpr int32_t const& __get__currentPartySize_k__BackingField() const;

  constexpr void __set__currentPartySize_k__BackingField(int32_t value);

  constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& __get__selectionMask_k__BackingField();

  constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& __get__selectionMask_k__BackingField() const;

  constexpr void __set__selectionMask_k__BackingField(::GlobalNamespace::BeatmapLevelSelectionMask value);

  constexpr ::GlobalNamespace::GameplayServerConfiguration& __get__configuration_k__BackingField();

  constexpr ::GlobalNamespace::GameplayServerConfiguration const& __get__configuration_k__BackingField() const;

  constexpr void __set__configuration_k__BackingField(::GlobalNamespace::GameplayServerConfiguration value);

  constexpr bool& __get__isMyPartyOwner_k__BackingField();

  constexpr bool const& __get__isMyPartyOwner_k__BackingField() const;

  constexpr void __set__isMyPartyOwner_k__BackingField(bool value);

  constexpr bool& __get__requiresPassword_k__BackingField();

  constexpr bool const& __get__requiresPassword_k__BackingField() const;

  constexpr void __set__requiresPassword_k__BackingField(bool value);

  constexpr bool& __get__isWaitingOnJoin_k__BackingField();

  constexpr bool const& __get__isWaitingOnJoin_k__BackingField() const;

  constexpr void __set__isWaitingOnJoin_k__BackingField(bool value);

  constexpr bool& __get__canInvite_k__BackingField();

  constexpr bool const& __get__canInvite_k__BackingField() const;

  constexpr void __set__canInvite_k__BackingField(bool value);

  constexpr bool& __get__isWaitingOnInvite_k__BackingField();

  constexpr bool const& __get__isWaitingOnInvite_k__BackingField() const;

  constexpr void __set__isWaitingOnInvite_k__BackingField(bool value);

  constexpr bool& __get__canKick_k__BackingField();

  constexpr bool const& __get__canKick_k__BackingField() const;

  constexpr void __set__canKick_k__BackingField(bool value);

  constexpr bool& __get__canLeave_k__BackingField();

  constexpr bool const& __get__canLeave_k__BackingField() const;

  constexpr void __set__canLeave_k__BackingField(bool value);

  constexpr bool& __get__canBlock_k__BackingField();

  constexpr bool const& __get__canBlock_k__BackingField() const;

  constexpr void __set__canBlock_k__BackingField(bool value);

  constexpr bool& __get__canUnblock_k__BackingField();

  constexpr bool const& __get__canUnblock_k__BackingField() const;

  constexpr void __set__canUnblock_k__BackingField(bool value);

  constexpr bool& __get__isReady();

  constexpr bool const& __get__isReady() const;

  constexpr void __set__isReady(bool value);

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __get__playerState();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const& __get__playerState() const;

  constexpr void __set__playerState(::System::Collections::Generic::HashSet_1<::StringW>* value);

  constexpr ::GlobalNamespace::MockPlayerSettings*& __get__settings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MockPlayerSettings*> const& __get__settings() const;

  constexpr void __set__settings(::GlobalNamespace::MockPlayerSettings* value);

  constexpr ::GlobalNamespace::MockPlayerFiniteStateMachine*& __get__fsm();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MockPlayerFiniteStateMachine*> const& __get__fsm() const;

  constexpr void __set__fsm(::GlobalNamespace::MockPlayerFiniteStateMachine* value);

  constexpr ::GlobalNamespace::IGameplayRpcManager*& __get__gameplayRpcManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IGameplayRpcManager*> const& __get__gameplayRpcManager() const;

  constexpr void __set__gameplayRpcManager(::GlobalNamespace::IGameplayRpcManager* value);

  /// @brief Method get_isReady addr 0x20ff12c size 0x8 virtual false final false
  inline bool get_isReady();

  /// @brief Method set_isReady addr 0x20ff134 size 0x34 virtual false final false
  inline void set_isReady(bool value);

  /// @brief Method get_isMe addr 0x20ff168 size 0x8 virtual true final true
  inline bool get_isMe();

  /// @brief Method get_userId addr 0x20ff170 size 0x1c virtual true final true
  inline ::StringW get_userId();

  /// @brief Method get_userName addr 0x20ff18c size 0x1c virtual true final true
  inline ::StringW get_userName();

  /// @brief Method get_sortIndex addr 0x20ff1a8 size 0x1c virtual true final true
  inline int32_t get_sortIndex();

  /// @brief Method get_autoConnect addr 0x20ff1c4 size 0x1c virtual false final false
  inline bool get_autoConnect();

  /// @brief Method get_inactiveByDefault addr 0x20ff1e0 size 0x1c virtual false final false
  inline bool get_inactiveByDefault();

  /// @brief Method get_isConnected addr 0x20ff1fc size 0x8 virtual true final true
  inline bool get_isConnected();

  /// @brief Method set_isConnected addr 0x20ff204 size 0xc virtual false final false
  inline void set_isConnected(bool value);

  /// @brief Method get_multiplayerAvatarData addr 0x20ff210 size 0x10 virtual true final true
  inline ::GlobalNamespace::MultiplayerAvatarData get_multiplayerAvatarData();

  /// @brief Method set_multiplayerAvatarData addr 0x20ff220 size 0x18 virtual false final false
  inline void set_multiplayerAvatarData(::GlobalNamespace::MultiplayerAvatarData value);

  /// @brief Method get_isConnectionOwner addr 0x20ff238 size 0x8 virtual true final true
  inline bool get_isConnectionOwner();

  /// @brief Method set_isConnectionOwner addr 0x20ff240 size 0xc virtual false final false
  inline void set_isConnectionOwner(bool value);

  /// @brief Method get_disconnectedReason addr 0x20ff24c size 0x8 virtual true final true
  inline ::GlobalNamespace::DisconnectedReason get_disconnectedReason();

  /// @brief Method get_offsetSyncTime addr 0x20ff254 size 0x4c virtual true final true
  inline float_t get_offsetSyncTime();

  /// @brief Method get_hasValidLatency addr 0x20ff2d4 size 0x8 virtual true final true
  inline bool get_hasValidLatency();

  /// @brief Method get_currentLatency addr 0x20ff2a0 size 0x34 virtual true final true
  inline float_t get_currentLatency();

  /// @brief Method get_isKicked addr 0x20ff2dc size 0x8 virtual true final true
  inline bool get_isKicked();

  /// @brief Method set_isKicked addr 0x20ff2e4 size 0xc virtual false final false
  inline void set_isKicked(bool value);

  /// @brief Method get_currentPartySize addr 0x20ff2f0 size 0x8 virtual true final true
  inline int32_t get_currentPartySize();

  /// @brief Method set_currentPartySize addr 0x20ff2f8 size 0x8 virtual false final false
  inline void set_currentPartySize(int32_t value);

  /// @brief Method get_selectionMask addr 0x20ff300 size 0x14 virtual true final true
  inline ::GlobalNamespace::BeatmapLevelSelectionMask get_selectionMask();

  /// @brief Method set_selectionMask addr 0x20ff314 size 0x14 virtual false final false
  inline void set_selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value);

  /// @brief Method get_configuration addr 0x20ff328 size 0x14 virtual true final true
  inline ::GlobalNamespace::GameplayServerConfiguration get_configuration();

  /// @brief Method set_configuration addr 0x20ff33c size 0x14 virtual false final false
  inline void set_configuration(::GlobalNamespace::GameplayServerConfiguration value);

  /// @brief Method get_isMyPartyOwner addr 0x20ff350 size 0x8 virtual true final true
  inline bool get_isMyPartyOwner();

  /// @brief Method set_isMyPartyOwner addr 0x20ff358 size 0xc virtual false final false
  inline void set_isMyPartyOwner(bool value);

  /// @brief Method get_connectedPlayer addr 0x20ff364 size 0x4 virtual true final true
  inline ::GlobalNamespace::IConnectedPlayer* get_connectedPlayer();

  /// @brief Method get_canJoin addr 0x20ff368 size 0x8 virtual true final false
  inline bool get_canJoin();

  /// @brief Method get_requiresPassword addr 0x20ff370 size 0x8 virtual true final true
  inline bool get_requiresPassword();

  /// @brief Method set_requiresPassword addr 0x20ff378 size 0xc virtual false final false
  inline void set_requiresPassword(bool value);

  /// @brief Method get_isWaitingOnJoin addr 0x20ff384 size 0x8 virtual true final true
  inline bool get_isWaitingOnJoin();

  /// @brief Method set_isWaitingOnJoin addr 0x20ff38c size 0xc virtual false final false
  inline void set_isWaitingOnJoin(bool value);

  /// @brief Method get_canInvite addr 0x20ff398 size 0x8 virtual true final true
  inline bool get_canInvite();

  /// @brief Method set_canInvite addr 0x20ff3a0 size 0xc virtual false final false
  inline void set_canInvite(bool value);

  /// @brief Method get_isWaitingOnInvite addr 0x20ff3ac size 0x8 virtual true final true
  inline bool get_isWaitingOnInvite();

  /// @brief Method set_isWaitingOnInvite addr 0x20ff3b4 size 0xc virtual false final false
  inline void set_isWaitingOnInvite(bool value);

  /// @brief Method get_canKick addr 0x20ff3c0 size 0x8 virtual true final true
  inline bool get_canKick();

  /// @brief Method set_canKick addr 0x20ff3c8 size 0xc virtual false final false
  inline void set_canKick(bool value);

  /// @brief Method get_canLeave addr 0x20ff3d4 size 0x8 virtual true final true
  inline bool get_canLeave();

  /// @brief Method set_canLeave addr 0x20ff3dc size 0xc virtual false final false
  inline void set_canLeave(bool value);

  /// @brief Method get_canBlock addr 0x20ff3e8 size 0x8 virtual true final true
  inline bool get_canBlock();

  /// @brief Method set_canBlock addr 0x20ff3f0 size 0xc virtual false final false
  inline void set_canBlock(bool value);

  /// @brief Method get_canUnblock addr 0x20ff3fc size 0x8 virtual true final true
  inline bool get_canUnblock();

  /// @brief Method set_canUnblock addr 0x20ff404 size 0xc virtual false final false
  inline void set_canUnblock(bool value);

  /// @brief Method get_isPlayer addr 0x20ff410 size 0x48 virtual false final false
  inline bool get_isPlayer();

  /// @brief Method set_isPlayer addr 0x20ff4b0 size 0x58 virtual false final false
  inline void set_isPlayer(bool value);

  /// @brief Method get_isDedicatedServer addr 0x20ff59c size 0x48 virtual false final false
  inline bool get_isDedicatedServer();

  /// @brief Method set_isDedicatedServer addr 0x20ff5e4 size 0x58 virtual false final false
  inline void set_isDedicatedServer(bool value);

  /// @brief Method get_wantsToPlayNextLevel addr 0x20ff63c size 0x48 virtual false final false
  inline bool get_wantsToPlayNextLevel();

  /// @brief Method set_wantsToPlayNextLevel addr 0x20ff684 size 0x58 virtual false final false
  inline void set_wantsToPlayNextLevel(bool value);

  /// @brief Method get_wasActiveAtLevelStart addr 0x20ff6dc size 0x48 virtual false final false
  inline bool get_wasActiveAtLevelStart();

  /// @brief Method set_wasActiveAtLevelStart addr 0x20ff724 size 0x58 virtual false final false
  inline void set_wasActiveAtLevelStart(bool value);

  /// @brief Method get_isActive addr 0x20ff77c size 0x48 virtual false final false
  inline bool get_isActive();

  /// @brief Method set_isActive addr 0x20ff7c4 size 0x58 virtual false final false
  inline void set_isActive(bool value);

  /// @brief Method get_finishedLevel addr 0x20ff81c size 0x48 virtual false final false
  inline bool get_finishedLevel();

  /// @brief Method set_finishedLevel addr 0x20ff864 size 0x58 virtual false final false
  inline void set_finishedLevel(bool value);

  /// @brief Method get_isTerminating addr 0x20ff8bc size 0x48 virtual false final false
  inline bool get_isTerminating();

  /// @brief Method set_isTerminating addr 0x20ff904 size 0x58 virtual false final false
  inline void set_isTerminating(bool value);

  static inline ::GlobalNamespace::MockPlayer* New_ctor(::GlobalNamespace::MockPlayerSettings* settings, bool isLocalPlayer);

  /// @brief Method .ctor addr 0x20ff95c size 0xb8 virtual false final false
  inline void _ctor(::GlobalNamespace::MockPlayerSettings* settings, bool isLocalPlayer);

  /// @brief Method Tick addr 0x20ffa14 size 0x14 virtual false final false
  inline void Tick();

  /// @brief Method SetState addr 0x20ff508 size 0x94 virtual false final false
  inline bool SetState(::StringW state, bool value);

  /// @brief Method HasState addr 0x20ff458 size 0x58 virtual true final true
  inline bool HasState(::StringW state);

  /// @brief Method Connect addr 0x20ffa28 size 0x1b20 virtual true final false
  inline void Connect(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager, ::GlobalNamespace::AvatarPartsModel* avatarPartsModel,
                      ::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel, ::GlobalNamespace::NodePoseSyncStateManager* nodePoseSyncStateManager);

  /// @brief Method Disconnect addr 0x2101b1c size 0x28 virtual true final false
  inline void Disconnect();

  /// @brief Method Unblock addr 0x2101b44 size 0x40 virtual true final true
  inline void Unblock();

  /// @brief Method SendJoinResponse addr 0x2101b84 size 0x40 virtual true final true
  inline void SendJoinResponse(bool accept);

  /// @brief Method SendInviteResponse addr 0x2101bc4 size 0x40 virtual true final true
  inline void SendInviteResponse(bool accept);

  /// @brief Method Block addr 0x2101c04 size 0x40 virtual true final true
  inline void Block();

  /// @brief Method Leave addr 0x2101c44 size 0x4 virtual true final true
  inline void Leave();

  /// @brief Method Kick addr 0x2101c48 size 0x40 virtual true final true
  inline void Kick();

  /// @brief Method Invite addr 0x2101c88 size 0x40 virtual true final true
  inline void Invite();

  /// @brief Method Join addr 0x2101cc8 size 0x40 virtual true final false
  inline void Join(::StringW password);

  /// @brief Method Join addr 0x2101d08 size 0x40 virtual true final false
  inline void Join();

  /// @brief Method SimulateFail addr 0x2101d48 size 0x40 virtual false final false
  inline void SimulateFail();

  /// @brief Method SimulateGiveUp addr 0x2101d88 size 0x3c virtual false final false
  inline void SimulateGiveUp();

  /// @brief Method SimulateReturnToMainMenu addr 0x2101dc4 size 0xa4 virtual false final false
  inline void SimulateReturnToMainMenu();

  // Ctor Parameters [CppParam { name: "", ty: "MockPlayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockPlayer(MockPlayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockPlayer(MockPlayer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockPlayer();

public:
  /// @brief Field <isMe>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____isMe_k__BackingField;

  /// @brief Field <isConnected>k__BackingField, offset: 0x11, size: 0x1, def value: None
  bool ____isConnected_k__BackingField;

  /// @brief Field <multiplayerAvatarData>k__BackingField, offset: 0x18, size: 0x70, def value: None
  ::GlobalNamespace::MultiplayerAvatarData ____multiplayerAvatarData_k__BackingField;

  /// @brief Field <isConnectionOwner>k__BackingField, offset: 0x88, size: 0x1, def value: None
  bool ____isConnectionOwner_k__BackingField;

  /// @brief Field <isKicked>k__BackingField, offset: 0x89, size: 0x1, def value: None
  bool ____isKicked_k__BackingField;

  /// @brief Field <currentPartySize>k__BackingField, offset: 0x8c, size: 0x4, def value: None
  int32_t ____currentPartySize_k__BackingField;

  /// @brief Field <selectionMask>k__BackingField, offset: 0x90, size: 0x18, def value: None
  ::GlobalNamespace::BeatmapLevelSelectionMask ____selectionMask_k__BackingField;

  /// @brief Field <configuration>k__BackingField, offset: 0xa8, size: 0x18, def value: None
  ::GlobalNamespace::GameplayServerConfiguration ____configuration_k__BackingField;

  /// @brief Field <isMyPartyOwner>k__BackingField, offset: 0xc0, size: 0x1, def value: None
  bool ____isMyPartyOwner_k__BackingField;

  /// @brief Field <requiresPassword>k__BackingField, offset: 0xc1, size: 0x1, def value: None
  bool ____requiresPassword_k__BackingField;

  /// @brief Field <isWaitingOnJoin>k__BackingField, offset: 0xc2, size: 0x1, def value: None
  bool ____isWaitingOnJoin_k__BackingField;

  /// @brief Field <canInvite>k__BackingField, offset: 0xc3, size: 0x1, def value: None
  bool ____canInvite_k__BackingField;

  /// @brief Field <isWaitingOnInvite>k__BackingField, offset: 0xc4, size: 0x1, def value: None
  bool ____isWaitingOnInvite_k__BackingField;

  /// @brief Field <canKick>k__BackingField, offset: 0xc5, size: 0x1, def value: None
  bool ____canKick_k__BackingField;

  /// @brief Field <canLeave>k__BackingField, offset: 0xc6, size: 0x1, def value: None
  bool ____canLeave_k__BackingField;

  /// @brief Field <canBlock>k__BackingField, offset: 0xc7, size: 0x1, def value: None
  bool ____canBlock_k__BackingField;

  /// @brief Field <canUnblock>k__BackingField, offset: 0xc8, size: 0x1, def value: None
  bool ____canUnblock_k__BackingField;

  /// @brief Field _isReady, offset: 0xc9, size: 0x1, def value: None
  bool ____isReady;

  /// @brief Field _playerState, offset: 0xd0, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ____playerState;

  /// @brief Field _settings, offset: 0xd8, size: 0x8, def value: None
  ::GlobalNamespace::MockPlayerSettings* ____settings;

  /// @brief Field _fsm, offset: 0xe0, size: 0x8, def value: None
  ::GlobalNamespace::MockPlayerFiniteStateMachine* ____fsm;

  /// @brief Field _gameplayRpcManager, offset: 0xe8, size: 0x8, def value: None
  ::GlobalNamespace::IGameplayRpcManager* ____gameplayRpcManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockPlayer, 0xf0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayer, ____isMe_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayer, ____isConnected_k__BackingField) == 0x11, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayer, ____multiplayerAvatarData_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayer, ____isConnectionOwner_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayer, ____isKicked_k__BackingField) == 0x89, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayer, ____currentPartySize_k__BackingField) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayer, ____selectionMask_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayer, ____configuration_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayer, ____isMyPartyOwner_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayer, ____requiresPassword_k__BackingField) == 0xc1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayer, ____isWaitingOnJoin_k__BackingField) == 0xc2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayer, ____canInvite_k__BackingField) == 0xc3, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayer, ____isWaitingOnInvite_k__BackingField) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayer, ____canKick_k__BackingField) == 0xc5, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayer, ____canLeave_k__BackingField) == 0xc6, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayer, ____canBlock_k__BackingField) == 0xc7, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayer, ____canUnblock_k__BackingField) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayer, ____isReady) == 0xc9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayer, ____playerState) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayer, ____settings) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayer, ____fsm) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayer, ____gameplayRpcManager) == 0xe8, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockPlayer*, "", "MockPlayer");
