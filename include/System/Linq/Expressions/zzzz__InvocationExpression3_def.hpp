#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__InvocationExpression_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InvocationExpression3)
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
class InvocationExpression3;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::InvocationExpression3);
// Type: System.Linq.Expressions::InvocationExpression3
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::System.Linq.Expressions::InvocationExpression3*
class CORDL_TYPE InvocationExpression3 : public ::System::Linq::Expressions::InvocationExpression {
public:
  // Declarations
  __declspec(property(get = get_ArgumentCount)) int32_t ArgumentCount;

  /// @brief Field _arg0, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__arg0, put = __cordl_internal_set__arg0))::System::Object* _arg0;

  /// @brief Field _arg1, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__arg1, put = __cordl_internal_set__arg1))::System::Linq::Expressions::Expression* _arg1;

  /// @brief Field _arg2, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__arg2, put = __cordl_internal_set__arg2))::System::Linq::Expressions::Expression* _arg2;

  /// @brief Method GetArgument, addr 0x2b0ba40, size 0xc4, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* GetArgument(int32_t index);

  static inline ::System::Linq::Expressions::InvocationExpression3* New_ctor(::System::Linq::Expressions::Expression* lambda, ::System::Type* returnType, ::System::Linq::Expressions::Expression* arg0,
                                                                             ::System::Linq::Expressions::Expression* arg1, ::System::Linq::Expressions::Expression* arg2);

  /// @brief Method Rewrite, addr 0x2b0bb0c, size 0xe8, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::InvocationExpression* Rewrite(::System::Linq::Expressions::Expression* lambda,
                                                                    ::ArrayW<::System::Linq::Expressions::Expression*, ::Array<::System::Linq::Expressions::Expression*>*> arguments);

  constexpr ::System::Object*& __cordl_internal_get__arg0();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__arg0() const;

  constexpr ::System::Linq::Expressions::Expression*& __cordl_internal_get__arg1();

  constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::Expression*> const& __cordl_internal_get__arg1() const;

  constexpr ::System::Linq::Expressions::Expression*& __cordl_internal_get__arg2();

  constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::Expression*> const& __cordl_internal_get__arg2() const;

  constexpr void __cordl_internal_set__arg0(::System::Object* value);

  constexpr void __cordl_internal_set__arg1(::System::Linq::Expressions::Expression* value);

  constexpr void __cordl_internal_set__arg2(::System::Linq::Expressions::Expression* value);

  /// @brief Method .ctor, addr 0x2b0ba08, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::Expression* lambda, ::System::Type* returnType, ::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1,
                    ::System::Linq::Expressions::Expression* arg2);

  /// @brief Method get_ArgumentCount, addr 0x2b0bb04, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ArgumentCount();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InvocationExpression3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InvocationExpression3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InvocationExpression3(InvocationExpression3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InvocationExpression3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InvocationExpression3(InvocationExpression3 const&) = delete;

  /// @brief Field _arg0, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ____arg0;

  /// @brief Field _arg1, offset: 0x28, size: 0x8, def value: None
  ::System::Linq::Expressions::Expression* ____arg1;

  /// @brief Field _arg2, offset: 0x30, size: 0x8, def value: None
  ::System::Linq::Expressions::Expression* ____arg2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::InvocationExpression3, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::InvocationExpression3, ____arg0) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::InvocationExpression3, ____arg1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::InvocationExpression3, ____arg2) == 0x30, "Offset mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::InvocationExpression3);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::InvocationExpression3*, "System.Linq.Expressions", "InvocationExpression3");
