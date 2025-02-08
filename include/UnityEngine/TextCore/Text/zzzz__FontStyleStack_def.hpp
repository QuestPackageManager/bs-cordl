#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/FontStyleStack.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FontStyleStack)
namespace UnityEngine::TextCore::Text {
struct FontStyles;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct FontStyleStack;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::FontStyleStack);
// Dependencies
namespace UnityEngine::TextCore::Text {
// Is value type: true
// CS Name: UnityEngine.TextCore.Text.FontStyleStack
struct CORDL_TYPE FontStyleStack {
public:
  // Declarations
  /// @brief Method Add, addr 0x49539b4, size 0xfc, virtual false, abstract: false, final false
  inline uint8_t Add(::UnityEngine::TextCore::Text::FontStyles style);

  /// @brief Method Clear, addr 0x49539a8, size 0xc, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Remove, addr 0x4953ab0, size 0x144, virtual false, abstract: false, final false
  inline uint8_t Remove(::UnityEngine::TextCore::Text::FontStyles style);

  // Ctor Parameters []
  // @brief default ctor
  constexpr FontStyleStack();

  // Ctor Parameters [CppParam { name: "bold", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "italic", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name:
  // "underline", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "strikethrough", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "highlight", ty: "uint8_t",
  // modifiers: "", def_value: None }, CppParam { name: "superscript", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "subscript", ty: "uint8_t", modifiers: "", def_value: None },
  // CppParam { name: "uppercase", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "lowercase", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "smallcaps", ty:
  // "uint8_t", modifiers: "", def_value: None }]
  constexpr FontStyleStack(uint8_t bold, uint8_t italic, uint8_t underline, uint8_t strikethrough, uint8_t highlight, uint8_t superscript, uint8_t subscript, uint8_t uppercase, uint8_t lowercase,
                           uint8_t smallcaps) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15290 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xa };

  /// @brief Field bold, offset: 0x0, size: 0x1, def value: None
  uint8_t bold;

  /// @brief Field italic, offset: 0x1, size: 0x1, def value: None
  uint8_t italic;

  /// @brief Field underline, offset: 0x2, size: 0x1, def value: None
  uint8_t underline;

  /// @brief Field strikethrough, offset: 0x3, size: 0x1, def value: None
  uint8_t strikethrough;

  /// @brief Field highlight, offset: 0x4, size: 0x1, def value: None
  uint8_t highlight;

  /// @brief Field superscript, offset: 0x5, size: 0x1, def value: None
  uint8_t superscript;

  /// @brief Field subscript, offset: 0x6, size: 0x1, def value: None
  uint8_t subscript;

  /// @brief Field uppercase, offset: 0x7, size: 0x1, def value: None
  uint8_t uppercase;

  /// @brief Field lowercase, offset: 0x8, size: 0x1, def value: None
  uint8_t lowercase;

  /// @brief Field smallcaps, offset: 0x9, size: 0x1, def value: None
  uint8_t smallcaps;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::Text::FontStyleStack, bold) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontStyleStack, italic) == 0x1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontStyleStack, underline) == 0x2, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontStyleStack, strikethrough) == 0x3, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontStyleStack, highlight) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontStyleStack, superscript) == 0x5, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontStyleStack, subscript) == 0x6, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontStyleStack, uppercase) == 0x7, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontStyleStack, lowercase) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontStyleStack, smallcaps) == 0x9, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::FontStyleStack, 0xa>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::FontStyleStack, "UnityEngine.TextCore.Text", "FontStyleStack");
