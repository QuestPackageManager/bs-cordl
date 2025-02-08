#pragma once
// IWYU pragma private; include "System/Linq/Expressions/InvocationExpression.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Linq/Expressions/zzzz__IArgumentProvider_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InvocationExpression)
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
class InvocationExpression;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::InvocationExpression);
// Dependencies System.Linq.Expressions.Expression, System.Linq.Expressions.IArgumentProvider
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.InvocationExpression
class CORDL_TYPE InvocationExpression : public ::System::Linq::Expressions::Expression {
public:
  // Declarations
  __declspec(property(get = get_ArgumentCount)) int32_t ArgumentCount;

  __declspec(property(get = get_Expression)) ::System::Linq::Expressions::Expression* Expression;

  __declspec(property(get = get_NodeType)) ::System::Linq::Expressions::ExpressionType NodeType;

  __declspec(property(get = get_Type)) ::System::Type* Type;

  /// @brief Field <Expression>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Expression_k__BackingField,
                      put = __cordl_internal_set__Expression_k__BackingField)) ::System::Linq::Expressions::Expression* _Expression_k__BackingField;

  /// @brief Field <Type>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Type_k__BackingField, put = __cordl_internal_set__Type_k__BackingField)) ::System::Type* _Type_k__BackingField;

  /// @brief Convert operator to "::System::Linq::Expressions::IArgumentProvider"
  constexpr operator ::System::Linq::Expressions::IArgumentProvider*() noexcept;

  /// @brief Method Accept, addr 0x40bdb30, size 0x28, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* visitor);

  /// @brief Method GetArgument, addr 0x40bdae0, size 0x28, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* GetArgument(int32_t index);

  static inline ::System::Linq::Expressions::InvocationExpression* New_ctor(::System::Linq::Expressions::Expression* expression, ::System::Type* returnType);

  /// @brief Method Rewrite, addr 0x40bdb58, size 0x28, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::InvocationExpression* Rewrite(::System::Linq::Expressions::Expression* lambda,
                                                                    ::ArrayW<::System::Linq::Expressions::Expression*, ::Array<::System::Linq::Expressions::Expression*>*> arguments);

  constexpr ::System::Linq::Expressions::Expression* const& __cordl_internal_get__Expression_k__BackingField() const;

  constexpr ::System::Linq::Expressions::Expression*& __cordl_internal_get__Expression_k__BackingField();

  constexpr ::System::Type* const& __cordl_internal_get__Type_k__BackingField() const;

  constexpr ::System::Type*& __cordl_internal_get__Type_k__BackingField();

  constexpr void __cordl_internal_set__Expression_k__BackingField(::System::Linq::Expressions::Expression* value);

  constexpr void __cordl_internal_set__Type_k__BackingField(::System::Type* value);

  /// @brief Method .ctor, addr 0x40bda58, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::Expression* expression, ::System::Type* returnType);

  /// @brief Method get_ArgumentCount, addr 0x40bdb08, size 0x28, virtual true, abstract: false, final false
  inline int32_t get_ArgumentCount();

  /// @brief Method get_Expression, addr 0x40bdad8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* get_Expression();

  /// @brief Method get_NodeType, addr 0x40bdad0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Linq::Expressions::ExpressionType get_NodeType();

  /// @brief Method get_Type, addr 0x40bdac8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Type* get_Type();

  /// @brief Convert to "::System::Linq::Expressions::IArgumentProvider"
  constexpr ::System::Linq::Expressions::IArgumentProvider* i___System__Linq__Expressions__IArgumentProvider() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InvocationExpression();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InvocationExpression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InvocationExpression(InvocationExpression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InvocationExpression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InvocationExpression(InvocationExpression const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13679 };

  /// @brief Field <Type>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____Type_k__BackingField;

  /// @brief Field <Expression>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Linq::Expressions::Expression* ____Expression_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::InvocationExpression, ____Type_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::InvocationExpression, ____Expression_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::InvocationExpression, 0x20>, "Size mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::InvocationExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::InvocationExpression*, "System.Linq.Expressions", "InvocationExpression");
