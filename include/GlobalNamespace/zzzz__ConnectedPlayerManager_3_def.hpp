#pragma once
// IWYU pragma private; include "GlobalNamespace/ConnectedPlayerManager_3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ConnectedPlayerManager_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConnectedPlayerManager_3)
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
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData> struct ConnectedPlayerManager_3__InitializePlayerEncryption_d__116;
}
namespace GlobalNamespace {
struct ConnectedPlayerManager_InternalMessageType;
}
namespace GlobalNamespace {
struct ConnectedPlayerManager_MessageType;
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
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData> class IConnectedPlayerFactory_3;
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
class KickPlayerPacket;
}
namespace GlobalNamespace {
class LongRollingAverage;
}
namespace GlobalNamespace {
template <typename TType, typename TData> class NetworkPacketSerializer_2;
}
namespace GlobalNamespace {
class PingPacket;
}
namespace GlobalNamespace {
class PlayerConnectedPacket;
}
namespace GlobalNamespace {
class PlayerDisconnectedPacket;
}
namespace GlobalNamespace {
template <typename TGameSpecificIdentityData> class PlayerIdentityPacket_1;
}
namespace GlobalNamespace {
class PlayerSortOrderPacket;
}
namespace GlobalNamespace {
class PlayerStatePacket;
}
namespace GlobalNamespace {
class PongPacket;
}
namespace GlobalNamespace {
class SyncTimePacket;
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
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData> class ConnectedPlayerManager_3;
}
namespace GlobalNamespace {
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData> struct ConnectedPlayerManager_3__InitializePlayerEncryption_d__116;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::ConnectedPlayerManager_3);
MARK_GEN_VAL_T(::GlobalNamespace::ConnectedPlayerManager_3__InitializePlayerEncryption_d__116);
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// cpp template
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
// Is value type: true
// CS Name: ConnectedPlayerManager`3/<InitializePlayerEncryption>d__116<TConnectedPlayer,TConnectedPlayerImpl,TGameSpecificIdentityData>
struct CORDL_TYPE ConnectedPlayerManager_3__InitializePlayerEncryption_d__116 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectedPlayerManager_3__InitializePlayerEncryption_d__116();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer,TConnectedPlayerImpl,TGameSpecificIdentityData>*", modifiers: "", def_value: None }, CppParam { name: "player", ty:
  // "TConnectedPlayerImpl", modifiers: "", def_value: None }, CppParam { name: "_isClient_5__2", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t,::Array<uint8_t>*>>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EncryptionUtility_IEncryptionState*>", modifiers: "", def_value: None }]
  constexpr ConnectedPlayerManager_3__InitializePlayerEncryption_d__116(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                        ::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>* __4__this,
                                                                        TConnectedPlayerImpl player, bool _isClient_5__2,
                                                                        ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t, ::Array<uint8_t>*>> __u__1,
                                                                        ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EncryptionUtility_IEncryptionState*> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18091 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>* __4__this;

  /// @brief Field player, offset: 0x30, size: 0x8, def value: None
  TConnectedPlayerImpl player;

  /// @brief Field <isClient>5__2, offset: 0x38, size: 0x1, def value: None
  bool _isClient_5__2;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t, ::Array<uint8_t>*>> __u__1;

  /// @brief Field <>u__2, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EncryptionUtility_IEncryptionState*> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies ConnectedPlayerManager
namespace GlobalNamespace {
// cpp template
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
// Is value type: false
// CS Name: ConnectedPlayerManager`3<TConnectedPlayer,TConnectedPlayerImpl,TGameSpecificIdentityData>
class CORDL_TYPE ConnectedPlayerManager_3 : public ::GlobalNamespace::ConnectedPlayerManager {
public:
  // Declarations
  using _InitializePlayerEncryption_d__116 = ::GlobalNamespace::ConnectedPlayerManager_3__InitializePlayerEncryption_d__116<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>;

  /// @brief Field _connectedPlayerFactory, offset 0x88, size 0x8
  __declspec(property(
      get = __cordl_internal_get__connectedPlayerFactory,
      put = __cordl_internal_set__connectedPlayerFactory)) ::GlobalNamespace::IConnectedPlayerFactory_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>* _connectedPlayerFactory;

  /// @brief Field _connectionManager, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__connectionManager, put = __cordl_internal_set__connectionManager)) ::GlobalNamespace::IConnectionManager* _connectionManager;

  /// @brief Field _encryptionKeys, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__encryptionKeys, put = __cordl_internal_set__encryptionKeys)) ::GlobalNamespace::IDiffieHellmanKeyPair* _encryptionKeys;

  /// @brief Field _encryptionRandom, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__encryptionRandom, put = __cordl_internal_set__encryptionRandom)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _encryptionRandom;

  /// @brief Field _lastConnectionId, offset 0xd8, size 0x1
  __declspec(property(get = __cordl_internal_get__lastConnectionId, put = __cordl_internal_set__lastConnectionId)) uint8_t _lastConnectionId;

  /// @brief Field _lastPingTime, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__lastPingTime, put = __cordl_internal_set__lastPingTime)) int64_t _lastPingTime;

  /// @brief Field _lastPollFrame, offset 0xe8, size 0x4
  __declspec(property(get = __cordl_internal_get__lastPollFrame, put = __cordl_internal_set__lastPollFrame)) int32_t _lastPollFrame;

  /// @brief Field _lastPollTime, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__lastPollTime, put = __cordl_internal_set__lastPollTime)) int64_t _lastPollTime;

  /// @brief Field _localPlayer, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__localPlayer, put = __cordl_internal_set__localPlayer)) TConnectedPlayerImpl _localPlayer;

  /// @brief Field _localPlayerState, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__localPlayerState, put = __cordl_internal_set__localPlayerState)) ::System::Collections::Generic::HashSet_1<::StringW>* _localPlayerState;

  /// @brief Field _messageSerializer, offset 0xf8, size 0x8
  __declspec(property(
      get = __cordl_internal_get__messageSerializer,
      put = __cordl_internal_set__messageSerializer)) ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::ConnectedPlayerManager_InternalMessageType, TConnectedPlayer>* _messageSerializer;

  /// @brief Field _players, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__players, put = __cordl_internal_set__players)) ::System::Collections::Generic::List_1<TConnectedPlayerImpl>* _players;

  /// @brief Field _reliableDataWriter, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__reliableDataWriter, put = __cordl_internal_set__reliableDataWriter)) ::LiteNetLib::Utils::NetDataWriter* _reliableDataWriter;

  /// @brief Field _startTicks, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__startTicks, put = __cordl_internal_set__startTicks)) int64_t _startTicks;

  /// @brief Field _syncTimeOffset, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__syncTimeOffset, put = __cordl_internal_set__syncTimeOffset)) ::GlobalNamespace::LongRollingAverage* _syncTimeOffset;

  /// @brief Field _taskUtility, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__taskUtility, put = __cordl_internal_set__taskUtility)) ::BGNet::Core::ITaskUtility* _taskUtility;

  /// @brief Field _temporaryDataWriter, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__temporaryDataWriter, put = __cordl_internal_set__temporaryDataWriter)) ::LiteNetLib::Utils::NetDataWriter* _temporaryDataWriter;

  /// @brief Field _temporaryEncryptedDataWriter, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__temporaryEncryptedDataWriter,
                      put = __cordl_internal_set__temporaryEncryptedDataWriter)) ::LiteNetLib::Utils::NetDataWriter* _temporaryEncryptedDataWriter;

  /// @brief Field _timeProvider, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__timeProvider, put = __cordl_internal_set__timeProvider)) ::BGNet::Core::ITimeProvider* _timeProvider;

  /// @brief Field _unreliableDataWriter, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__unreliableDataWriter, put = __cordl_internal_set__unreliableDataWriter)) ::LiteNetLib::Utils::NetDataWriter* _unreliableDataWriter;

  __declspec(property(get = get_compatibilityVersion)) ::StringW compatibilityVersion;

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

  __declspec(property(get = get_localPlayer)) TConnectedPlayer localPlayer;

  /// @brief Field playerConnectedEvent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_playerConnectedEvent, put = __cordl_internal_set_playerConnectedEvent)) ::System::Action_1<TConnectedPlayer>* playerConnectedEvent;

  /// @brief Field playerDisconnectedEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_playerDisconnectedEvent, put = __cordl_internal_set_playerDisconnectedEvent)) ::System::Action_1<TConnectedPlayer>* playerDisconnectedEvent;

  /// @brief Field playerLatencyInitializedEvent, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_playerLatencyInitializedEvent,
                      put = __cordl_internal_set_playerLatencyInitializedEvent)) ::System::Action_1<TConnectedPlayer>* playerLatencyInitializedEvent;

  /// @brief Field playerOrderChangedEvent, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_playerOrderChangedEvent, put = __cordl_internal_set_playerOrderChangedEvent)) ::System::Action_1<TConnectedPlayer>* playerOrderChangedEvent;

  /// @brief Field playerStateChangedEvent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_playerStateChangedEvent, put = __cordl_internal_set_playerStateChangedEvent)) ::System::Action_1<TConnectedPlayer>* playerStateChangedEvent;

  __declspec(property(get = get_runTime)) int64_t runTime;

  __declspec(property(get = get_syncTime)) int64_t syncTime;

  __declspec(property(get = get_syncTimeInitialized)) bool syncTimeInitialized;

  /// @brief Field syncTimeInitializedEvent, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_syncTimeInitializedEvent, put = __cordl_internal_set_syncTimeInitializedEvent)) ::System::Action* syncTimeInitializedEvent;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AddPlayer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddPlayer(TConnectedPlayerImpl player);

  /// @brief Method Disconnect, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Disconnect(::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method DisposeGameSpecificResources, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void DisposeGameSpecificResources();

  /// @brief Method FlushReliableQueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void FlushReliableQueue();

  /// @brief Method FlushUnreliableQueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void FlushUnreliableQueue();

  /// @brief Method GetConnectedPlayer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TConnectedPlayerImpl GetConnectedPlayer(int32_t index);

  /// @brief Method GetConnectionManager, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetConnectionManager();

  /// @brief Method GetNextConnectionId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline uint8_t GetNextConnectionId();

  /// @brief Method GetPlayer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TConnectedPlayerImpl GetPlayer(::GlobalNamespace::IConnection* connection, uint8_t remoteConnectionId);

  /// @brief Method GetPlayer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TConnectedPlayerImpl GetPlayer(uint8_t connectionId);

  /// @brief Method GetPlayer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TConnectedPlayerImpl GetPlayer(::StringW userId);

  /// @brief Method HandleConnected, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void HandleConnected();

  /// @brief Method HandleConnectionConnected, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void HandleConnectionConnected(::GlobalNamespace::IConnection* connection);

  /// @brief Method HandleConnectionDisconnected, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void HandleConnectionDisconnected(::GlobalNamespace::IConnection* connection, ::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method HandleConnectionFailed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void HandleConnectionFailed(::GlobalNamespace::ConnectionFailedReason reason);

  /// @brief Method HandleDisconnected, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void HandleDisconnected(::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method HandleGameSpecificConnected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void HandleGameSpecificConnected();

  /// @brief Method HandleGameSpecificPlayerAdded, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void HandleGameSpecificPlayerAdded(TConnectedPlayerImpl player);

  /// @brief Method HandleGameSpecificPlayerIdentityUpdate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void HandleGameSpecificPlayerIdentityUpdate(TGameSpecificIdentityData identityData, TConnectedPlayer iPlayer);

  /// @brief Method HandleInitialized, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void HandleInitialized();

  /// @brief Method HandleKickPlayerPacket, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void HandleKickPlayerPacket(::GlobalNamespace::KickPlayerPacket* packet, TConnectedPlayer iPlayer);

  /// @brief Method HandleNetworkReceive, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void HandleNetworkReceive(::GlobalNamespace::IConnection* connection, ::LiteNetLib::Utils::NetDataReader* reader, ::BGNet::Core::DeliveryMethod deliveryMethod);

  /// @brief Method HandlePing, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void HandlePing(::GlobalNamespace::PingPacket* packet, TConnectedPlayer player);

  /// @brief Method HandlePlayerIdentityUpdate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void HandlePlayerIdentityUpdate(::GlobalNamespace::PlayerIdentityPacket_1<TGameSpecificIdentityData>* packet, TConnectedPlayer iPlayer);

  /// @brief Method HandlePlayerSortOrderUpdate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void HandlePlayerSortOrderUpdate(::GlobalNamespace::PlayerSortOrderPacket* packet, TConnectedPlayer iPlayer);

  /// @brief Method HandlePlayerStateUpdate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void HandlePlayerStateUpdate(::GlobalNamespace::PlayerStatePacket* packet, TConnectedPlayer iPlayer);

  /// @brief Method HandlePong, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void HandlePong(::GlobalNamespace::PongPacket* packet, TConnectedPlayer player);

  /// @brief Method HandleServerPlayerConnected, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void HandleServerPlayerConnected(::GlobalNamespace::PlayerConnectedPacket* packet, TConnectedPlayer iPlayer);

  /// @brief Method HandleServerPlayerDisconnected, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void HandleServerPlayerDisconnected(::GlobalNamespace::PlayerDisconnectedPacket* packet, TConnectedPlayer iPlayer);

  /// @brief Method HandleSyncTimePacket, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void HandleSyncTimePacket(::GlobalNamespace::SyncTimePacket* packet, TConnectedPlayer player);

  /// @brief Method InitializePlayerEncryption, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void InitializePlayerEncryption(TConnectedPlayerImpl player);

  /// @brief Method KickPlayer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void KickPlayer(::StringW userId, ::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method Log, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Log(::StringW message);

  static inline ::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*
  New_ctor(::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility, ::GlobalNamespace::IConnectionManager* connectionManager,
           ::GlobalNamespace::IConnectedPlayerFactory_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>* connectedPlayerFactory);

  /// @brief Method NotifyPlayerStateChangedEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void NotifyPlayerStateChangedEvent(TConnectedPlayer player);

  /// @brief Method PollLateUpdateOptional, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void PollLateUpdateOptional();

  /// @brief Method PollUpdate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void PollUpdate(int32_t frameCount);

  /// @brief Method RegisterSerializer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RegisterSerializer(::GlobalNamespace::ConnectedPlayerManager_MessageType serializerType, ::GlobalNamespace::INetworkPacketSubSerializer_1<TConnectedPlayer>* subSerializer);

  /// @brief Method RemoveAllPlayers, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RemoveAllPlayers(::GlobalNamespace::DisconnectedReason reason);

  /// @brief Method RemovePlayer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RemovePlayer(TConnectedPlayerImpl player, ::GlobalNamespace::DisconnectedReason reason);

  /// @brief Method ResetLocalState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ResetLocalState();

  /// @brief Method Send, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void Send(T message);

  /// @brief Method SendImmediately, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SendImmediately(::LiteNetLib::Utils::INetSerializable* message, bool onlyFirstDegree);

  /// @brief Method SendImmediatelyExcludingPlayer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SendImmediatelyExcludingPlayer(::LiteNetLib::Utils::INetSerializable* message, TConnectedPlayerImpl excludingPlayer, bool onlyFirstDegree);

  /// @brief Method SendImmediatelyFromPlayer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SendImmediatelyFromPlayer(::LiteNetLib::Utils::INetSerializable* message, TConnectedPlayerImpl fromPlayer, bool onlyFirstDegree);

  /// @brief Method SendImmediatelyFromPlayerToPlayer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SendImmediatelyFromPlayerToPlayer(::LiteNetLib::Utils::INetSerializable* message, TConnectedPlayerImpl fromPlayer, TConnectedPlayerImpl toPlayer);

  /// @brief Method SendImmediatelyFromPlayerToPlayerUnreliable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SendImmediatelyFromPlayerToPlayerUnreliable(T message, TConnectedPlayerImpl fromPlayer, TConnectedPlayerImpl toPlayer);

  /// @brief Method SendImmediatelyToPlayer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SendImmediatelyToPlayer(::LiteNetLib::Utils::INetSerializable* message, TConnectedPlayerImpl toPlayer);

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

  /// @brief Method SetLocalPlayerSortIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetLocalPlayerSortIndex(int32_t sortIndex);

  /// @brief Method SetLocalPlayerState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetLocalPlayerState(::StringW state, bool setState);

  /// @brief Method SetPlayerSortIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetPlayerSortIndex(::GlobalNamespace::IConnectedPlayer* player, int32_t sortIndex);

  /// @brief Method UnregisterSerializer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UnregisterSerializer(::GlobalNamespace::ConnectedPlayerManager_MessageType serializerType, ::GlobalNamespace::INetworkPacketSubSerializer_1<TConnectedPlayer>* subSerializer);

  /// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Write(::LiteNetLib::Utils::NetDataWriter* writer, ::LiteNetLib::Utils::INetSerializable* packet);

  /// @brief Method WriteOne, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::LiteNetLib::Utils::NetDataWriter* WriteOne(uint8_t senderId, uint8_t receiverId, ::LiteNetLib::Utils::INetSerializable* message);

  /// @brief Method WriteOneEncrypted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::LiteNetLib::Utils::NetDataWriter* WriteOneEncrypted(::GlobalNamespace::EncryptionUtility_IEncryptionState* encryptionState, uint8_t senderId, uint8_t receiverId,
                                                               ::LiteNetLib::Utils::INetSerializable* message);

  /// @brief Method WriteOneOnlyToFirstDegreeConnections, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::LiteNetLib::Utils::NetDataWriter* WriteOneOnlyToFirstDegreeConnections(uint8_t senderId, ::LiteNetLib::Utils::INetSerializable* message);

  constexpr ::GlobalNamespace::IConnectedPlayerFactory_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>* const& __cordl_internal_get__connectedPlayerFactory() const;

  constexpr ::GlobalNamespace::IConnectedPlayerFactory_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*& __cordl_internal_get__connectedPlayerFactory();

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

  constexpr TConnectedPlayerImpl const& __cordl_internal_get__localPlayer() const;

  constexpr TConnectedPlayerImpl& __cordl_internal_get__localPlayer();

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& __cordl_internal_get__localPlayerState() const;

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get__localPlayerState();

  constexpr ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::ConnectedPlayerManager_InternalMessageType, TConnectedPlayer>* const& __cordl_internal_get__messageSerializer() const;

  constexpr ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::ConnectedPlayerManager_InternalMessageType, TConnectedPlayer>*& __cordl_internal_get__messageSerializer();

  constexpr ::System::Collections::Generic::List_1<TConnectedPlayerImpl>* const& __cordl_internal_get__players() const;

  constexpr ::System::Collections::Generic::List_1<TConnectedPlayerImpl>*& __cordl_internal_get__players();

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

  constexpr ::System::Action_1<TConnectedPlayer>* const& __cordl_internal_get_playerConnectedEvent() const;

  constexpr ::System::Action_1<TConnectedPlayer>*& __cordl_internal_get_playerConnectedEvent();

  constexpr ::System::Action_1<TConnectedPlayer>* const& __cordl_internal_get_playerDisconnectedEvent() const;

  constexpr ::System::Action_1<TConnectedPlayer>*& __cordl_internal_get_playerDisconnectedEvent();

  constexpr ::System::Action_1<TConnectedPlayer>* const& __cordl_internal_get_playerLatencyInitializedEvent() const;

  constexpr ::System::Action_1<TConnectedPlayer>*& __cordl_internal_get_playerLatencyInitializedEvent();

  constexpr ::System::Action_1<TConnectedPlayer>* const& __cordl_internal_get_playerOrderChangedEvent() const;

  constexpr ::System::Action_1<TConnectedPlayer>*& __cordl_internal_get_playerOrderChangedEvent();

  constexpr ::System::Action_1<TConnectedPlayer>* const& __cordl_internal_get_playerStateChangedEvent() const;

  constexpr ::System::Action_1<TConnectedPlayer>*& __cordl_internal_get_playerStateChangedEvent();

  constexpr ::System::Action* const& __cordl_internal_get_syncTimeInitializedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_syncTimeInitializedEvent();

  constexpr void __cordl_internal_set__connectedPlayerFactory(::GlobalNamespace::IConnectedPlayerFactory_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>* value);

  constexpr void __cordl_internal_set__connectionManager(::GlobalNamespace::IConnectionManager* value);

  constexpr void __cordl_internal_set__encryptionKeys(::GlobalNamespace::IDiffieHellmanKeyPair* value);

  constexpr void __cordl_internal_set__encryptionRandom(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__lastConnectionId(uint8_t value);

  constexpr void __cordl_internal_set__lastPingTime(int64_t value);

  constexpr void __cordl_internal_set__lastPollFrame(int32_t value);

  constexpr void __cordl_internal_set__lastPollTime(int64_t value);

  constexpr void __cordl_internal_set__localPlayer(TConnectedPlayerImpl value);

  constexpr void __cordl_internal_set__localPlayerState(::System::Collections::Generic::HashSet_1<::StringW>* value);

  constexpr void __cordl_internal_set__messageSerializer(::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::ConnectedPlayerManager_InternalMessageType, TConnectedPlayer>* value);

  constexpr void __cordl_internal_set__players(::System::Collections::Generic::List_1<TConnectedPlayerImpl>* value);

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

  constexpr void __cordl_internal_set_playerConnectedEvent(::System::Action_1<TConnectedPlayer>* value);

  constexpr void __cordl_internal_set_playerDisconnectedEvent(::System::Action_1<TConnectedPlayer>* value);

  constexpr void __cordl_internal_set_playerLatencyInitializedEvent(::System::Action_1<TConnectedPlayer>* value);

  constexpr void __cordl_internal_set_playerOrderChangedEvent(::System::Action_1<TConnectedPlayer>* value);

  constexpr void __cordl_internal_set_playerStateChangedEvent(::System::Action_1<TConnectedPlayer>* value);

  constexpr void __cordl_internal_set_syncTimeInitializedEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility, ::GlobalNamespace::IConnectionManager* connectionManager,
                    ::GlobalNamespace::IConnectedPlayerFactory_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>* connectedPlayerFactory);

  /// @brief Method add_connectedEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void add_connectedEvent(::System::Action* value);

  /// @brief Method add_connectionFailedEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void add_connectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value);

  /// @brief Method add_disconnectedEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void add_disconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method add_initializedEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void add_initializedEvent(::System::Action* value);

  /// @brief Method add_playerConnectedEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void add_playerConnectedEvent(::System::Action_1<TConnectedPlayer>* value);

  /// @brief Method add_playerDisconnectedEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void add_playerDisconnectedEvent(::System::Action_1<TConnectedPlayer>* value);

  /// @brief Method add_playerLatencyInitializedEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void add_playerLatencyInitializedEvent(::System::Action_1<TConnectedPlayer>* value);

  /// @brief Method add_playerOrderChangedEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void add_playerOrderChangedEvent(::System::Action_1<TConnectedPlayer>* value);

  /// @brief Method add_playerStateChangedEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void add_playerStateChangedEvent(::System::Action_1<TConnectedPlayer>* value);

  /// @brief Method add_syncTimeInitializedEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void add_syncTimeInitializedEvent(::System::Action* value);

  /// @brief Method get_compatibilityVersion, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::StringW get_compatibilityVersion();

  /// @brief Method get_connectedPlayerCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_connectedPlayerCount();

  /// @brief Method get_isConnected, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_isConnected();

  /// @brief Method get_isConnectedOrConnecting, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_isConnectedOrConnecting();

  /// @brief Method get_isConnecting, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_isConnecting();

  /// @brief Method get_isConnectionOwner, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_isConnectionOwner();

  /// @brief Method get_isDisconnecting, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_isDisconnecting();

  /// @brief Method get_localPlayer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TConnectedPlayer get_localPlayer();

  /// @brief Method get_runTime, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int64_t get_runTime();

  /// @brief Method get_syncTime, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int64_t get_syncTime();

  /// @brief Method get_syncTimeInitialized, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_syncTimeInitialized();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method remove_connectedEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void remove_connectedEvent(::System::Action* value);

  /// @brief Method remove_connectionFailedEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void remove_connectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value);

  /// @brief Method remove_disconnectedEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void remove_disconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method remove_initializedEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void remove_initializedEvent(::System::Action* value);

  /// @brief Method remove_playerConnectedEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void remove_playerConnectedEvent(::System::Action_1<TConnectedPlayer>* value);

  /// @brief Method remove_playerDisconnectedEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void remove_playerDisconnectedEvent(::System::Action_1<TConnectedPlayer>* value);

  /// @brief Method remove_playerLatencyInitializedEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void remove_playerLatencyInitializedEvent(::System::Action_1<TConnectedPlayer>* value);

  /// @brief Method remove_playerOrderChangedEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void remove_playerOrderChangedEvent(::System::Action_1<TConnectedPlayer>* value);

  /// @brief Method remove_playerStateChangedEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void remove_playerStateChangedEvent(::System::Action_1<TConnectedPlayer>* value);

  /// @brief Method remove_syncTimeInitializedEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void remove_syncTimeInitializedEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectedPlayerManager_3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerManager_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConnectedPlayerManager_3(ConnectedPlayerManager_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerManager_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConnectedPlayerManager_3(ConnectedPlayerManager_3 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18092 };

  /// @brief Field connectedEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Action* ___connectedEvent;

  /// @brief Field initializedEvent, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___initializedEvent;

  /// @brief Field disconnectedEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::DisconnectedReason>* ___disconnectedEvent;

  /// @brief Field connectionFailedEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* ___connectionFailedEvent;

  /// @brief Field playerConnectedEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<TConnectedPlayer>* ___playerConnectedEvent;

  /// @brief Field playerDisconnectedEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<TConnectedPlayer>* ___playerDisconnectedEvent;

  /// @brief Field playerStateChangedEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action_1<TConnectedPlayer>* ___playerStateChangedEvent;

  /// @brief Field playerOrderChangedEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action_1<TConnectedPlayer>* ___playerOrderChangedEvent;

  /// @brief Field playerLatencyInitializedEvent, offset: 0x50, size: 0x8, def value: None
  ::System::Action_1<TConnectedPlayer>* ___playerLatencyInitializedEvent;

  /// @brief Field syncTimeInitializedEvent, offset: 0x58, size: 0x8, def value: None
  ::System::Action* ___syncTimeInitializedEvent;

  /// @brief Field _startTicks, offset: 0x60, size: 0x8, def value: None
  int64_t ____startTicks;

  /// @brief Field _syncTimeOffset, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::LongRollingAverage* ____syncTimeOffset;

  /// @brief Field _timeProvider, offset: 0x70, size: 0x8, def value: None
  ::BGNet::Core::ITimeProvider* ____timeProvider;

  /// @brief Field _taskUtility, offset: 0x78, size: 0x8, def value: None
  ::BGNet::Core::ITaskUtility* ____taskUtility;

  /// @brief Field _connectionManager, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::IConnectionManager* ____connectionManager;

  /// @brief Field _connectedPlayerFactory, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayerFactory_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>* ____connectedPlayerFactory;

  /// @brief Field _temporaryDataWriter, offset: 0x90, size: 0x8, def value: None
  ::LiteNetLib::Utils::NetDataWriter* ____temporaryDataWriter;

  /// @brief Field _temporaryEncryptedDataWriter, offset: 0x98, size: 0x8, def value: None
  ::LiteNetLib::Utils::NetDataWriter* ____temporaryEncryptedDataWriter;

  /// @brief Field _reliableDataWriter, offset: 0xa0, size: 0x8, def value: None
  ::LiteNetLib::Utils::NetDataWriter* ____reliableDataWriter;

  /// @brief Field _unreliableDataWriter, offset: 0xa8, size: 0x8, def value: None
  ::LiteNetLib::Utils::NetDataWriter* ____unreliableDataWriter;

  /// @brief Field _players, offset: 0xb0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<TConnectedPlayerImpl>* ____players;

  /// @brief Field _localPlayerState, offset: 0xb8, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ____localPlayerState;

  /// @brief Field _encryptionKeys, offset: 0xc0, size: 0x8, def value: None
  ::GlobalNamespace::IDiffieHellmanKeyPair* ____encryptionKeys;

  /// @brief Field _encryptionRandom, offset: 0xc8, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____encryptionRandom;

  /// @brief Field _localPlayer, offset: 0xd0, size: 0x8, def value: None
  TConnectedPlayerImpl ____localPlayer;

  /// @brief Field _lastConnectionId, offset: 0xd8, size: 0x1, def value: None
  uint8_t ____lastConnectionId;

  /// @brief Field _lastPollTime, offset: 0xe0, size: 0x8, def value: None
  int64_t ____lastPollTime;

  /// @brief Field _lastPollFrame, offset: 0xe8, size: 0x4, def value: None
  int32_t ____lastPollFrame;

  /// @brief Field _lastPingTime, offset: 0xf0, size: 0x8, def value: None
  int64_t ____lastPingTime;

  /// @brief Field _messageSerializer, offset: 0xf8, size: 0x8, def value: None
  ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::ConnectedPlayerManager_InternalMessageType, TConnectedPlayer>* ____messageSerializer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::ConnectedPlayerManager_3, "", "ConnectedPlayerManager`3");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::ConnectedPlayerManager_3__InitializePlayerEncryption_d__116, "", "ConnectedPlayerManager`3/<InitializePlayerEncryption>d__116");
