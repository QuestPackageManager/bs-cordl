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
namespace GlobalNamespace {
class __EncryptionUtility__IEncryptionState;
}
namespace GlobalNamespace {
class __ConnectedPlayerManager__PlayerDisconnectedPacket;
}
namespace GlobalNamespace {
class __ConnectedPlayerManager__SyncTimePacket;
}
namespace BGNet::Core {
class ITimeProvider;
}
namespace GlobalNamespace {
class __ConnectedPlayerManager__ConnectedPlayer;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace GlobalNamespace {
class __ConnectedPlayerManager__PongPacket;
}
namespace GlobalNamespace {
struct __ConnectedPlayerManager___InitializePlayerEncryption_d__132;
}
namespace GlobalNamespace {
struct MultiplayerAvatarsData;
}
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace GlobalNamespace {
class IConnectionManager;
}
namespace GlobalNamespace {
class __ConnectedPlayerManager__PlayerAvatarPacket;
}
namespace GlobalNamespace {
struct __ConnectedPlayerManager__MessageType;
}
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
namespace GlobalNamespace {
class LongRollingAverage;
}
namespace BGNet::Core {
struct DeliveryMethod;
}
namespace GlobalNamespace {
class __ConnectedPlayerManager__PlayerSortOrderPacket;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
struct __ConnectedPlayerManager__InternalMessageType;
}
namespace GlobalNamespace {
class __ConnectedPlayerManager__KickPlayerPacket;
}
namespace GlobalNamespace {
class __ConnectedPlayerManager__PlayerConnectedPacket;
}
namespace GlobalNamespace {
template <typename TType, typename TData> class NetworkPacketSerializer_2;
}
namespace GlobalNamespace {
class __ConnectedPlayerManager__PingPacket;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace GlobalNamespace {
class IConnection;
}
namespace GlobalNamespace {
class __ConnectedPlayerManager__PlayerIdentityPacket;
}
namespace System {
template <typename T> class Action_1;
}
namespace BGNet::Core {
class ITaskUtility;
}
namespace GlobalNamespace {
class IDiffieHellmanKeyPair;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace GlobalNamespace {
template <typename TData> class INetworkPacketSubSerializer_1;
}
namespace GlobalNamespace {
class __ConnectedPlayerManager__PlayerStatePacket;
}
namespace GlobalNamespace {
struct PlayerStateHash;
}
namespace GlobalNamespace {
template <typename T> class PacketPool_1;
}
namespace GlobalNamespace {
class IPoolablePacket;
}
namespace GlobalNamespace {
class ByteArrayNetSerializable;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12930)), TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15021)),
// TypeDefinitionIndex(TypeDefinitionIndex(12720))} Self: TypeDefinitionIndex(TypeDefinitionIndex(12691)) CS Name: ::ConnectedPlayerManager::ConnectedPlayer*
class CORDL_TYPE __ConnectedPlayerManager__ConnectedPlayer : public ::System::Object {
public:
  // Declarations
  /// @brief Field _userId, offset 0x10, size 0x8
  __declspec(property(get = __get__userId, put = __set__userId))::StringW _userId;

  /// @brief Field _userName, offset 0x18, size 0x8
  __declspec(property(get = __get__userName, put = __set__userName))::StringW _userName;

  /// @brief Field _isMe, offset 0x20, size 0x1
  __declspec(property(get = __get__isMe, put = __set__isMe)) bool _isMe;

  /// @brief Field _isConnectionOwner, offset 0x21, size 0x1
  __declspec(property(get = __get__isConnectionOwner, put = __set__isConnectionOwner)) bool _isConnectionOwner;

  /// @brief Field _manager, offset 0x28, size 0x8
  __declspec(property(get = __get__manager, put = __set__manager))::GlobalNamespace::ConnectedPlayerManager* _manager;

  /// @brief Field _connection, offset 0x30, size 0x8
  __declspec(property(get = __get__connection, put = __set__connection))::GlobalNamespace::IConnection* _connection;

  /// @brief Field _parent, offset 0x38, size 0x8
  __declspec(property(get = __get__parent, put = __set__parent))::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* _parent;

  /// @brief Field _connectionId, offset 0x40, size 0x1
  __declspec(property(get = __get__connectionId, put = __set__connectionId)) uint8_t _connectionId;

  /// @brief Field _remoteConnectionId, offset 0x41, size 0x1
  __declspec(property(get = __get__remoteConnectionId, put = __set__remoteConnectionId)) uint8_t _remoteConnectionId;

  /// @brief Field _sortIndex, offset 0x44, size 0x4
  __declspec(property(get = __get__sortIndex, put = __set__sortIndex)) int32_t _sortIndex;

  /// @brief Field _isConnected, offset 0x48, size 0x1
  __declspec(property(get = __get__isConnected, put = __set__isConnected)) bool _isConnected;

  /// @brief Field _disconnectedReason, offset 0x4c, size 0x4
  __declspec(property(get = __get__disconnectedReason, put = __set__disconnectedReason))::GlobalNamespace::DisconnectedReason _disconnectedReason;

  /// @brief Field _isKicked, offset 0x50, size 0x1
  __declspec(property(get = __get__isKicked, put = __set__isKicked)) bool _isKicked;

  /// @brief Field _playerState, offset 0x58, size 0x10
  __declspec(property(get = __get__playerState, put = __set__playerState))::GlobalNamespace::PlayerStateHash _playerState;

  /// @brief Field _playerAvatars, offset 0x68, size 0x18
  __declspec(property(get = __get__playerAvatars, put = __set__playerAvatars))::GlobalNamespace::MultiplayerAvatarsData _playerAvatars;

  /// @brief Field _publicEncryptionKey, offset 0x80, size 0x8
  __declspec(property(get = __get__publicEncryptionKey, put = __set__publicEncryptionKey))::ArrayW<uint8_t, ::Array<uint8_t>*> _publicEncryptionKey;

  /// @brief Field _random, offset 0x88, size 0x8
  __declspec(property(get = __get__random, put = __set__random))::ArrayW<uint8_t, ::Array<uint8_t>*> _random;

  /// @brief Field _encryptionState, offset 0x90, size 0x8
  __declspec(property(get = __get__encryptionState, put = __set__encryptionState))::GlobalNamespace::__EncryptionUtility__IEncryptionState* _encryptionState;

  /// @brief Field _latency, offset 0x98, size 0x8
  __declspec(property(get = __get__latency, put = __set__latency))::GlobalNamespace::LongRollingAverage* _latency;

  __declspec(property(get = get_connection))::GlobalNamespace::IConnection* connection;

  __declspec(property(get = get_connectionId)) uint8_t connectionId;

  __declspec(property(get = get_remoteConnectionId)) uint8_t remoteConnectionId;

  __declspec(property(get = get_isConnected)) bool isConnected;

  __declspec(property(get = get_isConnectionOwner)) bool isConnectionOwner;

  __declspec(property(get = get_isKicked)) bool isKicked;

  __declspec(property(get = get_disconnectedReason))::GlobalNamespace::DisconnectedReason disconnectedReason;

  __declspec(property(get = get_sortIndex)) int32_t sortIndex;

  __declspec(property(get = get_userId))::StringW userId;

  __declspec(property(get = get_userName))::StringW userName;

  __declspec(property(get = get_isMe)) bool isMe;

  __declspec(property(get = get_hasValidLatency)) bool hasValidLatency;

  __declspec(property(get = get_currentLatency)) int64_t currentLatency;

  __declspec(property(get = get_offsetSyncTime)) int64_t offsetSyncTime;

  __declspec(property(get = get_multiplayerAvatarsData, put = set_multiplayerAvatarsData))::GlobalNamespace::MultiplayerAvatarsData multiplayerAvatarsData;

  __declspec(property(get = get_publicEncryptionKey))::ArrayW<uint8_t, ::Array<uint8_t>*> publicEncryptionKey;

  __declspec(property(get = get_random))::ArrayW<uint8_t, ::Array<uint8_t>*> random;

  __declspec(property(get = get_isDirectConnection)) bool isDirectConnection;

  __declspec(property(get = get_encryptionState))::GlobalNamespace::__EncryptionUtility__IEncryptionState* encryptionState;

  /// @brief Convert operator to "::GlobalNamespace::IConnectedPlayer"
  constexpr operator ::GlobalNamespace::IConnectedPlayer*() noexcept;

  constexpr ::StringW& __get__userId();

  constexpr ::StringW const& __get__userId() const;

  constexpr void __set__userId(::StringW value);

  constexpr ::StringW& __get__userName();

  constexpr ::StringW const& __get__userName() const;

  constexpr void __set__userName(::StringW value);

  constexpr bool& __get__isMe();

  constexpr bool const& __get__isMe() const;

  constexpr void __set__isMe(bool value);

  constexpr bool& __get__isConnectionOwner();

  constexpr bool const& __get__isConnectionOwner() const;

  constexpr void __set__isConnectionOwner(bool value);

  constexpr ::GlobalNamespace::ConnectedPlayerManager*& __get__manager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ConnectedPlayerManager*> const& __get__manager() const;

  constexpr void __set__manager(::GlobalNamespace::ConnectedPlayerManager* value);

  constexpr ::GlobalNamespace::IConnection*& __get__connection();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnection*> const& __get__connection() const;

  constexpr void __set__connection(::GlobalNamespace::IConnection* value);

  constexpr ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*& __get__parent();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*> const& __get__parent() const;

  constexpr void __set__parent(::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* value);

  constexpr uint8_t& __get__connectionId();

  constexpr uint8_t const& __get__connectionId() const;

  constexpr void __set__connectionId(uint8_t value);

  constexpr uint8_t& __get__remoteConnectionId();

  constexpr uint8_t const& __get__remoteConnectionId() const;

  constexpr void __set__remoteConnectionId(uint8_t value);

  constexpr int32_t& __get__sortIndex();

  constexpr int32_t const& __get__sortIndex() const;

  constexpr void __set__sortIndex(int32_t value);

  constexpr bool& __get__isConnected();

  constexpr bool const& __get__isConnected() const;

  constexpr void __set__isConnected(bool value);

  constexpr ::GlobalNamespace::DisconnectedReason& __get__disconnectedReason();

  constexpr ::GlobalNamespace::DisconnectedReason const& __get__disconnectedReason() const;

  constexpr void __set__disconnectedReason(::GlobalNamespace::DisconnectedReason value);

  constexpr bool& __get__isKicked();

  constexpr bool const& __get__isKicked() const;

  constexpr void __set__isKicked(bool value);

  constexpr ::GlobalNamespace::PlayerStateHash& __get__playerState();

  constexpr ::GlobalNamespace::PlayerStateHash const& __get__playerState() const;

  constexpr void __set__playerState(::GlobalNamespace::PlayerStateHash value);

  constexpr ::GlobalNamespace::MultiplayerAvatarsData& __get__playerAvatars();

  constexpr ::GlobalNamespace::MultiplayerAvatarsData const& __get__playerAvatars() const;

  constexpr void __set__playerAvatars(::GlobalNamespace::MultiplayerAvatarsData value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__publicEncryptionKey();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__publicEncryptionKey() const;

  constexpr void __set__publicEncryptionKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__random();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__random() const;

  constexpr void __set__random(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::GlobalNamespace::__EncryptionUtility__IEncryptionState*& __get__encryptionState();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__EncryptionUtility__IEncryptionState*> const& __get__encryptionState() const;

  constexpr void __set__encryptionState(::GlobalNamespace::__EncryptionUtility__IEncryptionState* value);

  constexpr ::GlobalNamespace::LongRollingAverage*& __get__latency();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LongRollingAverage*> const& __get__latency() const;

  constexpr void __set__latency(::GlobalNamespace::LongRollingAverage* value);

  /// @brief Method get_connection addr 0xe30d74 size 0x8 virtual false final false
  inline ::GlobalNamespace::IConnection* get_connection();

  /// @brief Method get_connectionId addr 0xe30d7c size 0x8 virtual false final false
  inline uint8_t get_connectionId();

  /// @brief Method get_remoteConnectionId addr 0xe30d84 size 0x8 virtual false final false
  inline uint8_t get_remoteConnectionId();

  /// @brief Method get_isConnected addr 0xe30d8c size 0x8 virtual true final true
  inline bool get_isConnected();

  /// @brief Method get_isConnectionOwner addr 0xe30d94 size 0x8 virtual true final true
  inline bool get_isConnectionOwner();

  /// @brief Method get_isKicked addr 0xe30d9c size 0x8 virtual true final true
  inline bool get_isKicked();

  /// @brief Method get_disconnectedReason addr 0xe30da4 size 0x8 virtual true final true
  inline ::GlobalNamespace::DisconnectedReason get_disconnectedReason();

  /// @brief Method get_sortIndex addr 0xe30dac size 0x8 virtual true final true
  inline int32_t get_sortIndex();

  /// @brief Method get_userId addr 0xe30db4 size 0x8 virtual true final true
  inline ::StringW get_userId();

  /// @brief Method get_userName addr 0xe30dbc size 0x8 virtual true final true
  inline ::StringW get_userName();

  /// @brief Method get_isMe addr 0xe30dc4 size 0x8 virtual true final true
  inline bool get_isMe();

  /// @brief Method get_hasValidLatency addr 0xe30dcc size 0x30 virtual true final true
  inline bool get_hasValidLatency();

  /// @brief Method get_currentLatency addr 0xe30dfc size 0x6c virtual true final true
  inline int64_t get_currentLatency();

  /// @brief Method get_offsetSyncTime addr 0xe30e68 size 0x4c virtual true final true
  inline int64_t get_offsetSyncTime();

  /// @brief Method get_multiplayerAvatarsData addr 0xe30eb4 size 0x14 virtual true final true
  inline ::GlobalNamespace::MultiplayerAvatarsData get_multiplayerAvatarsData();

  /// @brief Method set_multiplayerAvatarsData addr 0xe30ec8 size 0x14 virtual false final false
  inline void set_multiplayerAvatarsData(::GlobalNamespace::MultiplayerAvatarsData value);

  /// @brief Method get_publicEncryptionKey addr 0xe30edc size 0x8 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_publicEncryptionKey();

  /// @brief Method get_random addr 0xe30ee4 size 0x8 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_random();

  /// @brief Method get_isDirectConnection addr 0xe2b51c size 0x10 virtual false final false
  inline bool get_isDirectConnection();

  /// @brief Method get_encryptionState addr 0xe30eec size 0x8 virtual false final false
  inline ::GlobalNamespace::__EncryptionUtility__IEncryptionState* get_encryptionState();

  static inline ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* New_ctor(::GlobalNamespace::ConnectedPlayerManager* manager, uint8_t connectionId, uint8_t remoteConnectionId,
                                                                                       ::GlobalNamespace::IConnection* connection, ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* parent,
                                                                                       ::StringW userId, ::StringW userName, bool isConnectionOwner, bool isMe,
                                                                                       ::ArrayW<uint8_t, ::Array<uint8_t>*> publicEncryptionKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> random);

  /// @brief Method .ctor addr 0xe30ef4 size 0x100 virtual false final false
  inline void _ctor(::GlobalNamespace::ConnectedPlayerManager* manager, uint8_t connectionId, uint8_t remoteConnectionId, ::GlobalNamespace::IConnection* connection,
                    ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* parent, ::StringW userId, ::StringW userName, bool isConnectionOwner, bool isMe,
                    ::ArrayW<uint8_t, ::Array<uint8_t>*> publicEncryptionKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> random);

  /// @brief Method CreateLocalPlayer addr 0xe2f038 size 0xc0 virtual false final false
  static inline ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* CreateLocalPlayer(::GlobalNamespace::ConnectedPlayerManager* manager, ::StringW userId, ::StringW userName,
                                                                                                bool isConnectionOwner, ::ArrayW<uint8_t, ::Array<uint8_t>*> publicEncryptionKey,
                                                                                                ::ArrayW<uint8_t, ::Array<uint8_t>*> random);

  /// @brief Method CreateDirectlyConnectedPlayer addr 0xe2f160 size 0x1e0 virtual false final false
  static inline ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* CreateDirectlyConnectedPlayer(::GlobalNamespace::ConnectedPlayerManager* manager, uint8_t connectionId,
                                                                                                            ::GlobalNamespace::IConnection* connection);

  /// @brief Method CreateRemoteConnectedPlayer addr 0xe2fe44 size 0xd0 virtual false final false
  static inline ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* CreateRemoteConnectedPlayer(::GlobalNamespace::ConnectedPlayerManager* manager, uint8_t connectionId,
                                                                                                          ::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket* packet,
                                                                                                          ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* parent);

  /// @brief Method GetPlayerConnectedPacket addr 0xe2b3b8 size 0x70 virtual false final false
  inline ::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket* GetPlayerConnectedPacket();

  /// @brief Method GetPlayerIdentityPacket addr 0xe2b674 size 0x90 virtual false final false
  inline ::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket* GetPlayerIdentityPacket();

  /// @brief Method GetPlayerStatePacket addr 0xe2ed3c size 0x60 virtual false final false
  inline ::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket* GetPlayerStatePacket();

  /// @brief Method GetPlayerAvatarPacket addr 0xe2ee30 size 0x80 virtual false final false
  inline ::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket* GetPlayerAvatarPacket();

  /// @brief Method GetPlayerSortOrderPacket addr 0xe2b60c size 0x68 virtual false final false
  inline ::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket* GetPlayerSortOrderPacket();

  /// @brief Method Disconnect addr 0xe2ac8c size 0x148 virtual false final false
  inline void Disconnect(::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method UpdateLatency addr 0xe30ccc size 0x1c virtual false final false
  inline void UpdateLatency(int64_t latency);

  /// @brief Method UpdateSortIndex addr 0xe2ef98 size 0x20 virtual false final false
  inline bool UpdateSortIndex(int32_t index);

  /// @brief Method SetKicked addr 0xe2ec50 size 0xc virtual false final false
  inline void SetKicked();

  /// @brief Method UpdateIdentity addr 0xe3009c size 0x64 virtual false final false
  inline void UpdateIdentity(::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket* packet);

  /// @brief Method UpdateState addr 0xe30260 size 0x1c virtual false final false
  inline void UpdateState(::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket* packet);

  /// @brief Method UpdateAvatar addr 0xe30344 size 0x24 virtual false final false
  inline void UpdateAvatar(::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket* packet);

  /// @brief Method SetEncryptionState addr 0xe31088 size 0x8 virtual false final false
  inline void SetEncryptionState(::GlobalNamespace::__EncryptionUtility__IEncryptionState* encryptionState);

  /// @brief Method HasState addr 0xe31090 size 0xc virtual true final true
  inline bool HasState(::StringW state);

  /// @brief Method SetPlayerState addr 0xe3109c size 0x8 virtual false final false
  inline void SetPlayerState(::GlobalNamespace::PlayerStateHash playerState);

  /// @brief Method ToString addr 0xe310a4 size 0x17c virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "__ConnectedPlayerManager__ConnectedPlayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConnectedPlayerManager__ConnectedPlayer(__ConnectedPlayerManager__ConnectedPlayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConnectedPlayerManager__ConnectedPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConnectedPlayerManager__ConnectedPlayer(__ConnectedPlayerManager__ConnectedPlayer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConnectedPlayerManager__ConnectedPlayer();

public:
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

} // namespace GlobalNamespace
// Type: ::InternalMessageType
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12692))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr __ConnectedPlayerManager__InternalMessageType(uint8_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConnectedPlayerManager__InternalMessageType();

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field SyncTime value: static_cast<uint8_t>(0x0u)
  static ::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType const SyncTime;

  /// @brief Field PlayerConnected value: static_cast<uint8_t>(0x1u)
  static ::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType const PlayerConnected;

  /// @brief Field PlayerIdentity value: static_cast<uint8_t>(0x2u)
  static ::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType const PlayerIdentity;

  /// @brief Field PlayerLatencyUpdate value: static_cast<uint8_t>(0x3u)
  static ::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType const PlayerLatencyUpdate;

  /// @brief Field PlayerDisconnected value: static_cast<uint8_t>(0x4u)
  static ::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType const PlayerDisconnected;

  /// @brief Field PlayerSortOrderUpdate value: static_cast<uint8_t>(0x5u)
  static ::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType const PlayerSortOrderUpdate;

  /// @brief Field Party value: static_cast<uint8_t>(0x6u)
  static ::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType const Party;

  /// @brief Field MultiplayerSession value: static_cast<uint8_t>(0x7u)
  static ::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType const MultiplayerSession;

  /// @brief Field KickPlayer value: static_cast<uint8_t>(0x8u)
  static ::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType const KickPlayer;

  /// @brief Field PlayerStateUpdate value: static_cast<uint8_t>(0x9u)
  static ::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType const PlayerStateUpdate;

  /// @brief Field PlayerAvatarUpdate value: static_cast<uint8_t>(0xau)
  static ::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType const PlayerAvatarUpdate;

  /// @brief Field Ping value: static_cast<uint8_t>(0xbu)
  static ::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType const Ping;

  /// @brief Field Pong value: static_cast<uint8_t>(0xcu)
  static ::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType const Pong;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType, 0x1>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::MessageType
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12693))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr __ConnectedPlayerManager__MessageType(uint8_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConnectedPlayerManager__MessageType();

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field Party value: static_cast<uint8_t>(0x6u)
  static ::GlobalNamespace::__ConnectedPlayerManager__MessageType const Party;

  /// @brief Field MultiplayerSession value: static_cast<uint8_t>(0x7u)
  static ::GlobalNamespace::__ConnectedPlayerManager__MessageType const MultiplayerSession;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ConnectedPlayerManager__MessageType, 0x1>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::PlayerConnectedPacket
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12694))
// CS Name: ::ConnectedPlayerManager::PlayerConnectedPacket*
class CORDL_TYPE __ConnectedPlayerManager__PlayerConnectedPacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field remoteConnectionId, offset 0x10, size 0x1
  __declspec(property(get = __get_remoteConnectionId, put = __set_remoteConnectionId)) uint8_t remoteConnectionId;

  /// @brief Field userId, offset 0x18, size 0x8
  __declspec(property(get = __get_userId, put = __set_userId))::StringW userId;

  /// @brief Field userName, offset 0x20, size 0x8
  __declspec(property(get = __get_userName, put = __set_userName))::StringW userName;

  /// @brief Field isConnectionOwner, offset 0x28, size 0x1
  __declspec(property(get = __get_isConnectionOwner, put = __set_isConnectionOwner)) bool isConnectionOwner;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  constexpr uint8_t& __get_remoteConnectionId();

  constexpr uint8_t const& __get_remoteConnectionId() const;

  constexpr void __set_remoteConnectionId(uint8_t value);

  constexpr ::StringW& __get_userId();

  constexpr ::StringW const& __get_userId() const;

  constexpr void __set_userId(::StringW value);

  constexpr ::StringW& __get_userName();

  constexpr ::StringW const& __get_userName() const;

  constexpr void __set_userName(::StringW value);

  constexpr bool& __get_isConnectionOwner();

  constexpr bool const& __get_isConnectionOwner() const;

  constexpr void __set_isConnectionOwner(bool value);

  /// @brief Method get_pool addr 0xe2dc54 size 0x40 virtual false final false
  static inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket*>* get_pool();

  /// @brief Method Serialize addr 0xe31220 size 0x60 virtual true final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Deserialize addr 0xe31280 size 0x68 virtual true final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Release addr 0xe2ff14 size 0x54 virtual true final true
  inline void Release();

  /// @brief Method Init addr 0xe30ff4 size 0x14 virtual false final false
  inline ::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket* Init(uint8_t connectionId, ::StringW userId, ::StringW userName, bool isConnectionOwner);

  static inline ::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket* New_ctor();

  /// @brief Method .ctor addr 0xe312e8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__ConnectedPlayerManager__PlayerConnectedPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConnectedPlayerManager__PlayerConnectedPacket(__ConnectedPlayerManager__PlayerConnectedPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConnectedPlayerManager__PlayerConnectedPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConnectedPlayerManager__PlayerConnectedPacket(__ConnectedPlayerManager__PlayerConnectedPacket const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConnectedPlayerManager__PlayerConnectedPacket();

public:
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

} // namespace GlobalNamespace
// Type: ::PlayerIdentityPacket
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12930)), TypeDefinitionIndex(TypeDefinitionIndex(15021)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12695))
// CS Name: ::ConnectedPlayerManager::PlayerIdentityPacket*
class CORDL_TYPE __ConnectedPlayerManager__PlayerIdentityPacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field playerState, offset 0x10, size 0x10
  __declspec(property(get = __get_playerState, put = __set_playerState))::GlobalNamespace::PlayerStateHash playerState;

  /// @brief Field playerAvatar, offset 0x20, size 0x18
  __declspec(property(get = __get_playerAvatar, put = __set_playerAvatar))::GlobalNamespace::MultiplayerAvatarsData playerAvatar;

  /// @brief Field random, offset 0x38, size 0x8
  __declspec(property(get = __get_random, put = __set_random))::GlobalNamespace::ByteArrayNetSerializable* random;

  /// @brief Field publicEncryptionKey, offset 0x40, size 0x8
  __declspec(property(get = __get_publicEncryptionKey, put = __set_publicEncryptionKey))::GlobalNamespace::ByteArrayNetSerializable* publicEncryptionKey;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  constexpr ::GlobalNamespace::PlayerStateHash& __get_playerState();

  constexpr ::GlobalNamespace::PlayerStateHash const& __get_playerState() const;

  constexpr void __set_playerState(::GlobalNamespace::PlayerStateHash value);

  constexpr ::GlobalNamespace::MultiplayerAvatarsData& __get_playerAvatar();

  constexpr ::GlobalNamespace::MultiplayerAvatarsData const& __get_playerAvatar() const;

  constexpr void __set_playerAvatar(::GlobalNamespace::MultiplayerAvatarsData value);

  constexpr ::GlobalNamespace::ByteArrayNetSerializable*& __get_random();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ByteArrayNetSerializable*> const& __get_random() const;

  constexpr void __set_random(::GlobalNamespace::ByteArrayNetSerializable* value);

  constexpr ::GlobalNamespace::ByteArrayNetSerializable*& __get_publicEncryptionKey();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ByteArrayNetSerializable*> const& __get_publicEncryptionKey() const;

  constexpr void __set_publicEncryptionKey(::GlobalNamespace::ByteArrayNetSerializable* value);

  /// @brief Method get_pool addr 0xe2dc94 size 0x40 virtual false final false
  static inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket*>* get_pool();

  /// @brief Method Serialize addr 0xe312f0 size 0x58 virtual true final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Deserialize addr 0xe31348 size 0x80 virtual true final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Release addr 0xe313c8 size 0x6c virtual true final true
  inline void Release();

  /// @brief Method Init addr 0xe31008 size 0x58 virtual false final false
  inline ::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket* Init(::GlobalNamespace::PlayerStateHash states, ::GlobalNamespace::MultiplayerAvatarsData avatar,
                                                                                 ::ArrayW<uint8_t, ::Array<uint8_t>*> random, ::ArrayW<uint8_t, ::Array<uint8_t>*> publicEncryptionKey);

  static inline ::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket* New_ctor();

  /// @brief Method .ctor addr 0xe31434 size 0xec virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__ConnectedPlayerManager__PlayerIdentityPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConnectedPlayerManager__PlayerIdentityPacket(__ConnectedPlayerManager__PlayerIdentityPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConnectedPlayerManager__PlayerIdentityPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConnectedPlayerManager__PlayerIdentityPacket(__ConnectedPlayerManager__PlayerIdentityPacket const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConnectedPlayerManager__PlayerIdentityPacket();

public:
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

} // namespace GlobalNamespace
// Type: ::PlayerAvatarPacket
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15021))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12696))
// CS Name: ::ConnectedPlayerManager::PlayerAvatarPacket*
class CORDL_TYPE __ConnectedPlayerManager__PlayerAvatarPacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field playerAvatar, offset 0x10, size 0x18
  __declspec(property(get = __get_playerAvatar, put = __set_playerAvatar))::GlobalNamespace::MultiplayerAvatarsData playerAvatar;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  constexpr ::GlobalNamespace::MultiplayerAvatarsData& __get_playerAvatar();

  constexpr ::GlobalNamespace::MultiplayerAvatarsData const& __get_playerAvatar() const;

  constexpr void __set_playerAvatar(::GlobalNamespace::MultiplayerAvatarsData value);

  /// @brief Method get_pool addr 0xe2ddd4 size 0x40 virtual false final false
  static inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket*>* get_pool();

  /// @brief Method Serialize addr 0xe31520 size 0xc virtual true final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Deserialize addr 0xe3152c size 0x40 virtual true final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Release addr 0xe3156c size 0x54 virtual true final true
  inline void Release();

  /// @brief Method Init addr 0xe31068 size 0x14 virtual false final false
  inline ::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket* Init(::GlobalNamespace::MultiplayerAvatarsData avatar);

  static inline ::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket* New_ctor();

  /// @brief Method .ctor addr 0xe315c0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__ConnectedPlayerManager__PlayerAvatarPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConnectedPlayerManager__PlayerAvatarPacket(__ConnectedPlayerManager__PlayerAvatarPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConnectedPlayerManager__PlayerAvatarPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConnectedPlayerManager__PlayerAvatarPacket(__ConnectedPlayerManager__PlayerAvatarPacket const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConnectedPlayerManager__PlayerAvatarPacket();

public:
  /// @brief Field playerAvatar, offset: 0x10, size: 0x18, def value: None
  ::GlobalNamespace::MultiplayerAvatarsData ___playerAvatar;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::PlayerStatePacket
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12930)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12697))
// CS Name: ::ConnectedPlayerManager::PlayerStatePacket*
class CORDL_TYPE __ConnectedPlayerManager__PlayerStatePacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field playerState, offset 0x10, size 0x10
  __declspec(property(get = __get_playerState, put = __set_playerState))::GlobalNamespace::PlayerStateHash playerState;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  constexpr ::GlobalNamespace::PlayerStateHash& __get_playerState();

  constexpr ::GlobalNamespace::PlayerStateHash const& __get_playerState() const;

  constexpr void __set_playerState(::GlobalNamespace::PlayerStateHash value);

  /// @brief Method get_pool addr 0xe2de14 size 0x40 virtual false final false
  static inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket*>* get_pool();

  /// @brief Method Serialize addr 0xe315c8 size 0xc virtual true final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Deserialize addr 0xe315d4 size 0x20 virtual true final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Release addr 0xe315f4 size 0x54 virtual true final true
  inline void Release();

  /// @brief Method Init addr 0xe31060 size 0x8 virtual false final false
  inline ::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket* Init(::GlobalNamespace::PlayerStateHash states);

  static inline ::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket* New_ctor();

  /// @brief Method .ctor addr 0xe31648 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__ConnectedPlayerManager__PlayerStatePacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConnectedPlayerManager__PlayerStatePacket(__ConnectedPlayerManager__PlayerStatePacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConnectedPlayerManager__PlayerStatePacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConnectedPlayerManager__PlayerStatePacket(__ConnectedPlayerManager__PlayerStatePacket const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConnectedPlayerManager__PlayerStatePacket();

public:
  /// @brief Field playerState, offset: 0x10, size: 0x10, def value: None
  ::GlobalNamespace::PlayerStateHash ___playerState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::PlayerSortOrderPacket
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12698))
// CS Name: ::ConnectedPlayerManager::PlayerSortOrderPacket*
class CORDL_TYPE __ConnectedPlayerManager__PlayerSortOrderPacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field userId, offset 0x10, size 0x8
  __declspec(property(get = __get_userId, put = __set_userId))::StringW userId;

  /// @brief Field sortIndex, offset 0x18, size 0x4
  __declspec(property(get = __get_sortIndex, put = __set_sortIndex)) int32_t sortIndex;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  constexpr ::StringW& __get_userId();

  constexpr ::StringW const& __get_userId() const;

  constexpr void __set_userId(::StringW value);

  constexpr int32_t& __get_sortIndex();

  constexpr int32_t const& __get_sortIndex() const;

  constexpr void __set_sortIndex(int32_t value);

  /// @brief Method get_pool addr 0xe2dd14 size 0x40 virtual false final false
  static inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket*>* get_pool();

  /// @brief Method Serialize addr 0xe31650 size 0x40 virtual true final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Deserialize addr 0xe31690 size 0x44 virtual true final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Release addr 0xe306c4 size 0x54 virtual true final true
  inline void Release();

  /// @brief Method Init addr 0xe3107c size 0xc virtual false final false
  inline ::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket* Init(::StringW userId, int32_t sortIndex);

  static inline ::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket* New_ctor();

  /// @brief Method .ctor addr 0xe316d4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__ConnectedPlayerManager__PlayerSortOrderPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConnectedPlayerManager__PlayerSortOrderPacket(__ConnectedPlayerManager__PlayerSortOrderPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConnectedPlayerManager__PlayerSortOrderPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConnectedPlayerManager__PlayerSortOrderPacket(__ConnectedPlayerManager__PlayerSortOrderPacket const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConnectedPlayerManager__PlayerSortOrderPacket();

public:
  /// @brief Field userId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___userId;

  /// @brief Field sortIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ___sortIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::PlayerDisconnectedPacket
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12720)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12699))
// CS Name: ::ConnectedPlayerManager::PlayerDisconnectedPacket*
class CORDL_TYPE __ConnectedPlayerManager__PlayerDisconnectedPacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field disconnectedReason, offset 0x10, size 0x4
  __declspec(property(get = __get_disconnectedReason, put = __set_disconnectedReason))::GlobalNamespace::DisconnectedReason disconnectedReason;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  constexpr ::GlobalNamespace::DisconnectedReason& __get_disconnectedReason();

  constexpr ::GlobalNamespace::DisconnectedReason const& __get_disconnectedReason() const;

  constexpr void __set_disconnectedReason(::GlobalNamespace::DisconnectedReason value);

  /// @brief Method get_pool addr 0xe2dcd4 size 0x40 virtual false final false
  static inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket*>* get_pool();

  /// @brief Method Init addr 0xe2f458 size 0x8 virtual false final false
  inline ::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket* Init(::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method Serialize addr 0xe316dc size 0x14 virtual true final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Deserialize addr 0xe316f0 size 0x20 virtual true final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Release addr 0xe30410 size 0x54 virtual true final true
  inline void Release();

  static inline ::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket* New_ctor();

  /// @brief Method .ctor addr 0xe31710 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__ConnectedPlayerManager__PlayerDisconnectedPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConnectedPlayerManager__PlayerDisconnectedPacket(__ConnectedPlayerManager__PlayerDisconnectedPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConnectedPlayerManager__PlayerDisconnectedPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConnectedPlayerManager__PlayerDisconnectedPacket(__ConnectedPlayerManager__PlayerDisconnectedPacket const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConnectedPlayerManager__PlayerDisconnectedPacket();

public:
  /// @brief Field disconnectedReason, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::DisconnectedReason ___disconnectedReason;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::KickPlayerPacket
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12720)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12700))
// CS Name: ::ConnectedPlayerManager::KickPlayerPacket*
class CORDL_TYPE __ConnectedPlayerManager__KickPlayerPacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field disconnectedReason, offset 0x10, size 0x4
  __declspec(property(get = __get_disconnectedReason, put = __set_disconnectedReason))::GlobalNamespace::DisconnectedReason disconnectedReason;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  constexpr ::GlobalNamespace::DisconnectedReason& __get_disconnectedReason();

  constexpr ::GlobalNamespace::DisconnectedReason const& __get_disconnectedReason() const;

  constexpr void __set_disconnectedReason(::GlobalNamespace::DisconnectedReason value);

  /// @brief Method get_pool addr 0xe2dd94 size 0x40 virtual false final false
  static inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket*>* get_pool();

  /// @brief Method Init addr 0xe2ec48 size 0x8 virtual false final false
  inline ::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket* Init(::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method Serialize addr 0xe31720 size 0x14 virtual true final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Deserialize addr 0xe31734 size 0x20 virtual true final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Release addr 0xe30544 size 0x54 virtual true final true
  inline void Release();

  static inline ::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket* New_ctor();

  /// @brief Method .ctor addr 0xe31754 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__ConnectedPlayerManager__KickPlayerPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConnectedPlayerManager__KickPlayerPacket(__ConnectedPlayerManager__KickPlayerPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConnectedPlayerManager__KickPlayerPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConnectedPlayerManager__KickPlayerPacket(__ConnectedPlayerManager__KickPlayerPacket const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConnectedPlayerManager__KickPlayerPacket();

public:
  /// @brief Field disconnectedReason, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::DisconnectedReason ___disconnectedReason;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SyncTimePacket
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12701))
// CS Name: ::ConnectedPlayerManager::SyncTimePacket*
class CORDL_TYPE __ConnectedPlayerManager__SyncTimePacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field syncTime, offset 0x10, size 0x8
  __declspec(property(get = __get_syncTime, put = __set_syncTime)) int64_t syncTime;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  constexpr int64_t& __get_syncTime();

  constexpr int64_t const& __get_syncTime() const;

  constexpr void __set_syncTime(int64_t value);

  /// @brief Method get_pool addr 0xe2dd54 size 0x40 virtual false final false
  static inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket*>* get_pool();

  /// @brief Method Serialize addr 0xe3175c size 0x14 virtual true final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Deserialize addr 0xe31770 size 0x20 virtual true final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Init addr 0xe30afc size 0x8 virtual false final false
  inline ::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket* Init(int64_t syncTime);

  /// @brief Method Release addr 0xe30858 size 0x54 virtual true final true
  inline void Release();

  static inline ::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket* New_ctor();

  /// @brief Method .ctor addr 0xe31790 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__ConnectedPlayerManager__SyncTimePacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConnectedPlayerManager__SyncTimePacket(__ConnectedPlayerManager__SyncTimePacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConnectedPlayerManager__SyncTimePacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConnectedPlayerManager__SyncTimePacket(__ConnectedPlayerManager__SyncTimePacket const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConnectedPlayerManager__SyncTimePacket();

public:
  /// @brief Field syncTime, offset: 0x10, size: 0x8, def value: None
  int64_t ___syncTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::PingPacket
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12702))
// CS Name: ::ConnectedPlayerManager::PingPacket*
class CORDL_TYPE __ConnectedPlayerManager__PingPacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field pingTime, offset 0x10, size 0x8
  __declspec(property(get = __get_pingTime, put = __set_pingTime)) int64_t pingTime;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  constexpr int64_t& __get_pingTime();

  constexpr int64_t const& __get_pingTime() const;

  constexpr void __set_pingTime(int64_t value);

  /// @brief Method get_pool addr 0xe2b1c0 size 0x40 virtual false final false
  static inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::__ConnectedPlayerManager__PingPacket*>* get_pool();

  /// @brief Method Serialize addr 0xe31798 size 0x14 virtual true final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Deserialize addr 0xe317ac size 0x20 virtual true final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Init addr 0xe2b2cc size 0x8 virtual false final false
  inline ::GlobalNamespace::__ConnectedPlayerManager__PingPacket* Init(int64_t pingTime);

  /// @brief Method Release addr 0xe30aa0 size 0x54 virtual true final true
  inline void Release();

  static inline ::GlobalNamespace::__ConnectedPlayerManager__PingPacket* New_ctor();

  /// @brief Method .ctor addr 0xe317cc size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__ConnectedPlayerManager__PingPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConnectedPlayerManager__PingPacket(__ConnectedPlayerManager__PingPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConnectedPlayerManager__PingPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConnectedPlayerManager__PingPacket(__ConnectedPlayerManager__PingPacket const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConnectedPlayerManager__PingPacket();

public:
  /// @brief Field pingTime, offset: 0x10, size: 0x8, def value: None
  int64_t ___pingTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ConnectedPlayerManager__PingPacket, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::PongPacket
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12703))
// CS Name: ::ConnectedPlayerManager::PongPacket*
class CORDL_TYPE __ConnectedPlayerManager__PongPacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field pingTime, offset 0x10, size 0x8
  __declspec(property(get = __get_pingTime, put = __set_pingTime)) int64_t pingTime;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  constexpr int64_t& __get_pingTime();

  constexpr int64_t const& __get_pingTime() const;

  constexpr void __set_pingTime(int64_t value);

  /// @brief Method get_pool addr 0xe2de54 size 0x40 virtual false final false
  static inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::__ConnectedPlayerManager__PongPacket*>* get_pool();

  /// @brief Method Serialize addr 0xe317d4 size 0x14 virtual true final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Deserialize addr 0xe317e8 size 0x20 virtual true final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Init addr 0xe30af4 size 0x8 virtual false final false
  inline ::GlobalNamespace::__ConnectedPlayerManager__PongPacket* Init(int64_t pingTime);

  /// @brief Method Release addr 0xe30c78 size 0x54 virtual true final true
  inline void Release();

  static inline ::GlobalNamespace::__ConnectedPlayerManager__PongPacket* New_ctor();

  /// @brief Method .ctor addr 0xe31808 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__ConnectedPlayerManager__PongPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConnectedPlayerManager__PongPacket(__ConnectedPlayerManager__PongPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConnectedPlayerManager__PongPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConnectedPlayerManager__PongPacket(__ConnectedPlayerManager__PongPacket const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConnectedPlayerManager__PongPacket();

public:
  /// @brief Field pingTime, offset: 0x10, size: 0x8, def value: None
  int64_t ___pingTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ConnectedPlayerManager__PongPacket, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<InitializePlayerEncryption>d__132
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 907 }), TypeDefinitionIndex(TypeDefinitionIndex(12723)),
// TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(3400)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 873 })} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(12704)) CS Name: ::ConnectedPlayerManager::<InitializePlayerEncryption>d__132
struct CORDL_TYPE __ConnectedPlayerManager___InitializePlayerEncryption_d__132 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0xe31810 size 0x4e8 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0xe31e64 size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::ConnectedPlayerManager*", modifiers: "",
  // def_value: None }, CppParam { name: "player", ty: "::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*", modifiers: "", def_value: None }, CppParam { name: "_isClient_5__2", ty: "bool",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t,::Array<uint8_t>*>>", modifiers: "", def_value: None },
  // CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>", modifiers: "", def_value: None }]
  constexpr __ConnectedPlayerManager___InitializePlayerEncryption_d__132(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                         ::GlobalNamespace::ConnectedPlayerManager* __4__this, ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* player,
                                                                         bool _isClient_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t, ::Array<uint8_t>*>> __u__1,
                                                                         ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__EncryptionUtility__IEncryptionState*> __u__2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConnectedPlayerManager___InitializePlayerEncryption_d__132();

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

} // namespace GlobalNamespace
// Type: ::ConnectedPlayerManager
// SizeInfo { instance_size: 280, native_size: -1, calculated_instance_size: 280, calculated_native_size: 280, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15021))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12705))
// CS Name: ::ConnectedPlayerManager*
class CORDL_TYPE ConnectedPlayerManager : public ::System::Object {
public:
  // Declarations
  using _InitializePlayerEncryption_d__132 = ::GlobalNamespace::__ConnectedPlayerManager___InitializePlayerEncryption_d__132;

  using PongPacket = ::GlobalNamespace::__ConnectedPlayerManager__PongPacket;

  using PingPacket = ::GlobalNamespace::__ConnectedPlayerManager__PingPacket;

  using SyncTimePacket = ::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket;

  using KickPlayerPacket = ::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket;

  using PlayerDisconnectedPacket = ::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket;

  using PlayerSortOrderPacket = ::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket;

  using PlayerStatePacket = ::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket;

  using PlayerAvatarPacket = ::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket;

  using PlayerIdentityPacket = ::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket;

  using PlayerConnectedPacket = ::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket;

  using MessageType = ::GlobalNamespace::__ConnectedPlayerManager__MessageType;

  using InternalMessageType = ::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType;

  using ConnectedPlayer = ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer;

  /// @brief Field connectedEvent, offset 0x10, size 0x8
  __declspec(property(get = __get_connectedEvent, put = __set_connectedEvent))::System::Action* connectedEvent;

  /// @brief Field initializedEvent, offset 0x18, size 0x8
  __declspec(property(get = __get_initializedEvent, put = __set_initializedEvent))::System::Action* initializedEvent;

  /// @brief Field disconnectedEvent, offset 0x20, size 0x8
  __declspec(property(get = __get_disconnectedEvent, put = __set_disconnectedEvent))::System::Action_1<::GlobalNamespace::DisconnectedReason>* disconnectedEvent;

  /// @brief Field connectionFailedEvent, offset 0x28, size 0x8
  __declspec(property(get = __get_connectionFailedEvent, put = __set_connectionFailedEvent))::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* connectionFailedEvent;

  /// @brief Field playerConnectedEvent, offset 0x30, size 0x8
  __declspec(property(get = __get_playerConnectedEvent, put = __set_playerConnectedEvent))::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* playerConnectedEvent;

  /// @brief Field playerDisconnectedEvent, offset 0x38, size 0x8
  __declspec(property(get = __get_playerDisconnectedEvent, put = __set_playerDisconnectedEvent))::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* playerDisconnectedEvent;

  /// @brief Field playerStateChangedEvent, offset 0x40, size 0x8
  __declspec(property(get = __get_playerStateChangedEvent, put = __set_playerStateChangedEvent))::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* playerStateChangedEvent;

  /// @brief Field playerAvatarChangedEvent, offset 0x48, size 0x8
  __declspec(property(get = __get_playerAvatarChangedEvent, put = __set_playerAvatarChangedEvent))::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* playerAvatarChangedEvent;

  /// @brief Field playerOrderChangedEvent, offset 0x50, size 0x8
  __declspec(property(get = __get_playerOrderChangedEvent, put = __set_playerOrderChangedEvent))::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* playerOrderChangedEvent;

  /// @brief Field playerLatencyInitializedEvent, offset 0x58, size 0x8
  __declspec(property(get = __get_playerLatencyInitializedEvent, put = __set_playerLatencyInitializedEvent))::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* playerLatencyInitializedEvent;

  /// @brief Field syncTimeInitializedEvent, offset 0x60, size 0x8
  __declspec(property(get = __get_syncTimeInitializedEvent, put = __set_syncTimeInitializedEvent))::System::Action* syncTimeInitializedEvent;

  /// @brief Field _startTicks, offset 0x68, size 0x8
  __declspec(property(get = __get__startTicks, put = __set__startTicks)) int64_t _startTicks;

  /// @brief Field _syncTimeOffset, offset 0x70, size 0x8
  __declspec(property(get = __get__syncTimeOffset, put = __set__syncTimeOffset))::GlobalNamespace::LongRollingAverage* _syncTimeOffset;

  /// @brief Field _timeProvider, offset 0x78, size 0x8
  __declspec(property(get = __get__timeProvider, put = __set__timeProvider))::BGNet::Core::ITimeProvider* _timeProvider;

  /// @brief Field _taskUtility, offset 0x80, size 0x8
  __declspec(property(get = __get__taskUtility, put = __set__taskUtility))::BGNet::Core::ITaskUtility* _taskUtility;

  /// @brief Field _connectionManager, offset 0x88, size 0x8
  __declspec(property(get = __get__connectionManager, put = __set__connectionManager))::GlobalNamespace::IConnectionManager* _connectionManager;

  /// @brief Field _temporaryDataWriter, offset 0x90, size 0x8
  __declspec(property(get = __get__temporaryDataWriter, put = __set__temporaryDataWriter))::LiteNetLib::Utils::NetDataWriter* _temporaryDataWriter;

  /// @brief Field _temporaryEncryptedDataWriter, offset 0x98, size 0x8
  __declspec(property(get = __get__temporaryEncryptedDataWriter, put = __set__temporaryEncryptedDataWriter))::LiteNetLib::Utils::NetDataWriter* _temporaryEncryptedDataWriter;

  /// @brief Field _reliableDataWriter, offset 0xa0, size 0x8
  __declspec(property(get = __get__reliableDataWriter, put = __set__reliableDataWriter))::LiteNetLib::Utils::NetDataWriter* _reliableDataWriter;

  /// @brief Field _unreliableDataWriter, offset 0xa8, size 0x8
  __declspec(property(get = __get__unreliableDataWriter, put = __set__unreliableDataWriter))::LiteNetLib::Utils::NetDataWriter* _unreliableDataWriter;

  /// @brief Field _players, offset 0xb0, size 0x8
  __declspec(property(get = __get__players, put = __set__players))::System::Collections::Generic::List_1<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>* _players;

  /// @brief Field _localPlayerState, offset 0xb8, size 0x8
  __declspec(property(get = __get__localPlayerState, put = __set__localPlayerState))::System::Collections::Generic::HashSet_1<::StringW>* _localPlayerState;

  /// @brief Field _localPlayerAvatars, offset 0xc0, size 0x18
  __declspec(property(get = __get__localPlayerAvatars, put = __set__localPlayerAvatars))::GlobalNamespace::MultiplayerAvatarsData _localPlayerAvatars;

  /// @brief Field _encryptionKeys, offset 0xd8, size 0x8
  __declspec(property(get = __get__encryptionKeys, put = __set__encryptionKeys))::GlobalNamespace::IDiffieHellmanKeyPair* _encryptionKeys;

  /// @brief Field _encryptionRandom, offset 0xe0, size 0x8
  __declspec(property(get = __get__encryptionRandom, put = __set__encryptionRandom))::ArrayW<uint8_t, ::Array<uint8_t>*> _encryptionRandom;

  /// @brief Field _localPlayer, offset 0xe8, size 0x8
  __declspec(property(get = __get__localPlayer, put = __set__localPlayer))::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* _localPlayer;

  /// @brief Field _lastConnectionId, offset 0xf0, size 0x1
  __declspec(property(get = __get__lastConnectionId, put = __set__lastConnectionId)) uint8_t _lastConnectionId;

  /// @brief Field _lastPollTime, offset 0xf8, size 0x8
  __declspec(property(get = __get__lastPollTime, put = __set__lastPollTime)) int64_t _lastPollTime;

  /// @brief Field _lastPollFrame, offset 0x100, size 0x4
  __declspec(property(get = __get__lastPollFrame, put = __set__lastPollFrame)) int32_t _lastPollFrame;

  /// @brief Field _lastPingTime, offset 0x108, size 0x8
  __declspec(property(get = __get__lastPingTime, put = __set__lastPingTime)) int64_t _lastPingTime;

  /// @brief Field _messageSerializer, offset 0x110, size 0x8
  __declspec(property(get = __get__messageSerializer, put = __set__messageSerializer))::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType,
                                                                                                                                   ::GlobalNamespace::IConnectedPlayer*>* _messageSerializer;

  __declspec(property(get = get_isConnectionOwner)) bool isConnectionOwner;

  __declspec(property(get = get_isConnectedOrConnecting)) bool isConnectedOrConnecting;

  __declspec(property(get = get_isConnected)) bool isConnected;

  __declspec(property(get = get_isConnecting)) bool isConnecting;

  __declspec(property(get = get_isDisconnecting)) bool isDisconnecting;

  __declspec(property(get = get_localPlayer))::GlobalNamespace::IConnectedPlayer* localPlayer;

  __declspec(property(get = get_connectedPlayerCount)) int32_t connectedPlayerCount;

  __declspec(property(get = get_syncTime)) int64_t syncTime;

  __declspec(property(get = get_syncTimeInitialized)) bool syncTimeInitialized;

  __declspec(property(get = get_runTime)) int64_t runTime;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::System::Action*& __get_connectedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_connectedEvent() const;

  constexpr void __set_connectedEvent(::System::Action* value);

  constexpr ::System::Action*& __get_initializedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_initializedEvent() const;

  constexpr void __set_initializedEvent(::System::Action* value);

  constexpr ::System::Action_1<::GlobalNamespace::DisconnectedReason>*& __get_disconnectedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::DisconnectedReason>*> const& __get_disconnectedEvent() const;

  constexpr void __set_disconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  constexpr ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*& __get_connectionFailedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*> const& __get_connectionFailedEvent() const;

  constexpr void __set_connectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value);

  constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*& __get_playerConnectedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*> const& __get_playerConnectedEvent() const;

  constexpr void __set_playerConnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*& __get_playerDisconnectedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*> const& __get_playerDisconnectedEvent() const;

  constexpr void __set_playerDisconnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*& __get_playerStateChangedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*> const& __get_playerStateChangedEvent() const;

  constexpr void __set_playerStateChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*& __get_playerAvatarChangedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*> const& __get_playerAvatarChangedEvent() const;

  constexpr void __set_playerAvatarChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*& __get_playerOrderChangedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*> const& __get_playerOrderChangedEvent() const;

  constexpr void __set_playerOrderChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*& __get_playerLatencyInitializedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*> const& __get_playerLatencyInitializedEvent() const;

  constexpr void __set_playerLatencyInitializedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  constexpr ::System::Action*& __get_syncTimeInitializedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_syncTimeInitializedEvent() const;

  constexpr void __set_syncTimeInitializedEvent(::System::Action* value);

  constexpr int64_t& __get__startTicks();

  constexpr int64_t const& __get__startTicks() const;

  constexpr void __set__startTicks(int64_t value);

  constexpr ::GlobalNamespace::LongRollingAverage*& __get__syncTimeOffset();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LongRollingAverage*> const& __get__syncTimeOffset() const;

  constexpr void __set__syncTimeOffset(::GlobalNamespace::LongRollingAverage* value);

  constexpr ::BGNet::Core::ITimeProvider*& __get__timeProvider();

  constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::ITimeProvider*> const& __get__timeProvider() const;

  constexpr void __set__timeProvider(::BGNet::Core::ITimeProvider* value);

  constexpr ::BGNet::Core::ITaskUtility*& __get__taskUtility();

  constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::ITaskUtility*> const& __get__taskUtility() const;

  constexpr void __set__taskUtility(::BGNet::Core::ITaskUtility* value);

  constexpr ::GlobalNamespace::IConnectionManager*& __get__connectionManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectionManager*> const& __get__connectionManager() const;

  constexpr void __set__connectionManager(::GlobalNamespace::IConnectionManager* value);

  constexpr ::LiteNetLib::Utils::NetDataWriter*& __get__temporaryDataWriter();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetDataWriter*> const& __get__temporaryDataWriter() const;

  constexpr void __set__temporaryDataWriter(::LiteNetLib::Utils::NetDataWriter* value);

  constexpr ::LiteNetLib::Utils::NetDataWriter*& __get__temporaryEncryptedDataWriter();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetDataWriter*> const& __get__temporaryEncryptedDataWriter() const;

  constexpr void __set__temporaryEncryptedDataWriter(::LiteNetLib::Utils::NetDataWriter* value);

  constexpr ::LiteNetLib::Utils::NetDataWriter*& __get__reliableDataWriter();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetDataWriter*> const& __get__reliableDataWriter() const;

  constexpr void __set__reliableDataWriter(::LiteNetLib::Utils::NetDataWriter* value);

  constexpr ::LiteNetLib::Utils::NetDataWriter*& __get__unreliableDataWriter();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetDataWriter*> const& __get__unreliableDataWriter() const;

  constexpr void __set__unreliableDataWriter(::LiteNetLib::Utils::NetDataWriter* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>*& __get__players();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>*> const& __get__players() const;

  constexpr void __set__players(::System::Collections::Generic::List_1<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>* value);

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __get__localPlayerState();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const& __get__localPlayerState() const;

  constexpr void __set__localPlayerState(::System::Collections::Generic::HashSet_1<::StringW>* value);

  constexpr ::GlobalNamespace::MultiplayerAvatarsData& __get__localPlayerAvatars();

  constexpr ::GlobalNamespace::MultiplayerAvatarsData const& __get__localPlayerAvatars() const;

  constexpr void __set__localPlayerAvatars(::GlobalNamespace::MultiplayerAvatarsData value);

  constexpr ::GlobalNamespace::IDiffieHellmanKeyPair*& __get__encryptionKeys();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IDiffieHellmanKeyPair*> const& __get__encryptionKeys() const;

  constexpr void __set__encryptionKeys(::GlobalNamespace::IDiffieHellmanKeyPair* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__encryptionRandom();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__encryptionRandom() const;

  constexpr void __set__encryptionRandom(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*& __get__localPlayer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*> const& __get__localPlayer() const;

  constexpr void __set__localPlayer(::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* value);

  constexpr uint8_t& __get__lastConnectionId();

  constexpr uint8_t const& __get__lastConnectionId() const;

  constexpr void __set__lastConnectionId(uint8_t value);

  constexpr int64_t& __get__lastPollTime();

  constexpr int64_t const& __get__lastPollTime() const;

  constexpr void __set__lastPollTime(int64_t value);

  constexpr int32_t& __get__lastPollFrame();

  constexpr int32_t const& __get__lastPollFrame() const;

  constexpr void __set__lastPollFrame(int32_t value);

  constexpr int64_t& __get__lastPingTime();

  constexpr int64_t const& __get__lastPingTime() const;

  constexpr void __set__lastPingTime(int64_t value);

  constexpr ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType, ::GlobalNamespace::IConnectedPlayer*>*& __get__messageSerializer();

  constexpr ::cordl_internals::to_const_pointer<
      ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType, ::GlobalNamespace::IConnectedPlayer*>*> const&
  __get__messageSerializer() const;

  constexpr void __set__messageSerializer(::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType, ::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method GetNextConnectionId addr 0xe2aa38 size 0x40 virtual false final false
  inline uint8_t GetNextConnectionId();

  /// @brief Method RemoveAllPlayers addr 0xe2ab3c size 0x8c virtual false final false
  inline void RemoveAllPlayers(::GlobalNamespace::DisconnectedReason reason);

  /// @brief Method RemovePlayer addr 0xe2abc8 size 0xc4 virtual false final false
  inline void RemovePlayer(::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* player, ::GlobalNamespace::DisconnectedReason reason);

  /// @brief Method AddPlayer addr 0xe2af24 size 0x29c virtual false final false
  inline void AddPlayer(::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* player);

  /// @brief Method GetPlayer addr 0xe2aa78 size 0xc4 virtual false final false
  inline ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* GetPlayer(uint8_t connectionId);

  /// @brief Method GetPlayer addr 0xe2b7e4 size 0xf4 virtual false final false
  inline ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* GetPlayer(::GlobalNamespace::IConnection* connection, uint8_t remoteConnectionId);

  /// @brief Method GetPlayer addr 0xe2b8d8 size 0xcc virtual false final false
  inline ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* GetPlayer(::StringW userId);

  /// @brief Method GetConnectedPlayer addr 0xe2b9a4 size 0x58 virtual false final false
  inline ::GlobalNamespace::IConnectedPlayer* GetConnectedPlayer(int32_t index);

  /// @brief Method add_connectedEvent addr 0xe2b9fc size 0x9c virtual false final false
  inline void add_connectedEvent(::System::Action* value);

  /// @brief Method remove_connectedEvent addr 0xe2ba98 size 0x9c virtual false final false
  inline void remove_connectedEvent(::System::Action* value);

  /// @brief Method add_initializedEvent addr 0xe2bb34 size 0x9c virtual false final false
  inline void add_initializedEvent(::System::Action* value);

  /// @brief Method remove_initializedEvent addr 0xe2bbd0 size 0x9c virtual false final false
  inline void remove_initializedEvent(::System::Action* value);

  /// @brief Method add_disconnectedEvent addr 0xe2bc6c size 0xb0 virtual false final false
  inline void add_disconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method remove_disconnectedEvent addr 0xe2bd1c size 0xb0 virtual false final false
  inline void remove_disconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method add_connectionFailedEvent addr 0xe2bdcc size 0xb0 virtual false final false
  inline void add_connectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value);

  /// @brief Method remove_connectionFailedEvent addr 0xe2be7c size 0xb0 virtual false final false
  inline void remove_connectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value);

  /// @brief Method add_playerConnectedEvent addr 0xe2bf2c size 0xb0 virtual false final false
  inline void add_playerConnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method remove_playerConnectedEvent addr 0xe2bfdc size 0xb0 virtual false final false
  inline void remove_playerConnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method add_playerDisconnectedEvent addr 0xe2c08c size 0xb0 virtual false final false
  inline void add_playerDisconnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method remove_playerDisconnectedEvent addr 0xe2c13c size 0xb0 virtual false final false
  inline void remove_playerDisconnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method add_playerStateChangedEvent addr 0xe2c1ec size 0xb0 virtual false final false
  inline void add_playerStateChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method remove_playerStateChangedEvent addr 0xe2c29c size 0xb0 virtual false final false
  inline void remove_playerStateChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method add_playerAvatarChangedEvent addr 0xe2c34c size 0xb0 virtual false final false
  inline void add_playerAvatarChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method remove_playerAvatarChangedEvent addr 0xe2c3fc size 0xb0 virtual false final false
  inline void remove_playerAvatarChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method add_playerOrderChangedEvent addr 0xe2c4ac size 0xb0 virtual false final false
  inline void add_playerOrderChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method remove_playerOrderChangedEvent addr 0xe2c55c size 0xb0 virtual false final false
  inline void remove_playerOrderChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method add_playerLatencyInitializedEvent addr 0xe2c60c size 0xb0 virtual false final false
  inline void add_playerLatencyInitializedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method remove_playerLatencyInitializedEvent addr 0xe2c6bc size 0xb0 virtual false final false
  inline void remove_playerLatencyInitializedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method add_syncTimeInitializedEvent addr 0xe2c76c size 0x9c virtual false final false
  inline void add_syncTimeInitializedEvent(::System::Action* value);

  /// @brief Method remove_syncTimeInitializedEvent addr 0xe2c808 size 0x9c virtual false final false
  inline void remove_syncTimeInitializedEvent(::System::Action* value);

  /// @brief Method get_isConnectionOwner addr 0xe2c8a4 size 0xa4 virtual false final false
  inline bool get_isConnectionOwner();

  /// @brief Method get_isConnectedOrConnecting addr 0xe2c948 size 0x28 virtual false final false
  inline bool get_isConnectedOrConnecting();

  /// @brief Method get_isConnected addr 0xe2add4 size 0xa4 virtual false final false
  inline bool get_isConnected();

  /// @brief Method get_isConnecting addr 0xe2c970 size 0xa4 virtual false final false
  inline bool get_isConnecting();

  /// @brief Method get_isDisconnecting addr 0xe2ca14 size 0xa4 virtual false final false
  inline bool get_isDisconnecting();

  /// @brief Method get_localPlayer addr 0xe2cab8 size 0x8 virtual false final false
  inline ::GlobalNamespace::IConnectedPlayer* get_localPlayer();

  /// @brief Method get_connectedPlayerCount addr 0xe2cac0 size 0x48 virtual false final false
  inline int32_t get_connectedPlayerCount();

  /// @brief Method get_syncTime addr 0xe2cb08 size 0x28 virtual false final false
  inline int64_t get_syncTime();

  /// @brief Method get_syncTimeInitialized addr 0xe2cb30 size 0x34 virtual false final false
  inline bool get_syncTimeInitialized();

  /// @brief Method get_runTime addr 0xe2b200 size 0xcc virtual false final false
  inline int64_t get_runTime();

  static inline ::GlobalNamespace::ConnectedPlayerManager* New_ctor(::GlobalNamespace::IConnectionManager* connectionManager);

  /// @brief Method .ctor addr 0xe2cb64 size 0xbc virtual false final false
  inline void _ctor(::GlobalNamespace::IConnectionManager* connectionManager);

  static inline ::GlobalNamespace::ConnectedPlayerManager* New_ctor(::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility,
                                                                    ::GlobalNamespace::IConnectionManager* connectionManager);

  /// @brief Method .ctor addr 0xe2cc20 size 0x1034 virtual false final false
  inline void _ctor(::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility, ::GlobalNamespace::IConnectionManager* connectionManager);

  /// @brief Method PollUpdate addr 0xe2e1dc size 0x168 virtual false final false
  inline void PollUpdate(int32_t frameCount);

  /// @brief Method PollLateUpdateOptional addr 0xe2e4fc size 0x2c virtual false final false
  inline void PollLateUpdateOptional();

  /// @brief Method RegisterSerializer addr 0xe2e528 size 0x68 virtual false final false
  inline void RegisterSerializer(::GlobalNamespace::__ConnectedPlayerManager__MessageType serializerType,
                                 ::GlobalNamespace::INetworkPacketSubSerializer_1<::GlobalNamespace::IConnectedPlayer*>* subSerializer);

  /// @brief Method UnregisterSerializer addr 0xe2e590 size 0x68 virtual false final false
  inline void UnregisterSerializer(::GlobalNamespace::__ConnectedPlayerManager__MessageType serializerType,
                                   ::GlobalNamespace::INetworkPacketSubSerializer_1<::GlobalNamespace::IConnectedPlayer*>* subSerializer);

  /// @brief Method GetConnectionManager addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline T GetConnectionManager();

  /// @brief Method Dispose addr 0xe2e5f8 size 0x584 virtual true final true
  inline void Dispose();

  /// @brief Method Disconnect addr 0xe2ae78 size 0xac virtual false final false
  inline void Disconnect(::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method KickPlayer addr 0xe2eb7c size 0xcc virtual false final false
  inline void KickPlayer(::StringW userId, ::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method SetLocalPlayerState addr 0xe2ec5c size 0xe0 virtual false final false
  inline void SetLocalPlayerState(::StringW state, bool setState);

  /// @brief Method SetLocalPlayerAvatar addr 0xe2ed9c size 0x94 virtual false final false
  inline void SetLocalPlayerAvatar(::GlobalNamespace::MultiplayerAvatarsData multiplayerAvatarsData);

  /// @brief Method SetLocalPlayerSortIndex addr 0xe2eeb0 size 0x10 virtual false final false
  inline void SetLocalPlayerSortIndex(int32_t sortIndex);

  /// @brief Method SetPlayerSortIndex addr 0xe2eec0 size 0xd8 virtual false final false
  inline void SetPlayerSortIndex(::GlobalNamespace::IConnectedPlayer* player, int32_t sortIndex);

  /// @brief Method ResetLocalState addr 0xe2de94 size 0x28 virtual false final false
  inline void ResetLocalState();

  /// @brief Method HandleInitialized addr 0xe2efb8 size 0x1c virtual false final false
  inline void HandleInitialized();

  /// @brief Method HandleConnected addr 0xe2debc size 0x2e8 virtual false final false
  inline void HandleConnected();

  /// @brief Method HandleDisconnected addr 0xe2f0f8 size 0x4c virtual false final false
  inline void HandleDisconnected(::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method HandleConnectionFailed addr 0xe2f144 size 0x1c virtual false final false
  inline void HandleConnectionFailed(::GlobalNamespace::ConnectionFailedReason reason);

  /// @brief Method HandleConnectionConnected addr 0xe2e1a4 size 0x38 virtual false final false
  inline void HandleConnectionConnected(::GlobalNamespace::IConnection* connection);

  /// @brief Method HandleConnectionDisconnected addr 0xe2f340 size 0x118 virtual false final false
  inline void HandleConnectionDisconnected(::GlobalNamespace::IConnection* connection, ::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method HandleNetworkReceive addr 0xe2f54c size 0x500 virtual false final false
  inline void HandleNetworkReceive(::GlobalNamespace::IConnection* connection, ::LiteNetLib::Utils::NetDataReader* reader, ::BGNet::Core::DeliveryMethod deliveryMethod);

  /// @brief Method Send addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void Send(T message);

  /// @brief Method SendUnreliable addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void SendUnreliable(T message);

  /// @brief Method SendToPlayer addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void SendToPlayer(T message, ::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method SendUnreliableEncryptedToPlayer addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void SendUnreliableEncryptedToPlayer(T message, ::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method SendUnreliableOnlyToFirstDegreeConnections addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void SendUnreliableOnlyToFirstDegreeConnections(T message);

  /// @brief Method SendUnreliableFromPlayerToPlayer addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void SendUnreliableFromPlayerToPlayer(T message, ::GlobalNamespace::IConnectedPlayer* fromPlayer, ::GlobalNamespace::IConnectedPlayer* toPlayer);

  /// @brief Method SendImmediately addr 0xe2b2d4 size 0xe4 virtual false final false
  inline void SendImmediately(::LiteNetLib::Utils::INetSerializable* message, bool onlyFirstDegree);

  /// @brief Method SendImmediatelyExcludingPlayer addr 0xe2b428 size 0xf4 virtual false final false
  inline void SendImmediatelyExcludingPlayer(::LiteNetLib::Utils::INetSerializable* message, ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* excludingPlayer, bool onlyFirstDegree);

  /// @brief Method SendImmediatelyToPlayer addr 0xe2b52c size 0xe0 virtual false final false
  inline void SendImmediatelyToPlayer(::LiteNetLib::Utils::INetSerializable* message, ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* toPlayer);

  /// @brief Method SendImmediatelyFromPlayer addr 0xe2f460 size 0xec virtual false final false
  inline void SendImmediatelyFromPlayer(::LiteNetLib::Utils::INetSerializable* message, ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* fromPlayer, bool onlyFirstDegree);

  /// @brief Method SendImmediatelyFromPlayerToPlayer addr 0xe2b704 size 0xe0 virtual false final false
  inline void SendImmediatelyFromPlayerToPlayer(::LiteNetLib::Utils::INetSerializable* message, ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* fromPlayer,
                                                ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* toPlayer);

  /// @brief Method SendImmediatelyFromPlayerToPlayerUnreliable addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T>
  inline void SendImmediatelyFromPlayerToPlayerUnreliable(T message, ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* fromPlayer,
                                                          ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* toPlayer);

  /// @brief Method FlushReliableQueue addr 0xe2e344 size 0xdc virtual false final false
  inline void FlushReliableQueue();

  /// @brief Method FlushUnreliableQueue addr 0xe2e420 size 0xdc virtual false final false
  inline void FlushUnreliableQueue();

  /// @brief Method WriteOne addr 0xe2fa4c size 0x6c virtual false final false
  inline ::LiteNetLib::Utils::NetDataWriter* WriteOne(uint8_t senderId, uint8_t receiverId, ::LiteNetLib::Utils::INetSerializable* message);

  /// @brief Method WriteOneEncrypted addr 0xe2fbb0 size 0x168 virtual false final false
  inline ::LiteNetLib::Utils::NetDataWriter* WriteOneEncrypted(::GlobalNamespace::__EncryptionUtility__IEncryptionState* encryptionState, uint8_t senderId, uint8_t receiverId,
                                                               ::LiteNetLib::Utils::INetSerializable* message);

  /// @brief Method WriteOneOnlyToFirstDegreeConnections addr 0xe2fd18 size 0x60 virtual false final false
  inline ::LiteNetLib::Utils::NetDataWriter* WriteOneOnlyToFirstDegreeConnections(uint8_t senderId, ::LiteNetLib::Utils::INetSerializable* message);

  /// @brief Method Write addr 0xe2fab8 size 0xf8 virtual false final false
  inline void Write(::LiteNetLib::Utils::NetDataWriter* writer, ::LiteNetLib::Utils::INetSerializable* packet);

  /// @brief Method HandleServerPlayerConnected addr 0xe2fd78 size 0xcc virtual false final false
  inline void HandleServerPlayerConnected(::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket* packet, ::GlobalNamespace::IConnectedPlayer* iPlayer);

  /// @brief Method HandlePlayerIdentityUpdate addr 0xe2ff68 size 0x134 virtual false final false
  inline void HandlePlayerIdentityUpdate(::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket* packet, ::GlobalNamespace::IConnectedPlayer* iPlayer);

  /// @brief Method InitializePlayerEncryption addr 0xe30100 size 0xa0 virtual false final false
  inline void InitializePlayerEncryption(::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* player);

  /// @brief Method HandlePlayerStateUpdate addr 0xe301a0 size 0xc0 virtual false final false
  inline void HandlePlayerStateUpdate(::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket* packet, ::GlobalNamespace::IConnectedPlayer* iPlayer);

  /// @brief Method HandlePlayerAvatarUpdate addr 0xe3027c size 0xc8 virtual false final false
  inline void HandlePlayerAvatarUpdate(::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket* packet, ::GlobalNamespace::IConnectedPlayer* iPlayer);

  /// @brief Method HandleServerPlayerDisconnected addr 0xe30368 size 0xa8 virtual false final false
  inline void HandleServerPlayerDisconnected(::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket* packet, ::GlobalNamespace::IConnectedPlayer* iPlayer);

  /// @brief Method HandleKickPlayerPacket addr 0xe30464 size 0xe0 virtual false final false
  inline void HandleKickPlayerPacket(::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket* packet, ::GlobalNamespace::IConnectedPlayer* iPlayer);

  /// @brief Method HandlePlayerSortOrderUpdate addr 0xe30598 size 0x12c virtual false final false
  inline void HandlePlayerSortOrderUpdate(::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket* packet, ::GlobalNamespace::IConnectedPlayer* iPlayer);

  /// @brief Method HandleSyncTimePacket addr 0xe30718 size 0x140 virtual false final false
  inline void HandleSyncTimePacket(::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket* packet, ::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method HandlePing addr 0xe308ac size 0x1f4 virtual false final false
  inline void HandlePing(::GlobalNamespace::__ConnectedPlayerManager__PingPacket* packet, ::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method HandlePong addr 0xe30b04 size 0x174 virtual false final false
  inline void HandlePong(::GlobalNamespace::__ConnectedPlayerManager__PongPacket* packet, ::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method Log addr 0xe30ce8 size 0x8c virtual false final false
  inline void Log(::StringW message);

  // Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConnectedPlayerManager(ConnectedPlayerManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConnectedPlayerManager(ConnectedPlayerManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectedPlayerManager();

public:
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

  /// @brief Field kTimeSensitiveAllowedReceiveWindowMs offset 0xffffffff size 0x8
  static constexpr int64_t kTimeSensitiveAllowedReceiveWindowMs{ static_cast<int64_t>(0x1e) };

  /// @brief Field kMaxUnreliableMessageLength offset 0xffffffff size 0x4
  static constexpr int32_t kMaxUnreliableMessageLength{ static_cast<int32_t>(0x19c) };

  /// @brief Field kPingUpdateFrequencyMs offset 0xffffffff size 0x8
  static constexpr int64_t kPingUpdateFrequencyMs{ static_cast<int64_t>(0x7d0) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ConnectedPlayerManager, 0x118>, "Size mismatch!");

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
