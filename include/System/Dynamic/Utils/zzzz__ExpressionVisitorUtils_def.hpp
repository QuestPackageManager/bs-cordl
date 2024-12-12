#pragma once
// IWYU pragma private; include "System/Dynamic/Utils/ExpressionVisitorUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ExpressionVisitorUtils)
namespace System::Linq::Expressions {
class BlockExpression;
}
namespace System::Linq::Expressions {
class ExpressionVisitor;
}
namespace System::Linq::Expressions {
class Expression;
}
namespace System::Linq::Expressions {
class IArgumentProvider;
}
namespace System::Linq::Expressions {
class IParameterProvider;
}
namespace System::Linq::Expressions {
class ParameterExpression;
}
// Forward declare root types
namespace System::Dynamic::Utils {
class ExpressionVisitorUtils;
}
// Write type traits
MARK_REF_PTR_T(::System::Dynamic::Utils::ExpressionVisitorUtils);
// Dependencies System.Object
namespace System::Dynamic::Utils {
// Is value type: false
// CS Name: System.Dynamic.Utils.ExpressionVisitorUtils
class CORDL_TYPE ExpressionVisitorUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method VisitArguments, addr 0x4102470, size 0x294, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Linq::Expressions::Expression*, ::Array<::System::Linq::Expressions::Expression*>*> VisitArguments(::System::Linq::Expressions::ExpressionVisitor* visitor,
                                                                                                                                      ::System::Linq::Expressions::IArgumentProvider* nodes);

  /// @brief Method VisitBlockExpressions, addr 0x4102018, size 0x1a4, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Linq::Expressions::Expression*, ::Array<::System::Linq::Expressions::Expression*>*> VisitBlockExpressions(::System::Linq::Expressions::ExpressionVisitor* visitor,
                                                                                                                                             ::System::Linq::Expressions::BlockExpression* block);

  /// @brief Method VisitParameters, addr 0x41021bc, size 0x2b4, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Linq::Expressions::ParameterExpression*, ::Array<::System::Linq::Expressions::ParameterExpression*>*>
  VisitParameters(::System::Linq::Expressions::ExpressionVisitor* visitor, ::System::Linq::Expressions::IParameterProvider* nodes, ::StringW callerName);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExpressionVisitorUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExpressionVisitorUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExpressionVisitorUtils(ExpressionVisitorUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExpressionVisitorUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExpressionVisitorUtils(ExpressionVisitorUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14182 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Dynamic::Utils::ExpressionVisitorUtils, 0x10>, "Size mismatch!");

} // namespace System::Dynamic::Utils
NEED_NO_BOX(::System::Dynamic::Utils::ExpressionVisitorUtils);
DEFINE_IL2CPP_ARG_TYPE(::System::Dynamic::Utils::ExpressionVisitorUtils*, "System.Dynamic.Utils", "ExpressionVisitorUtils");
