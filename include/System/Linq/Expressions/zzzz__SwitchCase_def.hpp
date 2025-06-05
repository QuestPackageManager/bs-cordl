#pragma once
// IWYU pragma private; include "System/Linq/Expressions/SwitchCase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SwitchCase)
namespace System::Collections::ObjectModel {
template <typename T> class ReadOnlyCollection_1;
}
namespace System::Linq::Expressions {
class Expression;
}
// Forward declare root types
namespace System::Linq::Expressions {
class SwitchCase;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::SwitchCase);
// Dependencies System.Object
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.SwitchCase
class CORDL_TYPE SwitchCase : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Body)) ::System::Linq::Expressions::Expression* Body;

  __declspec(property(get = get_TestValues)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* TestValues;

  /// @brief Field <Body>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Body_k__BackingField, put = __cordl_internal_set__Body_k__BackingField)) ::System::Linq::Expressions::Expression* _Body_k__BackingField;

  /// @brief Field <TestValues>k__BackingField, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get__TestValues_k__BackingField,
      put = __cordl_internal_set__TestValues_k__BackingField)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* _TestValues_k__BackingField;

  constexpr ::System::Linq::Expressions::Expression* const& __cordl_internal_get__Body_k__BackingField() const;

  constexpr ::System::Linq::Expressions::Expression*& __cordl_internal_get__Body_k__BackingField();

  constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* const& __cordl_internal_get__TestValues_k__BackingField() const;

  constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*& __cordl_internal_get__TestValues_k__BackingField();

  constexpr void __cordl_internal_set__Body_k__BackingField(::System::Linq::Expressions::Expression* value);

  constexpr void __cordl_internal_set__TestValues_k__BackingField(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* value);

  /// @brief Method get_Body, addr 0x40bd090, size 0x8, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* get_Body();

  /// @brief Method get_TestValues, addr 0x40bd088, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* get_TestValues();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SwitchCase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SwitchCase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SwitchCase(SwitchCase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SwitchCase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SwitchCase(SwitchCase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13736 };

  /// @brief Field <TestValues>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* ____TestValues_k__BackingField;

  /// @brief Field <Body>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Linq::Expressions::Expression* ____Body_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::SwitchCase, ____TestValues_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::SwitchCase, ____Body_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::SwitchCase, 0x20>, "Size mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::SwitchCase);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::SwitchCase*, "System.Linq.Expressions", "SwitchCase");
