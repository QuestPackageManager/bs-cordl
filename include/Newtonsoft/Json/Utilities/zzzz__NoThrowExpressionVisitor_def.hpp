#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/NoThrowExpressionVisitor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__ExpressionVisitor_def.hpp"
CORDL_MODULE_EXPORT(NoThrowExpressionVisitor)
namespace System::Linq::Expressions {
class ConditionalExpression;
}
namespace System::Linq::Expressions {
class Expression;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class NoThrowExpressionVisitor;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::NoThrowExpressionVisitor);
// Dependencies System.Linq.Expressions.ExpressionVisitor
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: Newtonsoft.Json.Utilities.NoThrowExpressionVisitor
class CORDL_TYPE NoThrowExpressionVisitor : public ::System::Linq::Expressions::ExpressionVisitor {
public:
  // Declarations
  /// @brief Field ErrorResult, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ErrorResult, put = setStaticF_ErrorResult)) ::System::Object* ErrorResult;

  static inline ::Newtonsoft::Json::Utilities::NoThrowExpressionVisitor* New_ctor();

  /// @brief Method VisitConditional, addr 0x5b11264, size 0x104, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* VisitConditional(::System::Linq::Expressions::ConditionalExpression* node);

  /// @brief Method .ctor, addr 0x5b110e4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Object* getStaticF_ErrorResult();

  static inline void setStaticF_ErrorResult(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoThrowExpressionVisitor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoThrowExpressionVisitor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoThrowExpressionVisitor(NoThrowExpressionVisitor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoThrowExpressionVisitor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoThrowExpressionVisitor(NoThrowExpressionVisitor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13383 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::NoThrowExpressionVisitor, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Utilities
NEED_NO_BOX(::Newtonsoft::Json::Utilities::NoThrowExpressionVisitor);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::NoThrowExpressionVisitor*, "Newtonsoft.Json.Utilities", "NoThrowExpressionVisitor");
