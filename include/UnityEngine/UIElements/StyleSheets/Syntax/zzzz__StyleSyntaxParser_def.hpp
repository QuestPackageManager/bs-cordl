#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
// Type: UnityEngine.UIElements.StyleSheets.Syntax::StyleSyntaxParser
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::StyleSheets::Syntax {
// Is value type: false
// CS Name: ::UnityEngine.UIElements.StyleSheets.Syntax::StyleSyntaxParser*
class CORDL_TYPE StyleSyntaxParser : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_CombinatorStack, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CombinatorStack,
                      put = __cordl_internal_set_m_CombinatorStack))::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator>* m_CombinatorStack;

  /// @brief Field m_ExpressionStack, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ExpressionStack,
                      put = __cordl_internal_set_m_ExpressionStack))::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>* m_ExpressionStack;

  /// @brief Field m_ParsedExpressionCache, offset 0x28, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_ParsedExpressionCache,
      put = __cordl_internal_set_m_ParsedExpressionCache))::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>* m_ParsedExpressionCache;

  /// @brief Field m_ProcessExpressionList, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ProcessExpressionList,
                      put = __cordl_internal_set_m_ProcessExpressionList))::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>* m_ProcessExpressionList;

  /// @brief Method EatSpace, addr 0x33452dc, size 0x40, virtual false, abstract: false, final false
  static inline void EatSpace(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer* tokenizer);

  /// @brief Method IsCombinator, addr 0x33452c8, size 0x14, virtual false, abstract: false, final false
  static inline bool IsCombinator(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken token);

  /// @brief Method IsExpressionEnd, addr 0x3344d04, size 0x20, virtual false, abstract: false, final false
  static inline bool IsExpressionEnd(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken token);

  /// @brief Method IsMultiplier, addr 0x334575c, size 0x24, virtual false, abstract: false, final false
  static inline bool IsMultiplier(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken token);

  static inline ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser* New_ctor();

  /// @brief Method Parse, addr 0x334410c, size 0x198, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleSheets::Syntax::Expression* Parse(::StringW syntax);

  /// @brief Method ParseCombinatorType, addr 0x33448bc, size 0x158, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator ParseCombinatorType(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer* tokenizer);

  /// @brief Method ParseDataType, addr 0x3344d68, size 0x3e4, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleSheets::Syntax::Expression* ParseDataType(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer* tokenizer);

  /// @brief Method ParseExpression, addr 0x33442a4, size 0x280, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleSheets::Syntax::Expression* ParseExpression(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer* tokenizer);

  /// @brief Method ParseGroup, addr 0x3344694, size 0x228, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleSheets::Syntax::Expression* ParseGroup(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer* tokenizer);

  /// @brief Method ParseMultiplier, addr 0x334514c, size 0x17c, virtual false, abstract: false, final false
  inline void ParseMultiplier(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer* tokenizer, ByRef<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier> multiplier);

  /// @brief Method ParseNonTerminalValue, addr 0x334531c, size 0x154, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleSheets::Syntax::Expression* ParseNonTerminalValue(::StringW syntax);

  /// @brief Method ParseProperty, addr 0x3345470, size 0x2ec, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleSheets::Syntax::Expression* ParseProperty(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer* tokenizer);

  /// @brief Method ParseRanges, addr 0x3345784, size 0x124, virtual false, abstract: false, final false
  inline void ParseRanges(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer* tokenizer, ByRef<int32_t> min, ByRef<int32_t> max);

  /// @brief Method ParseTerm, addr 0x3344524, size 0x170, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleSheets::Syntax::Expression* ParseTerm(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer* tokenizer);

  /// @brief Method ProcessCombinatorStack, addr 0x3344a14, size 0x2f0, virtual false, abstract: false, final false
  inline void ProcessCombinatorStack();

  constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator>*& __cordl_internal_get_m_CombinatorStack();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator>*> const&
  __cordl_internal_get_m_CombinatorStack() const;

  constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>*& __cordl_internal_get_m_ExpressionStack();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>*> const&
  __cordl_internal_get_m_ExpressionStack() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>*& __cordl_internal_get_m_ParsedExpressionCache();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>*> const&
  __cordl_internal_get_m_ParsedExpressionCache() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>*& __cordl_internal_get_m_ProcessExpressionList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>*> const&
  __cordl_internal_get_m_ProcessExpressionList() const;

  constexpr void __cordl_internal_set_m_CombinatorStack(::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator>* value);

  constexpr void __cordl_internal_set_m_ExpressionStack(::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>* value);

  constexpr void __cordl_internal_set_m_ParsedExpressionCache(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>* value);

  constexpr void __cordl_internal_set_m_ProcessExpressionList(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>* value);

  /// @brief Method .ctor, addr 0x33458a8, size 0x148, virtual false, abstract: false, final false
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
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser, ___m_ProcessExpressionList) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser, ___m_ExpressionStack) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser, ___m_CombinatorStack) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser, ___m_ParsedExpressionCache) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets::Syntax
NEED_NO_BOX(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*, "UnityEngine.UIElements.StyleSheets.Syntax", "StyleSyntaxParser");
