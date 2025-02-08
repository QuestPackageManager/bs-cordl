#pragma once
// IWYU pragma private; include "System/Linq/Expressions/BinaryExpression.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
CORDL_MODULE_EXPORT(BinaryExpression)
namespace System::Linq::Expressions {
struct ExpressionType;
}
namespace System::Linq::Expressions {
class ExpressionVisitor;
}
namespace System::Linq::Expressions {
class Expression;
}
namespace System::Linq::Expressions {
class LambdaExpression;
}
namespace System::Reflection {
class MethodInfo;
}
// Forward declare root types
namespace System::Linq::Expressions {
class BinaryExpression;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::BinaryExpression);
// Dependencies System.Linq.Expressions.Expression
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.BinaryExpression
class CORDL_TYPE BinaryExpression : public ::System::Linq::Expressions::Expression {
public:
  // Declarations
  __declspec(property(get = get_CanReduce)) bool CanReduce;

  __declspec(property(get = get_Conversion)) ::System::Linq::Expressions::LambdaExpression* Conversion;

  __declspec(property(get = get_IsLifted)) bool IsLifted;

  __declspec(property(get = get_IsLiftedLogical)) bool IsLiftedLogical;

  __declspec(property(get = get_IsLiftedToNull)) bool IsLiftedToNull;

  __declspec(property(get = get_IsReferenceComparison)) bool IsReferenceComparison;

  __declspec(property(get = get_Left)) ::System::Linq::Expressions::Expression* Left;

  __declspec(property(get = get_Method)) ::System::Reflection::MethodInfo* Method;

  __declspec(property(get = get_Right)) ::System::Linq::Expressions::Expression* Right;

  /// @brief Field <Left>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Left_k__BackingField, put = __cordl_internal_set__Left_k__BackingField)) ::System::Linq::Expressions::Expression* _Left_k__BackingField;

  /// @brief Field <Right>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Right_k__BackingField, put = __cordl_internal_set__Right_k__BackingField)) ::System::Linq::Expressions::Expression* _Right_k__BackingField;

  /// @brief Method Accept, addr 0x409a1ec, size 0x28, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* visitor);

  /// @brief Method GetBinaryOpFromAssignmentOp, addr 0x40997f0, size 0x48, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::ExpressionType GetBinaryOpFromAssignmentOp(::System::Linq::Expressions::ExpressionType op);

  /// @brief Method GetConversion, addr 0x409a054, size 0x8, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::LambdaExpression* GetConversion();

  /// @brief Method GetMethod, addr 0x4097dec, size 0x8, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodInfo* GetMethod();

  /// @brief Method IsOpAssignment, addr 0x4097dc0, size 0x10, virtual false, abstract: false, final false
  static inline bool IsOpAssignment(::System::Linq::Expressions::ExpressionType op);

  static inline ::System::Linq::Expressions::BinaryExpression* New_ctor(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right);

  /// @brief Method Reduce, addr 0x4098e04, size 0x78, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* Reduce();

  /// @brief Method ReduceIndex, addr 0x4099290, size 0x45c, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* ReduceIndex();

  /// @brief Method ReduceMember, addr 0x4098e7c, size 0x414, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* ReduceMember();

  /// @brief Method ReduceUserdefinedLifted, addr 0x409a37c, size 0x668, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* ReduceUserdefinedLifted();

  /// @brief Method ReduceVariable, addr 0x40996ec, size 0x104, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* ReduceVariable();

  /// @brief Method Update, addr 0x4097df4, size 0x164, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::BinaryExpression* Update(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::LambdaExpression* conversion,
                                                               ::System::Linq::Expressions::Expression* right);

  constexpr ::System::Linq::Expressions::Expression* const& __cordl_internal_get__Left_k__BackingField() const;

  constexpr ::System::Linq::Expressions::Expression*& __cordl_internal_get__Left_k__BackingField();

  constexpr ::System::Linq::Expressions::Expression* const& __cordl_internal_get__Right_k__BackingField() const;

  constexpr ::System::Linq::Expressions::Expression*& __cordl_internal_get__Right_k__BackingField();

  constexpr void __cordl_internal_set__Left_k__BackingField(::System::Linq::Expressions::Expression* value);

  constexpr void __cordl_internal_set__Right_k__BackingField(::System::Linq::Expressions::Expression* value);

  /// @brief Method .ctor, addr 0x4097d24, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right);

  /// @brief Method get_CanReduce, addr 0x4097d9c, size 0x24, virtual true, abstract: false, final false
  inline bool get_CanReduce();

  /// @brief Method get_Conversion, addr 0x4097f58, size 0xc, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::LambdaExpression* get_Conversion();

  /// @brief Method get_IsLifted, addr 0x409a05c, size 0x190, virtual false, abstract: false, final false
  inline bool get_IsLifted();

  /// @brief Method get_IsLiftedLogical, addr 0x409a214, size 0x168, virtual false, abstract: false, final false
  inline bool get_IsLiftedLogical();

  /// @brief Method get_IsLiftedToNull, addr 0x4098348, size 0x8c, virtual false, abstract: false, final false
  inline bool get_IsLiftedToNull();

  /// @brief Method get_IsReferenceComparison, addr 0x4097f64, size 0xd4, virtual false, abstract: false, final false
  inline bool get_IsReferenceComparison();

  /// @brief Method get_Left, addr 0x4097dd8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* get_Left();

  /// @brief Method get_Method, addr 0x4097de0, size 0xc, virtual false, abstract: false, final false
  inline ::System::Reflection::MethodInfo* get_Method();

  /// @brief Method get_Right, addr 0x4097dd0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* get_Right();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BinaryExpression();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BinaryExpression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BinaryExpression(BinaryExpression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BinaryExpression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BinaryExpression(BinaryExpression const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13611 };

  /// @brief Field <Right>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Linq::Expressions::Expression* ____Right_k__BackingField;

  /// @brief Field <Left>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Linq::Expressions::Expression* ____Left_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::BinaryExpression, ____Right_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::BinaryExpression, ____Left_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::BinaryExpression, 0x20>, "Size mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::BinaryExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::BinaryExpression*, "System.Linq.Expressions", "BinaryExpression");
