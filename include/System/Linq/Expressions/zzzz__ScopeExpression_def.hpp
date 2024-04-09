#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__BlockExpression_def.hpp"
CORDL_MODULE_EXPORT(ScopeExpression)
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::ObjectModel {
template <typename T> class ReadOnlyCollection_1;
}
namespace System::Linq::Expressions {
class ParameterExpression;
}
// Forward declare root types
namespace System::Linq::Expressions {
class ScopeExpression;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::ScopeExpression);
// Type: System.Linq.Expressions::ScopeExpression
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::System.Linq.Expressions::ScopeExpression*
class CORDL_TYPE ScopeExpression : public ::System::Linq::Expressions::BlockExpression {
public:
  // Declarations
  __declspec(property(get = get_VariablesList))::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>* VariablesList;

  /// @brief Field _variables, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__variables,
                      put = __cordl_internal_set__variables))::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>* _variables;

  /// @brief Method GetOrMakeVariables, addr 0x2afe930, size 0x48, virtual true, abstract: false, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* GetOrMakeVariables();

  static inline ::System::Linq::Expressions::ScopeExpression* New_ctor(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>* variables);

  /// @brief Method ReuseOrValidateVariables, addr 0x2afe980, size 0x8c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>*
  ReuseOrValidateVariables(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* variables);

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>*& __cordl_internal_get__variables();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>*> const& __cordl_internal_get__variables() const;

  constexpr void __cordl_internal_set__variables(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>* value);

  /// @brief Method .ctor, addr 0x2afe90c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>* variables);

  /// @brief Method get_VariablesList, addr 0x2afe978, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>* get_VariablesList();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScopeExpression();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScopeExpression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScopeExpression(ScopeExpression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScopeExpression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScopeExpression(ScopeExpression const&) = delete;

  /// @brief Field _variables, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>* ____variables;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::ScopeExpression, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::ScopeExpression, ____variables) == 0x10, "Offset mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::ScopeExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::ScopeExpression*, "System.Linq.Expressions", "ScopeExpression");
