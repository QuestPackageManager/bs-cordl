#pragma once
// IWYU pragma private; include "ENet/EventType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventType)
// Forward declare root types
namespace ENet {
struct EventType;
}
// Write type traits
MARK_VAL_T(::ENet::EventType);
// Dependencies
namespace ENet {
// Is value type: true
// CS Name: ENet.EventType
struct CORDL_TYPE EventType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EventType_Unwrapped
  enum struct __EventType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Connect = static_cast<int32_t>(0x1),
    __E_Disconnect = static_cast<int32_t>(0x2),
    __E_Receive = static_cast<int32_t>(0x3),
    __E_Timeout = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EventType_Unwrapped() const noexcept {
    return static_cast<__EventType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EventType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EventType(int32_t value__) noexcept;

  /// @brief Field Connect value: I32(1)
  static ::ENet::EventType const Connect;

  /// @brief Field Disconnect value: I32(2)
  static ::ENet::EventType const Disconnect;

  /// @brief Field None value: I32(0)
  static ::ENet::EventType const None;

  /// @brief Field Receive value: I32(3)
  static ::ENet::EventType const Receive;

  /// @brief Field Timeout value: I32(4)
  static ::ENet::EventType const Timeout;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21521 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::ENet::EventType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::ENet::EventType, 0x4>, "Size mismatch!");

} // namespace ENet
DEFINE_IL2CPP_ARG_TYPE(::ENet::EventType, "ENet", "EventType");
