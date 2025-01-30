#pragma once
// IWYU pragma private; include "System/Linq/Expressions/ConstantExpression.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
CORDL_MODULE_EXPORT(ConstantExpression)
namespace System::Linq::Expressions {
struct ExpressionType;
}
namespace System::Linq::Expressions {
class ExpressionVisitor;
}
namespace System::Linq::Expressions {
class Expression;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions {
class ConstantExpression;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::ConstantExpression);
// Dependencies System.Linq.Expressions.Expression
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.ConstantExpression
class CORDL_TYPE ConstantExpression : public ::System::Linq::Expressions::Expression {
public:
  // Declarations
  __declspec(property(get = get_NodeType)) ::System::Linq::Expressions::ExpressionType NodeType;

  __declspec(property(get = get_Type)) ::System::Type* Type;

  __declspec(property(get = get_Value)) ::System::Object* Value;

  /// @brief Field <Value>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Value_k__BackingField, put = __cordl_internal_set__Value_k__BackingField)) ::System::Object* _Value_k__BackingField;

  /// @brief Method Accept, addr 0x40b0c90, size 0x28, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* visitor);

  static inline ::System::Linq::Expressions::ConstantExpression* New_ctor(::System::Object* value);

  constexpr ::System::Object* const& __cordl_internal_get__Value_k__BackingField() const;

  constexpr ::System::Object*& __cordl_internal_get__Value_k__BackingField();

  constexpr void __cordl_internal_set__Value_k__BackingField(::System::Object* value);

  /// @brief Method .ctor, addr 0x40b0b8c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* value);

  /// @brief Method get_NodeType, addr 0x40b0c80, size 0x8, virtual true, abstract: false, final true
  inline ::System::Linq::Expressions::ExpressionType get_NodeType();

  /// @brief Method get_Type, addr 0x40b0bf8, size 0x88, virtual true, abstract: false, final false
  inline ::System::Type* get_Type();

  /// @brief Method get_Value, addr 0x40b0c88, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_Value();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConstantExpression();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConstantExpression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConstantExpression(ConstantExpression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConstantExpression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConstantExpression(ConstantExpression const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13664 };

  /// @brief Field <Value>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ____Value_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::ConstantExpression, ____Value_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::ConstantExpression, 0x18>, "Size mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::ConstantExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::ConstantExpression*, "System.Linq.Expressions", "ConstantExpression");
