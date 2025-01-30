#pragma once
// IWYU pragma private; include "GlobalNamespace/DisconnectedReason.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DisconnectedReason)
// Forward declare root types
namespace GlobalNamespace {
struct DisconnectedReason;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DisconnectedReason);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: DisconnectedReason
struct CORDL_TYPE DisconnectedReason {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DisconnectedReason_Unwrapped
  enum struct __DisconnectedReason_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x1),
    __E_UserInitiated = static_cast<int32_t>(0x2),
    __E_Timeout = static_cast<int32_t>(0x3),
    __E_Kicked = static_cast<int32_t>(0x4),
    __E_ServerAtCapacity = static_cast<int32_t>(0x5),
    __E_ServerConnectionClosed = static_cast<int32_t>(0x6),
    __E_MasterServerUnreachable = static_cast<int32_t>(0x7),
    __E_ClientConnectionClosed = static_cast<int32_t>(0x8),
    __E_NetworkDisconnected = static_cast<int32_t>(0x9),
    __E_ServerTerminated = static_cast<int32_t>(0xa),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DisconnectedReason_Unwrapped() const noexcept {
    return static_cast<__DisconnectedReason_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DisconnectedReason();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DisconnectedReason(int32_t value__) noexcept;

  /// @brief Field ClientConnectionClosed value: I32(8)
  static ::GlobalNamespace::DisconnectedReason const ClientConnectionClosed;

  /// @brief Field Kicked value: I32(4)
  static ::GlobalNamespace::DisconnectedReason const Kicked;

  /// @brief Field MasterServerUnreachable value: I32(7)
  static ::GlobalNamespace::DisconnectedReason const MasterServerUnreachable;

  /// @brief Field NetworkDisconnected value: I32(9)
  static ::GlobalNamespace::DisconnectedReason const NetworkDisconnected;

  /// @brief Field ServerAtCapacity value: I32(5)
  static ::GlobalNamespace::DisconnectedReason const ServerAtCapacity;

  /// @brief Field ServerConnectionClosed value: I32(6)
  static ::GlobalNamespace::DisconnectedReason const ServerConnectionClosed;

  /// @brief Field ServerTerminated value: I32(10)
  static ::GlobalNamespace::DisconnectedReason const ServerTerminated;

  /// @brief Field Timeout value: I32(3)
  static ::GlobalNamespace::DisconnectedReason const Timeout;

  /// @brief Field Unknown value: I32(1)
  static ::GlobalNamespace::DisconnectedReason const Unknown;

  /// @brief Field UserInitiated value: I32(2)
  static ::GlobalNamespace::DisconnectedReason const UserInitiated;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14726 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DisconnectedReason, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DisconnectedReason, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DisconnectedReason, "", "DisconnectedReason");
