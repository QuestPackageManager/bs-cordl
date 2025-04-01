#pragma once
// IWYU pragma private; include "System/Linq/Expressions/InvocationExpressionN.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__InvocationExpression_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InvocationExpressionN)
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Linq::Expressions {
class Expression;
}
namespace System::Linq::Expressions {
class InvocationExpression;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions {
class InvocationExpressionN;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::InvocationExpressionN);
// Dependencies System.Linq.Expressions.InvocationExpression
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.InvocationExpressionN
class CORDL_TYPE InvocationExpressionN : public ::System::Linq::Expressions::InvocationExpression {
public:
  // Declarations
  __declspec(property(get = get_ArgumentCount)) int32_t ArgumentCount;

  /// @brief Field _arguments, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__arguments,
                      put = __cordl_internal_set__arguments)) ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* _arguments;

  /// @brief Method GetArgument, addr 0x40b4798, size 0xa8, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* GetArgument(int32_t index);

  static inline ::System::Linq::Expressions::InvocationExpressionN*
  New_ctor(::System::Linq::Expressions::Expression* lambda, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* arguments, ::System::Type* returnType);

  /// @brief Method Rewrite, addr 0x40b48e0, size 0x74, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::InvocationExpression* Rewrite(::System::Linq::Expressions::Expression* lambda,
                                                                    ::ArrayW<::System::Linq::Expressions::Expression*, ::Array<::System::Linq::Expressions::Expression*>*> arguments);

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* const& __cordl_internal_get__arguments() const;

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*& __cordl_internal_get__arguments();

  constexpr void __cordl_internal_set__arguments(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* value);

  /// @brief Method .ctor, addr 0x40b4770, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::Expression* lambda, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* arguments, ::System::Type* returnType);

  /// @brief Method get_ArgumentCount, addr 0x40b4840, size 0xa0, virtual true, abstract: false, final false
  inline int32_t get_ArgumentCount();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InvocationExpressionN();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InvocationExpressionN", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InvocationExpressionN(InvocationExpressionN&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InvocationExpressionN", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InvocationExpressionN(InvocationExpressionN const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13679 };

  /// @brief Field _arguments, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* ____arguments;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::InvocationExpressionN, ____arguments) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::InvocationExpressionN, 0x28>, "Size mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::InvocationExpressionN);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::InvocationExpressionN*, "System.Linq.Expressions", "InvocationExpressionN");
