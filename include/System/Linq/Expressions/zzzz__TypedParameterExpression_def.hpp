#pragma once
// IWYU pragma private; include "System/Linq/Expressions/TypedParameterExpression.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__ParameterExpression_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TypedParameterExpression)
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions {
class TypedParameterExpression;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::TypedParameterExpression);
// Dependencies System.Linq.Expressions.ParameterExpression
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.TypedParameterExpression
class CORDL_TYPE TypedParameterExpression : public ::System::Linq::Expressions::ParameterExpression {
public:
  // Declarations
  __declspec(property(get = get_Type)) ::System::Type* Type;

  /// @brief Field <Type>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Type_k__BackingField, put = __cordl_internal_set__Type_k__BackingField)) ::System::Type* _Type_k__BackingField;

  static inline ::System::Linq::Expressions::TypedParameterExpression* New_ctor(::System::Type* type, ::StringW name);

  constexpr ::System::Type* const& __cordl_internal_get__Type_k__BackingField() const;

  constexpr ::System::Type*& __cordl_internal_get__Type_k__BackingField();

  constexpr void __cordl_internal_set__Type_k__BackingField(::System::Type* value);

  /// @brief Method .ctor, addr 0x40bcf30, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::StringW name);

  /// @brief Method get_Type, addr 0x40bd010, size 0x8, virtual true, abstract: false, final true
  inline ::System::Type* get_Type();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypedParameterExpression();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypedParameterExpression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypedParameterExpression(TypedParameterExpression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypedParameterExpression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypedParameterExpression(TypedParameterExpression const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13730 };

  /// @brief Field <Type>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ____Type_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::TypedParameterExpression, ____Type_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::TypedParameterExpression, 0x20>, "Size mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::TypedParameterExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::TypedParameterExpression*, "System.Linq.Expressions", "TypedParameterExpression");
