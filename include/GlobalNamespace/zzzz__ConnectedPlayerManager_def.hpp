#pragma once
// IWYU pragma private; include "GlobalNamespace/ConnectedPlayerManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConnectedPlayerManager)
namespace GlobalNamespace {
struct ConnectedPlayerManager_InternalMessageType;
}
namespace GlobalNamespace {
struct ConnectedPlayerManager_MessageType;
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
// Write type traits
MARK_VAL_T(::GlobalNamespace::ConnectedPlayerManager_InternalMessageType);
MARK_VAL_T(::GlobalNamespace::ConnectedPlayerManager_MessageType);
MARK_REF_PTR_T(::GlobalNamespace::ConnectedPlayerManager);
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
    __E_Ping = static_cast<uint8_t>(0xau),
    __E_Pong = static_cast<uint8_t>(0xbu),
    __E_GameSpecificMessageType = static_cast<uint8_t>(0xcu),
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

  /// @brief Field GameSpecificMessageType value: U8(12)
  static ::GlobalNamespace::ConnectedPlayerManager_InternalMessageType const GameSpecificMessageType;

  /// @brief Field KickPlayer value: U8(8)
  static ::GlobalNamespace::ConnectedPlayerManager_InternalMessageType const KickPlayer;

  /// @brief Field MultiplayerSession value: U8(7)
  static ::GlobalNamespace::ConnectedPlayerManager_InternalMessageType const MultiplayerSession;

  /// @brief Field Party value: U8(6)
  static ::GlobalNamespace::ConnectedPlayerManager_InternalMessageType const Party;

  /// @brief Field Ping value: U8(10)
  static ::GlobalNamespace::ConnectedPlayerManager_InternalMessageType const Ping;

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

  /// @brief Field Pong value: U8(11)
  static ::GlobalNamespace::ConnectedPlayerManager_InternalMessageType const Pong;

  /// @brief Field SyncTime value: U8(0)
  static ::GlobalNamespace::ConnectedPlayerManager_InternalMessageType const SyncTime;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18088 };

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
    __E_GameSpecificMessageType = static_cast<uint8_t>(0xcu),
    __E_PlayerIdentity = static_cast<uint8_t>(0x2u),
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

  /// @brief Field GameSpecificMessageType value: U8(12)
  static ::GlobalNamespace::ConnectedPlayerManager_MessageType const GameSpecificMessageType;

  /// @brief Field MultiplayerSession value: U8(7)
  static ::GlobalNamespace::ConnectedPlayerManager_MessageType const MultiplayerSession;

  /// @brief Field Party value: U8(6)
  static ::GlobalNamespace::ConnectedPlayerManager_MessageType const Party;

  /// @brief Field PlayerIdentity value: U8(2)
  static ::GlobalNamespace::ConnectedPlayerManager_MessageType const PlayerIdentity;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18089 };

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
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ConnectedPlayerManager
class CORDL_TYPE ConnectedPlayerManager : public ::System::Object {
public:
  // Declarations
  using InternalMessageType = ::GlobalNamespace::ConnectedPlayerManager_InternalMessageType;

  using MessageType = ::GlobalNamespace::ConnectedPlayerManager_MessageType;

  static inline ::GlobalNamespace::ConnectedPlayerManager* New_ctor();

  /// @brief Method .ctor, addr 0x3231e40, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18090 };

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ConnectedPlayerManager, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConnectedPlayerManager_InternalMessageType, "", "ConnectedPlayerManager/InternalMessageType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConnectedPlayerManager_MessageType, "", "ConnectedPlayerManager/MessageType");
NEED_NO_BOX(::GlobalNamespace::ConnectedPlayerManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConnectedPlayerManager*, "", "ConnectedPlayerManager");
