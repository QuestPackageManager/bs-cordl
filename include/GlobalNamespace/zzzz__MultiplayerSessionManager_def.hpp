#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerSessionManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__StandaloneMonobehavior_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerSessionManager)
namespace GlobalNamespace {
class ConnectedPlayerManager;
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
template <typename TData> class INetworkPacketSubSerializer_1;
}
namespace GlobalNamespace {
struct MultiplayerSessionManager_ConnectionState;
}
namespace GlobalNamespace {
struct MultiplayerSessionManager_MessageType;
}
namespace GlobalNamespace {
struct MultiplayerSessionManager_SessionType;
}
namespace GlobalNamespace {
class MultiplayerSessionManager___c;
}
namespace GlobalNamespace {
class MultiplayerSessionManager___c__DisplayClass98_0;
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
struct MultiplayerSessionManager_ConnectionState;
}
namespace GlobalNamespace {
struct MultiplayerSessionManager_MessageType;
}
namespace GlobalNamespace {
struct MultiplayerSessionManager_SessionType;
}
namespace GlobalNamespace {
class MultiplayerSessionManager;
}
namespace GlobalNamespace {
class MultiplayerSessionManager___c;
}
namespace GlobalNamespace {
class MultiplayerSessionManager___c__DisplayClass98_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MultiplayerSessionManager_ConnectionState);
MARK_VAL_T(::GlobalNamespace::MultiplayerSessionManager_MessageType);
MARK_VAL_T(::GlobalNamespace::MultiplayerSessionManager_SessionType);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerSessionManager);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerSessionManager___c);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerSessionManager___c__DisplayClass98_0);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: MultiplayerSessionManager/MessageType
struct CORDL_TYPE MultiplayerSessionManager_MessageType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __MultiplayerSessionManager_MessageType_Unwrapped
  enum struct __MultiplayerSessionManager_MessageType_Unwrapped : uint8_t {
    __E_MenuRpc = static_cast<uint8_t>(0x0u),
    __E_GameplayRpc = static_cast<uint8_t>(0x1u),
    __E_NodePoseSyncState = static_cast<uint8_t>(0x2u),
    __E_ScoreSyncState = static_cast<uint8_t>(0x3u),
    __E_NodePoseSyncStateDelta = static_cast<uint8_t>(0x4u),
    __E_ScoreSyncStateDelta = static_cast<uint8_t>(0x5u),
    __E_OptionalAvatarData = static_cast<uint8_t>(0x6u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MultiplayerSessionManager_MessageType_Unwrapped() const noexcept {
    return static_cast<__MultiplayerSessionManager_MessageType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerSessionManager_MessageType();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr MultiplayerSessionManager_MessageType(uint8_t value__) noexcept;

  /// @brief Field GameplayRpc value: U8(1)
  static ::GlobalNamespace::MultiplayerSessionManager_MessageType const GameplayRpc;

  /// @brief Field MenuRpc value: U8(0)
  static ::GlobalNamespace::MultiplayerSessionManager_MessageType const MenuRpc;

  /// @brief Field NodePoseSyncState value: U8(2)
  static ::GlobalNamespace::MultiplayerSessionManager_MessageType const NodePoseSyncState;

  /// @brief Field NodePoseSyncStateDelta value: U8(4)
  static ::GlobalNamespace::MultiplayerSessionManager_MessageType const NodePoseSyncStateDelta;

  /// @brief Field OptionalAvatarData value: U8(6)
  static ::GlobalNamespace::MultiplayerSessionManager_MessageType const OptionalAvatarData;

  /// @brief Field ScoreSyncState value: U8(3)
  static ::GlobalNamespace::MultiplayerSessionManager_MessageType const ScoreSyncState;

  /// @brief Field ScoreSyncStateDelta value: U8(5)
  static ::GlobalNamespace::MultiplayerSessionManager_MessageType const ScoreSyncStateDelta;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14888 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerSessionManager_MessageType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerSessionManager_MessageType, 0x1>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: MultiplayerSessionManager/SessionType
struct CORDL_TYPE MultiplayerSessionManager_SessionType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MultiplayerSessionManager_SessionType_Unwrapped
  enum struct __MultiplayerSessionManager_SessionType_Unwrapped : int32_t {
    __E_Player = static_cast<int32_t>(0x0),
    __E_Spectator = static_cast<int32_t>(0x1),
    __E_DedicatedServer = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MultiplayerSessionManager_SessionType_Unwrapped() const noexcept {
    return static_cast<__MultiplayerSessionManager_SessionType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerSessionManager_SessionType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MultiplayerSessionManager_SessionType(int32_t value__) noexcept;

  /// @brief Field DedicatedServer value: I32(2)
  static ::GlobalNamespace::MultiplayerSessionManager_SessionType const DedicatedServer;

  /// @brief Field Player value: I32(0)
  static ::GlobalNamespace::MultiplayerSessionManager_SessionType const Player;

  /// @brief Field Spectator value: I32(1)
  static ::GlobalNamespace::MultiplayerSessionManager_SessionType const Spectator;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14889 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerSessionManager_SessionType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerSessionManager_SessionType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: MultiplayerSessionManager/ConnectionState
struct CORDL_TYPE MultiplayerSessionManager_ConnectionState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MultiplayerSessionManager_ConnectionState_Unwrapped
  enum struct __MultiplayerSessionManager_ConnectionState_Unwrapped : int32_t {
    __E_Disconnected = static_cast<int32_t>(0x0),
    __E_Connecting = static_cast<int32_t>(0x1),
    __E_Connected = static_cast<int32_t>(0x2),
    __E_Disconnecting = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MultiplayerSessionManager_ConnectionState_Unwrapped() const noexcept {
    return static_cast<__MultiplayerSessionManager_ConnectionState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerSessionManager_ConnectionState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MultiplayerSessionManager_ConnectionState(int32_t value__) noexcept;

  /// @brief Field Connected value: I32(2)
  static ::GlobalNamespace::MultiplayerSessionManager_ConnectionState const Connected;

  /// @brief Field Connecting value: I32(1)
  static ::GlobalNamespace::MultiplayerSessionManager_ConnectionState const Connecting;

  /// @brief Field Disconnected value: I32(0)
  static ::GlobalNamespace::MultiplayerSessionManager_ConnectionState const Disconnected;

  /// @brief Field Disconnecting value: I32(3)
  static ::GlobalNamespace::MultiplayerSessionManager_ConnectionState const Disconnecting;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14890 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerSessionManager_ConnectionState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerSessionManager_ConnectionState, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerSessionManager/<>c
class CORDL_TYPE MultiplayerSessionManager___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::MultiplayerSessionManager___c* __9;

  /// @brief Field <>9__104_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__104_0, put = setStaticF___9__104_0)) ::System::Func_2<::GlobalNamespace::IConnectedPlayer*, int32_t>* __9__104_0;

  static inline ::GlobalNamespace::MultiplayerSessionManager___c* New_ctor();

  /// @brief Method <TryUpdateConnectedPlayer>b__104_0, addr 0x22e12f8, size 0xa0, virtual false, abstract: false, final false
  inline int32_t _TryUpdateConnectedPlayer_b__104_0(::GlobalNamespace::IConnectedPlayer* p);

  /// @brief Method .ctor, addr 0x22e12f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::MultiplayerSessionManager___c* getStaticF___9();

  static inline ::System::Func_2<::GlobalNamespace::IConnectedPlayer*, int32_t>* getStaticF___9__104_0();

  static inline void setStaticF___9(::GlobalNamespace::MultiplayerSessionManager___c* value);

  static inline void setStaticF___9__104_0(::System::Func_2<::GlobalNamespace::IConnectedPlayer*, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerSessionManager___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerSessionManager___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerSessionManager___c(MultiplayerSessionManager___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerSessionManager___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerSessionManager___c(MultiplayerSessionManager___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14891 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerSessionManager___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerSessionManager/<>c__DisplayClass98_0
class CORDL_TYPE MultiplayerSessionManager___c__DisplayClass98_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field userId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_userId, put = __cordl_internal_set_userId)) ::StringW userId;

  static inline ::GlobalNamespace::MultiplayerSessionManager___c__DisplayClass98_0* New_ctor();

  /// @brief Method <GetPlayerByUserId>b__0, addr 0x22e1398, size 0xb0, virtual false, abstract: false, final false
  inline bool _GetPlayerByUserId_b__0(::GlobalNamespace::IConnectedPlayer* player);

  constexpr ::StringW const& __cordl_internal_get_userId() const;

  constexpr ::StringW& __cordl_internal_get_userId();

  constexpr void __cordl_internal_set_userId(::StringW value);

  /// @brief Method .ctor, addr 0x22e0e94, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerSessionManager___c__DisplayClass98_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerSessionManager___c__DisplayClass98_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerSessionManager___c__DisplayClass98_0(MultiplayerSessionManager___c__DisplayClass98_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerSessionManager___c__DisplayClass98_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerSessionManager___c__DisplayClass98_0(MultiplayerSessionManager___c__DisplayClass98_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14892 };

  /// @brief Field userId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___userId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerSessionManager___c__DisplayClass98_0, ___userId) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerSessionManager___c__DisplayClass98_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IMultiplayerSessionManager, MultiplayerSessionManager::ConnectionState, StandaloneMonobehavior
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerSessionManager
class CORDL_TYPE MultiplayerSessionManager : public ::GlobalNamespace::StandaloneMonobehavior {
public:
  // Declarations
  using ConnectionState = ::GlobalNamespace::MultiplayerSessionManager_ConnectionState;

  using MessageType = ::GlobalNamespace::MultiplayerSessionManager_MessageType;

  using SessionType = ::GlobalNamespace::MultiplayerSessionManager_SessionType;

  using __c = ::GlobalNamespace::MultiplayerSessionManager___c;

  using __c__DisplayClass98_0 = ::GlobalNamespace::MultiplayerSessionManager___c__DisplayClass98_0;

  /// @brief Field _connectedPlayerManager, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__connectedPlayerManager, put = __cordl_internal_set__connectedPlayerManager)) ::GlobalNamespace::ConnectedPlayerManager* _connectedPlayerManager;

  /// @brief Field _connectedPlayers, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__connectedPlayers,
                      put = __cordl_internal_set__connectedPlayers)) ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* _connectedPlayers;

  /// @brief Field <connectionOwner>k__BackingField, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__connectionOwner_k__BackingField,
                      put = __cordl_internal_set__connectionOwner_k__BackingField)) ::GlobalNamespace::IConnectedPlayer* _connectionOwner_k__BackingField;

  /// @brief Field _connectionState, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get__connectionState, put = __cordl_internal_set__connectionState)) ::GlobalNamespace::MultiplayerSessionManager_ConnectionState _connectionState;

  /// @brief Field _freeSortIndices, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__freeSortIndices, put = __cordl_internal_set__freeSortIndices)) ::System::Collections::Generic::Queue_1<int32_t>* _freeSortIndices;

  /// @brief Field _localPlayerState, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__localPlayerState, put = __cordl_internal_set__localPlayerState)) ::System::Collections::Generic::HashSet_1<::StringW>* _localPlayerState;

  /// @brief Field _maxPlayerCount, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__maxPlayerCount, put = __cordl_internal_set__maxPlayerCount)) int32_t _maxPlayerCount;

  /// @brief Field _packetSerializer, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__packetSerializer,
                      put = __cordl_internal_set__packetSerializer)) ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::MultiplayerSessionManager_MessageType,
                                                                                                                  ::GlobalNamespace::IConnectedPlayer*>* _packetSerializer;

  /// @brief Field connectedEvent, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_connectedEvent, put = __cordl_internal_set_connectedEvent)) ::System::Action* connectedEvent;

  __declspec(property(get = get_connectedPlayerCount)) int32_t connectedPlayerCount;

  __declspec(property(get = get_connectedPlayerManager)) ::GlobalNamespace::ConnectedPlayerManager* connectedPlayerManager;

  __declspec(property(get = get_connectedPlayers)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>* connectedPlayers;

  /// @brief Field connectionFailedEvent, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_connectionFailedEvent,
                      put = __cordl_internal_set_connectionFailedEvent)) ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* connectionFailedEvent;

  __declspec(property(get = get_connectionOwner, put = set_connectionOwner)) ::GlobalNamespace::IConnectedPlayer* connectionOwner;

  /// @brief Field connectionOwnerStateChangedEvent, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_connectionOwnerStateChangedEvent,
                      put = __cordl_internal_set_connectionOwnerStateChangedEvent)) ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* connectionOwnerStateChangedEvent;

  /// @brief Field disconnectedEvent, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_disconnectedEvent, put = __cordl_internal_set_disconnectedEvent)) ::System::Action_1<::GlobalNamespace::DisconnectedReason>* disconnectedEvent;

  __declspec(property(get = get_isConnected)) bool isConnected;

  __declspec(property(get = get_isConnecting)) bool isConnecting;

  __declspec(property(get = get_isConnectingOrConnected)) bool isConnectingOrConnected;

  __declspec(property(get = get_isConnectionOwner)) bool isConnectionOwner;

  __declspec(property(get = get_isDisconnecting)) bool isDisconnecting;

  __declspec(property(get = get_isSpectating)) bool isSpectating;

  __declspec(property(get = get_isSyncTimeInitialized)) bool isSyncTimeInitialized;

  __declspec(property(get = get_localPlayer)) ::GlobalNamespace::IConnectedPlayer* localPlayer;

  __declspec(property(get = get_maxPlayerCount)) int32_t maxPlayerCount;

  /// @brief Field playerAvatarChangedEvent, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_playerAvatarChangedEvent,
                      put = __cordl_internal_set_playerAvatarChangedEvent)) ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* playerAvatarChangedEvent;

  /// @brief Field playerConnectedEvent, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_playerConnectedEvent, put = __cordl_internal_set_playerConnectedEvent)) ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* playerConnectedEvent;

  /// @brief Field playerDisconnectedEvent, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_playerDisconnectedEvent,
                      put = __cordl_internal_set_playerDisconnectedEvent)) ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* playerDisconnectedEvent;

  /// @brief Field playerStateChangedEvent, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_playerStateChangedEvent,
                      put = __cordl_internal_set_playerStateChangedEvent)) ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* playerStateChangedEvent;

  /// @brief Field pollUpdateEvent, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_pollUpdateEvent, put = __cordl_internal_set_pollUpdateEvent)) ::System::Action* pollUpdateEvent;

  __declspec(property(get = get_syncTime)) int64_t syncTime;

  /// @brief Convert operator to "::GlobalNamespace::IMultiplayerSessionManager"
  constexpr operator ::GlobalNamespace::IMultiplayerSessionManager*() noexcept;

  /// @brief Method Disconnect, addr 0x22e02bc, size 0x10, virtual true, abstract: false, final true
  inline void Disconnect();

  /// @brief Method EndSession, addr 0x22df72c, size 0x4a4, virtual true, abstract: false, final true
  inline void EndSession();

  /// @brief Method GetConnectedPlayer, addr 0x22e0e9c, size 0x58, virtual true, abstract: false, final true
  inline ::GlobalNamespace::IConnectedPlayer* GetConnectedPlayer(int32_t i);

  /// @brief Method GetNextAvailableSortIndex, addr 0x22e0ff0, size 0xb4, virtual false, abstract: false, final false
  inline int32_t GetNextAvailableSortIndex();

  /// @brief Method GetPlayerByUserId, addr 0x22e0cfc, size 0x198, virtual true, abstract: false, final true
  inline ::GlobalNamespace::IConnectedPlayer* GetPlayerByUserId(::StringW userId);

  /// @brief Method HandleConnected, addr 0x22e02dc, size 0x10, virtual false, abstract: false, final false
  inline void HandleConnected();

  /// @brief Method HandleConnectionFailed, addr 0x22e02fc, size 0x10, virtual false, abstract: false, final false
  inline void HandleConnectionFailed(::GlobalNamespace::ConnectionFailedReason reason);

  /// @brief Method HandleDisconnected, addr 0x22e02ec, size 0x10, virtual false, abstract: false, final false
  inline void HandleDisconnected(::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method HandleInitialized, addr 0x22e02cc, size 0x10, virtual false, abstract: false, final false
  inline void HandleInitialized();

  /// @brief Method HandlePlayerAvatarChanged, addr 0x22e0c34, size 0x84, virtual false, abstract: false, final false
  inline void HandlePlayerAvatarChanged(::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method HandlePlayerConnected, addr 0x22e031c, size 0xbc, virtual false, abstract: false, final false
  inline void HandlePlayerConnected(::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method HandlePlayerDisconnected, addr 0x22e09d0, size 0xbc, virtual false, abstract: false, final false
  inline void HandlePlayerDisconnected(::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method HandlePlayerLatencyInitialized, addr 0x22e0cf4, size 0x8, virtual false, abstract: false, final false
  inline void HandlePlayerLatencyInitialized(::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method HandlePlayerOrderChanged, addr 0x22e0cb8, size 0x3c, virtual false, abstract: false, final false
  inline void HandlePlayerOrderChanged(::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method HandlePlayerStateChanged, addr 0x22e0a8c, size 0x1a8, virtual false, abstract: false, final false
  inline void HandlePlayerStateChanged(::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method HandleSyncTimeInitialized, addr 0x22e030c, size 0x10, virtual false, abstract: false, final false
  inline void HandleSyncTimeInitialized();

  /// @brief Method KickPlayer, addr 0x22e0ef4, size 0x18, virtual true, abstract: false, final true
  inline void KickPlayer(::StringW userId);

  /// @brief Method LateUpdate, addr 0x22df32c, size 0x14, virtual false, abstract: false, final false
  inline void LateUpdate();

  /// @brief Method LocalPlayerHasState, addr 0x22e0f0c, size 0xe4, virtual true, abstract: false, final true
  inline bool LocalPlayerHasState(::StringW state);

  static inline ::GlobalNamespace::MultiplayerSessionManager* New_ctor();

  /// @brief Method OnApplicationPause, addr 0x22dfbd0, size 0x58, virtual true, abstract: false, final false
  inline void OnApplicationPause(bool pauseStatus);

  /// @brief Method OnDestroy, addr 0x22df340, size 0x24, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method RegisterCallback, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T>
  inline void RegisterCallback(::GlobalNamespace::MultiplayerSessionManager_MessageType serializerType, ::System::Action_2<T, ::GlobalNamespace::IConnectedPlayer*>* callback,
                               ::System::Func_1<T>* constructor);

  /// @brief Method RegisterSerializer, addr 0x22dfc28, size 0x68, virtual true, abstract: false, final true
  inline void RegisterSerializer(::GlobalNamespace::MultiplayerSessionManager_MessageType serializerType,
                                 ::GlobalNamespace::INetworkPacketSubSerializer_1<::GlobalNamespace::IConnectedPlayer*>* subSerializer);

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

  /// @brief Method SetLocalPlayerState, addr 0x22df218, size 0xb4, virtual true, abstract: false, final true
  inline void SetLocalPlayerState(::StringW state, bool hasState);

  /// @brief Method SetMaxPlayerCount, addr 0x22e02b4, size 0x8, virtual true, abstract: false, final true
  inline void SetMaxPlayerCount(int32_t maxPlayerCount);

  /// @brief Method Start, addr 0x22df1cc, size 0x4c, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method StartSession, addr 0x22dfcf8, size 0x5bc, virtual true, abstract: false, final true
  inline void StartSession(::GlobalNamespace::MultiplayerSessionManager_SessionType sessionType, ::GlobalNamespace::ConnectedPlayerManager* connectedPlayerManager);

  /// @brief Method TryUpdateConnectedPlayer, addr 0x22e03d8, size 0x5f8, virtual false, abstract: false, final false
  inline bool TryUpdateConnectedPlayer(::GlobalNamespace::IConnectedPlayer* player, bool isPlayerConnected);

  /// @brief Method UnregisterCallback, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline void UnregisterCallback(::GlobalNamespace::MultiplayerSessionManager_MessageType serializerType);

  /// @brief Method UnregisterSerializer, addr 0x22dfc90, size 0x68, virtual true, abstract: false, final true
  inline void UnregisterSerializer(::GlobalNamespace::MultiplayerSessionManager_MessageType serializerType,
                                   ::GlobalNamespace::INetworkPacketSubSerializer_1<::GlobalNamespace::IConnectedPlayer*>* subSerializer);

  /// @brief Method Update, addr 0x22df2cc, size 0x58, virtual true, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateConnectionState, addr 0x22df364, size 0x3c8, virtual false, abstract: false, final false
  inline void UpdateConnectionState(::GlobalNamespace::UpdateConnectionStateReason updateReason, ::GlobalNamespace::DisconnectedReason disconnectedReason,
                                    ::GlobalNamespace::ConnectionFailedReason connectionFailedReason);

  constexpr ::GlobalNamespace::ConnectedPlayerManager* const& __cordl_internal_get__connectedPlayerManager() const;

  constexpr ::GlobalNamespace::ConnectedPlayerManager*& __cordl_internal_get__connectedPlayerManager();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* const& __cordl_internal_get__connectedPlayers() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>*& __cordl_internal_get__connectedPlayers();

  constexpr ::GlobalNamespace::IConnectedPlayer* const& __cordl_internal_get__connectionOwner_k__BackingField() const;

  constexpr ::GlobalNamespace::IConnectedPlayer*& __cordl_internal_get__connectionOwner_k__BackingField();

  constexpr ::GlobalNamespace::MultiplayerSessionManager_ConnectionState const& __cordl_internal_get__connectionState() const;

  constexpr ::GlobalNamespace::MultiplayerSessionManager_ConnectionState& __cordl_internal_get__connectionState();

  constexpr ::System::Collections::Generic::Queue_1<int32_t>* const& __cordl_internal_get__freeSortIndices() const;

  constexpr ::System::Collections::Generic::Queue_1<int32_t>*& __cordl_internal_get__freeSortIndices();

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& __cordl_internal_get__localPlayerState() const;

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get__localPlayerState();

  constexpr int32_t const& __cordl_internal_get__maxPlayerCount() const;

  constexpr int32_t& __cordl_internal_get__maxPlayerCount();

  constexpr ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::MultiplayerSessionManager_MessageType, ::GlobalNamespace::IConnectedPlayer*>* const&
  __cordl_internal_get__packetSerializer() const;

  constexpr ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::MultiplayerSessionManager_MessageType, ::GlobalNamespace::IConnectedPlayer*>*& __cordl_internal_get__packetSerializer();

  constexpr ::System::Action* const& __cordl_internal_get_connectedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_connectedEvent();

  constexpr ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* const& __cordl_internal_get_connectionFailedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*& __cordl_internal_get_connectionFailedEvent();

  constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* const& __cordl_internal_get_connectionOwnerStateChangedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*& __cordl_internal_get_connectionOwnerStateChangedEvent();

  constexpr ::System::Action_1<::GlobalNamespace::DisconnectedReason>* const& __cordl_internal_get_disconnectedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::DisconnectedReason>*& __cordl_internal_get_disconnectedEvent();

  constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* const& __cordl_internal_get_playerAvatarChangedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*& __cordl_internal_get_playerAvatarChangedEvent();

  constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* const& __cordl_internal_get_playerConnectedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*& __cordl_internal_get_playerConnectedEvent();

  constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* const& __cordl_internal_get_playerDisconnectedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*& __cordl_internal_get_playerDisconnectedEvent();

  constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* const& __cordl_internal_get_playerStateChangedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*& __cordl_internal_get_playerStateChangedEvent();

  constexpr ::System::Action* const& __cordl_internal_get_pollUpdateEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_pollUpdateEvent();

  constexpr void __cordl_internal_set__connectedPlayerManager(::GlobalNamespace::ConnectedPlayerManager* value);

  constexpr void __cordl_internal_set__connectedPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* value);

  constexpr void __cordl_internal_set__connectionOwner_k__BackingField(::GlobalNamespace::IConnectedPlayer* value);

  constexpr void __cordl_internal_set__connectionState(::GlobalNamespace::MultiplayerSessionManager_ConnectionState value);

  constexpr void __cordl_internal_set__freeSortIndices(::System::Collections::Generic::Queue_1<int32_t>* value);

  constexpr void __cordl_internal_set__localPlayerState(::System::Collections::Generic::HashSet_1<::StringW>* value);

  constexpr void __cordl_internal_set__maxPlayerCount(int32_t value);

  constexpr void
  __cordl_internal_set__packetSerializer(::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::MultiplayerSessionManager_MessageType, ::GlobalNamespace::IConnectedPlayer*>* value);

  constexpr void __cordl_internal_set_connectedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_connectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value);

  constexpr void __cordl_internal_set_connectionOwnerStateChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  constexpr void __cordl_internal_set_disconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  constexpr void __cordl_internal_set_playerAvatarChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  constexpr void __cordl_internal_set_playerConnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  constexpr void __cordl_internal_set_playerDisconnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  constexpr void __cordl_internal_set_playerStateChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  constexpr void __cordl_internal_set_pollUpdateEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x22e10a4, size 0x150, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_connectedEvent, addr 0x22de3a0, size 0x9c, virtual true, abstract: false, final true
  inline void add_connectedEvent(::System::Action* value);

  /// @brief Method add_connectionFailedEvent, addr 0x22de4d8, size 0xb0, virtual true, abstract: false, final true
  inline void add_connectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value);

  /// @brief Method add_connectionOwnerStateChangedEvent, addr 0x22debb8, size 0xb0, virtual true, abstract: false, final true
  inline void add_connectionOwnerStateChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method add_disconnectedEvent, addr 0x22ded18, size 0xb0, virtual true, abstract: false, final true
  inline void add_disconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method add_playerAvatarChangedEvent, addr 0x22de8f8, size 0xb0, virtual true, abstract: false, final true
  inline void add_playerAvatarChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method add_playerConnectedEvent, addr 0x22de638, size 0xb0, virtual true, abstract: false, final true
  inline void add_playerConnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method add_playerDisconnectedEvent, addr 0x22de798, size 0xb0, virtual true, abstract: false, final true
  inline void add_playerDisconnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method add_playerStateChangedEvent, addr 0x22dea58, size 0xb0, virtual true, abstract: false, final true
  inline void add_playerStateChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method add_pollUpdateEvent, addr 0x22dee78, size 0x9c, virtual true, abstract: false, final true
  inline void add_pollUpdateEvent(::System::Action* value);

  /// @brief Method get_connectedPlayerCount, addr 0x22df134, size 0x48, virtual true, abstract: false, final true
  inline int32_t get_connectedPlayerCount();

  /// @brief Method get_connectedPlayerManager, addr 0x22df1bc, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ConnectedPlayerManager* get_connectedPlayerManager();

  /// @brief Method get_connectedPlayers, addr 0x22df12c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>* get_connectedPlayers();

  /// @brief Method get_connectionOwner, addr 0x22defc8, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::IConnectedPlayer* get_connectionOwner();

  /// @brief Method get_isConnected, addr 0x22df10c, size 0x10, virtual true, abstract: false, final true
  inline bool get_isConnected();

  /// @brief Method get_isConnecting, addr 0x22df0fc, size 0x10, virtual true, abstract: false, final true
  inline bool get_isConnecting();

  /// @brief Method get_isConnectingOrConnected, addr 0x22df0e8, size 0x14, virtual true, abstract: false, final true
  inline bool get_isConnectingOrConnected();

  /// @brief Method get_isConnectionOwner, addr 0x22defb0, size 0x18, virtual true, abstract: false, final true
  inline bool get_isConnectionOwner();

  /// @brief Method get_isDisconnecting, addr 0x22df11c, size 0x10, virtual true, abstract: false, final true
  inline bool get_isDisconnecting();

  /// @brief Method get_isSpectating, addr 0x22defd8, size 0x110, virtual true, abstract: false, final true
  inline bool get_isSpectating();

  /// @brief Method get_isSyncTimeInitialized, addr 0x22df190, size 0x14, virtual true, abstract: false, final true
  inline bool get_isSyncTimeInitialized();

  /// @brief Method get_localPlayer, addr 0x22df1a4, size 0x18, virtual true, abstract: false, final true
  inline ::GlobalNamespace::IConnectedPlayer* get_localPlayer();

  /// @brief Method get_maxPlayerCount, addr 0x22df1c4, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_maxPlayerCount();

  /// @brief Method get_syncTime, addr 0x22df17c, size 0x14, virtual true, abstract: false, final true
  inline int64_t get_syncTime();

  /// @brief Convert to "::GlobalNamespace::IMultiplayerSessionManager"
  constexpr ::GlobalNamespace::IMultiplayerSessionManager* i___GlobalNamespace__IMultiplayerSessionManager() noexcept;

  /// @brief Method remove_connectedEvent, addr 0x22de43c, size 0x9c, virtual true, abstract: false, final true
  inline void remove_connectedEvent(::System::Action* value);

  /// @brief Method remove_connectionFailedEvent, addr 0x22de588, size 0xb0, virtual true, abstract: false, final true
  inline void remove_connectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value);

  /// @brief Method remove_connectionOwnerStateChangedEvent, addr 0x22dec68, size 0xb0, virtual true, abstract: false, final true
  inline void remove_connectionOwnerStateChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method remove_disconnectedEvent, addr 0x22dedc8, size 0xb0, virtual true, abstract: false, final true
  inline void remove_disconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method remove_playerAvatarChangedEvent, addr 0x22de9a8, size 0xb0, virtual true, abstract: false, final true
  inline void remove_playerAvatarChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method remove_playerConnectedEvent, addr 0x22de6e8, size 0xb0, virtual true, abstract: false, final true
  inline void remove_playerConnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method remove_playerDisconnectedEvent, addr 0x22de848, size 0xb0, virtual true, abstract: false, final true
  inline void remove_playerDisconnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method remove_playerStateChangedEvent, addr 0x22deb08, size 0xb0, virtual true, abstract: false, final true
  inline void remove_playerStateChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method remove_pollUpdateEvent, addr 0x22def14, size 0x9c, virtual true, abstract: false, final true
  inline void remove_pollUpdateEvent(::System::Action* value);

  /// @brief Method set_connectionOwner, addr 0x22defd0, size 0x8, virtual false, abstract: false, final false
  inline void set_connectionOwner(::GlobalNamespace::IConnectedPlayer* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerSessionManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerSessionManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerSessionManager(MultiplayerSessionManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerSessionManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerSessionManager(MultiplayerSessionManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14893 };

  /// @brief Field kMultiplayerSessionState offset 0xffffffff size 0x8
  static constexpr ::ConstString kMultiplayerSessionState{ u"multiplayer_session" };

  /// @brief Field _packetSerializer, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::MultiplayerSessionManager_MessageType, ::GlobalNamespace::IConnectedPlayer*>* ____packetSerializer;

  /// @brief Field _connectedPlayers, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* ____connectedPlayers;

  /// @brief Field _localPlayerState, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ____localPlayerState;

  /// @brief Field _maxPlayerCount, offset: 0x58, size: 0x4, def value: None
  int32_t ____maxPlayerCount;

  /// @brief Field _connectionState, offset: 0x5c, size: 0x4, def value: None
  ::GlobalNamespace::MultiplayerSessionManager_ConnectionState ____connectionState;

  /// @brief Field _freeSortIndices, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<int32_t>* ____freeSortIndices;

  /// @brief Field connectedEvent, offset: 0x68, size: 0x8, def value: None
  ::System::Action* ___connectedEvent;

  /// @brief Field connectionFailedEvent, offset: 0x70, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* ___connectionFailedEvent;

  /// @brief Field playerConnectedEvent, offset: 0x78, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* ___playerConnectedEvent;

  /// @brief Field playerDisconnectedEvent, offset: 0x80, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* ___playerDisconnectedEvent;

  /// @brief Field playerAvatarChangedEvent, offset: 0x88, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* ___playerAvatarChangedEvent;

  /// @brief Field playerStateChangedEvent, offset: 0x90, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* ___playerStateChangedEvent;

  /// @brief Field connectionOwnerStateChangedEvent, offset: 0x98, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* ___connectionOwnerStateChangedEvent;

  /// @brief Field disconnectedEvent, offset: 0xa0, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::DisconnectedReason>* ___disconnectedEvent;

  /// @brief Field pollUpdateEvent, offset: 0xa8, size: 0x8, def value: None
  ::System::Action* ___pollUpdateEvent;

  /// @brief Field <connectionOwner>k__BackingField, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayer* ____connectionOwner_k__BackingField;

  /// @brief Field _connectedPlayerManager, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::ConnectedPlayerManager* ____connectedPlayerManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerSessionManager, ____packetSerializer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSessionManager, ____connectedPlayers) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSessionManager, ____localPlayerState) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSessionManager, ____maxPlayerCount) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSessionManager, ____connectionState) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSessionManager, ____freeSortIndices) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSessionManager, ___connectedEvent) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSessionManager, ___connectionFailedEvent) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSessionManager, ___playerConnectedEvent) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSessionManager, ___playerDisconnectedEvent) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSessionManager, ___playerAvatarChangedEvent) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSessionManager, ___playerStateChangedEvent) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSessionManager, ___connectionOwnerStateChangedEvent) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSessionManager, ___disconnectedEvent) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSessionManager, ___pollUpdateEvent) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSessionManager, ____connectionOwner_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSessionManager, ____connectedPlayerManager) == 0xb8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerSessionManager, 0xc0>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerSessionManager_ConnectionState, "", "MultiplayerSessionManager/ConnectionState");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerSessionManager_MessageType, "", "MultiplayerSessionManager/MessageType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerSessionManager_SessionType, "", "MultiplayerSessionManager/SessionType");
NEED_NO_BOX(::GlobalNamespace::MultiplayerSessionManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerSessionManager*, "", "MultiplayerSessionManager");
NEED_NO_BOX(::GlobalNamespace::MultiplayerSessionManager___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerSessionManager___c*, "", "MultiplayerSessionManager/<>c");
NEED_NO_BOX(::GlobalNamespace::MultiplayerSessionManager___c__DisplayClass98_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerSessionManager___c__DisplayClass98_0*, "", "MultiplayerSessionManager/<>c__DisplayClass98_0");
