#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Expression_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__LambdaExpression_def.hpp"
CORDL_MODULE_EXPORT(Expression_1)
namespace System::Linq::Expressions {
class ExpressionVisitor;
}
namespace System::Linq::Expressions {
class Expression;
}
namespace System::Linq::Expressions {
class ParameterExpression;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions {
template <typename TDelegate> class Expression_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Linq::Expressions::Expression_1);
// Dependencies System.Linq.Expressions.LambdaExpression
namespace System::Linq::Expressions {
// cpp template
template <typename TDelegate>
// Is value type: false
// CS Name: System.Linq.Expressions.Expression`1<TDelegate>
class CORDL_TYPE Expression_1 : public ::System::Linq::Expressions::LambdaExpression {
public:
  // Declarations
  __declspec(property(get = get_PublicType)) ::System::Type* PublicType;

  __declspec(property(get = get_TypeCore)) ::System::Type* TypeCore;

  /// @brief Method Accept, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* visitor);

  /// @brief Method Compile, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TDelegate Compile();

  /// @brief Method Compile, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TDelegate Compile(bool preferInterpretation);

  static inline ::System::Linq::Expressions::Expression_1<TDelegate>* New_ctor(::System::Linq::Expressions::Expression* body);

  /// @brief Method Rewrite, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression_1<TDelegate>*
  Rewrite(::System::Linq::Expressions::Expression* body, ::ArrayW<::System::Linq::Expressions::ParameterExpression*, ::Array<::System::Linq::Expressions::ParameterExpression*>*> parameters);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::Expression* body);

  /// @brief Method get_PublicType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Type* get_PublicType();

  /// @brief Method get_TypeCore, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Type* get_TypeCore();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Expression_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Expression_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_1(Expression_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_1(Expression_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16152 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq::Expressions
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::Expressions::Expression_1, "System.Linq.Expressions", "Expression`1");
