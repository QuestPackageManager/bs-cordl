#pragma once
// IWYU pragma private; include "System/Linq/Expressions/InvocationExpression1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__InvocationExpression_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InvocationExpression1)
namespace System::Linq::Expressions {
class Expression;
}
namespace System::Linq::Expressions {
class InvocationExpression;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions {
class InvocationExpression1;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::InvocationExpression1);
// Dependencies System.Linq.Expressions.InvocationExpression
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.InvocationExpression1
class CORDL_TYPE InvocationExpression1 : public ::System::Linq::Expressions::InvocationExpression {
public:
  // Declarations
  __declspec(property(get = get_ArgumentCount)) int32_t ArgumentCount;

  /// @brief Field _arg0, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__arg0, put = __cordl_internal_set__arg0)) ::System::Object* _arg0;

  /// @brief Method GetArgument, addr 0x40bb1e0, size 0x98, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* GetArgument(int32_t index);

  static inline ::System::Linq::Expressions::InvocationExpression1* New_ctor(::System::Linq::Expressions::Expression* lambda, ::System::Type* returnType,
                                                                             ::System::Linq::Expressions::Expression* arg0);

  /// @brief Method Rewrite, addr 0x40bb280, size 0xb8, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::InvocationExpression* Rewrite(::System::Linq::Expressions::Expression* lambda,
                                                                    ::ArrayW<::System::Linq::Expressions::Expression*, ::Array<::System::Linq::Expressions::Expression*>*> arguments);

  constexpr ::System::Object* const& __cordl_internal_get__arg0() const;

  constexpr ::System::Object*& __cordl_internal_get__arg0();

  constexpr void __cordl_internal_set__arg0(::System::Object* value);

  /// @brief Method .ctor, addr 0x40bb1bc, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::Expression* lambda, ::System::Type* returnType, ::System::Linq::Expressions::Expression* arg0);

  /// @brief Method get_ArgumentCount, addr 0x40bb278, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ArgumentCount();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InvocationExpression1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InvocationExpression1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InvocationExpression1(InvocationExpression1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InvocationExpression1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InvocationExpression1(InvocationExpression1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13681 };

  /// @brief Field _arg0, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ____arg0;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::InvocationExpression1, ____arg0) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::InvocationExpression1, 0x28>, "Size mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::InvocationExpression1);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::InvocationExpression1*, "System.Linq.Expressions", "InvocationExpression1");
