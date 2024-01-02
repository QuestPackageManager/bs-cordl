#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__CollectionViewController_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListViewController)
namespace System {
template <typename T> class Action_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
class Array;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements {
class ReusableCollectionItem;
}
namespace UnityEngine::UIElements {
class ListView;
}
namespace System {
class Action;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7365))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7364))
// CS Name: ::UnityEngine.UIElements::ListViewController*
class CORDL_TYPE ListViewController : public ::UnityEngine::UIElements::CollectionViewController {
public:
  // Declarations
  /// @brief Field itemsSourceSizeChanged, offset 0x30, size 0x8
  __declspec(property(get = __get_itemsSourceSizeChanged, put = __set_itemsSourceSizeChanged))::System::Action* itemsSourceSizeChanged;

  /// @brief Field itemsAdded, offset 0x38, size 0x8
  __declspec(property(get = __get_itemsAdded, put = __set_itemsAdded))::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* itemsAdded;

  /// @brief Field itemsRemoved, offset 0x40, size 0x8
  __declspec(property(get = __get_itemsRemoved, put = __set_itemsRemoved))::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* itemsRemoved;

  __declspec(property(get = get_listView))::UnityEngine::UIElements::ListView* listView;

  constexpr ::System::Action*& __get_itemsSourceSizeChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_itemsSourceSizeChanged() const;

  constexpr void __set_itemsSourceSizeChanged(::System::Action* value);

  constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*& __get_itemsAdded();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*> const& __get_itemsAdded() const;

  constexpr void __set_itemsAdded(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* value);

  constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*& __get_itemsRemoved();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*> const& __get_itemsRemoved() const;

  constexpr void __set_itemsRemoved(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* value);

  /// @brief Method add_itemsSourceSizeChanged, addr 0x2e85070, size 0x9c, virtual false, abstract: false, final false
  inline void add_itemsSourceSizeChanged(::System::Action* value);

  /// @brief Method remove_itemsSourceSizeChanged, addr 0x2e8510c, size 0x9c, virtual false, abstract: false, final false
  inline void remove_itemsSourceSizeChanged(::System::Action* value);

  /// @brief Method add_itemsAdded, addr 0x2e851a8, size 0xb0, virtual false, abstract: false, final false
  inline void add_itemsAdded(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* value);

  /// @brief Method remove_itemsAdded, addr 0x2e85258, size 0xb0, virtual false, abstract: false, final false
  inline void remove_itemsAdded(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* value);

  /// @brief Method add_itemsRemoved, addr 0x2e85308, size 0xb0, virtual false, abstract: false, final false
  inline void add_itemsRemoved(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* value);

  /// @brief Method remove_itemsRemoved, addr 0x2e853b8, size 0xb0, virtual false, abstract: false, final false
  inline void remove_itemsRemoved(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* value);

  /// @brief Method get_listView, addr 0x2e85468, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ListView* get_listView();

  /// @brief Method InvokeMakeItem, addr 0x2e854e4, size 0x46c, virtual true, abstract: false, final false
  inline void InvokeMakeItem(::UnityEngine::UIElements::ReusableCollectionItem* reusableItem);

  /// @brief Method InvokeBindItem, addr 0x2e85960, size 0xec, virtual true, abstract: false, final false
  inline void InvokeBindItem(::UnityEngine::UIElements::ReusableCollectionItem* reusableItem, int32_t index);

  /// @brief Method NeedsDragHandle, addr 0x2e85c50, size 0x3c, virtual true, abstract: false, final false
  inline bool NeedsDragHandle(int32_t index);

  /// @brief Method AddItems, addr 0x2e85c8c, size 0x520, virtual true, abstract: false, final false
  inline void AddItems(int32_t itemCount);

  /// @brief Method Move, addr 0x2e86400, size 0x9c, virtual true, abstract: false, final false
  inline void Move(int32_t index, int32_t newIndex);

  /// @brief Method RemoveItem, addr 0x2e866b0, size 0x1b0, virtual true, abstract: false, final false
  inline void RemoveItem(int32_t index);

  /// @brief Method RemoveItems, addr 0x2e86860, size 0x260, virtual true, abstract: false, final false
  inline void RemoveItems(::System::Collections::Generic::List_1<int32_t>* indices);

  /// @brief Method RaiseOnSizeChanged, addr 0x2e863e4, size 0x1c, virtual false, abstract: false, final false
  inline void RaiseOnSizeChanged();

  /// @brief Method RaiseItemsAdded, addr 0x2e863c8, size 0x1c, virtual false, abstract: false, final false
  inline void RaiseItemsAdded(::System::Collections::Generic::IEnumerable_1<int32_t>* indices);

  /// @brief Method RaiseItemsRemoved, addr 0x2e86c74, size 0x1c, virtual false, abstract: false, final false
  inline void RaiseItemsRemoved(::System::Collections::Generic::IEnumerable_1<int32_t>* indices);

  /// @brief Method AddToArray, addr 0x2e862c4, size 0xd8, virtual false, abstract: false, final false
  static inline ::System::Array* AddToArray(::System::Array* source, int32_t itemCount);

  /// @brief Method RemoveFromArray, addr 0x2e86ac0, size 0x1b4, virtual false, abstract: false, final false
  static inline ::System::Array* RemoveFromArray(::System::Array* source, ::System::Collections::Generic::List_1<int32_t>* indicesToRemove);

  /// @brief Method Swap, addr 0x2e8649c, size 0x1f8, virtual false, abstract: false, final false
  inline void Swap(int32_t lhs, int32_t rhs);

  /// @brief Method EnsureItemSourceCanBeResized, addr 0x2e861ac, size 0x118, virtual false, abstract: false, final false
  inline void EnsureItemSourceCanBeResized();

  static inline ::UnityEngine::UIElements::ListViewController* New_ctor();

  /// @brief Method .ctor, addr 0x2e86c90, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ListViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListViewController(ListViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListViewController(ListViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListViewController();

public:
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
