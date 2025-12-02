#pragma once
// IWYU pragma private; include "System/Globalization/DateTimeFormatFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DateTimeFormatFlags)
// Forward declare root types
namespace System::Globalization {
struct DateTimeFormatFlags;
}
// Write type traits
MARK_VAL_T(::System::Globalization::DateTimeFormatFlags);
// Dependencies
namespace System::Globalization {
// Is value type: true
// CS Name: System.Globalization.DateTimeFormatFlags
struct CORDL_TYPE DateTimeFormatFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DateTimeFormatFlags_Unwrapped
  enum struct __DateTimeFormatFlags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_UseGenitiveMonth = static_cast<int32_t>(0x1),
    __E_UseLeapYearMonth = static_cast<int32_t>(0x2),
    __E_UseSpacesInMonthNames = static_cast<int32_t>(0x4),
    __E_UseHebrewRule = static_cast<int32_t>(0x8),
    __E_UseSpacesInDayNames = static_cast<int32_t>(0x10),
    __E_UseDigitPrefixInTokens = static_cast<int32_t>(0x20),
    __E_NotInitialized = static_cast<int32_t>(0xffffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DateTimeFormatFlags_Unwrapped() const noexcept {
    return static_cast<__DateTimeFormatFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DateTimeFormatFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DateTimeFormatFlags(int32_t value__) noexcept;

  /// @brief Field None value: I32(0)
  static ::System::Globalization::DateTimeFormatFlags const None;

  /// @brief Field NotInitialized value: I32(-1)
  static ::System::Globalization::DateTimeFormatFlags const NotInitialized;

  /// @brief Field UseDigitPrefixInTokens value: I32(32)
  static ::System::Globalization::DateTimeFormatFlags const UseDigitPrefixInTokens;

  /// @brief Field UseGenitiveMonth value: I32(1)
  static ::System::Globalization::DateTimeFormatFlags const UseGenitiveMonth;

  /// @brief Field UseHebrewRule value: I32(8)
  static ::System::Globalization::DateTimeFormatFlags const UseHebrewRule;

  /// @brief Field UseLeapYearMonth value: I32(2)
  static ::System::Globalization::DateTimeFormatFlags const UseLeapYearMonth;

  /// @brief Field UseSpacesInDayNames value: I32(16)
  static ::System::Globalization::DateTimeFormatFlags const UseSpacesInDayNames;

  /// @brief Field UseSpacesInMonthNames value: I32(4)
  static ::System::Globalization::DateTimeFormatFlags const UseSpacesInMonthNames;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3589 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Globalization::DateTimeFormatFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Globalization::DateTimeFormatFlags, 0x4>, "Size mismatch!");

} // namespace System::Globalization
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::DateTimeFormatFlags, "System.Globalization", "DateTimeFormatFlags");
