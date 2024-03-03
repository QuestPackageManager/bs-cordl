#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UInt64Enum)
// Forward declare root types
namespace System {
struct UInt64Enum;
}
// Write type traits
MARK_VAL_T(::System::UInt64Enum);
// Type: System::UInt64Enum
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::System::UInt64Enum
struct CORDL_TYPE UInt64Enum {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint64_t;

  /// @brief Nested struct __UInt64Enum_Unwrapped
  enum struct __UInt64Enum_Unwrapped : uint64_t {};

  /// @brief Conversion into unwrapped enum value
  constexpr operator __UInt64Enum_Unwrapped() const noexcept {
    return static_cast<__UInt64Enum_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint64_t() const noexcept {
    return static_cast<uint64_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr UInt64Enum();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr UInt64Enum(uint64_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x8, def value: None
  uint64_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::UInt64Enum, 0x8>, "Size mismatch!");

static_assert(offsetof(::System::UInt64Enum, value__) == 0x0, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::UInt64Enum, "System", "UInt64Enum");
