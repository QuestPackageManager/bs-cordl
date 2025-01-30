#pragma once
// IWYU pragma private; include "ENet/PeerState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PeerState)
// Forward declare root types
namespace ENet {
struct PeerState;
}
// Write type traits
MARK_VAL_T(::ENet::PeerState);
// Dependencies
namespace ENet {
// Is value type: true
// CS Name: ENet.PeerState
struct CORDL_TYPE PeerState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PeerState_Unwrapped
  enum struct __PeerState_Unwrapped : int32_t {
    __E_Uninitialized = static_cast<int32_t>(0xffffffff),
    __E_Disconnected = static_cast<int32_t>(0x0),
    __E_Connecting = static_cast<int32_t>(0x1),
    __E_AcknowledgingConnect = static_cast<int32_t>(0x2),
    __E_ConnectionPending = static_cast<int32_t>(0x3),
    __E_ConnectionSucceeded = static_cast<int32_t>(0x4),
    __E_Connected = static_cast<int32_t>(0x5),
    __E_DisconnectLater = static_cast<int32_t>(0x6),
    __E_Disconnecting = static_cast<int32_t>(0x7),
    __E_AcknowledgingDisconnect = static_cast<int32_t>(0x8),
    __E_Zombie = static_cast<int32_t>(0x9),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PeerState_Unwrapped() const noexcept {
    return static_cast<__PeerState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PeerState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PeerState(int32_t value__) noexcept;

  /// @brief Field AcknowledgingConnect value: I32(2)
  static ::ENet::PeerState const AcknowledgingConnect;

  /// @brief Field AcknowledgingDisconnect value: I32(8)
  static ::ENet::PeerState const AcknowledgingDisconnect;

  /// @brief Field Connected value: I32(5)
  static ::ENet::PeerState const Connected;

  /// @brief Field Connecting value: I32(1)
  static ::ENet::PeerState const Connecting;

  /// @brief Field ConnectionPending value: I32(3)
  static ::ENet::PeerState const ConnectionPending;

  /// @brief Field ConnectionSucceeded value: I32(4)
  static ::ENet::PeerState const ConnectionSucceeded;

  /// @brief Field DisconnectLater value: I32(6)
  static ::ENet::PeerState const DisconnectLater;

  /// @brief Field Disconnected value: I32(0)
  static ::ENet::PeerState const Disconnected;

  /// @brief Field Disconnecting value: I32(7)
  static ::ENet::PeerState const Disconnecting;

  /// @brief Field Uninitialized value: I32(-1)
  static ::ENet::PeerState const Uninitialized;

  /// @brief Field Zombie value: I32(9)
  static ::ENet::PeerState const Zombie;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17731 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::ENet::PeerState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::ENet::PeerState, 0x4>, "Size mismatch!");

} // namespace ENet
DEFINE_IL2CPP_ARG_TYPE(::ENet::PeerState, "ENet", "PeerState");
