#pragma once
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
// Type: UnityEngine.UIElements.StyleSheets.Syntax::StyleSyntaxTokenType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::StyleSheets::Syntax {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7488))
// CS Name: ::UnityEngine.UIElements.StyleSheets.Syntax::StyleSyntaxTokenType
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr StyleSyntaxTokenType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleSyntaxTokenType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const Unknown;

  /// @brief Field String value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const String;

  /// @brief Field Number value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const Number;

  /// @brief Field Space value: static_cast<int32_t>(0x3)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const Space;

  /// @brief Field SingleBar value: static_cast<int32_t>(0x4)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const SingleBar;

  /// @brief Field DoubleBar value: static_cast<int32_t>(0x5)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const DoubleBar;

  /// @brief Field DoubleAmpersand value: static_cast<int32_t>(0x6)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const DoubleAmpersand;

  /// @brief Field Comma value: static_cast<int32_t>(0x7)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const Comma;

  /// @brief Field SingleQuote value: static_cast<int32_t>(0x8)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const SingleQuote;

  /// @brief Field Asterisk value: static_cast<int32_t>(0x9)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const Asterisk;

  /// @brief Field Plus value: static_cast<int32_t>(0xa)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const Plus;

  /// @brief Field QuestionMark value: static_cast<int32_t>(0xb)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const QuestionMark;

  /// @brief Field HashMark value: static_cast<int32_t>(0xc)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const HashMark;

  /// @brief Field ExclamationPoint value: static_cast<int32_t>(0xd)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const ExclamationPoint;

  /// @brief Field OpenBracket value: static_cast<int32_t>(0xe)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const OpenBracket;

  /// @brief Field CloseBracket value: static_cast<int32_t>(0xf)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const CloseBracket;

  /// @brief Field OpenBrace value: static_cast<int32_t>(0x10)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const OpenBrace;

  /// @brief Field CloseBrace value: static_cast<int32_t>(0x11)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const CloseBrace;

  /// @brief Field LessThan value: static_cast<int32_t>(0x12)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const LessThan;

  /// @brief Field GreaterThan value: static_cast<int32_t>(0x13)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const GreaterThan;

  /// @brief Field End value: static_cast<int32_t>(0x14)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType const End;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets::Syntax
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType, "UnityEngine.UIElements.StyleSheets.Syntax", "StyleSyntaxTokenType");
