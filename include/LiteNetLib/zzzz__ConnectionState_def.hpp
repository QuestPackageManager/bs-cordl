#pragma once
// IWYU pragma private; include "LiteNetLib/ConnectionState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConnectionState)
// Forward declare root types
namespace LiteNetLib {
struct ConnectionState;
}
// Write type traits
MARK_VAL_T(::LiteNetLib::ConnectionState);
// Dependencies
namespace LiteNetLib {
// Is value type: true
// CS Name: LiteNetLib.ConnectionState
struct CORDL_TYPE ConnectionState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __ConnectionState_Unwrapped
  enum struct __ConnectionState_Unwrapped : uint8_t {
    __E_Outgoing = static_cast<uint8_t>(0x2u),
    __E_Connected = static_cast<uint8_t>(0x4u),
    __E_ShutdownRequested = static_cast<uint8_t>(0x8u),
    __E_Disconnected = static_cast<uint8_t>(0x10u),
    __E_Any = static_cast<uint8_t>(0xeu),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ConnectionState_Unwrapped() const noexcept {
    return static_cast<__ConnectionState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectionState();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr ConnectionState(uint8_t value__) noexcept;

  /// @brief Field Any value: U8(14)
  static ::LiteNetLib::ConnectionState const Any;

  /// @brief Field Connected value: U8(4)
  static ::LiteNetLib::ConnectionState const Connected;

  /// @brief Field Disconnected value: U8(16)
  static ::LiteNetLib::ConnectionState const Disconnected;

  /// @brief Field Outgoing value: U8(2)
  static ::LiteNetLib::ConnectionState const Outgoing;

  /// @brief Field ShutdownRequested value: U8(8)
  static ::LiteNetLib::ConnectionState const ShutdownRequested;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19815 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::LiteNetLib::ConnectionState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::LiteNetLib::ConnectionState, 0x1>, "Size mismatch!");

} // namespace LiteNetLib
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::ConnectionState, "LiteNetLib", "ConnectionState");
