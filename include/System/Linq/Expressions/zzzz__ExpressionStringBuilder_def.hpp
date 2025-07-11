#pragma once
// IWYU pragma private; include "System/Linq/Expressions/ExpressionStringBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__ExpressionVisitor_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExpressionStringBuilder)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
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
namespace System::Reflection {
class MemberInfo;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Linq::Expressions {
class ExpressionStringBuilder;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::ExpressionStringBuilder);
// Dependencies System.Linq.Expressions.ExpressionVisitor
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.ExpressionStringBuilder
class CORDL_TYPE ExpressionStringBuilder : public ::System::Linq::Expressions::ExpressionVisitor {
public:
  // Declarations
  /// @brief Field _ids, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__ids, put = __cordl_internal_set__ids)) ::System::Collections::Generic::Dictionary_2<::System::Object*, int32_t>* _ids;

  /// @brief Field _out, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__out, put = __cordl_internal_set__out)) ::System::Text::StringBuilder* _out;

  /// @brief Method CatchBlockToString, addr 0x40ae804, size 0x7c, virtual false, abstract: false, final false
  static inline ::StringW CatchBlockToString(::System::Linq::Expressions::CatchBlock* node);

  /// @brief Method DumpLabel, addr 0x40b72e8, size 0xbc, virtual false, abstract: false, final false
  inline void DumpLabel(::System::Linq::Expressions::LabelTarget* target);

  /// @brief Method ExpressionToString, addr 0x40b599c, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW ExpressionToString(::System::Linq::Expressions::Expression* node);

  /// @brief Method GetId, addr 0x40b5850, size 0x110, virtual false, abstract: false, final false
  inline int32_t GetId(::System::Object* o);

  /// @brief Method GetLabelId, addr 0x40b584c, size 0x4, virtual false, abstract: false, final false
  inline int32_t GetLabelId(::System::Linq::Expressions::LabelTarget* label);

  /// @brief Method GetParamId, addr 0x40b5960, size 0x4, virtual false, abstract: false, final false
  inline int32_t GetParamId(::System::Linq::Expressions::ParameterExpression* p);

  /// @brief Method IsBool, addr 0x40b5f1c, size 0x11c, virtual false, abstract: false, final false
  static inline bool IsBool(::System::Linq::Expressions::Expression* node);

  static inline ::System::Linq::Expressions::ExpressionStringBuilder* New_ctor();

  /// @brief Method Out, addr 0x40b5980, size 0x1c, virtual false, abstract: false, final false
  inline void Out(char16_t c);

  /// @brief Method Out, addr 0x40b5964, size 0x1c, virtual false, abstract: false, final false
  inline void Out(::StringW s);

  /// @brief Method OutMember, addr 0x40b63bc, size 0xb0, virtual false, abstract: false, final false
  inline void OutMember(::System::Linq::Expressions::Expression* instance, ::System::Reflection::MemberInfo* member);

  /// @brief Method ToString, addr 0x40b582c, size 0x20, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method VisitBinary, addr 0x40b5a14, size 0x508, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* VisitBinary(::System::Linq::Expressions::BinaryExpression* node);

  /// @brief Method VisitBlock, addr 0x40b6e78, size 0x33c, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* VisitBlock(::System::Linq::Expressions::BlockExpression* node);

  /// @brief Method VisitCatchBlock, addr 0x40b755c, size 0x108, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::CatchBlock* VisitCatchBlock(::System::Linq::Expressions::CatchBlock* node);

  /// @brief Method VisitConditional, addr 0x40b6144, size 0x100, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* VisitConditional(::System::Linq::Expressions::ConditionalExpression* node);

  /// @brief Method VisitConstant, addr 0x40b6244, size 0x178, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* VisitConstant(::System::Linq::Expressions::ConstantExpression* node);

  /// @brief Method VisitDefault, addr 0x40b71b4, size 0xb0, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* VisitDefault(::System::Linq::Expressions::DefaultExpression* node);

  /// @brief Method VisitExpressions, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void VisitExpressions(char16_t open, ::System::Collections::ObjectModel::ReadOnlyCollection_1<T>* expressions, char16_t close);

  /// @brief Method VisitExpressions, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void VisitExpressions(char16_t open, ::System::Collections::ObjectModel::ReadOnlyCollection_1<T>* expressions, char16_t close, ::StringW seperator);

  /// @brief Method VisitExtension, addr 0x40b7994, size 0x1fc, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* VisitExtension(::System::Linq::Expressions::Expression* node);

  /// @brief Method VisitGoto, addr 0x40b73a4, size 0x158, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* VisitGoto(::System::Linq::Expressions::GotoExpression* node);

  /// @brief Method VisitIndex, addr 0x40b76c4, size 0x188, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* VisitIndex(::System::Linq::Expressions::IndexExpression* node);

  /// @brief Method VisitInvocation, addr 0x40b64c4, size 0x128, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* VisitInvocation(::System::Linq::Expressions::InvocationExpression* node);

  /// @brief Method VisitLabel, addr 0x40b7264, size 0x84, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* VisitLabel(::System::Linq::Expressions::LabelExpression* node);

  /// @brief Method VisitLambda, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename T> inline ::System::Linq::Expressions::Expression* VisitLambda(::System::Linq::Expressions::Expression_1<T>* node);

  /// @brief Method VisitLoop, addr 0x40b74fc, size 0x60, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* VisitLoop(::System::Linq::Expressions::LoopExpression* node);

  /// @brief Method VisitMember, addr 0x40b646c, size 0x4c, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* VisitMember(::System::Linq::Expressions::MemberExpression* node);

  /// @brief Method VisitMethodCall, addr 0x40b65ec, size 0x1fc, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* VisitMethodCall(::System::Linq::Expressions::MethodCallExpression* node);

  /// @brief Method VisitNewArray, addr 0x40b67f4, size 0x128, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* VisitNewArray(::System::Linq::Expressions::NewArrayExpression* node);

  /// @brief Method VisitParameter, addr 0x40b6038, size 0x100, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* VisitParameter(::System::Linq::Expressions::ParameterExpression* node);

  /// @brief Method VisitTry, addr 0x40b7664, size 0x60, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* VisitTry(::System::Linq::Expressions::TryExpression* node);

  /// @brief Method VisitTypeBinary, addr 0x40b691c, size 0x10c, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* VisitTypeBinary(::System::Linq::Expressions::TypeBinaryExpression* node);

  /// @brief Method VisitUnary, addr 0x40b6a28, size 0x450, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* VisitUnary(::System::Linq::Expressions::UnaryExpression* node);

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*, int32_t>* const& __cordl_internal_get__ids() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*, int32_t>*& __cordl_internal_get__ids();

  constexpr ::System::Text::StringBuilder* const& __cordl_internal_get__out() const;

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get__out();

  constexpr void __cordl_internal_set__ids(::System::Collections::Generic::Dictionary_2<::System::Object*, int32_t>* value);

  constexpr void __cordl_internal_set__out(::System::Text::StringBuilder* value);

  /// @brief Method .ctor, addr 0x40b57c0, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExpressionStringBuilder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExpressionStringBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExpressionStringBuilder(ExpressionStringBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExpressionStringBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExpressionStringBuilder(ExpressionStringBuilder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13672 };

  /// @brief Field _out, offset: 0x10, size: 0x8, def value: None
  ::System::Text::StringBuilder* ____out;

  /// @brief Field _ids, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Object*, int32_t>* ____ids;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::ExpressionStringBuilder, ____out) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::ExpressionStringBuilder, ____ids) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::ExpressionStringBuilder, 0x20>, "Size mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::ExpressionStringBuilder);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::ExpressionStringBuilder*, "System.Linq.Expressions", "ExpressionStringBuilder");
