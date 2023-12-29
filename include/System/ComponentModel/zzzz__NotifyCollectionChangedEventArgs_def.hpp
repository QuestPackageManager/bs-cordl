#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__NotifyCollectionChangedAction_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NotifyCollectionChangedEventArgs)
namespace System {
class Object;
}
namespace System::ComponentModel {
struct NotifyCollectionChangedAction;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace System::ComponentModel {
class NotifyCollectionChangedEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::NotifyCollectionChangedEventArgs);
// Type: System.ComponentModel::NotifyCollectionChangedEventArgs
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(11717))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11718))
// CS Name: ::System.ComponentModel::NotifyCollectionChangedEventArgs*
class CORDL_TYPE NotifyCollectionChangedEventArgs : public ::System::Object {
public:
  // Declarations
  /// @brief Field <Action>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __get__Action_k__BackingField, put = __set__Action_k__BackingField))::System::ComponentModel::NotifyCollectionChangedAction _Action_k__BackingField;

  /// @brief Field <NewItems>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__NewItems_k__BackingField, put = __set__NewItems_k__BackingField))::System::Collections::IList* _NewItems_k__BackingField;

  /// @brief Field <NewStartingIndex>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __get__NewStartingIndex_k__BackingField, put = __set__NewStartingIndex_k__BackingField)) int32_t _NewStartingIndex_k__BackingField;

  /// @brief Field <OldItems>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __get__OldItems_k__BackingField, put = __set__OldItems_k__BackingField))::System::Collections::IList* _OldItems_k__BackingField;

  /// @brief Field <OldStartingIndex>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __get__OldStartingIndex_k__BackingField, put = __set__OldStartingIndex_k__BackingField)) int32_t _OldStartingIndex_k__BackingField;

  __declspec(property(get = get_Action, put = set_Action))::System::ComponentModel::NotifyCollectionChangedAction Action;

  __declspec(property(get = get_NewItems, put = set_NewItems))::System::Collections::IList* NewItems;

  __declspec(property(get = get_NewStartingIndex, put = set_NewStartingIndex)) int32_t NewStartingIndex;

  __declspec(property(get = get_OldItems, put = set_OldItems))::System::Collections::IList* OldItems;

  __declspec(property(get = get_OldStartingIndex, put = set_OldStartingIndex)) int32_t OldStartingIndex;

  constexpr ::System::ComponentModel::NotifyCollectionChangedAction& __get__Action_k__BackingField();

  constexpr ::System::ComponentModel::NotifyCollectionChangedAction const& __get__Action_k__BackingField() const;

  constexpr void __set__Action_k__BackingField(::System::ComponentModel::NotifyCollectionChangedAction value);

  constexpr ::System::Collections::IList*& __get__NewItems_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __get__NewItems_k__BackingField() const;

  constexpr void __set__NewItems_k__BackingField(::System::Collections::IList* value);

  constexpr int32_t& __get__NewStartingIndex_k__BackingField();

  constexpr int32_t const& __get__NewStartingIndex_k__BackingField() const;

  constexpr void __set__NewStartingIndex_k__BackingField(int32_t value);

  constexpr ::System::Collections::IList*& __get__OldItems_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __get__OldItems_k__BackingField() const;

  constexpr void __set__OldItems_k__BackingField(::System::Collections::IList* value);

  constexpr int32_t& __get__OldStartingIndex_k__BackingField();

  constexpr int32_t const& __get__OldStartingIndex_k__BackingField() const;

  constexpr void __set__OldStartingIndex_k__BackingField(int32_t value);

  /// @brief Method get_Action addr 0x24db4c0 size 0x8 virtual false final false
  inline ::System::ComponentModel::NotifyCollectionChangedAction get_Action();

  /// @brief Method set_Action addr 0x24db4c8 size 0x8 virtual false final false
  inline void set_Action(::System::ComponentModel::NotifyCollectionChangedAction value);

  /// @brief Method get_NewItems addr 0x24db4d0 size 0x8 virtual false final false
  inline ::System::Collections::IList* get_NewItems();

  /// @brief Method set_NewItems addr 0x24db4d8 size 0x8 virtual false final false
  inline void set_NewItems(::System::Collections::IList* value);

  /// @brief Method get_NewStartingIndex addr 0x24db4e0 size 0x8 virtual false final false
  inline int32_t get_NewStartingIndex();

  /// @brief Method set_NewStartingIndex addr 0x24db4e8 size 0x8 virtual false final false
  inline void set_NewStartingIndex(int32_t value);

  /// @brief Method get_OldItems addr 0x24db4f0 size 0x8 virtual false final false
  inline ::System::Collections::IList* get_OldItems();

  /// @brief Method set_OldItems addr 0x24db4f8 size 0x8 virtual false final false
  inline void set_OldItems(::System::Collections::IList* value);

  /// @brief Method get_OldStartingIndex addr 0x24db500 size 0x8 virtual false final false
  inline int32_t get_OldStartingIndex();

  /// @brief Method set_OldStartingIndex addr 0x24db508 size 0x8 virtual false final false
  inline void set_OldStartingIndex(int32_t value);

  static inline ::System::ComponentModel::NotifyCollectionChangedEventArgs* New_ctor(::System::ComponentModel::NotifyCollectionChangedAction action);

  /// @brief Method .ctor addr 0x24db510 size 0x28 virtual false final false
  inline void _ctor(::System::ComponentModel::NotifyCollectionChangedAction action);

  static inline ::System::ComponentModel::NotifyCollectionChangedEventArgs* New_ctor(::System::ComponentModel::NotifyCollectionChangedAction action, ::System::Collections::IList* changedItems);

  /// @brief Method .ctor addr 0x24db538 size 0x30 virtual false final false
  inline void _ctor(::System::ComponentModel::NotifyCollectionChangedAction action, ::System::Collections::IList* changedItems);

  static inline ::System::ComponentModel::NotifyCollectionChangedEventArgs* New_ctor(::System::ComponentModel::NotifyCollectionChangedAction action, ::System::Object* changedItem);

  /// @brief Method .ctor addr 0x24db568 size 0x100 virtual false final false
  inline void _ctor(::System::ComponentModel::NotifyCollectionChangedAction action, ::System::Object* changedItem);

  static inline ::System::ComponentModel::NotifyCollectionChangedEventArgs* New_ctor(::System::ComponentModel::NotifyCollectionChangedAction action, ::System::Collections::IList* newItems,
                                                                                     ::System::Collections::IList* oldItems);

  /// @brief Method .ctor addr 0x24db668 size 0x40 virtual false final false
  inline void _ctor(::System::ComponentModel::NotifyCollectionChangedAction action, ::System::Collections::IList* newItems, ::System::Collections::IList* oldItems);

  static inline ::System::ComponentModel::NotifyCollectionChangedEventArgs* New_ctor(::System::ComponentModel::NotifyCollectionChangedAction action, ::System::Collections::IList* changedItems,
                                                                                     int32_t startingIndex);

  /// @brief Method .ctor addr 0x24db6a8 size 0x40 virtual false final false
  inline void _ctor(::System::ComponentModel::NotifyCollectionChangedAction action, ::System::Collections::IList* changedItems, int32_t startingIndex);

  static inline ::System::ComponentModel::NotifyCollectionChangedEventArgs* New_ctor(::System::ComponentModel::NotifyCollectionChangedAction action, ::System::Object* changedItem, int32_t index);

  /// @brief Method .ctor addr 0x24db6e8 size 0x24 virtual false final false
  inline void _ctor(::System::ComponentModel::NotifyCollectionChangedAction action, ::System::Object* changedItem, int32_t index);

  static inline ::System::ComponentModel::NotifyCollectionChangedEventArgs* New_ctor(::System::ComponentModel::NotifyCollectionChangedAction action, ::System::Object* newItem,
                                                                                     ::System::Object* oldItem);

  /// @brief Method .ctor addr 0x24db70c size 0x10c virtual false final false
  inline void _ctor(::System::ComponentModel::NotifyCollectionChangedAction action, ::System::Object* newItem, ::System::Object* oldItem);

  static inline ::System::ComponentModel::NotifyCollectionChangedEventArgs* New_ctor(::System::ComponentModel::NotifyCollectionChangedAction action, ::System::Collections::IList* newItems,
                                                                                     ::System::Collections::IList* oldItems, int32_t startingIndex);

  /// @brief Method .ctor addr 0x24db818 size 0x48 virtual false final false
  inline void _ctor(::System::ComponentModel::NotifyCollectionChangedAction action, ::System::Collections::IList* newItems, ::System::Collections::IList* oldItems, int32_t startingIndex);

  static inline ::System::ComponentModel::NotifyCollectionChangedEventArgs* New_ctor(::System::ComponentModel::NotifyCollectionChangedAction action, ::System::Collections::IList* changedItems,
                                                                                     int32_t index, int32_t oldIndex);

  /// @brief Method .ctor addr 0x24db860 size 0x48 virtual false final false
  inline void _ctor(::System::ComponentModel::NotifyCollectionChangedAction action, ::System::Collections::IList* changedItems, int32_t index, int32_t oldIndex);

  static inline ::System::ComponentModel::NotifyCollectionChangedEventArgs* New_ctor(::System::ComponentModel::NotifyCollectionChangedAction action, ::System::Object* changedItem, int32_t index,
                                                                                     int32_t oldIndex);

  /// @brief Method .ctor addr 0x24db8a8 size 0x2c virtual false final false
  inline void _ctor(::System::ComponentModel::NotifyCollectionChangedAction action, ::System::Object* changedItem, int32_t index, int32_t oldIndex);

  static inline ::System::ComponentModel::NotifyCollectionChangedEventArgs* New_ctor(::System::ComponentModel::NotifyCollectionChangedAction action, ::System::Object* newItem,
                                                                                     ::System::Object* oldItem, int32_t index);

  /// @brief Method .ctor addr 0x24db8d4 size 0x24 virtual false final false
  inline void _ctor(::System::ComponentModel::NotifyCollectionChangedAction action, ::System::Object* newItem, ::System::Object* oldItem, int32_t index);

  // Ctor Parameters [CppParam { name: "", ty: "NotifyCollectionChangedEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NotifyCollectionChangedEventArgs(NotifyCollectionChangedEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NotifyCollectionChangedEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NotifyCollectionChangedEventArgs(NotifyCollectionChangedEventArgs const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NotifyCollectionChangedEventArgs();

public:
  /// @brief Field <Action>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::System::ComponentModel::NotifyCollectionChangedAction ____Action_k__BackingField;

  /// @brief Field <NewItems>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::IList* ____NewItems_k__BackingField;

  /// @brief Field <NewStartingIndex>k__BackingField, offset: 0x20, size: 0x4, def value: None
  int32_t ____NewStartingIndex_k__BackingField;

  /// @brief Field <OldItems>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::IList* ____OldItems_k__BackingField;

  /// @brief Field <OldStartingIndex>k__BackingField, offset: 0x30, size: 0x4, def value: None
  int32_t ____OldStartingIndex_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::NotifyCollectionChangedEventArgs, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::NotifyCollectionChangedEventArgs, ____Action_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::NotifyCollectionChangedEventArgs, ____NewItems_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::NotifyCollectionChangedEventArgs, ____NewStartingIndex_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::NotifyCollectionChangedEventArgs, ____OldItems_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::NotifyCollectionChangedEventArgs, ____OldStartingIndex_k__BackingField) == 0x30, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::NotifyCollectionChangedEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::NotifyCollectionChangedEventArgs*, "System.ComponentModel", "NotifyCollectionChangedEventArgs");
