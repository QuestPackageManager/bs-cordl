#pragma once
// IWYU pragma private; include "GlobalNamespace/ConnectedPlayerManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerStateHash_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConnectedPlayerManager)
namespace BGNet::Core {
struct DeliveryMethod;
}
namespace BGNet::Core {
class ITaskUtility;
}
namespace BGNet::Core {
class ITimeProvider;
}
namespace GlobalNamespace {
class ByteArrayNetSerializable;
}
namespace GlobalNamespace {
class ConnectedPlayerManager_ConnectedPlayer;
}
namespace GlobalNamespace {
struct ConnectedPlayerManager_InternalMessageType;
}
namespace GlobalNamespace {
class ConnectedPlayerManager_KickPlayerPacket;
}
namespace GlobalNamespace {
struct ConnectedPlayerManager_MessageType;
}
namespace GlobalNamespace {
class ConnectedPlayerManager_PingPacket;
}
namespace GlobalNamespace {
class ConnectedPlayerManager_PlayerAvatarPacket;
}
namespace GlobalNamespace {
class ConnectedPlayerManager_PlayerConnectedPacket;
}
namespace GlobalNamespace {
class ConnectedPlayerManager_PlayerDisconnectedPacket;
}
namespace GlobalNamespace {
class ConnectedPlayerManager_PlayerIdentityPacket;
}
namespace GlobalNamespace {
class ConnectedPlayerManager_PlayerSortOrderPacket;
}
namespace GlobalNamespace {
class ConnectedPlayerManager_PlayerStatePacket;
}
namespace GlobalNamespace {
class ConnectedPlayerManager_PongPacket;
}
namespace GlobalNamespace {
class ConnectedPlayerManager_SyncTimePacket;
}
namespace GlobalNamespace {
struct ConnectedPlayerManager__InitializePlayerEncryption_d__132;
}
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace GlobalNamespace {
class EncryptionUtility_IEncryptionState;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class IConnectionManager;
}
namespace GlobalNamespace {
class IConnection;
}
namespace GlobalNamespace {
class IDiffieHellmanKeyPair;
}
namespace GlobalNamespace {
template <typename TData> class INetworkPacketSubSerializer_1;
}
namespace GlobalNamespace {
class LongRollingAverage;
}
namespace GlobalNamespace {
struct MultiplayerAvatarsData;
}
namespace GlobalNamespace {
template <typename TType, typename TData> class NetworkPacketSerializer_2;
}
namespace GlobalNamespace {
template <typename T> class PacketPool_1;
}
namespace GlobalNamespace {
struct PlayerStateHash;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
struct ConnectedPlayerManager_InternalMessageType;
}
namespace GlobalNamespace {
struct ConnectedPlayerManager_MessageType;
}
namespace GlobalNamespace {
class ConnectedPlayerManager;
}
namespace GlobalNamespace {
class ConnectedPlayerManager_ConnectedPlayer;
}
namespace GlobalNamespace {
class ConnectedPlayerManager_KickPlayerPacket;
}
namespace GlobalNamespace {
class ConnectedPlayerManager_PingPacket;
}
namespace GlobalNamespace {
class ConnectedPlayerManager_PlayerAvatarPacket;
}
namespace GlobalNamespace {
class ConnectedPlayerManager_PlayerConnectedPacket;
}
namespace GlobalNamespace {
class ConnectedPlayerManager_PlayerDisconnectedPacket;
}
namespace GlobalNamespace {
class ConnectedPlayerManager_PlayerIdentityPacket;
}
namespace GlobalNamespace {
class ConnectedPlayerManager_PlayerSortOrderPacket;
}
namespace GlobalNamespace {
class ConnectedPlayerManager_PlayerStatePacket;
}
namespace GlobalNamespace {
class ConnectedPlayerManager_PongPacket;
}
namespace GlobalNamespace {
class ConnectedPlayerManager_SyncTimePacket;
}
namespace GlobalNamespace {
struct ConnectedPlayerManager__InitializePlayerEncryption_d__132;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ConnectedPlayerManager_InternalMessageType);
MARK_VAL_T(::GlobalNamespace::ConnectedPlayerManager_MessageType);
MARK_REF_PTR_T(::GlobalNamespace::ConnectedPlayerManager);
MARK_REF_PTR_T(::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer);
MARK_REF_PTR_T(::GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket);
MARK_REF_PTR_T(::GlobalNamespace::ConnectedPlayerManager_PingPacket);
MARK_REF_PTR_T(::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket);
MARK_REF_PTR_T(::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket);
MARK_REF_PTR_T(::GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket);
MARK_REF_PTR_T(::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket);
MARK_REF_PTR_T(::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket);
MARK_REF_PTR_T(::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket);
MARK_REF_PTR_T(::GlobalNamespace::ConnectedPlayerManager_PongPacket);
MARK_REF_PTR_T(::GlobalNamespace::ConnectedPlayerManager_SyncTimePacket);
MARK_VAL_T(::GlobalNamespace::ConnectedPlayerManager__InitializePlayerEncryption_d__132);
// Dependencies DisconnectedReason, IConnectedPlayer, MultiplayerAvatarsData, PlayerStateHash, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ConnectedPlayerManager/ConnectedPlayer
class CORDL_TYPE ConnectedPlayerManager_ConnectedPlayer : public ::System::Object {
public:
  // Declarations
  /// @brief Field _connection, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__connection, put = __cordl_internal_set__connection)) ::GlobalNamespace::IConnection* _connection;

  /// @brief Field _connectionId, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__connectionId, put = __cordl_internal_set__connectionId)) uint8_t _connectionId;

  /// @brief Field _disconnectedReason, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__disconnectedReason, put = __cordl_internal_set__disconnectedReason)) ::GlobalNamespace::DisconnectedReason _disconnectedReason;

  /// @brief Field _encryptionState, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__encryptionState, put = __cordl_internal_set__encryptionState)) ::GlobalNamespace::EncryptionUtility_IEncryptionState* _encryptionState;

  /// @brief Field _isConnected, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__isConnected, put = __cordl_internal_set__isConnected)) bool _isConnected;

  /// @brief Field _isConnectionOwner, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get__isConnectionOwner, put = __cordl_internal_set__isConnectionOwner)) bool _isConnectionOwner;

  /// @brief Field _isKicked, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__isKicked, put = __cordl_internal_set__isKicked)) bool _isKicked;

  /// @brief Field _isMe, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__isMe, put = __cordl_internal_set__isMe)) bool _isMe;

  /// @brief Field _latency, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__latency, put = __cordl_internal_set__latency)) ::GlobalNamespace::LongRollingAverage* _latency;

  /// @brief Field _manager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__manager, put = __cordl_internal_set__manager)) ::GlobalNamespace::ConnectedPlayerManager* _manager;

  /// @brief Field _parent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__parent, put = __cordl_internal_set__parent)) ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* _parent;

  /// @brief Field _playerAvatars, offset 0x68, size 0x18
  __declspec(property(get = __cordl_internal_get__playerAvatars, put = __cordl_internal_set__playerAvatars)) ::GlobalNamespace::MultiplayerAvatarsData _playerAvatars;

  /// @brief Field _playerState, offset 0x58, size 0x10
  __declspec(property(get = __cordl_internal_get__playerState, put = __cordl_internal_set__playerState)) ::GlobalNamespace::PlayerStateHash _playerState;

  /// @brief Field _publicEncryptionKey, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__publicEncryptionKey, put = __cordl_internal_set__publicEncryptionKey)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _publicEncryptionKey;

  /// @brief Field _random, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__random, put = __cordl_internal_set__random)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _random;

  /// @brief Field _remoteConnectionId, offset 0x41, size 0x1
  __declspec(property(get = __cordl_internal_get__remoteConnectionId, put = __cordl_internal_set__remoteConnectionId)) uint8_t _remoteConnectionId;

  /// @brief Field _sortIndex, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__sortIndex, put = __cordl_internal_set__sortIndex)) int32_t _sortIndex;

  /// @brief Field _userId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__userId, put = __cordl_internal_set__userId)) ::StringW _userId;

  /// @brief Field _userName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__userName, put = __cordl_internal_set__userName)) ::StringW _userName;

  __declspec(property(get = get_connection)) ::GlobalNamespace::IConnection* connection;

  __declspec(property(get = get_connectionId)) uint8_t connectionId;

  __declspec(property(get = get_currentLatency)) int64_t currentLatency;

  __declspec(property(get = get_disconnectedReason)) ::GlobalNamespace::DisconnectedReason disconnectedReason;

  __declspec(property(get = get_encryptionState)) ::GlobalNamespace::EncryptionUtility_IEncryptionState* encryptionState;

  __declspec(property(get = get_hasValidLatency)) bool hasValidLatency;

  __declspec(property(get = get_isConnected)) bool isConnected;

  __declspec(property(get = get_isConnectionOwner)) bool isConnectionOwner;

  __declspec(property(get = get_isDirectConnection)) bool isDirectConnection;

  __declspec(property(get = get_isKicked)) bool isKicked;

  __declspec(property(get = get_isMe)) bool isMe;

  __declspec(property(get = get_multiplayerAvatarsData, put = set_multiplayerAvatarsData)) ::GlobalNamespace::MultiplayerAvatarsData multiplayerAvatarsData;

  __declspec(property(get = get_offsetSyncTime)) int64_t offsetSyncTime;

  __declspec(property(get = get_publicEncryptionKey)) ::ArrayW<uint8_t, ::Array<uint8_t>*> publicEncryptionKey;

  __declspec(property(get = get_random)) ::ArrayW<uint8_t, ::Array<uint8_t>*> random;

  __declspec(property(get = get_remoteConnectionId)) uint8_t remoteConnectionId;

  __declspec(property(get = get_sortIndex)) int32_t sortIndex;

  __declspec(property(get = get_userId)) ::StringW userId;

  __declspec(property(get = get_userName)) ::StringW userName;

  /// @brief Convert operator to "::GlobalNamespace::IConnectedPlayer"
  constexpr operator ::GlobalNamespace::IConnectedPlayer*() noexcept;

  /// @brief Method CreateDirectlyConnectedPlayer, addr 0x22bf3cc, size 0x1dc, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* CreateDirectlyConnectedPlayer(::GlobalNamespace::ConnectedPlayerManager* manager, uint8_t connectionId,
                                                                                                         ::GlobalNamespace::IConnection* connection);

  /// @brief Method CreateLocalPlayer, addr 0x22bf2ac, size 0xb8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* CreateLocalPlayer(::GlobalNamespace::ConnectedPlayerManager* manager, ::StringW userId, ::StringW userName,
                                                                                             bool isConnectionOwner, ::ArrayW<uint8_t, ::Array<uint8_t>*> publicEncryptionKey,
                                                                                             ::ArrayW<uint8_t, ::Array<uint8_t>*> random);

  /// @brief Method CreateRemoteConnectedPlayer, addr 0x22c00a8, size 0xc4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* CreateRemoteConnectedPlayer(::GlobalNamespace::ConnectedPlayerManager* manager, uint8_t connectionId,
                                                                                                       ::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket* packet,
                                                                                                       ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* parent);

  /// @brief Method Disconnect, addr 0x22bafac, size 0x148, virtual false, abstract: false, final false
  inline void Disconnect(::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method GetPlayerAvatarPacket, addr 0x22bf0a8, size 0x80, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket* GetPlayerAvatarPacket();

  /// @brief Method GetPlayerConnectedPacket, addr 0x22bb6d4, size 0x70, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket* GetPlayerConnectedPacket();

  /// @brief Method GetPlayerIdentityPacket, addr 0x22bb990, size 0x90, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket* GetPlayerIdentityPacket();

  /// @brief Method GetPlayerSortOrderPacket, addr 0x22bb928, size 0x68, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket* GetPlayerSortOrderPacket();

  /// @brief Method GetPlayerStatePacket, addr 0x22befb4, size 0x60, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket* GetPlayerStatePacket();

  /// @brief Method HasState, addr 0x22c1398, size 0xc, virtual true, abstract: false, final true
  inline bool HasState(::StringW state);

  static inline ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* New_ctor(::GlobalNamespace::ConnectedPlayerManager* manager, uint8_t connectionId, uint8_t remoteConnectionId,
                                                                                    ::GlobalNamespace::IConnection* connection, ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* parent,
                                                                                    ::StringW userId, ::StringW userName, bool isConnectionOwner, bool isMe,
                                                                                    ::ArrayW<uint8_t, ::Array<uint8_t>*> publicEncryptionKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> random);

  /// @brief Method SetEncryptionState, addr 0x22c1390, size 0x8, virtual false, abstract: false, final false
  inline void SetEncryptionState(::GlobalNamespace::EncryptionUtility_IEncryptionState* encryptionState);

  /// @brief Method SetKicked, addr 0x22beec8, size 0xc, virtual false, abstract: false, final false
  inline void SetKicked();

  /// @brief Method SetPlayerState, addr 0x22c13a4, size 0x8, virtual false, abstract: false, final false
  inline void SetPlayerState(::GlobalNamespace::PlayerStateHash playerState);

  /// @brief Method ToString, addr 0x22c13ac, size 0x17c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method UpdateAvatar, addr 0x22c05fc, size 0x24, virtual false, abstract: false, final false
  inline void UpdateAvatar(::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket* packet);

  /// @brief Method UpdateIdentity, addr 0x22c02f4, size 0x64, virtual false, abstract: false, final false
  inline void UpdateIdentity(::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket* packet);

  /// @brief Method UpdateLatency, addr 0x22c0fd8, size 0x1c, virtual false, abstract: false, final false
  inline void UpdateLatency(int64_t latency);

  /// @brief Method UpdateSortIndex, addr 0x22bf210, size 0x1c, virtual false, abstract: false, final false
  inline bool UpdateSortIndex(int32_t index);

  /// @brief Method UpdateState, addr 0x22c04bc, size 0x1c, virtual false, abstract: false, final false
  inline void UpdateState(::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket* packet);

  constexpr ::GlobalNamespace::IConnection* const& __cordl_internal_get__connection() const;

  constexpr ::GlobalNamespace::IConnection*& __cordl_internal_get__connection();

  constexpr uint8_t const& __cordl_internal_get__connectionId() const;

  constexpr uint8_t& __cordl_internal_get__connectionId();

  constexpr ::GlobalNamespace::DisconnectedReason const& __cordl_internal_get__disconnectedReason() const;

  constexpr ::GlobalNamespace::DisconnectedReason& __cordl_internal_get__disconnectedReason();

  constexpr ::GlobalNamespace::EncryptionUtility_IEncryptionState* const& __cordl_internal_get__encryptionState() const;

  constexpr ::GlobalNamespace::EncryptionUtility_IEncryptionState*& __cordl_internal_get__encryptionState();

  constexpr bool const& __cordl_internal_get__isConnected() const;

  constexpr bool& __cordl_internal_get__isConnected();

  constexpr bool const& __cordl_internal_get__isConnectionOwner() const;

  constexpr bool& __cordl_internal_get__isConnectionOwner();

  constexpr bool const& __cordl_internal_get__isKicked() const;

  constexpr bool& __cordl_internal_get__isKicked();

  constexpr bool const& __cordl_internal_get__isMe() const;

  constexpr bool& __cordl_internal_get__isMe();

  constexpr ::GlobalNamespace::LongRollingAverage* const& __cordl_internal_get__latency() const;

  constexpr ::GlobalNamespace::LongRollingAverage*& __cordl_internal_get__latency();

  constexpr ::GlobalNamespace::ConnectedPlayerManager* const& __cordl_internal_get__manager() const;

  constexpr ::GlobalNamespace::ConnectedPlayerManager*& __cordl_internal_get__manager();

  constexpr ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* const& __cordl_internal_get__parent() const;

  constexpr ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*& __cordl_internal_get__parent();

  constexpr ::GlobalNamespace::MultiplayerAvatarsData const& __cordl_internal_get__playerAvatars() const;

  constexpr ::GlobalNamespace::MultiplayerAvatarsData& __cordl_internal_get__playerAvatars();

  constexpr ::GlobalNamespace::PlayerStateHash const& __cordl_internal_get__playerState() const;

  constexpr ::GlobalNamespace::PlayerStateHash& __cordl_internal_get__playerState();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__publicEncryptionKey() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__publicEncryptionKey();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__random() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__random();

  constexpr uint8_t const& __cordl_internal_get__remoteConnectionId() const;

  constexpr uint8_t& __cordl_internal_get__remoteConnectionId();

  constexpr int32_t const& __cordl_internal_get__sortIndex() const;

  constexpr int32_t& __cordl_internal_get__sortIndex();

  constexpr ::StringW const& __cordl_internal_get__userId() const;

  constexpr ::StringW& __cordl_internal_get__userId();

  constexpr ::StringW const& __cordl_internal_get__userName() const;

  constexpr ::StringW& __cordl_internal_get__userName();

  constexpr void __cordl_internal_set__connection(::GlobalNamespace::IConnection* value);

  constexpr void __cordl_internal_set__connectionId(uint8_t value);

  constexpr void __cordl_internal_set__disconnectedReason(::GlobalNamespace::DisconnectedReason value);

  constexpr void __cordl_internal_set__encryptionState(::GlobalNamespace::EncryptionUtility_IEncryptionState* value);

  constexpr void __cordl_internal_set__isConnected(bool value);

  constexpr void __cordl_internal_set__isConnectionOwner(bool value);

  constexpr void __cordl_internal_set__isKicked(bool value);

  constexpr void __cordl_internal_set__isMe(bool value);

  constexpr void __cordl_internal_set__latency(::GlobalNamespace::LongRollingAverage* value);

  constexpr void __cordl_internal_set__manager(::GlobalNamespace::ConnectedPlayerManager* value);

  constexpr void __cordl_internal_set__parent(::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* value);

  constexpr void __cordl_internal_set__playerAvatars(::GlobalNamespace::MultiplayerAvatarsData value);

  constexpr void __cordl_internal_set__playerState(::GlobalNamespace::PlayerStateHash value);

  constexpr void __cordl_internal_set__publicEncryptionKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__random(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__remoteConnectionId(uint8_t value);

  constexpr void __cordl_internal_set__sortIndex(int32_t value);

  constexpr void __cordl_internal_set__userId(::StringW value);

  constexpr void __cordl_internal_set__userName(::StringW value);

  /// @brief Method .ctor, addr 0x22c1200, size 0xfc, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::ConnectedPlayerManager* manager, uint8_t connectionId, uint8_t remoteConnectionId, ::GlobalNamespace::IConnection* connection,
                    ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* parent, ::StringW userId, ::StringW userName, bool isConnectionOwner, bool isMe,
                    ::ArrayW<uint8_t, ::Array<uint8_t>*> publicEncryptionKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> random);

  /// @brief Method get_connection, addr 0x22c1080, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IConnection* get_connection();

  /// @brief Method get_connectionId, addr 0x22c1088, size 0x8, virtual false, abstract: false, final false
  inline uint8_t get_connectionId();

  /// @brief Method get_currentLatency, addr 0x22c1108, size 0x6c, virtual true, abstract: false, final true
  inline int64_t get_currentLatency();

  /// @brief Method get_disconnectedReason, addr 0x22c10b0, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::DisconnectedReason get_disconnectedReason();

  /// @brief Method get_encryptionState, addr 0x22c11f8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::EncryptionUtility_IEncryptionState* get_encryptionState();

  /// @brief Method get_hasValidLatency, addr 0x22c10d8, size 0x30, virtual true, abstract: false, final true
  inline bool get_hasValidLatency();

  /// @brief Method get_isConnected, addr 0x22c1098, size 0x8, virtual true, abstract: false, final true
  inline bool get_isConnected();

  /// @brief Method get_isConnectionOwner, addr 0x22c10a0, size 0x8, virtual true, abstract: false, final true
  inline bool get_isConnectionOwner();

  /// @brief Method get_isDirectConnection, addr 0x22bb838, size 0x10, virtual false, abstract: false, final false
  inline bool get_isDirectConnection();

  /// @brief Method get_isKicked, addr 0x22c10a8, size 0x8, virtual true, abstract: false, final true
  inline bool get_isKicked();

  /// @brief Method get_isMe, addr 0x22c10d0, size 0x8, virtual true, abstract: false, final true
  inline bool get_isMe();

  /// @brief Method get_multiplayerAvatarsData, addr 0x22c11c0, size 0x14, virtual true, abstract: false, final true
  inline ::GlobalNamespace::MultiplayerAvatarsData get_multiplayerAvatarsData();

  /// @brief Method get_offsetSyncTime, addr 0x22c1174, size 0x4c, virtual true, abstract: false, final true
  inline int64_t get_offsetSyncTime();

  /// @brief Method get_publicEncryptionKey, addr 0x22c11e8, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_publicEncryptionKey();

  /// @brief Method get_random, addr 0x22c11f0, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_random();

  /// @brief Method get_remoteConnectionId, addr 0x22c1090, size 0x8, virtual false, abstract: false, final false
  inline uint8_t get_remoteConnectionId();

  /// @brief Method get_sortIndex, addr 0x22c10b8, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_sortIndex();

  /// @brief Method get_userId, addr 0x22c10c0, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_userId();

  /// @brief Method get_userName, addr 0x22c10c8, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_userName();

  /// @brief Convert to "::GlobalNamespace::IConnectedPlayer"
  constexpr ::GlobalNamespace::IConnectedPlayer* i___GlobalNamespace__IConnectedPlayer() noexcept;

  /// @brief Method set_multiplayerAvatarsData, addr 0x22c11d4, size 0x14, virtual false, abstract: false, final false
  inline void set_multiplayerAvatarsData(::GlobalNamespace::MultiplayerAvatarsData value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectedPlayerManager_ConnectedPlayer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerManager_ConnectedPlayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConnectedPlayerManager_ConnectedPlayer(ConnectedPlayerManager_ConnectedPlayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerManager_ConnectedPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConnectedPlayerManager_ConnectedPlayer(ConnectedPlayerManager_ConnectedPlayer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14699 };

  /// @brief Field kFixedSyncTimeOffset offset 0xffffffff size 0x8
  static constexpr int64_t kFixedSyncTimeOffset{ static_cast<int64_t>(0x21) };

  /// @brief Field _userId, offset: 0x10, size: 0x8, def value: None
  ::StringW ____userId;

  /// @brief Field _userName, offset: 0x18, size: 0x8, def value: None
  ::StringW ____userName;

  /// @brief Field _isMe, offset: 0x20, size: 0x1, def value: None
  bool ____isMe;

  /// @brief Field _isConnectionOwner, offset: 0x21, size: 0x1, def value: None
  bool ____isConnectionOwner;

  /// @brief Field _manager, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::ConnectedPlayerManager* ____manager;

  /// @brief Field _connection, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IConnection* ____connection;

  /// @brief Field _parent, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* ____parent;

  /// @brief Field _connectionId, offset: 0x40, size: 0x1, def value: None
  uint8_t ____connectionId;

  /// @brief Field _remoteConnectionId, offset: 0x41, size: 0x1, def value: None
  uint8_t ____remoteConnectionId;

  /// @brief Field _sortIndex, offset: 0x44, size: 0x4, def value: None
  int32_t ____sortIndex;

  /// @brief Field _isConnected, offset: 0x48, size: 0x1, def value: None
  bool ____isConnected;

  /// @brief Field _disconnectedReason, offset: 0x4c, size: 0x4, def value: None
  ::GlobalNamespace::DisconnectedReason ____disconnectedReason;

  /// @brief Field _isKicked, offset: 0x50, size: 0x1, def value: None
  bool ____isKicked;

  /// @brief Field _playerState, offset: 0x58, size: 0x10, def value: None
  ::GlobalNamespace::PlayerStateHash ____playerState;

  /// @brief Field _playerAvatars, offset: 0x68, size: 0x18, def value: None
  ::GlobalNamespace::MultiplayerAvatarsData ____playerAvatars;

  /// @brief Field _publicEncryptionKey, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____publicEncryptionKey;

  /// @brief Field _random, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____random;

  /// @brief Field _encryptionState, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::EncryptionUtility_IEncryptionState* ____encryptionState;

  /// @brief Field _latency, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::LongRollingAverage* ____latency;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer, ____userId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer, ____userName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer, ____isMe) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer, ____isConnectionOwner) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer, ____manager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer, ____connection) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer, ____parent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer, ____connectionId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer, ____remoteConnectionId) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer, ____sortIndex) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer, ____isConnected) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer, ____disconnectedReason) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer, ____isKicked) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer, ____playerState) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer, ____playerAvatars) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer, ____publicEncryptionKey) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer, ____random) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer, ____encryptionState) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer, ____latency) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer, 0xa0>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: ConnectedPlayerManager/InternalMessageType
struct CORDL_TYPE ConnectedPlayerManager_InternalMessageType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __ConnectedPlayerManager_InternalMessageType_Unwrapped
  enum struct __ConnectedPlayerManager_InternalMessageType_Unwrapped : uint8_t {
    __E_SyncTime = static_cast<uint8_t>(0x0u),
    __E_PlayerConnected = static_cast<uint8_t>(0x1u),
    __E_PlayerIdentity = static_cast<uint8_t>(0x2u),
    __E_PlayerLatencyUpdate = static_cast<uint8_t>(0x3u),
    __E_PlayerDisconnected = static_cast<uint8_t>(0x4u),
    __E_PlayerSortOrderUpdate = static_cast<uint8_t>(0x5u),
    __E_Party = static_cast<uint8_t>(0x6u),
    __E_MultiplayerSession = static_cast<uint8_t>(0x7u),
    __E_KickPlayer = static_cast<uint8_t>(0x8u),
    __E_PlayerStateUpdate = static_cast<uint8_t>(0x9u),
    __E_PlayerAvatarUpdate = static_cast<uint8_t>(0xau),
    __E_Ping = static_cast<uint8_t>(0xbu),
    __E_Pong = static_cast<uint8_t>(0xcu),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ConnectedPlayerManager_InternalMessageType_Unwrapped() const noexcept {
    return static_cast<__ConnectedPlayerManager_InternalMessageType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectedPlayerManager_InternalMessageType();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr ConnectedPlayerManager_InternalMessageType(uint8_t value__) noexcept;

  /// @brief Field KickPlayer value: U8(8)
  static ::GlobalNamespace::ConnectedPlayerManager_InternalMessageType const KickPlayer;

  /// @brief Field MultiplayerSession value: U8(7)
  static ::GlobalNamespace::ConnectedPlayerManager_InternalMessageType const MultiplayerSession;

  /// @brief Field Party value: U8(6)
  static ::GlobalNamespace::ConnectedPlayerManager_InternalMessageType const Party;

  /// @brief Field Ping value: U8(11)
  static ::GlobalNamespace::ConnectedPlayerManager_InternalMessageType const Ping;

  /// @brief Field PlayerAvatarUpdate value: U8(10)
  static ::GlobalNamespace::ConnectedPlayerManager_InternalMessageType const PlayerAvatarUpdate;

  /// @brief Field PlayerConnected value: U8(1)
  static ::GlobalNamespace::ConnectedPlayerManager_InternalMessageType const PlayerConnected;

  /// @brief Field PlayerDisconnected value: U8(4)
  static ::GlobalNamespace::ConnectedPlayerManager_InternalMessageType const PlayerDisconnected;

  /// @brief Field PlayerIdentity value: U8(2)
  static ::GlobalNamespace::ConnectedPlayerManager_InternalMessageType const PlayerIdentity;

  /// @brief Field PlayerLatencyUpdate value: U8(3)
  static ::GlobalNamespace::ConnectedPlayerManager_InternalMessageType const PlayerLatencyUpdate;

  /// @brief Field PlayerSortOrderUpdate value: U8(5)
  static ::GlobalNamespace::ConnectedPlayerManager_InternalMessageType const PlayerSortOrderUpdate;

  /// @brief Field PlayerStateUpdate value: U8(9)
  static ::GlobalNamespace::ConnectedPlayerManager_InternalMessageType const PlayerStateUpdate;

  /// @brief Field Pong value: U8(12)
  static ::GlobalNamespace::ConnectedPlayerManager_InternalMessageType const Pong;

  /// @brief Field SyncTime value: U8(0)
  static ::GlobalNamespace::ConnectedPlayerManager_InternalMessageType const SyncTime;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14700 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager_InternalMessageType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ConnectedPlayerManager_InternalMessageType, 0x1>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: ConnectedPlayerManager/MessageType
struct CORDL_TYPE ConnectedPlayerManager_MessageType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __ConnectedPlayerManager_MessageType_Unwrapped
  enum struct __ConnectedPlayerManager_MessageType_Unwrapped : uint8_t {
    __E_Party = static_cast<uint8_t>(0x6u),
    __E_MultiplayerSession = static_cast<uint8_t>(0x7u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ConnectedPlayerManager_MessageType_Unwrapped() const noexcept {
    return static_cast<__ConnectedPlayerManager_MessageType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectedPlayerManager_MessageType();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr ConnectedPlayerManager_MessageType(uint8_t value__) noexcept;

  /// @brief Field MultiplayerSession value: U8(7)
  static ::GlobalNamespace::ConnectedPlayerManager_MessageType const MultiplayerSession;

  /// @brief Field Party value: U8(6)
  static ::GlobalNamespace::ConnectedPlayerManager_MessageType const Party;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14701 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager_MessageType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ConnectedPlayerManager_MessageType, 0x1>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IPoolablePacket, LiteNetLib.Utils.INetSerializable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ConnectedPlayerManager/PlayerConnectedPacket
class CORDL_TYPE ConnectedPlayerManager_PlayerConnectedPacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field isConnectionOwner, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_isConnectionOwner, put = __cordl_internal_set_isConnectionOwner)) bool isConnectionOwner;

  /// @brief Field remoteConnectionId, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_remoteConnectionId, put = __cordl_internal_set_remoteConnectionId)) uint8_t remoteConnectionId;

  /// @brief Field userId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_userId, put = __cordl_internal_set_userId)) ::StringW userId;

  /// @brief Field userName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_userName, put = __cordl_internal_set_userName)) ::StringW userName;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Method Deserialize, addr 0x22c1588, size 0x68, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Init, addr 0x22c12fc, size 0x14, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket* Init(uint8_t connectionId, ::StringW userId, ::StringW userName, bool isConnectionOwner);

  static inline ::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket* New_ctor();

  /// @brief Method Release, addr 0x22c016c, size 0x54, virtual true, abstract: false, final true
  inline void Release();

  /// @brief Method Serialize, addr 0x22c1528, size 0x60, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  constexpr bool const& __cordl_internal_get_isConnectionOwner() const;

  constexpr bool& __cordl_internal_get_isConnectionOwner();

  constexpr uint8_t const& __cordl_internal_get_remoteConnectionId() const;

  constexpr uint8_t& __cordl_internal_get_remoteConnectionId();

  constexpr ::StringW const& __cordl_internal_get_userId() const;

  constexpr ::StringW& __cordl_internal_get_userId();

  constexpr ::StringW const& __cordl_internal_get_userName() const;

  constexpr ::StringW& __cordl_internal_get_userName();

  constexpr void __cordl_internal_set_isConnectionOwner(bool value);

  constexpr void __cordl_internal_set_remoteConnectionId(uint8_t value);

  constexpr void __cordl_internal_set_userId(::StringW value);

  constexpr void __cordl_internal_set_userName(::StringW value);

  /// @brief Method .ctor, addr 0x22c15f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_pool, addr 0x22bdee0, size 0x40, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket*>* get_pool();

  /// @brief Convert to "::GlobalNamespace::IPoolablePacket"
  constexpr ::GlobalNamespace::IPoolablePacket* i___GlobalNamespace__IPoolablePacket() noexcept;

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectedPlayerManager_PlayerConnectedPacket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerManager_PlayerConnectedPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConnectedPlayerManager_PlayerConnectedPacket(ConnectedPlayerManager_PlayerConnectedPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerManager_PlayerConnectedPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConnectedPlayerManager_PlayerConnectedPacket(ConnectedPlayerManager_PlayerConnectedPacket const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14702 };

  /// @brief Field remoteConnectionId, offset: 0x10, size: 0x1, def value: None
  uint8_t ___remoteConnectionId;

  /// @brief Field userId, offset: 0x18, size: 0x8, def value: None
  ::StringW ___userId;

  /// @brief Field userName, offset: 0x20, size: 0x8, def value: None
  ::StringW ___userName;

  /// @brief Field isConnectionOwner, offset: 0x28, size: 0x1, def value: None
  bool ___isConnectionOwner;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket, ___remoteConnectionId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket, ___userId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket, ___userName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket, ___isConnectionOwner) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IPoolablePacket, LiteNetLib.Utils.INetSerializable, MultiplayerAvatarsData, PlayerStateHash, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ConnectedPlayerManager/PlayerIdentityPacket
class CORDL_TYPE ConnectedPlayerManager_PlayerIdentityPacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field playerAvatar, offset 0x20, size 0x18
  __declspec(property(get = __cordl_internal_get_playerAvatar, put = __cordl_internal_set_playerAvatar)) ::GlobalNamespace::MultiplayerAvatarsData playerAvatar;

  /// @brief Field playerState, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_playerState, put = __cordl_internal_set_playerState)) ::GlobalNamespace::PlayerStateHash playerState;

  /// @brief Field publicEncryptionKey, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_publicEncryptionKey, put = __cordl_internal_set_publicEncryptionKey)) ::GlobalNamespace::ByteArrayNetSerializable* publicEncryptionKey;

  /// @brief Field random, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_random, put = __cordl_internal_set_random)) ::GlobalNamespace::ByteArrayNetSerializable* random;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Method Deserialize, addr 0x22c1650, size 0x80, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Init, addr 0x22c1310, size 0x58, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket* Init(::GlobalNamespace::PlayerStateHash states, ::GlobalNamespace::MultiplayerAvatarsData avatar,
                                                                              ::ArrayW<uint8_t, ::Array<uint8_t>*> random, ::ArrayW<uint8_t, ::Array<uint8_t>*> publicEncryptionKey);

  static inline ::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket* New_ctor();

  /// @brief Method Release, addr 0x22c16d0, size 0x6c, virtual true, abstract: false, final true
  inline void Release();

  /// @brief Method Serialize, addr 0x22c15f8, size 0x58, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  constexpr ::GlobalNamespace::MultiplayerAvatarsData const& __cordl_internal_get_playerAvatar() const;

  constexpr ::GlobalNamespace::MultiplayerAvatarsData& __cordl_internal_get_playerAvatar();

  constexpr ::GlobalNamespace::PlayerStateHash const& __cordl_internal_get_playerState() const;

  constexpr ::GlobalNamespace::PlayerStateHash& __cordl_internal_get_playerState();

  constexpr ::GlobalNamespace::ByteArrayNetSerializable* const& __cordl_internal_get_publicEncryptionKey() const;

  constexpr ::GlobalNamespace::ByteArrayNetSerializable*& __cordl_internal_get_publicEncryptionKey();

  constexpr ::GlobalNamespace::ByteArrayNetSerializable* const& __cordl_internal_get_random() const;

  constexpr ::GlobalNamespace::ByteArrayNetSerializable*& __cordl_internal_get_random();

  constexpr void __cordl_internal_set_playerAvatar(::GlobalNamespace::MultiplayerAvatarsData value);

  constexpr void __cordl_internal_set_playerState(::GlobalNamespace::PlayerStateHash value);

  constexpr void __cordl_internal_set_publicEncryptionKey(::GlobalNamespace::ByteArrayNetSerializable* value);

  constexpr void __cordl_internal_set_random(::GlobalNamespace::ByteArrayNetSerializable* value);

  /// @brief Method .ctor, addr 0x22c173c, size 0xe0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_pool, addr 0x22bdf20, size 0x40, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket*>* get_pool();

  /// @brief Convert to "::GlobalNamespace::IPoolablePacket"
  constexpr ::GlobalNamespace::IPoolablePacket* i___GlobalNamespace__IPoolablePacket() noexcept;

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectedPlayerManager_PlayerIdentityPacket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerManager_PlayerIdentityPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConnectedPlayerManager_PlayerIdentityPacket(ConnectedPlayerManager_PlayerIdentityPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerManager_PlayerIdentityPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConnectedPlayerManager_PlayerIdentityPacket(ConnectedPlayerManager_PlayerIdentityPacket const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14703 };

  /// @brief Field playerState, offset: 0x10, size: 0x10, def value: None
  ::GlobalNamespace::PlayerStateHash ___playerState;

  /// @brief Field playerAvatar, offset: 0x20, size: 0x18, def value: None
  ::GlobalNamespace::MultiplayerAvatarsData ___playerAvatar;

  /// @brief Field random, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::ByteArrayNetSerializable* ___random;

  /// @brief Field publicEncryptionKey, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::ByteArrayNetSerializable* ___publicEncryptionKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket, ___playerState) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket, ___playerAvatar) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket, ___random) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket, ___publicEncryptionKey) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IPoolablePacket, LiteNetLib.Utils.INetSerializable, MultiplayerAvatarsData, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ConnectedPlayerManager/PlayerAvatarPacket
class CORDL_TYPE ConnectedPlayerManager_PlayerAvatarPacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field playerAvatar, offset 0x10, size 0x18
  __declspec(property(get = __cordl_internal_get_playerAvatar, put = __cordl_internal_set_playerAvatar)) ::GlobalNamespace::MultiplayerAvatarsData playerAvatar;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Method Deserialize, addr 0x22c1828, size 0x40, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Init, addr 0x22c1370, size 0x14, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket* Init(::GlobalNamespace::MultiplayerAvatarsData avatar);

  static inline ::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket* New_ctor();

  /// @brief Method Release, addr 0x22c0620, size 0x54, virtual true, abstract: false, final true
  inline void Release();

  /// @brief Method Serialize, addr 0x22c181c, size 0xc, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  constexpr ::GlobalNamespace::MultiplayerAvatarsData const& __cordl_internal_get_playerAvatar() const;

  constexpr ::GlobalNamespace::MultiplayerAvatarsData& __cordl_internal_get_playerAvatar();

  constexpr void __cordl_internal_set_playerAvatar(::GlobalNamespace::MultiplayerAvatarsData value);

  /// @brief Method .ctor, addr 0x22c1868, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_pool, addr 0x22be060, size 0x40, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket*>* get_pool();

  /// @brief Convert to "::GlobalNamespace::IPoolablePacket"
  constexpr ::GlobalNamespace::IPoolablePacket* i___GlobalNamespace__IPoolablePacket() noexcept;

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectedPlayerManager_PlayerAvatarPacket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerManager_PlayerAvatarPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConnectedPlayerManager_PlayerAvatarPacket(ConnectedPlayerManager_PlayerAvatarPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerManager_PlayerAvatarPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConnectedPlayerManager_PlayerAvatarPacket(ConnectedPlayerManager_PlayerAvatarPacket const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14704 };

  /// @brief Field playerAvatar, offset: 0x10, size: 0x18, def value: None
  ::GlobalNamespace::MultiplayerAvatarsData ___playerAvatar;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket, ___playerAvatar) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IPoolablePacket, LiteNetLib.Utils.INetSerializable, PlayerStateHash, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ConnectedPlayerManager/PlayerStatePacket
class CORDL_TYPE ConnectedPlayerManager_PlayerStatePacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field playerState, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_playerState, put = __cordl_internal_set_playerState)) ::GlobalNamespace::PlayerStateHash playerState;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Method Deserialize, addr 0x22c187c, size 0x20, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Init, addr 0x22c1368, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket* Init(::GlobalNamespace::PlayerStateHash states);

  static inline ::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket* New_ctor();

  /// @brief Method Release, addr 0x22c04d8, size 0x54, virtual true, abstract: false, final true
  inline void Release();

  /// @brief Method Serialize, addr 0x22c1870, size 0xc, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  constexpr ::GlobalNamespace::PlayerStateHash const& __cordl_internal_get_playerState() const;

  constexpr ::GlobalNamespace::PlayerStateHash& __cordl_internal_get_playerState();

  constexpr void __cordl_internal_set_playerState(::GlobalNamespace::PlayerStateHash value);

  /// @brief Method .ctor, addr 0x22c189c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_pool, addr 0x22be0a0, size 0x40, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket*>* get_pool();

  /// @brief Convert to "::GlobalNamespace::IPoolablePacket"
  constexpr ::GlobalNamespace::IPoolablePacket* i___GlobalNamespace__IPoolablePacket() noexcept;

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectedPlayerManager_PlayerStatePacket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerManager_PlayerStatePacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConnectedPlayerManager_PlayerStatePacket(ConnectedPlayerManager_PlayerStatePacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerManager_PlayerStatePacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConnectedPlayerManager_PlayerStatePacket(ConnectedPlayerManager_PlayerStatePacket const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14705 };

  /// @brief Field playerState, offset: 0x10, size: 0x10, def value: None
  ::GlobalNamespace::PlayerStateHash ___playerState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket, ___playerState) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IPoolablePacket, LiteNetLib.Utils.INetSerializable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ConnectedPlayerManager/PlayerSortOrderPacket
class CORDL_TYPE ConnectedPlayerManager_PlayerSortOrderPacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field sortIndex, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_sortIndex, put = __cordl_internal_set_sortIndex)) int32_t sortIndex;

  /// @brief Field userId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_userId, put = __cordl_internal_set_userId)) ::StringW userId;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Method Deserialize, addr 0x22c18e4, size 0x44, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Init, addr 0x22c1384, size 0xc, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket* Init(::StringW userId, int32_t sortIndex);

  static inline ::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket* New_ctor();

  /// @brief Method Release, addr 0x22c09d0, size 0x54, virtual true, abstract: false, final true
  inline void Release();

  /// @brief Method Serialize, addr 0x22c18a4, size 0x40, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  constexpr int32_t const& __cordl_internal_get_sortIndex() const;

  constexpr int32_t& __cordl_internal_get_sortIndex();

  constexpr ::StringW const& __cordl_internal_get_userId() const;

  constexpr ::StringW& __cordl_internal_get_userId();

  constexpr void __cordl_internal_set_sortIndex(int32_t value);

  constexpr void __cordl_internal_set_userId(::StringW value);

  /// @brief Method .ctor, addr 0x22c1928, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_pool, addr 0x22bdfa0, size 0x40, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket*>* get_pool();

  /// @brief Convert to "::GlobalNamespace::IPoolablePacket"
  constexpr ::GlobalNamespace::IPoolablePacket* i___GlobalNamespace__IPoolablePacket() noexcept;

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectedPlayerManager_PlayerSortOrderPacket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerManager_PlayerSortOrderPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConnectedPlayerManager_PlayerSortOrderPacket(ConnectedPlayerManager_PlayerSortOrderPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerManager_PlayerSortOrderPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConnectedPlayerManager_PlayerSortOrderPacket(ConnectedPlayerManager_PlayerSortOrderPacket const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14706 };

  /// @brief Field userId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___userId;

  /// @brief Field sortIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ___sortIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket, ___userId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket, ___sortIndex) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies DisconnectedReason, IPoolablePacket, LiteNetLib.Utils.INetSerializable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ConnectedPlayerManager/PlayerDisconnectedPacket
class CORDL_TYPE ConnectedPlayerManager_PlayerDisconnectedPacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field disconnectedReason, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_disconnectedReason, put = __cordl_internal_set_disconnectedReason)) ::GlobalNamespace::DisconnectedReason disconnectedReason;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Method Deserialize, addr 0x22c1944, size 0x20, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Init, addr 0x22bf6c0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket* Init(::GlobalNamespace::DisconnectedReason disconnectedReason);

  static inline ::GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket* New_ctor();

  /// @brief Method Release, addr 0x22c071c, size 0x54, virtual true, abstract: false, final true
  inline void Release();

  /// @brief Method Serialize, addr 0x22c1930, size 0x14, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  constexpr ::GlobalNamespace::DisconnectedReason const& __cordl_internal_get_disconnectedReason() const;

  constexpr ::GlobalNamespace::DisconnectedReason& __cordl_internal_get_disconnectedReason();

  constexpr void __cordl_internal_set_disconnectedReason(::GlobalNamespace::DisconnectedReason value);

  /// @brief Method .ctor, addr 0x22c1964, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_pool, addr 0x22bdf60, size 0x40, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket*>* get_pool();

  /// @brief Convert to "::GlobalNamespace::IPoolablePacket"
  constexpr ::GlobalNamespace::IPoolablePacket* i___GlobalNamespace__IPoolablePacket() noexcept;

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectedPlayerManager_PlayerDisconnectedPacket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerManager_PlayerDisconnectedPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConnectedPlayerManager_PlayerDisconnectedPacket(ConnectedPlayerManager_PlayerDisconnectedPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerManager_PlayerDisconnectedPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConnectedPlayerManager_PlayerDisconnectedPacket(ConnectedPlayerManager_PlayerDisconnectedPacket const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14707 };

  /// @brief Field disconnectedReason, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::DisconnectedReason ___disconnectedReason;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket, ___disconnectedReason) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies DisconnectedReason, IPoolablePacket, LiteNetLib.Utils.INetSerializable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ConnectedPlayerManager/KickPlayerPacket
class CORDL_TYPE ConnectedPlayerManager_KickPlayerPacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field disconnectedReason, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_disconnectedReason, put = __cordl_internal_set_disconnectedReason)) ::GlobalNamespace::DisconnectedReason disconnectedReason;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Method Deserialize, addr 0x22c1988, size 0x20, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Init, addr 0x22beec0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket* Init(::GlobalNamespace::DisconnectedReason disconnectedReason);

  static inline ::GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket* New_ctor();

  /// @brief Method Release, addr 0x22c0850, size 0x54, virtual true, abstract: false, final true
  inline void Release();

  /// @brief Method Serialize, addr 0x22c1974, size 0x14, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  constexpr ::GlobalNamespace::DisconnectedReason const& __cordl_internal_get_disconnectedReason() const;

  constexpr ::GlobalNamespace::DisconnectedReason& __cordl_internal_get_disconnectedReason();

  constexpr void __cordl_internal_set_disconnectedReason(::GlobalNamespace::DisconnectedReason value);

  /// @brief Method .ctor, addr 0x22c19a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_pool, addr 0x22be020, size 0x40, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket*>* get_pool();

  /// @brief Convert to "::GlobalNamespace::IPoolablePacket"
  constexpr ::GlobalNamespace::IPoolablePacket* i___GlobalNamespace__IPoolablePacket() noexcept;

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectedPlayerManager_KickPlayerPacket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerManager_KickPlayerPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConnectedPlayerManager_KickPlayerPacket(ConnectedPlayerManager_KickPlayerPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerManager_KickPlayerPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConnectedPlayerManager_KickPlayerPacket(ConnectedPlayerManager_KickPlayerPacket const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14708 };

  /// @brief Field disconnectedReason, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::DisconnectedReason ___disconnectedReason;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket, ___disconnectedReason) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IPoolablePacket, LiteNetLib.Utils.INetSerializable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ConnectedPlayerManager/SyncTimePacket
class CORDL_TYPE ConnectedPlayerManager_SyncTimePacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field syncTime, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_syncTime, put = __cordl_internal_set_syncTime)) int64_t syncTime;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Method Deserialize, addr 0x22c19c4, size 0x20, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Init, addr 0x22c0e08, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ConnectedPlayerManager_SyncTimePacket* Init(int64_t syncTime);

  static inline ::GlobalNamespace::ConnectedPlayerManager_SyncTimePacket* New_ctor();

  /// @brief Method Release, addr 0x22c0b64, size 0x54, virtual true, abstract: false, final true
  inline void Release();

  /// @brief Method Serialize, addr 0x22c19b0, size 0x14, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  constexpr int64_t const& __cordl_internal_get_syncTime() const;

  constexpr int64_t& __cordl_internal_get_syncTime();

  constexpr void __cordl_internal_set_syncTime(int64_t value);

  /// @brief Method .ctor, addr 0x22c19e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_pool, addr 0x22bdfe0, size 0x40, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::ConnectedPlayerManager_SyncTimePacket*>* get_pool();

  /// @brief Convert to "::GlobalNamespace::IPoolablePacket"
  constexpr ::GlobalNamespace::IPoolablePacket* i___GlobalNamespace__IPoolablePacket() noexcept;

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectedPlayerManager_SyncTimePacket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerManager_SyncTimePacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConnectedPlayerManager_SyncTimePacket(ConnectedPlayerManager_SyncTimePacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerManager_SyncTimePacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConnectedPlayerManager_SyncTimePacket(ConnectedPlayerManager_SyncTimePacket const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14709 };

  /// @brief Field syncTime, offset: 0x10, size: 0x8, def value: None
  int64_t ___syncTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager_SyncTimePacket, ___syncTime) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ConnectedPlayerManager_SyncTimePacket, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IPoolablePacket, LiteNetLib.Utils.INetSerializable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ConnectedPlayerManager/PingPacket
class CORDL_TYPE ConnectedPlayerManager_PingPacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field pingTime, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_pingTime, put = __cordl_internal_set_pingTime)) int64_t pingTime;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Method Deserialize, addr 0x22c1a00, size 0x20, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Init, addr 0x22bb5e8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ConnectedPlayerManager_PingPacket* Init(int64_t pingTime);

  static inline ::GlobalNamespace::ConnectedPlayerManager_PingPacket* New_ctor();

  /// @brief Method Release, addr 0x22c0dac, size 0x54, virtual true, abstract: false, final true
  inline void Release();

  /// @brief Method Serialize, addr 0x22c19ec, size 0x14, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  constexpr int64_t const& __cordl_internal_get_pingTime() const;

  constexpr int64_t& __cordl_internal_get_pingTime();

  constexpr void __cordl_internal_set_pingTime(int64_t value);

  /// @brief Method .ctor, addr 0x22c1a20, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_pool, addr 0x22bb4dc, size 0x40, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::ConnectedPlayerManager_PingPacket*>* get_pool();

  /// @brief Convert to "::GlobalNamespace::IPoolablePacket"
  constexpr ::GlobalNamespace::IPoolablePacket* i___GlobalNamespace__IPoolablePacket() noexcept;

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectedPlayerManager_PingPacket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerManager_PingPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConnectedPlayerManager_PingPacket(ConnectedPlayerManager_PingPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerManager_PingPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConnectedPlayerManager_PingPacket(ConnectedPlayerManager_PingPacket const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14710 };

  /// @brief Field pingTime, offset: 0x10, size: 0x8, def value: None
  int64_t ___pingTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager_PingPacket, ___pingTime) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ConnectedPlayerManager_PingPacket, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IPoolablePacket, LiteNetLib.Utils.INetSerializable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ConnectedPlayerManager/PongPacket
class CORDL_TYPE ConnectedPlayerManager_PongPacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field pingTime, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_pingTime, put = __cordl_internal_set_pingTime)) int64_t pingTime;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Method Deserialize, addr 0x22c1a3c, size 0x20, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Init, addr 0x22c0e00, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ConnectedPlayerManager_PongPacket* Init(int64_t pingTime);

  static inline ::GlobalNamespace::ConnectedPlayerManager_PongPacket* New_ctor();

  /// @brief Method Release, addr 0x22c0f84, size 0x54, virtual true, abstract: false, final true
  inline void Release();

  /// @brief Method Serialize, addr 0x22c1a28, size 0x14, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  constexpr int64_t const& __cordl_internal_get_pingTime() const;

  constexpr int64_t& __cordl_internal_get_pingTime();

  constexpr void __cordl_internal_set_pingTime(int64_t value);

  /// @brief Method .ctor, addr 0x22c1a5c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_pool, addr 0x22be0e0, size 0x40, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::ConnectedPlayerManager_PongPacket*>* get_pool();

  /// @brief Convert to "::GlobalNamespace::IPoolablePacket"
  constexpr ::GlobalNamespace::IPoolablePacket* i___GlobalNamespace__IPoolablePacket() noexcept;

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectedPlayerManager_PongPacket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerManager_PongPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConnectedPlayerManager_PongPacket(ConnectedPlayerManager_PongPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerManager_PongPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConnectedPlayerManager_PongPacket(ConnectedPlayerManager_PongPacket const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14711 };

  /// @brief Field pingTime, offset: 0x10, size: 0x8, def value: None
  int64_t ___pingTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager_PongPacket, ___pingTime) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ConnectedPlayerManager_PongPacket, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: ConnectedPlayerManager/<InitializePlayerEncryption>d__132
struct CORDL_TYPE ConnectedPlayerManager__InitializePlayerEncryption_d__132 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x22c1a64, size 0x4e8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x22c20a8, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectedPlayerManager__InitializePlayerEncryption_d__132();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::ConnectedPlayerManager*", modifiers: "",
  // def_value: None }, CppParam { name: "player", ty: "::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*", modifiers: "", def_value: None }, CppParam { name: "_isClient_5__2", ty: "bool",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t,::Array<uint8_t>*>>", modifiers: "", def_value: None },
  // CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EncryptionUtility_IEncryptionState*>", modifiers: "", def_value: None }]
  constexpr ConnectedPlayerManager__InitializePlayerEncryption_d__132(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                      ::GlobalNamespace::ConnectedPlayerManager* __4__this, ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* player,
                                                                      bool _isClient_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t, ::Array<uint8_t>*>> __u__1,
                                                                      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EncryptionUtility_IEncryptionState*> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14712 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::ConnectedPlayerManager* __4__this;

  /// @brief Field player, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* player;

  /// @brief Field <isClient>5__2, offset: 0x38, size: 0x1, def value: None
  bool _isClient_5__2;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t, ::Array<uint8_t>*>> __u__1;

  /// @brief Field <>u__2, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EncryptionUtility_IEncryptionState*> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager__InitializePlayerEncryption_d__132, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager__InitializePlayerEncryption_d__132, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager__InitializePlayerEncryption_d__132, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager__InitializePlayerEncryption_d__132, player) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager__InitializePlayerEncryption_d__132, _isClient_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager__InitializePlayerEncryption_d__132, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager__InitializePlayerEncryption_d__132, __u__2) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ConnectedPlayerManager__InitializePlayerEncryption_d__132, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies MultiplayerAvatarsData, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ConnectedPlayerManager
class CORDL_TYPE ConnectedPlayerManager : public ::System::Object {
public:
  // Declarations
  using ConnectedPlayer = ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer;

  using InternalMessageType = ::GlobalNamespace::ConnectedPlayerManager_InternalMessageType;

  using KickPlayerPacket = ::GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket;

  using MessageType = ::GlobalNamespace::ConnectedPlayerManager_MessageType;

  using PingPacket = ::GlobalNamespace::ConnectedPlayerManager_PingPacket;

  using PlayerAvatarPacket = ::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket;

  using PlayerConnectedPacket = ::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket;

  using PlayerDisconnectedPacket = ::GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket;

  using PlayerIdentityPacket = ::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket;

  using PlayerSortOrderPacket = ::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket;

  using PlayerStatePacket = ::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket;

  using PongPacket = ::GlobalNamespace::ConnectedPlayerManager_PongPacket;

  using SyncTimePacket = ::GlobalNamespace::ConnectedPlayerManager_SyncTimePacket;

  using _InitializePlayerEncryption_d__132 = ::GlobalNamespace::ConnectedPlayerManager__InitializePlayerEncryption_d__132;

  /// @brief Field _connectionManager, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__connectionManager, put = __cordl_internal_set__connectionManager)) ::GlobalNamespace::IConnectionManager* _connectionManager;

  /// @brief Field _encryptionKeys, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__encryptionKeys, put = __cordl_internal_set__encryptionKeys)) ::GlobalNamespace::IDiffieHellmanKeyPair* _encryptionKeys;

  /// @brief Field _encryptionRandom, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__encryptionRandom, put = __cordl_internal_set__encryptionRandom)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _encryptionRandom;

  /// @brief Field _lastConnectionId, offset 0xf0, size 0x1
  __declspec(property(get = __cordl_internal_get__lastConnectionId, put = __cordl_internal_set__lastConnectionId)) uint8_t _lastConnectionId;

  /// @brief Field _lastPingTime, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__lastPingTime, put = __cordl_internal_set__lastPingTime)) int64_t _lastPingTime;

  /// @brief Field _lastPollFrame, offset 0x100, size 0x4
  __declspec(property(get = __cordl_internal_get__lastPollFrame, put = __cordl_internal_set__lastPollFrame)) int32_t _lastPollFrame;

  /// @brief Field _lastPollTime, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__lastPollTime, put = __cordl_internal_set__lastPollTime)) int64_t _lastPollTime;

  /// @brief Field _localPlayer, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__localPlayer, put = __cordl_internal_set__localPlayer)) ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* _localPlayer;

  /// @brief Field _localPlayerAvatars, offset 0xc0, size 0x18
  __declspec(property(get = __cordl_internal_get__localPlayerAvatars, put = __cordl_internal_set__localPlayerAvatars)) ::GlobalNamespace::MultiplayerAvatarsData _localPlayerAvatars;

  /// @brief Field _localPlayerState, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__localPlayerState, put = __cordl_internal_set__localPlayerState)) ::System::Collections::Generic::HashSet_1<::StringW>* _localPlayerState;

  /// @brief Field _messageSerializer, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get__messageSerializer,
                      put = __cordl_internal_set__messageSerializer)) ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::ConnectedPlayerManager_InternalMessageType,
                                                                                                                   ::GlobalNamespace::IConnectedPlayer*>* _messageSerializer;

  /// @brief Field _players, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__players,
                      put = __cordl_internal_set__players)) ::System::Collections::Generic::List_1<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>* _players;

  /// @brief Field _reliableDataWriter, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__reliableDataWriter, put = __cordl_internal_set__reliableDataWriter)) ::LiteNetLib::Utils::NetDataWriter* _reliableDataWriter;

  /// @brief Field _startTicks, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__startTicks, put = __cordl_internal_set__startTicks)) int64_t _startTicks;

  /// @brief Field _syncTimeOffset, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__syncTimeOffset, put = __cordl_internal_set__syncTimeOffset)) ::GlobalNamespace::LongRollingAverage* _syncTimeOffset;

  /// @brief Field _taskUtility, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__taskUtility, put = __cordl_internal_set__taskUtility)) ::BGNet::Core::ITaskUtility* _taskUtility;

  /// @brief Field _temporaryDataWriter, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__temporaryDataWriter, put = __cordl_internal_set__temporaryDataWriter)) ::LiteNetLib::Utils::NetDataWriter* _temporaryDataWriter;

  /// @brief Field _temporaryEncryptedDataWriter, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__temporaryEncryptedDataWriter,
                      put = __cordl_internal_set__temporaryEncryptedDataWriter)) ::LiteNetLib::Utils::NetDataWriter* _temporaryEncryptedDataWriter;

  /// @brief Field _timeProvider, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__timeProvider, put = __cordl_internal_set__timeProvider)) ::BGNet::Core::ITimeProvider* _timeProvider;

  /// @brief Field _unreliableDataWriter, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__unreliableDataWriter, put = __cordl_internal_set__unreliableDataWriter)) ::LiteNetLib::Utils::NetDataWriter* _unreliableDataWriter;

  /// @brief Field connectedEvent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_connectedEvent, put = __cordl_internal_set_connectedEvent)) ::System::Action* connectedEvent;

  __declspec(property(get = get_connectedPlayerCount)) int32_t connectedPlayerCount;

  /// @brief Field connectionFailedEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_connectionFailedEvent,
                      put = __cordl_internal_set_connectionFailedEvent)) ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* connectionFailedEvent;

  /// @brief Field disconnectedEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_disconnectedEvent, put = __cordl_internal_set_disconnectedEvent)) ::System::Action_1<::GlobalNamespace::DisconnectedReason>* disconnectedEvent;

  /// @brief Field initializedEvent, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_initializedEvent, put = __cordl_internal_set_initializedEvent)) ::System::Action* initializedEvent;

  __declspec(property(get = get_isConnected)) bool isConnected;

  __declspec(property(get = get_isConnectedOrConnecting)) bool isConnectedOrConnecting;

  __declspec(property(get = get_isConnecting)) bool isConnecting;

  __declspec(property(get = get_isConnectionOwner)) bool isConnectionOwner;

  __declspec(property(get = get_isDisconnecting)) bool isDisconnecting;

  __declspec(property(get = get_localPlayer)) ::GlobalNamespace::IConnectedPlayer* localPlayer;

  /// @brief Field playerAvatarChangedEvent, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_playerAvatarChangedEvent,
                      put = __cordl_internal_set_playerAvatarChangedEvent)) ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* playerAvatarChangedEvent;

  /// @brief Field playerConnectedEvent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_playerConnectedEvent, put = __cordl_internal_set_playerConnectedEvent)) ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* playerConnectedEvent;

  /// @brief Field playerDisconnectedEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_playerDisconnectedEvent,
                      put = __cordl_internal_set_playerDisconnectedEvent)) ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* playerDisconnectedEvent;

  /// @brief Field playerLatencyInitializedEvent, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_playerLatencyInitializedEvent,
                      put = __cordl_internal_set_playerLatencyInitializedEvent)) ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* playerLatencyInitializedEvent;

  /// @brief Field playerOrderChangedEvent, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_playerOrderChangedEvent,
                      put = __cordl_internal_set_playerOrderChangedEvent)) ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* playerOrderChangedEvent;

  /// @brief Field playerStateChangedEvent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_playerStateChangedEvent,
                      put = __cordl_internal_set_playerStateChangedEvent)) ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* playerStateChangedEvent;

  __declspec(property(get = get_runTime)) int64_t runTime;

  __declspec(property(get = get_syncTime)) int64_t syncTime;

  __declspec(property(get = get_syncTimeInitialized)) bool syncTimeInitialized;

  /// @brief Field syncTimeInitializedEvent, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_syncTimeInitializedEvent, put = __cordl_internal_set_syncTimeInitializedEvent)) ::System::Action* syncTimeInitializedEvent;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AddPlayer, addr 0x22bb244, size 0x298, virtual false, abstract: false, final false
  inline void AddPlayer(::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* player);

  /// @brief Method Disconnect, addr 0x22bb198, size 0xac, virtual false, abstract: false, final false
  inline void Disconnect(::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method Dispose, addr 0x22be884, size 0x570, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method FlushReliableQueue, addr 0x22be5d0, size 0xdc, virtual false, abstract: false, final false
  inline void FlushReliableQueue();

  /// @brief Method FlushUnreliableQueue, addr 0x22be6ac, size 0xdc, virtual false, abstract: false, final false
  inline void FlushUnreliableQueue();

  /// @brief Method GetConnectedPlayer, addr 0x22bbcc0, size 0x58, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IConnectedPlayer* GetConnectedPlayer(int32_t index);

  /// @brief Method GetConnectionManager, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetConnectionManager();

  /// @brief Method GetNextConnectionId, addr 0x22bad58, size 0x40, virtual false, abstract: false, final false
  inline uint8_t GetNextConnectionId();

  /// @brief Method GetPlayer, addr 0x22bbb00, size 0xf4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* GetPlayer(::GlobalNamespace::IConnection* connection, uint8_t remoteConnectionId);

  /// @brief Method GetPlayer, addr 0x22bad98, size 0xc4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* GetPlayer(uint8_t connectionId);

  /// @brief Method GetPlayer, addr 0x22bbbf4, size 0xcc, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* GetPlayer(::StringW userId);

  /// @brief Method HandleConnected, addr 0x22be148, size 0x2e8, virtual false, abstract: false, final false
  inline void HandleConnected();

  /// @brief Method HandleConnectionConnected, addr 0x22be430, size 0x38, virtual false, abstract: false, final false
  inline void HandleConnectionConnected(::GlobalNamespace::IConnection* connection);

  /// @brief Method HandleConnectionDisconnected, addr 0x22bf5a8, size 0x118, virtual false, abstract: false, final false
  inline void HandleConnectionDisconnected(::GlobalNamespace::IConnection* connection, ::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method HandleConnectionFailed, addr 0x22bf3b0, size 0x1c, virtual false, abstract: false, final false
  inline void HandleConnectionFailed(::GlobalNamespace::ConnectionFailedReason reason);

  /// @brief Method HandleDisconnected, addr 0x22bf364, size 0x4c, virtual false, abstract: false, final false
  inline void HandleDisconnected(::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method HandleInitialized, addr 0x22bf22c, size 0x1c, virtual false, abstract: false, final false
  inline void HandleInitialized();

  /// @brief Method HandleKickPlayerPacket, addr 0x22c0770, size 0xe0, virtual false, abstract: false, final false
  inline void HandleKickPlayerPacket(::GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket* packet, ::GlobalNamespace::IConnectedPlayer* iPlayer);

  /// @brief Method HandleNetworkReceive, addr 0x22bf7b4, size 0x500, virtual false, abstract: false, final false
  inline void HandleNetworkReceive(::GlobalNamespace::IConnection* connection, ::LiteNetLib::Utils::NetDataReader* reader, ::BGNet::Core::DeliveryMethod deliveryMethod);

  /// @brief Method HandlePing, addr 0x22c0bb8, size 0x1f4, virtual false, abstract: false, final false
  inline void HandlePing(::GlobalNamespace::ConnectedPlayerManager_PingPacket* packet, ::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method HandlePlayerAvatarUpdate, addr 0x22c052c, size 0xd0, virtual false, abstract: false, final false
  inline void HandlePlayerAvatarUpdate(::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket* packet, ::GlobalNamespace::IConnectedPlayer* iPlayer);

  /// @brief Method HandlePlayerIdentityUpdate, addr 0x22c01c0, size 0x134, virtual false, abstract: false, final false
  inline void HandlePlayerIdentityUpdate(::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket* packet, ::GlobalNamespace::IConnectedPlayer* iPlayer);

  /// @brief Method HandlePlayerSortOrderUpdate, addr 0x22c08a4, size 0x12c, virtual false, abstract: false, final false
  inline void HandlePlayerSortOrderUpdate(::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket* packet, ::GlobalNamespace::IConnectedPlayer* iPlayer);

  /// @brief Method HandlePlayerStateUpdate, addr 0x22c03f4, size 0xc8, virtual false, abstract: false, final false
  inline void HandlePlayerStateUpdate(::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket* packet, ::GlobalNamespace::IConnectedPlayer* iPlayer);

  /// @brief Method HandlePong, addr 0x22c0e10, size 0x174, virtual false, abstract: false, final false
  inline void HandlePong(::GlobalNamespace::ConnectedPlayerManager_PongPacket* packet, ::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method HandleServerPlayerConnected, addr 0x22bffdc, size 0xcc, virtual false, abstract: false, final false
  inline void HandleServerPlayerConnected(::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket* packet, ::GlobalNamespace::IConnectedPlayer* iPlayer);

  /// @brief Method HandleServerPlayerDisconnected, addr 0x22c0674, size 0xa8, virtual false, abstract: false, final false
  inline void HandleServerPlayerDisconnected(::GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket* packet, ::GlobalNamespace::IConnectedPlayer* iPlayer);

  /// @brief Method HandleSyncTimePacket, addr 0x22c0a24, size 0x140, virtual false, abstract: false, final false
  inline void HandleSyncTimePacket(::GlobalNamespace::ConnectedPlayerManager_SyncTimePacket* packet, ::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method InitializePlayerEncryption, addr 0x22c0358, size 0x9c, virtual false, abstract: false, final false
  inline void InitializePlayerEncryption(::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* player);

  /// @brief Method KickPlayer, addr 0x22bedf4, size 0xcc, virtual false, abstract: false, final false
  inline void KickPlayer(::StringW userId, ::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method Log, addr 0x22c0ff4, size 0x8c, virtual false, abstract: false, final false
  inline void Log(::StringW message);

  static inline ::GlobalNamespace::ConnectedPlayerManager* New_ctor(::GlobalNamespace::IConnectionManager* connectionManager);

  static inline ::GlobalNamespace::ConnectedPlayerManager* New_ctor(::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility,
                                                                    ::GlobalNamespace::IConnectionManager* connectionManager);

  /// @brief Method PollLateUpdateOptional, addr 0x22be788, size 0x2c, virtual false, abstract: false, final false
  inline void PollLateUpdateOptional();

  /// @brief Method PollUpdate, addr 0x22be468, size 0x168, virtual false, abstract: false, final false
  inline void PollUpdate(int32_t frameCount);

  /// @brief Method RegisterSerializer, addr 0x22be7b4, size 0x68, virtual false, abstract: false, final false
  inline void RegisterSerializer(::GlobalNamespace::ConnectedPlayerManager_MessageType serializerType,
                                 ::GlobalNamespace::INetworkPacketSubSerializer_1<::GlobalNamespace::IConnectedPlayer*>* subSerializer);

  /// @brief Method RemoveAllPlayers, addr 0x22bae5c, size 0x8c, virtual false, abstract: false, final false
  inline void RemoveAllPlayers(::GlobalNamespace::DisconnectedReason reason);

  /// @brief Method RemovePlayer, addr 0x22baee8, size 0xc4, virtual false, abstract: false, final false
  inline void RemovePlayer(::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* player, ::GlobalNamespace::DisconnectedReason reason);

  /// @brief Method ResetLocalState, addr 0x22be120, size 0x28, virtual false, abstract: false, final false
  inline void ResetLocalState();

  /// @brief Method Send, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void Send(T message);

  /// @brief Method SendImmediately, addr 0x22bb5f0, size 0xe4, virtual false, abstract: false, final false
  inline void SendImmediately(::LiteNetLib::Utils::INetSerializable* message, bool onlyFirstDegree);

  /// @brief Method SendImmediatelyExcludingPlayer, addr 0x22bb744, size 0xf4, virtual false, abstract: false, final false
  inline void SendImmediatelyExcludingPlayer(::LiteNetLib::Utils::INetSerializable* message, ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* excludingPlayer, bool onlyFirstDegree);

  /// @brief Method SendImmediatelyFromPlayer, addr 0x22bf6c8, size 0xec, virtual false, abstract: false, final false
  inline void SendImmediatelyFromPlayer(::LiteNetLib::Utils::INetSerializable* message, ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* fromPlayer, bool onlyFirstDegree);

  /// @brief Method SendImmediatelyFromPlayerToPlayer, addr 0x22bba20, size 0xe0, virtual false, abstract: false, final false
  inline void SendImmediatelyFromPlayerToPlayer(::LiteNetLib::Utils::INetSerializable* message, ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* fromPlayer,
                                                ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* toPlayer);

  /// @brief Method SendImmediatelyFromPlayerToPlayerUnreliable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void SendImmediatelyFromPlayerToPlayerUnreliable(T message, ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* fromPlayer,
                                                          ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* toPlayer);

  /// @brief Method SendImmediatelyToPlayer, addr 0x22bb848, size 0xe0, virtual false, abstract: false, final false
  inline void SendImmediatelyToPlayer(::LiteNetLib::Utils::INetSerializable* message, ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* toPlayer);

  /// @brief Method SendToPlayer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SendToPlayer(T message, ::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method SendUnreliable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SendUnreliable(T message);

  /// @brief Method SendUnreliableEncryptedToPlayer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SendUnreliableEncryptedToPlayer(T message, ::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method SendUnreliableFromPlayerToPlayer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SendUnreliableFromPlayerToPlayer(T message, ::GlobalNamespace::IConnectedPlayer* fromPlayer, ::GlobalNamespace::IConnectedPlayer* toPlayer);

  /// @brief Method SendUnreliableOnlyToFirstDegreeConnections, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SendUnreliableOnlyToFirstDegreeConnections(T message);

  /// @brief Method SetLocalPlayerAvatar, addr 0x22bf014, size 0x94, virtual false, abstract: false, final false
  inline void SetLocalPlayerAvatar(::GlobalNamespace::MultiplayerAvatarsData multiplayerAvatarsData);

  /// @brief Method SetLocalPlayerSortIndex, addr 0x22bf128, size 0x10, virtual false, abstract: false, final false
  inline void SetLocalPlayerSortIndex(int32_t sortIndex);

  /// @brief Method SetLocalPlayerState, addr 0x22beed4, size 0xe0, virtual false, abstract: false, final false
  inline void SetLocalPlayerState(::StringW state, bool setState);

  /// @brief Method SetPlayerSortIndex, addr 0x22bf138, size 0xd8, virtual false, abstract: false, final false
  inline void SetPlayerSortIndex(::GlobalNamespace::IConnectedPlayer* player, int32_t sortIndex);

  /// @brief Method UnregisterSerializer, addr 0x22be81c, size 0x68, virtual false, abstract: false, final false
  inline void UnregisterSerializer(::GlobalNamespace::ConnectedPlayerManager_MessageType serializerType,
                                   ::GlobalNamespace::INetworkPacketSubSerializer_1<::GlobalNamespace::IConnectedPlayer*>* subSerializer);

  /// @brief Method Write, addr 0x22bfd20, size 0xf8, virtual false, abstract: false, final false
  inline void Write(::LiteNetLib::Utils::NetDataWriter* writer, ::LiteNetLib::Utils::INetSerializable* packet);

  /// @brief Method WriteOne, addr 0x22bfcb4, size 0x6c, virtual false, abstract: false, final false
  inline ::LiteNetLib::Utils::NetDataWriter* WriteOne(uint8_t senderId, uint8_t receiverId, ::LiteNetLib::Utils::INetSerializable* message);

  /// @brief Method WriteOneEncrypted, addr 0x22bfe18, size 0x164, virtual false, abstract: false, final false
  inline ::LiteNetLib::Utils::NetDataWriter* WriteOneEncrypted(::GlobalNamespace::EncryptionUtility_IEncryptionState* encryptionState, uint8_t senderId, uint8_t receiverId,
                                                               ::LiteNetLib::Utils::INetSerializable* message);

  /// @brief Method WriteOneOnlyToFirstDegreeConnections, addr 0x22bff7c, size 0x60, virtual false, abstract: false, final false
  inline ::LiteNetLib::Utils::NetDataWriter* WriteOneOnlyToFirstDegreeConnections(uint8_t senderId, ::LiteNetLib::Utils::INetSerializable* message);

  constexpr ::GlobalNamespace::IConnectionManager* const& __cordl_internal_get__connectionManager() const;

  constexpr ::GlobalNamespace::IConnectionManager*& __cordl_internal_get__connectionManager();

  constexpr ::GlobalNamespace::IDiffieHellmanKeyPair* const& __cordl_internal_get__encryptionKeys() const;

  constexpr ::GlobalNamespace::IDiffieHellmanKeyPair*& __cordl_internal_get__encryptionKeys();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__encryptionRandom() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__encryptionRandom();

  constexpr uint8_t const& __cordl_internal_get__lastConnectionId() const;

  constexpr uint8_t& __cordl_internal_get__lastConnectionId();

  constexpr int64_t const& __cordl_internal_get__lastPingTime() const;

  constexpr int64_t& __cordl_internal_get__lastPingTime();

  constexpr int32_t const& __cordl_internal_get__lastPollFrame() const;

  constexpr int32_t& __cordl_internal_get__lastPollFrame();

  constexpr int64_t const& __cordl_internal_get__lastPollTime() const;

  constexpr int64_t& __cordl_internal_get__lastPollTime();

  constexpr ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* const& __cordl_internal_get__localPlayer() const;

  constexpr ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*& __cordl_internal_get__localPlayer();

  constexpr ::GlobalNamespace::MultiplayerAvatarsData const& __cordl_internal_get__localPlayerAvatars() const;

  constexpr ::GlobalNamespace::MultiplayerAvatarsData& __cordl_internal_get__localPlayerAvatars();

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& __cordl_internal_get__localPlayerState() const;

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get__localPlayerState();

  constexpr ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::ConnectedPlayerManager_InternalMessageType, ::GlobalNamespace::IConnectedPlayer*>* const&
  __cordl_internal_get__messageSerializer() const;

  constexpr ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::ConnectedPlayerManager_InternalMessageType, ::GlobalNamespace::IConnectedPlayer*>*&
  __cordl_internal_get__messageSerializer();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>* const& __cordl_internal_get__players() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>*& __cordl_internal_get__players();

  constexpr ::LiteNetLib::Utils::NetDataWriter* const& __cordl_internal_get__reliableDataWriter() const;

  constexpr ::LiteNetLib::Utils::NetDataWriter*& __cordl_internal_get__reliableDataWriter();

  constexpr int64_t const& __cordl_internal_get__startTicks() const;

  constexpr int64_t& __cordl_internal_get__startTicks();

  constexpr ::GlobalNamespace::LongRollingAverage* const& __cordl_internal_get__syncTimeOffset() const;

  constexpr ::GlobalNamespace::LongRollingAverage*& __cordl_internal_get__syncTimeOffset();

  constexpr ::BGNet::Core::ITaskUtility* const& __cordl_internal_get__taskUtility() const;

  constexpr ::BGNet::Core::ITaskUtility*& __cordl_internal_get__taskUtility();

  constexpr ::LiteNetLib::Utils::NetDataWriter* const& __cordl_internal_get__temporaryDataWriter() const;

  constexpr ::LiteNetLib::Utils::NetDataWriter*& __cordl_internal_get__temporaryDataWriter();

  constexpr ::LiteNetLib::Utils::NetDataWriter* const& __cordl_internal_get__temporaryEncryptedDataWriter() const;

  constexpr ::LiteNetLib::Utils::NetDataWriter*& __cordl_internal_get__temporaryEncryptedDataWriter();

  constexpr ::BGNet::Core::ITimeProvider* const& __cordl_internal_get__timeProvider() const;

  constexpr ::BGNet::Core::ITimeProvider*& __cordl_internal_get__timeProvider();

  constexpr ::LiteNetLib::Utils::NetDataWriter* const& __cordl_internal_get__unreliableDataWriter() const;

  constexpr ::LiteNetLib::Utils::NetDataWriter*& __cordl_internal_get__unreliableDataWriter();

  constexpr ::System::Action* const& __cordl_internal_get_connectedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_connectedEvent();

  constexpr ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* const& __cordl_internal_get_connectionFailedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*& __cordl_internal_get_connectionFailedEvent();

  constexpr ::System::Action_1<::GlobalNamespace::DisconnectedReason>* const& __cordl_internal_get_disconnectedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::DisconnectedReason>*& __cordl_internal_get_disconnectedEvent();

  constexpr ::System::Action* const& __cordl_internal_get_initializedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_initializedEvent();

  constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* const& __cordl_internal_get_playerAvatarChangedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*& __cordl_internal_get_playerAvatarChangedEvent();

  constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* const& __cordl_internal_get_playerConnectedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*& __cordl_internal_get_playerConnectedEvent();

  constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* const& __cordl_internal_get_playerDisconnectedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*& __cordl_internal_get_playerDisconnectedEvent();

  constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* const& __cordl_internal_get_playerLatencyInitializedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*& __cordl_internal_get_playerLatencyInitializedEvent();

  constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* const& __cordl_internal_get_playerOrderChangedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*& __cordl_internal_get_playerOrderChangedEvent();

  constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* const& __cordl_internal_get_playerStateChangedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*& __cordl_internal_get_playerStateChangedEvent();

  constexpr ::System::Action* const& __cordl_internal_get_syncTimeInitializedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_syncTimeInitializedEvent();

  constexpr void __cordl_internal_set__connectionManager(::GlobalNamespace::IConnectionManager* value);

  constexpr void __cordl_internal_set__encryptionKeys(::GlobalNamespace::IDiffieHellmanKeyPair* value);

  constexpr void __cordl_internal_set__encryptionRandom(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__lastConnectionId(uint8_t value);

  constexpr void __cordl_internal_set__lastPingTime(int64_t value);

  constexpr void __cordl_internal_set__lastPollFrame(int32_t value);

  constexpr void __cordl_internal_set__lastPollTime(int64_t value);

  constexpr void __cordl_internal_set__localPlayer(::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* value);

  constexpr void __cordl_internal_set__localPlayerAvatars(::GlobalNamespace::MultiplayerAvatarsData value);

  constexpr void __cordl_internal_set__localPlayerState(::System::Collections::Generic::HashSet_1<::StringW>* value);

  constexpr void
  __cordl_internal_set__messageSerializer(::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::ConnectedPlayerManager_InternalMessageType, ::GlobalNamespace::IConnectedPlayer*>* value);

  constexpr void __cordl_internal_set__players(::System::Collections::Generic::List_1<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>* value);

  constexpr void __cordl_internal_set__reliableDataWriter(::LiteNetLib::Utils::NetDataWriter* value);

  constexpr void __cordl_internal_set__startTicks(int64_t value);

  constexpr void __cordl_internal_set__syncTimeOffset(::GlobalNamespace::LongRollingAverage* value);

  constexpr void __cordl_internal_set__taskUtility(::BGNet::Core::ITaskUtility* value);

  constexpr void __cordl_internal_set__temporaryDataWriter(::LiteNetLib::Utils::NetDataWriter* value);

  constexpr void __cordl_internal_set__temporaryEncryptedDataWriter(::LiteNetLib::Utils::NetDataWriter* value);

  constexpr void __cordl_internal_set__timeProvider(::BGNet::Core::ITimeProvider* value);

  constexpr void __cordl_internal_set__unreliableDataWriter(::LiteNetLib::Utils::NetDataWriter* value);

  constexpr void __cordl_internal_set_connectedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_connectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value);

  constexpr void __cordl_internal_set_disconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  constexpr void __cordl_internal_set_initializedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_playerAvatarChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  constexpr void __cordl_internal_set_playerConnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  constexpr void __cordl_internal_set_playerDisconnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  constexpr void __cordl_internal_set_playerLatencyInitializedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  constexpr void __cordl_internal_set_playerOrderChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  constexpr void __cordl_internal_set_playerStateChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  constexpr void __cordl_internal_set_syncTimeInitializedEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x22bce80, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IConnectionManager* connectionManager);

  /// @brief Method .ctor, addr 0x22bcf28, size 0xfb8, virtual false, abstract: false, final false
  inline void _ctor(::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility, ::GlobalNamespace::IConnectionManager* connectionManager);

  /// @brief Method add_connectedEvent, addr 0x22bbd18, size 0x9c, virtual false, abstract: false, final false
  inline void add_connectedEvent(::System::Action* value);

  /// @brief Method add_connectionFailedEvent, addr 0x22bc0e8, size 0xb0, virtual false, abstract: false, final false
  inline void add_connectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value);

  /// @brief Method add_disconnectedEvent, addr 0x22bbf88, size 0xb0, virtual false, abstract: false, final false
  inline void add_disconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method add_initializedEvent, addr 0x22bbe50, size 0x9c, virtual false, abstract: false, final false
  inline void add_initializedEvent(::System::Action* value);

  /// @brief Method add_playerAvatarChangedEvent, addr 0x22bc668, size 0xb0, virtual false, abstract: false, final false
  inline void add_playerAvatarChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method add_playerConnectedEvent, addr 0x22bc248, size 0xb0, virtual false, abstract: false, final false
  inline void add_playerConnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method add_playerDisconnectedEvent, addr 0x22bc3a8, size 0xb0, virtual false, abstract: false, final false
  inline void add_playerDisconnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method add_playerLatencyInitializedEvent, addr 0x22bc928, size 0xb0, virtual false, abstract: false, final false
  inline void add_playerLatencyInitializedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method add_playerOrderChangedEvent, addr 0x22bc7c8, size 0xb0, virtual false, abstract: false, final false
  inline void add_playerOrderChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method add_playerStateChangedEvent, addr 0x22bc508, size 0xb0, virtual false, abstract: false, final false
  inline void add_playerStateChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method add_syncTimeInitializedEvent, addr 0x22bca88, size 0x9c, virtual false, abstract: false, final false
  inline void add_syncTimeInitializedEvent(::System::Action* value);

  /// @brief Method get_connectedPlayerCount, addr 0x22bcddc, size 0x48, virtual false, abstract: false, final false
  inline int32_t get_connectedPlayerCount();

  /// @brief Method get_isConnected, addr 0x22bb0f4, size 0xa4, virtual false, abstract: false, final false
  inline bool get_isConnected();

  /// @brief Method get_isConnectedOrConnecting, addr 0x22bcc64, size 0x28, virtual false, abstract: false, final false
  inline bool get_isConnectedOrConnecting();

  /// @brief Method get_isConnecting, addr 0x22bcc8c, size 0xa4, virtual false, abstract: false, final false
  inline bool get_isConnecting();

  /// @brief Method get_isConnectionOwner, addr 0x22bcbc0, size 0xa4, virtual false, abstract: false, final false
  inline bool get_isConnectionOwner();

  /// @brief Method get_isDisconnecting, addr 0x22bcd30, size 0xa4, virtual false, abstract: false, final false
  inline bool get_isDisconnecting();

  /// @brief Method get_localPlayer, addr 0x22bcdd4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IConnectedPlayer* get_localPlayer();

  /// @brief Method get_runTime, addr 0x22bb51c, size 0xcc, virtual false, abstract: false, final false
  inline int64_t get_runTime();

  /// @brief Method get_syncTime, addr 0x22bce24, size 0x28, virtual false, abstract: false, final false
  inline int64_t get_syncTime();

  /// @brief Method get_syncTimeInitialized, addr 0x22bce4c, size 0x34, virtual false, abstract: false, final false
  inline bool get_syncTimeInitialized();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method remove_connectedEvent, addr 0x22bbdb4, size 0x9c, virtual false, abstract: false, final false
  inline void remove_connectedEvent(::System::Action* value);

  /// @brief Method remove_connectionFailedEvent, addr 0x22bc198, size 0xb0, virtual false, abstract: false, final false
  inline void remove_connectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value);

  /// @brief Method remove_disconnectedEvent, addr 0x22bc038, size 0xb0, virtual false, abstract: false, final false
  inline void remove_disconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method remove_initializedEvent, addr 0x22bbeec, size 0x9c, virtual false, abstract: false, final false
  inline void remove_initializedEvent(::System::Action* value);

  /// @brief Method remove_playerAvatarChangedEvent, addr 0x22bc718, size 0xb0, virtual false, abstract: false, final false
  inline void remove_playerAvatarChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method remove_playerConnectedEvent, addr 0x22bc2f8, size 0xb0, virtual false, abstract: false, final false
  inline void remove_playerConnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method remove_playerDisconnectedEvent, addr 0x22bc458, size 0xb0, virtual false, abstract: false, final false
  inline void remove_playerDisconnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method remove_playerLatencyInitializedEvent, addr 0x22bc9d8, size 0xb0, virtual false, abstract: false, final false
  inline void remove_playerLatencyInitializedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method remove_playerOrderChangedEvent, addr 0x22bc878, size 0xb0, virtual false, abstract: false, final false
  inline void remove_playerOrderChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method remove_playerStateChangedEvent, addr 0x22bc5b8, size 0xb0, virtual false, abstract: false, final false
  inline void remove_playerStateChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method remove_syncTimeInitializedEvent, addr 0x22bcb24, size 0x9c, virtual false, abstract: false, final false
  inline void remove_syncTimeInitializedEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectedPlayerManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConnectedPlayerManager(ConnectedPlayerManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConnectedPlayerManager(ConnectedPlayerManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14713 };

  /// @brief Field invalidSortIndex offset 0xffffffff size 0x4
  static constexpr int32_t invalidSortIndex{ static_cast<int32_t>(0xffffffff) };

  /// @brief Field kAllConnectionsId offset 0xffffffff size 0x1
  static constexpr uint8_t kAllConnectionsId{ static_cast<uint8_t>(0x7fu) };

  /// @brief Field kLocalConnectionId offset 0xffffffff size 0x1
  static constexpr uint8_t kLocalConnectionId{ static_cast<uint8_t>(0x0u) };

  /// @brief Field kMaxUnreliableMessageLength offset 0xffffffff size 0x4
  static constexpr int32_t kMaxUnreliableMessageLength{ static_cast<int32_t>(0x19c) };

  /// @brief Field kPingUpdateFrequencyMs offset 0xffffffff size 0x8
  static constexpr int64_t kPingUpdateFrequencyMs{ static_cast<int64_t>(0x7d0) };

  /// @brief Field kTimeSensitiveAllowedReceiveWindowMs offset 0xffffffff size 0x8
  static constexpr int64_t kTimeSensitiveAllowedReceiveWindowMs{ static_cast<int64_t>(0x1e) };

  /// @brief Field connectedEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Action* ___connectedEvent;

  /// @brief Field initializedEvent, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___initializedEvent;

  /// @brief Field disconnectedEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::DisconnectedReason>* ___disconnectedEvent;

  /// @brief Field connectionFailedEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* ___connectionFailedEvent;

  /// @brief Field playerConnectedEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* ___playerConnectedEvent;

  /// @brief Field playerDisconnectedEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* ___playerDisconnectedEvent;

  /// @brief Field playerStateChangedEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* ___playerStateChangedEvent;

  /// @brief Field playerAvatarChangedEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* ___playerAvatarChangedEvent;

  /// @brief Field playerOrderChangedEvent, offset: 0x50, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* ___playerOrderChangedEvent;

  /// @brief Field playerLatencyInitializedEvent, offset: 0x58, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* ___playerLatencyInitializedEvent;

  /// @brief Field syncTimeInitializedEvent, offset: 0x60, size: 0x8, def value: None
  ::System::Action* ___syncTimeInitializedEvent;

  /// @brief Field _startTicks, offset: 0x68, size: 0x8, def value: None
  int64_t ____startTicks;

  /// @brief Field _syncTimeOffset, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::LongRollingAverage* ____syncTimeOffset;

  /// @brief Field _timeProvider, offset: 0x78, size: 0x8, def value: None
  ::BGNet::Core::ITimeProvider* ____timeProvider;

  /// @brief Field _taskUtility, offset: 0x80, size: 0x8, def value: None
  ::BGNet::Core::ITaskUtility* ____taskUtility;

  /// @brief Field _connectionManager, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::IConnectionManager* ____connectionManager;

  /// @brief Field _temporaryDataWriter, offset: 0x90, size: 0x8, def value: None
  ::LiteNetLib::Utils::NetDataWriter* ____temporaryDataWriter;

  /// @brief Field _temporaryEncryptedDataWriter, offset: 0x98, size: 0x8, def value: None
  ::LiteNetLib::Utils::NetDataWriter* ____temporaryEncryptedDataWriter;

  /// @brief Field _reliableDataWriter, offset: 0xa0, size: 0x8, def value: None
  ::LiteNetLib::Utils::NetDataWriter* ____reliableDataWriter;

  /// @brief Field _unreliableDataWriter, offset: 0xa8, size: 0x8, def value: None
  ::LiteNetLib::Utils::NetDataWriter* ____unreliableDataWriter;

  /// @brief Field _players, offset: 0xb0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>* ____players;

  /// @brief Field _localPlayerState, offset: 0xb8, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ____localPlayerState;

  /// @brief Field _localPlayerAvatars, offset: 0xc0, size: 0x18, def value: None
  ::GlobalNamespace::MultiplayerAvatarsData ____localPlayerAvatars;

  /// @brief Field _encryptionKeys, offset: 0xd8, size: 0x8, def value: None
  ::GlobalNamespace::IDiffieHellmanKeyPair* ____encryptionKeys;

  /// @brief Field _encryptionRandom, offset: 0xe0, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____encryptionRandom;

  /// @brief Field _localPlayer, offset: 0xe8, size: 0x8, def value: None
  ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* ____localPlayer;

  /// @brief Field _lastConnectionId, offset: 0xf0, size: 0x1, def value: None
  uint8_t ____lastConnectionId;

  /// @brief Field _lastPollTime, offset: 0xf8, size: 0x8, def value: None
  int64_t ____lastPollTime;

  /// @brief Field _lastPollFrame, offset: 0x100, size: 0x4, def value: None
  int32_t ____lastPollFrame;

  /// @brief Field _lastPingTime, offset: 0x108, size: 0x8, def value: None
  int64_t ____lastPingTime;

  /// @brief Field _messageSerializer, offset: 0x110, size: 0x8, def value: None
  ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::ConnectedPlayerManager_InternalMessageType, ::GlobalNamespace::IConnectedPlayer*>* ____messageSerializer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager, ___connectedEvent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager, ___initializedEvent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager, ___disconnectedEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager, ___connectionFailedEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager, ___playerConnectedEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager, ___playerDisconnectedEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager, ___playerStateChangedEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager, ___playerAvatarChangedEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager, ___playerOrderChangedEvent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager, ___playerLatencyInitializedEvent) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager, ___syncTimeInitializedEvent) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager, ____startTicks) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager, ____syncTimeOffset) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager, ____timeProvider) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager, ____taskUtility) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager, ____connectionManager) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager, ____temporaryDataWriter) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager, ____temporaryEncryptedDataWriter) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager, ____reliableDataWriter) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager, ____unreliableDataWriter) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager, ____players) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager, ____localPlayerState) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager, ____localPlayerAvatars) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager, ____encryptionKeys) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager, ____encryptionRandom) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager, ____localPlayer) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager, ____lastConnectionId) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager, ____lastPollTime) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager, ____lastPollFrame) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager, ____lastPingTime) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedPlayerManager, ____messageSerializer) == 0x110, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ConnectedPlayerManager, 0x118>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConnectedPlayerManager_InternalMessageType, "", "ConnectedPlayerManager/InternalMessageType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConnectedPlayerManager_MessageType, "", "ConnectedPlayerManager/MessageType");
NEED_NO_BOX(::GlobalNamespace::ConnectedPlayerManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConnectedPlayerManager*, "", "ConnectedPlayerManager");
NEED_NO_BOX(::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*, "", "ConnectedPlayerManager/ConnectedPlayer");
NEED_NO_BOX(::GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket*, "", "ConnectedPlayerManager/KickPlayerPacket");
NEED_NO_BOX(::GlobalNamespace::ConnectedPlayerManager_PingPacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConnectedPlayerManager_PingPacket*, "", "ConnectedPlayerManager/PingPacket");
NEED_NO_BOX(::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket*, "", "ConnectedPlayerManager/PlayerAvatarPacket");
NEED_NO_BOX(::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket*, "", "ConnectedPlayerManager/PlayerConnectedPacket");
NEED_NO_BOX(::GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket*, "", "ConnectedPlayerManager/PlayerDisconnectedPacket");
NEED_NO_BOX(::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket*, "", "ConnectedPlayerManager/PlayerIdentityPacket");
NEED_NO_BOX(::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket*, "", "ConnectedPlayerManager/PlayerSortOrderPacket");
NEED_NO_BOX(::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket*, "", "ConnectedPlayerManager/PlayerStatePacket");
NEED_NO_BOX(::GlobalNamespace::ConnectedPlayerManager_PongPacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConnectedPlayerManager_PongPacket*, "", "ConnectedPlayerManager/PongPacket");
NEED_NO_BOX(::GlobalNamespace::ConnectedPlayerManager_SyncTimePacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConnectedPlayerManager_SyncTimePacket*, "", "ConnectedPlayerManager/SyncTimePacket");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConnectedPlayerManager__InitializePlayerEncryption_d__132, "", "ConnectedPlayerManager/<InitializePlayerEncryption>d__132");
