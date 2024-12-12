#pragma once
// IWYU pragma private; include "System/Globalization/TimeSpanStyles.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeSpanStyles)
// Forward declare root types
namespace System::Globalization {
struct TimeSpanStyles;
}
// Write type traits
MARK_VAL_T(::System::Globalization::TimeSpanStyles);
// Dependencies
namespace System::Globalization {
// Is value type: true
// CS Name: System.Globalization.TimeSpanStyles
struct CORDL_TYPE TimeSpanStyles {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TimeSpanStyles_Unwrapped
  enum struct __TimeSpanStyles_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_AssumeNegative = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TimeSpanStyles_Unwrapped() const noexcept {
    return static_cast<__TimeSpanStyles_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeSpanStyles();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TimeSpanStyles(int32_t value__) noexcept;

  /// @brief Field AssumeNegative value: I32(1)
  static ::System::Globalization::TimeSpanStyles const AssumeNegative;

  /// @brief Field None value: I32(0)
  static ::System::Globalization::TimeSpanStyles const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3699 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Globalization::TimeSpanStyles, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Globalization::TimeSpanStyles, 0x4>, "Size mismatch!");

} // namespace System::Globalization
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::TimeSpanStyles, "System.Globalization", "TimeSpanStyles");
