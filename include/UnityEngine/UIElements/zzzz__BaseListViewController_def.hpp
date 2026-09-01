#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\BaseListViewController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__CollectionViewController_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BaseListViewController)
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
namespace System {
class Type;
}
namespace UnityEngine::UIElements {
class BaseListView;
}
namespace UnityEngine::UIElements {
class ReusableCollectionItem;
}
namespace UnityEngine::UIElements {
class ReusableListViewItem;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class BaseListViewController;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::BaseListViewController*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::BaseListViewController*, "UnityEngine.UIElements", "BaseListViewController");
// Dependencies UnityEngine.UIElements.CollectionViewController
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BaseListViewController
class CORDL_TYPE BaseListViewController : public ::UnityEngine::UIElements::CollectionViewController {
public:
  // Declarations
  __declspec(property(get = get_baseListView)) ::UnityEngine::UIElements::BaseListView* baseListView;

  /// @brief Field itemsAdded, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_itemsAdded, put = __cordl_internal_set_itemsAdded)) ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* itemsAdded;

  /// @brief Field itemsRemoved, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_itemsRemoved, put = __cordl_internal_set_itemsRemoved)) ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* itemsRemoved;

  /// @brief Field itemsSourceSizeChanged, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_itemsSourceSizeChanged, put = __cordl_internal_set_itemsSourceSizeChanged)) ::System::Action* itemsSourceSizeChanged;

  /// @brief Method AddItems, addr 0x6c4c520, size 0x6cc, virtual true, abstract: false, final false
  inline void AddItems(int32_t itemCount);

  /// @brief Method AddToArray, addr 0x6c4cd60, size 0xf0, virtual false, abstract: false, final false
  static inline ::System::Array* AddToArray(::System::Array* source, int32_t itemCount);

  /// @brief Method ClearItems, addr 0x6c4da74, size 0x1b4, virtual true, abstract: false, final false
  inline void ClearItems();

  /// @brief Method EnsureItemSourceCanBeResized, addr 0x6c4cbec, size 0x174, virtual false, abstract: false, final false
  inline void EnsureItemSourceCanBeResized();

  /// @brief Method InvokeBindItem, addr 0x6c4c1f4, size 0xf0, virtual true, abstract: false, final false
  inline void InvokeBindItem(::UnityEngine::UIElements::ReusableCollectionItem* reusableItem, int32_t index);

  /// @brief Method InvokeMakeItem, addr 0x6c4bb68, size 0xf4, virtual true, abstract: false, final false
  inline void InvokeMakeItem(::UnityEngine::UIElements::ReusableCollectionItem* reusableItem);

  /// @brief Method Move, addr 0x6c4ce88, size 0x178, virtual true, abstract: false, final false
  inline void Move(int32_t index, int32_t newIndex);

  /// @brief Method NeedsDragHandle, addr 0x6c4c518, size 0x8, virtual true, abstract: false, final false
  inline bool NeedsDragHandle(int32_t index);

  static inline ::UnityEngine::UIElements::BaseListViewController* New_ctor();

  /// @brief Method PostInitRegistration, addr 0x6c4bd20, size 0x3d0, virtual false, abstract: false, final false
  inline void PostInitRegistration(::UnityEngine::UIElements::ReusableListViewItem* listItem);

  /// @brief Method RaiseItemsAdded, addr 0x6c4ce50, size 0x1c, virtual false, abstract: false, final false
  inline void RaiseItemsAdded(::System::Collections::Generic::IEnumerable_1<int32_t>* indices);

  /// @brief Method RaiseItemsRemoved, addr 0x6c4d6a4, size 0x1c, virtual false, abstract: false, final false
  inline void RaiseItemsRemoved(::System::Collections::Generic::IEnumerable_1<int32_t>* indices);

  /// @brief Method RaiseOnSizeChanged, addr 0x6c4ce6c, size 0x1c, virtual false, abstract: false, final false
  inline void RaiseOnSizeChanged();

  /// @brief Method RemoveFromArray, addr 0x6c4d6c0, size 0x1c4, virtual false, abstract: false, final false
  static inline ::System::Array* RemoveFromArray(::System::Array* source, ::System::Collections::Generic::List_1<int32_t>* indicesToRemove);

  /// @brief Method RemoveItem, addr 0x6c4d260, size 0x1ac, virtual true, abstract: false, final false
  inline void RemoveItem(int32_t index);

  /// @brief Method RemoveItems, addr 0x6c4d40c, size 0x298, virtual true, abstract: false, final false
  inline void RemoveItems(::System::Collections::Generic::List_1<int32_t>* indices);

  /// @brief Method RemoveItems, addr 0x6c4d884, size 0x1f0, virtual true, abstract: false, final false
  inline void RemoveItems(int32_t itemCount);

  /// @brief Method SetBindingContext, addr 0x6c4c0f0, size 0xf0, virtual true, abstract: false, final false
  inline void SetBindingContext(::UnityEngine::UIElements::ReusableCollectionItem* reusableItem, int32_t index);

  /// @brief Method Swap, addr 0x6c4d000, size 0x244, virtual false, abstract: false, final false
  inline void Swap(int32_t lhs, int32_t rhs);

  /// @brief Method <AddItems>g__IsGenericList|19_0, addr 0x6c4dc30, size 0xb4, virtual false, abstract: false, final false
  static inline bool _AddItems_g__IsGenericList_19_0(::System::Type* t);

  constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* const& __cordl_internal_get_itemsAdded() const;

  constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*& __cordl_internal_get_itemsAdded();

  constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* const& __cordl_internal_get_itemsRemoved() const;

  constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*& __cordl_internal_get_itemsRemoved();

  constexpr ::System::Action* const& __cordl_internal_get_itemsSourceSizeChanged() const;

  constexpr ::System::Action*& __cordl_internal_get_itemsSourceSizeChanged();

  constexpr void __cordl_internal_set_itemsAdded(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* value);

  constexpr void __cordl_internal_set_itemsRemoved(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* value);

  constexpr void __cordl_internal_set_itemsSourceSizeChanged(::System::Action* value);

  /// @brief Method .ctor, addr 0x6c4dc28, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_itemsAdded, addr 0x6c4b7e8, size 0xc0, virtual false, abstract: false, final false
  inline void add_itemsAdded(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* value);

  /// @brief Method add_itemsRemoved, addr 0x6c4b968, size 0xc0, virtual false, abstract: false, final false
  inline void add_itemsRemoved(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* value);

  /// @brief Method add_itemsSourceSizeChanged, addr 0x6c4b690, size 0xac, virtual false, abstract: false, final false
  inline void add_itemsSourceSizeChanged(::System::Action* value);

  /// @brief Method get_baseListView, addr 0x6c4bae8, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BaseListView* get_baseListView();

  /// @brief Method remove_itemsAdded, addr 0x6c4b8a8, size 0xc0, virtual false, abstract: false, final false
  inline void remove_itemsAdded(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* value);

  /// @brief Method remove_itemsRemoved, addr 0x6c4ba28, size 0xc0, virtual false, abstract: false, final false
  inline void remove_itemsRemoved(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* value);

  /// @brief Method remove_itemsSourceSizeChanged, addr 0x6c4b73c, size 0xac, virtual false, abstract: false, final false
  inline void remove_itemsSourceSizeChanged(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseListViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseListViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseListViewController(BaseListViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseListViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseListViewController(BaseListViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4072 };

  /// @brief Field itemsSourceSizeChanged, offset: 0x30, size: 0x8, def value: None
  ::System::Action* ___itemsSourceSizeChanged;

  /// @brief Field itemsAdded, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* ___itemsAdded;

  /// @brief Field itemsRemoved, offset: 0x40, size: 0x8, def value: None
  ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* ___itemsRemoved;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BaseListViewController, ___itemsSourceSizeChanged) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListViewController, ___itemsAdded) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListViewController, ___itemsRemoved) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::BaseListViewController) == 0x48, "Size mismatch!");

} // namespace UnityEngine::UIElements
