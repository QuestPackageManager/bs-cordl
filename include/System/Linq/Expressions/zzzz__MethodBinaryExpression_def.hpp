#pragma once
// IWYU pragma private; include "System/Linq/Expressions/MethodBinaryExpression.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__SimpleBinaryExpression_def.hpp"
CORDL_MODULE_EXPORT(MethodBinaryExpression)
namespace System::Linq::Expressions {
struct ExpressionType;
}
namespace System::Linq::Expressions {
class Expression;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions {
class MethodBinaryExpression;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::MethodBinaryExpression);
// Type: System.Linq.Expressions::MethodBinaryExpression
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::System.Linq.Expressions::MethodBinaryExpression*
class CORDL_TYPE MethodBinaryExpression : public ::System::Linq::Expressions::SimpleBinaryExpression {
public:
  // Declarations
  /// @brief Field _method, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__method, put = __cordl_internal_set__method))::System::Reflection::MethodInfo* _method;

  /// @brief Method GetMethod, addr 0x2c1a598, size 0x8, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodInfo* GetMethod();

  static inline ::System::Linq::Expressions::MethodBinaryExpression* New_ctor(::System::Linq::Expressions::ExpressionType nodeType, ::System::Linq::Expressions::Expression* left,
                                                                              ::System::Linq::Expressions::Expression* right, ::System::Type* type, ::System::Reflection::MethodInfo* method);

  constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get__method();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodInfo*> const& __cordl_internal_get__method() const;

  constexpr void __cordl_internal_set__method(::System::Reflection::MethodInfo* value);

  /// @brief Method .ctor, addr 0x2c1a50c, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::ExpressionType nodeType, ::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Type* type,
                    ::System::Reflection::MethodInfo* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MethodBinaryExpression();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MethodBinaryExpression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MethodBinaryExpression(MethodBinaryExpression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MethodBinaryExpression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MethodBinaryExpression(MethodBinaryExpression const&) = delete;

  /// @brief Field _method, offset: 0x30, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ____method;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::MethodBinaryExpression, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::MethodBinaryExpression, ____method) == 0x30, "Offset mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::MethodBinaryExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::MethodBinaryExpression*, "System.Linq.Expressions", "MethodBinaryExpression");
