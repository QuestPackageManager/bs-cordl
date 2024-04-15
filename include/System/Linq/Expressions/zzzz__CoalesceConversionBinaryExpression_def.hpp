#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__BinaryExpression_def.hpp"
CORDL_MODULE_EXPORT(CoalesceConversionBinaryExpression)
namespace System::Linq::Expressions {
struct ExpressionType;
}
namespace System::Linq::Expressions {
class Expression;
}
namespace System::Linq::Expressions {
class LambdaExpression;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions {
class CoalesceConversionBinaryExpression;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::CoalesceConversionBinaryExpression);
// Type: System.Linq.Expressions::CoalesceConversionBinaryExpression
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::System.Linq.Expressions::CoalesceConversionBinaryExpression*
class CORDL_TYPE CoalesceConversionBinaryExpression : public ::System::Linq::Expressions::BinaryExpression {
public:
  // Declarations
  __declspec(property(get = get_NodeType))::System::Linq::Expressions::ExpressionType NodeType;

  __declspec(property(get = get_Type))::System::Type* Type;

  /// @brief Field _conversion, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__conversion, put = __cordl_internal_set__conversion))::System::Linq::Expressions::LambdaExpression* _conversion;

  /// @brief Method GetConversion, addr 0x2ae8a90, size 0x8, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::LambdaExpression* GetConversion();

  static inline ::System::Linq::Expressions::CoalesceConversionBinaryExpression* New_ctor(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                                          ::System::Linq::Expressions::LambdaExpression* conversion);

  constexpr ::System::Linq::Expressions::LambdaExpression*& __cordl_internal_get__conversion();

  constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::LambdaExpression*> const& __cordl_internal_get__conversion() const;

  constexpr void __cordl_internal_set__conversion(::System::Linq::Expressions::LambdaExpression* value);

  /// @brief Method .ctor, addr 0x2ae8a6c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Linq::Expressions::LambdaExpression* conversion);

  /// @brief Method get_NodeType, addr 0x2ae8a98, size 0x8, virtual true, abstract: false, final true
  inline ::System::Linq::Expressions::ExpressionType get_NodeType();

  /// @brief Method get_Type, addr 0x2ae8aa0, size 0x20, virtual true, abstract: false, final true
  inline ::System::Type* get_Type();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CoalesceConversionBinaryExpression();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CoalesceConversionBinaryExpression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CoalesceConversionBinaryExpression(CoalesceConversionBinaryExpression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CoalesceConversionBinaryExpression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CoalesceConversionBinaryExpression(CoalesceConversionBinaryExpression const&) = delete;

  /// @brief Field _conversion, offset: 0x20, size: 0x8, def value: None
  ::System::Linq::Expressions::LambdaExpression* ____conversion;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::CoalesceConversionBinaryExpression, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::CoalesceConversionBinaryExpression, ____conversion) == 0x20, "Offset mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::CoalesceConversionBinaryExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::CoalesceConversionBinaryExpression*, "System.Linq.Expressions", "CoalesceConversionBinaryExpression");
