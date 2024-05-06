#pragma once
// IWYU pragma private; include "System/Globalization/FORMATFLAGS.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FORMATFLAGS)
// Forward declare root types
namespace System::Globalization {
struct FORMATFLAGS;
}
// Write type traits
MARK_VAL_T(::System::Globalization::FORMATFLAGS);
// Type: System.Globalization::FORMATFLAGS
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: true
// CS Name: ::System.Globalization::FORMATFLAGS
struct CORDL_TYPE FORMATFLAGS {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FORMATFLAGS_Unwrapped
  enum struct __FORMATFLAGS_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_UseGenitiveMonth = static_cast<int32_t>(0x1),
    __E_UseLeapYearMonth = static_cast<int32_t>(0x2),
    __E_UseSpacesInMonthNames = static_cast<int32_t>(0x4),
    __E_UseHebrewParsing = static_cast<int32_t>(0x8),
    __E_UseSpacesInDayNames = static_cast<int32_t>(0x10),
    __E_UseDigitPrefixInTokens = static_cast<int32_t>(0x20),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FORMATFLAGS_Unwrapped() const noexcept {
    return static_cast<__FORMATFLAGS_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr FORMATFLAGS();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FORMATFLAGS(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::Globalization::FORMATFLAGS const None;

  /// @brief Field UseDigitPrefixInTokens value: static_cast<int32_t>(0x20)
  static ::System::Globalization::FORMATFLAGS const UseDigitPrefixInTokens;

  /// @brief Field UseGenitiveMonth value: static_cast<int32_t>(0x1)
  static ::System::Globalization::FORMATFLAGS const UseGenitiveMonth;

  /// @brief Field UseHebrewParsing value: static_cast<int32_t>(0x8)
  static ::System::Globalization::FORMATFLAGS const UseHebrewParsing;

  /// @brief Field UseLeapYearMonth value: static_cast<int32_t>(0x2)
  static ::System::Globalization::FORMATFLAGS const UseLeapYearMonth;

  /// @brief Field UseSpacesInDayNames value: static_cast<int32_t>(0x10)
  static ::System::Globalization::FORMATFLAGS const UseSpacesInDayNames;

  /// @brief Field UseSpacesInMonthNames value: static_cast<int32_t>(0x4)
  static ::System::Globalization::FORMATFLAGS const UseSpacesInMonthNames;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::FORMATFLAGS, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Globalization::FORMATFLAGS, value__) == 0x0, "Offset mismatch!");

} // namespace System::Globalization
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::FORMATFLAGS, "System.Globalization", "FORMATFLAGS");
