#pragma once
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
// Type: LiteNetLib::ConnectionState
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14173))
// CS Name: ::LiteNetLib::ConnectionState
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

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr ConnectionState(uint8_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectionState();

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field Outgoing value: static_cast<uint8_t>(0x2u)
  static ::LiteNetLib::ConnectionState const Outgoing;

  /// @brief Field Connected value: static_cast<uint8_t>(0x4u)
  static ::LiteNetLib::ConnectionState const Connected;

  /// @brief Field ShutdownRequested value: static_cast<uint8_t>(0x8u)
  static ::LiteNetLib::ConnectionState const ShutdownRequested;

  /// @brief Field Disconnected value: static_cast<uint8_t>(0x10u)
  static ::LiteNetLib::ConnectionState const Disconnected;

  /// @brief Field Any value: static_cast<uint8_t>(0xeu)
  static ::LiteNetLib::ConnectionState const Any;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::ConnectionState, 0x1>, "Size mismatch!");

} // namespace LiteNetLib
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::ConnectionState, "LiteNetLib", "ConnectionState");
