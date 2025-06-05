#pragma once
// IWYU pragma private; include "System/Linq/Expressions/MemberMemberBinding.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__MemberBinding_def.hpp"
CORDL_MODULE_EXPORT(MemberMemberBinding)
namespace System::Collections::ObjectModel {
template <typename T> class ReadOnlyCollection_1;
}
namespace System::Linq::Expressions {
class MemberBinding;
}
// Forward declare root types
namespace System::Linq::Expressions {
class MemberMemberBinding;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::MemberMemberBinding);
// Dependencies System.Linq.Expressions.MemberBinding
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.MemberMemberBinding
class CORDL_TYPE MemberMemberBinding : public ::System::Linq::Expressions::MemberBinding {
public:
  // Declarations
  __declspec(property(get = get_Bindings)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::MemberBinding*>* Bindings;

  /// @brief Field <Bindings>k__BackingField, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get__Bindings_k__BackingField,
      put = __cordl_internal_set__Bindings_k__BackingField)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::MemberBinding*>* _Bindings_k__BackingField;

  constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::MemberBinding*>* const& __cordl_internal_get__Bindings_k__BackingField() const;

  constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::MemberBinding*>*& __cordl_internal_get__Bindings_k__BackingField();

  constexpr void __cordl_internal_set__Bindings_k__BackingField(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::MemberBinding*>* value);

  /// @brief Method get_Bindings, addr 0x40ba958, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::MemberBinding*>* get_Bindings();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MemberMemberBinding();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MemberMemberBinding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MemberMemberBinding(MemberMemberBinding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MemberMemberBinding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MemberMemberBinding(MemberMemberBinding const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13709 };

  /// @brief Field <Bindings>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::MemberBinding*>* ____Bindings_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::MemberMemberBinding, ____Bindings_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::MemberMemberBinding, 0x28>, "Size mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::MemberMemberBinding);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::MemberMemberBinding*, "System.Linq.Expressions", "MemberMemberBinding");
