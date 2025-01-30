#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BaseTreeViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/zzzz__CollectionViewController_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BaseTreeViewController)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IList;
}
namespace UnityEngine::UIElements {
class BaseTreeViewController___c__DisplayClass20_0;
}
namespace UnityEngine::UIElements {
class BaseTreeView;
}
namespace UnityEngine::UIElements {
template <typename T> class ChangeEvent_1;
}
namespace UnityEngine::UIElements {
class PointerUpEvent;
}
namespace UnityEngine::UIElements {
class ReusableCollectionItem;
}
namespace UnityEngine::UIElements {
class ReusableTreeViewItem;
}
namespace UnityEngine::UIElements {
struct TreeItem;
}
namespace UnityEngine::UIElements {
struct TreeViewItemWrapper;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class BaseTreeViewController;
}
namespace UnityEngine::UIElements {
class BaseTreeViewController___c__DisplayClass20_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::BaseTreeViewController);
MARK_REF_PTR_T(::UnityEngine::UIElements::BaseTreeViewController___c__DisplayClass20_0);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BaseTreeViewController/<>c__DisplayClass20_0
class CORDL_TYPE BaseTreeViewController___c__DisplayClass20_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityEngine::UIElements::BaseTreeViewController* __4__this;

  /// @brief Field treeItem, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_treeItem, put = __cordl_internal_set_treeItem)) ::UnityEngine::UIElements::ReusableTreeViewItem* treeItem;

  static inline ::UnityEngine::UIElements::BaseTreeViewController___c__DisplayClass20_0* New_ctor();

  /// @brief Method <PostInitRegistration>b__0, addr 0x497cb34, size 0x2c, virtual false, abstract: false, final false
  inline void _PostInitRegistration_b__0();

  constexpr ::UnityEngine::UIElements::BaseTreeViewController* const& __cordl_internal_get___4__this() const;

  constexpr ::UnityEngine::UIElements::BaseTreeViewController*& __cordl_internal_get___4__this();

  constexpr ::UnityEngine::UIElements::ReusableTreeViewItem* const& __cordl_internal_get_treeItem() const;

  constexpr ::UnityEngine::UIElements::ReusableTreeViewItem*& __cordl_internal_get_treeItem();

  constexpr void __cordl_internal_set___4__this(::UnityEngine::UIElements::BaseTreeViewController* value);

  constexpr void __cordl_internal_set_treeItem(::UnityEngine::UIElements::ReusableTreeViewItem* value);

  /// @brief Method .ctor, addr 0x4979e64, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseTreeViewController___c__DisplayClass20_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseTreeViewController___c__DisplayClass20_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseTreeViewController___c__DisplayClass20_0(BaseTreeViewController___c__DisplayClass20_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseTreeViewController___c__DisplayClass20_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseTreeViewController___c__DisplayClass20_0(BaseTreeViewController___c__DisplayClass20_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5467 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::BaseTreeViewController* _____4__this;

  /// @brief Field treeItem, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::ReusableTreeViewItem* ___treeItem;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController___c__DisplayClass20_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController___c__DisplayClass20_0, ___treeItem) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BaseTreeViewController___c__DisplayClass20_0, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Profiling.ProfilerMarker, UnityEngine.UIElements.CollectionViewController
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BaseTreeViewController
class CORDL_TYPE BaseTreeViewController : public ::UnityEngine::UIElements::CollectionViewController {
public:
  // Declarations
  using __c__DisplayClass20_0 = ::UnityEngine::UIElements::BaseTreeViewController___c__DisplayClass20_0;

  /// @brief Field K_ExpandItemByIndex, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_K_ExpandItemByIndex, put = setStaticF_K_ExpandItemByIndex)) ::Unity::Profiling::ProfilerMarker K_ExpandItemByIndex;

  __declspec(property(get = get_baseTreeView)) ::UnityEngine::UIElements::BaseTreeView* baseTreeView;

  __declspec(property(get = get_itemsSource, put = set_itemsSource)) ::System::Collections::IList* itemsSource;

  /// @brief Field k_CreateWrappers, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_CreateWrappers, put = setStaticF_k_CreateWrappers)) ::Unity::Profiling::ProfilerMarker k_CreateWrappers;

  /// @brief Field m_ItemWrappers, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ItemWrappers,
                      put = __cordl_internal_set_m_ItemWrappers)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TreeViewItemWrapper>* m_ItemWrappers;

  /// @brief Field m_RootIndices, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RootIndices, put = __cordl_internal_set_m_RootIndices)) ::System::Collections::Generic::List_1<int32_t>* m_RootIndices;

  /// @brief Field m_TreeItemIdsWithItemWrappers, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TreeItemIdsWithItemWrappers,
                      put = __cordl_internal_set_m_TreeItemIdsWithItemWrappers)) ::System::Collections::Generic::HashSet_1<int32_t>* m_TreeItemIdsWithItemWrappers;

  /// @brief Field m_TreeItems, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TreeItems,
                      put = __cordl_internal_set_m_TreeItems)) ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::UIElements::TreeItem>* m_TreeItems;

  /// @brief Field m_WrapperInsertionList, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_WrapperInsertionList,
                      put = __cordl_internal_set_m_WrapperInsertionList)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TreeViewItemWrapper>* m_WrapperInsertionList;

  /// @brief Method CanChangeExpandedState, addr 0x497bee0, size 0x8, virtual true, abstract: false, final false
  inline bool CanChangeExpandedState(int32_t id);

  /// @brief Method CollapseItem, addr 0x497c764, size 0x174, virtual false, abstract: false, final false
  inline void CollapseItem(int32_t id, bool collapseAllChildren);

  /// @brief Method CollapseItemByIndex, addr 0x497a7d8, size 0x530, virtual false, abstract: false, final false
  inline void CollapseItemByIndex(int32_t index, bool collapseAllChildren);

  /// @brief Method CreateWrappers, addr 0x497bf4c, size 0x630, virtual false, abstract: false, final false
  inline void CreateWrappers(::System::Collections::Generic::IEnumerable_1<int32_t>* treeViewItemIds, int32_t depth,
                             ::ByRef<::System::Collections::Generic::List_1<::UnityEngine::UIElements::TreeViewItemWrapper>*> wrappers);

  /// @brief Method Exists, addr 0x497baa0, size 0x58, virtual false, abstract: false, final false
  inline bool Exists(int32_t id);

  /// @brief Method ExpandItem, addr 0x497c57c, size 0x1e8, virtual false, abstract: false, final false
  inline void ExpandItem(int32_t id, bool expandAllChildren, bool refresh);

  /// @brief Method ExpandItemByIndex, addr 0x497ad08, size 0xb14, virtual false, abstract: false, final false
  inline void ExpandItemByIndex(int32_t index, bool expandAllChildren, bool refresh);

  /// @brief Method GetAllItemIds, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<int32_t>* GetAllItemIds(::System::Collections::Generic::IEnumerable_1<int32_t>* rootIds);

  /// @brief Method GetChildIndexForId, addr 0x497baf8, size 0x380, virtual false, abstract: false, final false
  inline int32_t GetChildIndexForId(int32_t id);

  /// @brief Method GetChildrenIds, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<int32_t>* GetChildrenIds(int32_t id);

  /// @brief Method GetChildrenIdsByIndex, addr 0x497a5ec, size 0xa4, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<int32_t>* GetChildrenIdsByIndex(int32_t index);

  /// @brief Method GetIdForIndex, addr 0x497b914, size 0xa4, virtual true, abstract: false, final false
  inline int32_t GetIdForIndex(int32_t index);

  /// @brief Method GetIndentationDepth, addr 0x497be78, size 0x68, virtual false, abstract: false, final false
  inline int32_t GetIndentationDepth(int32_t id);

  /// @brief Method GetIndentationDepthByIndex, addr 0x49799e8, size 0x24, virtual false, abstract: false, final false
  inline int32_t GetIndentationDepthByIndex(int32_t index);

  /// @brief Method GetIndexForId, addr 0x497b81c, size 0xf8, virtual true, abstract: false, final false
  inline int32_t GetIndexForId(int32_t id);

  /// @brief Method GetParentId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetParentId(int32_t id);

  /// @brief Method GetRootItemIds, addr 0x49795c8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<int32_t>* GetRootItemIds();

  /// @brief Method HasChildren, addr 0x497ba18, size 0x88, virtual true, abstract: false, final false
  inline bool HasChildren(int32_t id);

  /// @brief Method HasChildrenByIndex, addr 0x4979af4, size 0xa8, virtual false, abstract: false, final false
  inline bool HasChildrenByIndex(int32_t index);

  /// @brief Method InvokeBindItem, addr 0x49798d8, size 0x110, virtual true, abstract: false, final false
  inline void InvokeBindItem(::UnityEngine::UIElements::ReusableCollectionItem* reusableItem, int32_t index);

  /// @brief Method InvokeDestroyItem, addr 0x4979bb4, size 0x12c, virtual true, abstract: false, final false
  inline void InvokeDestroyItem(::UnityEngine::UIElements::ReusableCollectionItem* reusableItem);

  /// @brief Method InvokeMakeItem, addr 0x49795d0, size 0xb0, virtual true, abstract: false, final false
  inline void InvokeMakeItem(::UnityEngine::UIElements::ReusableCollectionItem* reusableItem);

  /// @brief Method IsExpanded, addr 0x497bee8, size 0x64, virtual false, abstract: false, final false
  inline bool IsExpanded(int32_t id);

  /// @brief Method IsExpandedByIndex, addr 0x4979a20, size 0xb4, virtual false, abstract: false, final false
  inline bool IsExpandedByIndex(int32_t index);

  /// @brief Method IsIndexValid, addr 0x497b9b8, size 0x60, virtual false, abstract: false, final false
  inline bool IsIndexValid(int32_t index);

  /// @brief Method Move, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Move(int32_t id, int32_t newParentId, int32_t childIndex, bool rebuildTree);

  static inline ::UnityEngine::UIElements::BaseTreeViewController* New_ctor();

  /// @brief Method OnItemPointerUp, addr 0x4979fcc, size 0x620, virtual false, abstract: false, final false
  inline void OnItemPointerUp(::UnityEngine::UIElements::PointerUpEvent* evt);

  /// @brief Method OnToggleValueChanged, addr 0x497a690, size 0x148, virtual false, abstract: false, final false
  inline void OnToggleValueChanged(::UnityEngine::UIElements::ChangeEvent_1<bool>* evt);

  /// @brief Method PostInitRegistration, addr 0x4979680, size 0x258, virtual false, abstract: false, final false
  inline void PostInitRegistration(::UnityEngine::UIElements::ReusableTreeViewItem* treeItem);

  /// @brief Method RaiseItemParentChanged, addr 0x497c8e0, size 0x1c, virtual false, abstract: false, final false
  inline void RaiseItemParentChanged(int32_t id, int32_t newParentId);

  /// @brief Method RebuildTree, addr 0x49790a4, size 0x474, virtual false, abstract: false, final false
  inline void RebuildTree();

  /// @brief Method RegenerateWrappers, addr 0x4979518, size 0xb0, virtual false, abstract: false, final false
  inline void RegenerateWrappers();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TreeViewItemWrapper>* const& __cordl_internal_get_m_ItemWrappers() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TreeViewItemWrapper>*& __cordl_internal_get_m_ItemWrappers();

  constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_m_RootIndices() const;

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_m_RootIndices();

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& __cordl_internal_get_m_TreeItemIdsWithItemWrappers() const;

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get_m_TreeItemIdsWithItemWrappers();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::UIElements::TreeItem>* const& __cordl_internal_get_m_TreeItems() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::UIElements::TreeItem>*& __cordl_internal_get_m_TreeItems();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TreeViewItemWrapper>* const& __cordl_internal_get_m_WrapperInsertionList() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TreeViewItemWrapper>*& __cordl_internal_get_m_WrapperInsertionList();

  constexpr void __cordl_internal_set_m_ItemWrappers(::System::Collections::Generic::List_1<::UnityEngine::UIElements::TreeViewItemWrapper>* value);

  constexpr void __cordl_internal_set_m_RootIndices(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr void __cordl_internal_set_m_TreeItemIdsWithItemWrappers(::System::Collections::Generic::HashSet_1<int32_t>* value);

  constexpr void __cordl_internal_set_m_TreeItems(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::UIElements::TreeItem>* value);

  constexpr void __cordl_internal_set_m_WrapperInsertionList(::System::Collections::Generic::List_1<::UnityEngine::UIElements::TreeViewItemWrapper>* value);

  /// @brief Method .ctor, addr 0x497c8fc, size 0x16c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_K_ExpandItemByIndex();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_CreateWrappers();

  /// @brief Method get_baseTreeView, addr 0x4978fd4, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BaseTreeView* get_baseTreeView();

  /// @brief Method get_itemsSource, addr 0x4979050, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::IList* get_itemsSource();

  static inline void setStaticF_K_ExpandItemByIndex(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_CreateWrappers(::Unity::Profiling::ProfilerMarker value);

  /// @brief Method set_itemsSource, addr 0x4979058, size 0x4c, virtual true, abstract: false, final false
  inline void set_itemsSource(::System::Collections::IList* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseTreeViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseTreeViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseTreeViewController(BaseTreeViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseTreeViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseTreeViewController(BaseTreeViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5468 };

  /// @brief Field m_TreeItems, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::UIElements::TreeItem>* ___m_TreeItems;

  /// @brief Field m_RootIndices, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___m_RootIndices;

  /// @brief Field m_ItemWrappers, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TreeViewItemWrapper>* ___m_ItemWrappers;

  /// @brief Field m_TreeItemIdsWithItemWrappers, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<int32_t>* ___m_TreeItemIdsWithItemWrappers;

  /// @brief Field m_WrapperInsertionList, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TreeViewItemWrapper>* ___m_WrapperInsertionList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController, ___m_TreeItems) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController, ___m_RootIndices) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController, ___m_ItemWrappers) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController, ___m_TreeItemIdsWithItemWrappers) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeViewController, ___m_WrapperInsertionList) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BaseTreeViewController, 0x58>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::BaseTreeViewController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BaseTreeViewController*, "UnityEngine.UIElements", "BaseTreeViewController");
NEED_NO_BOX(::UnityEngine::UIElements::BaseTreeViewController___c__DisplayClass20_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BaseTreeViewController___c__DisplayClass20_0*, "UnityEngine.UIElements", "BaseTreeViewController/<>c__DisplayClass20_0");
