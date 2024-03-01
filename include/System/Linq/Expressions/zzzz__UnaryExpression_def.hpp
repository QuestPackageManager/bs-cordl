#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
CORDL_MODULE_EXPORT(UnaryExpression)
namespace System::Linq::Expressions {
class Expression;
}
// Forward declare root types
namespace System::Linq::Expressions {
class UnaryExpression;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::UnaryExpression);
// Type: System.Linq.Expressions::UnaryExpression
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::System.Linq.Expressions::UnaryExpression*
class CORDL_TYPE UnaryExpression : public ::System::Linq::Expressions::Expression {
public:
  // Declarations
  __declspec(property(get = get_Operand))::System::Linq::Expressions::Expression* Operand;

  /// @brief Field <Operand>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Operand_k__BackingField, put = __cordl_internal_set__Operand_k__BackingField))::System::Linq::Expressions::Expression* _Operand_k__BackingField;

  constexpr ::System::Linq::Expressions::Expression*& __cordl_internal_get__Operand_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::Expression*> const& __cordl_internal_get__Operand_k__BackingField() const;

  constexpr void __cordl_internal_set__Operand_k__BackingField(::System::Linq::Expressions::Expression* value);

  /// @brief Method get_Operand, addr 0x28fca68, size 0x8, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* get_Operand();

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

  /// @brief Field <Operand>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Linq::Expressions::Expression* ____Operand_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::UnaryExpression, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::UnaryExpression, ____Operand_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::UnaryExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::UnaryExpression*, "System.Linq.Expressions", "UnaryExpression");
