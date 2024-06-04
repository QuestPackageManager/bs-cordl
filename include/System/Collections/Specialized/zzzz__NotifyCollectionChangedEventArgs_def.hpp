#pragma once
// IWYU pragma private; include "System/Collections/Specialized/NotifyCollectionChangedEventArgs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Specialized/zzzz__NotifyCollectionChangedAction_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NotifyCollectionChangedEventArgs)
namespace System::Collections::Specialized {
struct NotifyCollectionChangedAction;
}
namespace System::Collections {
class IList;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections::Specialized {
class NotifyCollectionChangedEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::Specialized::NotifyCollectionChangedEventArgs);
// Type: System.Collections.Specialized::NotifyCollectionChangedEventArgs
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Specialized {
// Is value type: false
// CS Name: ::System.Collections.Specialized::NotifyCollectionChangedEventArgs*
class CORDL_TYPE NotifyCollectionChangedEventArgs : public ::System::EventArgs {
public:
  // Declarations
  /// @brief Field _action, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__action, put = __cordl_internal_set__action))::System::Collections::Specialized::NotifyCollectionChangedAction _action;

  /// @brief Field _newItems, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__newItems, put = __cordl_internal_set__newItems))::System::Collections::IList* _newItems;

  /// @brief Field _newStartingIndex, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__newStartingIndex, put = __cordl_internal_set__newStartingIndex)) int32_t _newStartingIndex;

  /// @brief Field _oldItems, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__oldItems, put = __cordl_internal_set__oldItems))::System::Collections::IList* _oldItems;

  /// @brief Field _oldStartingIndex, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__oldStartingIndex, put = __cordl_internal_set__oldStartingIndex)) int32_t _oldStartingIndex;

  /// @brief Method InitializeAdd, addr 0x2f92568, size 0x8c, virtual false, abstract: false, final false
  inline void InitializeAdd(::System::Collections::Specialized::NotifyCollectionChangedAction action, ::System::Collections::IList* newItems, int32_t newStartingIndex);

  /// @brief Method InitializeAddOrRemove, addr 0x2f927f0, size 0x18, virtual false, abstract: false, final false
  inline void InitializeAddOrRemove(::System::Collections::Specialized::NotifyCollectionChangedAction action, ::System::Collections::IList* changedItems, int32_t startingIndex);

  /// @brief Method InitializeMoveOrReplace, addr 0x2f929e4, size 0x44, virtual false, abstract: false, final false
  inline void InitializeMoveOrReplace(::System::Collections::Specialized::NotifyCollectionChangedAction action, ::System::Collections::IList* newItems, ::System::Collections::IList* oldItems,
                                      int32_t startingIndex, int32_t oldStartingIndex);

  /// @brief Method InitializeRemove, addr 0x2f92be4, size 0x8c, virtual false, abstract: false, final false
  inline void InitializeRemove(::System::Collections::Specialized::NotifyCollectionChangedAction action, ::System::Collections::IList* oldItems, int32_t oldStartingIndex);

  static inline ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* New_ctor(::System::Collections::Specialized::NotifyCollectionChangedAction action);

  static inline ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* New_ctor(::System::Collections::Specialized::NotifyCollectionChangedAction action, ::System::Object* changedItem,
                                                                                               int32_t index);

  static inline ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* New_ctor(::System::Collections::Specialized::NotifyCollectionChangedAction action, ::System::Object* newItem,
                                                                                               ::System::Object* oldItem, int32_t index);

  static inline ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* New_ctor(::System::Collections::Specialized::NotifyCollectionChangedAction action,
                                                                                               ::System::Collections::IList* newItems, ::System::Collections::IList* oldItems, int32_t startingIndex);

  constexpr ::System::Collections::Specialized::NotifyCollectionChangedAction const& __cordl_internal_get__action() const;

  constexpr ::System::Collections::Specialized::NotifyCollectionChangedAction& __cordl_internal_get__action();

  constexpr ::System::Collections::IList*& __cordl_internal_get__newItems();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __cordl_internal_get__newItems() const;

  constexpr int32_t const& __cordl_internal_get__newStartingIndex() const;

  constexpr int32_t& __cordl_internal_get__newStartingIndex();

  constexpr ::System::Collections::IList*& __cordl_internal_get__oldItems();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __cordl_internal_get__oldItems() const;

  constexpr int32_t const& __cordl_internal_get__oldStartingIndex() const;

  constexpr int32_t& __cordl_internal_get__oldStartingIndex();

  constexpr void __cordl_internal_set__action(::System::Collections::Specialized::NotifyCollectionChangedAction value);

  constexpr void __cordl_internal_set__newItems(::System::Collections::IList* value);

  constexpr void __cordl_internal_set__newStartingIndex(int32_t value);

  constexpr void __cordl_internal_set__oldItems(::System::Collections::IList* value);

  constexpr void __cordl_internal_set__oldStartingIndex(int32_t value);

  /// @brief Method .ctor, addr 0x2f92430, size 0x138, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Specialized::NotifyCollectionChangedAction action);

  /// @brief Method .ctor, addr 0x2f925f4, size 0x1fc, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Specialized::NotifyCollectionChangedAction action, ::System::Object* changedItem, int32_t index);

  /// @brief Method .ctor, addr 0x2f92808, size 0x1dc, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Specialized::NotifyCollectionChangedAction action, ::System::Object* newItem, ::System::Object* oldItem, int32_t index);

  /// @brief Method .ctor, addr 0x2f92a28, size 0x1bc, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Specialized::NotifyCollectionChangedAction action, ::System::Collections::IList* newItems, ::System::Collections::IList* oldItems, int32_t startingIndex);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NotifyCollectionChangedEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NotifyCollectionChangedEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NotifyCollectionChangedEventArgs(NotifyCollectionChangedEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NotifyCollectionChangedEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NotifyCollectionChangedEventArgs(NotifyCollectionChangedEventArgs const&) = delete;

  /// @brief Field _action, offset: 0x10, size: 0x4, def value: None
  ::System::Collections::Specialized::NotifyCollectionChangedAction ____action;

  /// @brief Field _newItems, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::IList* ____newItems;

  /// @brief Field _oldItems, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::IList* ____oldItems;

  /// @brief Field _newStartingIndex, offset: 0x28, size: 0x4, def value: None
  int32_t ____newStartingIndex;

  /// @brief Field _oldStartingIndex, offset: 0x2c, size: 0x4, def value: None
  int32_t ____oldStartingIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::Specialized::NotifyCollectionChangedEventArgs, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Collections::Specialized::NotifyCollectionChangedEventArgs, ____action) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::NotifyCollectionChangedEventArgs, ____newItems) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::NotifyCollectionChangedEventArgs, ____oldItems) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::NotifyCollectionChangedEventArgs, ____newStartingIndex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::NotifyCollectionChangedEventArgs, ____oldStartingIndex) == 0x2c, "Offset mismatch!");

} // namespace System::Collections::Specialized
NEED_NO_BOX(::System::Collections::Specialized::NotifyCollectionChangedEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::NotifyCollectionChangedEventArgs*, "System.Collections.Specialized", "NotifyCollectionChangedEventArgs");
