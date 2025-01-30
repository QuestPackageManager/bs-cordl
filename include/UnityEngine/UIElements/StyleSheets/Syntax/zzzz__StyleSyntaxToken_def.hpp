#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/Syntax/StyleSyntaxToken.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/StyleSheets/Syntax/zzzz__StyleSyntaxTokenType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleSyntaxToken)
namespace UnityEngine::UIElements::StyleSheets::Syntax {
struct StyleSyntaxTokenType;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets::Syntax {
struct StyleSyntaxToken;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken);
// Dependencies UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenType
namespace UnityEngine::UIElements::StyleSheets::Syntax {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken
struct CORDL_TYPE StyleSyntaxToken {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x49e1370, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType t);

  /// @brief Method .ctor, addr 0x49e1390, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType type, int32_t number);

  /// @brief Method .ctor, addr 0x49e1380, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType type, ::StringW text);

  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleSyntaxToken();

  // Ctor Parameters [CppParam { name: "type", ty: "::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType", modifiers: "", def_value: None }, CppParam { name: "text", ty: "::StringW",
  // modifiers: "", def_value: None }, CppParam { name: "number", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr StyleSyntaxToken(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType type, ::StringW text, int32_t number) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6478 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field type, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType type;

  /// @brief Field text, offset: 0x8, size: 0x8, def value: None
  ::StringW text;

  /// @brief Field number, offset: 0x10, size: 0x4, def value: None
  int32_t number;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken, text) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken, number) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets::Syntax
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken, "UnityEngine.UIElements.StyleSheets.Syntax", "StyleSyntaxToken");
