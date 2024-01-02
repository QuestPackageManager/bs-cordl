#pragma once
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
// Type: System.Globalization::NumberStyles
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3679))
// CS Name: ::System.Globalization::NumberStyles
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr NumberStyles(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr NumberStyles();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::Globalization::NumberStyles const None;

  /// @brief Field AllowLeadingWhite value: static_cast<int32_t>(0x1)
  static ::System::Globalization::NumberStyles const AllowLeadingWhite;

  /// @brief Field AllowTrailingWhite value: static_cast<int32_t>(0x2)
  static ::System::Globalization::NumberStyles const AllowTrailingWhite;

  /// @brief Field AllowLeadingSign value: static_cast<int32_t>(0x4)
  static ::System::Globalization::NumberStyles const AllowLeadingSign;

  /// @brief Field AllowTrailingSign value: static_cast<int32_t>(0x8)
  static ::System::Globalization::NumberStyles const AllowTrailingSign;

  /// @brief Field AllowParentheses value: static_cast<int32_t>(0x10)
  static ::System::Globalization::NumberStyles const AllowParentheses;

  /// @brief Field AllowDecimalPoint value: static_cast<int32_t>(0x20)
  static ::System::Globalization::NumberStyles const AllowDecimalPoint;

  /// @brief Field AllowThousands value: static_cast<int32_t>(0x40)
  static ::System::Globalization::NumberStyles const AllowThousands;

  /// @brief Field AllowExponent value: static_cast<int32_t>(0x80)
  static ::System::Globalization::NumberStyles const AllowExponent;

  /// @brief Field AllowCurrencySymbol value: static_cast<int32_t>(0x100)
  static ::System::Globalization::NumberStyles const AllowCurrencySymbol;

  /// @brief Field AllowHexSpecifier value: static_cast<int32_t>(0x200)
  static ::System::Globalization::NumberStyles const AllowHexSpecifier;

  /// @brief Field Integer value: static_cast<int32_t>(0x7)
  static ::System::Globalization::NumberStyles const Integer;

  /// @brief Field HexNumber value: static_cast<int32_t>(0x203)
  static ::System::Globalization::NumberStyles const HexNumber;

  /// @brief Field Number value: static_cast<int32_t>(0x6f)
  static ::System::Globalization::NumberStyles const Number;

  /// @brief Field Float value: static_cast<int32_t>(0xa7)
  static ::System::Globalization::NumberStyles const Float;

  /// @brief Field Currency value: static_cast<int32_t>(0x17f)
  static ::System::Globalization::NumberStyles const Currency;

  /// @brief Field Any value: static_cast<int32_t>(0x1ff)
  static ::System::Globalization::NumberStyles const Any;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::NumberStyles, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Globalization::NumberStyles, value__) == 0x0, "Offset mismatch!");

} // namespace System::Globalization
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::NumberStyles, "System.Globalization", "NumberStyles");
