#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__LambdaExpression_def.hpp"
CORDL_MODULE_EXPORT(Expression_1)
// Forward declare root types
namespace System::Linq::Expressions {
template <typename TDelegate> class Expression_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Linq::Expressions::Expression_1);
// Type: System.Linq.Expressions::Expression`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// cpp template
template <typename TDelegate>
// Is value type: false
// CS Name: ::System.Linq.Expressions::Expression`1<TDelegate>*
class CORDL_TYPE Expression_1 : public ::System::Linq::Expressions::LambdaExpression {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Expression_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Expression_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_1(Expression_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_1(Expression_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq::Expressions
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::Expressions::Expression_1, "System.Linq.Expressions", "Expression`1");
