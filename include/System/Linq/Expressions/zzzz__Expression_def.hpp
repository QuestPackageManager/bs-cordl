#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Expression.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__ExpressionType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
MARK_REF_PTR_T(::System::Linq::Expressions::Expression);
MARK_REF_PTR_T(::System::Linq::Expressions::Expression_BinaryExpressionProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::Expression_BlockExpressionProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::Expression_CatchBlockProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::Expression_ConditionalExpressionProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::Expression_ConstantExpressionProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::Expression_DebugInfoExpressionProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::Expression_DefaultExpressionProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::Expression_ExtensionInfo);
MARK_REF_PTR_T(::System::Linq::Expressions::Expression_GotoExpressionProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::Expression_IndexExpressionProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::Expression_InvocationExpressionProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::Expression_LabelExpressionProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::Expression_LambdaExpressionProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::Expression_ListInitExpressionProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::Expression_LoopExpressionProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::Expression_MemberExpressionProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::Expression_MemberInitExpressionProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::Expression_MethodCallExpressionProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::Expression_NewArrayExpressionProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::Expression_NewExpressionProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::Expression_ParameterExpressionProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::Expression_RuntimeVariablesExpressionProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::Expression_SwitchCaseProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::Expression_SwitchExpressionProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::Expression_TryExpressionProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::Expression_TypeBinaryExpressionProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::Expression_UnaryExpressionProxy);
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
  // Ctor Parameters [CppParam { name: "", ty: "Expression_BinaryExpressionProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_BinaryExpressionProxy(Expression_BinaryExpressionProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_BinaryExpressionProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_BinaryExpressionProxy(Expression_BinaryExpressionProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13619 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Expression_BinaryExpressionProxy, 0x10>, "Size mismatch!");

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
  // Ctor Parameters [CppParam { name: "", ty: "Expression_BlockExpressionProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_BlockExpressionProxy(Expression_BlockExpressionProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_BlockExpressionProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_BlockExpressionProxy(Expression_BlockExpressionProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13620 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Expression_BlockExpressionProxy, 0x10>, "Size mismatch!");

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
  // Ctor Parameters [CppParam { name: "", ty: "Expression_CatchBlockProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_CatchBlockProxy(Expression_CatchBlockProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_CatchBlockProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_CatchBlockProxy(Expression_CatchBlockProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13621 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Expression_CatchBlockProxy, 0x10>, "Size mismatch!");

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
  // Ctor Parameters [CppParam { name: "", ty: "Expression_ConditionalExpressionProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_ConditionalExpressionProxy(Expression_ConditionalExpressionProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_ConditionalExpressionProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_ConditionalExpressionProxy(Expression_ConditionalExpressionProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13622 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Expression_ConditionalExpressionProxy, 0x10>, "Size mismatch!");

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
  // Ctor Parameters [CppParam { name: "", ty: "Expression_ConstantExpressionProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_ConstantExpressionProxy(Expression_ConstantExpressionProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_ConstantExpressionProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_ConstantExpressionProxy(Expression_ConstantExpressionProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13623 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Expression_ConstantExpressionProxy, 0x10>, "Size mismatch!");

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
  // Ctor Parameters [CppParam { name: "", ty: "Expression_DebugInfoExpressionProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_DebugInfoExpressionProxy(Expression_DebugInfoExpressionProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_DebugInfoExpressionProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_DebugInfoExpressionProxy(Expression_DebugInfoExpressionProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13624 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Expression_DebugInfoExpressionProxy, 0x10>, "Size mismatch!");

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
  // Ctor Parameters [CppParam { name: "", ty: "Expression_DefaultExpressionProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_DefaultExpressionProxy(Expression_DefaultExpressionProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_DefaultExpressionProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_DefaultExpressionProxy(Expression_DefaultExpressionProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13625 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Expression_DefaultExpressionProxy, 0x10>, "Size mismatch!");

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
  // Ctor Parameters [CppParam { name: "", ty: "Expression_GotoExpressionProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_GotoExpressionProxy(Expression_GotoExpressionProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_GotoExpressionProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_GotoExpressionProxy(Expression_GotoExpressionProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13626 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Expression_GotoExpressionProxy, 0x10>, "Size mismatch!");

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
  // Ctor Parameters [CppParam { name: "", ty: "Expression_IndexExpressionProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_IndexExpressionProxy(Expression_IndexExpressionProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_IndexExpressionProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_IndexExpressionProxy(Expression_IndexExpressionProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13627 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Expression_IndexExpressionProxy, 0x10>, "Size mismatch!");

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
  // Ctor Parameters [CppParam { name: "", ty: "Expression_InvocationExpressionProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_InvocationExpressionProxy(Expression_InvocationExpressionProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_InvocationExpressionProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_InvocationExpressionProxy(Expression_InvocationExpressionProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13628 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Expression_InvocationExpressionProxy, 0x10>, "Size mismatch!");

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
  // Ctor Parameters [CppParam { name: "", ty: "Expression_LabelExpressionProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_LabelExpressionProxy(Expression_LabelExpressionProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_LabelExpressionProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_LabelExpressionProxy(Expression_LabelExpressionProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13629 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Expression_LabelExpressionProxy, 0x10>, "Size mismatch!");

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
  // Ctor Parameters [CppParam { name: "", ty: "Expression_LambdaExpressionProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_LambdaExpressionProxy(Expression_LambdaExpressionProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_LambdaExpressionProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_LambdaExpressionProxy(Expression_LambdaExpressionProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13630 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Expression_LambdaExpressionProxy, 0x10>, "Size mismatch!");

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
  // Ctor Parameters [CppParam { name: "", ty: "Expression_ListInitExpressionProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_ListInitExpressionProxy(Expression_ListInitExpressionProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_ListInitExpressionProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_ListInitExpressionProxy(Expression_ListInitExpressionProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13631 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Expression_ListInitExpressionProxy, 0x10>, "Size mismatch!");

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
  // Ctor Parameters [CppParam { name: "", ty: "Expression_LoopExpressionProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_LoopExpressionProxy(Expression_LoopExpressionProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_LoopExpressionProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_LoopExpressionProxy(Expression_LoopExpressionProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13632 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Expression_LoopExpressionProxy, 0x10>, "Size mismatch!");

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
  // Ctor Parameters [CppParam { name: "", ty: "Expression_MemberExpressionProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_MemberExpressionProxy(Expression_MemberExpressionProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_MemberExpressionProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_MemberExpressionProxy(Expression_MemberExpressionProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13633 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Expression_MemberExpressionProxy, 0x10>, "Size mismatch!");

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
  // Ctor Parameters [CppParam { name: "", ty: "Expression_MemberInitExpressionProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_MemberInitExpressionProxy(Expression_MemberInitExpressionProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_MemberInitExpressionProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_MemberInitExpressionProxy(Expression_MemberInitExpressionProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13634 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Expression_MemberInitExpressionProxy, 0x10>, "Size mismatch!");

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
  // Ctor Parameters [CppParam { name: "", ty: "Expression_MethodCallExpressionProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_MethodCallExpressionProxy(Expression_MethodCallExpressionProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_MethodCallExpressionProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_MethodCallExpressionProxy(Expression_MethodCallExpressionProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13635 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Expression_MethodCallExpressionProxy, 0x10>, "Size mismatch!");

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
  // Ctor Parameters [CppParam { name: "", ty: "Expression_NewArrayExpressionProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_NewArrayExpressionProxy(Expression_NewArrayExpressionProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_NewArrayExpressionProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_NewArrayExpressionProxy(Expression_NewArrayExpressionProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13636 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Expression_NewArrayExpressionProxy, 0x10>, "Size mismatch!");

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
  // Ctor Parameters [CppParam { name: "", ty: "Expression_NewExpressionProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_NewExpressionProxy(Expression_NewExpressionProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_NewExpressionProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_NewExpressionProxy(Expression_NewExpressionProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13637 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Expression_NewExpressionProxy, 0x10>, "Size mismatch!");

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
  // Ctor Parameters [CppParam { name: "", ty: "Expression_ParameterExpressionProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_ParameterExpressionProxy(Expression_ParameterExpressionProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_ParameterExpressionProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_ParameterExpressionProxy(Expression_ParameterExpressionProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13638 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Expression_ParameterExpressionProxy, 0x10>, "Size mismatch!");

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
  // Ctor Parameters [CppParam { name: "", ty: "Expression_RuntimeVariablesExpressionProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_RuntimeVariablesExpressionProxy(Expression_RuntimeVariablesExpressionProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_RuntimeVariablesExpressionProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_RuntimeVariablesExpressionProxy(Expression_RuntimeVariablesExpressionProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13639 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Expression_RuntimeVariablesExpressionProxy, 0x10>, "Size mismatch!");

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
  // Ctor Parameters [CppParam { name: "", ty: "Expression_SwitchCaseProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_SwitchCaseProxy(Expression_SwitchCaseProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_SwitchCaseProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_SwitchCaseProxy(Expression_SwitchCaseProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13640 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Expression_SwitchCaseProxy, 0x10>, "Size mismatch!");

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
  // Ctor Parameters [CppParam { name: "", ty: "Expression_SwitchExpressionProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_SwitchExpressionProxy(Expression_SwitchExpressionProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_SwitchExpressionProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_SwitchExpressionProxy(Expression_SwitchExpressionProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13641 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Expression_SwitchExpressionProxy, 0x10>, "Size mismatch!");

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
  // Ctor Parameters [CppParam { name: "", ty: "Expression_TryExpressionProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_TryExpressionProxy(Expression_TryExpressionProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_TryExpressionProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_TryExpressionProxy(Expression_TryExpressionProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13642 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Expression_TryExpressionProxy, 0x10>, "Size mismatch!");

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
  // Ctor Parameters [CppParam { name: "", ty: "Expression_TypeBinaryExpressionProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_TypeBinaryExpressionProxy(Expression_TypeBinaryExpressionProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_TypeBinaryExpressionProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_TypeBinaryExpressionProxy(Expression_TypeBinaryExpressionProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13643 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Expression_TypeBinaryExpressionProxy, 0x10>, "Size mismatch!");

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
  // Ctor Parameters [CppParam { name: "", ty: "Expression_UnaryExpressionProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_UnaryExpressionProxy(Expression_UnaryExpressionProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_UnaryExpressionProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_UnaryExpressionProxy(Expression_UnaryExpressionProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13644 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Expression_UnaryExpressionProxy, 0x10>, "Size mismatch!");

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
  // Ctor Parameters [CppParam { name: "", ty: "Expression_ExtensionInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression_ExtensionInfo(Expression_ExtensionInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression_ExtensionInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression_ExtensionInfo(Expression_ExtensionInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13645 };

  /// @brief Field NodeType, offset: 0x10, size: 0x4, def value: None
  ::System::Linq::Expressions::ExpressionType ___NodeType;

  /// @brief Field Type, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ___Type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::Expression_ExtensionInfo, ___NodeType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Expression_ExtensionInfo, ___Type) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Expression_ExtensionInfo, 0x20>, "Size mismatch!");

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

  /// @brief Method Accept, addr 0x40a2378, size 0x28, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* visitor);

  /// @brief Method Add, addr 0x4099840, size 0x244, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* Add(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                   ::System::Reflection::MethodInfo* method);

  /// @brief Method AddAssign, addr 0x409d1bc, size 0x298, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* AddAssign(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                         ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::LambdaExpression* conversion);

  /// @brief Method AddAssignChecked, addr 0x409ecf4, size 0x298, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* AddAssignChecked(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                                ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::LambdaExpression* conversion);

  /// @brief Method AddChecked, addr 0x4099a84, size 0x248, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* AddChecked(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                          ::System::Reflection::MethodInfo* method);

  /// @brief Method And, addr 0x409ae48, size 0x248, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* And(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                   ::System::Reflection::MethodInfo* method);

  /// @brief Method AndAlso, addr 0x409fbf4, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* AndAlso(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right);

  /// @brief Method AndAlso, addr 0x409b090, size 0x4ec, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* AndAlso(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                       ::System::Reflection::MethodInfo* method);

  /// @brief Method AndAssign, addr 0x409d454, size 0x298, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* AndAssign(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                         ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::LambdaExpression* conversion);

  /// @brief Method ApplyTypeArgs, addr 0x40a86cc, size 0xb4, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* ApplyTypeArgs(::System::Reflection::MethodInfo* m, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> typeArgs);

  /// @brief Method ArrayAccess, addr 0x40a3098, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::IndexExpression* ArrayAccess(::System::Linq::Expressions::Expression* array,
                                                                          ::ArrayW<::System::Linq::Expressions::Expression*, ::Array<::System::Linq::Expressions::Expression*>*> indexes);

  /// @brief Method ArrayAccess, addr 0x40a2be4, size 0x4b4, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::IndexExpression* ArrayAccess(::System::Linq::Expressions::Expression* array,
                                                                          ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* indexes);

  /// @brief Method ArrayIndex, addr 0x409cb98, size 0x1ec, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* ArrayIndex(::System::Linq::Expressions::Expression* array, ::System::Linq::Expressions::Expression* index);

  /// @brief Method ArrayLength, addr 0x40ab064, size 0x1dc, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* ArrayLength(::System::Linq::Expressions::Expression* array);

  /// @brief Method Assign, addr 0x4095580, size 0x1ec, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* Assign(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right);

  /// @brief Method Block, addr 0x40a002c, size 0xbc, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BlockExpression* Block(::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1);

  /// @brief Method Block, addr 0x40a00e8, size 0xf0, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BlockExpression* Block(::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1,
                                                                    ::System::Linq::Expressions::Expression* arg2);

  /// @brief Method Block, addr 0x40a01d8, size 0x124, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BlockExpression* Block(::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1,
                                                                    ::System::Linq::Expressions::Expression* arg2, ::System::Linq::Expressions::Expression* arg3);

  /// @brief Method Block, addr 0x40a02fc, size 0x150, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BlockExpression* Block(::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1,
                                                                    ::System::Linq::Expressions::Expression* arg2, ::System::Linq::Expressions::Expression* arg3,
                                                                    ::System::Linq::Expressions::Expression* arg4);

  /// @brief Method Block, addr 0x40a044c, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BlockExpression* Block(::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* expressions);

  /// @brief Method Block, addr 0x40a04d8, size 0x88, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BlockExpression* Block(::System::Type* type,
                                                                    ::ArrayW<::System::Linq::Expressions::Expression*, ::Array<::System::Linq::Expressions::Expression*>*> expressions);

  /// @brief Method Block, addr 0x40a0560, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BlockExpression* Block(::System::Type* type, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* expressions);

  /// @brief Method Block, addr 0x40a088c, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BlockExpression* Block(::System::Type* type, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>* variables,
                                                                    ::ArrayW<::System::Linq::Expressions::Expression*, ::Array<::System::Linq::Expressions::Expression*>*> expressions);

  /// @brief Method Block, addr 0x40a05fc, size 0x22c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BlockExpression* Block(::System::Type* type, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>* variables,
                                                                    ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* expressions);

  /// @brief Method Block, addr 0x40a0828, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BlockExpression* Block(::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>* variables,
                                                                    ::ArrayW<::System::Linq::Expressions::Expression*, ::Array<::System::Linq::Expressions::Expression*>*> expressions);

  /// @brief Method Block, addr 0x40959a8, size 0x174, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BlockExpression* Block(::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>* variables,
                                                                    ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* expressions);

  /// @brief Method BlockCore, addr 0x40a1304, size 0x388, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BlockExpression* BlockCore(::System::Type* type,
                                                                        ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* variables,
                                                                        ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* expressions);

  /// @brief Method Break, addr 0x40a23a8, size 0xb8, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::GotoExpression* Break(::System::Linq::Expressions::LabelTarget* target);

  /// @brief Method Call, addr 0x40a7cb8, size 0x10c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::MethodCallExpression* Call(::System::Linq::Expressions::Expression* instance, ::System::Reflection::MethodInfo* method);

  /// @brief Method Call, addr 0x40a7dc4, size 0x184, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::MethodCallExpression* Call(::System::Linq::Expressions::Expression* instance, ::System::Reflection::MethodInfo* method,
                                                                        ::System::Linq::Expressions::Expression* arg0);

  /// @brief Method Call, addr 0x40a7f48, size 0x1f0, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::MethodCallExpression* Call(::System::Linq::Expressions::Expression* instance, ::System::Reflection::MethodInfo* method,
                                                                        ::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1);

  /// @brief Method Call, addr 0x40a8138, size 0x25c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::MethodCallExpression* Call(::System::Linq::Expressions::Expression* instance, ::System::Reflection::MethodInfo* method,
                                                                        ::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1,
                                                                        ::System::Linq::Expressions::Expression* arg2);

  /// @brief Method Call, addr 0x40a72c0, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::MethodCallExpression* Call(::System::Linq::Expressions::Expression* instance, ::System::Reflection::MethodInfo* method,
                                                                        ::ArrayW<::System::Linq::Expressions::Expression*, ::Array<::System::Linq::Expressions::Expression*>*> arguments);

  /// @brief Method Call, addr 0x40a7394, size 0x924, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::MethodCallExpression* Call(::System::Linq::Expressions::Expression* instance, ::System::Reflection::MethodInfo* method,
                                                                        ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* arguments);

  /// @brief Method Call, addr 0x4096768, size 0x160, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::MethodCallExpression* Call(::System::Linq::Expressions::Expression* instance, ::StringW methodName,
                                                                        ::ArrayW<::System::Type*, ::Array<::System::Type*>*> typeArguments,
                                                                        ::ArrayW<::System::Linq::Expressions::Expression*, ::Array<::System::Linq::Expressions::Expression*>*> arguments);

  /// @brief Method Call, addr 0x40a696c, size 0xd0, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::MethodCallExpression* Call(::System::Reflection::MethodInfo* method);

  /// @brief Method Call, addr 0x40968c8, size 0x148, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::MethodCallExpression* Call(::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::Expression* arg0);

  /// @brief Method Call, addr 0x4096a10, size 0x1b0, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::MethodCallExpression* Call(::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::Expression* arg0,
                                                                        ::System::Linq::Expressions::Expression* arg1);

  /// @brief Method Call, addr 0x40a6ad0, size 0x218, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::MethodCallExpression* Call(::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::Expression* arg0,
                                                                        ::System::Linq::Expressions::Expression* arg1, ::System::Linq::Expressions::Expression* arg2);

  /// @brief Method Call, addr 0x40a6ce8, size 0x280, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::MethodCallExpression* Call(::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::Expression* arg0,
                                                                        ::System::Linq::Expressions::Expression* arg1, ::System::Linq::Expressions::Expression* arg2,
                                                                        ::System::Linq::Expressions::Expression* arg3);

  /// @brief Method Call, addr 0x40a6f68, size 0x2f0, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::MethodCallExpression* Call(::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::Expression* arg0,
                                                                        ::System::Linq::Expressions::Expression* arg1, ::System::Linq::Expressions::Expression* arg2,
                                                                        ::System::Linq::Expressions::Expression* arg3, ::System::Linq::Expressions::Expression* arg4);

  /// @brief Method Call, addr 0x40a7258, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::MethodCallExpression* Call(::System::Reflection::MethodInfo* method,
                                                                        ::ArrayW<::System::Linq::Expressions::Expression*, ::Array<::System::Linq::Expressions::Expression*>*> arguments);

  /// @brief Method Call, addr 0x40a732c, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::MethodCallExpression* Call(::System::Reflection::MethodInfo* method,
                                                                        ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* arguments);

  /// @brief Method Coalesce, addr 0x409c6ec, size 0x4ac, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* Coalesce(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                        ::System::Linq::Expressions::LambdaExpression* conversion);

  /// @brief Method Condition, addr 0x4096e6c, size 0x1f8, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::ConditionalExpression* Condition(::System::Linq::Expressions::Expression* test, ::System::Linq::Expressions::Expression* ifTrue,
                                                                              ::System::Linq::Expressions::Expression* ifFalse);

  /// @brief Method Condition, addr 0x40a1ac0, size 0x288, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::ConditionalExpression* Condition(::System::Linq::Expressions::Expression* test, ::System::Linq::Expressions::Expression* ifTrue,
                                                                              ::System::Linq::Expressions::Expression* ifFalse, ::System::Type* type);

  /// @brief Method Constant, addr 0x40a1eb0, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::ConstantExpression* Constant(::System::Object* value);

  /// @brief Method Constant, addr 0x4096c28, size 0x244, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::ConstantExpression* Constant(::System::Object* value, ::System::Type* type);

  /// @brief Method Convert, addr 0x4096bc0, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* Convert(::System::Linq::Expressions::Expression* expression, ::System::Type* type);

  /// @brief Method Convert, addr 0x40ab240, size 0x210, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* Convert(::System::Linq::Expressions::Expression* expression, ::System::Type* type, ::System::Reflection::MethodInfo* method);

  /// @brief Method ConvertChecked, addr 0x40ab450, size 0x22c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* ConvertChecked(::System::Linq::Expressions::Expression* expression, ::System::Type* type, ::System::Reflection::MethodInfo* method);

  /// @brief Method CreateLambda, addr 0x40a5628, size 0x46c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::LambdaExpression* CreateLambda(::System::Type* delegateType, ::System::Linq::Expressions::Expression* body, ::StringW name, bool tailCall,
                                                                            ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* parameters);

  /// @brief Method Decrement, addr 0x40abf60, size 0x1a0, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* Decrement(::System::Linq::Expressions::Expression* expression, ::System::Reflection::MethodInfo* method);

  /// @brief Method Default, addr 0x40a1f0c, size 0xbc, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::DefaultExpression* Default(::System::Type* type);

  /// @brief Method Divide, addr 0x409a5ec, size 0x248, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* Divide(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                      ::System::Reflection::MethodInfo* method);

  /// @brief Method DivideAssign, addr 0x409d6ec, size 0x298, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* DivideAssign(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                            ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::LambdaExpression* conversion);

  /// @brief Method Empty, addr 0x40a1e08, size 0xa8, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::DefaultExpression* Empty();

  /// @brief Method Equal, addr 0x409f4bc, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* Equal(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right);

  /// @brief Method Equal, addr 0x409c244, size 0x130, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* Equal(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, bool liftToNull,
                                                                     ::System::Reflection::MethodInfo* method);

  /// @brief Method ExclusiveOr, addr 0x409c4a4, size 0x248, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* ExclusiveOr(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                           ::System::Reflection::MethodInfo* method);

  /// @brief Method ExclusiveOrAssign, addr 0x409d984, size 0x298, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* ExclusiveOrAssign(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                                 ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::LambdaExpression* conversion);

  /// @brief Method Field, addr 0x40a63ac, size 0x19c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::MemberExpression* Field(::System::Linq::Expressions::Expression* expression, ::System::Reflection::FieldInfo* field);

  /// @brief Method Field, addr 0x40a6548, size 0x170, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::MemberExpression* Field(::System::Linq::Expressions::Expression* expression, ::StringW fieldName);

  /// @brief Method FindMethod, addr 0x40a8394, size 0x250, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* FindMethod(::System::Type* type, ::StringW methodName, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> typeArgs,
                                                             ::ArrayW<::System::Linq::Expressions::Expression*, ::Array<::System::Linq::Expressions::Expression*>*> args,
                                                             ::System::Reflection::BindingFlags flags);

  /// @brief Method GetComparisonOperator, addr 0x409f9b0, size 0x244, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* GetComparisonOperator(::System::Linq::Expressions::ExpressionType binaryType, ::StringW opName,
                                                                                     ::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, bool liftToNull);

  /// @brief Method GetEqualityComparisonOperator, addr 0x409f528, size 0x41c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* GetEqualityComparisonOperator(::System::Linq::Expressions::ExpressionType binaryType, ::StringW opName,
                                                                                             ::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                                             bool liftToNull);

  /// @brief Method GetInvokeMethod, addr 0x40a3ec4, size 0x208, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* GetInvokeMethod(::System::Linq::Expressions::Expression* expression);

  /// @brief Method GetMethodBasedAssignOperator, addr 0x4098310, size 0x268, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* GetMethodBasedAssignOperator(::System::Linq::Expressions::ExpressionType binaryType, ::System::Linq::Expressions::Expression* left,
                                                                                            ::System::Linq::Expressions::Expression* right, ::System::Reflection::MethodInfo* method,
                                                                                            ::System::Linq::Expressions::LambdaExpression* conversion, bool liftToNull);

  /// @brief Method GetMethodBasedBinaryOperator, addr 0x4097a9c, size 0x59c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* GetMethodBasedBinaryOperator(::System::Linq::Expressions::ExpressionType binaryType, ::System::Linq::Expressions::Expression* left,
                                                                                            ::System::Linq::Expressions::Expression* right, ::System::Reflection::MethodInfo* method, bool liftToNull);

  /// @brief Method GetMethodBasedCoercionOperator, addr 0x40acc68, size 0x398, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* GetMethodBasedCoercionOperator(::System::Linq::Expressions::ExpressionType unaryType, ::System::Linq::Expressions::Expression* operand,
                                                                                             ::System::Type* convertToType, ::System::Reflection::MethodInfo* method);

  /// @brief Method GetMethodBasedUnaryOperator, addr 0x40ac728, size 0x3a4, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* GetMethodBasedUnaryOperator(::System::Linq::Expressions::ExpressionType unaryType, ::System::Linq::Expressions::Expression* operand,
                                                                                          ::System::Reflection::MethodInfo* method);

  /// @brief Method GetOptimizedBlockExpression, addr 0x40a0a40, size 0x8c4, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BlockExpression* GetOptimizedBlockExpression(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* expressions);

  /// @brief Method GetParametersForValidation, addr 0x40a40cc, size 0x8, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> GetParametersForValidation(::System::Reflection::MethodBase* method,
                                                                                                                                          ::System::Linq::Expressions::ExpressionType nodeKind);

  /// @brief Method GetResultTypeOfShift, addr 0x409fec4, size 0x168, virtual false, abstract: false, final false
  static inline ::System::Type* GetResultTypeOfShift(::System::Type* left, ::System::Type* right);

  /// @brief Method GetUserDefinedAssignOperatorOrThrow, addr 0x4098a0c, size 0x268, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* GetUserDefinedAssignOperatorOrThrow(::System::Linq::Expressions::ExpressionType binaryType, ::StringW name,
                                                                                                   ::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                                                   ::System::Linq::Expressions::LambdaExpression* conversion, bool liftToNull);

  /// @brief Method GetUserDefinedBinaryOperator, addr 0x40974b0, size 0x3d0, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* GetUserDefinedBinaryOperator(::System::Linq::Expressions::ExpressionType binaryType, ::StringW name,
                                                                                            ::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                                            bool liftToNull);

  /// @brief Method GetUserDefinedBinaryOperator, addr 0x4097880, size 0x21c, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* GetUserDefinedBinaryOperator(::System::Linq::Expressions::ExpressionType binaryType, ::System::Type* leftType, ::System::Type* rightType,
                                                                               ::StringW name);

  /// @brief Method GetUserDefinedBinaryOperatorOrThrow, addr 0x40987f0, size 0x21c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* GetUserDefinedBinaryOperatorOrThrow(::System::Linq::Expressions::ExpressionType binaryType, ::StringW name,
                                                                                                   ::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                                                   bool liftToNull);

  /// @brief Method GetUserDefinedCoercion, addr 0x40acb80, size 0xe8, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* GetUserDefinedCoercion(::System::Linq::Expressions::ExpressionType coercionType, ::System::Linq::Expressions::Expression* expression,
                                                                                     ::System::Type* convertToType);

  /// @brief Method GetUserDefinedCoercionOrThrow, addr 0x40acacc, size 0xb4, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* GetUserDefinedCoercionOrThrow(::System::Linq::Expressions::ExpressionType coercionType,
                                                                                            ::System::Linq::Expressions::Expression* expression, ::System::Type* convertToType);

  /// @brief Method GetUserDefinedUnaryOperator, addr 0x40ac424, size 0x304, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* GetUserDefinedUnaryOperator(::System::Linq::Expressions::ExpressionType unaryType, ::StringW name,
                                                                                          ::System::Linq::Expressions::Expression* operand);

  /// @brief Method GetUserDefinedUnaryOperatorOrThrow, addr 0x40ac2a0, size 0x184, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* GetUserDefinedUnaryOperatorOrThrow(::System::Linq::Expressions::ExpressionType unaryType, ::StringW name,
                                                                                                 ::System::Linq::Expressions::Expression* operand);

  /// @brief Method Goto, addr 0x40a26c0, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::GotoExpression* Goto(::System::Linq::Expressions::LabelTarget* target, ::System::Type* type);

  /// @brief Method Goto, addr 0x40a272c, size 0xbc, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::GotoExpression* Goto(::System::Linq::Expressions::LabelTarget* target, ::System::Linq::Expressions::Expression* value);

  /// @brief Method GreaterThan, addr 0x409bfe4, size 0x130, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* GreaterThan(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, bool liftToNull,
                                                                           ::System::Reflection::MethodInfo* method);

  /// @brief Method GreaterThanOrEqual, addr 0x409c114, size 0x130, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* GreaterThanOrEqual(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, bool liftToNull,
                                                                                  ::System::Reflection::MethodInfo* method);

  /// @brief Method IfThen, addr 0x40a1d48, size 0xc0, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::ConditionalExpression* IfThen(::System::Linq::Expressions::Expression* test, ::System::Linq::Expressions::Expression* ifTrue);

  /// @brief Method Increment, addr 0x40abdc0, size 0x1a0, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* Increment(::System::Linq::Expressions::Expression* expression, ::System::Reflection::MethodInfo* method);

  /// @brief Method Invoke, addr 0x40a3dc0, size 0x104, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::InvocationExpression* Invoke(::System::Linq::Expressions::Expression* expression);

  /// @brief Method Invoke, addr 0x4095424, size 0x15c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::InvocationExpression* Invoke(::System::Linq::Expressions::Expression* expression, ::System::Linq::Expressions::Expression* arg0);

  /// @brief Method Invoke, addr 0x40a40e8, size 0x1b4, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::InvocationExpression* Invoke(::System::Linq::Expressions::Expression* expression, ::System::Linq::Expressions::Expression* arg0,
                                                                          ::System::Linq::Expressions::Expression* arg1);

  /// @brief Method Invoke, addr 0x40a429c, size 0x204, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::InvocationExpression* Invoke(::System::Linq::Expressions::Expression* expression, ::System::Linq::Expressions::Expression* arg0,
                                                                          ::System::Linq::Expressions::Expression* arg1, ::System::Linq::Expressions::Expression* arg2);

  /// @brief Method Invoke, addr 0x40a44a0, size 0x25c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::InvocationExpression* Invoke(::System::Linq::Expressions::Expression* expression, ::System::Linq::Expressions::Expression* arg0,
                                                                          ::System::Linq::Expressions::Expression* arg1, ::System::Linq::Expressions::Expression* arg2,
                                                                          ::System::Linq::Expressions::Expression* arg3);

  /// @brief Method Invoke, addr 0x40a46fc, size 0x2b4, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::InvocationExpression* Invoke(::System::Linq::Expressions::Expression* expression, ::System::Linq::Expressions::Expression* arg0,
                                                                          ::System::Linq::Expressions::Expression* arg1, ::System::Linq::Expressions::Expression* arg2,
                                                                          ::System::Linq::Expressions::Expression* arg3, ::System::Linq::Expressions::Expression* arg4);

  /// @brief Method Invoke, addr 0x40a49b0, size 0x8d4, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::InvocationExpression* Invoke(::System::Linq::Expressions::Expression* expression,
                                                                          ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* arguments);

  /// @brief Method IsCompatible, addr 0x40a8780, size 0x240, virtual false, abstract: false, final false
  static inline bool IsCompatible(::System::Reflection::MethodBase* m, ::ArrayW<::System::Linq::Expressions::Expression*, ::Array<::System::Linq::Expressions::Expression*>*> arguments);

  /// @brief Method IsFalse, addr 0x40aab84, size 0x1a0, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* IsFalse(::System::Linq::Expressions::Expression* expression, ::System::Reflection::MethodInfo* method);

  /// @brief Method IsLiftingConditionalLogicalOperator, addr 0x4098c74, size 0xcc, virtual false, abstract: false, final false
  static inline bool IsLiftingConditionalLogicalOperator(::System::Type* left, ::System::Type* right, ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::ExpressionType binaryType);

  /// @brief Method IsNullComparison, addr 0x4098dd0, size 0x100, virtual false, abstract: false, final false
  static inline bool IsNullComparison(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right);

  /// @brief Method IsNullConstant, addr 0x4098ed0, size 0x84, virtual false, abstract: false, final false
  static inline bool IsNullConstant(::System::Linq::Expressions::Expression* e);

  /// @brief Method IsSimpleShift, addr 0x409fdcc, size 0xf8, virtual false, abstract: false, final false
  static inline bool IsSimpleShift(::System::Type* left, ::System::Type* right);

  /// @brief Method IsTrue, addr 0x40aad24, size 0x1a0, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* IsTrue(::System::Linq::Expressions::Expression* expression, ::System::Reflection::MethodInfo* method);

  /// @brief Method IsValidLiftedConditionalLogicalOperator, addr 0x4099578, size 0x104, virtual false, abstract: false, final false
  static inline bool IsValidLiftedConditionalLogicalOperator(::System::Type* left, ::System::Type* right,
                                                             ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> pms);

  /// @brief Method Label, addr 0x40a528c, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::LabelExpression* Label(::System::Linq::Expressions::LabelTarget* target);

  /// @brief Method Label, addr 0x40a52e4, size 0xd4, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::LabelExpression* Label(::System::Linq::Expressions::LabelTarget* target, ::System::Linq::Expressions::Expression* defaultValue);

  /// @brief Method Label, addr 0x40a53b8, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::LabelTarget* Label();

  /// @brief Method Label, addr 0x40a5520, size 0xb0, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::LabelTarget* Label(::StringW name);

  /// @brief Method Label, addr 0x40a55d0, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::LabelTarget* Label(::System::Type* type);

  /// @brief Method Label, addr 0x40a545c, size 0xc4, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::LabelTarget* Label(::System::Type* type, ::StringW name);

  /// @brief Method Lambda, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDelegate>
  static inline ::System::Linq::Expressions::Expression_1<TDelegate>* Lambda(::System::Linq::Expressions::Expression* body, ::StringW name, bool tailCall,
                                                                             ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>* parameters);

  /// @brief Method Lambda, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDelegate>
  static inline ::System::Linq::Expressions::Expression_1<TDelegate>*
  Lambda(::System::Linq::Expressions::Expression* body, ::ArrayW<::System::Linq::Expressions::ParameterExpression*, ::Array<::System::Linq::Expressions::ParameterExpression*>*> parameters);

  /// @brief Method Lambda, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDelegate>
  static inline ::System::Linq::Expressions::Expression_1<TDelegate>* Lambda(::System::Linq::Expressions::Expression* body,
                                                                             ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>* parameters);

  /// @brief Method Lambda, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDelegate>
  static inline ::System::Linq::Expressions::Expression_1<TDelegate>* Lambda(::System::Linq::Expressions::Expression* body, bool tailCall,
                                                                             ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>* parameters);

  /// @brief Method Lambda, addr 0x40a5b08, size 0xe0, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::LambdaExpression* Lambda(::System::Type* delegateType, ::System::Linq::Expressions::Expression* body, ::StringW name, bool tailCall,
                                                                      ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>* parameters);

  /// @brief Method Lambda, addr 0x40a5a94, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::LambdaExpression*
  Lambda(::System::Type* delegateType, ::System::Linq::Expressions::Expression* body,
         ::ArrayW<::System::Linq::Expressions::ParameterExpression*, ::Array<::System::Linq::Expressions::ParameterExpression*>*> parameters);

  /// @brief Method LeftShift, addr 0x409cfa0, size 0x21c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* LeftShift(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                         ::System::Reflection::MethodInfo* method);

  /// @brief Method LeftShiftAssign, addr 0x409dc1c, size 0x26c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* LeftShiftAssign(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                               ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::LambdaExpression* conversion);

  /// @brief Method LessThan, addr 0x409bd84, size 0x130, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* LessThan(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, bool liftToNull,
                                                                        ::System::Reflection::MethodInfo* method);

  /// @brief Method LessThanOrEqual, addr 0x409beb4, size 0x130, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* LessThanOrEqual(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, bool liftToNull,
                                                                               ::System::Reflection::MethodInfo* method);

  /// @brief Method Loop, addr 0x40a6280, size 0x12c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::LoopExpression* Loop(::System::Linq::Expressions::Expression* body, ::System::Linq::Expressions::LabelTarget* _cordl_break,
                                                                  ::System::Linq::Expressions::LabelTarget* _cordl_continue);

  /// @brief Method MakeBinary, addr 0x409539c, size 0x88, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* MakeBinary(::System::Linq::Expressions::ExpressionType binaryType, ::System::Linq::Expressions::Expression* left,
                                                                          ::System::Linq::Expressions::Expression* right, bool liftToNull, ::System::Reflection::MethodInfo* method);

  /// @brief Method MakeBinary, addr 0x4093f38, size 0xa30, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* MakeBinary(::System::Linq::Expressions::ExpressionType binaryType, ::System::Linq::Expressions::Expression* left,
                                                                          ::System::Linq::Expressions::Expression* right, bool liftToNull, ::System::Reflection::MethodInfo* method,
                                                                          ::System::Linq::Expressions::LambdaExpression* conversion);

  /// @brief Method MakeCatchBlock, addr 0x40a1834, size 0x28c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::CatchBlock* MakeCatchBlock(::System::Type* type, ::System::Linq::Expressions::ParameterExpression* variable, ::System::Linq::Expressions::Expression* body,
                                                                        ::System::Linq::Expressions::Expression* filter);

  /// @brief Method MakeGoto, addr 0x40a2460, size 0xec, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::GotoExpression* MakeGoto(::System::Linq::Expressions::GotoExpressionKind kind, ::System::Linq::Expressions::LabelTarget* target,
                                                                      ::System::Linq::Expressions::Expression* value, ::System::Type* type);

  /// @brief Method MakeIndex, addr 0x4095b1c, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::IndexExpression* MakeIndex(::System::Linq::Expressions::Expression* instance, ::System::Reflection::PropertyInfo* indexer,
                                                                        ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* arguments);

  /// @brief Method MakeIndexProperty, addr 0x40a30fc, size 0xbc, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::IndexExpression* MakeIndexProperty(::System::Linq::Expressions::Expression* instance, ::System::Reflection::PropertyInfo* indexer, ::StringW paramName,
                                                                                ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* argList);

  /// @brief Method MakeMemberAccess, addr 0x40957e4, size 0x1c4, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::MemberExpression* MakeMemberAccess(::System::Linq::Expressions::Expression* expression, ::System::Reflection::MemberInfo* member);

  /// @brief Method MakeOpAssignUnary, addr 0x40ad0b4, size 0x294, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* MakeOpAssignUnary(::System::Linq::Expressions::ExpressionType kind, ::System::Linq::Expressions::Expression* expression,
                                                                                ::System::Reflection::MethodInfo* method);

  /// @brief Method MakeTry, addr 0x40a92cc, size 0x234, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::TryExpression* MakeTry(::System::Type* type, ::System::Linq::Expressions::Expression* body, ::System::Linq::Expressions::Expression* finally,
                                                                    ::System::Linq::Expressions::Expression* fault,
                                                                    ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::CatchBlock*>* handlers);

  /// @brief Method MakeUnary, addr 0x40aa0ac, size 0x54c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* MakeUnary(::System::Linq::Expressions::ExpressionType unaryType, ::System::Linq::Expressions::Expression* operand, ::System::Type* type,
                                                                        ::System::Reflection::MethodInfo* method);

  /// @brief Method Modulo, addr 0x409a834, size 0x248, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* Modulo(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                      ::System::Reflection::MethodInfo* method);

  /// @brief Method ModuloAssign, addr 0x409de88, size 0x298, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* ModuloAssign(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                            ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::LambdaExpression* conversion);

  /// @brief Method Multiply, addr 0x409a15c, size 0x248, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* Multiply(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                        ::System::Reflection::MethodInfo* method);

  /// @brief Method MultiplyAssign, addr 0x409e120, size 0x298, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* MultiplyAssign(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                              ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::LambdaExpression* conversion);

  /// @brief Method MultiplyAssignChecked, addr 0x409f224, size 0x298, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* MultiplyAssignChecked(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                                     ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::LambdaExpression* conversion);

  /// @brief Method MultiplyChecked, addr 0x409a3a4, size 0x248, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* MultiplyChecked(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                               ::System::Reflection::MethodInfo* method);

  /// @brief Method Negate, addr 0x40aa5f8, size 0x1d8, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* Negate(::System::Linq::Expressions::Expression* expression, ::System::Reflection::MethodInfo* method);

  /// @brief Method NegateChecked, addr 0x40aa7d0, size 0x1d8, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* NegateChecked(::System::Linq::Expressions::Expression* expression, ::System::Reflection::MethodInfo* method);

  /// @brief Method NewArrayBounds, addr 0x40a8e34, size 0x2a4, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::NewArrayExpression* NewArrayBounds(::System::Type* type, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* bounds);

  /// @brief Method NewArrayInit, addr 0x40a89c0, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::NewArrayExpression* NewArrayInit(::System::Type* type,
                                                                              ::ArrayW<::System::Linq::Expressions::Expression*, ::Array<::System::Linq::Expressions::Expression*>*> initializers);

  /// @brief Method NewArrayInit, addr 0x40a8a24, size 0x410, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::NewArrayExpression* NewArrayInit(::System::Type* type,
                                                                              ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* initializers);

  static inline ::System::Linq::Expressions::Expression* New_ctor();

  /// @brief Method Not, addr 0x40ad000, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* Not(::System::Linq::Expressions::Expression* expression);

  /// @brief Method Not, addr 0x40aa9a8, size 0x1dc, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* Not(::System::Linq::Expressions::Expression* expression, ::System::Reflection::MethodInfo* method);

  /// @brief Method NotEqual, addr 0x409f944, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* NotEqual(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right);

  /// @brief Method NotEqual, addr 0x409c374, size 0x130, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* NotEqual(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, bool liftToNull,
                                                                        ::System::Reflection::MethodInfo* method);

  /// @brief Method OnesComplement, addr 0x40aaec4, size 0x1a0, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* OnesComplement(::System::Linq::Expressions::Expression* expression, ::System::Reflection::MethodInfo* method);

  /// @brief Method Or, addr 0x409b57c, size 0x248, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* Or(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                  ::System::Reflection::MethodInfo* method);

  /// @brief Method OrAssign, addr 0x409e3b8, size 0x298, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* OrAssign(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                        ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::LambdaExpression* conversion);

  /// @brief Method OrElse, addr 0x409b7c4, size 0x5c0, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* OrElse(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                      ::System::Reflection::MethodInfo* method);

  /// @brief Method Parameter, addr 0x40a90d8, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::ParameterExpression* Parameter(::System::Type* type);

  /// @brief Method Parameter, addr 0x4096548, size 0xac, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::ParameterExpression* Parameter(::System::Type* type, ::StringW name);

  /// @brief Method ParameterIsAssignable, addr 0x4098190, size 0xa4, virtual false, abstract: false, final false
  static inline bool ParameterIsAssignable(::System::Reflection::ParameterInfo* pi, ::System::Type* argType);

  /// @brief Method PostDecrementAssign, addr 0x40ac238, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* PostDecrementAssign(::System::Linq::Expressions::Expression* expression, ::System::Reflection::MethodInfo* method);

  /// @brief Method PostIncrementAssign, addr 0x40ac168, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* PostIncrementAssign(::System::Linq::Expressions::Expression* expression, ::System::Reflection::MethodInfo* method);

  /// @brief Method Power, addr 0x409aa7c, size 0x3cc, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* Power(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                     ::System::Reflection::MethodInfo* method);

  /// @brief Method PowerAssign, addr 0x409e650, size 0x1a0, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* PowerAssign(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                           ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::LambdaExpression* conversion);

  /// @brief Method PreDecrementAssign, addr 0x40ac1d0, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* PreDecrementAssign(::System::Linq::Expressions::Expression* expression, ::System::Reflection::MethodInfo* method);

  /// @brief Method PreIncrementAssign, addr 0x40ad058, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* PreIncrementAssign(::System::Linq::Expressions::Expression* expression);

  /// @brief Method PreIncrementAssign, addr 0x40ac100, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* PreIncrementAssign(::System::Linq::Expressions::Expression* expression, ::System::Reflection::MethodInfo* method);

  /// @brief Method Property, addr 0x40a2b30, size 0xb4, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::IndexExpression* Property(::System::Linq::Expressions::Expression* instance, ::System::Reflection::PropertyInfo* indexer,
                                                                       ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* arguments);

  /// @brief Method Property, addr 0x40a66b8, size 0x2b4, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::MemberExpression* Property(::System::Linq::Expressions::Expression* expression, ::System::Reflection::PropertyInfo* property);

  /// @brief Method Property, addr 0x40965f4, size 0x174, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::MemberExpression* Property(::System::Linq::Expressions::Expression* expression, ::StringW propertyName);

  /// @brief Method Quote, addr 0x40ab92c, size 0x118, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* Quote(::System::Linq::Expressions::Expression* expression);

  /// @brief Method Reduce, addr 0x40a21b8, size 0x48, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* Reduce();

  /// @brief Method ReduceAndCheck, addr 0x40a2274, size 0x104, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* ReduceAndCheck();

  /// @brief Method ReferenceEqual, addr 0x4093b9c, size 0x188, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* ReferenceEqual(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right);

  /// @brief Method ReferenceNotEqual, addr 0x4093d24, size 0x188, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* ReferenceNotEqual(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right);

  /// @brief Method RequiresCanRead, addr 0x40a08f8, size 0x148, virtual false, abstract: false, final false
  static inline void RequiresCanRead(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* items, ::StringW paramName);

  /// @brief Method RequiresCanWrite, addr 0x4097260, size 0x250, virtual false, abstract: false, final false
  static inline void RequiresCanWrite(::System::Linq::Expressions::Expression* expression, ::StringW paramName);

  /// @brief Method Return, addr 0x40a254c, size 0xb8, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::GotoExpression* Return(::System::Linq::Expressions::LabelTarget* target);

  /// @brief Method Return, addr 0x40a2604, size 0xbc, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::GotoExpression* Return(::System::Linq::Expressions::LabelTarget* target, ::System::Linq::Expressions::Expression* value);

  /// @brief Method RightShift, addr 0x409cd84, size 0x21c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* RightShift(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                          ::System::Reflection::MethodInfo* method);

  /// @brief Method RightShiftAssign, addr 0x409e7f0, size 0x26c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* RightShiftAssign(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                                ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::LambdaExpression* conversion);

  /// @brief Method Subtract, addr 0x4099ccc, size 0x248, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* Subtract(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                        ::System::Reflection::MethodInfo* method);

  /// @brief Method SubtractAssign, addr 0x409ea5c, size 0x298, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* SubtractAssign(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                              ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::LambdaExpression* conversion);

  /// @brief Method SubtractAssignChecked, addr 0x409ef8c, size 0x298, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* SubtractAssignChecked(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                                     ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::LambdaExpression* conversion);

  /// @brief Method SubtractChecked, addr 0x4099f14, size 0x248, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::BinaryExpression* SubtractChecked(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                               ::System::Reflection::MethodInfo* method);

  /// @brief Method Throw, addr 0x40ab67c, size 0x148, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* Throw(::System::Linq::Expressions::Expression* value, ::System::Type* type);

  /// @brief Method ToString, addr 0x40a23a0, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryFinally, addr 0x40a925c, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::TryExpression* TryFinally(::System::Linq::Expressions::Expression* body, ::System::Linq::Expressions::Expression* finally);

  /// @brief Method TryQuote, addr 0x40a2b28, size 0x8, virtual false, abstract: false, final false
  static inline bool TryQuote(::System::Type* parameterType, ::ByRef<::System::Linq::Expressions::Expression*> argument);

  /// @brief Method TypeAs, addr 0x40ab7c4, size 0x168, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* TypeAs(::System::Linq::Expressions::Expression* expression, ::System::Type* type);

  /// @brief Method TypeEqual, addr 0x40a9fac, size 0x100, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::TypeBinaryExpression* TypeEqual(::System::Linq::Expressions::Expression* expression, ::System::Type* type);

  /// @brief Method TypeIs, addr 0x40a9eac, size 0x100, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::TypeBinaryExpression* TypeIs(::System::Linq::Expressions::Expression* expression, ::System::Type* type);

  /// @brief Method UnaryPlus, addr 0x40aba44, size 0x1a0, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* UnaryPlus(::System::Linq::Expressions::Expression* expression, ::System::Reflection::MethodInfo* method);

  /// @brief Method Unbox, addr 0x40abbe4, size 0x1dc, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::UnaryExpression* Unbox(::System::Linq::Expressions::Expression* expression, ::System::Type* type);

  /// @brief Method Validate, addr 0x40a9130, size 0x12c, virtual false, abstract: false, final false
  static inline void Validate(::System::Type* type, bool allowByRef);

  /// @brief Method ValidateAccessor, addr 0x40a3734, size 0x1b0, virtual false, abstract: false, final false
  static inline void ValidateAccessor(::System::Linq::Expressions::Expression* instance, ::System::Reflection::MethodInfo* method,
                                      ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> indexes,
                                      ::ByRef<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*> arguments, ::StringW paramName);

  /// @brief Method ValidateAccessorArgumentTypes, addr 0x40a399c, size 0x424, virtual false, abstract: false, final false
  static inline void ValidateAccessorArgumentTypes(::System::Reflection::MethodInfo* method, ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> indexes,
                                                   ::ByRef<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*> arguments, ::StringW paramName);

  /// @brief Method ValidateArgumentCount, addr 0x40a40d4, size 0x8, virtual false, abstract: false, final false
  static inline void ValidateArgumentCount(::System::Reflection::MethodBase* method, ::System::Linq::Expressions::ExpressionType nodeKind, int32_t count,
                                           ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> pis);

  /// @brief Method ValidateArgumentTypes, addr 0x40a5284, size 0x8, virtual false, abstract: false, final false
  static inline void ValidateArgumentTypes(::System::Reflection::MethodBase* method, ::System::Linq::Expressions::ExpressionType nodeKind,
                                           ::ByRef<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*> arguments, ::StringW methodParamName);

  /// @brief Method ValidateCallInstanceType, addr 0x40a38e4, size 0xb8, virtual false, abstract: false, final false
  static inline void ValidateCallInstanceType(::System::Type* instanceType, ::System::Reflection::MethodInfo* method);

  /// @brief Method ValidateCoalesceArgTypes, addr 0x409fc5c, size 0x170, virtual false, abstract: false, final false
  static inline ::System::Type* ValidateCoalesceArgTypes(::System::Type* left, ::System::Type* right);

  /// @brief Method ValidateGoto, addr 0x40a27e8, size 0x1bc, virtual false, abstract: false, final false
  static inline void ValidateGoto(::System::Linq::Expressions::LabelTarget* target, ::ByRef<::System::Linq::Expressions::Expression*> value, ::StringW targetParameter, ::StringW valueParameter,
                                  ::System::Type* type);

  /// @brief Method ValidateGotoType, addr 0x40a29a4, size 0x184, virtual false, abstract: false, final false
  static inline void ValidateGotoType(::System::Type* expectedType, ::ByRef<::System::Linq::Expressions::Expression*> value, ::StringW paramName);

  /// @brief Method ValidateIndexedProperty, addr 0x40a31b8, size 0x57c, virtual false, abstract: false, final false
  static inline void ValidateIndexedProperty(::System::Linq::Expressions::Expression* instance, ::System::Reflection::PropertyInfo* indexer, ::StringW paramName,
                                             ::ByRef<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*> argList);

  /// @brief Method ValidateLambdaArgs, addr 0x40a5be8, size 0x698, virtual false, abstract: false, final false
  static inline void ValidateLambdaArgs(::System::Type* delegateType, ::ByRef<::System::Linq::Expressions::Expression*> body,
                                        ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* parameters, ::StringW paramName);

  /// @brief Method ValidateMethodAndGetParameters, addr 0x40a6a3c, size 0x94, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> ValidateMethodAndGetParameters(::System::Linq::Expressions::Expression* instance,
                                                                                                                                              ::System::Reflection::MethodInfo* method);

  /// @brief Method ValidateMethodInfo, addr 0x4098d40, size 0x90, virtual false, abstract: false, final false
  static inline void ValidateMethodInfo(::System::Reflection::MethodInfo* method, ::StringW paramName);

  /// @brief Method ValidateOneArgument, addr 0x40a40dc, size 0xc, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::Expression* ValidateOneArgument(::System::Reflection::MethodBase* method, ::System::Linq::Expressions::ExpressionType nodeKind,
                                                                             ::System::Linq::Expressions::Expression* arg, ::System::Reflection::ParameterInfo* pi, ::StringW methodParamName,
                                                                             ::StringW argumentParamName);

  /// @brief Method ValidateOpAssignConversionLambda, addr 0x4098578, size 0x278, virtual false, abstract: false, final false
  static inline void ValidateOpAssignConversionLambda(::System::Linq::Expressions::LambdaExpression* conversion, ::System::Linq::Expressions::Expression* left,
                                                      ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::ExpressionType nodeType);

  /// @brief Method ValidateOperator, addr 0x4098038, size 0x158, virtual false, abstract: false, final false
  static inline void ValidateOperator(::System::Reflection::MethodInfo* method);

  /// @brief Method ValidateParamswithOperandsOrThrow, addr 0x4098234, size 0xdc, virtual false, abstract: false, final false
  static inline void ValidateParamswithOperandsOrThrow(::System::Type* paramType, ::System::Type* operandType, ::System::Linq::Expressions::ExpressionType exprType, ::StringW name);

  /// @brief Method ValidateStaticOrInstanceMethod, addr 0x40a85e4, size 0xe8, virtual false, abstract: false, final false
  static inline void ValidateStaticOrInstanceMethod(::System::Linq::Expressions::Expression* instance, ::System::Reflection::MethodInfo* method);

  /// @brief Method ValidateTryAndCatchHaveSameType, addr 0x40a9500, size 0x9ac, virtual false, abstract: false, final false
  static inline void ValidateTryAndCatchHaveSameType(::System::Type* type, ::System::Linq::Expressions::Expression* tryBody,
                                                     ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::CatchBlock*>* handlers);

  /// @brief Method ValidateUserDefinedConditionalLogicOperator, addr 0x4098f54, size 0x624, virtual false, abstract: false, final false
  static inline void ValidateUserDefinedConditionalLogicOperator(::System::Linq::Expressions::ExpressionType nodeType, ::System::Type* left, ::System::Type* right,
                                                                 ::System::Reflection::MethodInfo* method);

  /// @brief Method ValidateVariables, addr 0x40a168c, size 0x1a8, virtual false, abstract: false, final false
  static inline void ValidateVariables(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* varList, ::StringW collectionName);

  /// @brief Method Variable, addr 0x409576c, size 0x78, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::ParameterExpression* Variable(::System::Type* type, ::StringW name);

  /// @brief Method VerifyOpTrueFalse, addr 0x409967c, size 0x1c4, virtual false, abstract: false, final false
  static inline void VerifyOpTrueFalse(::System::Linq::Expressions::ExpressionType nodeType, ::System::Type* left, ::System::Reflection::MethodInfo* opTrue, ::StringW paramName);

  /// @brief Method VisitChildren, addr 0x40a2200, size 0x74, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* VisitChildren(::System::Linq::Expressions::ExpressionVisitor* visitor);

  /// @brief Method .ctor, addr 0x40938f8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Dynamic::Utils::CacheDict_2<::System::Type*, ::System::Reflection::MethodInfo*>* getStaticF_s_lambdaDelegateCache();

  static inline ::System::Dynamic::Utils::CacheDict_2<
      ::System::Type*, ::System::Func_5<::System::Linq::Expressions::Expression*, ::StringW, bool,
                                        ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*, ::System::Linq::Expressions::LambdaExpression*>*>*
  getStaticF_s_lambdaFactories();

  static inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression_ExtensionInfo*>*
  getStaticF_s_legacyCtorSupportTable();

  /// @brief Method get_CanReduce, addr 0x40a21b0, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanReduce();

  /// @brief Method get_NodeType, addr 0x40a1fc8, size 0xf4, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::ExpressionType get_NodeType();

  /// @brief Method get_Type, addr 0x40a20bc, size 0xf4, virtual true, abstract: false, final false
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
  // Ctor Parameters [CppParam { name: "", ty: "Expression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression(Expression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression(Expression const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13646 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Expression, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::Expression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Expression*, "System.Linq.Expressions", "Expression");
NEED_NO_BOX(::System::Linq::Expressions::Expression_BinaryExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Expression_BinaryExpressionProxy*, "System.Linq.Expressions", "Expression/BinaryExpressionProxy");
NEED_NO_BOX(::System::Linq::Expressions::Expression_BlockExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Expression_BlockExpressionProxy*, "System.Linq.Expressions", "Expression/BlockExpressionProxy");
NEED_NO_BOX(::System::Linq::Expressions::Expression_CatchBlockProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Expression_CatchBlockProxy*, "System.Linq.Expressions", "Expression/CatchBlockProxy");
NEED_NO_BOX(::System::Linq::Expressions::Expression_ConditionalExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Expression_ConditionalExpressionProxy*, "System.Linq.Expressions", "Expression/ConditionalExpressionProxy");
NEED_NO_BOX(::System::Linq::Expressions::Expression_ConstantExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Expression_ConstantExpressionProxy*, "System.Linq.Expressions", "Expression/ConstantExpressionProxy");
NEED_NO_BOX(::System::Linq::Expressions::Expression_DebugInfoExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Expression_DebugInfoExpressionProxy*, "System.Linq.Expressions", "Expression/DebugInfoExpressionProxy");
NEED_NO_BOX(::System::Linq::Expressions::Expression_DefaultExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Expression_DefaultExpressionProxy*, "System.Linq.Expressions", "Expression/DefaultExpressionProxy");
NEED_NO_BOX(::System::Linq::Expressions::Expression_ExtensionInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Expression_ExtensionInfo*, "System.Linq.Expressions", "Expression/ExtensionInfo");
NEED_NO_BOX(::System::Linq::Expressions::Expression_GotoExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Expression_GotoExpressionProxy*, "System.Linq.Expressions", "Expression/GotoExpressionProxy");
NEED_NO_BOX(::System::Linq::Expressions::Expression_IndexExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Expression_IndexExpressionProxy*, "System.Linq.Expressions", "Expression/IndexExpressionProxy");
NEED_NO_BOX(::System::Linq::Expressions::Expression_InvocationExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Expression_InvocationExpressionProxy*, "System.Linq.Expressions", "Expression/InvocationExpressionProxy");
NEED_NO_BOX(::System::Linq::Expressions::Expression_LabelExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Expression_LabelExpressionProxy*, "System.Linq.Expressions", "Expression/LabelExpressionProxy");
NEED_NO_BOX(::System::Linq::Expressions::Expression_LambdaExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Expression_LambdaExpressionProxy*, "System.Linq.Expressions", "Expression/LambdaExpressionProxy");
NEED_NO_BOX(::System::Linq::Expressions::Expression_ListInitExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Expression_ListInitExpressionProxy*, "System.Linq.Expressions", "Expression/ListInitExpressionProxy");
NEED_NO_BOX(::System::Linq::Expressions::Expression_LoopExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Expression_LoopExpressionProxy*, "System.Linq.Expressions", "Expression/LoopExpressionProxy");
NEED_NO_BOX(::System::Linq::Expressions::Expression_MemberExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Expression_MemberExpressionProxy*, "System.Linq.Expressions", "Expression/MemberExpressionProxy");
NEED_NO_BOX(::System::Linq::Expressions::Expression_MemberInitExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Expression_MemberInitExpressionProxy*, "System.Linq.Expressions", "Expression/MemberInitExpressionProxy");
NEED_NO_BOX(::System::Linq::Expressions::Expression_MethodCallExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Expression_MethodCallExpressionProxy*, "System.Linq.Expressions", "Expression/MethodCallExpressionProxy");
NEED_NO_BOX(::System::Linq::Expressions::Expression_NewArrayExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Expression_NewArrayExpressionProxy*, "System.Linq.Expressions", "Expression/NewArrayExpressionProxy");
NEED_NO_BOX(::System::Linq::Expressions::Expression_NewExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Expression_NewExpressionProxy*, "System.Linq.Expressions", "Expression/NewExpressionProxy");
NEED_NO_BOX(::System::Linq::Expressions::Expression_ParameterExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Expression_ParameterExpressionProxy*, "System.Linq.Expressions", "Expression/ParameterExpressionProxy");
NEED_NO_BOX(::System::Linq::Expressions::Expression_RuntimeVariablesExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Expression_RuntimeVariablesExpressionProxy*, "System.Linq.Expressions", "Expression/RuntimeVariablesExpressionProxy");
NEED_NO_BOX(::System::Linq::Expressions::Expression_SwitchCaseProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Expression_SwitchCaseProxy*, "System.Linq.Expressions", "Expression/SwitchCaseProxy");
NEED_NO_BOX(::System::Linq::Expressions::Expression_SwitchExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Expression_SwitchExpressionProxy*, "System.Linq.Expressions", "Expression/SwitchExpressionProxy");
NEED_NO_BOX(::System::Linq::Expressions::Expression_TryExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Expression_TryExpressionProxy*, "System.Linq.Expressions", "Expression/TryExpressionProxy");
NEED_NO_BOX(::System::Linq::Expressions::Expression_TypeBinaryExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Expression_TypeBinaryExpressionProxy*, "System.Linq.Expressions", "Expression/TypeBinaryExpressionProxy");
NEED_NO_BOX(::System::Linq::Expressions::Expression_UnaryExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Expression_UnaryExpressionProxy*, "System.Linq.Expressions", "Expression/UnaryExpressionProxy");
