#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/Syntax/StyleSyntaxParser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StyleSyntaxParser)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace UnityEngine::UIElements::StyleSheets::Syntax {
struct ExpressionCombinator;
}
namespace UnityEngine::UIElements::StyleSheets::Syntax {
struct ExpressionMultiplier;
}
namespace UnityEngine::UIElements::StyleSheets::Syntax {
class Expression;
}
namespace UnityEngine::UIElements::StyleSheets::Syntax {
struct StyleSyntaxToken;
}
namespace UnityEngine::UIElements::StyleSheets::Syntax {
class StyleSyntaxTokenizer;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets::Syntax {
class StyleSyntaxParser;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser);
// Dependencies System.Object
namespace UnityEngine::UIElements::StyleSheets::Syntax {
// Is value type: false
// CS Name: UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxParser
class CORDL_TYPE StyleSyntaxParser : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_CombinatorStack, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CombinatorStack,
                      put = __cordl_internal_set_m_CombinatorStack)) ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator>* m_CombinatorStack;

  /// @brief Field m_ExpressionStack, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ExpressionStack,
                      put = __cordl_internal_set_m_ExpressionStack)) ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>* m_ExpressionStack;

  /// @brief Field m_ParsedExpressionCache, offset 0x28, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_ParsedExpressionCache,
      put =
          __cordl_internal_set_m_ParsedExpressionCache)) ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>* m_ParsedExpressionCache;

  /// @brief Field m_ProcessExpressionList, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ProcessExpressionList,
                      put = __cordl_internal_set_m_ProcessExpressionList)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>* m_ProcessExpressionList;

  /// @brief Method EatSpace, addr 0x49e38c0, size 0x40, virtual false, abstract: false, final false
  static inline void EatSpace(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer* tokenizer);

  /// @brief Method IsCombinator, addr 0x49e38ac, size 0x14, virtual false, abstract: false, final false
  static inline bool IsCombinator(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken token);

  /// @brief Method IsExpressionEnd, addr 0x49e3188, size 0x20, virtual false, abstract: false, final false
  static inline bool IsExpressionEnd(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken token);

  /// @brief Method IsMultiplier, addr 0x49e3d34, size 0x24, virtual false, abstract: false, final false
  static inline bool IsMultiplier(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken token);

  static inline ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser* New_ctor();

  /// @brief Method Parse, addr 0x49e1820, size 0x194, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleSheets::Syntax::Expression* Parse(::StringW syntax);

  /// @brief Method ParseCombinatorType, addr 0x49e2d54, size 0x150, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator ParseCombinatorType(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer* tokenizer);

  /// @brief Method ParseDataType, addr 0x49e31a8, size 0x3dc, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleSheets::Syntax::Expression* ParseDataType(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer* tokenizer);

  /// @brief Method ParseExpression, addr 0x49e26a8, size 0x278, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleSheets::Syntax::Expression* ParseExpression(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer* tokenizer);

  /// @brief Method ParseGroup, addr 0x49e2b30, size 0x224, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleSheets::Syntax::Expression* ParseGroup(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer* tokenizer);

  /// @brief Method ParseMultiplier, addr 0x49e3688, size 0x174, virtual false, abstract: false, final false
  inline void ParseMultiplier(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer* tokenizer,
                              ::ByRef<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier> multiplier);

  /// @brief Method ParseNonTerminalValue, addr 0x49e3900, size 0x150, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleSheets::Syntax::Expression* ParseNonTerminalValue(::StringW syntax);

  /// @brief Method ParseProperty, addr 0x49e3a50, size 0x2e4, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleSheets::Syntax::Expression* ParseProperty(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer* tokenizer);

  /// @brief Method ParseRanges, addr 0x49e3d58, size 0x11c, virtual false, abstract: false, final false
  inline void ParseRanges(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer* tokenizer, ::ByRef<int32_t> min, ::ByRef<int32_t> max);

  /// @brief Method ParseTerm, addr 0x49e29cc, size 0x164, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleSheets::Syntax::Expression* ParseTerm(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer* tokenizer);

  /// @brief Method ProcessCombinatorStack, addr 0x49e2ea4, size 0x2e4, virtual false, abstract: false, final false
  inline void ProcessCombinatorStack();

  constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator>* const& __cordl_internal_get_m_CombinatorStack() const;

  constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator>*& __cordl_internal_get_m_CombinatorStack();

  constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>* const& __cordl_internal_get_m_ExpressionStack() const;

  constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>*& __cordl_internal_get_m_ExpressionStack();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>* const& __cordl_internal_get_m_ParsedExpressionCache() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>*& __cordl_internal_get_m_ParsedExpressionCache();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>* const& __cordl_internal_get_m_ProcessExpressionList() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>*& __cordl_internal_get_m_ProcessExpressionList();

  constexpr void __cordl_internal_set_m_CombinatorStack(::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator>* value);

  constexpr void __cordl_internal_set_m_ExpressionStack(::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>* value);

  constexpr void __cordl_internal_set_m_ParsedExpressionCache(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>* value);

  constexpr void __cordl_internal_set_m_ProcessExpressionList(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>* value);

  /// @brief Method .ctor, addr 0x49e3e74, size 0x154, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleSyntaxParser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StyleSyntaxParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StyleSyntaxParser(StyleSyntaxParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StyleSyntaxParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StyleSyntaxParser(StyleSyntaxParser const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6477 };

  /// @brief Field m_ProcessExpressionList, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>* ___m_ProcessExpressionList;

  /// @brief Field m_ExpressionStack, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>* ___m_ExpressionStack;

  /// @brief Field m_CombinatorStack, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator>* ___m_CombinatorStack;

  /// @brief Field m_ParsedExpressionCache, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>* ___m_ParsedExpressionCache;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser, ___m_ProcessExpressionList) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser, ___m_ExpressionStack) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser, ___m_CombinatorStack) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser, ___m_ParsedExpressionCache) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets::Syntax
NEED_NO_BOX(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*, "UnityEngine.UIElements.StyleSheets.Syntax", "StyleSyntaxParser");
