#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/Syntax/Expression.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/Syntax/zzzz__DataType_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/Syntax/zzzz__ExpressionCombinator_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/Syntax/zzzz__ExpressionMultiplier_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/Syntax/zzzz__ExpressionType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Expression)
namespace UnityEngine::UIElements::StyleSheets::Syntax {
struct ExpressionType;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets::Syntax {
class Expression;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::StyleSheets::Syntax::Expression);
// Dependencies System.Object, UnityEngine.UIElements.StyleSheets.Syntax.DataType, UnityEngine.UIElements.StyleSheets.Syntax.ExpressionCombinator,
// UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplier, UnityEngine.UIElements.StyleSheets.Syntax.ExpressionType
namespace UnityEngine::UIElements::StyleSheets::Syntax {
// Is value type: false
// CS Name: UnityEngine.UIElements.StyleSheets.Syntax.Expression
class CORDL_TYPE Expression : public ::System::Object {
public:
  // Declarations
  /// @brief Field combinator, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_combinator, put = __cordl_internal_set_combinator)) ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator combinator;

  /// @brief Field dataType, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_dataType, put = __cordl_internal_set_dataType)) ::UnityEngine::UIElements::StyleSheets::Syntax::DataType dataType;

  /// @brief Field keyword, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_keyword, put = __cordl_internal_set_keyword)) ::StringW keyword;

  /// @brief Field multiplier, offset 0x14, size 0xc
  __declspec(property(get = __cordl_internal_get_multiplier, put = __cordl_internal_set_multiplier)) ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier multiplier;

  /// @brief Field subExpressions, offset 0x28, size 0x8
  __declspec(property(
      get = __cordl_internal_get_subExpressions,
      put = __cordl_internal_set_subExpressions)) ::ArrayW<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*, ::Array<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>*>
      subExpressions;

  /// @brief Field type, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType type;

  static inline ::UnityEngine::UIElements::StyleSheets::Syntax::Expression* New_ctor(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType type);

  constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator const& __cordl_internal_get_combinator() const;

  constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator& __cordl_internal_get_combinator();

  constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::DataType const& __cordl_internal_get_dataType() const;

  constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::DataType& __cordl_internal_get_dataType();

  constexpr ::StringW const& __cordl_internal_get_keyword() const;

  constexpr ::StringW& __cordl_internal_get_keyword();

  constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier const& __cordl_internal_get_multiplier() const;

  constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier& __cordl_internal_get_multiplier();

  constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*, ::Array<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>*> const&
  __cordl_internal_get_subExpressions() const;

  constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*, ::Array<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>*>& __cordl_internal_get_subExpressions();

  constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType const& __cordl_internal_get_type() const;

  constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_combinator(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator value);

  constexpr void __cordl_internal_set_dataType(::UnityEngine::UIElements::StyleSheets::Syntax::DataType value);

  constexpr void __cordl_internal_set_keyword(::StringW value);

  constexpr void __cordl_internal_set_multiplier(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier value);

  constexpr void
  __cordl_internal_set_subExpressions(::ArrayW<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*, ::Array<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>*> value);

  constexpr void __cordl_internal_set_type(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType value);

  /// @brief Method .ctor, addr 0x49ea7a4, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType type);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Expression();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Expression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression(Expression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression(Expression const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6472 };

  /// @brief Field type, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType ___type;

  /// @brief Field multiplier, offset: 0x14, size: 0xc, def value: None
  ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier ___multiplier;

  /// @brief Field dataType, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::UIElements::StyleSheets::Syntax::DataType ___dataType;

  /// @brief Field combinator, offset: 0x24, size: 0x4, def value: None
  ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator ___combinator;

  /// @brief Field subExpressions, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*, ::Array<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>*> ___subExpressions;

  /// @brief Field keyword, offset: 0x30, size: 0x8, def value: None
  ::StringW ___keyword;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::Syntax::Expression, ___type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::Syntax::Expression, ___multiplier) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::Syntax::Expression, ___dataType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::Syntax::Expression, ___combinator) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::Syntax::Expression, ___subExpressions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::Syntax::Expression, ___keyword) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::Syntax::Expression, 0x38>, "Size mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets::Syntax
NEED_NO_BOX(::UnityEngine::UIElements::StyleSheets::Syntax::Expression);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::Syntax::Expression*, "UnityEngine.UIElements.StyleSheets.Syntax", "Expression");
