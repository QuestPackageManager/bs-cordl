#pragma once
// IWYU pragma private; include "System/Linq/Expressions/ExpressionCreator_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ExpressionCreator_1)
namespace System::Collections::ObjectModel {
template <typename T> class ReadOnlyCollection_1;
}
namespace System::Linq::Expressions {
class Expression;
}
namespace System::Linq::Expressions {
class LambdaExpression;
}
namespace System::Linq::Expressions {
class ParameterExpression;
}
// Forward declare root types
namespace System::Linq::Expressions {
template <typename TDelegate> class ExpressionCreator_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Linq::Expressions::ExpressionCreator_1);
// Dependencies System.Object
namespace System::Linq::Expressions {
// cpp template
template <typename TDelegate>
// Is value type: false
// CS Name: System.Linq.Expressions.ExpressionCreator`1<TDelegate>
class CORDL_TYPE ExpressionCreator_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateExpressionFunc, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::LambdaExpression*
  CreateExpressionFunc(::System::Linq::Expressions::Expression* body, ::StringW name, bool tailCall,
                       ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* parameters);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExpressionCreator_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExpressionCreator_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExpressionCreator_1(ExpressionCreator_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExpressionCreator_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExpressionCreator_1(ExpressionCreator_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13691 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq::Expressions
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::Expressions::ExpressionCreator_1, "System.Linq.Expressions", "ExpressionCreator`1");
