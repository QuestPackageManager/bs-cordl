#pragma once
// IWYU pragma private; include "System/Linq/Expressions/GotoExpression.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Linq/Expressions/zzzz__GotoExpressionKind_def.hpp"
CORDL_MODULE_EXPORT(GotoExpression)
namespace System::Linq::Expressions {
struct ExpressionType;
}
namespace System::Linq::Expressions {
class ExpressionVisitor;
}
namespace System::Linq::Expressions {
class Expression;
}
namespace System::Linq::Expressions {
struct GotoExpressionKind;
}
namespace System::Linq::Expressions {
class LabelTarget;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions {
class GotoExpression;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::GotoExpression);
// Type: System.Linq.Expressions::GotoExpression
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::System.Linq.Expressions::GotoExpression*
class CORDL_TYPE GotoExpression : public ::System::Linq::Expressions::Expression {
public:
  // Declarations
  __declspec(property(get = get_Kind)) ::System::Linq::Expressions::GotoExpressionKind Kind;

  __declspec(property(get = get_NodeType)) ::System::Linq::Expressions::ExpressionType NodeType;

  __declspec(property(get = get_Target)) ::System::Linq::Expressions::LabelTarget* Target;

  __declspec(property(get = get_Type)) ::System::Type* Type;

  __declspec(property(get = get_Value)) ::System::Linq::Expressions::Expression* Value;

  /// @brief Field <Kind>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__Kind_k__BackingField, put = __cordl_internal_set__Kind_k__BackingField)) ::System::Linq::Expressions::GotoExpressionKind _Kind_k__BackingField;

  /// @brief Field <Target>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Target_k__BackingField, put = __cordl_internal_set__Target_k__BackingField)) ::System::Linq::Expressions::LabelTarget* _Target_k__BackingField;

  /// @brief Field <Type>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Type_k__BackingField, put = __cordl_internal_set__Type_k__BackingField)) ::System::Type* _Type_k__BackingField;

  /// @brief Field <Value>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Value_k__BackingField, put = __cordl_internal_set__Value_k__BackingField)) ::System::Linq::Expressions::Expression* _Value_k__BackingField;

  /// @brief Method Accept, addr 0x4042010, size 0x28, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* visitor);

  static inline ::System::Linq::Expressions::GotoExpression* New_ctor(::System::Linq::Expressions::GotoExpressionKind kind, ::System::Linq::Expressions::LabelTarget* target,
                                                                      ::System::Linq::Expressions::Expression* value, ::System::Type* type);

  /// @brief Method Update, addr 0x40411d8, size 0xbc, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::GotoExpression* Update(::System::Linq::Expressions::LabelTarget* target, ::System::Linq::Expressions::Expression* value);

  constexpr ::System::Linq::Expressions::GotoExpressionKind const& __cordl_internal_get__Kind_k__BackingField() const;

  constexpr ::System::Linq::Expressions::GotoExpressionKind& __cordl_internal_get__Kind_k__BackingField();

  constexpr ::System::Linq::Expressions::LabelTarget*& __cordl_internal_get__Target_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::LabelTarget*> const& __cordl_internal_get__Target_k__BackingField() const;

  constexpr ::System::Type*& __cordl_internal_get__Type_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__Type_k__BackingField() const;

  constexpr ::System::Linq::Expressions::Expression*& __cordl_internal_get__Value_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::Expression*> const& __cordl_internal_get__Value_k__BackingField() const;

  constexpr void __cordl_internal_set__Kind_k__BackingField(::System::Linq::Expressions::GotoExpressionKind value);

  constexpr void __cordl_internal_set__Target_k__BackingField(::System::Linq::Expressions::LabelTarget* value);

  constexpr void __cordl_internal_set__Type_k__BackingField(::System::Type* value);

  constexpr void __cordl_internal_set__Value_k__BackingField(::System::Linq::Expressions::Expression* value);

  /// @brief Method .ctor, addr 0x4041f60, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::GotoExpressionKind kind, ::System::Linq::Expressions::LabelTarget* target, ::System::Linq::Expressions::Expression* value, ::System::Type* type);

  /// @brief Method get_Kind, addr 0x4042008, size 0x8, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::GotoExpressionKind get_Kind();

  /// @brief Method get_NodeType, addr 0x4041ff0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Linq::Expressions::ExpressionType get_NodeType();

  /// @brief Method get_Target, addr 0x4042000, size 0x8, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::LabelTarget* get_Target();

  /// @brief Method get_Type, addr 0x4041fe8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Type* get_Type();

  /// @brief Method get_Value, addr 0x4041ff8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* get_Value();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GotoExpression();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GotoExpression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GotoExpression(GotoExpression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GotoExpression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GotoExpression(GotoExpression const&) = delete;

  /// @brief Field <Type>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____Type_k__BackingField;

  /// @brief Field <Value>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Linq::Expressions::Expression* ____Value_k__BackingField;

  /// @brief Field <Target>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Linq::Expressions::LabelTarget* ____Target_k__BackingField;

  /// @brief Field <Kind>k__BackingField, offset: 0x28, size: 0x4, def value: None
  ::System::Linq::Expressions::GotoExpressionKind ____Kind_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13630 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::GotoExpression, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::GotoExpression, ____Type_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::GotoExpression, ____Value_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::GotoExpression, ____Target_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::GotoExpression, ____Kind_k__BackingField) == 0x28, "Offset mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::GotoExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::GotoExpression*, "System.Linq.Expressions", "GotoExpression");
