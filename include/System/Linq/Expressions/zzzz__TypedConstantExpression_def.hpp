#pragma once
// IWYU pragma private; include "System/Linq/Expressions/TypedConstantExpression.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__ConstantExpression_def.hpp"
CORDL_MODULE_EXPORT(TypedConstantExpression)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions {
class TypedConstantExpression;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::TypedConstantExpression);
// Type: System.Linq.Expressions::TypedConstantExpression
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::System.Linq.Expressions::TypedConstantExpression*
class CORDL_TYPE TypedConstantExpression : public ::System::Linq::Expressions::ConstantExpression {
public:
  // Declarations
  __declspec(property(get = get_Type))::System::Type* Type;

  /// @brief Field <Type>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Type_k__BackingField, put = __cordl_internal_set__Type_k__BackingField))::System::Type* _Type_k__BackingField;

  static inline ::System::Linq::Expressions::TypedConstantExpression* New_ctor(::System::Object* value, ::System::Type* type);

  constexpr ::System::Type*& __cordl_internal_get__Type_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__Type_k__BackingField() const;

  constexpr void __cordl_internal_set__Type_k__BackingField(::System::Type* value);

  /// @brief Method .ctor, addr 0x2bfe6e4, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* value, ::System::Type* type);

  /// @brief Method get_Type, addr 0x2bfe708, size 0x8, virtual true, abstract: false, final true
  inline ::System::Type* get_Type();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypedConstantExpression();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypedConstantExpression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypedConstantExpression(TypedConstantExpression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypedConstantExpression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypedConstantExpression(TypedConstantExpression const&) = delete;

  /// @brief Field <Type>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ____Type_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::TypedConstantExpression, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::TypedConstantExpression, ____Type_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::TypedConstantExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::TypedConstantExpression*, "System.Linq.Expressions", "TypedConstantExpression");
