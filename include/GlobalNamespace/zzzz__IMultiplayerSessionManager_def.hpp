#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IMultiplayerSessionManager)
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
template <typename TData> class INetworkPacketSubSerializer_1;
}
namespace GlobalNamespace {
class ConnectedPlayerManager;
}
namespace GlobalNamespace {
struct __MultiplayerSessionManager__MessageType;
}
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
struct __MultiplayerSessionManager__SessionType;
}
namespace System {
template <typename TResult> class Func_1;
}
// Forward declare root types
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IMultiplayerSessionManager);
// Type: ::IMultiplayerSessionManager
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12799))
// CS Name: ::IMultiplayerSessionManager*
class CORDL_TYPE IMultiplayerSessionManager {
public:
  // Declarations
  __declspec(property(get = get_localPlayer))::GlobalNamespace::IConnectedPlayer* localPlayer;

  __declspec(property(get = get_isConnectionOwner)) bool isConnectionOwner;

  __declspec(property(get = get_syncTime)) int64_t syncTime;

  __declspec(property(get = get_isSyncTimeInitialized)) bool isSyncTimeInitialized;

  __declspec(property(get = get_maxPlayerCount)) int32_t maxPlayerCount;

  __declspec(property(get = get_connectedPlayerCount)) int32_t connectedPlayerCount;

  __declspec(property(get = get_isConnectingOrConnected)) bool isConnectingOrConnected;

  __declspec(property(get = get_isConnected)) bool isConnected;

  __declspec(property(get = get_isConnecting)) bool isConnecting;

  __declspec(property(get = get_isDisconnecting)) bool isDisconnecting;

  __declspec(property(get = get_isSpectating)) bool isSpectating;

  __declspec(property(get = get_connectedPlayers))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>* connectedPlayers;

  __declspec(property(get = get_connectionOwner))::GlobalNamespace::IConnectedPlayer* connectionOwner;

  /// @brief Method get_localPlayer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::IConnectedPlayer* get_localPlayer();

  /// @brief Method get_isConnectionOwner, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_isConnectionOwner();

  /// @brief Method get_syncTime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int64_t get_syncTime();

  /// @brief Method get_isSyncTimeInitialized, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_isSyncTimeInitialized();

  /// @brief Method get_maxPlayerCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_maxPlayerCount();

  /// @brief Method get_connectedPlayerCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_connectedPlayerCount();

  /// @brief Method get_isConnectingOrConnected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_isConnectingOrConnected();

  /// @brief Method get_isConnected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_isConnected();

  /// @brief Method get_isConnecting, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_isConnecting();

  /// @brief Method get_isDisconnecting, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_isDisconnecting();

  /// @brief Method get_isSpectating, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_isSpectating();

  /// @brief Method get_connectedPlayers, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>* get_connectedPlayers();

  /// @brief Method get_connectionOwner, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::IConnectedPlayer* get_connectionOwner();

  /// @brief Method add_connectedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_connectedEvent(::System::Action* value);

  /// @brief Method remove_connectedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_connectedEvent(::System::Action* value);

  /// @brief Method add_connectionFailedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_connectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value);

  /// @brief Method remove_connectionFailedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_connectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value);

  /// @brief Method add_playerConnectedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_playerConnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method remove_playerConnectedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_playerConnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method add_playerDisconnectedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_playerDisconnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method remove_playerDisconnectedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_playerDisconnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method add_playerAvatarChangedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_playerAvatarChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method remove_playerAvatarChangedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_playerAvatarChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method add_playerStateChangedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_playerStateChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method remove_playerStateChangedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_playerStateChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method add_connectionOwnerStateChangedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_connectionOwnerStateChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method remove_connectionOwnerStateChangedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_connectionOwnerStateChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method add_disconnectedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_disconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method remove_disconnectedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_disconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method add_pollUpdateEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_pollUpdateEvent(::System::Action* value);

  /// @brief Method remove_pollUpdateEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_pollUpdateEvent(::System::Action* value);

  /// @brief Method SetMaxPlayerCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetMaxPlayerCount(int32_t maxPlayerCount);

  /// @brief Method StartSession, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void StartSession(::GlobalNamespace::__MultiplayerSessionManager__SessionType sessionType, ::GlobalNamespace::ConnectedPlayerManager* connectedPlayerManager);

  /// @brief Method EndSession, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void EndSession();

  /// @brief Method GetPlayerByUserId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::IConnectedPlayer* GetPlayerByUserId(::StringW userId);

  /// @brief Method GetConnectedPlayer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::IConnectedPlayer* GetConnectedPlayer(int32_t index);

  /// @brief Method KickPlayer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void KickPlayer(::StringW userId);

  /// @brief Method Disconnect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Disconnect();

  /// @brief Method Send, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T> inline void Send(T message);

  /// @brief Method SendToPlayer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T> inline void SendToPlayer(T message, ::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method SendUnreliable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T> inline void SendUnreliable(T message);

  /// @brief Method SendUnreliableEncryptedToPlayer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T> inline void SendUnreliableEncryptedToPlayer(T message, ::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method SendUnreliableOnlyToFirstDegreeConnections, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T> inline void SendUnreliableOnlyToFirstDegreeConnections(T message);

  /// @brief Method SendUnreliableFromPlayerToPlayer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T> inline void SendUnreliableFromPlayerToPlayer(T message, ::GlobalNamespace::IConnectedPlayer* fromPlayer, ::GlobalNamespace::IConnectedPlayer* toPlayer);

  /// @brief Method RegisterCallback, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T>
  inline void RegisterCallback(::GlobalNamespace::__MultiplayerSessionManager__MessageType serializerType, ::System::Action_2<T, ::GlobalNamespace::IConnectedPlayer*>* callback,
                               ::System::Func_1<T>* constructor);

  /// @brief Method UnregisterCallback, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T> inline void UnregisterCallback(::GlobalNamespace::__MultiplayerSessionManager__MessageType serializerType);

  /// @brief Method SetLocalPlayerState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetLocalPlayerState(::StringW state, bool hasState);

  /// @brief Method LocalPlayerHasState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool LocalPlayerHasState(::StringW state);

  /// @brief Method RegisterSerializer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void RegisterSerializer(::GlobalNamespace::__MultiplayerSessionManager__MessageType serializerType,
                                 ::GlobalNamespace::INetworkPacketSubSerializer_1<::GlobalNamespace::IConnectedPlayer*>* subSerializer);

  /// @brief Method UnregisterSerializer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void UnregisterSerializer(::GlobalNamespace::__MultiplayerSessionManager__MessageType serializerType,
                                   ::GlobalNamespace::INetworkPacketSubSerializer_1<::GlobalNamespace::IConnectedPlayer*>* subSerializer);

  // Ctor Parameters [CppParam { name: "", ty: "IMultiplayerSessionManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IMultiplayerSessionManager(IMultiplayerSessionManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IMultiplayerSessionManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMultiplayerSessionManager(IMultiplayerSessionManager const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IMultiplayerSessionManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IMultiplayerSessionManager*, "", "IMultiplayerSessionManager");
