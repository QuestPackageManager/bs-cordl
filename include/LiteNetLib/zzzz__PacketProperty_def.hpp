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
// Type: LiteNetLib::PacketProperty
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: true
// CS Name: ::LiteNetLib::PacketProperty
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

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief Field Ack value: static_cast<uint8_t>(0x2u)
  static ::LiteNetLib::PacketProperty const Ack;

  /// @brief Field Broadcast value: static_cast<uint8_t>(0xbu)
  static ::LiteNetLib::PacketProperty const Broadcast;

  /// @brief Field Channeled value: static_cast<uint8_t>(0x1u)
  static ::LiteNetLib::PacketProperty const Channeled;

  /// @brief Field ConnectAccept value: static_cast<uint8_t>(0x6u)
  static ::LiteNetLib::PacketProperty const ConnectAccept;

  /// @brief Field ConnectRequest value: static_cast<uint8_t>(0x5u)
  static ::LiteNetLib::PacketProperty const ConnectRequest;

  /// @brief Field Disconnect value: static_cast<uint8_t>(0x7u)
  static ::LiteNetLib::PacketProperty const Disconnect;

  /// @brief Field Empty value: static_cast<uint8_t>(0x11u)
  static ::LiteNetLib::PacketProperty const Empty;

  /// @brief Field InvalidProtocol value: static_cast<uint8_t>(0xfu)
  static ::LiteNetLib::PacketProperty const InvalidProtocol;

  /// @brief Field Merged value: static_cast<uint8_t>(0xcu)
  static ::LiteNetLib::PacketProperty const Merged;

  /// @brief Field MtuCheck value: static_cast<uint8_t>(0x9u)
  static ::LiteNetLib::PacketProperty const MtuCheck;

  /// @brief Field MtuOk value: static_cast<uint8_t>(0xau)
  static ::LiteNetLib::PacketProperty const MtuOk;

  /// @brief Field NatMessage value: static_cast<uint8_t>(0x10u)
  static ::LiteNetLib::PacketProperty const NatMessage;

  /// @brief Field PeerNotFound value: static_cast<uint8_t>(0xeu)
  static ::LiteNetLib::PacketProperty const PeerNotFound;

  /// @brief Field Ping value: static_cast<uint8_t>(0x3u)
  static ::LiteNetLib::PacketProperty const Ping;

  /// @brief Field Pong value: static_cast<uint8_t>(0x4u)
  static ::LiteNetLib::PacketProperty const Pong;

  /// @brief Field ShutdownOk value: static_cast<uint8_t>(0xdu)
  static ::LiteNetLib::PacketProperty const ShutdownOk;

  /// @brief Field UnconnectedMessage value: static_cast<uint8_t>(0x8u)
  static ::LiteNetLib::PacketProperty const UnconnectedMessage;

  /// @brief Field Unreliable value: static_cast<uint8_t>(0x0u)
  static ::LiteNetLib::PacketProperty const Unreliable;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::PacketProperty, 0x1>, "Size mismatch!");

static_assert(offsetof(::LiteNetLib::PacketProperty, value__) == 0x0, "Offset mismatch!");

} // namespace LiteNetLib
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::PacketProperty, "LiteNetLib", "PacketProperty");
