#pragma once
// IWYU pragma private; include "System/Linq/Expressions/FullConditionalExpression.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__ConditionalExpression_def.hpp"
CORDL_MODULE_EXPORT(FullConditionalExpression)
namespace System::Linq::Expressions {
class Expression;
}
// Forward declare root types
namespace System::Linq::Expressions {
class FullConditionalExpression;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::FullConditionalExpression);
// Type: System.Linq.Expressions::FullConditionalExpression
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::System.Linq.Expressions::FullConditionalExpression*
class CORDL_TYPE FullConditionalExpression : public ::System::Linq::Expressions::ConditionalExpression {
public:
  // Declarations
  /// @brief Field _false, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__false, put = __cordl_internal_set__false))::System::Linq::Expressions::Expression* _false;

  /// @brief Method GetFalse, addr 0x2c336ac, size 0x8, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* GetFalse();

  static inline ::System::Linq::Expressions::FullConditionalExpression* New_ctor(::System::Linq::Expressions::Expression* test, ::System::Linq::Expressions::Expression* ifTrue,
                                                                                 ::System::Linq::Expressions::Expression* ifFalse);

  constexpr ::System::Linq::Expressions::Expression*& __cordl_internal_get__false();

  constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::Expression*> const& __cordl_internal_get__false() const;

  constexpr void __cordl_internal_set__false(::System::Linq::Expressions::Expression* value);

  /// @brief Method .ctor, addr 0x2c334f0, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::Expression* test, ::System::Linq::Expressions::Expression* ifTrue, ::System::Linq::Expressions::Expression* ifFalse);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FullConditionalExpression();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FullConditionalExpression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FullConditionalExpression(FullConditionalExpression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FullConditionalExpression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FullConditionalExpression(FullConditionalExpression const&) = delete;

  /// @brief Field _false, offset: 0x20, size: 0x8, def value: None
  ::System::Linq::Expressions::Expression* ____false;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::FullConditionalExpression, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::FullConditionalExpression, ____false) == 0x20, "Offset mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::FullConditionalExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::FullConditionalExpression*, "System.Linq.Expressions", "FullConditionalExpression");
