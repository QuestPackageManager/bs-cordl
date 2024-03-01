#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "GlobalNamespace/zzzz__EncryptionUtility_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerStateHash_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
struct ConnectionFailedReason;
}
namespace GlobalNamespace {
struct DisconnectedReason;
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
class IPoolablePacket;
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
namespace GlobalNamespace {
class __ConnectedPlayerManager__ConnectedPlayer;
}
namespace GlobalNamespace {
struct __ConnectedPlayerManager__InternalMessageType;
}
namespace GlobalNamespace {
class __ConnectedPlayerManager__KickPlayerPacket;
}
namespace GlobalNamespace {
struct __ConnectedPlayerManager__MessageType;
}
namespace GlobalNamespace {
class __ConnectedPlayerManager__PingPacket;
}
namespace GlobalNamespace {
class __ConnectedPlayerManager__PlayerAvatarPacket;
}
namespace GlobalNamespace {
class __ConnectedPlayerManager__PlayerConnectedPacket;
}
namespace GlobalNamespace {
class __ConnectedPlayerManager__PlayerDisconnectedPacket;
}
namespace GlobalNamespace {
class __ConnectedPlayerManager__PlayerIdentityPacket;
}
namespace GlobalNamespace {
class __ConnectedPlayerManager__PlayerSortOrderPacket;
}
namespace GlobalNamespace {
class __ConnectedPlayerManager__PlayerStatePacket;
}
namespace GlobalNamespace {
class __ConnectedPlayerManager__PongPacket;
}
namespace GlobalNamespace {
class __ConnectedPlayerManager__SyncTimePacket;
}
namespace GlobalNamespace {
struct __ConnectedPlayerManager___InitializePlayerEncryption_d__132;
}
namespace GlobalNamespace {
class __EncryptionUtility__IEncryptionState;
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
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
struct __ConnectedPlayerManager__InternalMessageType;
}
namespace GlobalNamespace {
struct __ConnectedPlayerManager__MessageType;
}
namespace GlobalNamespace {
class ConnectedPlayerManager;
}
namespace GlobalNamespace {
class __ConnectedPlayerManager__ConnectedPlayer;
}
namespace GlobalNamespace {
class __ConnectedPlayerManager__KickPlayerPacket;
}
namespace GlobalNamespace {
class __ConnectedPlayerManager__PingPacket;
}
namespace GlobalNamespace {
class __ConnectedPlayerManager__PlayerAvatarPacket;
}
namespace GlobalNamespace {
class __ConnectedPlayerManager__PlayerConnectedPacket;
}
namespace GlobalNamespace {
class __ConnectedPlayerManager__PlayerDisconnectedPacket;
}
namespace GlobalNamespace {
class __ConnectedPlayerManager__PlayerIdentityPacket;
}
namespace GlobalNamespace {
class __ConnectedPlayerManager__PlayerSortOrderPacket;
}
namespace GlobalNamespace {
class __ConnectedPlayerManager__PlayerStatePacket;
}
namespace GlobalNamespace {
class __ConnectedPlayerManager__PongPacket;
}
namespace GlobalNamespace {
class __ConnectedPlayerManager__SyncTimePacket;
}
namespace GlobalNamespace {
struct __ConnectedPlayerManager___InitializePlayerEncryption_d__132;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType);
MARK_VAL_T(::GlobalNamespace::__ConnectedPlayerManager__MessageType);
MARK_REF_PTR_T(::GlobalNamespace::ConnectedPlayerManager);
MARK_REF_PTR_T(::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer);
MARK_REF_PTR_T(::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket);
MARK_REF_PTR_T(::GlobalNamespace::__ConnectedPlayerManager__PingPacket);
MARK_REF_PTR_T(::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket);
MARK_REF_PTR_T(::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket);
MARK_REF_PTR_T(::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket);
MARK_REF_PTR_T(::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket);
MARK_REF_PTR_T(::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket);
MARK_REF_PTR_T(::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket);
MARK_REF_PTR_T(::GlobalNamespace::__ConnectedPlayerManager__PongPacket);
MARK_REF_PTR_T(::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket);
MARK_VAL_T(::GlobalNamespace::__ConnectedPlayerManager___InitializePlayerEncryption_d__132);
// Type: ::ConnectedPlayer
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ConnectedPlayerManager::ConnectedPlayer*
class CORDL_TYPE __ConnectedPlayerManager__ConnectedPlayer : public ::System::Object {
public:
  // Declarations
  /// @brief Field _connection, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__connection, put = __cordl_internal_set__connection))::GlobalNamespace::IConnection* _connection;

  /// @brief Field _connectionId, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__connectionId, put = __cordl_internal_set__connectionId)) uint8_t _connectionId;

  /// @brief Field _disconnectedReason, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__disconnectedReason, put = __cordl_internal_set__disconnectedReason))::GlobalNamespace::DisconnectedReason _disconnectedReason;

  /// @brief Field _encryptionState, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__encryptionState, put = __cordl_internal_set__encryptionState))::GlobalNamespace::__EncryptionUtility__IEncryptionState* _encryptionState;

  /// @brief Field _isConnected, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__isConnected, put = __cordl_internal_set__isConnected)) bool _isConnected;

  /// @brief Field _isConnectionOwner, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get__isConnectionOwner, put = __cordl_internal_set__isConnectionOwner)) bool _isConnectionOwner;

  /// @brief Field _isKicked, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__isKicked, put = __cordl_internal_set__isKicked)) bool _isKicked;

  /// @brief Field _isMe, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__isMe, put = __cordl_internal_set__isMe)) bool _isMe;

  /// @brief Field _latency, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__latency, put = __cordl_internal_set__latency))::GlobalNamespace::LongRollingAverage* _latency;

  /// @brief Field _manager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__manager, put = __cordl_internal_set__manager))::GlobalNamespace::ConnectedPlayerManager* _manager;

  /// @brief Field _parent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__parent, put = __cordl_internal_set__parent))::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* _parent;

  /// @brief Field _playerAvatars, offset 0x68, size 0x18
  __declspec(property(get = __cordl_internal_get__playerAvatars, put = __cordl_internal_set__playerAvatars))::GlobalNamespace::MultiplayerAvatarsData _playerAvatars;

  /// @brief Field _playerState, offset 0x58, size 0x10
  __declspec(property(get = __cordl_internal_get__playerState, put = __cordl_internal_set__playerState))::GlobalNamespace::PlayerStateHash _playerState;

  /// @brief Field _publicEncryptionKey, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__publicEncryptionKey, put = __cordl_internal_set__publicEncryptionKey))::ArrayW<uint8_t, ::Array<uint8_t>*> _publicEncryptionKey;

  /// @brief Field _random, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__random, put = __cordl_internal_set__random))::ArrayW<uint8_t, ::Array<uint8_t>*> _random;

  /// @brief Field _remoteConnectionId, offset 0x41, size 0x1
  __declspec(property(get = __cordl_internal_get__remoteConnectionId, put = __cordl_internal_set__remoteConnectionId)) uint8_t _remoteConnectionId;

  /// @brief Field _sortIndex, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__sortIndex, put = __cordl_internal_set__sortIndex)) int32_t _sortIndex;

  /// @brief Field _userId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__userId, put = __cordl_internal_set__userId))::StringW _userId;

  /// @brief Field _userName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__userName, put = __cordl_internal_set__userName))::StringW _userName;

  __declspec(property(get = get_connection))::GlobalNamespace::IConnection* connection;

  __declspec(property(get = get_connectionId)) uint8_t connectionId;

  __declspec(property(get = get_currentLatency)) int64_t currentLatency;

  __declspec(property(get = get_disconnectedReason))::GlobalNamespace::DisconnectedReason disconnectedReason;

  __declspec(property(get = get_encryptionState))::GlobalNamespace::__EncryptionUtility__IEncryptionState* encryptionState;

  __declspec(property(get = get_hasValidLatency)) bool hasValidLatency;

  __declspec(property(get = get_isConnected)) bool isConnected;

  __declspec(property(get = get_isConnectionOwner)) bool isConnectionOwner;

  __declspec(property(get = get_isDirectConnection)) bool isDirectConnection;

  __declspec(property(get = get_isKicked)) bool isKicked;

  __declspec(property(get = get_isMe)) bool isMe;

  __declspec(property(get = get_multiplayerAvatarsData, put = set_multiplayerAvatarsData))::GlobalNamespace::MultiplayerAvatarsData multiplayerAvatarsData;

  __declspec(property(get = get_offsetSyncTime)) int64_t offsetSyncTime;

  __declspec(property(get = get_publicEncryptionKey))::ArrayW<uint8_t, ::Array<uint8_t>*> publicEncryptionKey;

  __declspec(property(get = get_random))::ArrayW<uint8_t, ::Array<uint8_t>*> random;

  __declspec(property(get = get_remoteConnectionId)) uint8_t remoteConnectionId;

  __declspec(property(get = get_sortIndex)) int32_t sortIndex;

  __declspec(property(get = get_userId))::StringW userId;

  __declspec(property(get = get_userName))::StringW userName;

  /// @brief Convert operator to "::GlobalNamespace::IConnectedPlayer"
  constexpr operator ::GlobalNamespace::IConnectedPlayer*() noexcept;

  /// @brief Method CreateDirectlyConnectedPlayer, addr 0xe9ff68, size 0x1e0, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* CreateDirectlyConnectedPlayer(::GlobalNamespace::ConnectedPlayerManager* manager, uint8_t connectionId,
                                                                                                            ::GlobalNamespace::IConnection* connection);

  /// @brief Method CreateLocalPlayer, addr 0xe9fe40, size 0xc0, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* CreateLocalPlayer(::GlobalNamespace::ConnectedPlayerManager* manager, ::StringW userId, ::StringW userName,
                                                                                                bool isConnectionOwner, ::ArrayW<uint8_t, ::Array<uint8_t>*> publicEncryptionKey,
                                                                                                ::ArrayW<uint8_t, ::Array<uint8_t>*> random);

  /// @brief Method CreateRemoteConnectedPlayer, addr 0xea0c4c, size 0xd0, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* CreateRemoteConnectedPlayer(::GlobalNamespace::ConnectedPlayerManager* manager, uint8_t connectionId,
                                                                                                          ::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket* packet,
                                                                                                          ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* parent);

  /// @brief Method Disconnect, addr 0xe9ba94, size 0x148, virtual false, abstract: false, final false
  inline void Disconnect(::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method GetPlayerAvatarPacket, addr 0xe9fc38, size 0x80, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket* GetPlayerAvatarPacket();

  /// @brief Method GetPlayerConnectedPacket, addr 0xe9c1c0, size 0x70, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket* GetPlayerConnectedPacket();

  /// @brief Method GetPlayerIdentityPacket, addr 0xe9c47c, size 0x90, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket* GetPlayerIdentityPacket();

  /// @brief Method GetPlayerSortOrderPacket, addr 0xe9c414, size 0x68, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket* GetPlayerSortOrderPacket();

  /// @brief Method GetPlayerStatePacket, addr 0xe9fb44, size 0x60, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket* GetPlayerStatePacket();

  /// @brief Method HasState, addr 0xea1e98, size 0xc, virtual true, abstract: false, final true
  inline bool HasState(::StringW state);

  static inline ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* New_ctor(::GlobalNamespace::ConnectedPlayerManager* manager, uint8_t connectionId, uint8_t remoteConnectionId,
                                                                                       ::GlobalNamespace::IConnection* connection, ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* parent,
                                                                                       ::StringW userId, ::StringW userName, bool isConnectionOwner, bool isMe,
                                                                                       ::ArrayW<uint8_t, ::Array<uint8_t>*> publicEncryptionKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> random);

  /// @brief Method SetEncryptionState, addr 0xea1e90, size 0x8, virtual false, abstract: false, final false
  inline void SetEncryptionState(::GlobalNamespace::__EncryptionUtility__IEncryptionState* encryptionState);

  /// @brief Method SetKicked, addr 0xe9fa58, size 0xc, virtual false, abstract: false, final false
  inline void SetKicked();

  /// @brief Method SetPlayerState, addr 0xea1ea4, size 0x8, virtual false, abstract: false, final false
  inline void SetPlayerState(::GlobalNamespace::PlayerStateHash playerState);

  /// @brief Method ToString, addr 0xea1eac, size 0x17c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method UpdateAvatar, addr 0xea114c, size 0x24, virtual false, abstract: false, final false
  inline void UpdateAvatar(::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket* packet);

  /// @brief Method UpdateIdentity, addr 0xea0ea4, size 0x64, virtual false, abstract: false, final false
  inline void UpdateIdentity(::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket* packet);

  /// @brief Method UpdateLatency, addr 0xea1ad4, size 0x1c, virtual false, abstract: false, final false
  inline void UpdateLatency(int64_t latency);

  /// @brief Method UpdateSortIndex, addr 0xe9fda0, size 0x20, virtual false, abstract: false, final false
  inline bool UpdateSortIndex(int32_t index);

  /// @brief Method UpdateState, addr 0xea1068, size 0x1c, virtual false, abstract: false, final false
  inline void UpdateState(::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket* packet);

  constexpr ::GlobalNamespace::IConnection*& __cordl_internal_get__connection();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnection*> const& __cordl_internal_get__connection() const;

  constexpr uint8_t const& __cordl_internal_get__connectionId() const;

  constexpr uint8_t& __cordl_internal_get__connectionId();

  constexpr ::GlobalNamespace::DisconnectedReason const& __cordl_internal_get__disconnectedReason() const;

  constexpr ::GlobalNamespace::DisconnectedReason& __cordl_internal_get__disconnectedReason();

  constexpr ::GlobalNamespace::__EncryptionUtility__IEncryptionState*& __cordl_internal_get__encryptionState();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__EncryptionUtility__IEncryptionState*> const& __cordl_internal_get__encryptionState() const;

  constexpr bool const& __cordl_internal_get__isConnected() const;

  constexpr bool& __cordl_internal_get__isConnected();

  constexpr bool const& __cordl_internal_get__isConnectionOwner() const;

  constexpr bool& __cordl_internal_get__isConnectionOwner();

  constexpr bool const& __cordl_internal_get__isKicked() const;

  constexpr bool& __cordl_internal_get__isKicked();

  constexpr bool const& __cordl_internal_get__isMe() const;

  constexpr bool& __cordl_internal_get__isMe();

  constexpr ::GlobalNamespace::LongRollingAverage*& __cordl_internal_get__latency();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LongRollingAverage*> const& __cordl_internal_get__latency() const;

  constexpr ::GlobalNamespace::ConnectedPlayerManager*& __cordl_internal_get__manager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ConnectedPlayerManager*> const& __cordl_internal_get__manager() const;

  constexpr ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*& __cordl_internal_get__parent();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*> const& __cordl_internal_get__parent() const;

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

  constexpr void __cordl_internal_set__encryptionState(::GlobalNamespace::__EncryptionUtility__IEncryptionState* value);

  constexpr void __cordl_internal_set__isConnected(bool value);

  constexpr void __cordl_internal_set__isConnectionOwner(bool value);

  constexpr void __cordl_internal_set__isKicked(bool value);

  constexpr void __cordl_internal_set__isMe(bool value);

  constexpr void __cordl_internal_set__latency(::GlobalNamespace::LongRollingAverage* value);

  constexpr void __cordl_internal_set__manager(::GlobalNamespace::ConnectedPlayerManager* value);

  constexpr void __cordl_internal_set__parent(::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* value);

  constexpr void __cordl_internal_set__playerAvatars(::GlobalNamespace::MultiplayerAvatarsData value);

  constexpr void __cordl_internal_set__playerState(::GlobalNamespace::PlayerStateHash value);

  constexpr void __cordl_internal_set__publicEncryptionKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__random(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__remoteConnectionId(uint8_t value);

  constexpr void __cordl_internal_set__sortIndex(int32_t value);

  constexpr void __cordl_internal_set__userId(::StringW value);

  constexpr void __cordl_internal_set__userName(::StringW value);

  /// @brief Method .ctor, addr 0xea1cfc, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::ConnectedPlayerManager* manager, uint8_t connectionId, uint8_t remoteConnectionId, ::GlobalNamespace::IConnection* connection,
                    ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* parent, ::StringW userId, ::StringW userName, bool isConnectionOwner, bool isMe,
                    ::ArrayW<uint8_t, ::Array<uint8_t>*> publicEncryptionKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> random);

  /// @brief Method get_connection, addr 0xea1b7c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IConnection* get_connection();

  /// @brief Method get_connectionId, addr 0xea1b84, size 0x8, virtual false, abstract: false, final false
  inline uint8_t get_connectionId();

  /// @brief Method get_currentLatency, addr 0xea1c04, size 0x6c, virtual true, abstract: false, final true
  inline int64_t get_currentLatency();

  /// @brief Method get_disconnectedReason, addr 0xea1bac, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::DisconnectedReason get_disconnectedReason();

  /// @brief Method get_encryptionState, addr 0xea1cf4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__EncryptionUtility__IEncryptionState* get_encryptionState();

  /// @brief Method get_hasValidLatency, addr 0xea1bd4, size 0x30, virtual true, abstract: false, final true
  inline bool get_hasValidLatency();

  /// @brief Method get_isConnected, addr 0xea1b94, size 0x8, virtual true, abstract: false, final true
  inline bool get_isConnected();

  /// @brief Method get_isConnectionOwner, addr 0xea1b9c, size 0x8, virtual true, abstract: false, final true
  inline bool get_isConnectionOwner();

  /// @brief Method get_isDirectConnection, addr 0xe9c324, size 0x10, virtual false, abstract: false, final false
  inline bool get_isDirectConnection();

  /// @brief Method get_isKicked, addr 0xea1ba4, size 0x8, virtual true, abstract: false, final true
  inline bool get_isKicked();

  /// @brief Method get_isMe, addr 0xea1bcc, size 0x8, virtual true, abstract: false, final true
  inline bool get_isMe();

  /// @brief Method get_multiplayerAvatarsData, addr 0xea1cbc, size 0x14, virtual true, abstract: false, final true
  inline ::GlobalNamespace::MultiplayerAvatarsData get_multiplayerAvatarsData();

  /// @brief Method get_offsetSyncTime, addr 0xea1c70, size 0x4c, virtual true, abstract: false, final true
  inline int64_t get_offsetSyncTime();

  /// @brief Method get_publicEncryptionKey, addr 0xea1ce4, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_publicEncryptionKey();

  /// @brief Method get_random, addr 0xea1cec, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_random();

  /// @brief Method get_remoteConnectionId, addr 0xea1b8c, size 0x8, virtual false, abstract: false, final false
  inline uint8_t get_remoteConnectionId();

  /// @brief Method get_sortIndex, addr 0xea1bb4, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_sortIndex();

  /// @brief Method get_userId, addr 0xea1bbc, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_userId();

  /// @brief Method get_userName, addr 0xea1bc4, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_userName();

  /// @brief Convert to "::GlobalNamespace::IConnectedPlayer"
  constexpr ::GlobalNamespace::IConnectedPlayer* i___GlobalNamespace__IConnectedPlayer() noexcept;

  /// @brief Method set_multiplayerAvatarsData, addr 0xea1cd0, size 0x14, virtual false, abstract: false, final false
  inline void set_multiplayerAvatarsData(::GlobalNamespace::MultiplayerAvatarsData value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConnectedPlayerManager__ConnectedPlayer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ConnectedPlayerManager__ConnectedPlayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConnectedPlayerManager__ConnectedPlayer(__ConnectedPlayerManager__ConnectedPlayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConnectedPlayerManager__ConnectedPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConnectedPlayerManager__ConnectedPlayer(__ConnectedPlayerManager__ConnectedPlayer const&) = delete;

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
  ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* ____parent;

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
  ::GlobalNamespace::__EncryptionUtility__IEncryptionState* ____encryptionState;

  /// @brief Field _latency, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::LongRollingAverage* ____latency;

  /// @brief Field kFixedSyncTimeOffset offset 0xffffffff size 0x8
  static constexpr int64_t kFixedSyncTimeOffset{ static_cast<int64_t>(0x21) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer, 0xa0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer, ____userId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer, ____userName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer, ____isMe) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer, ____isConnectionOwner) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer, ____manager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer, ____connection) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer, ____parent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer, ____connectionId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer, ____remoteConnectionId) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer, ____sortIndex) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer, ____isConnected) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer, ____disconnectedReason) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer, ____isKicked) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer, ____playerState) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer, ____playerAvatars) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer, ____publicEncryptionKey) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer, ____random) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer, ____encryptionState) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer, ____latency) == 0x98, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::InternalMessageType
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::ConnectedPlayerManager::InternalMessageType
struct CORDL_TYPE __ConnectedPlayerManager__InternalMessageType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct ____ConnectedPlayerManager__InternalMessageType_Unwrapped
  enum struct ____ConnectedPlayerManager__InternalMessageType_Unwrapped : uint8_t {
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
  constexpr operator ____ConnectedPlayerManager__InternalMessageType_Unwrapped() const noexcept {
    return static_cast<____ConnectedPlayerManager__InternalMessageType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConnectedPlayerManager__InternalMessageType();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr __ConnectedPlayerManager__InternalMessageType(uint8_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief Field KickPlayer value: static_cast<uint8_t>(0x8u)
  static ::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType const KickPlayer;

  /// @brief Field MultiplayerSession value: static_cast<uint8_t>(0x7u)
  static ::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType const MultiplayerSession;

  /// @brief Field Party value: static_cast<uint8_t>(0x6u)
  static ::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType const Party;

  /// @brief Field Ping value: static_cast<uint8_t>(0xbu)
  static ::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType const Ping;

  /// @brief Field PlayerAvatarUpdate value: static_cast<uint8_t>(0xau)
  static ::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType const PlayerAvatarUpdate;

  /// @brief Field PlayerConnected value: static_cast<uint8_t>(0x1u)
  static ::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType const PlayerConnected;

  /// @brief Field PlayerDisconnected value: static_cast<uint8_t>(0x4u)
  static ::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType const PlayerDisconnected;

  /// @brief Field PlayerIdentity value: static_cast<uint8_t>(0x2u)
  static ::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType const PlayerIdentity;

  /// @brief Field PlayerLatencyUpdate value: static_cast<uint8_t>(0x3u)
  static ::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType const PlayerLatencyUpdate;

  /// @brief Field PlayerSortOrderUpdate value: static_cast<uint8_t>(0x5u)
  static ::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType const PlayerSortOrderUpdate;

  /// @brief Field PlayerStateUpdate value: static_cast<uint8_t>(0x9u)
  static ::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType const PlayerStateUpdate;

  /// @brief Field Pong value: static_cast<uint8_t>(0xcu)
  static ::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType const Pong;

  /// @brief Field SyncTime value: static_cast<uint8_t>(0x0u)
  static ::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType const SyncTime;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType, 0x1>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MessageType
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::ConnectedPlayerManager::MessageType
struct CORDL_TYPE __ConnectedPlayerManager__MessageType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct ____ConnectedPlayerManager__MessageType_Unwrapped
  enum struct ____ConnectedPlayerManager__MessageType_Unwrapped : uint8_t {
    __E_Party = static_cast<uint8_t>(0x6u),
    __E_MultiplayerSession = static_cast<uint8_t>(0x7u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ConnectedPlayerManager__MessageType_Unwrapped() const noexcept {
    return static_cast<____ConnectedPlayerManager__MessageType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConnectedPlayerManager__MessageType();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr __ConnectedPlayerManager__MessageType(uint8_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief Field MultiplayerSession value: static_cast<uint8_t>(0x7u)
  static ::GlobalNamespace::__ConnectedPlayerManager__MessageType const MultiplayerSession;

  /// @brief Field Party value: static_cast<uint8_t>(0x6u)
  static ::GlobalNamespace::__ConnectedPlayerManager__MessageType const Party;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ConnectedPlayerManager__MessageType, 0x1>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ConnectedPlayerManager__MessageType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PlayerConnectedPacket
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ConnectedPlayerManager::PlayerConnectedPacket*
class CORDL_TYPE __ConnectedPlayerManager__PlayerConnectedPacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field isConnectionOwner, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_isConnectionOwner, put = __cordl_internal_set_isConnectionOwner)) bool isConnectionOwner;

  /// @brief Field remoteConnectionId, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_remoteConnectionId, put = __cordl_internal_set_remoteConnectionId)) uint8_t remoteConnectionId;

  /// @brief Field userId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_userId, put = __cordl_internal_set_userId))::StringW userId;

  /// @brief Field userName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_userName, put = __cordl_internal_set_userName))::StringW userName;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Method Deserialize, addr 0xea2088, size 0x68, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Init, addr 0xea1dfc, size 0x14, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket* Init(uint8_t connectionId, ::StringW userId, ::StringW userName, bool isConnectionOwner);

  static inline ::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket* New_ctor();

  /// @brief Method Release, addr 0xea0d1c, size 0x54, virtual true, abstract: false, final true
  inline void Release();

  /// @brief Method Serialize, addr 0xea2028, size 0x60, virtual true, abstract: false, final true
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

  /// @brief Method .ctor, addr 0xea20f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_pool, addr 0xe9ea5c, size 0x40, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket*>* get_pool();

  /// @brief Convert to "::GlobalNamespace::IPoolablePacket"
  constexpr ::GlobalNamespace::IPoolablePacket* i___GlobalNamespace__IPoolablePacket() noexcept;

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConnectedPlayerManager__PlayerConnectedPacket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ConnectedPlayerManager__PlayerConnectedPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConnectedPlayerManager__PlayerConnectedPacket(__ConnectedPlayerManager__PlayerConnectedPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConnectedPlayerManager__PlayerConnectedPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConnectedPlayerManager__PlayerConnectedPacket(__ConnectedPlayerManager__PlayerConnectedPacket const&) = delete;

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket, ___remoteConnectionId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket, ___userId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket, ___userName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket, ___isConnectionOwner) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PlayerIdentityPacket
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ConnectedPlayerManager::PlayerIdentityPacket*
class CORDL_TYPE __ConnectedPlayerManager__PlayerIdentityPacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field playerAvatar, offset 0x20, size 0x18
  __declspec(property(get = __cordl_internal_get_playerAvatar, put = __cordl_internal_set_playerAvatar))::GlobalNamespace::MultiplayerAvatarsData playerAvatar;

  /// @brief Field playerState, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_playerState, put = __cordl_internal_set_playerState))::GlobalNamespace::PlayerStateHash playerState;

  /// @brief Field publicEncryptionKey, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_publicEncryptionKey, put = __cordl_internal_set_publicEncryptionKey))::GlobalNamespace::ByteArrayNetSerializable* publicEncryptionKey;

  /// @brief Field random, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_random, put = __cordl_internal_set_random))::GlobalNamespace::ByteArrayNetSerializable* random;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Method Deserialize, addr 0xea2150, size 0x80, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Init, addr 0xea1e10, size 0x58, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket* Init(::GlobalNamespace::PlayerStateHash states, ::GlobalNamespace::MultiplayerAvatarsData avatar,
                                                                                 ::ArrayW<uint8_t, ::Array<uint8_t>*> random, ::ArrayW<uint8_t, ::Array<uint8_t>*> publicEncryptionKey);

  static inline ::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket* New_ctor();

  /// @brief Method Release, addr 0xea21d0, size 0x6c, virtual true, abstract: false, final true
  inline void Release();

  /// @brief Method Serialize, addr 0xea20f8, size 0x58, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  constexpr ::GlobalNamespace::MultiplayerAvatarsData const& __cordl_internal_get_playerAvatar() const;

  constexpr ::GlobalNamespace::MultiplayerAvatarsData& __cordl_internal_get_playerAvatar();

  constexpr ::GlobalNamespace::PlayerStateHash const& __cordl_internal_get_playerState() const;

  constexpr ::GlobalNamespace::PlayerStateHash& __cordl_internal_get_playerState();

  constexpr ::GlobalNamespace::ByteArrayNetSerializable*& __cordl_internal_get_publicEncryptionKey();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ByteArrayNetSerializable*> const& __cordl_internal_get_publicEncryptionKey() const;

  constexpr ::GlobalNamespace::ByteArrayNetSerializable*& __cordl_internal_get_random();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ByteArrayNetSerializable*> const& __cordl_internal_get_random() const;

  constexpr void __cordl_internal_set_playerAvatar(::GlobalNamespace::MultiplayerAvatarsData value);

  constexpr void __cordl_internal_set_playerState(::GlobalNamespace::PlayerStateHash value);

  constexpr void __cordl_internal_set_publicEncryptionKey(::GlobalNamespace::ByteArrayNetSerializable* value);

  constexpr void __cordl_internal_set_random(::GlobalNamespace::ByteArrayNetSerializable* value);

  /// @brief Method .ctor, addr 0xea223c, size 0xec, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_pool, addr 0xe9ea9c, size 0x40, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket*>* get_pool();

  /// @brief Convert to "::GlobalNamespace::IPoolablePacket"
  constexpr ::GlobalNamespace::IPoolablePacket* i___GlobalNamespace__IPoolablePacket() noexcept;

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConnectedPlayerManager__PlayerIdentityPacket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ConnectedPlayerManager__PlayerIdentityPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConnectedPlayerManager__PlayerIdentityPacket(__ConnectedPlayerManager__PlayerIdentityPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConnectedPlayerManager__PlayerIdentityPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConnectedPlayerManager__PlayerIdentityPacket(__ConnectedPlayerManager__PlayerIdentityPacket const&) = delete;

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket, ___playerState) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket, ___playerAvatar) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket, ___random) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket, ___publicEncryptionKey) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PlayerAvatarPacket
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ConnectedPlayerManager::PlayerAvatarPacket*
class CORDL_TYPE __ConnectedPlayerManager__PlayerAvatarPacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field playerAvatar, offset 0x10, size 0x18
  __declspec(property(get = __cordl_internal_get_playerAvatar, put = __cordl_internal_set_playerAvatar))::GlobalNamespace::MultiplayerAvatarsData playerAvatar;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Method Deserialize, addr 0xea2334, size 0x40, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Init, addr 0xea1e70, size 0x14, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket* Init(::GlobalNamespace::MultiplayerAvatarsData avatar);

  static inline ::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket* New_ctor();

  /// @brief Method Release, addr 0xea2374, size 0x54, virtual true, abstract: false, final true
  inline void Release();

  /// @brief Method Serialize, addr 0xea2328, size 0xc, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  constexpr ::GlobalNamespace::MultiplayerAvatarsData const& __cordl_internal_get_playerAvatar() const;

  constexpr ::GlobalNamespace::MultiplayerAvatarsData& __cordl_internal_get_playerAvatar();

  constexpr void __cordl_internal_set_playerAvatar(::GlobalNamespace::MultiplayerAvatarsData value);

  /// @brief Method .ctor, addr 0xea23c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_pool, addr 0xe9ebdc, size 0x40, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket*>* get_pool();

  /// @brief Convert to "::GlobalNamespace::IPoolablePacket"
  constexpr ::GlobalNamespace::IPoolablePacket* i___GlobalNamespace__IPoolablePacket() noexcept;

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConnectedPlayerManager__PlayerAvatarPacket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ConnectedPlayerManager__PlayerAvatarPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConnectedPlayerManager__PlayerAvatarPacket(__ConnectedPlayerManager__PlayerAvatarPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConnectedPlayerManager__PlayerAvatarPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConnectedPlayerManager__PlayerAvatarPacket(__ConnectedPlayerManager__PlayerAvatarPacket const&) = delete;

  /// @brief Field playerAvatar, offset: 0x10, size: 0x18, def value: None
  ::GlobalNamespace::MultiplayerAvatarsData ___playerAvatar;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket, ___playerAvatar) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PlayerStatePacket
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ConnectedPlayerManager::PlayerStatePacket*
class CORDL_TYPE __ConnectedPlayerManager__PlayerStatePacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field playerState, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_playerState, put = __cordl_internal_set_playerState))::GlobalNamespace::PlayerStateHash playerState;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Method Deserialize, addr 0xea23dc, size 0x20, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Init, addr 0xea1e68, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket* Init(::GlobalNamespace::PlayerStateHash states);

  static inline ::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket* New_ctor();

  /// @brief Method Release, addr 0xea23fc, size 0x54, virtual true, abstract: false, final true
  inline void Release();

  /// @brief Method Serialize, addr 0xea23d0, size 0xc, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  constexpr ::GlobalNamespace::PlayerStateHash const& __cordl_internal_get_playerState() const;

  constexpr ::GlobalNamespace::PlayerStateHash& __cordl_internal_get_playerState();

  constexpr void __cordl_internal_set_playerState(::GlobalNamespace::PlayerStateHash value);

  /// @brief Method .ctor, addr 0xea2450, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_pool, addr 0xe9ec1c, size 0x40, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket*>* get_pool();

  /// @brief Convert to "::GlobalNamespace::IPoolablePacket"
  constexpr ::GlobalNamespace::IPoolablePacket* i___GlobalNamespace__IPoolablePacket() noexcept;

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConnectedPlayerManager__PlayerStatePacket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ConnectedPlayerManager__PlayerStatePacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConnectedPlayerManager__PlayerStatePacket(__ConnectedPlayerManager__PlayerStatePacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConnectedPlayerManager__PlayerStatePacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConnectedPlayerManager__PlayerStatePacket(__ConnectedPlayerManager__PlayerStatePacket const&) = delete;

  /// @brief Field playerState, offset: 0x10, size: 0x10, def value: None
  ::GlobalNamespace::PlayerStateHash ___playerState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket, ___playerState) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PlayerSortOrderPacket
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ConnectedPlayerManager::PlayerSortOrderPacket*
class CORDL_TYPE __ConnectedPlayerManager__PlayerSortOrderPacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field sortIndex, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_sortIndex, put = __cordl_internal_set_sortIndex)) int32_t sortIndex;

  /// @brief Field userId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_userId, put = __cordl_internal_set_userId))::StringW userId;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Method Deserialize, addr 0xea2498, size 0x44, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Init, addr 0xea1e84, size 0xc, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket* Init(::StringW userId, int32_t sortIndex);

  static inline ::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket* New_ctor();

  /// @brief Method Release, addr 0xea14cc, size 0x54, virtual true, abstract: false, final true
  inline void Release();

  /// @brief Method Serialize, addr 0xea2458, size 0x40, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  constexpr int32_t const& __cordl_internal_get_sortIndex() const;

  constexpr int32_t& __cordl_internal_get_sortIndex();

  constexpr ::StringW const& __cordl_internal_get_userId() const;

  constexpr ::StringW& __cordl_internal_get_userId();

  constexpr void __cordl_internal_set_sortIndex(int32_t value);

  constexpr void __cordl_internal_set_userId(::StringW value);

  /// @brief Method .ctor, addr 0xea24dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_pool, addr 0xe9eb1c, size 0x40, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket*>* get_pool();

  /// @brief Convert to "::GlobalNamespace::IPoolablePacket"
  constexpr ::GlobalNamespace::IPoolablePacket* i___GlobalNamespace__IPoolablePacket() noexcept;

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConnectedPlayerManager__PlayerSortOrderPacket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ConnectedPlayerManager__PlayerSortOrderPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConnectedPlayerManager__PlayerSortOrderPacket(__ConnectedPlayerManager__PlayerSortOrderPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConnectedPlayerManager__PlayerSortOrderPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConnectedPlayerManager__PlayerSortOrderPacket(__ConnectedPlayerManager__PlayerSortOrderPacket const&) = delete;

  /// @brief Field userId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___userId;

  /// @brief Field sortIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ___sortIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket, ___userId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket, ___sortIndex) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PlayerDisconnectedPacket
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ConnectedPlayerManager::PlayerDisconnectedPacket*
class CORDL_TYPE __ConnectedPlayerManager__PlayerDisconnectedPacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field disconnectedReason, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_disconnectedReason, put = __cordl_internal_set_disconnectedReason))::GlobalNamespace::DisconnectedReason disconnectedReason;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Method Deserialize, addr 0xea24f8, size 0x20, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Init, addr 0xea0260, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket* Init(::GlobalNamespace::DisconnectedReason disconnectedReason);

  static inline ::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket* New_ctor();

  /// @brief Method Release, addr 0xea1218, size 0x54, virtual true, abstract: false, final true
  inline void Release();

  /// @brief Method Serialize, addr 0xea24e4, size 0x14, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  constexpr ::GlobalNamespace::DisconnectedReason const& __cordl_internal_get_disconnectedReason() const;

  constexpr ::GlobalNamespace::DisconnectedReason& __cordl_internal_get_disconnectedReason();

  constexpr void __cordl_internal_set_disconnectedReason(::GlobalNamespace::DisconnectedReason value);

  /// @brief Method .ctor, addr 0xea2518, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_pool, addr 0xe9eadc, size 0x40, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket*>* get_pool();

  /// @brief Convert to "::GlobalNamespace::IPoolablePacket"
  constexpr ::GlobalNamespace::IPoolablePacket* i___GlobalNamespace__IPoolablePacket() noexcept;

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConnectedPlayerManager__PlayerDisconnectedPacket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ConnectedPlayerManager__PlayerDisconnectedPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConnectedPlayerManager__PlayerDisconnectedPacket(__ConnectedPlayerManager__PlayerDisconnectedPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConnectedPlayerManager__PlayerDisconnectedPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConnectedPlayerManager__PlayerDisconnectedPacket(__ConnectedPlayerManager__PlayerDisconnectedPacket const&) = delete;

  /// @brief Field disconnectedReason, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::DisconnectedReason ___disconnectedReason;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket, ___disconnectedReason) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::KickPlayerPacket
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ConnectedPlayerManager::KickPlayerPacket*
class CORDL_TYPE __ConnectedPlayerManager__KickPlayerPacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field disconnectedReason, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_disconnectedReason, put = __cordl_internal_set_disconnectedReason))::GlobalNamespace::DisconnectedReason disconnectedReason;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Method Deserialize, addr 0xea253c, size 0x20, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Init, addr 0xe9fa50, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket* Init(::GlobalNamespace::DisconnectedReason disconnectedReason);

  static inline ::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket* New_ctor();

  /// @brief Method Release, addr 0xea134c, size 0x54, virtual true, abstract: false, final true
  inline void Release();

  /// @brief Method Serialize, addr 0xea2528, size 0x14, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  constexpr ::GlobalNamespace::DisconnectedReason const& __cordl_internal_get_disconnectedReason() const;

  constexpr ::GlobalNamespace::DisconnectedReason& __cordl_internal_get_disconnectedReason();

  constexpr void __cordl_internal_set_disconnectedReason(::GlobalNamespace::DisconnectedReason value);

  /// @brief Method .ctor, addr 0xea255c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_pool, addr 0xe9eb9c, size 0x40, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket*>* get_pool();

  /// @brief Convert to "::GlobalNamespace::IPoolablePacket"
  constexpr ::GlobalNamespace::IPoolablePacket* i___GlobalNamespace__IPoolablePacket() noexcept;

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConnectedPlayerManager__KickPlayerPacket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ConnectedPlayerManager__KickPlayerPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConnectedPlayerManager__KickPlayerPacket(__ConnectedPlayerManager__KickPlayerPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConnectedPlayerManager__KickPlayerPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConnectedPlayerManager__KickPlayerPacket(__ConnectedPlayerManager__KickPlayerPacket const&) = delete;

  /// @brief Field disconnectedReason, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::DisconnectedReason ___disconnectedReason;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket, ___disconnectedReason) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SyncTimePacket
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ConnectedPlayerManager::SyncTimePacket*
class CORDL_TYPE __ConnectedPlayerManager__SyncTimePacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field syncTime, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_syncTime, put = __cordl_internal_set_syncTime)) int64_t syncTime;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Method Deserialize, addr 0xea2578, size 0x20, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Init, addr 0xea1904, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket* Init(int64_t syncTime);

  static inline ::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket* New_ctor();

  /// @brief Method Release, addr 0xea1660, size 0x54, virtual true, abstract: false, final true
  inline void Release();

  /// @brief Method Serialize, addr 0xea2564, size 0x14, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  constexpr int64_t const& __cordl_internal_get_syncTime() const;

  constexpr int64_t& __cordl_internal_get_syncTime();

  constexpr void __cordl_internal_set_syncTime(int64_t value);

  /// @brief Method .ctor, addr 0xea2598, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_pool, addr 0xe9eb5c, size 0x40, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket*>* get_pool();

  /// @brief Convert to "::GlobalNamespace::IPoolablePacket"
  constexpr ::GlobalNamespace::IPoolablePacket* i___GlobalNamespace__IPoolablePacket() noexcept;

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConnectedPlayerManager__SyncTimePacket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ConnectedPlayerManager__SyncTimePacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConnectedPlayerManager__SyncTimePacket(__ConnectedPlayerManager__SyncTimePacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConnectedPlayerManager__SyncTimePacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConnectedPlayerManager__SyncTimePacket(__ConnectedPlayerManager__SyncTimePacket const&) = delete;

  /// @brief Field syncTime, offset: 0x10, size: 0x8, def value: None
  int64_t ___syncTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket, ___syncTime) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PingPacket
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ConnectedPlayerManager::PingPacket*
class CORDL_TYPE __ConnectedPlayerManager__PingPacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field pingTime, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_pingTime, put = __cordl_internal_set_pingTime)) int64_t pingTime;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Method Deserialize, addr 0xea25b4, size 0x20, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Init, addr 0xe9c0d4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__ConnectedPlayerManager__PingPacket* Init(int64_t pingTime);

  static inline ::GlobalNamespace::__ConnectedPlayerManager__PingPacket* New_ctor();

  /// @brief Method Release, addr 0xea18a8, size 0x54, virtual true, abstract: false, final true
  inline void Release();

  /// @brief Method Serialize, addr 0xea25a0, size 0x14, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  constexpr int64_t const& __cordl_internal_get_pingTime() const;

  constexpr int64_t& __cordl_internal_get_pingTime();

  constexpr void __cordl_internal_set_pingTime(int64_t value);

  /// @brief Method .ctor, addr 0xea25d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_pool, addr 0xe9bfc8, size 0x40, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::__ConnectedPlayerManager__PingPacket*>* get_pool();

  /// @brief Convert to "::GlobalNamespace::IPoolablePacket"
  constexpr ::GlobalNamespace::IPoolablePacket* i___GlobalNamespace__IPoolablePacket() noexcept;

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConnectedPlayerManager__PingPacket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ConnectedPlayerManager__PingPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConnectedPlayerManager__PingPacket(__ConnectedPlayerManager__PingPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConnectedPlayerManager__PingPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConnectedPlayerManager__PingPacket(__ConnectedPlayerManager__PingPacket const&) = delete;

  /// @brief Field pingTime, offset: 0x10, size: 0x8, def value: None
  int64_t ___pingTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ConnectedPlayerManager__PingPacket, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ConnectedPlayerManager__PingPacket, ___pingTime) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PongPacket
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ConnectedPlayerManager::PongPacket*
class CORDL_TYPE __ConnectedPlayerManager__PongPacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field pingTime, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_pingTime, put = __cordl_internal_set_pingTime)) int64_t pingTime;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Method Deserialize, addr 0xea25f0, size 0x20, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Init, addr 0xea18fc, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__ConnectedPlayerManager__PongPacket* Init(int64_t pingTime);

  static inline ::GlobalNamespace::__ConnectedPlayerManager__PongPacket* New_ctor();

  /// @brief Method Release, addr 0xea1a80, size 0x54, virtual true, abstract: false, final true
  inline void Release();

  /// @brief Method Serialize, addr 0xea25dc, size 0x14, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  constexpr int64_t const& __cordl_internal_get_pingTime() const;

  constexpr int64_t& __cordl_internal_get_pingTime();

  constexpr void __cordl_internal_set_pingTime(int64_t value);

  /// @brief Method .ctor, addr 0xea2610, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_pool, addr 0xe9ec5c, size 0x40, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::__ConnectedPlayerManager__PongPacket*>* get_pool();

  /// @brief Convert to "::GlobalNamespace::IPoolablePacket"
  constexpr ::GlobalNamespace::IPoolablePacket* i___GlobalNamespace__IPoolablePacket() noexcept;

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConnectedPlayerManager__PongPacket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ConnectedPlayerManager__PongPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConnectedPlayerManager__PongPacket(__ConnectedPlayerManager__PongPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConnectedPlayerManager__PongPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConnectedPlayerManager__PongPacket(__ConnectedPlayerManager__PongPacket const&) = delete;

  /// @brief Field pingTime, offset: 0x10, size: 0x8, def value: None
  int64_t ___pingTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ConnectedPlayerManager__PongPacket, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ConnectedPlayerManager__PongPacket, ___pingTime) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<InitializePlayerEncryption>d__132
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::ConnectedPlayerManager::<InitializePlayerEncryption>d__132
struct CORDL_TYPE __ConnectedPlayerManager___InitializePlayerEncryption_d__132 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0xea2618, size 0x4e8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0xea2c6c, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConnectedPlayerManager___InitializePlayerEncryption_d__132();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::ConnectedPlayerManager*", modifiers: "",
  // def_value: None }, CppParam { name: "player", ty: "::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*", modifiers: "", def_value: None }, CppParam { name: "_isClient_5__2", ty: "bool",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t,::Array<uint8_t>*>>", modifiers: "", def_value: None },
  // CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>", modifiers: "", def_value: None }]
  constexpr __ConnectedPlayerManager___InitializePlayerEncryption_d__132(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                         ::GlobalNamespace::ConnectedPlayerManager* __4__this, ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* player,
                                                                         bool _isClient_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t, ::Array<uint8_t>*>> __u__1,
                                                                         ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__EncryptionUtility__IEncryptionState*> __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::ConnectedPlayerManager* __4__this;

  /// @brief Field player, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* player;

  /// @brief Field <isClient>5__2, offset: 0x38, size: 0x1, def value: None
  bool _isClient_5__2;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t, ::Array<uint8_t>*>> __u__1;

  /// @brief Field <>u__2, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__EncryptionUtility__IEncryptionState*> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ConnectedPlayerManager___InitializePlayerEncryption_d__132, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ConnectedPlayerManager___InitializePlayerEncryption_d__132, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ConnectedPlayerManager___InitializePlayerEncryption_d__132, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ConnectedPlayerManager___InitializePlayerEncryption_d__132, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ConnectedPlayerManager___InitializePlayerEncryption_d__132, player) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ConnectedPlayerManager___InitializePlayerEncryption_d__132, _isClient_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ConnectedPlayerManager___InitializePlayerEncryption_d__132, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ConnectedPlayerManager___InitializePlayerEncryption_d__132, __u__2) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ConnectedPlayerManager
// SizeInfo { instance_size: 280, native_size: -1, calculated_instance_size: 280, calculated_native_size: 280, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ConnectedPlayerManager*
class CORDL_TYPE ConnectedPlayerManager : public ::System::Object {
public:
  // Declarations
  using ConnectedPlayer = ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer;

  using InternalMessageType = ::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType;

  using KickPlayerPacket = ::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket;

  using MessageType = ::GlobalNamespace::__ConnectedPlayerManager__MessageType;

  using PingPacket = ::GlobalNamespace::__ConnectedPlayerManager__PingPacket;

  using PlayerAvatarPacket = ::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket;

  using PlayerConnectedPacket = ::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket;

  using PlayerDisconnectedPacket = ::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket;

  using PlayerIdentityPacket = ::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket;

  using PlayerSortOrderPacket = ::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket;

  using PlayerStatePacket = ::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket;

  using PongPacket = ::GlobalNamespace::__ConnectedPlayerManager__PongPacket;

  using SyncTimePacket = ::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket;

  using _InitializePlayerEncryption_d__132 = ::GlobalNamespace::__ConnectedPlayerManager___InitializePlayerEncryption_d__132;

  /// @brief Field _connectionManager, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__connectionManager, put = __cordl_internal_set__connectionManager))::GlobalNamespace::IConnectionManager* _connectionManager;

  /// @brief Field _encryptionKeys, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__encryptionKeys, put = __cordl_internal_set__encryptionKeys))::GlobalNamespace::IDiffieHellmanKeyPair* _encryptionKeys;

  /// @brief Field _encryptionRandom, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__encryptionRandom, put = __cordl_internal_set__encryptionRandom))::ArrayW<uint8_t, ::Array<uint8_t>*> _encryptionRandom;

  /// @brief Field _lastConnectionId, offset 0xf0, size 0x1
  __declspec(property(get = __cordl_internal_get__lastConnectionId, put = __cordl_internal_set__lastConnectionId)) uint8_t _lastConnectionId;

  /// @brief Field _lastPingTime, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__lastPingTime, put = __cordl_internal_set__lastPingTime)) int64_t _lastPingTime;

  /// @brief Field _lastPollFrame, offset 0x100, size 0x4
  __declspec(property(get = __cordl_internal_get__lastPollFrame, put = __cordl_internal_set__lastPollFrame)) int32_t _lastPollFrame;

  /// @brief Field _lastPollTime, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__lastPollTime, put = __cordl_internal_set__lastPollTime)) int64_t _lastPollTime;

  /// @brief Field _localPlayer, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__localPlayer, put = __cordl_internal_set__localPlayer))::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* _localPlayer;

  /// @brief Field _localPlayerAvatars, offset 0xc0, size 0x18
  __declspec(property(get = __cordl_internal_get__localPlayerAvatars, put = __cordl_internal_set__localPlayerAvatars))::GlobalNamespace::MultiplayerAvatarsData _localPlayerAvatars;

  /// @brief Field _localPlayerState, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__localPlayerState, put = __cordl_internal_set__localPlayerState))::System::Collections::Generic::HashSet_1<::StringW>* _localPlayerState;

  /// @brief Field _messageSerializer, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get__messageSerializer,
                      put = __cordl_internal_set__messageSerializer))::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType,
                                                                                                                  ::GlobalNamespace::IConnectedPlayer*>* _messageSerializer;

  /// @brief Field _players, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__players,
                      put = __cordl_internal_set__players))::System::Collections::Generic::List_1<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>* _players;

  /// @brief Field _reliableDataWriter, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__reliableDataWriter, put = __cordl_internal_set__reliableDataWriter))::LiteNetLib::Utils::NetDataWriter* _reliableDataWriter;

  /// @brief Field _startTicks, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__startTicks, put = __cordl_internal_set__startTicks)) int64_t _startTicks;

  /// @brief Field _syncTimeOffset, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__syncTimeOffset, put = __cordl_internal_set__syncTimeOffset))::GlobalNamespace::LongRollingAverage* _syncTimeOffset;

  /// @brief Field _taskUtility, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__taskUtility, put = __cordl_internal_set__taskUtility))::BGNet::Core::ITaskUtility* _taskUtility;

  /// @brief Field _temporaryDataWriter, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__temporaryDataWriter, put = __cordl_internal_set__temporaryDataWriter))::LiteNetLib::Utils::NetDataWriter* _temporaryDataWriter;

  /// @brief Field _temporaryEncryptedDataWriter, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__temporaryEncryptedDataWriter,
                      put = __cordl_internal_set__temporaryEncryptedDataWriter))::LiteNetLib::Utils::NetDataWriter* _temporaryEncryptedDataWriter;

  /// @brief Field _timeProvider, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__timeProvider, put = __cordl_internal_set__timeProvider))::BGNet::Core::ITimeProvider* _timeProvider;

  /// @brief Field _unreliableDataWriter, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__unreliableDataWriter, put = __cordl_internal_set__unreliableDataWriter))::LiteNetLib::Utils::NetDataWriter* _unreliableDataWriter;

  /// @brief Field connectedEvent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_connectedEvent, put = __cordl_internal_set_connectedEvent))::System::Action* connectedEvent;

  __declspec(property(get = get_connectedPlayerCount)) int32_t connectedPlayerCount;

  /// @brief Field connectionFailedEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_connectionFailedEvent,
                      put = __cordl_internal_set_connectionFailedEvent))::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* connectionFailedEvent;

  /// @brief Field disconnectedEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_disconnectedEvent, put = __cordl_internal_set_disconnectedEvent))::System::Action_1<::GlobalNamespace::DisconnectedReason>* disconnectedEvent;

  /// @brief Field initializedEvent, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_initializedEvent, put = __cordl_internal_set_initializedEvent))::System::Action* initializedEvent;

  __declspec(property(get = get_isConnected)) bool isConnected;

  __declspec(property(get = get_isConnectedOrConnecting)) bool isConnectedOrConnecting;

  __declspec(property(get = get_isConnecting)) bool isConnecting;

  __declspec(property(get = get_isConnectionOwner)) bool isConnectionOwner;

  __declspec(property(get = get_isDisconnecting)) bool isDisconnecting;

  __declspec(property(get = get_localPlayer))::GlobalNamespace::IConnectedPlayer* localPlayer;

  /// @brief Field playerAvatarChangedEvent, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_playerAvatarChangedEvent,
                      put = __cordl_internal_set_playerAvatarChangedEvent))::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* playerAvatarChangedEvent;

  /// @brief Field playerConnectedEvent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_playerConnectedEvent, put = __cordl_internal_set_playerConnectedEvent))::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* playerConnectedEvent;

  /// @brief Field playerDisconnectedEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_playerDisconnectedEvent,
                      put = __cordl_internal_set_playerDisconnectedEvent))::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* playerDisconnectedEvent;

  /// @brief Field playerLatencyInitializedEvent, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_playerLatencyInitializedEvent,
                      put = __cordl_internal_set_playerLatencyInitializedEvent))::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* playerLatencyInitializedEvent;

  /// @brief Field playerOrderChangedEvent, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_playerOrderChangedEvent,
                      put = __cordl_internal_set_playerOrderChangedEvent))::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* playerOrderChangedEvent;

  /// @brief Field playerStateChangedEvent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_playerStateChangedEvent,
                      put = __cordl_internal_set_playerStateChangedEvent))::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* playerStateChangedEvent;

  __declspec(property(get = get_runTime)) int64_t runTime;

  __declspec(property(get = get_syncTime)) int64_t syncTime;

  __declspec(property(get = get_syncTimeInitialized)) bool syncTimeInitialized;

  /// @brief Field syncTimeInitializedEvent, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_syncTimeInitializedEvent, put = __cordl_internal_set_syncTimeInitializedEvent))::System::Action* syncTimeInitializedEvent;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AddPlayer, addr 0xe9bd2c, size 0x29c, virtual false, abstract: false, final false
  inline void AddPlayer(::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* player);

  /// @brief Method Disconnect, addr 0xe9bc80, size 0xac, virtual false, abstract: false, final false
  inline void Disconnect(::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method Dispose, addr 0xe9f400, size 0x584, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method FlushReliableQueue, addr 0xe9f14c, size 0xdc, virtual false, abstract: false, final false
  inline void FlushReliableQueue();

  /// @brief Method FlushUnreliableQueue, addr 0xe9f228, size 0xdc, virtual false, abstract: false, final false
  inline void FlushUnreliableQueue();

  /// @brief Method GetConnectedPlayer, addr 0xe9c7ac, size 0x58, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IConnectedPlayer* GetConnectedPlayer(int32_t index);

  /// @brief Method GetConnectionManager, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetConnectionManager();

  /// @brief Method GetNextConnectionId, addr 0xe9b840, size 0x40, virtual false, abstract: false, final false
  inline uint8_t GetNextConnectionId();

  /// @brief Method GetPlayer, addr 0xe9c5ec, size 0xf4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* GetPlayer(::GlobalNamespace::IConnection* connection, uint8_t remoteConnectionId);

  /// @brief Method GetPlayer, addr 0xe9b880, size 0xc4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* GetPlayer(uint8_t connectionId);

  /// @brief Method GetPlayer, addr 0xe9c6e0, size 0xcc, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* GetPlayer(::StringW userId);

  /// @brief Method HandleConnected, addr 0xe9ecc4, size 0x2e8, virtual false, abstract: false, final false
  inline void HandleConnected();

  /// @brief Method HandleConnectionConnected, addr 0xe9efac, size 0x38, virtual false, abstract: false, final false
  inline void HandleConnectionConnected(::GlobalNamespace::IConnection* connection);

  /// @brief Method HandleConnectionDisconnected, addr 0xea0148, size 0x118, virtual false, abstract: false, final false
  inline void HandleConnectionDisconnected(::GlobalNamespace::IConnection* connection, ::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method HandleConnectionFailed, addr 0xe9ff4c, size 0x1c, virtual false, abstract: false, final false
  inline void HandleConnectionFailed(::GlobalNamespace::ConnectionFailedReason reason);

  /// @brief Method HandleDisconnected, addr 0xe9ff00, size 0x4c, virtual false, abstract: false, final false
  inline void HandleDisconnected(::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method HandleInitialized, addr 0xe9fdc0, size 0x1c, virtual false, abstract: false, final false
  inline void HandleInitialized();

  /// @brief Method HandleKickPlayerPacket, addr 0xea126c, size 0xe0, virtual false, abstract: false, final false
  inline void HandleKickPlayerPacket(::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket* packet, ::GlobalNamespace::IConnectedPlayer* iPlayer);

  /// @brief Method HandleNetworkReceive, addr 0xea0354, size 0x500, virtual false, abstract: false, final false
  inline void HandleNetworkReceive(::GlobalNamespace::IConnection* connection, ::LiteNetLib::Utils::NetDataReader* reader, ::BGNet::Core::DeliveryMethod deliveryMethod);

  /// @brief Method HandlePing, addr 0xea16b4, size 0x1f4, virtual false, abstract: false, final false
  inline void HandlePing(::GlobalNamespace::__ConnectedPlayerManager__PingPacket* packet, ::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method HandlePlayerAvatarUpdate, addr 0xea1084, size 0xc8, virtual false, abstract: false, final false
  inline void HandlePlayerAvatarUpdate(::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket* packet, ::GlobalNamespace::IConnectedPlayer* iPlayer);

  /// @brief Method HandlePlayerIdentityUpdate, addr 0xea0d70, size 0x134, virtual false, abstract: false, final false
  inline void HandlePlayerIdentityUpdate(::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket* packet, ::GlobalNamespace::IConnectedPlayer* iPlayer);

  /// @brief Method HandlePlayerSortOrderUpdate, addr 0xea13a0, size 0x12c, virtual false, abstract: false, final false
  inline void HandlePlayerSortOrderUpdate(::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket* packet, ::GlobalNamespace::IConnectedPlayer* iPlayer);

  /// @brief Method HandlePlayerStateUpdate, addr 0xea0fa8, size 0xc0, virtual false, abstract: false, final false
  inline void HandlePlayerStateUpdate(::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket* packet, ::GlobalNamespace::IConnectedPlayer* iPlayer);

  /// @brief Method HandlePong, addr 0xea190c, size 0x174, virtual false, abstract: false, final false
  inline void HandlePong(::GlobalNamespace::__ConnectedPlayerManager__PongPacket* packet, ::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method HandleServerPlayerConnected, addr 0xea0b80, size 0xcc, virtual false, abstract: false, final false
  inline void HandleServerPlayerConnected(::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket* packet, ::GlobalNamespace::IConnectedPlayer* iPlayer);

  /// @brief Method HandleServerPlayerDisconnected, addr 0xea1170, size 0xa8, virtual false, abstract: false, final false
  inline void HandleServerPlayerDisconnected(::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket* packet, ::GlobalNamespace::IConnectedPlayer* iPlayer);

  /// @brief Method HandleSyncTimePacket, addr 0xea1520, size 0x140, virtual false, abstract: false, final false
  inline void HandleSyncTimePacket(::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket* packet, ::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method InitializePlayerEncryption, addr 0xea0f08, size 0xa0, virtual false, abstract: false, final false
  inline void InitializePlayerEncryption(::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* player);

  /// @brief Method KickPlayer, addr 0xe9f984, size 0xcc, virtual false, abstract: false, final false
  inline void KickPlayer(::StringW userId, ::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method Log, addr 0xea1af0, size 0x8c, virtual false, abstract: false, final false
  inline void Log(::StringW message);

  static inline ::GlobalNamespace::ConnectedPlayerManager* New_ctor(::GlobalNamespace::IConnectionManager* connectionManager);

  static inline ::GlobalNamespace::ConnectedPlayerManager* New_ctor(::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility,
                                                                    ::GlobalNamespace::IConnectionManager* connectionManager);

  /// @brief Method PollLateUpdateOptional, addr 0xe9f304, size 0x2c, virtual false, abstract: false, final false
  inline void PollLateUpdateOptional();

  /// @brief Method PollUpdate, addr 0xe9efe4, size 0x168, virtual false, abstract: false, final false
  inline void PollUpdate(int32_t frameCount);

  /// @brief Method RegisterSerializer, addr 0xe9f330, size 0x68, virtual false, abstract: false, final false
  inline void RegisterSerializer(::GlobalNamespace::__ConnectedPlayerManager__MessageType serializerType,
                                 ::GlobalNamespace::INetworkPacketSubSerializer_1<::GlobalNamespace::IConnectedPlayer*>* subSerializer);

  /// @brief Method RemoveAllPlayers, addr 0xe9b944, size 0x8c, virtual false, abstract: false, final false
  inline void RemoveAllPlayers(::GlobalNamespace::DisconnectedReason reason);

  /// @brief Method RemovePlayer, addr 0xe9b9d0, size 0xc4, virtual false, abstract: false, final false
  inline void RemovePlayer(::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* player, ::GlobalNamespace::DisconnectedReason reason);

  /// @brief Method ResetLocalState, addr 0xe9ec9c, size 0x28, virtual false, abstract: false, final false
  inline void ResetLocalState();

  /// @brief Method Send, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void Send(T message);

  /// @brief Method SendImmediately, addr 0xe9c0dc, size 0xe4, virtual false, abstract: false, final false
  inline void SendImmediately(::LiteNetLib::Utils::INetSerializable* message, bool onlyFirstDegree);

  /// @brief Method SendImmediatelyExcludingPlayer, addr 0xe9c230, size 0xf4, virtual false, abstract: false, final false
  inline void SendImmediatelyExcludingPlayer(::LiteNetLib::Utils::INetSerializable* message, ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* excludingPlayer, bool onlyFirstDegree);

  /// @brief Method SendImmediatelyFromPlayer, addr 0xea0268, size 0xec, virtual false, abstract: false, final false
  inline void SendImmediatelyFromPlayer(::LiteNetLib::Utils::INetSerializable* message, ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* fromPlayer, bool onlyFirstDegree);

  /// @brief Method SendImmediatelyFromPlayerToPlayer, addr 0xe9c50c, size 0xe0, virtual false, abstract: false, final false
  inline void SendImmediatelyFromPlayerToPlayer(::LiteNetLib::Utils::INetSerializable* message, ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* fromPlayer,
                                                ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* toPlayer);

  /// @brief Method SendImmediatelyFromPlayerToPlayerUnreliable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void SendImmediatelyFromPlayerToPlayerUnreliable(T message, ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* fromPlayer,
                                                          ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* toPlayer);

  /// @brief Method SendImmediatelyToPlayer, addr 0xe9c334, size 0xe0, virtual false, abstract: false, final false
  inline void SendImmediatelyToPlayer(::LiteNetLib::Utils::INetSerializable* message, ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* toPlayer);

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

  /// @brief Method SetLocalPlayerAvatar, addr 0xe9fba4, size 0x94, virtual false, abstract: false, final false
  inline void SetLocalPlayerAvatar(::GlobalNamespace::MultiplayerAvatarsData multiplayerAvatarsData);

  /// @brief Method SetLocalPlayerSortIndex, addr 0xe9fcb8, size 0x10, virtual false, abstract: false, final false
  inline void SetLocalPlayerSortIndex(int32_t sortIndex);

  /// @brief Method SetLocalPlayerState, addr 0xe9fa64, size 0xe0, virtual false, abstract: false, final false
  inline void SetLocalPlayerState(::StringW state, bool setState);

  /// @brief Method SetPlayerSortIndex, addr 0xe9fcc8, size 0xd8, virtual false, abstract: false, final false
  inline void SetPlayerSortIndex(::GlobalNamespace::IConnectedPlayer* player, int32_t sortIndex);

  /// @brief Method UnregisterSerializer, addr 0xe9f398, size 0x68, virtual false, abstract: false, final false
  inline void UnregisterSerializer(::GlobalNamespace::__ConnectedPlayerManager__MessageType serializerType,
                                   ::GlobalNamespace::INetworkPacketSubSerializer_1<::GlobalNamespace::IConnectedPlayer*>* subSerializer);

  /// @brief Method Write, addr 0xea08c0, size 0xf8, virtual false, abstract: false, final false
  inline void Write(::LiteNetLib::Utils::NetDataWriter* writer, ::LiteNetLib::Utils::INetSerializable* packet);

  /// @brief Method WriteOne, addr 0xea0854, size 0x6c, virtual false, abstract: false, final false
  inline ::LiteNetLib::Utils::NetDataWriter* WriteOne(uint8_t senderId, uint8_t receiverId, ::LiteNetLib::Utils::INetSerializable* message);

  /// @brief Method WriteOneEncrypted, addr 0xea09b8, size 0x168, virtual false, abstract: false, final false
  inline ::LiteNetLib::Utils::NetDataWriter* WriteOneEncrypted(::GlobalNamespace::__EncryptionUtility__IEncryptionState* encryptionState, uint8_t senderId, uint8_t receiverId,
                                                               ::LiteNetLib::Utils::INetSerializable* message);

  /// @brief Method WriteOneOnlyToFirstDegreeConnections, addr 0xea0b20, size 0x60, virtual false, abstract: false, final false
  inline ::LiteNetLib::Utils::NetDataWriter* WriteOneOnlyToFirstDegreeConnections(uint8_t senderId, ::LiteNetLib::Utils::INetSerializable* message);

  constexpr ::GlobalNamespace::IConnectionManager*& __cordl_internal_get__connectionManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectionManager*> const& __cordl_internal_get__connectionManager() const;

  constexpr ::GlobalNamespace::IDiffieHellmanKeyPair*& __cordl_internal_get__encryptionKeys();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IDiffieHellmanKeyPair*> const& __cordl_internal_get__encryptionKeys() const;

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

  constexpr ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*& __cordl_internal_get__localPlayer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*> const& __cordl_internal_get__localPlayer() const;

  constexpr ::GlobalNamespace::MultiplayerAvatarsData const& __cordl_internal_get__localPlayerAvatars() const;

  constexpr ::GlobalNamespace::MultiplayerAvatarsData& __cordl_internal_get__localPlayerAvatars();

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get__localPlayerState();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const& __cordl_internal_get__localPlayerState() const;

  constexpr ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType, ::GlobalNamespace::IConnectedPlayer*>*&
  __cordl_internal_get__messageSerializer();

  constexpr ::cordl_internals::to_const_pointer<
      ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType, ::GlobalNamespace::IConnectedPlayer*>*> const&
  __cordl_internal_get__messageSerializer() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>*& __cordl_internal_get__players();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>*> const& __cordl_internal_get__players() const;

  constexpr ::LiteNetLib::Utils::NetDataWriter*& __cordl_internal_get__reliableDataWriter();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetDataWriter*> const& __cordl_internal_get__reliableDataWriter() const;

  constexpr int64_t const& __cordl_internal_get__startTicks() const;

  constexpr int64_t& __cordl_internal_get__startTicks();

  constexpr ::GlobalNamespace::LongRollingAverage*& __cordl_internal_get__syncTimeOffset();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LongRollingAverage*> const& __cordl_internal_get__syncTimeOffset() const;

  constexpr ::BGNet::Core::ITaskUtility*& __cordl_internal_get__taskUtility();

  constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::ITaskUtility*> const& __cordl_internal_get__taskUtility() const;

  constexpr ::LiteNetLib::Utils::NetDataWriter*& __cordl_internal_get__temporaryDataWriter();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetDataWriter*> const& __cordl_internal_get__temporaryDataWriter() const;

  constexpr ::LiteNetLib::Utils::NetDataWriter*& __cordl_internal_get__temporaryEncryptedDataWriter();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetDataWriter*> const& __cordl_internal_get__temporaryEncryptedDataWriter() const;

  constexpr ::BGNet::Core::ITimeProvider*& __cordl_internal_get__timeProvider();

  constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::ITimeProvider*> const& __cordl_internal_get__timeProvider() const;

  constexpr ::LiteNetLib::Utils::NetDataWriter*& __cordl_internal_get__unreliableDataWriter();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetDataWriter*> const& __cordl_internal_get__unreliableDataWriter() const;

  constexpr ::System::Action*& __cordl_internal_get_connectedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_connectedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*& __cordl_internal_get_connectionFailedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*> const& __cordl_internal_get_connectionFailedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::DisconnectedReason>*& __cordl_internal_get_disconnectedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::DisconnectedReason>*> const& __cordl_internal_get_disconnectedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_initializedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_initializedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*& __cordl_internal_get_playerAvatarChangedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*> const& __cordl_internal_get_playerAvatarChangedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*& __cordl_internal_get_playerConnectedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*> const& __cordl_internal_get_playerConnectedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*& __cordl_internal_get_playerDisconnectedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*> const& __cordl_internal_get_playerDisconnectedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*& __cordl_internal_get_playerLatencyInitializedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*> const& __cordl_internal_get_playerLatencyInitializedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*& __cordl_internal_get_playerOrderChangedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*> const& __cordl_internal_get_playerOrderChangedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*& __cordl_internal_get_playerStateChangedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*> const& __cordl_internal_get_playerStateChangedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_syncTimeInitializedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_syncTimeInitializedEvent() const;

  constexpr void __cordl_internal_set__connectionManager(::GlobalNamespace::IConnectionManager* value);

  constexpr void __cordl_internal_set__encryptionKeys(::GlobalNamespace::IDiffieHellmanKeyPair* value);

  constexpr void __cordl_internal_set__encryptionRandom(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__lastConnectionId(uint8_t value);

  constexpr void __cordl_internal_set__lastPingTime(int64_t value);

  constexpr void __cordl_internal_set__lastPollFrame(int32_t value);

  constexpr void __cordl_internal_set__lastPollTime(int64_t value);

  constexpr void __cordl_internal_set__localPlayer(::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* value);

  constexpr void __cordl_internal_set__localPlayerAvatars(::GlobalNamespace::MultiplayerAvatarsData value);

  constexpr void __cordl_internal_set__localPlayerState(::System::Collections::Generic::HashSet_1<::StringW>* value);

  constexpr void
  __cordl_internal_set__messageSerializer(::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType, ::GlobalNamespace::IConnectedPlayer*>* value);

  constexpr void __cordl_internal_set__players(::System::Collections::Generic::List_1<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>* value);

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

  /// @brief Method .ctor, addr 0xe9d96c, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IConnectionManager* connectionManager);

  /// @brief Method .ctor, addr 0xe9da28, size 0x1034, virtual false, abstract: false, final false
  inline void _ctor(::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility, ::GlobalNamespace::IConnectionManager* connectionManager);

  /// @brief Method add_connectedEvent, addr 0xe9c804, size 0x9c, virtual false, abstract: false, final false
  inline void add_connectedEvent(::System::Action* value);

  /// @brief Method add_connectionFailedEvent, addr 0xe9cbd4, size 0xb0, virtual false, abstract: false, final false
  inline void add_connectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value);

  /// @brief Method add_disconnectedEvent, addr 0xe9ca74, size 0xb0, virtual false, abstract: false, final false
  inline void add_disconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method add_initializedEvent, addr 0xe9c93c, size 0x9c, virtual false, abstract: false, final false
  inline void add_initializedEvent(::System::Action* value);

  /// @brief Method add_playerAvatarChangedEvent, addr 0xe9d154, size 0xb0, virtual false, abstract: false, final false
  inline void add_playerAvatarChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method add_playerConnectedEvent, addr 0xe9cd34, size 0xb0, virtual false, abstract: false, final false
  inline void add_playerConnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method add_playerDisconnectedEvent, addr 0xe9ce94, size 0xb0, virtual false, abstract: false, final false
  inline void add_playerDisconnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method add_playerLatencyInitializedEvent, addr 0xe9d414, size 0xb0, virtual false, abstract: false, final false
  inline void add_playerLatencyInitializedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method add_playerOrderChangedEvent, addr 0xe9d2b4, size 0xb0, virtual false, abstract: false, final false
  inline void add_playerOrderChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method add_playerStateChangedEvent, addr 0xe9cff4, size 0xb0, virtual false, abstract: false, final false
  inline void add_playerStateChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method add_syncTimeInitializedEvent, addr 0xe9d574, size 0x9c, virtual false, abstract: false, final false
  inline void add_syncTimeInitializedEvent(::System::Action* value);

  /// @brief Method get_connectedPlayerCount, addr 0xe9d8c8, size 0x48, virtual false, abstract: false, final false
  inline int32_t get_connectedPlayerCount();

  /// @brief Method get_isConnected, addr 0xe9bbdc, size 0xa4, virtual false, abstract: false, final false
  inline bool get_isConnected();

  /// @brief Method get_isConnectedOrConnecting, addr 0xe9d750, size 0x28, virtual false, abstract: false, final false
  inline bool get_isConnectedOrConnecting();

  /// @brief Method get_isConnecting, addr 0xe9d778, size 0xa4, virtual false, abstract: false, final false
  inline bool get_isConnecting();

  /// @brief Method get_isConnectionOwner, addr 0xe9d6ac, size 0xa4, virtual false, abstract: false, final false
  inline bool get_isConnectionOwner();

  /// @brief Method get_isDisconnecting, addr 0xe9d81c, size 0xa4, virtual false, abstract: false, final false
  inline bool get_isDisconnecting();

  /// @brief Method get_localPlayer, addr 0xe9d8c0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IConnectedPlayer* get_localPlayer();

  /// @brief Method get_runTime, addr 0xe9c008, size 0xcc, virtual false, abstract: false, final false
  inline int64_t get_runTime();

  /// @brief Method get_syncTime, addr 0xe9d910, size 0x28, virtual false, abstract: false, final false
  inline int64_t get_syncTime();

  /// @brief Method get_syncTimeInitialized, addr 0xe9d938, size 0x34, virtual false, abstract: false, final false
  inline bool get_syncTimeInitialized();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method remove_connectedEvent, addr 0xe9c8a0, size 0x9c, virtual false, abstract: false, final false
  inline void remove_connectedEvent(::System::Action* value);

  /// @brief Method remove_connectionFailedEvent, addr 0xe9cc84, size 0xb0, virtual false, abstract: false, final false
  inline void remove_connectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value);

  /// @brief Method remove_disconnectedEvent, addr 0xe9cb24, size 0xb0, virtual false, abstract: false, final false
  inline void remove_disconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method remove_initializedEvent, addr 0xe9c9d8, size 0x9c, virtual false, abstract: false, final false
  inline void remove_initializedEvent(::System::Action* value);

  /// @brief Method remove_playerAvatarChangedEvent, addr 0xe9d204, size 0xb0, virtual false, abstract: false, final false
  inline void remove_playerAvatarChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method remove_playerConnectedEvent, addr 0xe9cde4, size 0xb0, virtual false, abstract: false, final false
  inline void remove_playerConnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method remove_playerDisconnectedEvent, addr 0xe9cf44, size 0xb0, virtual false, abstract: false, final false
  inline void remove_playerDisconnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method remove_playerLatencyInitializedEvent, addr 0xe9d4c4, size 0xb0, virtual false, abstract: false, final false
  inline void remove_playerLatencyInitializedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method remove_playerOrderChangedEvent, addr 0xe9d364, size 0xb0, virtual false, abstract: false, final false
  inline void remove_playerOrderChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method remove_playerStateChangedEvent, addr 0xe9d0a4, size 0xb0, virtual false, abstract: false, final false
  inline void remove_playerStateChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method remove_syncTimeInitializedEvent, addr 0xe9d610, size 0x9c, virtual false, abstract: false, final false
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
  ::System::Collections::Generic::List_1<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>* ____players;

  /// @brief Field _localPlayerState, offset: 0xb8, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ____localPlayerState;

  /// @brief Field _localPlayerAvatars, offset: 0xc0, size: 0x18, def value: None
  ::GlobalNamespace::MultiplayerAvatarsData ____localPlayerAvatars;

  /// @brief Field _encryptionKeys, offset: 0xd8, size: 0x8, def value: None
  ::GlobalNamespace::IDiffieHellmanKeyPair* ____encryptionKeys;

  /// @brief Field _encryptionRandom, offset: 0xe0, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____encryptionRandom;

  /// @brief Field _localPlayer, offset: 0xe8, size: 0x8, def value: None
  ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* ____localPlayer;

  /// @brief Field _lastConnectionId, offset: 0xf0, size: 0x1, def value: None
  uint8_t ____lastConnectionId;

  /// @brief Field _lastPollTime, offset: 0xf8, size: 0x8, def value: None
  int64_t ____lastPollTime;

  /// @brief Field _lastPollFrame, offset: 0x100, size: 0x4, def value: None
  int32_t ____lastPollFrame;

  /// @brief Field _lastPingTime, offset: 0x108, size: 0x8, def value: None
  int64_t ____lastPingTime;

  /// @brief Field _messageSerializer, offset: 0x110, size: 0x8, def value: None
  ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType, ::GlobalNamespace::IConnectedPlayer*>* ____messageSerializer;

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ConnectedPlayerManager, 0x118>, "Size mismatch!");

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

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType, "", "ConnectedPlayerManager/InternalMessageType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ConnectedPlayerManager__MessageType, "", "ConnectedPlayerManager/MessageType");
NEED_NO_BOX(::GlobalNamespace::ConnectedPlayerManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConnectedPlayerManager*, "", "ConnectedPlayerManager");
NEED_NO_BOX(::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*, "", "ConnectedPlayerManager/ConnectedPlayer");
NEED_NO_BOX(::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket*, "", "ConnectedPlayerManager/KickPlayerPacket");
NEED_NO_BOX(::GlobalNamespace::__ConnectedPlayerManager__PingPacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ConnectedPlayerManager__PingPacket*, "", "ConnectedPlayerManager/PingPacket");
NEED_NO_BOX(::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket*, "", "ConnectedPlayerManager/PlayerAvatarPacket");
NEED_NO_BOX(::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket*, "", "ConnectedPlayerManager/PlayerConnectedPacket");
NEED_NO_BOX(::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket*, "", "ConnectedPlayerManager/PlayerDisconnectedPacket");
NEED_NO_BOX(::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket*, "", "ConnectedPlayerManager/PlayerIdentityPacket");
NEED_NO_BOX(::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket*, "", "ConnectedPlayerManager/PlayerSortOrderPacket");
NEED_NO_BOX(::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket*, "", "ConnectedPlayerManager/PlayerStatePacket");
NEED_NO_BOX(::GlobalNamespace::__ConnectedPlayerManager__PongPacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ConnectedPlayerManager__PongPacket*, "", "ConnectedPlayerManager/PongPacket");
NEED_NO_BOX(::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket*, "", "ConnectedPlayerManager/SyncTimePacket");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ConnectedPlayerManager___InitializePlayerEncryption_d__132, "", "ConnectedPlayerManager/<InitializePlayerEncryption>d__132");
