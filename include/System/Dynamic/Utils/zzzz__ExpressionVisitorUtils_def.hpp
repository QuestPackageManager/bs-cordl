#pragma once
// IWYU pragma private; include "System/Dynamic/Utils/ExpressionVisitorUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
MARK_REF_T(::System::Dynamic::Utils::ExpressionVisitorUtils*);
DEFINE_IL2CPP_CLASS(::System::Dynamic::Utils::ExpressionVisitorUtils*, "System.Dynamic.Utils", "ExpressionVisitorUtils");
// Dependencies System.Object
namespace System::Dynamic::Utils {
// Is value type: false
// CS Name: System.Dynamic.Utils.ExpressionVisitorUtils
class CORDL_TYPE ExpressionVisitorUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method VisitArguments, addr 0x5fc4a20, size 0x298, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Linq::Expressions::Expression*> VisitArguments(::System::Linq::Expressions::ExpressionVisitor* visitor, ::System::Linq::Expressions::IArgumentProvider* nodes);

  /// @brief Method VisitBlockExpressions, addr 0x5fc45d0, size 0x19c, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Linq::Expressions::Expression*> VisitBlockExpressions(::System::Linq::Expressions::ExpressionVisitor* visitor, ::System::Linq::Expressions::BlockExpression* block);

  /// @brief Method VisitParameters, addr 0x5fc476c, size 0x2b4, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Linq::Expressions::ParameterExpression*> VisitParameters(::System::Linq::Expressions::ExpressionVisitor* visitor,
                                                                                            ::System::Linq::Expressions::IParameterProvider* nodes, ::StringW callerName);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16649 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Dynamic::Utils::ExpressionVisitorUtils) == 0x10, "Size mismatch!");

} // namespace System::Dynamic::Utils
