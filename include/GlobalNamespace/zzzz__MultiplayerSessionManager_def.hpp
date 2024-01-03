#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerSessionManager_def.hpp"
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
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
template <typename TData> class INetworkPacketSubSerializer_1;
}
namespace GlobalNamespace {
template <typename TType, typename TData> class NetworkPacketSerializer_2;
}
namespace GlobalNamespace {
struct UpdateConnectionStateReason;
}
namespace GlobalNamespace {
struct __MultiplayerSessionManager__ConnectionState;
}
namespace GlobalNamespace {
struct __MultiplayerSessionManager__MessageType;
}
namespace GlobalNamespace {
struct __MultiplayerSessionManager__SessionType;
}
namespace GlobalNamespace {
class __MultiplayerSessionManager____c;
}
namespace GlobalNamespace {
class __MultiplayerSessionManager____c__DisplayClass98_0;
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
struct __MultiplayerSessionManager__ConnectionState;
}
namespace GlobalNamespace {
struct __MultiplayerSessionManager__MessageType;
}
namespace GlobalNamespace {
struct __MultiplayerSessionManager__SessionType;
}
namespace GlobalNamespace {
class MultiplayerSessionManager;
}
namespace GlobalNamespace {
class __MultiplayerSessionManager____c;
}
namespace GlobalNamespace {
class __MultiplayerSessionManager____c__DisplayClass98_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__MultiplayerSessionManager__ConnectionState);
MARK_VAL_T(::GlobalNamespace::__MultiplayerSessionManager__MessageType);
MARK_VAL_T(::GlobalNamespace::__MultiplayerSessionManager__SessionType);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerSessionManager);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerSessionManager____c);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerSessionManager____c__DisplayClass98_0);
// Type: ::MessageType
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12881))
// CS Name: ::MultiplayerSessionManager::MessageType
struct CORDL_TYPE __MultiplayerSessionManager__MessageType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct ____MultiplayerSessionManager__MessageType_Unwrapped
  enum struct ____MultiplayerSessionManager__MessageType_Unwrapped : uint8_t {
    __E_MenuRpc = static_cast<uint8_t>(0x0u),
    __E_GameplayRpc = static_cast<uint8_t>(0x1u),
    __E_NodePoseSyncState = static_cast<uint8_t>(0x2u),
    __E_ScoreSyncState = static_cast<uint8_t>(0x3u),
    __E_NodePoseSyncStateDelta = static_cast<uint8_t>(0x4u),
    __E_ScoreSyncStateDelta = static_cast<uint8_t>(0x5u),
    __E_OptionalAvatarData = static_cast<uint8_t>(0x6u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____MultiplayerSessionManager__MessageType_Unwrapped() const noexcept {
    return static_cast<____MultiplayerSessionManager__MessageType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr __MultiplayerSessionManager__MessageType(uint8_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerSessionManager__MessageType();

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field MenuRpc value: static_cast<uint8_t>(0x0u)
  static ::GlobalNamespace::__MultiplayerSessionManager__MessageType const MenuRpc;

  /// @brief Field GameplayRpc value: static_cast<uint8_t>(0x1u)
  static ::GlobalNamespace::__MultiplayerSessionManager__MessageType const GameplayRpc;

  /// @brief Field NodePoseSyncState value: static_cast<uint8_t>(0x2u)
  static ::GlobalNamespace::__MultiplayerSessionManager__MessageType const NodePoseSyncState;

  /// @brief Field ScoreSyncState value: static_cast<uint8_t>(0x3u)
  static ::GlobalNamespace::__MultiplayerSessionManager__MessageType const ScoreSyncState;

  /// @brief Field NodePoseSyncStateDelta value: static_cast<uint8_t>(0x4u)
  static ::GlobalNamespace::__MultiplayerSessionManager__MessageType const NodePoseSyncStateDelta;

  /// @brief Field ScoreSyncStateDelta value: static_cast<uint8_t>(0x5u)
  static ::GlobalNamespace::__MultiplayerSessionManager__MessageType const ScoreSyncStateDelta;

  /// @brief Field OptionalAvatarData value: static_cast<uint8_t>(0x6u)
  static ::GlobalNamespace::__MultiplayerSessionManager__MessageType const OptionalAvatarData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerSessionManager__MessageType, 0x1>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerSessionManager__MessageType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SessionType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12882))
// CS Name: ::MultiplayerSessionManager::SessionType
struct CORDL_TYPE __MultiplayerSessionManager__SessionType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____MultiplayerSessionManager__SessionType_Unwrapped
  enum struct ____MultiplayerSessionManager__SessionType_Unwrapped : int32_t {
    __E_Player = static_cast<int32_t>(0x0),
    __E_Spectator = static_cast<int32_t>(0x1),
    __E_DedicatedServer = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____MultiplayerSessionManager__SessionType_Unwrapped() const noexcept {
    return static_cast<____MultiplayerSessionManager__SessionType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MultiplayerSessionManager__SessionType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerSessionManager__SessionType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Player value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__MultiplayerSessionManager__SessionType const Player;

  /// @brief Field Spectator value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__MultiplayerSessionManager__SessionType const Spectator;

  /// @brief Field DedicatedServer value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__MultiplayerSessionManager__SessionType const DedicatedServer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerSessionManager__SessionType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerSessionManager__SessionType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ConnectionState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12883))
// CS Name: ::MultiplayerSessionManager::ConnectionState
struct CORDL_TYPE __MultiplayerSessionManager__ConnectionState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____MultiplayerSessionManager__ConnectionState_Unwrapped
  enum struct ____MultiplayerSessionManager__ConnectionState_Unwrapped : int32_t {
    __E_Disconnected = static_cast<int32_t>(0x0),
    __E_Connecting = static_cast<int32_t>(0x1),
    __E_Connected = static_cast<int32_t>(0x2),
    __E_Disconnecting = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____MultiplayerSessionManager__ConnectionState_Unwrapped() const noexcept {
    return static_cast<____MultiplayerSessionManager__ConnectionState_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MultiplayerSessionManager__ConnectionState(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerSessionManager__ConnectionState();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Disconnected value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__MultiplayerSessionManager__ConnectionState const Disconnected;

  /// @brief Field Connecting value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__MultiplayerSessionManager__ConnectionState const Connecting;

  /// @brief Field Connected value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__MultiplayerSessionManager__ConnectionState const Connected;

  /// @brief Field Disconnecting value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__MultiplayerSessionManager__ConnectionState const Disconnecting;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerSessionManager__ConnectionState, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerSessionManager__ConnectionState, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass98_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12884))
// CS Name: ::MultiplayerSessionManager::<>c__DisplayClass98_0*
class CORDL_TYPE __MultiplayerSessionManager____c__DisplayClass98_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field userId, offset 0x10, size 0x8
  __declspec(property(get = __get_userId, put = __set_userId))::StringW userId;

  constexpr ::StringW& __get_userId();

  constexpr ::StringW const& __get_userId() const;

  constexpr void __set_userId(::StringW value);

  static inline ::GlobalNamespace::__MultiplayerSessionManager____c__DisplayClass98_0* New_ctor();

  /// @brief Method .ctor, addr 0xe4c8a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <GetPlayerByUserId>b__0, addr 0xe4cc9c, size 0xb0, virtual false, abstract: false, final false
  inline bool _GetPlayerByUserId_b__0(::GlobalNamespace::IConnectedPlayer* player);

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerSessionManager____c__DisplayClass98_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerSessionManager____c__DisplayClass98_0(__MultiplayerSessionManager____c__DisplayClass98_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerSessionManager____c__DisplayClass98_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerSessionManager____c__DisplayClass98_0(__MultiplayerSessionManager____c__DisplayClass98_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerSessionManager____c__DisplayClass98_0();

public:
  /// @brief Field userId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___userId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerSessionManager____c__DisplayClass98_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerSessionManager____c__DisplayClass98_0, ___userId) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12885))
// CS Name: ::MultiplayerSessionManager::<>c*
class CORDL_TYPE __MultiplayerSessionManager____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__MultiplayerSessionManager____c* __9;

  /// @brief Field <>9__104_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__104_0, put = setStaticF___9__104_0))::System::Func_2<::GlobalNamespace::IConnectedPlayer*, int32_t>* __9__104_0;

  static inline void setStaticF___9(::GlobalNamespace::__MultiplayerSessionManager____c* value);

  static inline ::GlobalNamespace::__MultiplayerSessionManager____c* getStaticF___9();

  static inline void setStaticF___9__104_0(::System::Func_2<::GlobalNamespace::IConnectedPlayer*, int32_t>* value);

  static inline ::System::Func_2<::GlobalNamespace::IConnectedPlayer*, int32_t>* getStaticF___9__104_0();

  static inline ::GlobalNamespace::__MultiplayerSessionManager____c* New_ctor();

  /// @brief Method .ctor, addr 0xe4cdb0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <TryUpdateConnectedPlayer>b__104_0, addr 0xe4cdb8, size 0xa0, virtual false, abstract: false, final false
  inline int32_t _TryUpdateConnectedPlayer_b__104_0(::GlobalNamespace::IConnectedPlayer* p);

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerSessionManager____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerSessionManager____c(__MultiplayerSessionManager____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerSessionManager____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerSessionManager____c(__MultiplayerSessionManager____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerSessionManager____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerSessionManager____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::MultiplayerSessionManager
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 184, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12966)), TypeDefinitionIndex(TypeDefinitionIndex(12883))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12886))
// CS Name: ::MultiplayerSessionManager*
class CORDL_TYPE MultiplayerSessionManager : public ::GlobalNamespace::StandaloneMonobehavior {
public:
  // Declarations
  using __c = ::GlobalNamespace::__MultiplayerSessionManager____c;

  using __c__DisplayClass98_0 = ::GlobalNamespace::__MultiplayerSessionManager____c__DisplayClass98_0;

  using ConnectionState = ::GlobalNamespace::__MultiplayerSessionManager__ConnectionState;

  using SessionType = ::GlobalNamespace::__MultiplayerSessionManager__SessionType;

  using MessageType = ::GlobalNamespace::__MultiplayerSessionManager__MessageType;

  /// @brief Field _packetSerializer, offset 0x38, size 0x8
  __declspec(property(
      get = __get__packetSerializer,
      put = __set__packetSerializer))::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::__MultiplayerSessionManager__MessageType, ::GlobalNamespace::IConnectedPlayer*>* _packetSerializer;

  /// @brief Field _connectedPlayers, offset 0x40, size 0x8
  __declspec(property(get = __get__connectedPlayers, put = __set__connectedPlayers))::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* _connectedPlayers;

  /// @brief Field _localPlayerState, offset 0x48, size 0x8
  __declspec(property(get = __get__localPlayerState, put = __set__localPlayerState))::System::Collections::Generic::HashSet_1<::StringW>* _localPlayerState;

  /// @brief Field _maxPlayerCount, offset 0x50, size 0x4
  __declspec(property(get = __get__maxPlayerCount, put = __set__maxPlayerCount)) int32_t _maxPlayerCount;

  /// @brief Field _connectionState, offset 0x54, size 0x4
  __declspec(property(get = __get__connectionState, put = __set__connectionState))::GlobalNamespace::__MultiplayerSessionManager__ConnectionState _connectionState;

  /// @brief Field _freeSortIndices, offset 0x58, size 0x8
  __declspec(property(get = __get__freeSortIndices, put = __set__freeSortIndices))::System::Collections::Generic::Queue_1<int32_t>* _freeSortIndices;

  /// @brief Field connectedEvent, offset 0x60, size 0x8
  __declspec(property(get = __get_connectedEvent, put = __set_connectedEvent))::System::Action* connectedEvent;

  /// @brief Field connectionFailedEvent, offset 0x68, size 0x8
  __declspec(property(get = __get_connectionFailedEvent, put = __set_connectionFailedEvent))::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* connectionFailedEvent;

  /// @brief Field playerConnectedEvent, offset 0x70, size 0x8
  __declspec(property(get = __get_playerConnectedEvent, put = __set_playerConnectedEvent))::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* playerConnectedEvent;

  /// @brief Field playerDisconnectedEvent, offset 0x78, size 0x8
  __declspec(property(get = __get_playerDisconnectedEvent, put = __set_playerDisconnectedEvent))::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* playerDisconnectedEvent;

  /// @brief Field playerAvatarChangedEvent, offset 0x80, size 0x8
  __declspec(property(get = __get_playerAvatarChangedEvent, put = __set_playerAvatarChangedEvent))::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* playerAvatarChangedEvent;

  /// @brief Field playerStateChangedEvent, offset 0x88, size 0x8
  __declspec(property(get = __get_playerStateChangedEvent, put = __set_playerStateChangedEvent))::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* playerStateChangedEvent;

  /// @brief Field connectionOwnerStateChangedEvent, offset 0x90, size 0x8
  __declspec(property(get = __get_connectionOwnerStateChangedEvent,
                      put = __set_connectionOwnerStateChangedEvent))::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* connectionOwnerStateChangedEvent;

  /// @brief Field disconnectedEvent, offset 0x98, size 0x8
  __declspec(property(get = __get_disconnectedEvent, put = __set_disconnectedEvent))::System::Action_1<::GlobalNamespace::DisconnectedReason>* disconnectedEvent;

  /// @brief Field pollUpdateEvent, offset 0xa0, size 0x8
  __declspec(property(get = __get_pollUpdateEvent, put = __set_pollUpdateEvent))::System::Action* pollUpdateEvent;

  /// @brief Field <connectionOwner>k__BackingField, offset 0xa8, size 0x8
  __declspec(property(get = __get__connectionOwner_k__BackingField, put = __set__connectionOwner_k__BackingField))::GlobalNamespace::IConnectedPlayer* _connectionOwner_k__BackingField;

  /// @brief Field _connectedPlayerManager, offset 0xb0, size 0x8
  __declspec(property(get = __get__connectedPlayerManager, put = __set__connectedPlayerManager))::GlobalNamespace::ConnectedPlayerManager* _connectedPlayerManager;

  __declspec(property(get = get_isConnectionOwner)) bool isConnectionOwner;

  __declspec(property(get = get_connectionOwner, put = set_connectionOwner))::GlobalNamespace::IConnectedPlayer* connectionOwner;

  __declspec(property(get = get_isSpectating)) bool isSpectating;

  __declspec(property(get = get_isConnectingOrConnected)) bool isConnectingOrConnected;

  __declspec(property(get = get_isConnected)) bool isConnected;

  __declspec(property(get = get_isConnecting)) bool isConnecting;

  __declspec(property(get = get_isDisconnecting)) bool isDisconnecting;

  __declspec(property(get = get_connectedPlayers))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>* connectedPlayers;

  __declspec(property(get = get_connectedPlayerCount)) int32_t connectedPlayerCount;

  __declspec(property(get = get_syncTime)) int64_t syncTime;

  __declspec(property(get = get_isSyncTimeInitialized)) bool isSyncTimeInitialized;

  __declspec(property(get = get_localPlayer))::GlobalNamespace::IConnectedPlayer* localPlayer;

  __declspec(property(get = get_connectedPlayerManager))::GlobalNamespace::ConnectedPlayerManager* connectedPlayerManager;

  __declspec(property(get = get_maxPlayerCount)) int32_t maxPlayerCount;

  /// @brief Convert operator to "::GlobalNamespace::IMultiplayerSessionManager"
  constexpr operator ::GlobalNamespace::IMultiplayerSessionManager*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IMultiplayerSessionManager"
  constexpr ::GlobalNamespace::IMultiplayerSessionManager* i___GlobalNamespace__IMultiplayerSessionManager() noexcept;

  constexpr ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::__MultiplayerSessionManager__MessageType, ::GlobalNamespace::IConnectedPlayer*>*& __get__packetSerializer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::__MultiplayerSessionManager__MessageType, ::GlobalNamespace::IConnectedPlayer*>*> const&
  __get__packetSerializer() const;

  constexpr void __set__packetSerializer(::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::__MultiplayerSessionManager__MessageType, ::GlobalNamespace::IConnectedPlayer*>* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>*& __get__connectedPlayers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>*> const& __get__connectedPlayers() const;

  constexpr void __set__connectedPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* value);

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __get__localPlayerState();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const& __get__localPlayerState() const;

  constexpr void __set__localPlayerState(::System::Collections::Generic::HashSet_1<::StringW>* value);

  constexpr int32_t& __get__maxPlayerCount();

  constexpr int32_t const& __get__maxPlayerCount() const;

  constexpr void __set__maxPlayerCount(int32_t value);

  constexpr ::GlobalNamespace::__MultiplayerSessionManager__ConnectionState& __get__connectionState();

  constexpr ::GlobalNamespace::__MultiplayerSessionManager__ConnectionState const& __get__connectionState() const;

  constexpr void __set__connectionState(::GlobalNamespace::__MultiplayerSessionManager__ConnectionState value);

  constexpr ::System::Collections::Generic::Queue_1<int32_t>*& __get__freeSortIndices();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<int32_t>*> const& __get__freeSortIndices() const;

  constexpr void __set__freeSortIndices(::System::Collections::Generic::Queue_1<int32_t>* value);

  constexpr ::System::Action*& __get_connectedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_connectedEvent() const;

  constexpr void __set_connectedEvent(::System::Action* value);

  constexpr ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*& __get_connectionFailedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*> const& __get_connectionFailedEvent() const;

  constexpr void __set_connectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value);

  constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*& __get_playerConnectedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*> const& __get_playerConnectedEvent() const;

  constexpr void __set_playerConnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*& __get_playerDisconnectedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*> const& __get_playerDisconnectedEvent() const;

  constexpr void __set_playerDisconnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*& __get_playerAvatarChangedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*> const& __get_playerAvatarChangedEvent() const;

  constexpr void __set_playerAvatarChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*& __get_playerStateChangedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*> const& __get_playerStateChangedEvent() const;

  constexpr void __set_playerStateChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*& __get_connectionOwnerStateChangedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*> const& __get_connectionOwnerStateChangedEvent() const;

  constexpr void __set_connectionOwnerStateChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  constexpr ::System::Action_1<::GlobalNamespace::DisconnectedReason>*& __get_disconnectedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::DisconnectedReason>*> const& __get_disconnectedEvent() const;

  constexpr void __set_disconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  constexpr ::System::Action*& __get_pollUpdateEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_pollUpdateEvent() const;

  constexpr void __set_pollUpdateEvent(::System::Action* value);

  constexpr ::GlobalNamespace::IConnectedPlayer*& __get__connectionOwner_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> const& __get__connectionOwner_k__BackingField() const;

  constexpr void __set__connectionOwner_k__BackingField(::GlobalNamespace::IConnectedPlayer* value);

  constexpr ::GlobalNamespace::ConnectedPlayerManager*& __get__connectedPlayerManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ConnectedPlayerManager*> const& __get__connectedPlayerManager() const;

  constexpr void __set__connectedPlayerManager(::GlobalNamespace::ConnectedPlayerManager* value);

  /// @brief Method add_connectedEvent, addr 0xe49d90, size 0x9c, virtual true, abstract: false, final true
  inline void add_connectedEvent(::System::Action* value);

  /// @brief Method remove_connectedEvent, addr 0xe49e2c, size 0x9c, virtual true, abstract: false, final true
  inline void remove_connectedEvent(::System::Action* value);

  /// @brief Method add_connectionFailedEvent, addr 0xe49ec8, size 0xb0, virtual true, abstract: false, final true
  inline void add_connectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value);

  /// @brief Method remove_connectionFailedEvent, addr 0xe49f78, size 0xb0, virtual true, abstract: false, final true
  inline void remove_connectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value);

  /// @brief Method add_playerConnectedEvent, addr 0xe4a028, size 0xb0, virtual true, abstract: false, final true
  inline void add_playerConnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method remove_playerConnectedEvent, addr 0xe4a0d8, size 0xb0, virtual true, abstract: false, final true
  inline void remove_playerConnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method add_playerDisconnectedEvent, addr 0xe4a188, size 0xb0, virtual true, abstract: false, final true
  inline void add_playerDisconnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method remove_playerDisconnectedEvent, addr 0xe4a238, size 0xb0, virtual true, abstract: false, final true
  inline void remove_playerDisconnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method add_playerAvatarChangedEvent, addr 0xe4a2e8, size 0xb0, virtual true, abstract: false, final true
  inline void add_playerAvatarChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method remove_playerAvatarChangedEvent, addr 0xe4a398, size 0xb0, virtual true, abstract: false, final true
  inline void remove_playerAvatarChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method add_playerStateChangedEvent, addr 0xe4a448, size 0xb0, virtual true, abstract: false, final true
  inline void add_playerStateChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method remove_playerStateChangedEvent, addr 0xe4a4f8, size 0xb0, virtual true, abstract: false, final true
  inline void remove_playerStateChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method add_connectionOwnerStateChangedEvent, addr 0xe4a5a8, size 0xb0, virtual true, abstract: false, final true
  inline void add_connectionOwnerStateChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method remove_connectionOwnerStateChangedEvent, addr 0xe4a658, size 0xb0, virtual true, abstract: false, final true
  inline void remove_connectionOwnerStateChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method add_disconnectedEvent, addr 0xe4a708, size 0xb0, virtual true, abstract: false, final true
  inline void add_disconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method remove_disconnectedEvent, addr 0xe4a7b8, size 0xb0, virtual true, abstract: false, final true
  inline void remove_disconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method add_pollUpdateEvent, addr 0xe4a868, size 0x9c, virtual true, abstract: false, final true
  inline void add_pollUpdateEvent(::System::Action* value);

  /// @brief Method remove_pollUpdateEvent, addr 0xe4a904, size 0x9c, virtual true, abstract: false, final true
  inline void remove_pollUpdateEvent(::System::Action* value);

  /// @brief Method get_isConnectionOwner, addr 0xe4a9a0, size 0x18, virtual true, abstract: false, final true
  inline bool get_isConnectionOwner();

  /// @brief Method get_connectionOwner, addr 0xe4a9b8, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::IConnectedPlayer* get_connectionOwner();

  /// @brief Method set_connectionOwner, addr 0xe4a9c0, size 0x8, virtual false, abstract: false, final false
  inline void set_connectionOwner(::GlobalNamespace::IConnectedPlayer* value);

  /// @brief Method get_isSpectating, addr 0xe4a9c8, size 0x118, virtual true, abstract: false, final true
  inline bool get_isSpectating();

  /// @brief Method get_isConnectingOrConnected, addr 0xe4aae0, size 0x14, virtual true, abstract: false, final true
  inline bool get_isConnectingOrConnected();

  /// @brief Method get_isConnected, addr 0xe4ab04, size 0x10, virtual true, abstract: false, final true
  inline bool get_isConnected();

  /// @brief Method get_isConnecting, addr 0xe4aaf4, size 0x10, virtual true, abstract: false, final true
  inline bool get_isConnecting();

  /// @brief Method get_isDisconnecting, addr 0xe4ab14, size 0x10, virtual true, abstract: false, final true
  inline bool get_isDisconnecting();

  /// @brief Method get_connectedPlayers, addr 0xe4ab24, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>* get_connectedPlayers();

  /// @brief Method get_connectedPlayerCount, addr 0xe4ab2c, size 0x48, virtual true, abstract: false, final true
  inline int32_t get_connectedPlayerCount();

  /// @brief Method get_syncTime, addr 0xe4ab74, size 0x14, virtual true, abstract: false, final true
  inline int64_t get_syncTime();

  /// @brief Method get_isSyncTimeInitialized, addr 0xe4ab88, size 0x14, virtual true, abstract: false, final true
  inline bool get_isSyncTimeInitialized();

  /// @brief Method get_localPlayer, addr 0xe4ab9c, size 0x18, virtual true, abstract: false, final true
  inline ::GlobalNamespace::IConnectedPlayer* get_localPlayer();

  /// @brief Method get_connectedPlayerManager, addr 0xe4abb4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ConnectedPlayerManager* get_connectedPlayerManager();

  /// @brief Method get_maxPlayerCount, addr 0xe4abbc, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_maxPlayerCount();

  /// @brief Method Start, addr 0xe4abc4, size 0x4c, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0xe4acc4, size 0x58, virtual true, abstract: false, final false
  inline void Update();

  /// @brief Method LateUpdate, addr 0xe4ad24, size 0x14, virtual false, abstract: false, final false
  inline void LateUpdate();

  /// @brief Method OnDestroy, addr 0xe4ad38, size 0x24, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnApplicationPause, addr 0xe4b5e0, size 0x58, virtual true, abstract: false, final false
  inline void OnApplicationPause(bool pauseStatus);

  /// @brief Method RegisterSerializer, addr 0xe4b638, size 0x68, virtual true, abstract: false, final true
  inline void RegisterSerializer(::GlobalNamespace::__MultiplayerSessionManager__MessageType serializerType,
                                 ::GlobalNamespace::INetworkPacketSubSerializer_1<::GlobalNamespace::IConnectedPlayer*>* subSerializer);

  /// @brief Method UnregisterSerializer, addr 0xe4b6a0, size 0x68, virtual true, abstract: false, final true
  inline void UnregisterSerializer(::GlobalNamespace::__MultiplayerSessionManager__MessageType serializerType,
                                   ::GlobalNamespace::INetworkPacketSubSerializer_1<::GlobalNamespace::IConnectedPlayer*>* subSerializer);

  /// @brief Method RegisterCallback, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T>
  inline void RegisterCallback(::GlobalNamespace::__MultiplayerSessionManager__MessageType serializerType, ::System::Action_2<T, ::GlobalNamespace::IConnectedPlayer*>* callback,
                               ::System::Func_1<T>* constructor);

  /// @brief Method UnregisterCallback, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline void UnregisterCallback(::GlobalNamespace::__MultiplayerSessionManager__MessageType serializerType);

  /// @brief Method StartSession, addr 0xe4b708, size 0x5e8, virtual true, abstract: false, final true
  inline void StartSession(::GlobalNamespace::__MultiplayerSessionManager__SessionType sessionType, ::GlobalNamespace::ConnectedPlayerManager* connectedPlayerManager);

  /// @brief Method SetMaxPlayerCount, addr 0xe4bcf0, size 0x8, virtual true, abstract: false, final true
  inline void SetMaxPlayerCount(int32_t maxPlayerCount);

  /// @brief Method EndSession, addr 0xe4b11c, size 0x4c4, virtual true, abstract: false, final true
  inline void EndSession();

  /// @brief Method Disconnect, addr 0xe4bcf8, size 0x10, virtual true, abstract: false, final true
  inline void Disconnect();

  /// @brief Method Send, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline void Send(T message);

  /// @brief Method SendToPlayer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline void SendToPlayer(T message, ::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method SendUnreliable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline void SendUnreliable(T message);

  /// @brief Method SendUnreliableEncryptedToPlayer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline void SendUnreliableEncryptedToPlayer(T message, ::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method SendUnreliableOnlyToFirstDegreeConnections, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline void SendUnreliableOnlyToFirstDegreeConnections(T message);

  /// @brief Method SendUnreliableFromPlayerToPlayer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline void SendUnreliableFromPlayerToPlayer(T message, ::GlobalNamespace::IConnectedPlayer* fromPlayer, ::GlobalNamespace::IConnectedPlayer* toPlayer);

  /// @brief Method HandleInitialized, addr 0xe4bd08, size 0x10, virtual false, abstract: false, final false
  inline void HandleInitialized();

  /// @brief Method HandleConnected, addr 0xe4bd18, size 0x10, virtual false, abstract: false, final false
  inline void HandleConnected();

  /// @brief Method HandleDisconnected, addr 0xe4bd28, size 0x10, virtual false, abstract: false, final false
  inline void HandleDisconnected(::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method HandleConnectionFailed, addr 0xe4bd38, size 0x10, virtual false, abstract: false, final false
  inline void HandleConnectionFailed(::GlobalNamespace::ConnectionFailedReason reason);

  /// @brief Method HandleSyncTimeInitialized, addr 0xe4bd48, size 0x10, virtual false, abstract: false, final false
  inline void HandleSyncTimeInitialized();

  /// @brief Method HandlePlayerConnected, addr 0xe4bd58, size 0xbc, virtual false, abstract: false, final false
  inline void HandlePlayerConnected(::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method HandlePlayerDisconnected, addr 0xe4c3e0, size 0xbc, virtual false, abstract: false, final false
  inline void HandlePlayerDisconnected(::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method HandlePlayerStateChanged, addr 0xe4c49c, size 0x1a8, virtual false, abstract: false, final false
  inline void HandlePlayerStateChanged(::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method HandlePlayerAvatarChanged, addr 0xe4c644, size 0x84, virtual false, abstract: false, final false
  inline void HandlePlayerAvatarChanged(::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method HandlePlayerOrderChanged, addr 0xe4c6c8, size 0x3c, virtual false, abstract: false, final false
  inline void HandlePlayerOrderChanged(::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method HandlePlayerLatencyInitialized, addr 0xe4c704, size 0x8, virtual false, abstract: false, final false
  inline void HandlePlayerLatencyInitialized(::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method GetPlayerByUserId, addr 0xe4c70c, size 0x19c, virtual true, abstract: false, final true
  inline ::GlobalNamespace::IConnectedPlayer* GetPlayerByUserId(::StringW userId);

  /// @brief Method GetConnectedPlayer, addr 0xe4c8b0, size 0x58, virtual true, abstract: false, final true
  inline ::GlobalNamespace::IConnectedPlayer* GetConnectedPlayer(int32_t i);

  /// @brief Method SetLocalPlayerState, addr 0xe4ac10, size 0xb4, virtual true, abstract: false, final true
  inline void SetLocalPlayerState(::StringW state, bool hasState);

  /// @brief Method KickPlayer, addr 0xe4c908, size 0x18, virtual true, abstract: false, final true
  inline void KickPlayer(::StringW userId);

  /// @brief Method LocalPlayerHasState, addr 0xe4c920, size 0xe4, virtual true, abstract: false, final true
  inline bool LocalPlayerHasState(::StringW state);

  /// @brief Method UpdateConnectionState, addr 0xe4ad5c, size 0x3c0, virtual false, abstract: false, final false
  inline void UpdateConnectionState(::GlobalNamespace::UpdateConnectionStateReason updateReason, ::GlobalNamespace::DisconnectedReason disconnectedReason,
                                    ::GlobalNamespace::ConnectionFailedReason connectionFailedReason);

  /// @brief Method TryUpdateConnectedPlayer, addr 0xe4be14, size 0x5cc, virtual false, abstract: false, final false
  inline bool TryUpdateConnectedPlayer(::GlobalNamespace::IConnectedPlayer* player, bool isPlayerConnected);

  /// @brief Method GetNextAvailableSortIndex, addr 0xe4ca04, size 0xb4, virtual false, abstract: false, final false
  inline int32_t GetNextAvailableSortIndex();

  static inline ::GlobalNamespace::MultiplayerSessionManager* New_ctor();

  /// @brief Method .ctor, addr 0xe4cab8, size 0x144, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerSessionManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerSessionManager(MultiplayerSessionManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerSessionManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerSessionManager(MultiplayerSessionManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerSessionManager();

public:
  /// @brief Field _packetSerializer, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::__MultiplayerSessionManager__MessageType, ::GlobalNamespace::IConnectedPlayer*>* ____packetSerializer;

  /// @brief Field _connectedPlayers, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* ____connectedPlayers;

  /// @brief Field _localPlayerState, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ____localPlayerState;

  /// @brief Field _maxPlayerCount, offset: 0x50, size: 0x4, def value: None
  int32_t ____maxPlayerCount;

  /// @brief Field _connectionState, offset: 0x54, size: 0x4, def value: None
  ::GlobalNamespace::__MultiplayerSessionManager__ConnectionState ____connectionState;

  /// @brief Field _freeSortIndices, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<int32_t>* ____freeSortIndices;

  /// @brief Field connectedEvent, offset: 0x60, size: 0x8, def value: None
  ::System::Action* ___connectedEvent;

  /// @brief Field connectionFailedEvent, offset: 0x68, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* ___connectionFailedEvent;

  /// @brief Field playerConnectedEvent, offset: 0x70, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* ___playerConnectedEvent;

  /// @brief Field playerDisconnectedEvent, offset: 0x78, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* ___playerDisconnectedEvent;

  /// @brief Field playerAvatarChangedEvent, offset: 0x80, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* ___playerAvatarChangedEvent;

  /// @brief Field playerStateChangedEvent, offset: 0x88, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* ___playerStateChangedEvent;

  /// @brief Field connectionOwnerStateChangedEvent, offset: 0x90, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* ___connectionOwnerStateChangedEvent;

  /// @brief Field disconnectedEvent, offset: 0x98, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::DisconnectedReason>* ___disconnectedEvent;

  /// @brief Field pollUpdateEvent, offset: 0xa0, size: 0x8, def value: None
  ::System::Action* ___pollUpdateEvent;

  /// @brief Field <connectionOwner>k__BackingField, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayer* ____connectionOwner_k__BackingField;

  /// @brief Field _connectedPlayerManager, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::ConnectedPlayerManager* ____connectedPlayerManager;

  /// @brief Field kMultiplayerSessionState offset 0xffffffff size 0x8
  static constexpr ::ConstString kMultiplayerSessionState{ u"multiplayer_session" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerSessionManager, 0xb8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSessionManager, ____packetSerializer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSessionManager, ____connectedPlayers) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSessionManager, ____localPlayerState) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSessionManager, ____maxPlayerCount) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSessionManager, ____connectionState) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSessionManager, ____freeSortIndices) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSessionManager, ___connectedEvent) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSessionManager, ___connectionFailedEvent) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSessionManager, ___playerConnectedEvent) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSessionManager, ___playerDisconnectedEvent) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSessionManager, ___playerAvatarChangedEvent) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSessionManager, ___playerStateChangedEvent) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSessionManager, ___connectionOwnerStateChangedEvent) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSessionManager, ___disconnectedEvent) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSessionManager, ___pollUpdateEvent) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSessionManager, ____connectionOwner_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSessionManager, ____connectedPlayerManager) == 0xb0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerSessionManager__ConnectionState, "", "MultiplayerSessionManager/ConnectionState");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerSessionManager__MessageType, "", "MultiplayerSessionManager/MessageType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerSessionManager__SessionType, "", "MultiplayerSessionManager/SessionType");
NEED_NO_BOX(::GlobalNamespace::MultiplayerSessionManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerSessionManager*, "", "MultiplayerSessionManager");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerSessionManager____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerSessionManager____c*, "", "MultiplayerSessionManager/<>c");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerSessionManager____c__DisplayClass98_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerSessionManager____c__DisplayClass98_0*, "", "MultiplayerSessionManager/<>c__DisplayClass98_0");
