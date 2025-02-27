#pragma once
// IWYU pragma private; include "System/Linq/Expressions/UnaryExpression.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__ExpressionType_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
CORDL_MODULE_EXPORT(UnaryExpression)
namespace System::Linq::Expressions {
struct ExpressionType;
}
namespace System::Linq::Expressions {
class ExpressionVisitor;
}
namespace System::Linq::Expressions {
class Expression;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions {
class UnaryExpression;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::UnaryExpression);
// Dependencies System.Linq.Expressions.Expression, System.Linq.Expressions.ExpressionType
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.UnaryExpression
class CORDL_TYPE UnaryExpression : public ::System::Linq::Expressions::Expression {
public:
  // Declarations
  __declspec(property(get = get_CanReduce)) bool CanReduce;

  __declspec(property(get = get_IsLifted)) bool IsLifted;

  __declspec(property(get = get_IsLiftedToNull)) bool IsLiftedToNull;

  __declspec(property(get = get_IsPrefix)) bool IsPrefix;

  __declspec(property(get = get_Method)) ::System::Reflection::MethodInfo* Method;

  __declspec(property(get = get_NodeType)) ::System::Linq::Expressions::ExpressionType NodeType;

  __declspec(property(get = get_Operand)) ::System::Linq::Expressions::Expression* Operand;

  __declspec(property(get = get_Type)) ::System::Type* Type;

  /// @brief Field <Method>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__Method_k__BackingField, put = __cordl_internal_set__Method_k__BackingField)) ::System::Reflection::MethodInfo* _Method_k__BackingField;

  /// @brief Field <NodeType>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__NodeType_k__BackingField,
                      put = __cordl_internal_set__NodeType_k__BackingField)) ::System::Linq::Expressions::ExpressionType _NodeType_k__BackingField;

  /// @brief Field <Operand>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Operand_k__BackingField, put = __cordl_internal_set__Operand_k__BackingField)) ::System::Linq::Expressions::Expression* _Operand_k__BackingField;

  /// @brief Field <Type>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Type_k__BackingField, put = __cordl_internal_set__Type_k__BackingField)) ::System::Type* _Type_k__BackingField;

  /// @brief Method Accept, addr 0x40cac20, size 0x2c, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* visitor);

  /// @brief Method FunctionalOp, addr 0x40cbaa4, size 0xcc, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::UnaryExpression* FunctionalOp(::System::Linq::Expressions::Expression* operand);

  static inline ::System::Linq::Expressions::UnaryExpression* New_ctor(::System::Linq::Expressions::ExpressionType nodeType, ::System::Linq::Expressions::Expression* expression, ::System::Type* type,
                                                                       ::System::Reflection::MethodInfo* method);

  /// @brief Method Reduce, addr 0x40cac70, size 0x70, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* Reduce();

  /// @brief Method ReduceIndex, addr 0x40cace0, size 0x5d4, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* ReduceIndex();

  /// @brief Method ReduceMember, addr 0x40cb2b4, size 0x4e4, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* ReduceMember();

  /// @brief Method ReduceVariable, addr 0x40cb798, size 0x2c8, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* ReduceVariable();

  /// @brief Method Update, addr 0x40c65e0, size 0xc0, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::UnaryExpression* Update(::System::Linq::Expressions::Expression* operand);

  constexpr ::System::Reflection::MethodInfo* const& __cordl_internal_get__Method_k__BackingField() const;

  constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get__Method_k__BackingField();

  constexpr ::System::Linq::Expressions::ExpressionType const& __cordl_internal_get__NodeType_k__BackingField() const;

  constexpr ::System::Linq::Expressions::ExpressionType& __cordl_internal_get__NodeType_k__BackingField();

  constexpr ::System::Linq::Expressions::Expression* const& __cordl_internal_get__Operand_k__BackingField() const;

  constexpr ::System::Linq::Expressions::Expression*& __cordl_internal_get__Operand_k__BackingField();

  constexpr ::System::Type* const& __cordl_internal_get__Type_k__BackingField() const;

  constexpr ::System::Type*& __cordl_internal_get__Type_k__BackingField();

  constexpr void __cordl_internal_set__Method_k__BackingField(::System::Reflection::MethodInfo* value);

  constexpr void __cordl_internal_set__NodeType_k__BackingField(::System::Linq::Expressions::ExpressionType value);

  constexpr void __cordl_internal_set__Operand_k__BackingField(::System::Linq::Expressions::Expression* value);

  constexpr void __cordl_internal_set__Type_k__BackingField(::System::Type* value);

  /// @brief Method .ctor, addr 0x40ca8c8, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::ExpressionType nodeType, ::System::Linq::Expressions::Expression* expression, ::System::Type* type, ::System::Reflection::MethodInfo* method);

  /// @brief Method get_CanReduce, addr 0x40cac4c, size 0x24, virtual true, abstract: false, final false
  inline bool get_CanReduce();

  /// @brief Method get_IsLifted, addr 0x40ca970, size 0x224, virtual false, abstract: false, final false
  inline bool get_IsLifted();

  /// @brief Method get_IsLiftedToNull, addr 0x40cab94, size 0x8c, virtual false, abstract: false, final false
  inline bool get_IsLiftedToNull();

  /// @brief Method get_IsPrefix, addr 0x40cba60, size 0x44, virtual false, abstract: false, final false
  inline bool get_IsPrefix();

  /// @brief Method get_Method, addr 0x40ca968, size 0x8, virtual false, abstract: false, final false
  inline ::System::Reflection::MethodInfo* get_Method();

  /// @brief Method get_NodeType, addr 0x40ca958, size 0x8, virtual true, abstract: false, final true
  inline ::System::Linq::Expressions::ExpressionType get_NodeType();

  /// @brief Method get_Operand, addr 0x40ca960, size 0x8, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* get_Operand();

  /// @brief Method get_Type, addr 0x40ca950, size 0x8, virtual true, abstract: false, final true
  inline ::System::Type* get_Type();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnaryExpression();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnaryExpression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnaryExpression(UnaryExpression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnaryExpression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnaryExpression(UnaryExpression const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13741 };

  /// @brief Field <Type>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____Type_k__BackingField;

  /// @brief Field <NodeType>k__BackingField, offset: 0x18, size: 0x4, def value: None
  ::System::Linq::Expressions::ExpressionType ____NodeType_k__BackingField;

  /// @brief Field <Operand>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Linq::Expressions::Expression* ____Operand_k__BackingField;

  /// @brief Field <Method>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ____Method_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::UnaryExpression, ____Type_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::UnaryExpression, ____NodeType_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::UnaryExpression, ____Operand_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::UnaryExpression, ____Method_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::UnaryExpression, 0x30>, "Size mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::UnaryExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::UnaryExpression*, "System.Linq.Expressions", "UnaryExpression");
