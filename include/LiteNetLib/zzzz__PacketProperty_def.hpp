#pragma once
// IWYU pragma private; include "LiteNetLib/PacketProperty.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PacketProperty)
// Forward declare root types
namespace LiteNetLib {
struct PacketProperty;
}
// Write type traits
MARK_VAL_T(::LiteNetLib::PacketProperty);
// Dependencies
namespace LiteNetLib {
// Is value type: true
// CS Name: LiteNetLib.PacketProperty
struct CORDL_TYPE PacketProperty {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __PacketProperty_Unwrapped
  enum struct __PacketProperty_Unwrapped : uint8_t {
    __E_Unreliable = static_cast<uint8_t>(0x0u),
    __E_Channeled = static_cast<uint8_t>(0x1u),
    __E_Ack = static_cast<uint8_t>(0x2u),
    __E_Ping = static_cast<uint8_t>(0x3u),
    __E_Pong = static_cast<uint8_t>(0x4u),
    __E_ConnectRequest = static_cast<uint8_t>(0x5u),
    __E_ConnectAccept = static_cast<uint8_t>(0x6u),
    __E_Disconnect = static_cast<uint8_t>(0x7u),
    __E_UnconnectedMessage = static_cast<uint8_t>(0x8u),
    __E_MtuCheck = static_cast<uint8_t>(0x9u),
    __E_MtuOk = static_cast<uint8_t>(0xau),
    __E_Broadcast = static_cast<uint8_t>(0xbu),
    __E_Merged = static_cast<uint8_t>(0xcu),
    __E_ShutdownOk = static_cast<uint8_t>(0xdu),
    __E_PeerNotFound = static_cast<uint8_t>(0xeu),
    __E_InvalidProtocol = static_cast<uint8_t>(0xfu),
    __E_NatMessage = static_cast<uint8_t>(0x10u),
    __E_Empty = static_cast<uint8_t>(0x11u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PacketProperty_Unwrapped() const noexcept {
    return static_cast<__PacketProperty_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PacketProperty();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr PacketProperty(uint8_t value__) noexcept;

  /// @brief Field Ack value: U8(2)
  static ::LiteNetLib::PacketProperty const Ack;

  /// @brief Field Broadcast value: U8(11)
  static ::LiteNetLib::PacketProperty const Broadcast;

  /// @brief Field Channeled value: U8(1)
  static ::LiteNetLib::PacketProperty const Channeled;

  /// @brief Field ConnectAccept value: U8(6)
  static ::LiteNetLib::PacketProperty const ConnectAccept;

  /// @brief Field ConnectRequest value: U8(5)
  static ::LiteNetLib::PacketProperty const ConnectRequest;

  /// @brief Field Disconnect value: U8(7)
  static ::LiteNetLib::PacketProperty const Disconnect;

  /// @brief Field Empty value: U8(17)
  static ::LiteNetLib::PacketProperty const Empty;

  /// @brief Field InvalidProtocol value: U8(15)
  static ::LiteNetLib::PacketProperty const InvalidProtocol;

  /// @brief Field Merged value: U8(12)
  static ::LiteNetLib::PacketProperty const Merged;

  /// @brief Field MtuCheck value: U8(9)
  static ::LiteNetLib::PacketProperty const MtuCheck;

  /// @brief Field MtuOk value: U8(10)
  static ::LiteNetLib::PacketProperty const MtuOk;

  /// @brief Field NatMessage value: U8(16)
  static ::LiteNetLib::PacketProperty const NatMessage;

  /// @brief Field PeerNotFound value: U8(14)
  static ::LiteNetLib::PacketProperty const PeerNotFound;

  /// @brief Field Ping value: U8(3)
  static ::LiteNetLib::PacketProperty const Ping;

  /// @brief Field Pong value: U8(4)
  static ::LiteNetLib::PacketProperty const Pong;

  /// @brief Field ShutdownOk value: U8(13)
  static ::LiteNetLib::PacketProperty const ShutdownOk;

  /// @brief Field UnconnectedMessage value: U8(8)
  static ::LiteNetLib::PacketProperty const UnconnectedMessage;

  /// @brief Field Unreliable value: U8(0)
  static ::LiteNetLib::PacketProperty const Unreliable;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16552 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::LiteNetLib::PacketProperty, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::LiteNetLib::PacketProperty, 0x1>, "Size mismatch!");

} // namespace LiteNetLib
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::PacketProperty, "LiteNetLib", "PacketProperty");
