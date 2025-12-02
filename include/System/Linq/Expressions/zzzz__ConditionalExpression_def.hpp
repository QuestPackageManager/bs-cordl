#pragma once
// IWYU pragma private; include "System/Linq/Expressions/ConditionalExpression.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
CORDL_MODULE_EXPORT(ConditionalExpression)
namespace System::Linq::Expressions {
struct ExpressionType;
}
namespace System::Linq::Expressions {
class ExpressionVisitor;
}
namespace System::Linq::Expressions {
class Expression;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions {
class ConditionalExpression;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::ConditionalExpression);
// Dependencies System.Linq.Expressions.Expression
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.ConditionalExpression
class CORDL_TYPE ConditionalExpression : public ::System::Linq::Expressions::Expression {
public:
  // Declarations
  __declspec(property(get = get_IfFalse)) ::System::Linq::Expressions::Expression* IfFalse;

  __declspec(property(get = get_IfTrue)) ::System::Linq::Expressions::Expression* IfTrue;

  __declspec(property(get = get_NodeType)) ::System::Linq::Expressions::ExpressionType NodeType;

  __declspec(property(get = get_Test)) ::System::Linq::Expressions::Expression* Test;

  __declspec(property(get = get_Type)) ::System::Type* Type;

  /// @brief Field <IfTrue>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__IfTrue_k__BackingField, put = __cordl_internal_set__IfTrue_k__BackingField)) ::System::Linq::Expressions::Expression* _IfTrue_k__BackingField;

  /// @brief Field <Test>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Test_k__BackingField, put = __cordl_internal_set__Test_k__BackingField)) ::System::Linq::Expressions::Expression* _Test_k__BackingField;

  /// @brief Method Accept, addr 0x5d5e3b4, size 0x24, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* visitor);

  /// @brief Method GetFalse, addr 0x5d5e358, size 0x5c, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* GetFalse();

  /// @brief Method Make, addr 0x5d5e104, size 0x1c8, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::ConditionalExpression* Make(::System::Linq::Expressions::Expression* test, ::System::Linq::Expressions::Expression* ifTrue,
                                                                         ::System::Linq::Expressions::Expression* ifFalse, ::System::Type* type);

  static inline ::System::Linq::Expressions::ConditionalExpression* New_ctor(::System::Linq::Expressions::Expression* test, ::System::Linq::Expressions::Expression* ifTrue);

  /// @brief Method Update, addr 0x5d5e3d8, size 0xe4, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::ConditionalExpression* Update(::System::Linq::Expressions::Expression* test, ::System::Linq::Expressions::Expression* ifTrue,
                                                                    ::System::Linq::Expressions::Expression* ifFalse);

  constexpr ::System::Linq::Expressions::Expression* const& __cordl_internal_get__IfTrue_k__BackingField() const;

  constexpr ::System::Linq::Expressions::Expression*& __cordl_internal_get__IfTrue_k__BackingField();

  constexpr ::System::Linq::Expressions::Expression* const& __cordl_internal_get__Test_k__BackingField() const;

  constexpr ::System::Linq::Expressions::Expression*& __cordl_internal_get__Test_k__BackingField();

  constexpr void __cordl_internal_set__IfTrue_k__BackingField(::System::Linq::Expressions::Expression* value);

  constexpr void __cordl_internal_set__Test_k__BackingField(::System::Linq::Expressions::Expression* value);

  /// @brief Method .ctor, addr 0x5d5e09c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::Expression* test, ::System::Linq::Expressions::Expression* ifTrue);

  /// @brief Method get_IfFalse, addr 0x5d5e34c, size 0xc, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* get_IfFalse();

  /// @brief Method get_IfTrue, addr 0x5d5e344, size 0x8, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* get_IfTrue();

  /// @brief Method get_NodeType, addr 0x5d5e318, size 0x8, virtual true, abstract: false, final true
  inline ::System::Linq::Expressions::ExpressionType get_NodeType();

  /// @brief Method get_Test, addr 0x5d5e33c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* get_Test();

  /// @brief Method get_Type, addr 0x5d5e320, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Type* get_Type();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConditionalExpression();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConditionalExpression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConditionalExpression(ConditionalExpression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConditionalExpression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConditionalExpression(ConditionalExpression const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16110 };

  /// @brief Field <Test>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Linq::Expressions::Expression* ____Test_k__BackingField;

  /// @brief Field <IfTrue>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Linq::Expressions::Expression* ____IfTrue_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::ConditionalExpression, ____Test_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::ConditionalExpression, ____IfTrue_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::ConditionalExpression, 0x20>, "Size mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::ConditionalExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::ConditionalExpression*, "System.Linq.Expressions", "ConditionalExpression");
