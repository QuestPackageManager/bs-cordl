#pragma once
// IWYU pragma private; include "System/Linq/Expressions/SwitchExpression.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
CORDL_MODULE_EXPORT(SwitchExpression)
namespace System::Collections::ObjectModel {
template <typename T> class ReadOnlyCollection_1;
}
namespace System::Linq::Expressions {
class Expression;
}
namespace System::Linq::Expressions {
class SwitchCase;
}
namespace System::Reflection {
class MethodInfo;
}
// Forward declare root types
namespace System::Linq::Expressions {
class SwitchExpression;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::SwitchExpression);
// Dependencies System.Linq.Expressions.Expression
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.SwitchExpression
class CORDL_TYPE SwitchExpression : public ::System::Linq::Expressions::Expression {
public:
  // Declarations
  __declspec(property(get = get_Cases)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::SwitchCase*>* Cases;

  __declspec(property(get = get_Comparison)) ::System::Reflection::MethodInfo* Comparison;

  __declspec(property(get = get_DefaultBody)) ::System::Linq::Expressions::Expression* DefaultBody;

  __declspec(property(get = get_SwitchValue)) ::System::Linq::Expressions::Expression* SwitchValue;

  /// @brief Field <Cases>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Cases_k__BackingField,
                      put = __cordl_internal_set__Cases_k__BackingField)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::SwitchCase*>* _Cases_k__BackingField;

  /// @brief Field <Comparison>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__Comparison_k__BackingField, put = __cordl_internal_set__Comparison_k__BackingField)) ::System::Reflection::MethodInfo* _Comparison_k__BackingField;

  /// @brief Field <DefaultBody>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__DefaultBody_k__BackingField,
                      put = __cordl_internal_set__DefaultBody_k__BackingField)) ::System::Linq::Expressions::Expression* _DefaultBody_k__BackingField;

  /// @brief Field <SwitchValue>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__SwitchValue_k__BackingField,
                      put = __cordl_internal_set__SwitchValue_k__BackingField)) ::System::Linq::Expressions::Expression* _SwitchValue_k__BackingField;

  constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::SwitchCase*>* const& __cordl_internal_get__Cases_k__BackingField() const;

  constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::SwitchCase*>*& __cordl_internal_get__Cases_k__BackingField();

  constexpr ::System::Reflection::MethodInfo* const& __cordl_internal_get__Comparison_k__BackingField() const;

  constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get__Comparison_k__BackingField();

  constexpr ::System::Linq::Expressions::Expression* const& __cordl_internal_get__DefaultBody_k__BackingField() const;

  constexpr ::System::Linq::Expressions::Expression*& __cordl_internal_get__DefaultBody_k__BackingField();

  constexpr ::System::Linq::Expressions::Expression* const& __cordl_internal_get__SwitchValue_k__BackingField() const;

  constexpr ::System::Linq::Expressions::Expression*& __cordl_internal_get__SwitchValue_k__BackingField();

  constexpr void __cordl_internal_set__Cases_k__BackingField(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::SwitchCase*>* value);

  constexpr void __cordl_internal_set__Comparison_k__BackingField(::System::Reflection::MethodInfo* value);

  constexpr void __cordl_internal_set__DefaultBody_k__BackingField(::System::Linq::Expressions::Expression* value);

  constexpr void __cordl_internal_set__SwitchValue_k__BackingField(::System::Linq::Expressions::Expression* value);

  /// @brief Method get_Cases, addr 0x40bcd38, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::SwitchCase*>* get_Cases();

  /// @brief Method get_Comparison, addr 0x40bcd48, size 0x8, virtual false, abstract: false, final false
  inline ::System::Reflection::MethodInfo* get_Comparison();

  /// @brief Method get_DefaultBody, addr 0x40bcd40, size 0x8, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* get_DefaultBody();

  /// @brief Method get_SwitchValue, addr 0x40bcd30, size 0x8, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* get_SwitchValue();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SwitchExpression();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SwitchExpression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SwitchExpression(SwitchExpression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SwitchExpression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SwitchExpression(SwitchExpression const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13737 };

  /// @brief Field <SwitchValue>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Linq::Expressions::Expression* ____SwitchValue_k__BackingField;

  /// @brief Field <Cases>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::SwitchCase*>* ____Cases_k__BackingField;

  /// @brief Field <DefaultBody>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Linq::Expressions::Expression* ____DefaultBody_k__BackingField;

  /// @brief Field <Comparison>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ____Comparison_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::SwitchExpression, ____SwitchValue_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::SwitchExpression, ____Cases_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::SwitchExpression, ____DefaultBody_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::SwitchExpression, ____Comparison_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::SwitchExpression, 0x30>, "Size mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::SwitchExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::SwitchExpression*, "System.Linq.Expressions", "SwitchExpression");
