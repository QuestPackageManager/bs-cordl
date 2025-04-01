#pragma once
// IWYU pragma private; include "System/Linq/Expressions/ExpressionVisitor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ExpressionVisitor)
namespace System::Collections::ObjectModel {
template <typename T> class ReadOnlyCollection_1;
}
namespace System::Linq::Expressions {
class BinaryExpression;
}
namespace System::Linq::Expressions {
class BlockExpression;
}
namespace System::Linq::Expressions {
class CatchBlock;
}
namespace System::Linq::Expressions {
class ConditionalExpression;
}
namespace System::Linq::Expressions {
class ConstantExpression;
}
namespace System::Linq::Expressions {
class DefaultExpression;
}
namespace System::Linq::Expressions {
template <typename TDelegate> class Expression_1;
}
namespace System::Linq::Expressions {
class Expression;
}
namespace System::Linq::Expressions {
class GotoExpression;
}
namespace System::Linq::Expressions {
class IArgumentProvider;
}
namespace System::Linq::Expressions {
class IParameterProvider;
}
namespace System::Linq::Expressions {
class IndexExpression;
}
namespace System::Linq::Expressions {
class InvocationExpression;
}
namespace System::Linq::Expressions {
class LabelExpression;
}
namespace System::Linq::Expressions {
class LabelTarget;
}
namespace System::Linq::Expressions {
class LoopExpression;
}
namespace System::Linq::Expressions {
class MemberExpression;
}
namespace System::Linq::Expressions {
class MethodCallExpression;
}
namespace System::Linq::Expressions {
class NewArrayExpression;
}
namespace System::Linq::Expressions {
class ParameterExpression;
}
namespace System::Linq::Expressions {
class TryExpression;
}
namespace System::Linq::Expressions {
class TypeBinaryExpression;
}
namespace System::Linq::Expressions {
class UnaryExpression;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions {
class ExpressionVisitor;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::ExpressionVisitor);
// Dependencies System.Object
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.ExpressionVisitor
class CORDL_TYPE ExpressionVisitor : public ::System::Object {
public:
  // Declarations
  static inline ::System::Linq::Expressions::ExpressionVisitor* New_ctor();

  /// @brief Method ValidateBinary, addr 0x40b3334, size 0x168, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* ValidateBinary(::System::Linq::Expressions::BinaryExpression* before, ::System::Linq::Expressions::BinaryExpression* after);

  /// @brief Method ValidateChildType, addr 0x40b436c, size 0xcc, virtual false, abstract: false, final false
  static inline void ValidateChildType(::System::Type* before, ::System::Type* after, ::StringW methodName);

  /// @brief Method ValidateUnary, addr 0x40b4260, size 0x10c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* ValidateUnary(::System::Linq::Expressions::UnaryExpression* before, ::System::Linq::Expressions::UnaryExpression* after);

  /// @brief Method Visit, addr 0x40b3020, size 0x22c, virtual false, abstract: false, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*
  Visit(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* nodes);

  /// @brief Method Visit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<T>* Visit(::System::Collections::ObjectModel::ReadOnlyCollection_1<T>* nodes, ::System::Func_2<T, T>* elementVisitor);

  /// @brief Method Visit, addr 0x40b2ffc, size 0x24, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* Visit(::System::Linq::Expressions::Expression* node);

  /// @brief Method VisitAndConvert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<T>* VisitAndConvert(::System::Collections::ObjectModel::ReadOnlyCollection_1<T>* nodes, ::StringW callerName);

  /// @brief Method VisitAndConvert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T VisitAndConvert(T node, ::StringW callerName);

  /// @brief Method VisitArguments, addr 0x40b324c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Linq::Expressions::Expression*, ::Array<::System::Linq::Expressions::Expression*>*> VisitArguments(::System::Linq::Expressions::IArgumentProvider* nodes);

  /// @brief Method VisitBinary, addr 0x40b325c, size 0xd8, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* VisitBinary(::System::Linq::Expressions::BinaryExpression* node);

  /// @brief Method VisitBlock, addr 0x40b349c, size 0xf4, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* VisitBlock(::System::Linq::Expressions::BlockExpression* node);

  /// @brief Method VisitCatchBlock, addr 0x40b3dc8, size 0xbc, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::CatchBlock* VisitCatchBlock(::System::Linq::Expressions::CatchBlock* node);

  /// @brief Method VisitConditional, addr 0x40b3590, size 0x8c, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* VisitConditional(::System::Linq::Expressions::ConditionalExpression* node);

  /// @brief Method VisitConstant, addr 0x40b361c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* VisitConstant(::System::Linq::Expressions::ConstantExpression* node);

  /// @brief Method VisitDefault, addr 0x40b3624, size 0x8, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* VisitDefault(::System::Linq::Expressions::DefaultExpression* node);

  /// @brief Method VisitExtension, addr 0x40b362c, size 0x28, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* VisitExtension(::System::Linq::Expressions::Expression* node);

  /// @brief Method VisitGoto, addr 0x40b3654, size 0x5c, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* VisitGoto(::System::Linq::Expressions::GotoExpression* node);

  /// @brief Method VisitIndex, addr 0x40b3adc, size 0x74, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* VisitIndex(::System::Linq::Expressions::IndexExpression* node);

  /// @brief Method VisitInvocation, addr 0x40b376c, size 0x80, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* VisitInvocation(::System::Linq::Expressions::InvocationExpression* node);

  /// @brief Method VisitLabel, addr 0x40b37f4, size 0x5c, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* VisitLabel(::System::Linq::Expressions::LabelExpression* node);

  /// @brief Method VisitLabelTarget, addr 0x40b37ec, size 0x8, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::LabelTarget* VisitLabelTarget(::System::Linq::Expressions::LabelTarget* node);

  /// @brief Method VisitLambda, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename T> inline ::System::Linq::Expressions::Expression* VisitLambda(::System::Linq::Expressions::Expression_1<T>* node);

  /// @brief Method VisitLoop, addr 0x40b38e8, size 0x84, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* VisitLoop(::System::Linq::Expressions::LoopExpression* node);

  /// @brief Method VisitMember, addr 0x40b3a18, size 0x30, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* VisitMember(::System::Linq::Expressions::MemberExpression* node);

  /// @brief Method VisitMethodCall, addr 0x40b3bcc, size 0xa4, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* VisitMethodCall(::System::Linq::Expressions::MethodCallExpression* node);

  /// @brief Method VisitNewArray, addr 0x40b3c70, size 0x28, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* VisitNewArray(::System::Linq::Expressions::NewArrayExpression* node);

  /// @brief Method VisitParameter, addr 0x40b3dc0, size 0x8, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* VisitParameter(::System::Linq::Expressions::ParameterExpression* node);

  /// @brief Method VisitParameters, addr 0x40b3254, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Linq::Expressions::ParameterExpression*, ::Array<::System::Linq::Expressions::ParameterExpression*>*>
  VisitParameters(::System::Linq::Expressions::IParameterProvider* nodes, ::StringW callerName);

  /// @brief Method VisitTry, addr 0x40b3e84, size 0x104, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* VisitTry(::System::Linq::Expressions::TryExpression* node);

  /// @brief Method VisitTypeBinary, addr 0x40b4084, size 0x30, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* VisitTypeBinary(::System::Linq::Expressions::TypeBinaryExpression* node);

  /// @brief Method VisitUnary, addr 0x40b4164, size 0x3c, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* VisitUnary(::System::Linq::Expressions::UnaryExpression* node);

  /// @brief Method .ctor, addr 0x40b0c90, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExpressionVisitor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExpressionVisitor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExpressionVisitor(ExpressionVisitor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExpressionVisitor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExpressionVisitor(ExpressionVisitor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13672 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::ExpressionVisitor, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::ExpressionVisitor);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::ExpressionVisitor*, "System.Linq.Expressions", "ExpressionVisitor");
