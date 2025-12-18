#pragma once
// IWYU pragma private; include "System/Linq/Expressions/OpAssignMethodConversionBinaryExpression.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__MethodBinaryExpression_def.hpp"
CORDL_MODULE_EXPORT(OpAssignMethodConversionBinaryExpression)
namespace System::Linq::Expressions {
struct ExpressionType;
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
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions {
class OpAssignMethodConversionBinaryExpression;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::OpAssignMethodConversionBinaryExpression);
// Dependencies System.Linq.Expressions.MethodBinaryExpression
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.OpAssignMethodConversionBinaryExpression
class CORDL_TYPE OpAssignMethodConversionBinaryExpression : public ::System::Linq::Expressions::MethodBinaryExpression {
public:
  // Declarations
  /// @brief Field _conversion, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__conversion, put = __cordl_internal_set__conversion)) ::System::Linq::Expressions::LambdaExpression* _conversion;

  /// @brief Method GetConversion, addr 0x5dae56c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::LambdaExpression* GetConversion();

  static inline ::System::Linq::Expressions::OpAssignMethodConversionBinaryExpression* New_ctor(::System::Linq::Expressions::ExpressionType nodeType, ::System::Linq::Expressions::Expression* left,
                                                                                                ::System::Linq::Expressions::Expression* right, ::System::Type* type,
                                                                                                ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::LambdaExpression* conversion);

  constexpr ::System::Linq::Expressions::LambdaExpression* const& __cordl_internal_get__conversion() const;

  constexpr ::System::Linq::Expressions::LambdaExpression*& __cordl_internal_get__conversion();

  constexpr void __cordl_internal_set__conversion(::System::Linq::Expressions::LambdaExpression* value);

  /// @brief Method .ctor, addr 0x5dae4e4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::ExpressionType nodeType, ::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Type* type,
                    ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::LambdaExpression* conversion);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpAssignMethodConversionBinaryExpression();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OpAssignMethodConversionBinaryExpression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpAssignMethodConversionBinaryExpression(OpAssignMethodConversionBinaryExpression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpAssignMethodConversionBinaryExpression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpAssignMethodConversionBinaryExpression(OpAssignMethodConversionBinaryExpression const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16077 };

  /// @brief Field _conversion, offset: 0x38, size: 0x8, def value: None
  ::System::Linq::Expressions::LambdaExpression* ____conversion;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::OpAssignMethodConversionBinaryExpression, ____conversion) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::OpAssignMethodConversionBinaryExpression, 0x40>, "Size mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::OpAssignMethodConversionBinaryExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::OpAssignMethodConversionBinaryExpression*, "System.Linq.Expressions", "OpAssignMethodConversionBinaryExpression");
