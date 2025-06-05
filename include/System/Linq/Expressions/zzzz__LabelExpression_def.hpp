#pragma once
// IWYU pragma private; include "System/Linq/Expressions/LabelExpression.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
CORDL_MODULE_EXPORT(LabelExpression)
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
class LabelExpression;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::LabelExpression);
// Dependencies System.Linq.Expressions.Expression
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.LabelExpression
class CORDL_TYPE LabelExpression : public ::System::Linq::Expressions::Expression {
public:
  // Declarations
  __declspec(property(get = get_DefaultValue)) ::System::Linq::Expressions::Expression* DefaultValue;

  __declspec(property(get = get_NodeType)) ::System::Linq::Expressions::ExpressionType NodeType;

  __declspec(property(get = get_Target)) ::System::Linq::Expressions::LabelTarget* Target;

  __declspec(property(get = get_Type)) ::System::Type* Type;

  /// @brief Field <DefaultValue>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__DefaultValue_k__BackingField,
                      put = __cordl_internal_set__DefaultValue_k__BackingField)) ::System::Linq::Expressions::Expression* _DefaultValue_k__BackingField;

  /// @brief Field <Target>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Target_k__BackingField, put = __cordl_internal_set__Target_k__BackingField)) ::System::Linq::Expressions::LabelTarget* _Target_k__BackingField;

  /// @brief Method Accept, addr 0x40ba314, size 0x2c, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* visitor);

  static inline ::System::Linq::Expressions::LabelExpression* New_ctor(::System::Linq::Expressions::LabelTarget* label, ::System::Linq::Expressions::Expression* defaultValue);

  /// @brief Method Update, addr 0x40b874c, size 0x98, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::LabelExpression* Update(::System::Linq::Expressions::LabelTarget* target, ::System::Linq::Expressions::Expression* defaultValue);

  constexpr ::System::Linq::Expressions::Expression* const& __cordl_internal_get__DefaultValue_k__BackingField() const;

  constexpr ::System::Linq::Expressions::Expression*& __cordl_internal_get__DefaultValue_k__BackingField();

  constexpr ::System::Linq::Expressions::LabelTarget* const& __cordl_internal_get__Target_k__BackingField() const;

  constexpr ::System::Linq::Expressions::LabelTarget*& __cordl_internal_get__Target_k__BackingField();

  constexpr void __cordl_internal_set__DefaultValue_k__BackingField(::System::Linq::Expressions::Expression* value);

  constexpr void __cordl_internal_set__Target_k__BackingField(::System::Linq::Expressions::LabelTarget* value);

  /// @brief Method .ctor, addr 0x40ba270, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::LabelTarget* label, ::System::Linq::Expressions::Expression* defaultValue);

  /// @brief Method get_DefaultValue, addr 0x40ba30c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* get_DefaultValue();

  /// @brief Method get_NodeType, addr 0x40ba2fc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Linq::Expressions::ExpressionType get_NodeType();

  /// @brief Method get_Target, addr 0x40ba304, size 0x8, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::LabelTarget* get_Target();

  /// @brief Method get_Type, addr 0x40ba2e0, size 0x1c, virtual true, abstract: false, final true
  inline ::System::Type* get_Type();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LabelExpression();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LabelExpression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LabelExpression(LabelExpression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LabelExpression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LabelExpression(LabelExpression const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13688 };

  /// @brief Field <Target>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Linq::Expressions::LabelTarget* ____Target_k__BackingField;

  /// @brief Field <DefaultValue>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Linq::Expressions::Expression* ____DefaultValue_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::LabelExpression, ____Target_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::LabelExpression, ____DefaultValue_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::LabelExpression, 0x20>, "Size mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::LabelExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::LabelExpression*, "System.Linq.Expressions", "LabelExpression");
