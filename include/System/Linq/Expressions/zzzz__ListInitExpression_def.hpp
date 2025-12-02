#pragma once
// IWYU pragma private; include "System/Linq/Expressions/ListInitExpression.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
CORDL_MODULE_EXPORT(ListInitExpression)
namespace System::Collections::ObjectModel {
template <typename T> class ReadOnlyCollection_1;
}
namespace System::Linq::Expressions {
class ElementInit;
}
namespace System::Linq::Expressions {
class NewExpression;
}
// Forward declare root types
namespace System::Linq::Expressions {
class ListInitExpression;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::ListInitExpression);
// Dependencies System.Linq.Expressions.Expression
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.ListInitExpression
class CORDL_TYPE ListInitExpression : public ::System::Linq::Expressions::Expression {
public:
  // Declarations
  __declspec(property(get = get_Initializers)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>* Initializers;

  __declspec(property(get = get_NewExpression)) ::System::Linq::Expressions::NewExpression* NewExpression;

  /// @brief Field <Initializers>k__BackingField, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get__Initializers_k__BackingField,
      put = __cordl_internal_set__Initializers_k__BackingField)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>* _Initializers_k__BackingField;

  /// @brief Field <NewExpression>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__NewExpression_k__BackingField,
                      put = __cordl_internal_set__NewExpression_k__BackingField)) ::System::Linq::Expressions::NewExpression* _NewExpression_k__BackingField;

  constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>* const& __cordl_internal_get__Initializers_k__BackingField() const;

  constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>*& __cordl_internal_get__Initializers_k__BackingField();

  constexpr ::System::Linq::Expressions::NewExpression* const& __cordl_internal_get__NewExpression_k__BackingField() const;

  constexpr ::System::Linq::Expressions::NewExpression*& __cordl_internal_get__NewExpression_k__BackingField();

  constexpr void __cordl_internal_set__Initializers_k__BackingField(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>* value);

  constexpr void __cordl_internal_set__NewExpression_k__BackingField(::System::Linq::Expressions::NewExpression* value);

  /// @brief Method get_Initializers, addr 0x5d6a414, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>* get_Initializers();

  /// @brief Method get_NewExpression, addr 0x5d6a40c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::NewExpression* get_NewExpression();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListInitExpression();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListInitExpression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListInitExpression(ListInitExpression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListInitExpression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListInitExpression(ListInitExpression const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16146 };

  /// @brief Field <NewExpression>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Linq::Expressions::NewExpression* ____NewExpression_k__BackingField;

  /// @brief Field <Initializers>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>* ____Initializers_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::ListInitExpression, ____NewExpression_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::ListInitExpression, ____Initializers_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::ListInitExpression, 0x20>, "Size mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::ListInitExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::ListInitExpression*, "System.Linq.Expressions", "ListInitExpression");
