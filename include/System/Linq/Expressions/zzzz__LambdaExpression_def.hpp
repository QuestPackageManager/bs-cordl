#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
CORDL_MODULE_EXPORT(LambdaExpression)
namespace System::Linq::Expressions {
class Expression;
}
// Forward declare root types
namespace System::Linq::Expressions {
class LambdaExpression;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::LambdaExpression);
// Type: System.Linq.Expressions::LambdaExpression
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::System.Linq.Expressions::LambdaExpression*
class CORDL_TYPE LambdaExpression : public ::System::Linq::Expressions::Expression {
public:
  // Declarations
  __declspec(property(get = get_Body))::System::Linq::Expressions::Expression* Body;

  /// @brief Field _body, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__body, put = __cordl_internal_set__body))::System::Linq::Expressions::Expression* _body;

  constexpr ::System::Linq::Expressions::Expression*& __cordl_internal_get__body();

  constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::Expression*> const& __cordl_internal_get__body() const;

  constexpr void __cordl_internal_set__body(::System::Linq::Expressions::Expression* value);

  /// @brief Method get_Body, addr 0x29601f4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* get_Body();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LambdaExpression();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LambdaExpression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LambdaExpression(LambdaExpression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LambdaExpression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LambdaExpression(LambdaExpression const&) = delete;

  /// @brief Field _body, offset: 0x10, size: 0x8, def value: None
  ::System::Linq::Expressions::Expression* ____body;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::LambdaExpression, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::LambdaExpression, ____body) == 0x10, "Offset mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::LambdaExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::LambdaExpression*, "System.Linq.Expressions", "LambdaExpression");
