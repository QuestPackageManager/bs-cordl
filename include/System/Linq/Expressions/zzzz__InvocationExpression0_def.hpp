#pragma once
// IWYU pragma private; include "System/Linq/Expressions/InvocationExpression0.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__InvocationExpression_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InvocationExpression0)
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
class InvocationExpression0;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::InvocationExpression0);
// Dependencies System.Linq.Expressions.InvocationExpression
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.InvocationExpression0
class CORDL_TYPE InvocationExpression0 : public ::System::Linq::Expressions::InvocationExpression {
public:
  // Declarations
  __declspec(property(get = get_ArgumentCount)) int32_t ArgumentCount;

  /// @brief Method GetArgument, addr 0x40b4958, size 0x4c, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* GetArgument(int32_t index);

  static inline ::System::Linq::Expressions::InvocationExpression0* New_ctor(::System::Linq::Expressions::Expression* lambda, ::System::Type* returnType);

  /// @brief Method Rewrite, addr 0x40b49ac, size 0x58, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::InvocationExpression* Rewrite(::System::Linq::Expressions::Expression* lambda,
                                                                    ::ArrayW<::System::Linq::Expressions::Expression*, ::Array<::System::Linq::Expressions::Expression*>*> arguments);

  /// @brief Method .ctor, addr 0x40b4954, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::Expression* lambda, ::System::Type* returnType);

  /// @brief Method get_ArgumentCount, addr 0x40b49a4, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ArgumentCount();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InvocationExpression0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InvocationExpression0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InvocationExpression0(InvocationExpression0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InvocationExpression0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InvocationExpression0(InvocationExpression0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13680 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::InvocationExpression0, 0x20>, "Size mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::InvocationExpression0);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::InvocationExpression0*, "System.Linq.Expressions", "InvocationExpression0");
