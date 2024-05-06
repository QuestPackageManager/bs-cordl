#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__InvocationExpression_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InvocationExpression2)
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
class InvocationExpression2;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::InvocationExpression2);
// Type: System.Linq.Expressions::InvocationExpression2
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::System.Linq.Expressions::InvocationExpression2*
class CORDL_TYPE InvocationExpression2 : public ::System::Linq::Expressions::InvocationExpression {
public:
  // Declarations
  __declspec(property(get = get_ArgumentCount)) int32_t ArgumentCount;

  /// @brief Field _arg0, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__arg0, put = __cordl_internal_set__arg0))::System::Object* _arg0;

  /// @brief Field _arg1, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__arg1, put = __cordl_internal_set__arg1))::System::Linq::Expressions::Expression* _arg1;

  /// @brief Method GetArgument, addr 0x2c09184, size 0xb4, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* GetArgument(int32_t index);

  static inline ::System::Linq::Expressions::InvocationExpression2* New_ctor(::System::Linq::Expressions::Expression* lambda, ::System::Type* returnType, ::System::Linq::Expressions::Expression* arg0,
                                                                             ::System::Linq::Expressions::Expression* arg1);

  /// @brief Method Rewrite, addr 0x2c09240, size 0xc8, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::InvocationExpression* Rewrite(::System::Linq::Expressions::Expression* lambda,
                                                                    ::ArrayW<::System::Linq::Expressions::Expression*, ::Array<::System::Linq::Expressions::Expression*>*> arguments);

  constexpr ::System::Object*& __cordl_internal_get__arg0();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__arg0() const;

  constexpr ::System::Linq::Expressions::Expression*& __cordl_internal_get__arg1();

  constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::Expression*> const& __cordl_internal_get__arg1() const;

  constexpr void __cordl_internal_set__arg0(::System::Object* value);

  constexpr void __cordl_internal_set__arg1(::System::Linq::Expressions::Expression* value);

  /// @brief Method .ctor, addr 0x2c0915c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::Expression* lambda, ::System::Type* returnType, ::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1);

  /// @brief Method get_ArgumentCount, addr 0x2c09238, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ArgumentCount();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InvocationExpression2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InvocationExpression2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InvocationExpression2(InvocationExpression2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InvocationExpression2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InvocationExpression2(InvocationExpression2 const&) = delete;

  /// @brief Field _arg0, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ____arg0;

  /// @brief Field _arg1, offset: 0x28, size: 0x8, def value: None
  ::System::Linq::Expressions::Expression* ____arg1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::InvocationExpression2, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::InvocationExpression2, ____arg0) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::InvocationExpression2, ____arg1) == 0x28, "Offset mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::InvocationExpression2);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::InvocationExpression2*, "System.Linq.Expressions", "InvocationExpression2");
