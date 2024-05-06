#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__CollectionViewController_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListViewController)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace System {
class Array;
}
namespace UnityEngine::UIElements {
class ListView;
}
namespace UnityEngine::UIElements {
class ReusableCollectionItem;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ListViewController;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ListViewController);
// Type: UnityEngine.UIElements::ListViewController
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::ListViewController*
class CORDL_TYPE ListViewController : public ::UnityEngine::UIElements::CollectionViewController {
public:
  // Declarations
  /// @brief Field itemsAdded, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_itemsAdded, put = __cordl_internal_set_itemsAdded))::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* itemsAdded;

  /// @brief Field itemsRemoved, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_itemsRemoved, put = __cordl_internal_set_itemsRemoved))::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* itemsRemoved;

  /// @brief Field itemsSourceSizeChanged, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_itemsSourceSizeChanged, put = __cordl_internal_set_itemsSourceSizeChanged))::System::Action* itemsSourceSizeChanged;

  __declspec(property(get = get_listView))::UnityEngine::UIElements::ListView* listView;

  /// @brief Method AddItems, addr 0x35dab28, size 0x520, virtual true, abstract: false, final false
  inline void AddItems(int32_t itemCount);

  /// @brief Method AddToArray, addr 0x35db160, size 0xd8, virtual false, abstract: false, final false
  static inline ::System::Array* AddToArray(::System::Array* source, int32_t itemCount);

  /// @brief Method EnsureItemSourceCanBeResized, addr 0x35db048, size 0x118, virtual false, abstract: false, final false
  inline void EnsureItemSourceCanBeResized();

  /// @brief Method InvokeBindItem, addr 0x35da7fc, size 0xec, virtual true, abstract: false, final false
  inline void InvokeBindItem(::UnityEngine::UIElements::ReusableCollectionItem* reusableItem, int32_t index);

  /// @brief Method InvokeMakeItem, addr 0x35da380, size 0x46c, virtual true, abstract: false, final false
  inline void InvokeMakeItem(::UnityEngine::UIElements::ReusableCollectionItem* reusableItem);

  /// @brief Method Move, addr 0x35db29c, size 0x9c, virtual true, abstract: false, final false
  inline void Move(int32_t index, int32_t newIndex);

  /// @brief Method NeedsDragHandle, addr 0x35daaec, size 0x3c, virtual true, abstract: false, final false
  inline bool NeedsDragHandle(int32_t index);

  static inline ::UnityEngine::UIElements::ListViewController* New_ctor();

  /// @brief Method RaiseItemsAdded, addr 0x35db264, size 0x1c, virtual false, abstract: false, final false
  inline void RaiseItemsAdded(::System::Collections::Generic::IEnumerable_1<int32_t>* indices);

  /// @brief Method RaiseItemsRemoved, addr 0x35dbb10, size 0x1c, virtual false, abstract: false, final false
  inline void RaiseItemsRemoved(::System::Collections::Generic::IEnumerable_1<int32_t>* indices);

  /// @brief Method RaiseOnSizeChanged, addr 0x35db280, size 0x1c, virtual false, abstract: false, final false
  inline void RaiseOnSizeChanged();

  /// @brief Method RemoveFromArray, addr 0x35db95c, size 0x1b4, virtual false, abstract: false, final false
  static inline ::System::Array* RemoveFromArray(::System::Array* source, ::System::Collections::Generic::List_1<int32_t>* indicesToRemove);

  /// @brief Method RemoveItem, addr 0x35db54c, size 0x1b0, virtual true, abstract: false, final false
  inline void RemoveItem(int32_t index);

  /// @brief Method RemoveItems, addr 0x35db6fc, size 0x260, virtual true, abstract: false, final false
  inline void RemoveItems(::System::Collections::Generic::List_1<int32_t>* indices);

  /// @brief Method Swap, addr 0x35db338, size 0x1f8, virtual false, abstract: false, final false
  inline void Swap(int32_t lhs, int32_t rhs);

  constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*& __cordl_internal_get_itemsAdded();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*> const& __cordl_internal_get_itemsAdded() const;

  constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*& __cordl_internal_get_itemsRemoved();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*> const& __cordl_internal_get_itemsRemoved() const;

  constexpr ::System::Action*& __cordl_internal_get_itemsSourceSizeChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_itemsSourceSizeChanged() const;

  constexpr void __cordl_internal_set_itemsAdded(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* value);

  constexpr void __cordl_internal_set_itemsRemoved(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* value);

  constexpr void __cordl_internal_set_itemsSourceSizeChanged(::System::Action* value);

  /// @brief Method .ctor, addr 0x35dbb2c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_itemsAdded, addr 0x35da044, size 0xb0, virtual false, abstract: false, final false
  inline void add_itemsAdded(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* value);

  /// @brief Method add_itemsRemoved, addr 0x35da1a4, size 0xb0, virtual false, abstract: false, final false
  inline void add_itemsRemoved(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* value);

  /// @brief Method add_itemsSourceSizeChanged, addr 0x35d9f0c, size 0x9c, virtual false, abstract: false, final false
  inline void add_itemsSourceSizeChanged(::System::Action* value);

  /// @brief Method get_listView, addr 0x35da304, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ListView* get_listView();

  /// @brief Method remove_itemsAdded, addr 0x35da0f4, size 0xb0, virtual false, abstract: false, final false
  inline void remove_itemsAdded(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* value);

  /// @brief Method remove_itemsRemoved, addr 0x35da254, size 0xb0, virtual false, abstract: false, final false
  inline void remove_itemsRemoved(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* value);

  /// @brief Method remove_itemsSourceSizeChanged, addr 0x35d9fa8, size 0x9c, virtual false, abstract: false, final false
  inline void remove_itemsSourceSizeChanged(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListViewController(ListViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListViewController(ListViewController const&) = delete;

  /// @brief Field itemsSourceSizeChanged, offset: 0x30, size: 0x8, def value: None
  ::System::Action* ___itemsSourceSizeChanged;

  /// @brief Field itemsAdded, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* ___itemsAdded;

  /// @brief Field itemsRemoved, offset: 0x40, size: 0x8, def value: None
  ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* ___itemsRemoved;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ListViewController, 0x48>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListViewController, ___itemsSourceSizeChanged) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListViewController, ___itemsAdded) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListViewController, ___itemsRemoved) == 0x40, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ListViewController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ListViewController*, "UnityEngine.UIElements", "ListViewController");
