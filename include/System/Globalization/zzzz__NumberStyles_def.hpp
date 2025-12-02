#pragma once
// IWYU pragma private; include "System/Globalization/NumberStyles.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NumberStyles)
// Forward declare root types
namespace System::Globalization {
struct NumberStyles;
}
// Write type traits
MARK_VAL_T(::System::Globalization::NumberStyles);
// Dependencies
namespace System::Globalization {
// Is value type: true
// CS Name: System.Globalization.NumberStyles
struct CORDL_TYPE NumberStyles {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __NumberStyles_Unwrapped
  enum struct __NumberStyles_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_AllowLeadingWhite = static_cast<int32_t>(0x1),
    __E_AllowTrailingWhite = static_cast<int32_t>(0x2),
    __E_AllowLeadingSign = static_cast<int32_t>(0x4),
    __E_AllowTrailingSign = static_cast<int32_t>(0x8),
    __E_AllowParentheses = static_cast<int32_t>(0x10),
    __E_AllowDecimalPoint = static_cast<int32_t>(0x20),
    __E_AllowThousands = static_cast<int32_t>(0x40),
    __E_AllowExponent = static_cast<int32_t>(0x80),
    __E_AllowCurrencySymbol = static_cast<int32_t>(0x100),
    __E_AllowHexSpecifier = static_cast<int32_t>(0x200),
    __E_Integer = static_cast<int32_t>(0x7),
    __E_HexNumber = static_cast<int32_t>(0x203),
    __E_Number = static_cast<int32_t>(0x6f),
    __E_Float = static_cast<int32_t>(0xa7),
    __E_Currency = static_cast<int32_t>(0x17f),
    __E_Any = static_cast<int32_t>(0x1ff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __NumberStyles_Unwrapped() const noexcept {
    return static_cast<__NumberStyles_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr NumberStyles();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr NumberStyles(int32_t value__) noexcept;

  /// @brief Field AllowCurrencySymbol value: I32(256)
  static ::System::Globalization::NumberStyles const AllowCurrencySymbol;

  /// @brief Field AllowDecimalPoint value: I32(32)
  static ::System::Globalization::NumberStyles const AllowDecimalPoint;

  /// @brief Field AllowExponent value: I32(128)
  static ::System::Globalization::NumberStyles const AllowExponent;

  /// @brief Field AllowHexSpecifier value: I32(512)
  static ::System::Globalization::NumberStyles const AllowHexSpecifier;

  /// @brief Field AllowLeadingSign value: I32(4)
  static ::System::Globalization::NumberStyles const AllowLeadingSign;

  /// @brief Field AllowLeadingWhite value: I32(1)
  static ::System::Globalization::NumberStyles const AllowLeadingWhite;

  /// @brief Field AllowParentheses value: I32(16)
  static ::System::Globalization::NumberStyles const AllowParentheses;

  /// @brief Field AllowThousands value: I32(64)
  static ::System::Globalization::NumberStyles const AllowThousands;

  /// @brief Field AllowTrailingSign value: I32(8)
  static ::System::Globalization::NumberStyles const AllowTrailingSign;

  /// @brief Field AllowTrailingWhite value: I32(2)
  static ::System::Globalization::NumberStyles const AllowTrailingWhite;

  /// @brief Field Any value: I32(511)
  static ::System::Globalization::NumberStyles const Any;

  /// @brief Field Currency value: I32(383)
  static ::System::Globalization::NumberStyles const Currency;

  /// @brief Field Float value: I32(167)
  static ::System::Globalization::NumberStyles const Float;

  /// @brief Field HexNumber value: I32(515)
  static ::System::Globalization::NumberStyles const HexNumber;

  /// @brief Field Integer value: I32(7)
  static ::System::Globalization::NumberStyles const Integer;

  /// @brief Field None value: I32(0)
  static ::System::Globalization::NumberStyles const None;

  /// @brief Field Number value: I32(111)
  static ::System::Globalization::NumberStyles const Number;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3605 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Globalization::NumberStyles, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Globalization::NumberStyles, 0x4>, "Size mismatch!");

} // namespace System::Globalization
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::NumberStyles, "System.Globalization", "NumberStyles");
