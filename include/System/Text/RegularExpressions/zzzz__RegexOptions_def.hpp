#pragma once
// IWYU pragma private; include "System/Text/RegularExpressions/RegexOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RegexOptions)
// Forward declare root types
namespace System::Text::RegularExpressions {
struct RegexOptions;
}
// Write type traits
MARK_VAL_T(::System::Text::RegularExpressions::RegexOptions);
// Type: System.Text.RegularExpressions::RegexOptions
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace System::Text::RegularExpressions {
// Is value type: true
// CS Name: ::System.Text.RegularExpressions::RegexOptions
struct CORDL_TYPE RegexOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RegexOptions_Unwrapped
  enum struct __RegexOptions_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_IgnoreCase = static_cast<int32_t>(0x1),
    __E_Multiline = static_cast<int32_t>(0x2),
    __E_ExplicitCapture = static_cast<int32_t>(0x4),
    __E_Compiled = static_cast<int32_t>(0x8),
    __E_Singleline = static_cast<int32_t>(0x10),
    __E_IgnorePatternWhitespace = static_cast<int32_t>(0x20),
    __E_RightToLeft = static_cast<int32_t>(0x40),
    __E_ECMAScript = static_cast<int32_t>(0x100),
    __E_CultureInvariant = static_cast<int32_t>(0x200),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RegexOptions_Unwrapped() const noexcept {
    return static_cast<__RegexOptions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RegexOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RegexOptions(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Compiled value: static_cast<int32_t>(0x8)
  static ::System::Text::RegularExpressions::RegexOptions const Compiled;

  /// @brief Field CultureInvariant value: static_cast<int32_t>(0x200)
  static ::System::Text::RegularExpressions::RegexOptions const CultureInvariant;

  /// @brief Field ECMAScript value: static_cast<int32_t>(0x100)
  static ::System::Text::RegularExpressions::RegexOptions const ECMAScript;

  /// @brief Field ExplicitCapture value: static_cast<int32_t>(0x4)
  static ::System::Text::RegularExpressions::RegexOptions const ExplicitCapture;

  /// @brief Field IgnoreCase value: static_cast<int32_t>(0x1)
  static ::System::Text::RegularExpressions::RegexOptions const IgnoreCase;

  /// @brief Field IgnorePatternWhitespace value: static_cast<int32_t>(0x20)
  static ::System::Text::RegularExpressions::RegexOptions const IgnorePatternWhitespace;

  /// @brief Field Multiline value: static_cast<int32_t>(0x2)
  static ::System::Text::RegularExpressions::RegexOptions const Multiline;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::Text::RegularExpressions::RegexOptions const None;

  /// @brief Field RightToLeft value: static_cast<int32_t>(0x40)
  static ::System::Text::RegularExpressions::RegexOptions const RightToLeft;

  /// @brief Field Singleline value: static_cast<int32_t>(0x10)
  static ::System::Text::RegularExpressions::RegexOptions const Singleline;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9215 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::RegexOptions, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexOptions, value__) == 0x0, "Offset mismatch!");

} // namespace System::Text::RegularExpressions
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::RegexOptions, "System.Text.RegularExpressions", "RegexOptions");
