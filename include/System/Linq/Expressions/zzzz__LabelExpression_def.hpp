#pragma once
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
// Type: System.Linq.Expressions::LabelExpression
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::System.Linq.Expressions::LabelExpression*
class CORDL_TYPE LabelExpression : public ::System::Linq::Expressions::Expression {
public:
  // Declarations
  __declspec(property(get = get_DefaultValue))::System::Linq::Expressions::Expression* DefaultValue;

  __declspec(property(get = get_NodeType))::System::Linq::Expressions::ExpressionType NodeType;

  __declspec(property(get = get_Target))::System::Linq::Expressions::LabelTarget* Target;

  __declspec(property(get = get_Type))::System::Type* Type;

  /// @brief Field <DefaultValue>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__DefaultValue_k__BackingField,
                      put = __cordl_internal_set__DefaultValue_k__BackingField))::System::Linq::Expressions::Expression* _DefaultValue_k__BackingField;

  /// @brief Field <Target>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Target_k__BackingField, put = __cordl_internal_set__Target_k__BackingField))::System::Linq::Expressions::LabelTarget* _Target_k__BackingField;

  /// @brief Method Accept, addr 0x2b0b108, size 0x2c, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* visitor);

  static inline ::System::Linq::Expressions::LabelExpression* New_ctor(::System::Linq::Expressions::LabelTarget* label, ::System::Linq::Expressions::Expression* defaultValue);

  /// @brief Method Update, addr 0x2b09524, size 0x98, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::LabelExpression* Update(::System::Linq::Expressions::LabelTarget* target, ::System::Linq::Expressions::Expression* defaultValue);

  constexpr ::System::Linq::Expressions::Expression*& __cordl_internal_get__DefaultValue_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::Expression*> const& __cordl_internal_get__DefaultValue_k__BackingField() const;

  constexpr ::System::Linq::Expressions::LabelTarget*& __cordl_internal_get__Target_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::LabelTarget*> const& __cordl_internal_get__Target_k__BackingField() const;

  constexpr void __cordl_internal_set__DefaultValue_k__BackingField(::System::Linq::Expressions::Expression* value);

  constexpr void __cordl_internal_set__Target_k__BackingField(::System::Linq::Expressions::LabelTarget* value);

  /// @brief Method .ctor, addr 0x2b0b064, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::LabelTarget* label, ::System::Linq::Expressions::Expression* defaultValue);

  /// @brief Method get_DefaultValue, addr 0x2b0b100, size 0x8, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* get_DefaultValue();

  /// @brief Method get_NodeType, addr 0x2b0b0f0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Linq::Expressions::ExpressionType get_NodeType();

  /// @brief Method get_Target, addr 0x2b0b0f8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::LabelTarget* get_Target();

  /// @brief Method get_Type, addr 0x2b0b0d4, size 0x1c, virtual true, abstract: false, final true
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

  /// @brief Field <Target>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Linq::Expressions::LabelTarget* ____Target_k__BackingField;

  /// @brief Field <DefaultValue>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Linq::Expressions::Expression* ____DefaultValue_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::LabelExpression, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::LabelExpression, ____Target_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::LabelExpression, ____DefaultValue_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::LabelExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::LabelExpression*, "System.Linq.Expressions", "LabelExpression");
