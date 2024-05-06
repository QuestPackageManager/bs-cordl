#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
CORDL_MODULE_EXPORT(RuntimeVariablesExpression)
namespace System::Collections::ObjectModel {
template <typename T> class ReadOnlyCollection_1;
}
namespace System::Linq::Expressions {
class ParameterExpression;
}
// Forward declare root types
namespace System::Linq::Expressions {
class RuntimeVariablesExpression;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::RuntimeVariablesExpression);
// Type: System.Linq.Expressions::RuntimeVariablesExpression
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::System.Linq.Expressions::RuntimeVariablesExpression*
class CORDL_TYPE RuntimeVariablesExpression : public ::System::Linq::Expressions::Expression {
public:
  // Declarations
  __declspec(property(get = get_Variables))::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* Variables;

  /// @brief Field <Variables>k__BackingField, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get__Variables_k__BackingField,
      put = __cordl_internal_set__Variables_k__BackingField))::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* _Variables_k__BackingField;

  constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*& __cordl_internal_get__Variables_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*> const&
  __cordl_internal_get__Variables_k__BackingField() const;

  constexpr void __cordl_internal_set__Variables_k__BackingField(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* value);

  /// @brief Method get_Variables, addr 0x2c0c794, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* get_Variables();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeVariablesExpression();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RuntimeVariablesExpression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeVariablesExpression(RuntimeVariablesExpression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeVariablesExpression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeVariablesExpression(RuntimeVariablesExpression const&) = delete;

  /// @brief Field <Variables>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* ____Variables_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::RuntimeVariablesExpression, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::RuntimeVariablesExpression, ____Variables_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::RuntimeVariablesExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::RuntimeVariablesExpression*, "System.Linq.Expressions", "RuntimeVariablesExpression");
