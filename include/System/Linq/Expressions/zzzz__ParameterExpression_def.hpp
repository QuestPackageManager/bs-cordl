#pragma once
// IWYU pragma private; include "System/Linq/Expressions/ParameterExpression.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ParameterExpression)
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
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions {
class ParameterExpression;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::ParameterExpression);
// Dependencies System.Linq.Expressions.Expression
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.ParameterExpression
class CORDL_TYPE ParameterExpression : public ::System::Linq::Expressions::Expression {
public:
  // Declarations
  __declspec(property(get = get_IsByRef)) bool IsByRef;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_NodeType)) ::System::Linq::Expressions::ExpressionType NodeType;

  __declspec(property(get = get_Type)) ::System::Type* Type;

  /// @brief Field <Name>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Method Accept, addr 0x40be898, size 0x2c, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* visitor);

  /// @brief Method GetIsByRef, addr 0x40be890, size 0x8, virtual true, abstract: false, final false
  inline bool GetIsByRef();

  /// @brief Method Make, addr 0x40be148, size 0x67c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::ParameterExpression* Make(::System::Type* type, ::StringW name, bool isByRef);

  static inline ::System::Linq::Expressions::ParameterExpression* New_ctor(::StringW name);

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x40be0dc, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method get_IsByRef, addr 0x40b7d5c, size 0xc, virtual false, abstract: false, final false
  inline bool get_IsByRef();

  /// @brief Method get_Name, addr 0x40be888, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_NodeType, addr 0x40be880, size 0x8, virtual true, abstract: false, final true
  inline ::System::Linq::Expressions::ExpressionType get_NodeType();

  /// @brief Method get_Type, addr 0x40be814, size 0x6c, virtual true, abstract: false, final false
  inline ::System::Type* get_Type();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParameterExpression();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ParameterExpression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParameterExpression(ParameterExpression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParameterExpression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParameterExpression(ParameterExpression const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13726 };

  /// @brief Field <Name>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::ParameterExpression, ____Name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::ParameterExpression, 0x18>, "Size mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::ParameterExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::ParameterExpression*, "System.Linq.Expressions", "ParameterExpression");
