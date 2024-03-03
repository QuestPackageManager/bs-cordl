#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FontStyles)
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct FontStyles;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::FontStyles);
// Type: UnityEngine.TextCore.Text::FontStyles
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// Is value type: true
// CS Name: ::UnityEngine.TextCore.Text::FontStyles
struct CORDL_TYPE FontStyles {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FontStyles_Unwrapped
  enum struct __FontStyles_Unwrapped : int32_t {
    __E_Normal = static_cast<int32_t>(0x0),
    __E_Bold = static_cast<int32_t>(0x1),
    __E_Italic = static_cast<int32_t>(0x2),
    __E_Underline = static_cast<int32_t>(0x4),
    __E_LowerCase = static_cast<int32_t>(0x8),
    __E_UpperCase = static_cast<int32_t>(0x10),
    __E_SmallCaps = static_cast<int32_t>(0x20),
    __E_Strikethrough = static_cast<int32_t>(0x40),
    __E_Superscript = static_cast<int32_t>(0x80),
    __E_Subscript = static_cast<int32_t>(0x100),
    __E_Highlight = static_cast<int32_t>(0x200),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FontStyles_Unwrapped() const noexcept {
    return static_cast<__FontStyles_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr FontStyles();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FontStyles(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Bold value: static_cast<int32_t>(0x1)
  static ::UnityEngine::TextCore::Text::FontStyles const Bold;

  /// @brief Field Highlight value: static_cast<int32_t>(0x200)
  static ::UnityEngine::TextCore::Text::FontStyles const Highlight;

  /// @brief Field Italic value: static_cast<int32_t>(0x2)
  static ::UnityEngine::TextCore::Text::FontStyles const Italic;

  /// @brief Field LowerCase value: static_cast<int32_t>(0x8)
  static ::UnityEngine::TextCore::Text::FontStyles const LowerCase;

  /// @brief Field Normal value: static_cast<int32_t>(0x0)
  static ::UnityEngine::TextCore::Text::FontStyles const Normal;

  /// @brief Field SmallCaps value: static_cast<int32_t>(0x20)
  static ::UnityEngine::TextCore::Text::FontStyles const SmallCaps;

  /// @brief Field Strikethrough value: static_cast<int32_t>(0x40)
  static ::UnityEngine::TextCore::Text::FontStyles const Strikethrough;

  /// @brief Field Subscript value: static_cast<int32_t>(0x100)
  static ::UnityEngine::TextCore::Text::FontStyles const Subscript;

  /// @brief Field Superscript value: static_cast<int32_t>(0x80)
  static ::UnityEngine::TextCore::Text::FontStyles const Superscript;

  /// @brief Field Underline value: static_cast<int32_t>(0x4)
  static ::UnityEngine::TextCore::Text::FontStyles const Underline;

  /// @brief Field UpperCase value: static_cast<int32_t>(0x10)
  static ::UnityEngine::TextCore::Text::FontStyles const UpperCase;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::FontStyles, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontStyles, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::FontStyles, "UnityEngine.TextCore.Text", "FontStyles");
