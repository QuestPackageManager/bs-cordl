#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/FontStyles.hpp"
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
// Dependencies
namespace UnityEngine::TextCore::Text {
// Is value type: true
// CS Name: UnityEngine.TextCore.Text.FontStyles
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

  /// @brief Field Bold value: I32(1)
  static ::UnityEngine::TextCore::Text::FontStyles const Bold;

  /// @brief Field Highlight value: I32(512)
  static ::UnityEngine::TextCore::Text::FontStyles const Highlight;

  /// @brief Field Italic value: I32(2)
  static ::UnityEngine::TextCore::Text::FontStyles const Italic;

  /// @brief Field LowerCase value: I32(8)
  static ::UnityEngine::TextCore::Text::FontStyles const LowerCase;

  /// @brief Field Normal value: I32(0)
  static ::UnityEngine::TextCore::Text::FontStyles const Normal;

  /// @brief Field SmallCaps value: I32(32)
  static ::UnityEngine::TextCore::Text::FontStyles const SmallCaps;

  /// @brief Field Strikethrough value: I32(64)
  static ::UnityEngine::TextCore::Text::FontStyles const Strikethrough;

  /// @brief Field Subscript value: I32(256)
  static ::UnityEngine::TextCore::Text::FontStyles const Subscript;

  /// @brief Field Superscript value: I32(128)
  static ::UnityEngine::TextCore::Text::FontStyles const Superscript;

  /// @brief Field Underline value: I32(4)
  static ::UnityEngine::TextCore::Text::FontStyles const Underline;

  /// @brief Field UpperCase value: I32(16)
  static ::UnityEngine::TextCore::Text::FontStyles const UpperCase;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15270 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::Text::FontStyles, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::FontStyles, 0x4>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::FontStyles, "UnityEngine.TextCore.Text", "FontStyles");
