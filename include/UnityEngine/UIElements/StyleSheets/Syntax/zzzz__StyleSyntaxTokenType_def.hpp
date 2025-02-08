#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/Syntax/StyleSyntaxTokenType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleSyntaxTokenType)
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets::Syntax {
struct StyleSyntaxTokenType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType);
// Dependencies
namespace UnityEngine::UIElements::StyleSheets::Syntax {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenType
struct CORDL_TYPE StyleSyntaxTokenType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __StyleSyntaxTokenType_Unwrapped
  enum struct __StyleSyntaxTokenType_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_String = static_cast<int32_t>(0x1),
    __E_Number = static_cast<int32_t>(0x2),
    __E_Space = static_cast<int32_t>(0x3),
    __E_SingleBar = static_cast<int32_t>(0x4),
    __E_DoubleBar = static_cast<int32_t>(0x5),
    __E_DoubleAmpersand = static_cast<int32_t>(0x6),
    __E_Comma = static_cast<int32_t>(0x7),
    __E_SingleQuote = static_cast<int32_t>(0x8),
    __E_Asterisk = static_cast<int32_t>(0x9),
    __E_Plus = static_cast<int32_t>(0xa),
    __E_QuestionMark = static_cast<int32_t>(0xb),
    __E_HashMark = static_cast<int32_t>(0xc),
    __E_ExclamationPoint = static_cast<int32_t>(0xd),
    __E_OpenBracket = static_cast<int32_t>(0xe),
    __E_CloseBracket = static_cast<int32_t>(0xf),
    __E_OpenBrace = static_cast<int32_t>(0x10),
    __E_CloseBrace = static_cast<int32_t>(0x11),
    __E_LessThan = static_cast<int32_t>(0x12),
    __E_GreaterThan = static_cast<int32_t>(0x13),
    __E_End = static_cast<int32_t>(0x14),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __StyleSyntaxTokenType_Unwrapped() const noexcept {
    return static_cast<__StyleSyntaxTokenType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleSyntaxTokenType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr StyleSyntaxTokenType(int32_t value__) noexcept;

  /// @brief Field Asterisk value: I32(9)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const Asterisk;

  /// @brief Field CloseBrace value: I32(17)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const CloseBrace;

  /// @brief Field CloseBracket value: I32(15)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const CloseBracket;

  /// @brief Field Comma value: I32(7)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const Comma;

  /// @brief Field DoubleAmpersand value: I32(6)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const DoubleAmpersand;

  /// @brief Field DoubleBar value: I32(5)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const DoubleBar;

  /// @brief Field End value: I32(20)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const End;

  /// @brief Field ExclamationPoint value: I32(13)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const ExclamationPoint;

  /// @brief Field GreaterThan value: I32(19)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const GreaterThan;

  /// @brief Field HashMark value: I32(12)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const HashMark;

  /// @brief Field LessThan value: I32(18)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const LessThan;

  /// @brief Field Number value: I32(2)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const Number;

  /// @brief Field OpenBrace value: I32(16)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const OpenBrace;

  /// @brief Field OpenBracket value: I32(14)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const OpenBracket;

  /// @brief Field Plus value: I32(10)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const Plus;

  /// @brief Field QuestionMark value: I32(11)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const QuestionMark;

  /// @brief Field SingleBar value: I32(4)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const SingleBar;

  /// @brief Field SingleQuote value: I32(8)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const SingleQuote;

  /// @brief Field Space value: I32(3)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const Space;

  /// @brief Field String value: I32(1)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const String;

  /// @brief Field Unknown value: I32(0)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const Unknown;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6478 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets::Syntax
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType, "UnityEngine.UIElements.StyleSheets.Syntax", "StyleSyntaxTokenType");
