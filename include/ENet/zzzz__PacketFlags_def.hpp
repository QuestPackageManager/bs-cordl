#pragma once
// IWYU pragma private; include "ENet/PacketFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PacketFlags)
// Forward declare root types
namespace ENet {
struct PacketFlags;
}
// Write type traits
MARK_VAL_T(::ENet::PacketFlags);
// Dependencies
namespace ENet {
// Is value type: true
// CS Name: ENet.PacketFlags
struct CORDL_TYPE PacketFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PacketFlags_Unwrapped
  enum struct __PacketFlags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Reliable = static_cast<int32_t>(0x1),
    __E_Unsequenced = static_cast<int32_t>(0x2),
    __E_NoAllocate = static_cast<int32_t>(0x4),
    __E_UnreliableFragmented = static_cast<int32_t>(0x8),
    __E_Instant = static_cast<int32_t>(0x10),
    __E_Unthrottled = static_cast<int32_t>(0x20),
    __E_Sent = static_cast<int32_t>(0x100),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PacketFlags_Unwrapped() const noexcept {
    return static_cast<__PacketFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PacketFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PacketFlags(int32_t value__) noexcept;

  /// @brief Field Instant value: I32(16)
  static ::ENet::PacketFlags const Instant;

  /// @brief Field NoAllocate value: I32(4)
  static ::ENet::PacketFlags const NoAllocate;

  /// @brief Field None value: I32(0)
  static ::ENet::PacketFlags const None;

  /// @brief Field Reliable value: I32(1)
  static ::ENet::PacketFlags const Reliable;

  /// @brief Field Sent value: I32(256)
  static ::ENet::PacketFlags const Sent;

  /// @brief Field UnreliableFragmented value: I32(8)
  static ::ENet::PacketFlags const UnreliableFragmented;

  /// @brief Field Unsequenced value: I32(2)
  static ::ENet::PacketFlags const Unsequenced;

  /// @brief Field Unthrottled value: I32(32)
  static ::ENet::PacketFlags const Unthrottled;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17737 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::ENet::PacketFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::ENet::PacketFlags, 0x4>, "Size mismatch!");

} // namespace ENet
DEFINE_IL2CPP_ARG_TYPE(::ENet::PacketFlags, "ENet", "PacketFlags");
