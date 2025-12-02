#pragma once
// IWYU pragma private; include "System/Linq/Expressions/TypeBinaryExpression.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__ExpressionType_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
CORDL_MODULE_EXPORT(TypeBinaryExpression)
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
class TypeBinaryExpression;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::TypeBinaryExpression);
// Dependencies System.Linq.Expressions.Expression, System.Linq.Expressions.ExpressionType
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.TypeBinaryExpression
class CORDL_TYPE TypeBinaryExpression : public ::System::Linq::Expressions::Expression {
public:
  // Declarations
  __declspec(property(get = get_Expression)) ::System::Linq::Expressions::Expression* Expression;

  __declspec(property(get = get_NodeType)) ::System::Linq::Expressions::ExpressionType NodeType;

  __declspec(property(get = get_Type)) ::System::Type* Type;

  __declspec(property(get = get_TypeOperand)) ::System::Type* TypeOperand;

  /// @brief Field <Expression>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Expression_k__BackingField,
                      put = __cordl_internal_set__Expression_k__BackingField)) ::System::Linq::Expressions::Expression* _Expression_k__BackingField;

  /// @brief Field <NodeType>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__NodeType_k__BackingField,
                      put = __cordl_internal_set__NodeType_k__BackingField)) ::System::Linq::Expressions::ExpressionType _NodeType_k__BackingField;

  /// @brief Field <TypeOperand>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__TypeOperand_k__BackingField, put = __cordl_internal_set__TypeOperand_k__BackingField)) ::System::Type* _TypeOperand_k__BackingField;

  /// @brief Method Accept, addr 0x5d6d09c, size 0x28, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* visitor);

  static inline ::System::Linq::Expressions::TypeBinaryExpression* New_ctor(::System::Linq::Expressions::Expression* expression, ::System::Type* typeOperand,
                                                                            ::System::Linq::Expressions::ExpressionType nodeType);

  /// @brief Method Update, addr 0x5d68dcc, size 0xd0, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::TypeBinaryExpression* Update(::System::Linq::Expressions::Expression* expression);

  constexpr ::System::Linq::Expressions::Expression* const& __cordl_internal_get__Expression_k__BackingField() const;

  constexpr ::System::Linq::Expressions::Expression*& __cordl_internal_get__Expression_k__BackingField();

  constexpr ::System::Linq::Expressions::ExpressionType const& __cordl_internal_get__NodeType_k__BackingField() const;

  constexpr ::System::Linq::Expressions::ExpressionType& __cordl_internal_get__NodeType_k__BackingField();

  constexpr ::System::Type* const& __cordl_internal_get__TypeOperand_k__BackingField() const;

  constexpr ::System::Type*& __cordl_internal_get__TypeOperand_k__BackingField();

  constexpr void __cordl_internal_set__Expression_k__BackingField(::System::Linq::Expressions::Expression* value);

  constexpr void __cordl_internal_set__NodeType_k__BackingField(::System::Linq::Expressions::ExpressionType value);

  constexpr void __cordl_internal_set__TypeOperand_k__BackingField(::System::Type* value);

  /// @brief Method .ctor, addr 0x5d6cfdc, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::Expression* expression, ::System::Type* typeOperand, ::System::Linq::Expressions::ExpressionType nodeType);

  /// @brief Method get_Expression, addr 0x5d6d08c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* get_Expression();

  /// @brief Method get_NodeType, addr 0x5d6d084, size 0x8, virtual true, abstract: false, final true
  inline ::System::Linq::Expressions::ExpressionType get_NodeType();

  /// @brief Method get_Type, addr 0x5d6d054, size 0x30, virtual true, abstract: false, final true
  inline ::System::Type* get_Type();

  /// @brief Method get_TypeOperand, addr 0x5d6d094, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_TypeOperand();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeBinaryExpression();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeBinaryExpression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeBinaryExpression(TypeBinaryExpression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeBinaryExpression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeBinaryExpression(TypeBinaryExpression const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16187 };

  /// @brief Field <NodeType>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::System::Linq::Expressions::ExpressionType ____NodeType_k__BackingField;

  /// @brief Field <Expression>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Linq::Expressions::Expression* ____Expression_k__BackingField;

  /// @brief Field <TypeOperand>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Type* ____TypeOperand_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::TypeBinaryExpression, ____NodeType_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::TypeBinaryExpression, ____Expression_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::TypeBinaryExpression, ____TypeOperand_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::TypeBinaryExpression, 0x28>, "Size mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::TypeBinaryExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::TypeBinaryExpression*, "System.Linq.Expressions", "TypeBinaryExpression");
