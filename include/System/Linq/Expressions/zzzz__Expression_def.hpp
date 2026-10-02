#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Expression.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__ExpressionType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Expression)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::ObjectModel {
template <typename T> class ReadOnlyCollection_1;
}
namespace System::Dynamic::Utils {
template <typename TKey, typename TValue> class CacheDict_2;
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
struct ExpressionType;
}
namespace System::Linq::Expressions {
class ExpressionVisitor;
}
namespace System::Linq::Expressions {
template <typename TDelegate> class Expression_1;
}
namespace System::Linq::Expressions {
class Expression_BinaryExpressionProxy;
}
namespace System::Linq::Expressions {
class Expression_BlockExpressionProxy;
}
namespace System::Linq::Expressions {
class Expression_CatchBlockProxy;
}
namespace System::Linq::Expressions {
class Expression_ConditionalExpressionProxy;
}
namespace System::Linq::Expressions {
class Expression_ConstantExpressionProxy;
}
namespace System::Linq::Expressions {
class Expression_DebugInfoExpressionProxy;
}
namespace System::Linq::Expressions {
class Expression_DefaultExpressionProxy;
}
namespace System::Linq::Expressions {
class Expression_ExtensionInfo;
}
namespace System::Linq::Expressions {
class Expression_GotoExpressionProxy;
}
namespace System::Linq::Expressions {
class Expression_IndexExpressionProxy;
}
namespace System::Linq::Expressions {
class Expression_InvocationExpressionProxy;
}
namespace System::Linq::Expressions {
class Expression_LabelExpressionProxy;
}
namespace System::Linq::Expressions {
class Expression_LambdaExpressionProxy;
}
namespace System::Linq::Expressions {
class Expression_ListInitExpressionProxy;
}
namespace System::Linq::Expressions {
class Expression_LoopExpressionProxy;
}
namespace System::Linq::Expressions {
class Expression_MemberExpressionProxy;
}
namespace System::Linq::Expressions {
class Expression_MemberInitExpressionProxy;
}
namespace System::Linq::Expressions {
class Expression_MethodCallExpressionProxy;
}
namespace System::Linq::Expressions {
class Expression_NewArrayExpressionProxy;
}
namespace System::Linq::Expressions {
class Expression_NewExpressionProxy;
}
namespace System::Linq::Expressions {
class Expression_ParameterExpressionProxy;
}
namespace System::Linq::Expressions {
class Expression_RuntimeVariablesExpressionProxy;
}
namespace System::Linq::Expressions {
class Expression_SwitchCaseProxy;
}
namespace System::Linq::Expressions {
class Expression_SwitchExpressionProxy;
}
namespace System::Linq::Expressions {
class Expression_TryExpressionProxy;
}
namespace System::Linq::Expressions {
class Expression_TypeBinaryExpressionProxy;
}
namespace System::Linq::Expressions {
class Expression_UnaryExpressionProxy;
}
namespace System::Linq::Expressions {
struct GotoExpressionKind;
}
namespace System::Linq::Expressions {
class GotoExpression;
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
class LambdaExpression;
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
namespace System::Reflection {
struct BindingFlags;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Reflection {
class MethodBase;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System::Runtime::CompilerServices {
template <typename TKey, typename TValue> class ConditionalWeakTable_2;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4, typename TResult> class Func_5;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions {
class Expression;
}
namespace System::Linq::Expressions {
class Expression_BinaryExpressionProxy;
}
namespace System::Linq::Expressions {
class Expression_BlockExpressionProxy;
}
namespace System::Linq::Expressions {
class Expression_CatchBlockProxy;
}
namespace System::Linq::Expressions {
class Expression_ConditionalExpressionProxy;
}
namespace System::Linq::Expressions {
class Expression_ConstantExpressionProxy;
}
namespace System::Linq::Expressions {
class Expression_DebugInfoExpressionProxy;
}
namespace System::Linq::Expressions {
class Expression_DefaultExpressionProxy;
}
namespace System::Linq::Expressions {
class Expression_ExtensionInfo;
}
namespace System::Linq::Expressions {
class Expression_GotoExpressionProxy;
}
namespace System::Linq::Expressions {
class Expression_IndexExpressionProxy;
}
namespace System::Linq::Expressions {
class Expression_InvocationExpressionProxy;
}
namespace System::Linq::Expressions {
class Expression_LabelExpressionProxy;
}
namespace System::Linq::Expressions {
class Expression_LambdaExpressionProxy;
}
namespace System::Linq::Expressions {
class Expression_ListInitExpressionProxy;
}
namespace System::Linq::Expressions {
class Expression_LoopExpressionProxy;
}
namespace System::Linq::Expressions {
class Expression_MemberExpressionProxy;
}
namespace System::Linq::Expressions {
class Expression_MemberInitExpressionProxy;
}
namespace System::Linq::Expressions {
class Expression_MethodCallExpressionProxy;
}
namespace System::Linq::Expressions {
class Expression_NewArrayExpressionProxy;
}
namespace System::Linq::Expressions {
class Expression_NewExpressionProxy;
}
namespace System::Linq::Expressions {
class Expression_ParameterExpressionProxy;
}
namespace System::Linq::Expressions {
class Expression_RuntimeVariablesExpressionProxy;
}
namespace System::Linq::Expressions {
class Expression_SwitchCaseProxy;
}
namespace System::Linq::Expressions {
class Expression_SwitchExpressionProxy;
}
namespace System::Linq::Expressions {
class Expression_TryExpressionProxy;
}
namespace System::Linq::Expressions {
class Expression_TypeBinaryExpressionProxy;
}
namespace System::Linq::Expressions {
class Expression_UnaryExpressionProxy;
}
// Write type traits
MARK_REF_T(::System::Linq::Expressions::Expression*);
MARK_REF_T(::System::Linq::Expressions::Expression_BinaryExpressionProxy*);
MARK_REF_T(::System::Linq::Expressions::Expression_BlockExpressionProxy*);
MARK_REF_T(::System::Linq::Expressions::Expression_CatchBlockProxy*);
MARK_REF_T(::System::Linq::Expressions::Expression_ConditionalExpressionProxy*);
MARK_REF_T(::System::Linq::Expressions::Expression_ConstantExpressionProxy*);
MARK_REF_T(::System::Linq::Expressions::Expression_DebugInfoExpressionProxy*);
MARK_REF_T(::System::Linq::Expressions::Expression_DefaultExpressionProxy*);
MARK_REF_T(::System::Linq::Expressions::Expression_ExtensionInfo*);
MARK_REF_T(::System::Linq::Expressions::Expression_GotoExpressionProxy*);
MARK_REF_T(::System::Linq::Expressions::Expression_IndexExpressionProxy*);
MARK_REF_T(::System::Linq::Expressions::Expression_InvocationExpressionProxy*);
MARK_REF_T(::System::Linq::Expressions::Expression_LabelExpressionProxy*);
MARK_REF_T(::System::Linq::Expressions::Expression_LambdaExpressionProxy*);
MARK_REF_T(::System::Linq::Expressions::Expression_ListInitExpressionProxy*);
MARK_REF_T(::System::Linq::Expressions::Expression_LoopExpressionProxy*);
MARK_REF_T(::System::Linq::Expressions::Expression_MemberExpressionProxy*);
MARK_REF_T(::System::Linq::Expressions::Expression_MemberInitExpressionProxy*);
MARK_REF_T(::System::Linq::Expressions::Expression_MethodCallExpressionProxy*);
MARK_REF_T(::System::Linq::Expressions::Expression_NewArrayExpressionProxy*);
MARK_REF_T(::System::Linq::Expressions::Expression_NewExpressionProxy*);
MARK_REF_T(::System::Linq::Expressions::Expression_ParameterExpressionProxy*);
MARK_REF_T(::System::Linq::Expressions::Expression_RuntimeVariablesExpressionProxy*);
MARK_REF_T(::System::Linq::Expressions::Expression_SwitchCaseProxy*);
MARK_REF_T(::System::Linq::Expressions::Expression_SwitchExpressionProxy*);
MARK_REF_T(::System::Linq::Expressions::Expression_TryExpressionProxy*);
MARK_REF_T(::System::Linq::Expressions::Expression_TypeBinaryExpressionProxy*);
MARK_REF_T(::System::Linq::Expressions::Expression_UnaryExpressionProxy*);
DEFINE_IL2CPP_CLASS(::System::Linq::Expressions::Expression*, "System.Linq.Expressions", "Expression");
DEFINE_IL2CPP_CLASS(::System::Linq::Expressions::Expression_BinaryExpressionProxy*, "System.Linq.Expressions", "Expression/BinaryExpressionProxy");
DEFINE_IL2CPP_CLASS(::System::Linq::Expressions::Expression_BlockExpressionProxy*, "System.Linq.Expressions", "Expression/BlockExpressionProxy");
DEFINE_IL2CPP_CLASS(::System::Linq::Expressions::Expression_CatchBlockProxy*, "System.Linq.Expressions", "Expression/CatchBlockProxy");
DEFINE_IL2CPP_CLASS(::System::Linq::Expressions::Expression_ConditionalExpressionProxy*, "System.Linq.Expressions", "Expression/ConditionalExpressionProxy");
DEFINE_IL2CPP_CLASS(::System::Linq::Expressions::Expression_ConstantExpressionProxy*, "System.Linq.Expressions", "Expression/ConstantExpressionProxy");
DEFINE_IL2CPP_CLASS(::System::Linq::Expressions::Expression_DebugInfoExpressionProxy*, "System.Linq.Expressions", "Expression/DebugInfoExpressionProxy");
DEFINE_IL2CPP_CLASS(::System::Linq::Expressions::Expression_DefaultExpressionProxy*, "System.Linq.Expressions", "Expression/DefaultExpressionProxy");
DEFINE_IL2CPP_CLASS(::System::Linq::Expressions::Expression_ExtensionInfo*, "System.Linq.Expressions", "Expression/ExtensionInfo");
DEFINE_IL2CPP_CLASS(::System::Linq::Expressions::Expression_GotoExpressionProxy*, "System.Linq.Expressions", "Expression/GotoExpressionProxy");
DEFINE_IL2CPP_CLASS(::System::Linq::Expressions::Expression_IndexExpressionProxy*, "System.Linq.Expressions", "Expression/IndexExpressionProxy");
DEFINE_IL2CPP_CLASS(::System::Linq::Expressions::Expression_InvocationExpressionProxy*, "System.Linq.Expressions", "Expression/InvocationExpressionProxy");
DEFINE_IL2CPP_CLASS(::System::Linq::Expressions::Expression_LabelExpressionProxy*, "System.Linq.Expressions", "Expression/LabelExpressionProxy");
DEFINE_IL2CPP_CLASS(::System::Linq::Expressions::Expression_LambdaExpressionProxy*, "System.Linq.Expressions", "Expression/LambdaExpressionProxy");
DEFINE_IL2CPP_CLASS(::System::Linq::Expressions::Expression_ListInitExpressionProxy*, "System.Linq.Expressions", "Expression/ListInitExpressionProxy");
DEFINE_IL2CPP_CLASS(::System::Linq::Expressions::Expression_LoopExpressionProxy*, "System.Linq.Expressions", "Expression/LoopExpressionProxy");
DEFINE_IL2CPP_CLASS(::System::Linq::Expressions::Expression_MemberExpressionProxy*, "System.Linq.Expressions", "Expression/MemberExpressionProxy");
DEFINE_IL2CPP_CLASS(::System::Linq::Expressions::Expression_MemberInitExpressionProxy*, "System.Linq.Expressions", "Expression/MemberInitExpressionProxy");
DEFINE_IL2CPP_CLASS(::System::Linq::Expressions::Expression_MethodCallExpressionProxy*, "System.Linq.Expressions", "Expression/MethodCallExpressionProxy");
DEFINE_IL2CPP_CLASS(::System::Linq::Expressions::Expression_NewArrayExpressionProxy*, "System.Linq.Expressions", "Expression/NewArrayExpressionProxy");
DEFINE_IL2CPP_CLASS(::System::Linq::Expressions::Expression_NewExpressionProxy*, "System.Linq.Expressions", "Expression/NewExpressionProxy");
DEFINE_IL2CPP_CLASS(::System::Linq::Expressions::Expression_ParameterExpressionProxy*, "System.Linq.Expressions", "Expression/ParameterExpressionProxy");
DEFINE_IL2CPP_CLASS(::System::Linq::Expressions::Expression_RuntimeVariablesExpressionProxy*, "System.Linq.Expressions", "Expression/RuntimeVariablesExpressionProxy");
DEFINE_IL2CPP_CLASS(::System::Linq::Expressions::Expression_SwitchCaseProxy*, "System.Linq.Expressions", "Expression/SwitchCaseProxy");
DEFINE_IL2CPP_CLASS(::System::Linq::Expressions::Expression_SwitchExpressionProxy*, "System.Linq.Expressions", "Expression/SwitchExpressionProxy");
DEFINE_IL2CPP_CLASS(::System::Linq::Expressions::Expression_TryExpressionProxy*, "System.Linq.Expressions", "Expression/TryExpressionProxy");
DEFINE_IL2CPP_CLASS(::System::Linq::Expressions::Expression_TypeBinaryExpressionProxy*, "System.Linq.Expressions", "Expression/TypeBinaryExpressionProxy");
DEFINE_IL2CPP_CLASS(::System::Linq::Expressions::Expression_UnaryExpressionProxy*, "System.Linq.Expressions", "Expression/UnaryExpressionProxy");
// Dependencies System.Object
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.Expression/BinaryExpressionProxy
class CORDL_TYPE Expression_BinaryExpressionProxy : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Expression_BinaryExpressionProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Expression_BinaryExpressionProxy", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_BinaryExpressionProxy(Expression_BinaryExpressionProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_BinaryExpressionProxy", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_BinaryExpressionProxy(Expression_BinaryExpressionProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16632 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Linq::Expressions::Expression_BinaryExpressionProxy) == 0x10, "Size mismatch!");

} // namespace System::Linq::Expressions
// Dependencies System.Object
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.Expression/BlockExpressionProxy
class CORDL_TYPE Expression_BlockExpressionProxy : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Expression_BlockExpressionProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Expression_BlockExpressionProxy", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_BlockExpressionProxy(Expression_BlockExpressionProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_BlockExpressionProxy", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_BlockExpressionProxy(Expression_BlockExpressionProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16633 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Linq::Expressions::Expression_BlockExpressionProxy) == 0x10, "Size mismatch!");

} // namespace System::Linq::Expressions
// Dependencies System.Object
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.Expression/CatchBlockProxy
class CORDL_TYPE Expression_CatchBlockProxy : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Expression_CatchBlockProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Expression_CatchBlockProxy", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_CatchBlockProxy(Expression_CatchBlockProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_CatchBlockProxy", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_CatchBlockProxy(Expression_CatchBlockProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16634 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Linq::Expressions::Expression_CatchBlockProxy) == 0x10, "Size mismatch!");

} // namespace System::Linq::Expressions
// Dependencies System.Object
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.Expression/ConditionalExpressionProxy
class CORDL_TYPE Expression_ConditionalExpressionProxy : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Expression_ConditionalExpressionProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Expression_ConditionalExpressionProxy", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_ConditionalExpressionProxy(Expression_ConditionalExpressionProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_ConditionalExpressionProxy", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_ConditionalExpressionProxy(Expression_ConditionalExpressionProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16635 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Linq::Expressions::Expression_ConditionalExpressionProxy) == 0x10, "Size mismatch!");

} // namespace System::Linq::Expressions
// Dependencies System.Object
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.Expression/ConstantExpressionProxy
class CORDL_TYPE Expression_ConstantExpressionProxy : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Expression_ConstantExpressionProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Expression_ConstantExpressionProxy", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_ConstantExpressionProxy(Expression_ConstantExpressionProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_ConstantExpressionProxy", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_ConstantExpressionProxy(Expression_ConstantExpressionProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16636 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Linq::Expressions::Expression_ConstantExpressionProxy) == 0x10, "Size mismatch!");

} // namespace System::Linq::Expressions
// Dependencies System.Object
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.Expression/DebugInfoExpressionProxy
class CORDL_TYPE Expression_DebugInfoExpressionProxy : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Expression_DebugInfoExpressionProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Expression_DebugInfoExpressionProxy", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_DebugInfoExpressionProxy(Expression_DebugInfoExpressionProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_DebugInfoExpressionProxy", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_DebugInfoExpressionProxy(Expression_DebugInfoExpressionProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16637 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Linq::Expressions::Expression_DebugInfoExpressionProxy) == 0x10, "Size mismatch!");

} // namespace System::Linq::Expressions
// Dependencies System.Object
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.Expression/DefaultExpressionProxy
class CORDL_TYPE Expression_DefaultExpressionProxy : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Expression_DefaultExpressionProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Expression_DefaultExpressionProxy", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_DefaultExpressionProxy(Expression_DefaultExpressionProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_DefaultExpressionProxy", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_DefaultExpressionProxy(Expression_DefaultExpressionProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16638 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Linq::Expressions::Expression_DefaultExpressionProxy) == 0x10, "Size mismatch!");

} // namespace System::Linq::Expressions
// Dependencies System.Object
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.Expression/GotoExpressionProxy
class CORDL_TYPE Expression_GotoExpressionProxy : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Expression_GotoExpressionProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Expression_GotoExpressionProxy", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_GotoExpressionProxy(Expression_GotoExpressionProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_GotoExpressionProxy", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_GotoExpressionProxy(Expression_GotoExpressionProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16639 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Linq::Expressions::Expression_GotoExpressionProxy) == 0x10, "Size mismatch!");

} // namespace System::Linq::Expressions
// Dependencies System.Object
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.Expression/IndexExpressionProxy
class CORDL_TYPE Expression_IndexExpressionProxy : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Expression_IndexExpressionProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Expression_IndexExpressionProxy", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_IndexExpressionProxy(Expression_IndexExpressionProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_IndexExpressionProxy", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_IndexExpressionProxy(Expression_IndexExpressionProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16640 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Linq::Expressions::Expression_IndexExpressionProxy) == 0x10, "Size mismatch!");

} // namespace System::Linq::Expressions
// Dependencies System.Object
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.Expression/InvocationExpressionProxy
class CORDL_TYPE Expression_InvocationExpressionProxy : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Expression_InvocationExpressionProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Expression_InvocationExpressionProxy", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_InvocationExpressionProxy(Expression_InvocationExpressionProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_InvocationExpressionProxy", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_InvocationExpressionProxy(Expression_InvocationExpressionProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16641 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Linq::Expressions::Expression_InvocationExpressionProxy) == 0x10, "Size mismatch!");

} // namespace System::Linq::Expressions
// Dependencies System.Object
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.Expression/LabelExpressionProxy
class CORDL_TYPE Expression_LabelExpressionProxy : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Expression_LabelExpressionProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Expression_LabelExpressionProxy", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_LabelExpressionProxy(Expression_LabelExpressionProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_LabelExpressionProxy", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_LabelExpressionProxy(Expression_LabelExpressionProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16642 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Linq::Expressions::Expression_LabelExpressionProxy) == 0x10, "Size mismatch!");

} // namespace System::Linq::Expressions
// Dependencies System.Object
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.Expression/LambdaExpressionProxy
class CORDL_TYPE Expression_LambdaExpressionProxy : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Expression_LambdaExpressionProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Expression_LambdaExpressionProxy", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_LambdaExpressionProxy(Expression_LambdaExpressionProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_LambdaExpressionProxy", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_LambdaExpressionProxy(Expression_LambdaExpressionProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16643 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Linq::Expressions::Expression_LambdaExpressionProxy) == 0x10, "Size mismatch!");

} // namespace System::Linq::Expressions
// Dependencies System.Object
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.Expression/ListInitExpressionProxy
class CORDL_TYPE Expression_ListInitExpressionProxy : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Expression_ListInitExpressionProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Expression_ListInitExpressionProxy", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_ListInitExpressionProxy(Expression_ListInitExpressionProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_ListInitExpressionProxy", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_ListInitExpressionProxy(Expression_ListInitExpressionProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16644 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Linq::Expressions::Expression_ListInitExpressionProxy) == 0x10, "Size mismatch!");

} // namespace System::Linq::Expressions
// Dependencies System.Object
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.Expression/LoopExpressionProxy
class CORDL_TYPE Expression_LoopExpressionProxy : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Expression_LoopExpressionProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Expression_LoopExpressionProxy", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_LoopExpressionProxy(Expression_LoopExpressionProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_LoopExpressionProxy", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_LoopExpressionProxy(Expression_LoopExpressionProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16645 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Linq::Expressions::Expression_LoopExpressionProxy) == 0x10, "Size mismatch!");

} // namespace System::Linq::Expressions
// Dependencies System.Object
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.Expression/MemberExpressionProxy
class CORDL_TYPE Expression_MemberExpressionProxy : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Expression_MemberExpressionProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Expression_MemberExpressionProxy", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_MemberExpressionProxy(Expression_MemberExpressionProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_MemberExpressionProxy", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_MemberExpressionProxy(Expression_MemberExpressionProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16646 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Linq::Expressions::Expression_MemberExpressionProxy) == 0x10, "Size mismatch!");

} // namespace System::Linq::Expressions
// Dependencies System.Object
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.Expression/MemberInitExpressionProxy
class CORDL_TYPE Expression_MemberInitExpressionProxy : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Expression_MemberInitExpressionProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Expression_MemberInitExpressionProxy", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_MemberInitExpressionProxy(Expression_MemberInitExpressionProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_MemberInitExpressionProxy", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_MemberInitExpressionProxy(Expression_MemberInitExpressionProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16647 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Linq::Expressions::Expression_MemberInitExpressionProxy) == 0x10, "Size mismatch!");

} // namespace System::Linq::Expressions
// Dependencies System.Object
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.Expression/MethodCallExpressionProxy
class CORDL_TYPE Expression_MethodCallExpressionProxy : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Expression_MethodCallExpressionProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Expression_MethodCallExpressionProxy", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_MethodCallExpressionProxy(Expression_MethodCallExpressionProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_MethodCallExpressionProxy", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_MethodCallExpressionProxy(Expression_MethodCallExpressionProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16648 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Linq::Expressions::Expression_MethodCallExpressionProxy) == 0x10, "Size mismatch!");

} // namespace System::Linq::Expressions
// Dependencies System.Object
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.Expression/NewArrayExpressionProxy
class CORDL_TYPE Expression_NewArrayExpressionProxy : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Expression_NewArrayExpressionProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Expression_NewArrayExpressionProxy", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_NewArrayExpressionProxy(Expression_NewArrayExpressionProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_NewArrayExpressionProxy", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_NewArrayExpressionProxy(Expression_NewArrayExpressionProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16649 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Linq::Expressions::Expression_NewArrayExpressionProxy) == 0x10, "Size mismatch!");

} // namespace System::Linq::Expressions
// Dependencies System.Object
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.Expression/NewExpressionProxy
class CORDL_TYPE Expression_NewExpressionProxy : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Expression_NewExpressionProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Expression_NewExpressionProxy", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_NewExpressionProxy(Expression_NewExpressionProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_NewExpressionProxy", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_NewExpressionProxy(Expression_NewExpressionProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16650 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Linq::Expressions::Expression_NewExpressionProxy) == 0x10, "Size mismatch!");

} // namespace System::Linq::Expressions
// Dependencies System.Object
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.Expression/ParameterExpressionProxy
class CORDL_TYPE Expression_ParameterExpressionProxy : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Expression_ParameterExpressionProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Expression_ParameterExpressionProxy", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_ParameterExpressionProxy(Expression_ParameterExpressionProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_ParameterExpressionProxy", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_ParameterExpressionProxy(Expression_ParameterExpressionProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16651 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Linq::Expressions::Expression_ParameterExpressionProxy) == 0x10, "Size mismatch!");

} // namespace System::Linq::Expressions
// Dependencies System.Object
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.Expression/RuntimeVariablesExpressionProxy
class CORDL_TYPE Expression_RuntimeVariablesExpressionProxy : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Expression_RuntimeVariablesExpressionProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Expression_RuntimeVariablesExpressionProxy", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_RuntimeVariablesExpressionProxy(Expression_RuntimeVariablesExpressionProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_RuntimeVariablesExpressionProxy", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_RuntimeVariablesExpressionProxy(Expression_RuntimeVariablesExpressionProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16652 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Linq::Expressions::Expression_RuntimeVariablesExpressionProxy) == 0x10, "Size mismatch!");

} // namespace System::Linq::Expressions
// Dependencies System.Object
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.Expression/SwitchCaseProxy
class CORDL_TYPE Expression_SwitchCaseProxy : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Expression_SwitchCaseProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Expression_SwitchCaseProxy", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_SwitchCaseProxy(Expression_SwitchCaseProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_SwitchCaseProxy", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_SwitchCaseProxy(Expression_SwitchCaseProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16653 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Linq::Expressions::Expression_SwitchCaseProxy) == 0x10, "Size mismatch!");

} // namespace System::Linq::Expressions
// Dependencies System.Object
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.Expression/SwitchExpressionProxy
class CORDL_TYPE Expression_SwitchExpressionProxy : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Expression_SwitchExpressionProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Expression_SwitchExpressionProxy", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_SwitchExpressionProxy(Expression_SwitchExpressionProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_SwitchExpressionProxy", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_SwitchExpressionProxy(Expression_SwitchExpressionProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16654 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Linq::Expressions::Expression_SwitchExpressionProxy) == 0x10, "Size mismatch!");

} // namespace System::Linq::Expressions
// Dependencies System.Object
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.Expression/TryExpressionProxy
class CORDL_TYPE Expression_TryExpressionProxy : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Expression_TryExpressionProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Expression_TryExpressionProxy", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_TryExpressionProxy(Expression_TryExpressionProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_TryExpressionProxy", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_TryExpressionProxy(Expression_TryExpressionProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16655 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Linq::Expressions::Expression_TryExpressionProxy) == 0x10, "Size mismatch!");

} // namespace System::Linq::Expressions
// Dependencies System.Object
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.Expression/TypeBinaryExpressionProxy
class CORDL_TYPE Expression_TypeBinaryExpressionProxy : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Expression_TypeBinaryExpressionProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Expression_TypeBinaryExpressionProxy", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_TypeBinaryExpressionProxy(Expression_TypeBinaryExpressionProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_TypeBinaryExpressionProxy", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_TypeBinaryExpressionProxy(Expression_TypeBinaryExpressionProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16656 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Linq::Expressions::Expression_TypeBinaryExpressionProxy) == 0x10, "Size mismatch!");

} // namespace System::Linq::Expressions
// Dependencies System.Object
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.Expression/UnaryExpressionProxy
class CORDL_TYPE Expression_UnaryExpressionProxy : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Expression_UnaryExpressionProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Expression_UnaryExpressionProxy", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_UnaryExpressionProxy(Expression_UnaryExpressionProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_UnaryExpressionProxy", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_UnaryExpressionProxy(Expression_UnaryExpressionProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16657 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Linq::Expressions::Expression_UnaryExpressionProxy) == 0x10, "Size mismatch!");

} // namespace System::Linq::Expressions
// Dependencies System.Linq.Expressions.ExpressionType, System.Object
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.Expression/ExtensionInfo
class CORDL_TYPE Expression_ExtensionInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field NodeType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_NodeType, put = __cordl_internal_set_NodeType)) ::System::Linq::Expressions::ExpressionType NodeType;

  /// @brief Field Type, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Type, put = __cordl_internal_set_Type)) ::System::Type* Type;

  constexpr ::System::Linq::Expressions::ExpressionType const& __cordl_internal_get_NodeType() const;

  constexpr ::System::Linq::Expressions::ExpressionType& __cordl_internal_get_NodeType();

  constexpr ::System::Type* const& __cordl_internal_get_Type() const;

  constexpr ::System::Type*& __cordl_internal_get_Type();

  constexpr void __cordl_internal_set_NodeType(::System::Linq::Expressions::ExpressionType value);

  constexpr void __cordl_internal_set_Type(::System::Type* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Expression_ExtensionInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Expression_ExtensionInfo", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_ExtensionInfo(Expression_ExtensionInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_ExtensionInfo", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_ExtensionInfo(Expression_ExtensionInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16658 };

  /// @brief Field NodeType, offset: 0x10, size: 0x4, def value: None
  ::System::Linq::Expressions::ExpressionType ___NodeType;

  /// @brief Field Type, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ___Type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::Expression_ExtensionInfo, ___NodeType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Expression_ExtensionInfo, ___Type) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::Linq::Expressions::Expression_ExtensionInfo) == 0x20, "Size mismatch!");

} // namespace System::Linq::Expressions
// Dependencies System.Object
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.Expression
class CORDL_TYPE Expression : public ::System::Object {
public:
  // Declarations
  using BinaryExpressionProxy = ::System::Linq::Expressions::Expression_BinaryExpressionProxy;

  using BlockExpressionProxy = ::System::Linq::Expressions::Expression_BlockExpressionProxy;

  using CatchBlockProxy = ::System::Linq::Expressions::Expression_CatchBlockProxy;

  using ConditionalExpressionProxy = ::System::Linq::Expressions::Expression_ConditionalExpressionProxy;

  using ConstantExpressionProxy = ::System::Linq::Expressions::Expression_ConstantExpressionProxy;

  using DebugInfoExpressionProxy = ::System::Linq::Expressions::Expression_DebugInfoExpressionProxy;

  using DefaultExpressionProxy = ::System::Linq::Expressions::Expression_DefaultExpressionProxy;

  using ExtensionInfo = ::System::Linq::Expressions::Expression_ExtensionInfo;

  using GotoExpressionProxy = ::System::Linq::Expressions::Expression_GotoExpressionProxy;

  using IndexExpressionProxy = ::System::Linq::Expressions::Expression_IndexExpressionProxy;

  using InvocationExpressionProxy = ::System::Linq::Expressions::Expression_InvocationExpressionProxy;

  using LabelExpressionProxy = ::System::Linq::Expressions::Expression_LabelExpressionProxy;

  using LambdaExpressionProxy = ::System::Linq::Expressions::Expression_LambdaExpressionProxy;

  using ListInitExpressionProxy = ::System::Linq::Expressions::Expression_ListInitExpressionProxy;

  using LoopExpressionProxy = ::System::Linq::Expressions::Expression_LoopExpressionProxy;

  using MemberExpressionProxy = ::System::Linq::Expressions::Expression_MemberExpressionProxy;

  using MemberInitExpressionProxy = ::System::Linq::Expressions::Expression_MemberInitExpressionProxy;

  using MethodCallExpressionProxy = ::System::Linq::Expressions::Expression_MethodCallExpressionProxy;

  using NewArrayExpressionProxy = ::System::Linq::Expressions::Expression_NewArrayExpressionProxy;

  using NewExpressionProxy = ::System::Linq::Expressions::Expression_NewExpressionProxy;

  using ParameterExpressionProxy = ::System::Linq::Expressions::Expression_ParameterExpressionProxy;

  using RuntimeVariablesExpressionProxy = ::System::Linq::Expressions::Expression_RuntimeVariablesExpressionProxy;

  using SwitchCaseProxy = ::System::Linq::Expressions::Expression_SwitchCaseProxy;

  using SwitchExpressionProxy = ::System::Linq::Expressions::Expression_SwitchExpressionProxy;

  using TryExpressionProxy = ::System::Linq::Expressions::Expression_TryExpressionProxy;

  using TypeBinaryExpressionProxy = ::System::Linq::Expressions::Expression_TypeBinaryExpressionProxy;

  using UnaryExpressionProxy = ::System::Linq::Expressions::Expression_UnaryExpressionProxy;

  __declspec(property(get = get_CanReduce)) bool CanReduce;

  __declspec(property(get = get_NodeType)) ::System::Linq::Expressions::ExpressionType NodeType;

  __declspec(property(get = get_Type)) ::System::Type* Type;

  /// @brief Field s_lambdaDelegateCache, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_lambdaDelegateCache,
                      put = setStaticF_s_lambdaDelegateCache)) ::System::Dynamic::Utils::CacheDict_2<::System::Type*, ::System::Reflection::MethodInfo*>* s_lambdaDelegateCache;

  /// @brief Field s_lambdaFactories, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_lambdaFactories, put = setStaticF_s_lambdaFactories)) ::System::Dynamic::Utils::CacheDict_2<
      ::System::Type*, ::System::Func_5<::System::Linq::Expressions::Expression*, ::StringW, bool,
                                        ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*, ::System::Linq::Expressions::LambdaExpression*>*>*
      s_lambdaFactories;

  /// @brief Field s_legacyCtorSupportTable, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_legacyCtorSupportTable, put = setStaticF_s_legacyCtorSupportTable)) ::System::Runtime::CompilerServices::ConditionalWeakTable_2<
      ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression_ExtensionInfo*>* s_legacyCtorSupportTable;

  /// @brief Method Accept, addr 0x6389c30, size 0x24, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* visitor);

  /// @brief Method Add, addr 0x6381594, size 0x224, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* Add(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                   ::System::Reflection::MethodInfo* method);

  /// @brief Method AddAssign, addr 0x6384c88, size 0x284, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* AddAssign(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                         ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::LambdaExpression* conversion);

  /// @brief Method AddAssignChecked, addr 0x6386710, size 0x284, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* AddAssignChecked(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                                ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::LambdaExpression* conversion);

  /// @brief Method AddChecked, addr 0x63817b8, size 0x228, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* AddChecked(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                          ::System::Reflection::MethodInfo* method);

  /// @brief Method And, addr 0x6382a84, size 0x228, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* And(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                   ::System::Reflection::MethodInfo* method);

  /// @brief Method AndAlso, addr 0x63875b8, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* AndAlso(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right);

  /// @brief Method AndAlso, addr 0x6382cac, size 0x4b4, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* AndAlso(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                       ::System::Reflection::MethodInfo* method);

  /// @brief Method AndAssign, addr 0x6384f0c, size 0x284, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* AndAssign(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                         ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::LambdaExpression* conversion);

  /// @brief Method ApplyTypeArgs, addr 0x638ff80, size 0xb4, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* ApplyTypeArgs(::System::Reflection::MethodInfo* m, ::ArrayW<::System::Type*> typeArgs);

  /// @brief Method ArrayAccess, addr 0x638a858, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::IndexExpression* ArrayAccess(::System::Linq::Expressions::Expression* array,
                                                                          /* [ParamArray] */ ::ArrayW<::System::Linq::Expressions::Expression*> indexes);

  /// @brief Method ArrayAccess, addr 0x638a3e4, size 0x474, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::IndexExpression* ArrayAccess(::System::Linq::Expressions::Expression* array,
                                                                          ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* indexes);

  /// @brief Method ArrayIndex, addr 0x638468c, size 0x1d4, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* ArrayIndex(::System::Linq::Expressions::Expression* array, ::System::Linq::Expressions::Expression* index);

  /// @brief Method ArrayLength, addr 0x639281c, size 0x1c0, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* ArrayLength(::System::Linq::Expressions::Expression* array);

  /// @brief Method Assign, addr 0x637d448, size 0x1f0, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* Assign(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right);

  /// @brief Method Block, addr 0x63879d0, size 0xb8, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BlockExpression* Block(::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1);

  /// @brief Method Block, addr 0x6387a88, size 0xe8, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BlockExpression* Block(::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1,
                                                                    ::System::Linq::Expressions::Expression* arg2);

  /// @brief Method Block, addr 0x6387b70, size 0x11c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BlockExpression* Block(::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1,
                                                                    ::System::Linq::Expressions::Expression* arg2, ::System::Linq::Expressions::Expression* arg3);

  /// @brief Method Block, addr 0x6387c8c, size 0x14c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BlockExpression* Block(::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1,
                                                                    ::System::Linq::Expressions::Expression* arg2, ::System::Linq::Expressions::Expression* arg3,
                                                                    ::System::Linq::Expressions::Expression* arg4);

  /// @brief Method Block, addr 0x6387dd8, size 0x94, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BlockExpression* Block(::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* expressions);

  /// @brief Method Block, addr 0x6387e6c, size 0x90, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BlockExpression* Block(::System::Type* type, /* [ParamArray] */ ::ArrayW<::System::Linq::Expressions::Expression*> expressions);

  /// @brief Method Block, addr 0x6387efc, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BlockExpression* Block(::System::Type* type, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* expressions);

  /// @brief Method Block, addr 0x6388220, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BlockExpression* Block(::System::Type* type, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>* variables,
                                                                    /* [ParamArray] */ ::ArrayW<::System::Linq::Expressions::Expression*> expressions);

  /// @brief Method Block, addr 0x6387fa0, size 0x218, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BlockExpression* Block(::System::Type* type, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>* variables,
                                                                    ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* expressions);

  /// @brief Method Block, addr 0x63881b8, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BlockExpression* Block(::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>* variables,
                                                                    /* [ParamArray] */ ::ArrayW<::System::Linq::Expressions::Expression*> expressions);

  /// @brief Method Block, addr 0x637d82c, size 0x194, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BlockExpression* Block(::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>* variables,
                                                                    ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* expressions);

  /// @brief Method BlockCore, addr 0x6388c84, size 0x334, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BlockExpression* BlockCore(::System::Type* type,
                                                                        ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* variables,
                                                                        ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* expressions);

  /// @brief Method Break, addr 0x6389c5c, size 0x94, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::GotoExpression* Break(::System::Linq::Expressions::LabelTarget* target);

  /// @brief Method Call, addr 0x638f50c, size 0x114, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::MethodCallExpression* Call(::System::Linq::Expressions::Expression* instance, ::System::Reflection::MethodInfo* method);

  /// @brief Method Call, addr 0x638f620, size 0x194, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::MethodCallExpression* Call(::System::Linq::Expressions::Expression* instance, ::System::Reflection::MethodInfo* method,
                                                                        ::System::Linq::Expressions::Expression* arg0);

  /// @brief Method Call, addr 0x638f7b4, size 0x200, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::MethodCallExpression* Call(::System::Linq::Expressions::Expression* instance, ::System::Reflection::MethodInfo* method,
                                                                        ::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1);

  /// @brief Method Call, addr 0x638f9b4, size 0x26c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::MethodCallExpression* Call(::System::Linq::Expressions::Expression* instance, ::System::Reflection::MethodInfo* method,
                                                                        ::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1,
                                                                        ::System::Linq::Expressions::Expression* arg2);

  /// @brief Method Call, addr 0x638ead4, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::MethodCallExpression* Call(::System::Linq::Expressions::Expression* instance, ::System::Reflection::MethodInfo* method,
                                                                        /* [ParamArray] */ ::ArrayW<::System::Linq::Expressions::Expression*> arguments);

  /// @brief Method Call, addr 0x638ebb0, size 0x95c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::MethodCallExpression* Call(::System::Linq::Expressions::Expression* instance, ::System::Reflection::MethodInfo* method,
                                                                        ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* arguments);

  /// @brief Method Call, addr 0x637e60c, size 0x178, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::MethodCallExpression* Call(::System::Linq::Expressions::Expression* instance, ::StringW methodName, ::ArrayW<::System::Type*> typeArguments,
                                                                        /* [ParamArray] */ ::ArrayW<::System::Linq::Expressions::Expression*> arguments);

  /// @brief Method Call, addr 0x638e160, size 0xd0, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::MethodCallExpression* Call(::System::Reflection::MethodInfo* method);

  /// @brief Method Call, addr 0x637e784, size 0x14c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::MethodCallExpression* Call(::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::Expression* arg0);

  /// @brief Method Call, addr 0x637e8d0, size 0x1b4, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::MethodCallExpression* Call(::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::Expression* arg0,
                                                                        ::System::Linq::Expressions::Expression* arg1);

  /// @brief Method Call, addr 0x638e2cc, size 0x220, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::MethodCallExpression* Call(::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::Expression* arg0,
                                                                        ::System::Linq::Expressions::Expression* arg1, ::System::Linq::Expressions::Expression* arg2);

  /// @brief Method Call, addr 0x638e4ec, size 0x288, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::MethodCallExpression* Call(::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::Expression* arg0,
                                                                        ::System::Linq::Expressions::Expression* arg1, ::System::Linq::Expressions::Expression* arg2,
                                                                        ::System::Linq::Expressions::Expression* arg3);

  /// @brief Method Call, addr 0x638e774, size 0x2f4, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::MethodCallExpression* Call(::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::Expression* arg0,
                                                                        ::System::Linq::Expressions::Expression* arg1, ::System::Linq::Expressions::Expression* arg2,
                                                                        ::System::Linq::Expressions::Expression* arg3, ::System::Linq::Expressions::Expression* arg4);

  /// @brief Method Call, addr 0x638ea68, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::MethodCallExpression* Call(::System::Reflection::MethodInfo* method, /* [ParamArray] */ ::ArrayW<::System::Linq::Expressions::Expression*> arguments);

  /// @brief Method Call, addr 0x638eb44, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::MethodCallExpression* Call(::System::Reflection::MethodInfo* method,
                                                                        ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* arguments);

  /// @brief Method Coalesce, addr 0x63841e8, size 0x4a4, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* Coalesce(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                        ::System::Linq::Expressions::LambdaExpression* conversion);

  /// @brief Method Condition, addr 0x637ed08, size 0x1d4, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::ConditionalExpression* Condition(::System::Linq::Expressions::Expression* test, ::System::Linq::Expressions::Expression* ifTrue,
                                                                              ::System::Linq::Expressions::Expression* ifFalse);

  /// @brief Method Condition, addr 0x63893cc, size 0x250, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::ConditionalExpression* Condition(::System::Linq::Expressions::Expression* test, ::System::Linq::Expressions::Expression* ifTrue,
                                                                              ::System::Linq::Expressions::Expression* ifFalse, ::System::Type* type);

  /// @brief Method Constant, addr 0x638974c, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::ConstantExpression* Constant(::System::Object* value);

  /// @brief Method Constant, addr 0x637eaf0, size 0x218, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::ConstantExpression* Constant(::System::Object* value, ::System::Type* type);

  /// @brief Method Convert, addr 0x637ea84, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* Convert(::System::Linq::Expressions::Expression* expression, ::System::Type* type);

  /// @brief Method Convert, addr 0x63929dc, size 0x200, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* Convert(::System::Linq::Expressions::Expression* expression, ::System::Type* type, ::System::Reflection::MethodInfo* method);

  /// @brief Method ConvertChecked, addr 0x6392bdc, size 0x218, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* ConvertChecked(::System::Linq::Expressions::Expression* expression, ::System::Type* type, ::System::Reflection::MethodInfo* method);

  /// @brief Method CreateLambda, addr 0x638cde0, size 0x4bc, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::LambdaExpression* CreateLambda(::System::Type* delegateType, ::System::Linq::Expressions::Expression* body, ::StringW name, bool tailCall,
                                                                            ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* parameters);

  /// @brief Method Decrement, addr 0x63936f8, size 0x1a0, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* Decrement(::System::Linq::Expressions::Expression* expression, ::System::Reflection::MethodInfo* method);

  /// @brief Method Default, addr 0x63897ac, size 0xc0, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::DefaultExpression* Default(::System::Type* type);

  /// @brief Method Divide, addr 0x6382280, size 0x228, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* Divide(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                      ::System::Reflection::MethodInfo* method);

  /// @brief Method DivideAssign, addr 0x6385190, size 0x284, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* DivideAssign(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                            ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::LambdaExpression* conversion);

  /// @brief Method Empty, addr 0x63896c0, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::DefaultExpression* Empty();

  /// @brief Method Equal, addr 0x6386e9c, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* Equal(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right);

  /// @brief Method Equal, addr 0x6383d80, size 0x120, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* Equal(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, bool liftToNull,
                                                                     ::System::Reflection::MethodInfo* method);

  /// @brief Method ExclusiveOr, addr 0x6383fc0, size 0x228, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* ExclusiveOr(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                           ::System::Reflection::MethodInfo* method);

  /// @brief Method ExclusiveOrAssign, addr 0x6385414, size 0x284, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* ExclusiveOrAssign(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                                 ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::LambdaExpression* conversion);

  /// @brief Method Field, addr 0x638dba4, size 0x1b0, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::MemberExpression* Field(::System::Linq::Expressions::Expression* expression, ::System::Reflection::FieldInfo* field);

  /// @brief Method Field, addr 0x638dd54, size 0x164, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::MemberExpression* Field(::System::Linq::Expressions::Expression* expression, ::StringW fieldName);

  /// @brief Method FindMethod, addr 0x638fc20, size 0x25c, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* FindMethod(::System::Type* type, ::StringW methodName, ::ArrayW<::System::Type*> typeArgs, ::ArrayW<::System::Linq::Expressions::Expression*> args,
                                                             ::System::Reflection::BindingFlags flags);

  /// @brief Method GetComparisonOperator, addr 0x638737c, size 0x23c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* GetComparisonOperator(::System::Linq::Expressions::ExpressionType binaryType, ::StringW opName,
                                                                                     ::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, bool liftToNull);

  /// @brief Method GetEqualityComparisonOperator, addr 0x6386f0c, size 0x400, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* GetEqualityComparisonOperator(::System::Linq::Expressions::ExpressionType binaryType, ::StringW opName,
                                                                                             ::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                                             bool liftToNull);

  /// @brief Method GetInvokeMethod, addr 0x638b654, size 0x1dc, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* GetInvokeMethod(::System::Linq::Expressions::Expression* expression);

  /// @brief Method GetMethodBasedAssignOperator, addr 0x638009c, size 0x26c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* GetMethodBasedAssignOperator(::System::Linq::Expressions::ExpressionType binaryType, ::System::Linq::Expressions::Expression* left,
                                                                                            ::System::Linq::Expressions::Expression* right, ::System::Reflection::MethodInfo* method,
                                                                                            ::System::Linq::Expressions::LambdaExpression* conversion, bool liftToNull);

  /// @brief Method GetMethodBasedBinaryOperator, addr 0x637f840, size 0x588, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* GetMethodBasedBinaryOperator(::System::Linq::Expressions::ExpressionType binaryType, ::System::Linq::Expressions::Expression* left,
                                                                                            ::System::Linq::Expressions::Expression* right, ::System::Reflection::MethodInfo* method, bool liftToNull);

  /// @brief Method GetMethodBasedCoercionOperator, addr 0x6394418, size 0x3a4, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* GetMethodBasedCoercionOperator(::System::Linq::Expressions::ExpressionType unaryType, ::System::Linq::Expressions::Expression* operand,
                                                                                             ::System::Type* convertToType, ::System::Reflection::MethodInfo* method);

  /// @brief Method GetMethodBasedUnaryOperator, addr 0x6393ec0, size 0x3bc, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* GetMethodBasedUnaryOperator(::System::Linq::Expressions::ExpressionType unaryType, ::System::Linq::Expressions::Expression* operand,
                                                                                          ::System::Reflection::MethodInfo* method);

  /// @brief Method GetOptimizedBlockExpression, addr 0x63883e0, size 0x8a4, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BlockExpression* GetOptimizedBlockExpression(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* expressions);

  /// @brief Method GetParametersForValidation, addr 0x638b830, size 0x8, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Reflection::ParameterInfo*> GetParametersForValidation(::System::Reflection::MethodBase* method, ::System::Linq::Expressions::ExpressionType nodeKind);

  /// @brief Method GetResultTypeOfShift, addr 0x638786c, size 0x164, virtual false, abstract: false, final false
  static inline ::System::Type* GetResultTypeOfShift(::System::Type* left, ::System::Type* right);

  /// @brief Method GetUserDefinedAssignOperatorOrThrow, addr 0x638079c, size 0x264, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* GetUserDefinedAssignOperatorOrThrow(::System::Linq::Expressions::ExpressionType binaryType, ::StringW name,
                                                                                                   ::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                                                   ::System::Linq::Expressions::LambdaExpression* conversion, bool liftToNull);

  /// @brief Method GetUserDefinedBinaryOperator, addr 0x637f2bc, size 0x354, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* GetUserDefinedBinaryOperator(::System::Linq::Expressions::ExpressionType binaryType, ::StringW name,
                                                                                            ::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                                            bool liftToNull);

  /// @brief Method GetUserDefinedBinaryOperator, addr 0x637f610, size 0x230, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* GetUserDefinedBinaryOperator(::System::Linq::Expressions::ExpressionType binaryType, ::System::Type* leftType, ::System::Type* rightType,
                                                                               ::StringW name);

  /// @brief Method GetUserDefinedBinaryOperatorOrThrow, addr 0x6380578, size 0x224, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* GetUserDefinedBinaryOperatorOrThrow(::System::Linq::Expressions::ExpressionType binaryType, ::StringW name,
                                                                                                   ::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                                                   bool liftToNull);

  /// @brief Method GetUserDefinedCoercion, addr 0x6394334, size 0xe4, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* GetUserDefinedCoercion(::System::Linq::Expressions::ExpressionType coercionType, ::System::Linq::Expressions::Expression* expression,
                                                                                     ::System::Type* convertToType);

  /// @brief Method GetUserDefinedCoercionOrThrow, addr 0x639427c, size 0xb8, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* GetUserDefinedCoercionOrThrow(::System::Linq::Expressions::ExpressionType coercionType,
                                                                                            ::System::Linq::Expressions::Expression* expression, ::System::Type* convertToType);

  /// @brief Method GetUserDefinedUnaryOperator, addr 0x6393bd4, size 0x2ec, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* GetUserDefinedUnaryOperator(::System::Linq::Expressions::ExpressionType unaryType, ::StringW name,
                                                                                          ::System::Linq::Expressions::Expression* operand);

  /// @brief Method GetUserDefinedUnaryOperatorOrThrow, addr 0x6393a48, size 0x18c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* GetUserDefinedUnaryOperatorOrThrow(::System::Linq::Expressions::ExpressionType unaryType, ::StringW name,
                                                                                                 ::System::Linq::Expressions::Expression* operand);

  /// @brief Method Goto, addr 0x6389f20, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::GotoExpression* Goto(::System::Linq::Expressions::LabelTarget* target, ::System::Type* type);

  /// @brief Method Goto, addr 0x6389f90, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::GotoExpression* Goto(::System::Linq::Expressions::LabelTarget* target, ::System::Linq::Expressions::Expression* value);

  /// @brief Method GreaterThan, addr 0x6383b40, size 0x120, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* GreaterThan(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, bool liftToNull,
                                                                           ::System::Reflection::MethodInfo* method);

  /// @brief Method GreaterThanOrEqual, addr 0x6383c60, size 0x120, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* GreaterThanOrEqual(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, bool liftToNull,
                                                                                  ::System::Reflection::MethodInfo* method);

  /// @brief Method IfThen, addr 0x638961c, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::ConditionalExpression* IfThen(::System::Linq::Expressions::Expression* test, ::System::Linq::Expressions::Expression* ifTrue);

  /// @brief Method Increment, addr 0x6393558, size 0x1a0, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* Increment(::System::Linq::Expressions::Expression* expression, ::System::Reflection::MethodInfo* method);

  /// @brief Method Invoke, addr 0x638b550, size 0x104, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::InvocationExpression* Invoke(::System::Linq::Expressions::Expression* expression);

  /// @brief Method Invoke, addr 0x637d2e0, size 0x168, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::InvocationExpression* Invoke(::System::Linq::Expressions::Expression* expression, ::System::Linq::Expressions::Expression* arg0);

  /// @brief Method Invoke, addr 0x638b84c, size 0x1c0, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::InvocationExpression* Invoke(::System::Linq::Expressions::Expression* expression, ::System::Linq::Expressions::Expression* arg0,
                                                                          ::System::Linq::Expressions::Expression* arg1);

  /// @brief Method Invoke, addr 0x638ba0c, size 0x214, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::InvocationExpression* Invoke(::System::Linq::Expressions::Expression* expression, ::System::Linq::Expressions::Expression* arg0,
                                                                          ::System::Linq::Expressions::Expression* arg1, ::System::Linq::Expressions::Expression* arg2);

  /// @brief Method Invoke, addr 0x638bc20, size 0x26c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::InvocationExpression* Invoke(::System::Linq::Expressions::Expression* expression, ::System::Linq::Expressions::Expression* arg0,
                                                                          ::System::Linq::Expressions::Expression* arg1, ::System::Linq::Expressions::Expression* arg2,
                                                                          ::System::Linq::Expressions::Expression* arg3);

  /// @brief Method Invoke, addr 0x638be8c, size 0x2c0, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::InvocationExpression* Invoke(::System::Linq::Expressions::Expression* expression, ::System::Linq::Expressions::Expression* arg0,
                                                                          ::System::Linq::Expressions::Expression* arg1, ::System::Linq::Expressions::Expression* arg2,
                                                                          ::System::Linq::Expressions::Expression* arg3, ::System::Linq::Expressions::Expression* arg4);

  /// @brief Method Invoke, addr 0x638c14c, size 0x920, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::InvocationExpression* Invoke(::System::Linq::Expressions::Expression* expression,
                                                                          ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* arguments);

  /// @brief Method IsCompatible, addr 0x6390034, size 0x24c, virtual false, abstract: false, final false
  static inline bool IsCompatible(::System::Reflection::MethodBase* m, ::ArrayW<::System::Linq::Expressions::Expression*> arguments);

  /// @brief Method IsFalse, addr 0x639233c, size 0x1a0, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* IsFalse(::System::Linq::Expressions::Expression* expression, ::System::Reflection::MethodInfo* method);

  /// @brief Method IsLiftingConditionalLogicalOperator, addr 0x6380a00, size 0xc4, virtual false, abstract: false, final false
  static inline bool IsLiftingConditionalLogicalOperator(::System::Type* left, ::System::Type* right, ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::ExpressionType binaryType);

  /// @brief Method IsNullComparison, addr 0x6380b54, size 0x114, virtual false, abstract: false, final false
  static inline bool IsNullComparison(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right);

  /// @brief Method IsNullConstant, addr 0x6380c68, size 0x88, virtual false, abstract: false, final false
  static inline bool IsNullConstant(::System::Linq::Expressions::Expression* e);

  /// @brief Method IsSimpleShift, addr 0x63877a0, size 0xcc, virtual false, abstract: false, final false
  static inline bool IsSimpleShift(::System::Type* left, ::System::Type* right);

  /// @brief Method IsTrue, addr 0x63924dc, size 0x1a0, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* IsTrue(::System::Linq::Expressions::Expression* expression, ::System::Reflection::MethodInfo* method);

  /// @brief Method IsValidLiftedConditionalLogicalOperator, addr 0x63812bc, size 0x108, virtual false, abstract: false, final false
  static inline bool IsValidLiftedConditionalLogicalOperator(::System::Type* left, ::System::Type* right, ::ArrayW<::System::Reflection::ParameterInfo*> pms);

  /// @brief Method Label, addr 0x638ca74, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::LabelExpression* Label(::System::Linq::Expressions::LabelTarget* target);

  /// @brief Method Label, addr 0x638cad0, size 0xe4, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::LabelExpression* Label(::System::Linq::Expressions::LabelTarget* target, ::System::Linq::Expressions::Expression* defaultValue);

  /// @brief Method Label, addr 0x638cbb4, size 0x88, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::LabelTarget* Label();

  /// @brief Method Label, addr 0x638ccf8, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::LabelTarget* Label(::StringW name);

  /// @brief Method Label, addr 0x638cd84, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::LabelTarget* Label(::System::Type* type);

  /// @brief Method Label, addr 0x638cc3c, size 0xbc, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::LabelTarget* Label(::System::Type* type, ::StringW name);

  /// @brief Method Lambda, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDelegate>
  static inline ::System::Linq::Expressions::Expression_1<TDelegate>* Lambda(::System::Linq::Expressions::Expression* body, ::StringW name, bool tailCall,
                                                                             ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>* parameters);

  /// @brief Method Lambda, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDelegate>
  static inline ::System::Linq::Expressions::Expression_1<TDelegate>* Lambda(::System::Linq::Expressions::Expression* body,
                                                                             /* [ParamArray] */ ::ArrayW<::System::Linq::Expressions::ParameterExpression*> parameters);

  /// @brief Method Lambda, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDelegate>
  static inline ::System::Linq::Expressions::Expression_1<TDelegate>* Lambda(::System::Linq::Expressions::Expression* body,
                                                                             ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>* parameters);

  /// @brief Method Lambda, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDelegate>
  static inline ::System::Linq::Expressions::Expression_1<TDelegate>* Lambda(::System::Linq::Expressions::Expression* body, bool tailCall,
                                                                             ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>* parameters);

  /// @brief Method Lambda, addr 0x638d314, size 0xe0, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::LambdaExpression* Lambda(::System::Type* delegateType, ::System::Linq::Expressions::Expression* body, ::StringW name, bool tailCall,
                                                                      ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>* parameters);

  /// @brief Method Lambda, addr 0x638d29c, size 0x78, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::LambdaExpression* Lambda(::System::Type* delegateType, ::System::Linq::Expressions::Expression* body,
                                                                      /* [ParamArray] */ ::ArrayW<::System::Linq::Expressions::ParameterExpression*> parameters);

  /// @brief Method LeftShift, addr 0x6384a74, size 0x214, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* LeftShift(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                         ::System::Reflection::MethodInfo* method);

  /// @brief Method LeftShiftAssign, addr 0x6385698, size 0x270, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* LeftShiftAssign(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                               ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::LambdaExpression* conversion);

  /// @brief Method LessThan, addr 0x6383900, size 0x120, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* LessThan(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, bool liftToNull,
                                                                        ::System::Reflection::MethodInfo* method);

  /// @brief Method LessThanOrEqual, addr 0x6383a20, size 0x120, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* LessThanOrEqual(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, bool liftToNull,
                                                                               ::System::Reflection::MethodInfo* method);

  /// @brief Method Loop, addr 0x638da9c, size 0x108, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::LoopExpression* Loop(::System::Linq::Expressions::Expression* body, ::System::Linq::Expressions::LabelTarget* _cordl_break,
                                                                  ::System::Linq::Expressions::LabelTarget* _cordl_continue);

  /// @brief Method MakeBinary, addr 0x637d254, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* MakeBinary(::System::Linq::Expressions::ExpressionType binaryType, ::System::Linq::Expressions::Expression* left,
                                                                          ::System::Linq::Expressions::Expression* right, bool liftToNull, ::System::Reflection::MethodInfo* method);

  /// @brief Method MakeBinary, addr 0x637be40, size 0x99c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* MakeBinary(::System::Linq::Expressions::ExpressionType binaryType, ::System::Linq::Expressions::Expression* left,
                                                                          ::System::Linq::Expressions::Expression* right, bool liftToNull, ::System::Reflection::MethodInfo* method,
                                                                          ::System::Linq::Expressions::LambdaExpression* conversion);

  /// @brief Method MakeCatchBlock, addr 0x638917c, size 0x250, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::CatchBlock* MakeCatchBlock(::System::Type* type, ::System::Linq::Expressions::ParameterExpression* variable, ::System::Linq::Expressions::Expression* body,
                                                                        ::System::Linq::Expressions::Expression* filter);

  /// @brief Method MakeGoto, addr 0x6389cf0, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::GotoExpression* MakeGoto(::System::Linq::Expressions::GotoExpressionKind kind, ::System::Linq::Expressions::LabelTarget* target,
                                                                      ::System::Linq::Expressions::Expression* value, ::System::Type* type);

  /// @brief Method MakeIndex, addr 0x637d9c0, size 0x94, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::IndexExpression* MakeIndex(::System::Linq::Expressions::Expression* instance, ::System::Reflection::PropertyInfo* indexer,
                                                                        ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* arguments);

  /// @brief Method MakeIndexProperty, addr 0x638a8c0, size 0xc4, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::IndexExpression* MakeIndexProperty(::System::Linq::Expressions::Expression* instance, ::System::Reflection::PropertyInfo* indexer, ::StringW paramName,
                                                                                ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* argList);

  /// @brief Method MakeMemberAccess, addr 0x637d6b4, size 0x178, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::MemberExpression* MakeMemberAccess(::System::Linq::Expressions::Expression* expression, ::System::Reflection::MemberInfo* member);

  /// @brief Method MakeOpAssignUnary, addr 0x6394878, size 0x2a0, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* MakeOpAssignUnary(::System::Linq::Expressions::ExpressionType kind, ::System::Linq::Expressions::Expression* expression,
                                                                                ::System::Reflection::MethodInfo* method);

  /// @brief Method MakeTry, addr 0x6390b6c, size 0x254, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::TryExpression* MakeTry(::System::Type* type, ::System::Linq::Expressions::Expression* body, ::System::Linq::Expressions::Expression* finally,
                                                                    ::System::Linq::Expressions::Expression* fault,
                                                                    ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::CatchBlock*>* handlers);

  /// @brief Method MakeUnary, addr 0x6391874, size 0x534, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* MakeUnary(::System::Linq::Expressions::ExpressionType unaryType, ::System::Linq::Expressions::Expression* operand, ::System::Type* type,
                                                                        ::System::Reflection::MethodInfo* method);

  /// @brief Method Modulo, addr 0x63824a8, size 0x228, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* Modulo(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                      ::System::Reflection::MethodInfo* method);

  /// @brief Method ModuloAssign, addr 0x6385908, size 0x284, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* ModuloAssign(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                            ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::LambdaExpression* conversion);

  /// @brief Method Multiply, addr 0x6381e30, size 0x228, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* Multiply(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                        ::System::Reflection::MethodInfo* method);

  /// @brief Method MultiplyAssign, addr 0x6385b8c, size 0x284, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* MultiplyAssign(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                              ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::LambdaExpression* conversion);

  /// @brief Method MultiplyAssignChecked, addr 0x6386c18, size 0x284, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* MultiplyAssignChecked(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                                     ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::LambdaExpression* conversion);

  /// @brief Method MultiplyChecked, addr 0x6382058, size 0x228, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* MultiplyChecked(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                               ::System::Reflection::MethodInfo* method);

  /// @brief Method Negate, addr 0x6391da8, size 0x1d8, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* Negate(::System::Linq::Expressions::Expression* expression, ::System::Reflection::MethodInfo* method);

  /// @brief Method NegateChecked, addr 0x6391f80, size 0x1d8, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* NegateChecked(::System::Linq::Expressions::Expression* expression, ::System::Reflection::MethodInfo* method);

  /// @brief Method NewArrayBounds, addr 0x6390704, size 0x298, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::NewArrayExpression* NewArrayBounds(::System::Type* type, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* bounds);

  /// @brief Method NewArrayInit, addr 0x6390280, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::NewArrayExpression* NewArrayInit(::System::Type* type, /* [ParamArray] */ ::ArrayW<::System::Linq::Expressions::Expression*> initializers);

  /// @brief Method NewArrayInit, addr 0x63902e8, size 0x41c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::NewArrayExpression* NewArrayInit(::System::Type* type,
                                                                              ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* initializers);

  static inline ::System::Linq::Expressions::Expression* New_ctor();

  /// @brief Method Not, addr 0x63947bc, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* Not(::System::Linq::Expressions::Expression* expression);

  /// @brief Method Not, addr 0x6392158, size 0x1e4, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* Not(::System::Linq::Expressions::Expression* expression, ::System::Reflection::MethodInfo* method);

  /// @brief Method NotEqual, addr 0x638730c, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* NotEqual(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right);

  /// @brief Method NotEqual, addr 0x6383ea0, size 0x120, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* NotEqual(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, bool liftToNull,
                                                                        ::System::Reflection::MethodInfo* method);

  /// @brief Method OnesComplement, addr 0x639267c, size 0x1a0, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* OnesComplement(::System::Linq::Expressions::Expression* expression, ::System::Reflection::MethodInfo* method);

  /// @brief Method Or, addr 0x6383160, size 0x228, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* Or(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                  ::System::Reflection::MethodInfo* method);

  /// @brief Method OrAssign, addr 0x6385e10, size 0x284, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* OrAssign(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                        ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::LambdaExpression* conversion);

  /// @brief Method OrElse, addr 0x6383388, size 0x578, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* OrElse(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                      ::System::Reflection::MethodInfo* method);

  /// @brief Method Parameter, addr 0x639099c, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::ParameterExpression* Parameter(::System::Type* type);

  /// @brief Method Parameter, addr 0x637e3ec, size 0xb8, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::ParameterExpression* Parameter(::System::Type* type, ::StringW name);

  /// @brief Method ParameterIsAssignable, addr 0x637ff04, size 0xb8, virtual false, abstract: false, final false
  static inline bool ParameterIsAssignable(::System::Reflection::ParameterInfo* pi, ::System::Type* argType);

  /// @brief Method PostDecrementAssign, addr 0x63939dc, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* PostDecrementAssign(::System::Linq::Expressions::Expression* expression, ::System::Reflection::MethodInfo* method);

  /// @brief Method PostIncrementAssign, addr 0x6393904, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* PostIncrementAssign(::System::Linq::Expressions::Expression* expression, ::System::Reflection::MethodInfo* method);

  /// @brief Method Power, addr 0x63826d0, size 0x3b4, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* Power(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                     ::System::Reflection::MethodInfo* method);

  /// @brief Method PowerAssign, addr 0x6386094, size 0x188, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* PowerAssign(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                           ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::LambdaExpression* conversion);

  /// @brief Method PreDecrementAssign, addr 0x6393970, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* PreDecrementAssign(::System::Linq::Expressions::Expression* expression, ::System::Reflection::MethodInfo* method);

  /// @brief Method PreIncrementAssign, addr 0x6394818, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* PreIncrementAssign(::System::Linq::Expressions::Expression* expression);

  /// @brief Method PreIncrementAssign, addr 0x6393898, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* PreIncrementAssign(::System::Linq::Expressions::Expression* expression, ::System::Reflection::MethodInfo* method);

  /// @brief Method Property, addr 0x638a32c, size 0xb8, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::IndexExpression* Property(::System::Linq::Expressions::Expression* instance, ::System::Reflection::PropertyInfo* indexer,
                                                                       ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* arguments);

  /// @brief Method Property, addr 0x638deb8, size 0x2a8, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::MemberExpression* Property(::System::Linq::Expressions::Expression* expression, ::System::Reflection::PropertyInfo* property);

  /// @brief Method Property, addr 0x637e4a4, size 0x168, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::MemberExpression* Property(::System::Linq::Expressions::Expression* expression, ::StringW propertyName);

  /// @brief Method Quote, addr 0x63930cc, size 0x124, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* Quote(::System::Linq::Expressions::Expression* expression);

  /// @brief Method Reduce, addr 0x6389a6c, size 0x48, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* Reduce();

  /// @brief Method ReduceAndCheck, addr 0x6389b28, size 0x108, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* ReduceAndCheck();

  /// @brief Method ReferenceEqual, addr 0x637baa0, size 0x188, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* ReferenceEqual(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right);

  /// @brief Method ReferenceNotEqual, addr 0x637bc28, size 0x188, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* ReferenceNotEqual(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right);

  /// @brief Method RequiresCanRead, addr 0x6388290, size 0x150, virtual false, abstract: false, final false
  static inline void RequiresCanRead(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* items, ::StringW paramName);

  /// @brief Method RequiresCanWrite, addr 0x637f094, size 0x228, virtual false, abstract: false, final false
  static inline void RequiresCanWrite(::System::Linq::Expressions::Expression* expression, ::StringW paramName);

  /// @brief Method Return, addr 0x6389dec, size 0x94, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::GotoExpression* Return(::System::Linq::Expressions::LabelTarget* target);

  /// @brief Method Return, addr 0x6389e80, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::GotoExpression* Return(::System::Linq::Expressions::LabelTarget* target, ::System::Linq::Expressions::Expression* value);

  /// @brief Method RightShift, addr 0x6384860, size 0x214, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* RightShift(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                          ::System::Reflection::MethodInfo* method);

  /// @brief Method RightShiftAssign, addr 0x638621c, size 0x270, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* RightShiftAssign(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                                ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::LambdaExpression* conversion);

  /// @brief Method Subtract, addr 0x63819e0, size 0x228, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* Subtract(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                        ::System::Reflection::MethodInfo* method);

  /// @brief Method SubtractAssign, addr 0x638648c, size 0x284, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* SubtractAssign(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                              ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::LambdaExpression* conversion);

  /// @brief Method SubtractAssignChecked, addr 0x6386994, size 0x284, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* SubtractAssignChecked(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                                     ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::LambdaExpression* conversion);

  /// @brief Method SubtractChecked, addr 0x6381c08, size 0x228, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* SubtractChecked(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                               ::System::Reflection::MethodInfo* method);

  /// @brief Method Throw, addr 0x6392df4, size 0x160, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* Throw(::System::Linq::Expressions::Expression* value, ::System::Type* type);

  /// @brief Method ToString, addr 0x6389c54, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryFinally, addr 0x6390af8, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::TryExpression* TryFinally(::System::Linq::Expressions::Expression* body, ::System::Linq::Expressions::Expression* finally);

  /// @brief Method TryQuote, addr 0x638a324, size 0x8, virtual false, abstract: false, final false
  static inline bool TryQuote(::System::Type* parameterType, ::by_ref<::System::Linq::Expressions::Expression*> argument);

  /// @brief Method TypeAs, addr 0x6392f54, size 0x178, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* TypeAs(::System::Linq::Expressions::Expression* expression, ::System::Type* type);

  /// @brief Method TypeEqual, addr 0x6391760, size 0x114, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::TypeBinaryExpression* TypeEqual(::System::Linq::Expressions::Expression* expression, ::System::Type* type);

  /// @brief Method TypeIs, addr 0x639164c, size 0x114, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::TypeBinaryExpression* TypeIs(::System::Linq::Expressions::Expression* expression, ::System::Type* type);

  /// @brief Method UnaryPlus, addr 0x63931f0, size 0x1a0, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* UnaryPlus(::System::Linq::Expressions::Expression* expression, ::System::Reflection::MethodInfo* method);

  /// @brief Method Unbox, addr 0x6393390, size 0x1c8, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* Unbox(::System::Linq::Expressions::Expression* expression, ::System::Type* type);

  /// @brief Method Validate, addr 0x63909f8, size 0x100, virtual false, abstract: false, final false
  static inline void Validate(::System::Type* type, bool allowByRef);

  /// @brief Method ValidateAccessor, addr 0x638ae90, size 0x1c0, virtual false, abstract: false, final false
  static inline void ValidateAccessor(::System::Linq::Expressions::Expression* instance, ::System::Reflection::MethodInfo* method, ::ArrayW<::System::Reflection::ParameterInfo*> indexes,
                                      ::by_ref<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*> arguments, ::StringW paramName);

  /// @brief Method ValidateAccessorArgumentTypes, addr 0x638b10c, size 0x444, virtual false, abstract: false, final false
  static inline void ValidateAccessorArgumentTypes(::System::Reflection::MethodInfo* method, ::ArrayW<::System::Reflection::ParameterInfo*> indexes,
                                                   ::by_ref<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*> arguments, ::StringW paramName);

  /// @brief Method ValidateArgumentCount, addr 0x638b838, size 0x8, virtual false, abstract: false, final false
  static inline void ValidateArgumentCount(::System::Reflection::MethodBase* method, ::System::Linq::Expressions::ExpressionType nodeKind, int32_t count,
                                           ::ArrayW<::System::Reflection::ParameterInfo*> pis);

  /// @brief Method ValidateArgumentTypes, addr 0x638ca6c, size 0x8, virtual false, abstract: false, final false
  static inline void ValidateArgumentTypes(::System::Reflection::MethodBase* method, ::System::Linq::Expressions::ExpressionType nodeKind,
                                           ::by_ref<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*> arguments, ::StringW methodParamName);

  /// @brief Method ValidateCallInstanceType, addr 0x638b050, size 0xbc, virtual false, abstract: false, final false
  static inline void ValidateCallInstanceType(::System::Type* instanceType, ::System::Reflection::MethodInfo* method);

  /// @brief Method ValidateCoalesceArgTypes, addr 0x6387624, size 0x17c, virtual false, abstract: false, final false
  static inline ::System::Type* ValidateCoalesceArgTypes(::System::Type* left, ::System::Type* right);

  /// @brief Method ValidateGoto, addr 0x638a030, size 0x19c, virtual false, abstract: false, final false
  static inline void ValidateGoto(::System::Linq::Expressions::LabelTarget* target, ::by_ref<::System::Linq::Expressions::Expression*> value, ::StringW targetParameter, ::StringW valueParameter,
                                  ::System::Type* type);

  /// @brief Method ValidateGotoType, addr 0x638a1cc, size 0x158, virtual false, abstract: false, final false
  static inline void ValidateGotoType(::System::Type* expectedType, ::by_ref<::System::Linq::Expressions::Expression*> value, ::StringW paramName);

  /// @brief Method ValidateIndexedProperty, addr 0x638a984, size 0x50c, virtual false, abstract: false, final false
  static inline void ValidateIndexedProperty(::System::Linq::Expressions::Expression* instance, ::System::Reflection::PropertyInfo* indexer, ::StringW paramName,
                                             ::by_ref<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*> argList);

  /// @brief Method ValidateLambdaArgs, addr 0x638d3f4, size 0x6a8, virtual false, abstract: false, final false
  static inline void ValidateLambdaArgs(::System::Type* delegateType, ::by_ref<::System::Linq::Expressions::Expression*> body,
                                        ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* parameters, ::StringW paramName);

  /// @brief Method ValidateMethodAndGetParameters, addr 0x638e230, size 0x9c, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Reflection::ParameterInfo*> ValidateMethodAndGetParameters(::System::Linq::Expressions::Expression* instance, ::System::Reflection::MethodInfo* method);

  /// @brief Method ValidateMethodInfo, addr 0x6380ac4, size 0x90, virtual false, abstract: false, final false
  static inline void ValidateMethodInfo(::System::Reflection::MethodInfo* method, ::StringW paramName);

  /// @brief Method ValidateOneArgument, addr 0x638b840, size 0xc, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::Expression* ValidateOneArgument(::System::Reflection::MethodBase* method, ::System::Linq::Expressions::ExpressionType nodeKind,
                                                                             ::System::Linq::Expressions::Expression* arg, ::System::Reflection::ParameterInfo* pi, ::StringW methodParamName,
                                                                             ::StringW argumentParamName);

  /// @brief Method ValidateOpAssignConversionLambda, addr 0x6380308, size 0x270, virtual false, abstract: false, final false
  static inline void ValidateOpAssignConversionLambda(::System::Linq::Expressions::LambdaExpression* conversion, ::System::Linq::Expressions::Expression* left,
                                                      ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::ExpressionType nodeType);

  /// @brief Method ValidateOperator, addr 0x637fdc8, size 0x13c, virtual false, abstract: false, final false
  static inline void ValidateOperator(::System::Reflection::MethodInfo* method);

  /// @brief Method ValidateParamswithOperandsOrThrow, addr 0x637ffbc, size 0xe0, virtual false, abstract: false, final false
  static inline void ValidateParamswithOperandsOrThrow(::System::Type* paramType, ::System::Type* operandType, ::System::Linq::Expressions::ExpressionType exprType, ::StringW name);

  /// @brief Method ValidateStaticOrInstanceMethod, addr 0x638fe7c, size 0x104, virtual false, abstract: false, final false
  static inline void ValidateStaticOrInstanceMethod(::System::Linq::Expressions::Expression* instance, ::System::Reflection::MethodInfo* method);

  /// @brief Method ValidateTryAndCatchHaveSameType, addr 0x6390dc0, size 0x88c, virtual false, abstract: false, final false
  static inline void ValidateTryAndCatchHaveSameType(::System::Type* type, ::System::Linq::Expressions::Expression* tryBody,
                                                     ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::CatchBlock*>* handlers);

  /// @brief Method ValidateUserDefinedConditionalLogicOperator, addr 0x6380cf0, size 0x5cc, virtual false, abstract: false, final false
  static inline void ValidateUserDefinedConditionalLogicOperator(::System::Linq::Expressions::ExpressionType nodeType, ::System::Type* left, ::System::Type* right,
                                                                 ::System::Reflection::MethodInfo* method);

  /// @brief Method ValidateVariables, addr 0x6388fb8, size 0x1c4, virtual false, abstract: false, final false
  static inline void ValidateVariables(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* varList, ::StringW collectionName);

  /// @brief Method Variable, addr 0x637d638, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::ParameterExpression* Variable(::System::Type* type, ::StringW name);

  /// @brief Method VerifyOpTrueFalse, addr 0x63813c4, size 0x1d0, virtual false, abstract: false, final false
  static inline void VerifyOpTrueFalse(::System::Linq::Expressions::ExpressionType nodeType, ::System::Type* left, ::System::Reflection::MethodInfo* opTrue, ::StringW paramName);

  /// @brief Method VisitChildren, addr 0x6389ab4, size 0x74, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* VisitChildren(::System::Linq::Expressions::ExpressionVisitor* visitor);

  /// @brief Method .ctor, addr 0x637b7f0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Dynamic::Utils::CacheDict_2<::System::Type*, ::System::Reflection::MethodInfo*>* getStaticF_s_lambdaDelegateCache();

  static inline ::System::Dynamic::Utils::CacheDict_2<
      ::System::Type*, ::System::Func_5<::System::Linq::Expressions::Expression*, ::StringW, bool,
                                        ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*, ::System::Linq::Expressions::LambdaExpression*>*>*
  getStaticF_s_lambdaFactories();

  static inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression_ExtensionInfo*>*
  getStaticF_s_legacyCtorSupportTable();

  /// @brief Method get_CanReduce, addr 0x6389a64, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanReduce();

  /// @brief Method get_NodeType, addr 0x638986c, size 0xfc, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::ExpressionType get_NodeType();

  /// @brief Method get_Type, addr 0x6389968, size 0xfc, virtual true, abstract: false, final false
  inline ::System::Type* get_Type();

  static inline void setStaticF_s_lambdaDelegateCache(::System::Dynamic::Utils::CacheDict_2<::System::Type*, ::System::Reflection::MethodInfo*>* value);

  static inline void setStaticF_s_lambdaFactories(
      ::System::Dynamic::Utils::CacheDict_2<::System::Type*, ::System::Func_5<::System::Linq::Expressions::Expression*, ::StringW, bool,
                                                                              ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*,
                                                                              ::System::Linq::Expressions::LambdaExpression*>*>* value);

  static inline void setStaticF_s_legacyCtorSupportTable(
      ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression_ExtensionInfo*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Expression();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Expression", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression(Expression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression(Expression const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16659 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Linq::Expressions::Expression) == 0x10, "Size mismatch!");

} // namespace System::Linq::Expressions
