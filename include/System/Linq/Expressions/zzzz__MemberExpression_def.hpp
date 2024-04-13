#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
CORDL_MODULE_EXPORT(MemberExpression)
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
class FieldExpression;
}
namespace System::Linq::Expressions {
class PropertyExpression;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Reflection {
class PropertyInfo;
}
// Forward declare root types
namespace System::Linq::Expressions {
class MemberExpression;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::MemberExpression);
// Type: System.Linq.Expressions::MemberExpression
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::System.Linq.Expressions::MemberExpression*
class CORDL_TYPE MemberExpression : public ::System::Linq::Expressions::Expression {
public:
  // Declarations
  __declspec(property(get = get_Expression))::System::Linq::Expressions::Expression* Expression;

  __declspec(property(get = get_Member))::System::Reflection::MemberInfo* Member;

  __declspec(property(get = get_NodeType))::System::Linq::Expressions::ExpressionType NodeType;

  /// @brief Field <Expression>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Expression_k__BackingField,
                      put = __cordl_internal_set__Expression_k__BackingField))::System::Linq::Expressions::Expression* _Expression_k__BackingField;

  /// @brief Method Accept, addr 0x2b0c6bc, size 0x2c, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* visitor);

  /// @brief Method GetMember, addr 0x2b0c694, size 0x28, virtual true, abstract: false, final false
  inline ::System::Reflection::MemberInfo* GetMember();

  /// @brief Method Make, addr 0x2b0c5f8, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::FieldExpression* Make(::System::Linq::Expressions::Expression* expression, ::System::Reflection::FieldInfo* field);

  /// @brief Method Make, addr 0x2b0c564, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::PropertyExpression* Make(::System::Linq::Expressions::Expression* expression, ::System::Reflection::PropertyInfo* property);

  static inline ::System::Linq::Expressions::MemberExpression* New_ctor(::System::Linq::Expressions::Expression* expression);

  /// @brief Method Update, addr 0x2b0a718, size 0x94, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::MemberExpression* Update(::System::Linq::Expressions::Expression* expression);

  constexpr ::System::Linq::Expressions::Expression*& __cordl_internal_get__Expression_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::Expression*> const& __cordl_internal_get__Expression_k__BackingField() const;

  constexpr void __cordl_internal_set__Expression_k__BackingField(::System::Linq::Expressions::Expression* value);

  /// @brief Method .ctor, addr 0x2b0c4f8, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::Expression* expression);

  /// @brief Method get_Expression, addr 0x2b0c4f0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* get_Expression();

  /// @brief Method get_Member, addr 0x2b085d4, size 0xc, virtual false, abstract: false, final false
  inline ::System::Reflection::MemberInfo* get_Member();

  /// @brief Method get_NodeType, addr 0x2b0c68c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Linq::Expressions::ExpressionType get_NodeType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MemberExpression();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MemberExpression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MemberExpression(MemberExpression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MemberExpression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MemberExpression(MemberExpression const&) = delete;

  /// @brief Field <Expression>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Linq::Expressions::Expression* ____Expression_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::MemberExpression, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::MemberExpression, ____Expression_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::MemberExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::MemberExpression*, "System.Linq.Expressions", "MemberExpression");
