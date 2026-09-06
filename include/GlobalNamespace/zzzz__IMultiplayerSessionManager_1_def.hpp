#pragma once
// IWYU pragma private; include "GlobalNamespace/IMultiplayerSessionManager_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IMultiplayerSessionManager_1)
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
template <typename TConnectedPlayer> class IMultiplayerSessionManager_1_IMultiplayerSessionInitializer;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename TConnectedPlayer> class IMultiplayerSessionManager_1;
}
namespace GlobalNamespace {
template <typename TConnectedPlayer> class IMultiplayerSessionManager_1_IMultiplayerSessionInitializer;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::IMultiplayerSessionManager_1);
MARK_GEN_REF_T_PTR(::GlobalNamespace::IMultiplayerSessionManager_1_IMultiplayerSessionInitializer);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::IMultiplayerSessionManager_1, "", "IMultiplayerSessionManager`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::IMultiplayerSessionManager_1_IMultiplayerSessionInitializer, "", "IMultiplayerSessionManager`1/IMultiplayerSessionInitializer");
// Dependencies
namespace GlobalNamespace {
// cpp template
template <typename TConnectedPlayer>
// Is value type: false
// CS Name: IMultiplayerSessionManager`1/IMultiplayerSessionInitializer<TConnectedPlayer>
class CORDL_TYPE IMultiplayerSessionManager_1_IMultiplayerSessionInitializer {
public:
  // Declarations
  /// @brief Method InitializeLocalPlayerSessionState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void InitializeLocalPlayerSessionState();

  // Ctor Parameters [CppParam { name: "", ty: "IMultiplayerSessionManager_1_IMultiplayerSessionInitializer", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMultiplayerSessionManager_1_IMultiplayerSessionInitializer(IMultiplayerSessionManager_1_IMultiplayerSessionInitializer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18186 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies LiteNetLib.Utils.INetSerializable
namespace GlobalNamespace {
// cpp template
template <typename TConnectedPlayer>
// Is value type: false
// CS Name: IMultiplayerSessionManager`1<TConnectedPlayer>
class CORDL_TYPE IMultiplayerSessionManager_1 {
public:
  // Declarations
  using IMultiplayerSessionInitializer = ::GlobalNamespace::IMultiplayerSessionManager_1_IMultiplayerSessionInitializer<TConnectedPlayer>;

  __declspec(property(get = get_connectedPlayerCount)) int32_t connectedPlayerCount;

  __declspec(property(get = get_connectedPlayers)) ::System::Collections::Generic::IReadOnlyList_1<TConnectedPlayer>* connectedPlayers;

  __declspec(property(get = get_connectionOwner)) TConnectedPlayer connectionOwner;

  __declspec(property(get = get_isConnected)) bool isConnected;

  __declspec(property(get = get_isConnecting)) bool isConnecting;

  __declspec(property(get = get_isConnectingOrConnected)) bool isConnectingOrConnected;

  __declspec(property(get = get_isConnectionOwner)) bool isConnectionOwner;

  __declspec(property(get = get_isDisconnecting)) bool isDisconnecting;

  __declspec(property(get = get_isSpectating)) bool isSpectating;

  __declspec(property(get = get_isSyncTimeInitialized)) bool isSyncTimeInitialized;

  __declspec(property(get = get_localPlayer)) TConnectedPlayer localPlayer;

  __declspec(property(get = get_maxPlayerCount)) int32_t maxPlayerCount;

  __declspec(property(get = get_syncTime)) int64_t syncTime;

  /// @brief Method Disconnect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Disconnect();

  /// @brief Method EndSession, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void EndSession();

  /// @brief Method GetConnectedPlayer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline TConnectedPlayer GetConnectedPlayer(int32_t index);

  /// @brief Method GetPlayerByUserId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline TConnectedPlayer GetPlayerByUserId(::StringW userId);

  /// @brief Method KickPlayer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void KickPlayer(::StringW userId);

  /// @brief Method LocalPlayerHasState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool LocalPlayerHasState(::StringW state);

  /// @brief Method Send, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::LiteNetLib::Utils::INetSerializable*>)
  inline void Send(T message);

  /// @brief Method SendToPlayer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::LiteNetLib::Utils::INetSerializable*>)
  inline void SendToPlayer(T message, ::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method SendUnreliable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::LiteNetLib::Utils::INetSerializable*>)
  inline void SendUnreliable(T message);

  /// @brief Method SendUnreliableEncryptedToPlayer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::LiteNetLib::Utils::INetSerializable*>)
  inline void SendUnreliableEncryptedToPlayer(T message, ::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method SendUnreliableFromPlayerToPlayer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::LiteNetLib::Utils::INetSerializable*>)
  inline void SendUnreliableFromPlayerToPlayer(T message, ::GlobalNamespace::IConnectedPlayer* fromPlayer, ::GlobalNamespace::IConnectedPlayer* toPlayer);

  /// @brief Method SendUnreliableOnlyToFirstDegreeConnections, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::LiteNetLib::Utils::INetSerializable*>)
  inline void SendUnreliableOnlyToFirstDegreeConnections(T message);

  /// @brief Method SetLocalPlayerState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetLocalPlayerState(::StringW state, bool hasState);

  /// @brief Method SetMaxPlayerCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetMaxPlayerCount(int32_t maxPlayerCount);

  /// [CompilerGenerated]
  /// @brief Method add_connectedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_connectedEvent(::System::Action* value);

  /// [CompilerGenerated]
  /// @brief Method add_connectionFailedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_connectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value);

  /// [CompilerGenerated]
  /// @brief Method add_connectionOwnerStateChangedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_connectionOwnerStateChangedEvent(::System::Action_1<TConnectedPlayer>* value);

  /// [CompilerGenerated]
  /// @brief Method add_disconnectedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_disconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  /// [CompilerGenerated]
  /// @brief Method add_playerConnectedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_playerConnectedEvent(::System::Action_1<TConnectedPlayer>* value);

  /// [CompilerGenerated]
  /// @brief Method add_playerDisconnectedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_playerDisconnectedEvent(::System::Action_1<TConnectedPlayer>* value);

  /// [CompilerGenerated]
  /// @brief Method add_playerStateChangedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_playerStateChangedEvent(::System::Action_1<TConnectedPlayer>* value);

  /// [CompilerGenerated]
  /// @brief Method add_pollUpdateEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_pollUpdateEvent(::System::Action* value);

  /// @brief Method get_connectedPlayerCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_connectedPlayerCount();

  /// @brief Method get_connectedPlayers, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<TConnectedPlayer>* get_connectedPlayers();

  /// @brief Method get_connectionOwner, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline TConnectedPlayer get_connectionOwner();

  /// @brief Method get_isConnected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_isConnected();

  /// @brief Method get_isConnecting, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_isConnecting();

  /// @brief Method get_isConnectingOrConnected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_isConnectingOrConnected();

  /// @brief Method get_isConnectionOwner, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_isConnectionOwner();

  /// @brief Method get_isDisconnecting, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_isDisconnecting();

  /// @brief Method get_isSpectating, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_isSpectating();

  /// @brief Method get_isSyncTimeInitialized, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_isSyncTimeInitialized();

  /// @brief Method get_localPlayer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline TConnectedPlayer get_localPlayer();

  /// @brief Method get_maxPlayerCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_maxPlayerCount();

  /// @brief Method get_syncTime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int64_t get_syncTime();

  /// [CompilerGenerated]
  /// @brief Method remove_connectedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_connectedEvent(::System::Action* value);

  /// [CompilerGenerated]
  /// @brief Method remove_connectionFailedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_connectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value);

  /// [CompilerGenerated]
  /// @brief Method remove_connectionOwnerStateChangedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_connectionOwnerStateChangedEvent(::System::Action_1<TConnectedPlayer>* value);

  /// [CompilerGenerated]
  /// @brief Method remove_disconnectedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_disconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  /// [CompilerGenerated]
  /// @brief Method remove_playerConnectedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_playerConnectedEvent(::System::Action_1<TConnectedPlayer>* value);

  /// [CompilerGenerated]
  /// @brief Method remove_playerDisconnectedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_playerDisconnectedEvent(::System::Action_1<TConnectedPlayer>* value);

  /// [CompilerGenerated]
  /// @brief Method remove_playerStateChangedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_playerStateChangedEvent(::System::Action_1<TConnectedPlayer>* value);

  /// [CompilerGenerated]
  /// @brief Method remove_pollUpdateEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_pollUpdateEvent(::System::Action* value);

  // Ctor Parameters [CppParam { name: "", ty: "IMultiplayerSessionManager_1", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMultiplayerSessionManager_1(IMultiplayerSessionManager_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18187 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
