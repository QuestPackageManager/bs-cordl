#pragma once
// IWYU pragma private; include "System/UInt32Enum.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UInt32Enum)
// Forward declare root types
namespace System {
struct UInt32Enum;
}
// Write type traits
MARK_VAL_T(::System::UInt32Enum);
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.UInt32Enum
struct CORDL_TYPE UInt32Enum {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint32_t;

  /// @brief Nested struct __UInt32Enum_Unwrapped
  enum struct __UInt32Enum_Unwrapped : uint32_t {};

  /// @brief Conversion into unwrapped enum value
  constexpr operator __UInt32Enum_Unwrapped() const noexcept {
    return static_cast<__UInt32Enum_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint32_t() const noexcept {
    return static_cast<uint32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr UInt32Enum();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr UInt32Enum(uint32_t value__) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2610 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  uint32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::UInt32Enum, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::UInt32Enum, 0x4>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::UInt32Enum, "System", "UInt32Enum");
