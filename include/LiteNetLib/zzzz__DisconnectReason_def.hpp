#pragma once
// IWYU pragma private; include "LiteNetLib/DisconnectReason.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DisconnectReason)
// Forward declare root types
namespace LiteNetLib {
struct DisconnectReason;
}
// Write type traits
MARK_VAL_T(::LiteNetLib::DisconnectReason);
// Type: LiteNetLib::DisconnectReason
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: true
// CS Name: ::LiteNetLib::DisconnectReason
struct CORDL_TYPE DisconnectReason {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DisconnectReason_Unwrapped
  enum struct __DisconnectReason_Unwrapped : int32_t {
    __E_ConnectionFailed = static_cast<int32_t>(0x0),
    __E_Timeout = static_cast<int32_t>(0x1),
    __E_HostUnreachable = static_cast<int32_t>(0x2),
    __E_NetworkUnreachable = static_cast<int32_t>(0x3),
    __E_RemoteConnectionClose = static_cast<int32_t>(0x4),
    __E_DisconnectPeerCalled = static_cast<int32_t>(0x5),
    __E_ConnectionRejected = static_cast<int32_t>(0x6),
    __E_InvalidProtocol = static_cast<int32_t>(0x7),
    __E_UnknownHost = static_cast<int32_t>(0x8),
    __E_Reconnect = static_cast<int32_t>(0x9),
    __E_PeerToPeerConnection = static_cast<int32_t>(0xa),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DisconnectReason_Unwrapped() const noexcept {
    return static_cast<__DisconnectReason_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DisconnectReason();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DisconnectReason(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ConnectionFailed value: static_cast<int32_t>(0x0)
  static ::LiteNetLib::DisconnectReason const ConnectionFailed;

  /// @brief Field ConnectionRejected value: static_cast<int32_t>(0x6)
  static ::LiteNetLib::DisconnectReason const ConnectionRejected;

  /// @brief Field DisconnectPeerCalled value: static_cast<int32_t>(0x5)
  static ::LiteNetLib::DisconnectReason const DisconnectPeerCalled;

  /// @brief Field HostUnreachable value: static_cast<int32_t>(0x2)
  static ::LiteNetLib::DisconnectReason const HostUnreachable;

  /// @brief Field InvalidProtocol value: static_cast<int32_t>(0x7)
  static ::LiteNetLib::DisconnectReason const InvalidProtocol;

  /// @brief Field NetworkUnreachable value: static_cast<int32_t>(0x3)
  static ::LiteNetLib::DisconnectReason const NetworkUnreachable;

  /// @brief Field PeerToPeerConnection value: static_cast<int32_t>(0xa)
  static ::LiteNetLib::DisconnectReason const PeerToPeerConnection;

  /// @brief Field Reconnect value: static_cast<int32_t>(0x9)
  static ::LiteNetLib::DisconnectReason const Reconnect;

  /// @brief Field RemoteConnectionClose value: static_cast<int32_t>(0x4)
  static ::LiteNetLib::DisconnectReason const RemoteConnectionClose;

  /// @brief Field Timeout value: static_cast<int32_t>(0x1)
  static ::LiteNetLib::DisconnectReason const Timeout;

  /// @brief Field UnknownHost value: static_cast<int32_t>(0x8)
  static ::LiteNetLib::DisconnectReason const UnknownHost;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::DisconnectReason, 0x4>, "Size mismatch!");

static_assert(offsetof(::LiteNetLib::DisconnectReason, value__) == 0x0, "Offset mismatch!");

} // namespace LiteNetLib
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::DisconnectReason, "LiteNetLib", "DisconnectReason");
