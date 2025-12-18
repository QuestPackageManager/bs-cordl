#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerSessionManager_5.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__StandaloneMonobehavior_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerSessionManager_5)
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
namespace GlobalNamespace {
template <typename TConnectedPlayer> class IMultiplayerSessionManager_1;
}
namespace GlobalNamespace {
template <typename TMessageType, typename TConnectedPlayer> class IMultiplayerSessionMessageProcessor_2;
}
namespace GlobalNamespace {
template <typename TData> class INetworkPacketSubSerializer_1;
}
namespace GlobalNamespace {
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
struct MultiplayerSessionManager_5_ConnectionState;
}
namespace GlobalNamespace {
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
class MultiplayerSessionManager_5___c__DisplayClass94_0;
}
namespace GlobalNamespace {
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
class MultiplayerSessionManager_5___c;
}
namespace GlobalNamespace {
template <typename TType, typename TData> class NetworkPacketSerializer_2;
}
namespace GlobalNamespace {
struct UpdateConnectionStateReason;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class Action;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
struct MultiplayerSessionManager_5_ConnectionState;
}
namespace GlobalNamespace {
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
class MultiplayerSessionManager_5;
}
namespace GlobalNamespace {
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
class MultiplayerSessionManager_5___c;
}
namespace GlobalNamespace {
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
class MultiplayerSessionManager_5___c__DisplayClass94_0;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::MultiplayerSessionManager_5_ConnectionState);
MARK_GEN_REF_PTR_T(::GlobalNamespace::MultiplayerSessionManager_5);
MARK_GEN_REF_PTR_T(::GlobalNamespace::MultiplayerSessionManager_5___c);
MARK_GEN_REF_PTR_T(::GlobalNamespace::MultiplayerSessionManager_5___c__DisplayClass94_0);
// Dependencies
namespace GlobalNamespace {
// cpp template
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
// Is value type: true
// CS Name: MultiplayerSessionManager`5/ConnectionState<TMessageType,TConnectedPlayerSessionManager,TConnectedPlayer,TConnectedPlayerImpl,TGameSpecificIdentityData>
struct CORDL_TYPE MultiplayerSessionManager_5_ConnectionState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MultiplayerSessionManager_5_ConnectionState_Unwrapped
  enum struct __MultiplayerSessionManager_5_ConnectionState_Unwrapped : int32_t {
    __E_Disconnected = static_cast<int32_t>(0x0),
    __E_Connecting = static_cast<int32_t>(0x1),
    __E_Connected = static_cast<int32_t>(0x2),
    __E_Disconnecting = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MultiplayerSessionManager_5_ConnectionState_Unwrapped() const noexcept {
    return static_cast<__MultiplayerSessionManager_5_ConnectionState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerSessionManager_5_ConnectionState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MultiplayerSessionManager_5_ConnectionState(int32_t value__) noexcept;

  /// @brief Field Connected value: I32(2)
  static ::GlobalNamespace::MultiplayerSessionManager_5_ConnectionState<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData> const
      Connected;

  /// @brief Field Connecting value: I32(1)
  static ::GlobalNamespace::MultiplayerSessionManager_5_ConnectionState<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData> const
      Connecting;

  /// @brief Field Disconnected value: I32(0)
  static ::GlobalNamespace::MultiplayerSessionManager_5_ConnectionState<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData> const
      Disconnected;

  /// @brief Field Disconnecting value: I32(3)
  static ::GlobalNamespace::MultiplayerSessionManager_5_ConnectionState<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData> const
      Disconnecting;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18185 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
// Is value type: false
// CS Name: MultiplayerSessionManager`5/<>c<TMessageType,TConnectedPlayerSessionManager,TConnectedPlayer,TConnectedPlayerImpl,TGameSpecificIdentityData>
class CORDL_TYPE MultiplayerSessionManager_5___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF___9,
      put = setStaticF___9)) ::GlobalNamespace::MultiplayerSessionManager_5___c<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>* __9;

  /// @brief Field <>9__100_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__100_0, put = setStaticF___9__100_0)) ::System::Func_2<TConnectedPlayer, int32_t>* __9__100_0;

  static inline ::GlobalNamespace::MultiplayerSessionManager_5___c<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>* New_ctor();

  /// @brief Method <TryUpdateConnectedPlayer>b__100_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t _TryUpdateConnectedPlayer_b__100_0(TConnectedPlayer p);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::MultiplayerSessionManager_5___c<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>* getStaticF___9();

  static inline ::System::Func_2<TConnectedPlayer, int32_t>* getStaticF___9__100_0();

  static inline void
  setStaticF___9(::GlobalNamespace::MultiplayerSessionManager_5___c<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>* value);

  static inline void setStaticF___9__100_0(::System::Func_2<TConnectedPlayer, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerSessionManager_5___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerSessionManager_5___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerSessionManager_5___c(MultiplayerSessionManager_5___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerSessionManager_5___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerSessionManager_5___c(MultiplayerSessionManager_5___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18186 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
// Is value type: false
// CS Name: MultiplayerSessionManager`5/<>c__DisplayClass94_0<TMessageType,TConnectedPlayerSessionManager,TConnectedPlayer,TConnectedPlayerImpl,TGameSpecificIdentityData>
class CORDL_TYPE MultiplayerSessionManager_5___c__DisplayClass94_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field userId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_userId, put = __cordl_internal_set_userId)) ::StringW userId;

  static inline ::GlobalNamespace::MultiplayerSessionManager_5___c__DisplayClass94_0<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*
  New_ctor();

  /// @brief Method <GetPlayerByUserId>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool _GetPlayerByUserId_b__0(TConnectedPlayer player);

  constexpr ::StringW const& __cordl_internal_get_userId() const;

  constexpr ::StringW& __cordl_internal_get_userId();

  constexpr void __cordl_internal_set_userId(::StringW value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerSessionManager_5___c__DisplayClass94_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerSessionManager_5___c__DisplayClass94_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerSessionManager_5___c__DisplayClass94_0(MultiplayerSessionManager_5___c__DisplayClass94_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerSessionManager_5___c__DisplayClass94_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerSessionManager_5___c__DisplayClass94_0(MultiplayerSessionManager_5___c__DisplayClass94_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18187 };

  /// @brief Field userId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___userId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies MultiplayerSessionManager`5::ConnectionState<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>, StandaloneMonobehavior
namespace GlobalNamespace {
// cpp template
template <typename TMessageType, typename TConnectedPlayerSessionManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
// Is value type: false
// CS Name: MultiplayerSessionManager`5<TMessageType,TConnectedPlayerSessionManager,TConnectedPlayer,TConnectedPlayerImpl,TGameSpecificIdentityData>
class CORDL_TYPE MultiplayerSessionManager_5 : public ::GlobalNamespace::StandaloneMonobehavior {
public:
  // Declarations
  using ConnectionState =
      ::GlobalNamespace::MultiplayerSessionManager_5_ConnectionState<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>;

  using __c = ::GlobalNamespace::MultiplayerSessionManager_5___c<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>;

  using __c__DisplayClass94_0 =
      ::GlobalNamespace::MultiplayerSessionManager_5___c__DisplayClass94_0<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>;

  /// @brief Field _connectedPlayerManager, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__connectedPlayerManager, put = __cordl_internal_set__connectedPlayerManager)) TConnectedPlayerSessionManager _connectedPlayerManager;

  /// @brief Field _connectedPlayers, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__connectedPlayers, put = __cordl_internal_set__connectedPlayers)) ::System::Collections::Generic::List_1<TConnectedPlayer>* _connectedPlayers;

  /// @brief Field <connectionOwner>k__BackingField, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__connectionOwner_k__BackingField, put = __cordl_internal_set__connectionOwner_k__BackingField)) TConnectedPlayer _connectionOwner_k__BackingField;

  /// @brief Field _connectionState, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get__connectionState,
                      put = __cordl_internal_set__connectionState)) ::GlobalNamespace::MultiplayerSessionManager_5_ConnectionState<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer,
                                                                                                                                   TConnectedPlayerImpl, TGameSpecificIdentityData>
      _connectionState;

  /// @brief Field _freeSortIndices, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__freeSortIndices, put = __cordl_internal_set__freeSortIndices)) ::System::Collections::Generic::Queue_1<int32_t>* _freeSortIndices;

  /// @brief Field _localPlayerState, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__localPlayerState, put = __cordl_internal_set__localPlayerState)) ::System::Collections::Generic::HashSet_1<::StringW>* _localPlayerState;

  /// @brief Field _maxPlayerCount, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__maxPlayerCount, put = __cordl_internal_set__maxPlayerCount)) int32_t _maxPlayerCount;

  /// @brief Field _packetSerializer, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__packetSerializer,
                      put = __cordl_internal_set__packetSerializer)) ::GlobalNamespace::NetworkPacketSerializer_2<TMessageType, TConnectedPlayer>* _packetSerializer;

  /// @brief Field connectedEvent, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_connectedEvent, put = __cordl_internal_set_connectedEvent)) ::System::Action* connectedEvent;

  __declspec(property(get = get_connectedPlayerCount)) int32_t connectedPlayerCount;

  __declspec(property(get = get_connectedPlayerManager)) TConnectedPlayerSessionManager connectedPlayerManager;

  __declspec(property(get = get_connectedPlayers)) ::System::Collections::Generic::IReadOnlyList_1<TConnectedPlayer>* connectedPlayers;

  /// @brief Field connectionFailedEvent, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_connectionFailedEvent,
                      put = __cordl_internal_set_connectionFailedEvent)) ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* connectionFailedEvent;

  __declspec(property(get = get_connectionOwner, put = set_connectionOwner)) TConnectedPlayer connectionOwner;

  /// @brief Field connectionOwnerStateChangedEvent, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_connectionOwnerStateChangedEvent,
                      put = __cordl_internal_set_connectionOwnerStateChangedEvent)) ::System::Action_1<TConnectedPlayer>* connectionOwnerStateChangedEvent;

  /// @brief Field disconnectedEvent, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_disconnectedEvent, put = __cordl_internal_set_disconnectedEvent)) ::System::Action_1<::GlobalNamespace::DisconnectedReason>* disconnectedEvent;

  __declspec(property(get = get_isConnected)) bool isConnected;

  __declspec(property(get = get_isConnecting)) bool isConnecting;

  __declspec(property(get = get_isConnectingOrConnected)) bool isConnectingOrConnected;

  __declspec(property(get = get_isConnectionOwner)) bool isConnectionOwner;

  __declspec(property(get = get_isDisconnecting)) bool isDisconnecting;

  __declspec(property(get = get_isSpectating)) bool isSpectating;

  __declspec(property(get = get_isSyncTimeInitialized)) bool isSyncTimeInitialized;

  __declspec(property(get = get_localPlayer)) TConnectedPlayer localPlayer;

  __declspec(property(get = get_maxPlayerCount)) int32_t maxPlayerCount;

  /// @brief Field playerConnectedEvent, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_playerConnectedEvent, put = __cordl_internal_set_playerConnectedEvent)) ::System::Action_1<TConnectedPlayer>* playerConnectedEvent;

  /// @brief Field playerDisconnectedEvent, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_playerDisconnectedEvent, put = __cordl_internal_set_playerDisconnectedEvent)) ::System::Action_1<TConnectedPlayer>* playerDisconnectedEvent;

  /// @brief Field playerStateChangedEvent, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_playerStateChangedEvent, put = __cordl_internal_set_playerStateChangedEvent)) ::System::Action_1<TConnectedPlayer>* playerStateChangedEvent;

  /// @brief Field pollUpdateEvent, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_pollUpdateEvent, put = __cordl_internal_set_pollUpdateEvent)) ::System::Action* pollUpdateEvent;

  __declspec(property(get = get_syncTime)) int64_t syncTime;

  /// @brief Convert operator to "::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>"
  constexpr operator ::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IMultiplayerSessionMessageProcessor_2<TMessageType,TConnectedPlayer>"
  constexpr operator ::GlobalNamespace::IMultiplayerSessionMessageProcessor_2<TMessageType, TConnectedPlayer>*() noexcept;

  /// @brief Method Disconnect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Disconnect();

  /// @brief Method EndSession, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void EndSession();

  /// @brief Method GetConnectedPlayer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TConnectedPlayer GetConnectedPlayer(int32_t i);

  /// @brief Method GetNextAvailableSortIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t GetNextAvailableSortIndex();

  /// @brief Method GetPlayerByUserId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TConnectedPlayer GetPlayerByUserId(::StringW userId);

  /// @brief Method HandleConnected, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void HandleConnected();

  /// @brief Method HandleConnectionFailed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void HandleConnectionFailed(::GlobalNamespace::ConnectionFailedReason reason);

  /// @brief Method HandleDisconnected, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void HandleDisconnected(::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method HandleInitialized, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void HandleInitialized();

  /// @brief Method HandlePlayerConnected, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void HandlePlayerConnected(TConnectedPlayer player);

  /// @brief Method HandlePlayerDisconnected, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void HandlePlayerDisconnected(TConnectedPlayer player);

  /// @brief Method HandlePlayerLatencyInitialized, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void HandlePlayerLatencyInitialized(TConnectedPlayer player);

  /// @brief Method HandlePlayerOrderChanged, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void HandlePlayerOrderChanged(TConnectedPlayer player);

  /// @brief Method HandlePlayerStateChanged, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void HandlePlayerStateChanged(TConnectedPlayer player);

  /// @brief Method HandleSyncTimeInitialized, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void HandleSyncTimeInitialized();

  /// @brief Method KickPlayer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void KickPlayer(::StringW userId);

  /// @brief Method LateUpdate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void LateUpdate();

  /// @brief Method LocalPlayerHasState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool LocalPlayerHasState(::StringW state);

  static inline ::GlobalNamespace::MultiplayerSessionManager_5<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>* New_ctor();

  /// @brief Method OnApplicationPause, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnApplicationPause(bool pauseStatus);

  /// @brief Method OnDestroy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method RegisterCallback, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline void RegisterCallback(TMessageType serializerType, ::System::Action_2<T, TConnectedPlayer>* callback, ::System::Func_1<T>* constructor);

  /// @brief Method RegisterGameSpecificEventHandlers, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void RegisterGameSpecificEventHandlers();

  /// @brief Method RegisterSerializer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void RegisterSerializer(TMessageType serializerType, ::GlobalNamespace::INetworkPacketSubSerializer_1<TConnectedPlayer>* subSerializer);

  /// @brief Method Send, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline void Send(T message);

  /// @brief Method SendToPlayer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline void SendToPlayer(T message, ::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method SendUnreliable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline void SendUnreliable(T message);

  /// @brief Method SendUnreliableEncryptedToPlayer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline void SendUnreliableEncryptedToPlayer(T message, ::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method SendUnreliableFromPlayerToPlayer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline void SendUnreliableFromPlayerToPlayer(T message, ::GlobalNamespace::IConnectedPlayer* fromPlayer, ::GlobalNamespace::IConnectedPlayer* toPlayer);

  /// @brief Method SendUnreliableOnlyToFirstDegreeConnections, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline void SendUnreliableOnlyToFirstDegreeConnections(T message);

  /// @brief Method SetLocalPlayerState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetLocalPlayerState(::StringW state, bool hasState);

  /// @brief Method SetMaxPlayerCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetMaxPlayerCount(int32_t maxPlayerCount);

  /// @brief Method ShouldKickPlayer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool ShouldKickPlayer(::GlobalNamespace::IConnectedPlayer* player, ::ByRef<::GlobalNamespace::DisconnectedReason> reason);

  /// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method StartSession, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void StartSession(TConnectedPlayerSessionManager connectedPlayerManager,
                           ::GlobalNamespace::IMultiplayerSessionManager_1_IMultiplayerSessionInitializer<TConnectedPlayer>* multiplayerSessionInitializer);

  /// @brief Method TryUpdateConnectedPlayer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryUpdateConnectedPlayer(TConnectedPlayer player, bool isPlayerConnected);

  /// @brief Method UnregisterCallback, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline void UnregisterCallback(TMessageType serializerType);

  /// @brief Method UnregisterGameSpecificEventHandlers, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UnregisterGameSpecificEventHandlers();

  /// @brief Method UnregisterSerializer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void UnregisterSerializer(TMessageType serializerType, ::GlobalNamespace::INetworkPacketSubSerializer_1<TConnectedPlayer>* subSerializer);

  /// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateConnectionState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UpdateConnectionState(::GlobalNamespace::UpdateConnectionStateReason updateReason, ::GlobalNamespace::DisconnectedReason disconnectedReason,
                                    ::GlobalNamespace::ConnectionFailedReason connectionFailedReason);

  constexpr TConnectedPlayerSessionManager const& __cordl_internal_get__connectedPlayerManager() const;

  constexpr TConnectedPlayerSessionManager& __cordl_internal_get__connectedPlayerManager();

  constexpr ::System::Collections::Generic::List_1<TConnectedPlayer>* const& __cordl_internal_get__connectedPlayers() const;

  constexpr ::System::Collections::Generic::List_1<TConnectedPlayer>*& __cordl_internal_get__connectedPlayers();

  constexpr TConnectedPlayer const& __cordl_internal_get__connectionOwner_k__BackingField() const;

  constexpr TConnectedPlayer& __cordl_internal_get__connectionOwner_k__BackingField();

  constexpr ::GlobalNamespace::MultiplayerSessionManager_5_ConnectionState<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData> const&
  __cordl_internal_get__connectionState() const;

  constexpr ::GlobalNamespace::MultiplayerSessionManager_5_ConnectionState<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>&
  __cordl_internal_get__connectionState();

  constexpr ::System::Collections::Generic::Queue_1<int32_t>* const& __cordl_internal_get__freeSortIndices() const;

  constexpr ::System::Collections::Generic::Queue_1<int32_t>*& __cordl_internal_get__freeSortIndices();

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& __cordl_internal_get__localPlayerState() const;

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get__localPlayerState();

  constexpr int32_t const& __cordl_internal_get__maxPlayerCount() const;

  constexpr int32_t& __cordl_internal_get__maxPlayerCount();

  constexpr ::GlobalNamespace::NetworkPacketSerializer_2<TMessageType, TConnectedPlayer>* const& __cordl_internal_get__packetSerializer() const;

  constexpr ::GlobalNamespace::NetworkPacketSerializer_2<TMessageType, TConnectedPlayer>*& __cordl_internal_get__packetSerializer();

  constexpr ::System::Action* const& __cordl_internal_get_connectedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_connectedEvent();

  constexpr ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* const& __cordl_internal_get_connectionFailedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*& __cordl_internal_get_connectionFailedEvent();

  constexpr ::System::Action_1<TConnectedPlayer>* const& __cordl_internal_get_connectionOwnerStateChangedEvent() const;

  constexpr ::System::Action_1<TConnectedPlayer>*& __cordl_internal_get_connectionOwnerStateChangedEvent();

  constexpr ::System::Action_1<::GlobalNamespace::DisconnectedReason>* const& __cordl_internal_get_disconnectedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::DisconnectedReason>*& __cordl_internal_get_disconnectedEvent();

  constexpr ::System::Action_1<TConnectedPlayer>* const& __cordl_internal_get_playerConnectedEvent() const;

  constexpr ::System::Action_1<TConnectedPlayer>*& __cordl_internal_get_playerConnectedEvent();

  constexpr ::System::Action_1<TConnectedPlayer>* const& __cordl_internal_get_playerDisconnectedEvent() const;

  constexpr ::System::Action_1<TConnectedPlayer>*& __cordl_internal_get_playerDisconnectedEvent();

  constexpr ::System::Action_1<TConnectedPlayer>* const& __cordl_internal_get_playerStateChangedEvent() const;

  constexpr ::System::Action_1<TConnectedPlayer>*& __cordl_internal_get_playerStateChangedEvent();

  constexpr ::System::Action* const& __cordl_internal_get_pollUpdateEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_pollUpdateEvent();

  constexpr void __cordl_internal_set__connectedPlayerManager(TConnectedPlayerSessionManager value);

  constexpr void __cordl_internal_set__connectedPlayers(::System::Collections::Generic::List_1<TConnectedPlayer>* value);

  constexpr void __cordl_internal_set__connectionOwner_k__BackingField(TConnectedPlayer value);

  constexpr void __cordl_internal_set__connectionState(
      ::GlobalNamespace::MultiplayerSessionManager_5_ConnectionState<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData> value);

  constexpr void __cordl_internal_set__freeSortIndices(::System::Collections::Generic::Queue_1<int32_t>* value);

  constexpr void __cordl_internal_set__localPlayerState(::System::Collections::Generic::HashSet_1<::StringW>* value);

  constexpr void __cordl_internal_set__maxPlayerCount(int32_t value);

  constexpr void __cordl_internal_set__packetSerializer(::GlobalNamespace::NetworkPacketSerializer_2<TMessageType, TConnectedPlayer>* value);

  constexpr void __cordl_internal_set_connectedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_connectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value);

  constexpr void __cordl_internal_set_connectionOwnerStateChangedEvent(::System::Action_1<TConnectedPlayer>* value);

  constexpr void __cordl_internal_set_disconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  constexpr void __cordl_internal_set_playerConnectedEvent(::System::Action_1<TConnectedPlayer>* value);

  constexpr void __cordl_internal_set_playerDisconnectedEvent(::System::Action_1<TConnectedPlayer>* value);

  constexpr void __cordl_internal_set_playerStateChangedEvent(::System::Action_1<TConnectedPlayer>* value);

  constexpr void __cordl_internal_set_pollUpdateEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_connectedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void add_connectedEvent(::System::Action* value);

  /// @brief Method add_connectionFailedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void add_connectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value);

  /// @brief Method add_connectionOwnerStateChangedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void add_connectionOwnerStateChangedEvent(::System::Action_1<TConnectedPlayer>* value);

  /// @brief Method add_disconnectedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void add_disconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method add_playerConnectedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void add_playerConnectedEvent(::System::Action_1<TConnectedPlayer>* value);

  /// @brief Method add_playerDisconnectedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void add_playerDisconnectedEvent(::System::Action_1<TConnectedPlayer>* value);

  /// @brief Method add_playerStateChangedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void add_playerStateChangedEvent(::System::Action_1<TConnectedPlayer>* value);

  /// @brief Method add_pollUpdateEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void add_pollUpdateEvent(::System::Action* value);

  /// @brief Method get_connectedPlayerCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_connectedPlayerCount();

  /// @brief Method get_connectedPlayerManager, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TConnectedPlayerSessionManager get_connectedPlayerManager();

  /// @brief Method get_connectedPlayers, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IReadOnlyList_1<TConnectedPlayer>* get_connectedPlayers();

  /// @brief Method get_connectionOwner, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TConnectedPlayer get_connectionOwner();

  /// @brief Method get_isConnected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_isConnected();

  /// @brief Method get_isConnecting, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_isConnecting();

  /// @brief Method get_isConnectingOrConnected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_isConnectingOrConnected();

  /// @brief Method get_isConnectionOwner, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_isConnectionOwner();

  /// @brief Method get_isDisconnecting, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_isDisconnecting();

  /// @brief Method get_isSpectating, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_isSpectating();

  /// @brief Method get_isSyncTimeInitialized, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_isSyncTimeInitialized();

  /// @brief Method get_localPlayer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TConnectedPlayer get_localPlayer();

  /// @brief Method get_maxPlayerCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_maxPlayerCount();

  /// @brief Method get_syncTime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int64_t get_syncTime();

  /// @brief Convert to "::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>"
  constexpr ::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>* i___GlobalNamespace__IMultiplayerSessionManager_1_TConnectedPlayer_() noexcept;

  /// @brief Convert to "::GlobalNamespace::IMultiplayerSessionMessageProcessor_2<TMessageType,TConnectedPlayer>"
  constexpr ::GlobalNamespace::IMultiplayerSessionMessageProcessor_2<TMessageType, TConnectedPlayer>*
  i___GlobalNamespace__IMultiplayerSessionMessageProcessor_2_TMessageType_TConnectedPlayer_() noexcept;

  /// @brief Method remove_connectedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void remove_connectedEvent(::System::Action* value);

  /// @brief Method remove_connectionFailedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void remove_connectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value);

  /// @brief Method remove_connectionOwnerStateChangedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void remove_connectionOwnerStateChangedEvent(::System::Action_1<TConnectedPlayer>* value);

  /// @brief Method remove_disconnectedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void remove_disconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method remove_playerConnectedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void remove_playerConnectedEvent(::System::Action_1<TConnectedPlayer>* value);

  /// @brief Method remove_playerDisconnectedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void remove_playerDisconnectedEvent(::System::Action_1<TConnectedPlayer>* value);

  /// @brief Method remove_playerStateChangedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void remove_playerStateChangedEvent(::System::Action_1<TConnectedPlayer>* value);

  /// @brief Method remove_pollUpdateEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void remove_pollUpdateEvent(::System::Action* value);

  /// @brief Method set_connectionOwner, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_connectionOwner(TConnectedPlayer value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerSessionManager_5();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerSessionManager_5", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerSessionManager_5(MultiplayerSessionManager_5&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerSessionManager_5", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerSessionManager_5(MultiplayerSessionManager_5 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18188 };

  /// @brief Field kMultiplayerSessionState offset 0xffffffff size 0x8
  static constexpr ::ConstString kMultiplayerSessionState{ u"multiplayer_session" };

  /// @brief Field _packetSerializer, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::NetworkPacketSerializer_2<TMessageType, TConnectedPlayer>* ____packetSerializer;

  /// @brief Field _connectedPlayers, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<TConnectedPlayer>* ____connectedPlayers;

  /// @brief Field _localPlayerState, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ____localPlayerState;

  /// @brief Field _maxPlayerCount, offset: 0x58, size: 0x4, def value: None
  int32_t ____maxPlayerCount;

  /// @brief Field _connectionState, offset: 0x5c, size: 0x4, def value: None
  ::GlobalNamespace::MultiplayerSessionManager_5_ConnectionState<TMessageType, TConnectedPlayerSessionManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData> ____connectionState;

  /// @brief Field _freeSortIndices, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<int32_t>* ____freeSortIndices;

  /// @brief Field connectedEvent, offset: 0x68, size: 0x8, def value: None
  ::System::Action* ___connectedEvent;

  /// @brief Field connectionFailedEvent, offset: 0x70, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* ___connectionFailedEvent;

  /// @brief Field playerConnectedEvent, offset: 0x78, size: 0x8, def value: None
  ::System::Action_1<TConnectedPlayer>* ___playerConnectedEvent;

  /// @brief Field playerDisconnectedEvent, offset: 0x80, size: 0x8, def value: None
  ::System::Action_1<TConnectedPlayer>* ___playerDisconnectedEvent;

  /// @brief Field playerStateChangedEvent, offset: 0x88, size: 0x8, def value: None
  ::System::Action_1<TConnectedPlayer>* ___playerStateChangedEvent;

  /// @brief Field connectionOwnerStateChangedEvent, offset: 0x90, size: 0x8, def value: None
  ::System::Action_1<TConnectedPlayer>* ___connectionOwnerStateChangedEvent;

  /// @brief Field disconnectedEvent, offset: 0x98, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::DisconnectedReason>* ___disconnectedEvent;

  /// @brief Field pollUpdateEvent, offset: 0xa0, size: 0x8, def value: None
  ::System::Action* ___pollUpdateEvent;

  /// @brief Field <connectionOwner>k__BackingField, offset: 0xa8, size: 0x8, def value: None
  TConnectedPlayer ____connectionOwner_k__BackingField;

  /// @brief Field _connectedPlayerManager, offset: 0xb0, size: 0x8, def value: None
  TConnectedPlayerSessionManager ____connectedPlayerManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::MultiplayerSessionManager_5_ConnectionState, "", "MultiplayerSessionManager`5/ConnectionState");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::MultiplayerSessionManager_5, "", "MultiplayerSessionManager`5");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::MultiplayerSessionManager_5___c, "", "MultiplayerSessionManager`5/<>c");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::MultiplayerSessionManager_5___c__DisplayClass94_0, "", "MultiplayerSessionManager`5/<>c__DisplayClass94_0");
