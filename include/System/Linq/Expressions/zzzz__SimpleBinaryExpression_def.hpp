#pragma once
// IWYU pragma private; include "System/Linq/Expressions/SimpleBinaryExpression.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__BinaryExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionType_def.hpp"
CORDL_MODULE_EXPORT(SimpleBinaryExpression)
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
class SimpleBinaryExpression;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::SimpleBinaryExpression);
// Dependencies System.Linq.Expressions.BinaryExpression, System.Linq.Expressions.ExpressionType
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.SimpleBinaryExpression
class CORDL_TYPE SimpleBinaryExpression : public ::System::Linq::Expressions::BinaryExpression {
public:
  // Declarations
  __declspec(property(get = get_NodeType)) ::System::Linq::Expressions::ExpressionType NodeType;

  __declspec(property(get = get_Type)) ::System::Type* Type;

  /// @brief Field <NodeType>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__NodeType_k__BackingField,
                      put = __cordl_internal_set__NodeType_k__BackingField)) ::System::Linq::Expressions::ExpressionType _NodeType_k__BackingField;

  /// @brief Field <Type>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__Type_k__BackingField, put = __cordl_internal_set__Type_k__BackingField)) ::System::Type* _Type_k__BackingField;

  static inline ::System::Linq::Expressions::SimpleBinaryExpression* New_ctor(::System::Linq::Expressions::ExpressionType nodeType, ::System::Linq::Expressions::Expression* left,
                                                                              ::System::Linq::Expressions::Expression* right, ::System::Type* type);

  constexpr ::System::Linq::Expressions::ExpressionType const& __cordl_internal_get__NodeType_k__BackingField() const;

  constexpr ::System::Linq::Expressions::ExpressionType& __cordl_internal_get__NodeType_k__BackingField();

  constexpr ::System::Type* const& __cordl_internal_get__Type_k__BackingField() const;

  constexpr ::System::Type*& __cordl_internal_get__Type_k__BackingField();

  constexpr void __cordl_internal_set__NodeType_k__BackingField(::System::Linq::Expressions::ExpressionType value);

  constexpr void __cordl_internal_set__Type_k__BackingField(::System::Type* value);

  /// @brief Method .ctor, addr 0x40922a0, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::ExpressionType nodeType, ::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Type* type);

  /// @brief Method get_NodeType, addr 0x40922d4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Linq::Expressions::ExpressionType get_NodeType();

  /// @brief Method get_Type, addr 0x40922dc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Type* get_Type();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SimpleBinaryExpression();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SimpleBinaryExpression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SimpleBinaryExpression(SimpleBinaryExpression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SimpleBinaryExpression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SimpleBinaryExpression(SimpleBinaryExpression const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13615 };

  /// @brief Field <NodeType>k__BackingField, offset: 0x20, size: 0x4, def value: None
  ::System::Linq::Expressions::ExpressionType ____NodeType_k__BackingField;

  /// @brief Field <Type>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::Type* ____Type_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::SimpleBinaryExpression, ____NodeType_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::SimpleBinaryExpression, ____Type_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::SimpleBinaryExpression, 0x30>, "Size mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::SimpleBinaryExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::SimpleBinaryExpression*, "System.Linq.Expressions", "SimpleBinaryExpression");
