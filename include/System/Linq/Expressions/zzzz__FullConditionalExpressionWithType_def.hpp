#pragma once
// IWYU pragma private; include "System/Linq/Expressions/FullConditionalExpressionWithType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__FullConditionalExpression_def.hpp"
CORDL_MODULE_EXPORT(FullConditionalExpressionWithType)
namespace System::Linq::Expressions {
class Expression;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions {
class FullConditionalExpressionWithType;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::FullConditionalExpressionWithType);
// Type: System.Linq.Expressions::FullConditionalExpressionWithType
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::System.Linq.Expressions::FullConditionalExpressionWithType*
class CORDL_TYPE FullConditionalExpressionWithType : public ::System::Linq::Expressions::FullConditionalExpression {
public:
  // Declarations
  __declspec(property(get = get_Type)) ::System::Type* Type;

  /// @brief Field <Type>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__Type_k__BackingField, put = __cordl_internal_set__Type_k__BackingField)) ::System::Type* _Type_k__BackingField;

  static inline ::System::Linq::Expressions::FullConditionalExpressionWithType* New_ctor(::System::Linq::Expressions::Expression* test, ::System::Linq::Expressions::Expression* ifTrue,
                                                                                         ::System::Linq::Expressions::Expression* ifFalse, ::System::Type* type);

  constexpr ::System::Type*& __cordl_internal_get__Type_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__Type_k__BackingField() const;

  constexpr void __cordl_internal_set__Type_k__BackingField(::System::Type* value);

  /// @brief Method .ctor, addr 0x4037d08, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::Expression* test, ::System::Linq::Expressions::Expression* ifTrue, ::System::Linq::Expressions::Expression* ifFalse, ::System::Type* type);

  /// @brief Method get_Type, addr 0x4037ef4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Type* get_Type();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FullConditionalExpressionWithType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FullConditionalExpressionWithType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FullConditionalExpressionWithType(FullConditionalExpressionWithType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FullConditionalExpressionWithType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FullConditionalExpressionWithType(FullConditionalExpressionWithType const&) = delete;

  /// @brief Field <Type>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::Type* ____Type_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13619 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::FullConditionalExpressionWithType, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::FullConditionalExpressionWithType, ____Type_k__BackingField) == 0x28, "Offset mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::FullConditionalExpressionWithType);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::FullConditionalExpressionWithType*, "System.Linq.Expressions", "FullConditionalExpressionWithType");
