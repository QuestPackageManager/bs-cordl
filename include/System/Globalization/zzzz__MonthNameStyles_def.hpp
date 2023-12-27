#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MonthNameStyles)
// Forward declare root types
namespace System::Globalization {
struct MonthNameStyles;
}
// Write type traits
MARK_VAL_T(::System::Globalization::MonthNameStyles);
// Type: System.Globalization::MonthNameStyles
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3662))
// CS Name: ::System.Globalization::MonthNameStyles
struct CORDL_TYPE MonthNameStyles {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MonthNameStyles_Unwrapped
  enum struct __MonthNameStyles_Unwrapped : int32_t {
    __E_Regular = static_cast<int32_t>(0x0),
    __E_Genitive = static_cast<int32_t>(0x1),
    __E_LeapYear = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MonthNameStyles_Unwrapped() const noexcept {
    return static_cast<__MonthNameStyles_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MonthNameStyles(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr MonthNameStyles();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Regular value: static_cast<int32_t>(0x0)
  static ::System::Globalization::MonthNameStyles const Regular;

  /// @brief Field Genitive value: static_cast<int32_t>(0x1)
  static ::System::Globalization::MonthNameStyles const Genitive;

  /// @brief Field LeapYear value: static_cast<int32_t>(0x2)
  static ::System::Globalization::MonthNameStyles const LeapYear;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::MonthNameStyles, 0x4>, "Size mismatch!");

} // namespace System::Globalization
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::MonthNameStyles, "System.Globalization", "MonthNameStyles");
