#pragma once
// IWYU pragma private; include "System/Globalization/DateTimeStyles.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DateTimeStyles)
// Forward declare root types
namespace System::Globalization {
struct DateTimeStyles;
}
// Write type traits
MARK_VAL_T(::System::Globalization::DateTimeStyles);
// Dependencies
namespace System::Globalization {
// Is value type: true
// CS Name: System.Globalization.DateTimeStyles
struct CORDL_TYPE DateTimeStyles {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DateTimeStyles_Unwrapped
  enum struct __DateTimeStyles_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_AllowLeadingWhite = static_cast<int32_t>(0x1),
    __E_AllowTrailingWhite = static_cast<int32_t>(0x2),
    __E_AllowInnerWhite = static_cast<int32_t>(0x4),
    __E_AllowWhiteSpaces = static_cast<int32_t>(0x7),
    __E_NoCurrentDateDefault = static_cast<int32_t>(0x8),
    __E_AdjustToUniversal = static_cast<int32_t>(0x10),
    __E_AssumeLocal = static_cast<int32_t>(0x20),
    __E_AssumeUniversal = static_cast<int32_t>(0x40),
    __E_RoundtripKind = static_cast<int32_t>(0x80),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DateTimeStyles_Unwrapped() const noexcept {
    return static_cast<__DateTimeStyles_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DateTimeStyles();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DateTimeStyles(int32_t value__) noexcept;

  /// @brief Field AdjustToUniversal value: I32(16)
  static ::System::Globalization::DateTimeStyles const AdjustToUniversal;

  /// @brief Field AllowInnerWhite value: I32(4)
  static ::System::Globalization::DateTimeStyles const AllowInnerWhite;

  /// @brief Field AllowLeadingWhite value: I32(1)
  static ::System::Globalization::DateTimeStyles const AllowLeadingWhite;

  /// @brief Field AllowTrailingWhite value: I32(2)
  static ::System::Globalization::DateTimeStyles const AllowTrailingWhite;

  /// @brief Field AllowWhiteSpaces value: I32(7)
  static ::System::Globalization::DateTimeStyles const AllowWhiteSpaces;

  /// @brief Field AssumeLocal value: I32(32)
  static ::System::Globalization::DateTimeStyles const AssumeLocal;

  /// @brief Field AssumeUniversal value: I32(64)
  static ::System::Globalization::DateTimeStyles const AssumeUniversal;

  /// @brief Field NoCurrentDateDefault value: I32(8)
  static ::System::Globalization::DateTimeStyles const NoCurrentDateDefault;

  /// @brief Field None value: I32(0)
  static ::System::Globalization::DateTimeStyles const None;

  /// @brief Field RoundtripKind value: I32(128)
  static ::System::Globalization::DateTimeStyles const RoundtripKind;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3676 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Globalization::DateTimeStyles, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Globalization::DateTimeStyles, 0x4>, "Size mismatch!");

} // namespace System::Globalization
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::DateTimeStyles, "System.Globalization", "DateTimeStyles");
