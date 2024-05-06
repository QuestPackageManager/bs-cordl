#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__CollectionChangeAction_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
CORDL_MODULE_EXPORT(CollectionChangeEventArgs)
namespace System::ComponentModel {
struct CollectionChangeAction;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class CollectionChangeEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::CollectionChangeEventArgs);
// Type: System.ComponentModel::CollectionChangeEventArgs
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::CollectionChangeEventArgs*
class CORDL_TYPE CollectionChangeEventArgs : public ::System::EventArgs {
public:
  // Declarations
  __declspec(property(get = get_Action))::System::ComponentModel::CollectionChangeAction Action;

  __declspec(property(get = get_Element))::System::Object* Element;

  /// @brief Field <Action>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__Action_k__BackingField, put = __cordl_internal_set__Action_k__BackingField))::System::ComponentModel::CollectionChangeAction _Action_k__BackingField;

  /// @brief Field <Element>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Element_k__BackingField, put = __cordl_internal_set__Element_k__BackingField))::System::Object* _Element_k__BackingField;

  static inline ::System::ComponentModel::CollectionChangeEventArgs* New_ctor(::System::ComponentModel::CollectionChangeAction action, ::System::Object* element);

  constexpr ::System::ComponentModel::CollectionChangeAction const& __cordl_internal_get__Action_k__BackingField() const;

  constexpr ::System::ComponentModel::CollectionChangeAction& __cordl_internal_get__Action_k__BackingField();

  constexpr ::System::Object*& __cordl_internal_get__Element_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__Element_k__BackingField() const;

  constexpr void __cordl_internal_set__Action_k__BackingField(::System::ComponentModel::CollectionChangeAction value);

  constexpr void __cordl_internal_set__Element_k__BackingField(::System::Object* value);

  /// @brief Method .ctor, addr 0x2f35d48, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::CollectionChangeAction action, ::System::Object* element);

  /// @brief Method get_Action, addr 0x2f35dbc, size 0x8, virtual true, abstract: false, final false
  inline ::System::ComponentModel::CollectionChangeAction get_Action();

  /// @brief Method get_Element, addr 0x2f35dc4, size 0x8, virtual true, abstract: false, final false
  inline ::System::Object* get_Element();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CollectionChangeEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CollectionChangeEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CollectionChangeEventArgs(CollectionChangeEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CollectionChangeEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CollectionChangeEventArgs(CollectionChangeEventArgs const&) = delete;

  /// @brief Field <Action>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::System::ComponentModel::CollectionChangeAction ____Action_k__BackingField;

  /// @brief Field <Element>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ____Element_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::CollectionChangeEventArgs, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::CollectionChangeEventArgs, ____Action_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::CollectionChangeEventArgs, ____Element_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::CollectionChangeEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::CollectionChangeEventArgs*, "System.ComponentModel", "CollectionChangeEventArgs");
