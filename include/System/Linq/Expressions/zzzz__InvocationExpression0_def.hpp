#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__InvocationExpression_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: System.Linq.Expressions::InvocationExpression0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::System.Linq.Expressions::InvocationExpression0*
class CORDL_TYPE InvocationExpression0 : public ::System::Linq::Expressions::InvocationExpression {
public:
  // Declarations
  __declspec(property(get = get_ArgumentCount)) int32_t ArgumentCount;

  /// @brief Method GetArgument, addr 0x2b0a630, size 0x50, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* GetArgument(int32_t index);

  static inline ::System::Linq::Expressions::InvocationExpression0* New_ctor(::System::Linq::Expressions::Expression* lambda, ::System::Type* returnType);

  /// @brief Method Rewrite, addr 0x2b0a688, size 0x58, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::InvocationExpression* Rewrite(::System::Linq::Expressions::Expression* lambda,
                                                                    ::ArrayW<::System::Linq::Expressions::Expression*, ::Array<::System::Linq::Expressions::Expression*>*> arguments);

  /// @brief Method .ctor, addr 0x2b0a62c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::Expression* lambda, ::System::Type* returnType);

  /// @brief Method get_ArgumentCount, addr 0x2b0a680, size 0x8, virtual true, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::InvocationExpression0, 0x20>, "Size mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::InvocationExpression0);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::InvocationExpression0*, "System.Linq.Expressions", "InvocationExpression0");
