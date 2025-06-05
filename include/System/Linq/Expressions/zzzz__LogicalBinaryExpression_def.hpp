#pragma once
// IWYU pragma private; include "System/Linq/Expressions/LogicalBinaryExpression.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__BinaryExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionType_def.hpp"
CORDL_MODULE_EXPORT(LogicalBinaryExpression)
namespace System::Linq::Expressions {
struct ExpressionType;
}
namespace System::Linq::Expressions {
class Expression;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions {
class LogicalBinaryExpression;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::LogicalBinaryExpression);
// Dependencies System.Linq.Expressions.BinaryExpression, System.Linq.Expressions.ExpressionType
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.LogicalBinaryExpression
class CORDL_TYPE LogicalBinaryExpression : public ::System::Linq::Expressions::BinaryExpression {
public:
  // Declarations
  __declspec(property(get = get_NodeType)) ::System::Linq::Expressions::ExpressionType NodeType;

  __declspec(property(get = get_Type)) ::System::Type* Type;

  /// @brief Field <NodeType>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__NodeType_k__BackingField,
                      put = __cordl_internal_set__NodeType_k__BackingField)) ::System::Linq::Expressions::ExpressionType _NodeType_k__BackingField;

  static inline ::System::Linq::Expressions::LogicalBinaryExpression* New_ctor(::System::Linq::Expressions::ExpressionType nodeType, ::System::Linq::Expressions::Expression* left,
                                                                               ::System::Linq::Expressions::Expression* right);

  constexpr ::System::Linq::Expressions::ExpressionType const& __cordl_internal_get__NodeType_k__BackingField() const;

  constexpr ::System::Linq::Expressions::ExpressionType& __cordl_internal_get__NodeType_k__BackingField();

  constexpr void __cordl_internal_set__NodeType_k__BackingField(::System::Linq::Expressions::ExpressionType value);

  /// @brief Method .ctor, addr 0x4096fec, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::ExpressionType nodeType, ::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right);

  /// @brief Method get_NodeType, addr 0x4097084, size 0x8, virtual true, abstract: false, final true
  inline ::System::Linq::Expressions::ExpressionType get_NodeType();

  /// @brief Method get_Type, addr 0x4097018, size 0x6c, virtual true, abstract: false, final true
  inline ::System::Type* get_Type();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LogicalBinaryExpression();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LogicalBinaryExpression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LogicalBinaryExpression(LogicalBinaryExpression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LogicalBinaryExpression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LogicalBinaryExpression(LogicalBinaryExpression const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13613 };

  /// @brief Field <NodeType>k__BackingField, offset: 0x20, size: 0x4, def value: None
  ::System::Linq::Expressions::ExpressionType ____NodeType_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::LogicalBinaryExpression, ____NodeType_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::LogicalBinaryExpression, 0x28>, "Size mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::LogicalBinaryExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::LogicalBinaryExpression*, "System.Linq.Expressions", "LogicalBinaryExpression");
