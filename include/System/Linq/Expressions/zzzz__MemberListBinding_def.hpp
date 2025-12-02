#pragma once
// IWYU pragma private; include "System/Linq/Expressions/MemberListBinding.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__MemberBinding_def.hpp"
CORDL_MODULE_EXPORT(MemberListBinding)
namespace System::Collections::ObjectModel {
template <typename T> class ReadOnlyCollection_1;
}
namespace System::Linq::Expressions {
class ElementInit;
}
// Forward declare root types
namespace System::Linq::Expressions {
class MemberListBinding;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::MemberListBinding);
// Dependencies System.Linq.Expressions.MemberBinding
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.MemberListBinding
class CORDL_TYPE MemberListBinding : public ::System::Linq::Expressions::MemberBinding {
public:
  // Declarations
  __declspec(property(get = get_Initializers)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>* Initializers;

  /// @brief Field <Initializers>k__BackingField, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get__Initializers_k__BackingField,
      put = __cordl_internal_set__Initializers_k__BackingField)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>* _Initializers_k__BackingField;

  constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>* const& __cordl_internal_get__Initializers_k__BackingField() const;

  constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>*& __cordl_internal_get__Initializers_k__BackingField();

  constexpr void __cordl_internal_set__Initializers_k__BackingField(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>* value);

  /// @brief Method get_Initializers, addr 0x5d6a778, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>* get_Initializers();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MemberListBinding();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MemberListBinding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MemberListBinding(MemberListBinding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MemberListBinding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MemberListBinding(MemberListBinding const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16155 };

  /// @brief Field <Initializers>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>* ____Initializers_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::MemberListBinding, ____Initializers_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::MemberListBinding, 0x28>, "Size mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::MemberListBinding);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::MemberListBinding*, "System.Linq.Expressions", "MemberListBinding");
