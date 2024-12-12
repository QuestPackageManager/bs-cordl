#pragma once
// IWYU pragma private; include "System/UInt16Enum.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UInt16Enum)
// Forward declare root types
namespace System {
struct UInt16Enum;
}
// Write type traits
MARK_VAL_T(::System::UInt16Enum);
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.UInt16Enum
struct CORDL_TYPE UInt16Enum {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint16_t;

  /// @brief Nested struct __UInt16Enum_Unwrapped
  enum struct __UInt16Enum_Unwrapped : uint16_t {};

  /// @brief Conversion into unwrapped enum value
  constexpr operator __UInt16Enum_Unwrapped() const noexcept {
    return static_cast<__UInt16Enum_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint16_t() const noexcept {
    return static_cast<uint16_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr UInt16Enum();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: None }]
  constexpr UInt16Enum(uint16_t value__) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2600 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2 };

  /// @brief Field value__, offset: 0x0, size: 0x2, def value: None
  uint16_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::UInt16Enum, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::UInt16Enum, 0x2>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::UInt16Enum, "System", "UInt16Enum");
