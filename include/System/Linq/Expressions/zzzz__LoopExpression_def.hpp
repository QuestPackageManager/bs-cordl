#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
CORDL_MODULE_EXPORT(LoopExpression)
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
class LabelTarget;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions {
class LoopExpression;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::LoopExpression);
// Type: System.Linq.Expressions::LoopExpression
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::System.Linq.Expressions::LoopExpression*
class CORDL_TYPE LoopExpression : public ::System::Linq::Expressions::Expression {
public:
  // Declarations
  __declspec(property(get = get_Body))::System::Linq::Expressions::Expression* Body;

  __declspec(property(get = get_BreakLabel))::System::Linq::Expressions::LabelTarget* BreakLabel;

  __declspec(property(get = get_ContinueLabel))::System::Linq::Expressions::LabelTarget* ContinueLabel;

  __declspec(property(get = get_NodeType))::System::Linq::Expressions::ExpressionType NodeType;

  __declspec(property(get = get_Type))::System::Type* Type;

  /// @brief Field <Body>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Body_k__BackingField, put = __cordl_internal_set__Body_k__BackingField))::System::Linq::Expressions::Expression* _Body_k__BackingField;

  /// @brief Field <BreakLabel>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__BreakLabel_k__BackingField,
                      put = __cordl_internal_set__BreakLabel_k__BackingField))::System::Linq::Expressions::LabelTarget* _BreakLabel_k__BackingField;

  /// @brief Field <ContinueLabel>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__ContinueLabel_k__BackingField,
                      put = __cordl_internal_set__ContinueLabel_k__BackingField))::System::Linq::Expressions::LabelTarget* _ContinueLabel_k__BackingField;

  /// @brief Method Accept, addr 0x2c09dac, size 0x2c, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* visitor);

  static inline ::System::Linq::Expressions::LoopExpression* New_ctor(::System::Linq::Expressions::Expression* body, ::System::Linq::Expressions::LabelTarget* _cordl_break,
                                                                      ::System::Linq::Expressions::LabelTarget* _cordl_continue);

  /// @brief Method Update, addr 0x2c07f3c, size 0xac, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::LoopExpression* Update(::System::Linq::Expressions::LabelTarget* breakLabel, ::System::Linq::Expressions::LabelTarget* continueLabel,
                                                             ::System::Linq::Expressions::Expression* body);

  constexpr ::System::Linq::Expressions::Expression*& __cordl_internal_get__Body_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::Expression*> const& __cordl_internal_get__Body_k__BackingField() const;

  constexpr ::System::Linq::Expressions::LabelTarget*& __cordl_internal_get__BreakLabel_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::LabelTarget*> const& __cordl_internal_get__BreakLabel_k__BackingField() const;

  constexpr ::System::Linq::Expressions::LabelTarget*& __cordl_internal_get__ContinueLabel_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::LabelTarget*> const& __cordl_internal_get__ContinueLabel_k__BackingField() const;

  constexpr void __cordl_internal_set__Body_k__BackingField(::System::Linq::Expressions::Expression* value);

  constexpr void __cordl_internal_set__BreakLabel_k__BackingField(::System::Linq::Expressions::LabelTarget* value);

  constexpr void __cordl_internal_set__ContinueLabel_k__BackingField(::System::Linq::Expressions::LabelTarget* value);

  /// @brief Method .ctor, addr 0x2c09c84, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::Expression* body, ::System::Linq::Expressions::LabelTarget* _cordl_break, ::System::Linq::Expressions::LabelTarget* _cordl_continue);

  /// @brief Method get_Body, addr 0x2c09d94, size 0x8, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* get_Body();

  /// @brief Method get_BreakLabel, addr 0x2c09d9c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::LabelTarget* get_BreakLabel();

  /// @brief Method get_ContinueLabel, addr 0x2c09da4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::LabelTarget* get_ContinueLabel();

  /// @brief Method get_NodeType, addr 0x2c09d8c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Linq::Expressions::ExpressionType get_NodeType();

  /// @brief Method get_Type, addr 0x2c09d04, size 0x88, virtual true, abstract: false, final true
  inline ::System::Type* get_Type();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LoopExpression();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LoopExpression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LoopExpression(LoopExpression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LoopExpression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LoopExpression(LoopExpression const&) = delete;

  /// @brief Field <Body>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Linq::Expressions::Expression* ____Body_k__BackingField;

  /// @brief Field <BreakLabel>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Linq::Expressions::LabelTarget* ____BreakLabel_k__BackingField;

  /// @brief Field <ContinueLabel>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Linq::Expressions::LabelTarget* ____ContinueLabel_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::LoopExpression, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::LoopExpression, ____Body_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::LoopExpression, ____BreakLabel_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::LoopExpression, ____ContinueLabel_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::LoopExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::LoopExpression*, "System.Linq.Expressions", "LoopExpression");
