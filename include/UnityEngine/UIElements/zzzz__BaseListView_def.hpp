#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BaseListView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseVerticalCollectionView_def.hpp"
#include "UnityEngine/UIElements/zzzz__ListViewReorderMode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BaseListView)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace UnityEngine::UIElements {
class BaseListViewController;
}
namespace UnityEngine::UIElements {
class BaseListView_UxmlTraits;
}
namespace UnityEngine::UIElements {
class Button;
}
namespace UnityEngine::UIElements {
template <typename T> class ChangeEvent_1;
}
namespace UnityEngine::UIElements {
class CollectionViewController;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class Foldout;
}
namespace UnityEngine::UIElements {
class ICollectionDragAndDropController;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class Label;
}
namespace UnityEngine::UIElements {
class ListViewDragger;
}
namespace UnityEngine::UIElements {
struct ListViewReorderMode;
}
namespace UnityEngine::UIElements {
class TextField;
}
namespace UnityEngine::UIElements {
class UxmlBoolAttributeDescription;
}
namespace UnityEngine::UIElements {
template <typename T> class UxmlEnumAttributeDescription_1;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class BaseListView;
}
namespace UnityEngine::UIElements {
class BaseListView_UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::BaseListView);
MARK_REF_PTR_T(::UnityEngine::UIElements::BaseListView_UxmlTraits);
// Dependencies UnityEngine.UIElements.BaseVerticalCollectionView::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BaseListView/UxmlTraits
class CORDL_TYPE BaseListView_UxmlTraits : public ::UnityEngine::UIElements::BaseVerticalCollectionView_UxmlTraits {
public:
  // Declarations
  /// @brief Field m_HeaderTitle, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HeaderTitle, put = __cordl_internal_set_m_HeaderTitle)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_HeaderTitle;

  /// @brief Field m_ReorderMode, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ReorderMode,
                      put = __cordl_internal_set_m_ReorderMode)) ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ListViewReorderMode>* m_ReorderMode;

  /// @brief Field m_ShowAddRemoveFooter, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShowAddRemoveFooter,
                      put = __cordl_internal_set_m_ShowAddRemoveFooter)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_ShowAddRemoveFooter;

  /// @brief Field m_ShowBoundCollectionSize, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShowBoundCollectionSize,
                      put = __cordl_internal_set_m_ShowBoundCollectionSize)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_ShowBoundCollectionSize;

  /// @brief Field m_ShowFoldoutHeader, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShowFoldoutHeader, put = __cordl_internal_set_m_ShowFoldoutHeader)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_ShowFoldoutHeader;

  /// @brief Method Init, addr 0x4986d4c, size 0x200, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::BaseListView_UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& __cordl_internal_get_m_HeaderTitle() const;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_HeaderTitle();

  constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ListViewReorderMode>* const& __cordl_internal_get_m_ReorderMode() const;

  constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ListViewReorderMode>*& __cordl_internal_get_m_ReorderMode();

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_ShowAddRemoveFooter() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_ShowAddRemoveFooter();

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_ShowBoundCollectionSize() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_ShowBoundCollectionSize();

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_ShowFoldoutHeader() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_ShowFoldoutHeader();

  constexpr void __cordl_internal_set_m_HeaderTitle(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  constexpr void __cordl_internal_set_m_ReorderMode(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ListViewReorderMode>* value);

  constexpr void __cordl_internal_set_m_ShowAddRemoveFooter(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_ShowBoundCollectionSize(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_ShowFoldoutHeader(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  /// @brief Method .ctor, addr 0x49871ec, size 0x214, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseListView_UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseListView_UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseListView_UxmlTraits(BaseListView_UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseListView_UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseListView_UxmlTraits(BaseListView_UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5501 };

  /// @brief Field m_ShowFoldoutHeader, offset: 0xb0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_ShowFoldoutHeader;

  /// @brief Field m_HeaderTitle, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_HeaderTitle;

  /// @brief Field m_ShowAddRemoveFooter, offset: 0xc0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_ShowAddRemoveFooter;

  /// @brief Field m_ReorderMode, offset: 0xc8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ListViewReorderMode>* ___m_ReorderMode;

  /// @brief Field m_ShowBoundCollectionSize, offset: 0xd0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_ShowBoundCollectionSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BaseListView_UxmlTraits, ___m_ShowFoldoutHeader) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView_UxmlTraits, ___m_HeaderTitle) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView_UxmlTraits, ___m_ShowAddRemoveFooter) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView_UxmlTraits, ___m_ReorderMode) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView_UxmlTraits, ___m_ShowBoundCollectionSize) == 0xd0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BaseListView_UxmlTraits, 0xd8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BaseVerticalCollectionView, UnityEngine.UIElements.ListViewReorderMode
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BaseListView
class CORDL_TYPE BaseListView : public ::UnityEngine::UIElements::BaseVerticalCollectionView {
public:
  // Declarations
  using UxmlTraits = ::UnityEngine::UIElements::BaseListView_UxmlTraits;

  /// @brief Field arraySizeFieldUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_arraySizeFieldUssClassName, put = setStaticF_arraySizeFieldUssClassName)) ::StringW arraySizeFieldUssClassName;

  /// @brief Field arraySizeFieldWithFooterUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_arraySizeFieldWithFooterUssClassName, put = setStaticF_arraySizeFieldWithFooterUssClassName)) ::StringW arraySizeFieldWithFooterUssClassName;

  /// @brief Field arraySizeFieldWithHeaderUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_arraySizeFieldWithHeaderUssClassName, put = setStaticF_arraySizeFieldWithHeaderUssClassName)) ::StringW arraySizeFieldWithHeaderUssClassName;

  /// @brief Field emptyLabelUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_emptyLabelUssClassName, put = setStaticF_emptyLabelUssClassName)) ::StringW emptyLabelUssClassName;

  /// @brief Field foldoutHeaderUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_foldoutHeaderUssClassName, put = setStaticF_foldoutHeaderUssClassName)) ::StringW foldoutHeaderUssClassName;

  __declspec(property(get = get_footer)) ::UnityEngine::UIElements::VisualElement* footer;

  /// @brief Field footerAddButtonName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_footerAddButtonName, put = setStaticF_footerAddButtonName)) ::StringW footerAddButtonName;

  /// @brief Field footerRemoveButtonName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_footerRemoveButtonName, put = setStaticF_footerRemoveButtonName)) ::StringW footerRemoveButtonName;

  /// @brief Field footerUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_footerUssClassName, put = setStaticF_footerUssClassName)) ::StringW footerUssClassName;

  __declspec(property(put = set_headerTitle)) ::StringW headerTitle;

  /// @brief Field itemUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_itemUssClassName, put = setStaticF_itemUssClassName)) ::StringW itemUssClassName;

  /// @brief Field itemsAdded, offset 0x4b8, size 0x8
  __declspec(property(get = __cordl_internal_get_itemsAdded, put = __cordl_internal_set_itemsAdded)) ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* itemsAdded;

  /// @brief Field itemsRemoved, offset 0x4c0, size 0x8
  __declspec(property(get = __cordl_internal_get_itemsRemoved, put = __cordl_internal_set_itemsRemoved)) ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* itemsRemoved;

  /// @brief Field itemsSourceSizeChanged, offset 0x4c8, size 0x8
  __declspec(property(get = __cordl_internal_get_itemsSourceSizeChanged, put = __cordl_internal_set_itemsSourceSizeChanged)) ::System::Action* itemsSourceSizeChanged;

  /// @brief Field k_EmptyListStr, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_EmptyListStr, put = setStaticF_k_EmptyListStr)) ::StringW k_EmptyListStr;

  /// @brief Field k_SizeFieldLabel, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_SizeFieldLabel, put = setStaticF_k_SizeFieldLabel)) ::StringW k_SizeFieldLabel;

  /// @brief Field listViewWithFooterUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_listViewWithFooterUssClassName, put = setStaticF_listViewWithFooterUssClassName)) ::StringW listViewWithFooterUssClassName;

  /// @brief Field listViewWithHeaderUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_listViewWithHeaderUssClassName, put = setStaticF_listViewWithHeaderUssClassName)) ::StringW listViewWithHeaderUssClassName;

  /// @brief Field m_AddButton, offset 0x4f8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AddButton, put = __cordl_internal_set_m_AddButton)) ::UnityEngine::UIElements::Button* m_AddButton;

  /// @brief Field m_ArraySizeField, offset 0x4e0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ArraySizeField, put = __cordl_internal_set_m_ArraySizeField)) ::UnityEngine::UIElements::TextField* m_ArraySizeField;

  /// @brief Field m_Foldout, offset 0x4d8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Foldout, put = __cordl_internal_set_m_Foldout)) ::UnityEngine::UIElements::Foldout* m_Foldout;

  /// @brief Field m_Footer, offset 0x4f0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Footer, put = __cordl_internal_set_m_Footer)) ::UnityEngine::UIElements::VisualElement* m_Footer;

  /// @brief Field m_HeaderTitle, offset 0x4b0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HeaderTitle, put = __cordl_internal_set_m_HeaderTitle)) ::StringW m_HeaderTitle;

  /// @brief Field m_IsOverMultiEditLimit, offset 0x4e8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsOverMultiEditLimit, put = __cordl_internal_set_m_IsOverMultiEditLimit)) bool m_IsOverMultiEditLimit;

  /// @brief Field m_ItemAddedCallback, offset 0x508, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ItemAddedCallback,
                      put = __cordl_internal_set_m_ItemAddedCallback)) ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* m_ItemAddedCallback;

  /// @brief Field m_ItemRemovedCallback, offset 0x510, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ItemRemovedCallback,
                      put = __cordl_internal_set_m_ItemRemovedCallback)) ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* m_ItemRemovedCallback;

  /// @brief Field m_ItemsSourceSizeChangedCallback, offset 0x518, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ItemsSourceSizeChangedCallback, put = __cordl_internal_set_m_ItemsSourceSizeChangedCallback)) ::System::Action* m_ItemsSourceSizeChangedCallback;

  /// @brief Field m_ListViewLabel, offset 0x4d0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ListViewLabel, put = __cordl_internal_set_m_ListViewLabel)) ::UnityEngine::UIElements::Label* m_ListViewLabel;

  /// @brief Field m_MaxMultiEditStr, offset 0x530, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MaxMultiEditStr, put = __cordl_internal_set_m_MaxMultiEditStr)) ::StringW m_MaxMultiEditStr;

  /// @brief Field m_RemoveButton, offset 0x500, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RemoveButton, put = __cordl_internal_set_m_RemoveButton)) ::UnityEngine::UIElements::Button* m_RemoveButton;

  /// @brief Field m_ReorderMode, offset 0x520, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ReorderMode, put = __cordl_internal_set_m_ReorderMode)) ::UnityEngine::UIElements::ListViewReorderMode m_ReorderMode;

  /// @brief Field m_ShowBoundCollectionSize, offset 0x4ac, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ShowBoundCollectionSize, put = __cordl_internal_set_m_ShowBoundCollectionSize)) bool m_ShowBoundCollectionSize;

  /// @brief Field m_ShowFoldoutHeader, offset 0x4ad, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ShowFoldoutHeader, put = __cordl_internal_set_m_ShowFoldoutHeader)) bool m_ShowFoldoutHeader;

  /// @brief Field overMaxMultiEditLimitClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_overMaxMultiEditLimitClassName, put = setStaticF_overMaxMultiEditLimitClassName)) ::StringW overMaxMultiEditLimitClassName;

  __declspec(property(get = get_reorderMode, put = set_reorderMode)) ::UnityEngine::UIElements::ListViewReorderMode reorderMode;

  /// @brief Field reorderModeChanged, offset 0x528, size 0x8
  __declspec(property(get = __cordl_internal_get_reorderModeChanged, put = __cordl_internal_set_reorderModeChanged)) ::System::Action* reorderModeChanged;

  /// @brief Field reorderableItemContainerUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_reorderableItemContainerUssClassName, put = setStaticF_reorderableItemContainerUssClassName)) ::StringW reorderableItemContainerUssClassName;

  /// @brief Field reorderableItemHandleBarUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_reorderableItemHandleBarUssClassName, put = setStaticF_reorderableItemHandleBarUssClassName)) ::StringW reorderableItemHandleBarUssClassName;

  /// @brief Field reorderableItemHandleUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_reorderableItemHandleUssClassName, put = setStaticF_reorderableItemHandleUssClassName)) ::StringW reorderableItemHandleUssClassName;

  /// @brief Field reorderableItemUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_reorderableItemUssClassName, put = setStaticF_reorderableItemUssClassName)) ::StringW reorderableItemUssClassName;

  /// @brief Field reorderableUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_reorderableUssClassName, put = setStaticF_reorderableUssClassName)) ::StringW reorderableUssClassName;

  /// @brief Field scrollViewWithFooterUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_scrollViewWithFooterUssClassName, put = setStaticF_scrollViewWithFooterUssClassName)) ::StringW scrollViewWithFooterUssClassName;

  __declspec(property(get = get_showAddRemoveFooter, put = set_showAddRemoveFooter)) bool showAddRemoveFooter;

  __declspec(property(get = get_showBoundCollectionSize, put = set_showBoundCollectionSize)) bool showBoundCollectionSize;

  __declspec(property(get = get_showFoldoutHeader, put = set_showFoldoutHeader)) bool showFoldoutHeader;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  __declspec(property(get = get_viewController)) ::UnityEngine::UIElements::BaseListViewController* viewController;

  /// @brief Method AddItems, addr 0x4985600, size 0x2c, virtual false, abstract: false, final false
  inline void AddItems(int32_t itemCount);

  /// @brief Method CreateDragAndDropController, addr 0x49860d8, size 0x5c, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::ICollectionDragAndDropController* CreateDragAndDropController();

  /// @brief Method CreateDragger, addr 0x4986044, size 0x94, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::ListViewDragger* CreateDragger();

  /// @brief Method CreateVirtualizationController, addr 0x4985d10, size 0x48, virtual true, abstract: false, final false
  inline void CreateVirtualizationController();

  /// @brief Method EnableFooter, addr 0x49851c0, size 0x358, virtual false, abstract: false, final false
  inline void EnableFooter(bool enabled);

  /// @brief Method HandleItemNavigation, addr 0x4986204, size 0x694, virtual true, abstract: false, final false
  inline bool HandleItemNavigation(bool moveIn, bool altPressed);

  static inline ::UnityEngine::UIElements::BaseListView* New_ctor();

  /// @brief Method OnAddClicked, addr 0x4985870, size 0x280, virtual false, abstract: false, final false
  inline void OnAddClicked();

  /// @brief Method OnArraySizeFieldChanged, addr 0x49856a8, size 0x1c8, virtual false, abstract: false, final false
  inline void OnArraySizeFieldChanged(::UnityEngine::UIElements::ChangeEvent_1<::StringW>* evt);

  /// @brief Method OnItemAdded, addr 0x4985f18, size 0x1c, virtual false, abstract: false, final false
  inline void OnItemAdded(::System::Collections::Generic::IEnumerable_1<int32_t>* indices);

  /// @brief Method OnItemsRemoved, addr 0x4985f34, size 0x1c, virtual false, abstract: false, final false
  inline void OnItemsRemoved(::System::Collections::Generic::IEnumerable_1<int32_t>* indices);

  /// @brief Method OnItemsSourceSizeChanged, addr 0x4985f50, size 0x8c, virtual false, abstract: false, final false
  inline void OnItemsSourceSizeChanged();

  /// @brief Method OnRemoveClicked, addr 0x4985af0, size 0x218, virtual false, abstract: false, final false
  inline void OnRemoveClicked();

  /// @brief Method PostRefresh, addr 0x49861e0, size 0x24, virtual true, abstract: false, final false
  inline void PostRefresh();

  /// @brief Method SetViewController, addr 0x4985d58, size 0x1c0, virtual true, abstract: false, final false
  inline void SetViewController(::UnityEngine::UIElements::CollectionViewController* controller);

  /// @brief Method SetupArraySizeField, addr 0x4984a00, size 0x2f8, virtual false, abstract: false, final false
  inline void SetupArraySizeField();

  /// @brief Method UpdateArraySizeField, addr 0x4985518, size 0xc4, virtual false, abstract: false, final false
  inline void UpdateArraySizeField();

  /// @brief Method UpdateListViewLabel, addr 0x4984f5c, size 0x254, virtual false, abstract: false, final false
  inline void UpdateListViewLabel();

  /// @brief Method <OnAddClicked>b__36_0, addr 0x4986c7c, size 0xd0, virtual false, abstract: false, final false
  inline void _OnAddClicked_b__36_0();

  constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* const& __cordl_internal_get_itemsAdded() const;

  constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*& __cordl_internal_get_itemsAdded();

  constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* const& __cordl_internal_get_itemsRemoved() const;

  constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*& __cordl_internal_get_itemsRemoved();

  constexpr ::System::Action* const& __cordl_internal_get_itemsSourceSizeChanged() const;

  constexpr ::System::Action*& __cordl_internal_get_itemsSourceSizeChanged();

  constexpr ::UnityEngine::UIElements::Button* const& __cordl_internal_get_m_AddButton() const;

  constexpr ::UnityEngine::UIElements::Button*& __cordl_internal_get_m_AddButton();

  constexpr ::UnityEngine::UIElements::TextField* const& __cordl_internal_get_m_ArraySizeField() const;

  constexpr ::UnityEngine::UIElements::TextField*& __cordl_internal_get_m_ArraySizeField();

  constexpr ::UnityEngine::UIElements::Foldout* const& __cordl_internal_get_m_Foldout() const;

  constexpr ::UnityEngine::UIElements::Foldout*& __cordl_internal_get_m_Foldout();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_Footer() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_Footer();

  constexpr ::StringW const& __cordl_internal_get_m_HeaderTitle() const;

  constexpr ::StringW& __cordl_internal_get_m_HeaderTitle();

  constexpr bool const& __cordl_internal_get_m_IsOverMultiEditLimit() const;

  constexpr bool& __cordl_internal_get_m_IsOverMultiEditLimit();

  constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* const& __cordl_internal_get_m_ItemAddedCallback() const;

  constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*& __cordl_internal_get_m_ItemAddedCallback();

  constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* const& __cordl_internal_get_m_ItemRemovedCallback() const;

  constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*& __cordl_internal_get_m_ItemRemovedCallback();

  constexpr ::System::Action* const& __cordl_internal_get_m_ItemsSourceSizeChangedCallback() const;

  constexpr ::System::Action*& __cordl_internal_get_m_ItemsSourceSizeChangedCallback();

  constexpr ::UnityEngine::UIElements::Label* const& __cordl_internal_get_m_ListViewLabel() const;

  constexpr ::UnityEngine::UIElements::Label*& __cordl_internal_get_m_ListViewLabel();

  constexpr ::StringW const& __cordl_internal_get_m_MaxMultiEditStr() const;

  constexpr ::StringW& __cordl_internal_get_m_MaxMultiEditStr();

  constexpr ::UnityEngine::UIElements::Button* const& __cordl_internal_get_m_RemoveButton() const;

  constexpr ::UnityEngine::UIElements::Button*& __cordl_internal_get_m_RemoveButton();

  constexpr ::UnityEngine::UIElements::ListViewReorderMode const& __cordl_internal_get_m_ReorderMode() const;

  constexpr ::UnityEngine::UIElements::ListViewReorderMode& __cordl_internal_get_m_ReorderMode();

  constexpr bool const& __cordl_internal_get_m_ShowBoundCollectionSize() const;

  constexpr bool& __cordl_internal_get_m_ShowBoundCollectionSize();

  constexpr bool const& __cordl_internal_get_m_ShowFoldoutHeader() const;

  constexpr bool& __cordl_internal_get_m_ShowFoldoutHeader();

  constexpr ::System::Action* const& __cordl_internal_get_reorderModeChanged() const;

  constexpr ::System::Action*& __cordl_internal_get_reorderModeChanged();

  constexpr void __cordl_internal_set_itemsAdded(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* value);

  constexpr void __cordl_internal_set_itemsRemoved(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* value);

  constexpr void __cordl_internal_set_itemsSourceSizeChanged(::System::Action* value);

  constexpr void __cordl_internal_set_m_AddButton(::UnityEngine::UIElements::Button* value);

  constexpr void __cordl_internal_set_m_ArraySizeField(::UnityEngine::UIElements::TextField* value);

  constexpr void __cordl_internal_set_m_Foldout(::UnityEngine::UIElements::Foldout* value);

  constexpr void __cordl_internal_set_m_Footer(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_HeaderTitle(::StringW value);

  constexpr void __cordl_internal_set_m_IsOverMultiEditLimit(bool value);

  constexpr void __cordl_internal_set_m_ItemAddedCallback(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* value);

  constexpr void __cordl_internal_set_m_ItemRemovedCallback(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* value);

  constexpr void __cordl_internal_set_m_ItemsSourceSizeChangedCallback(::System::Action* value);

  constexpr void __cordl_internal_set_m_ListViewLabel(::UnityEngine::UIElements::Label* value);

  constexpr void __cordl_internal_set_m_MaxMultiEditStr(::StringW value);

  constexpr void __cordl_internal_set_m_RemoveButton(::UnityEngine::UIElements::Button* value);

  constexpr void __cordl_internal_set_m_ReorderMode(::UnityEngine::UIElements::ListViewReorderMode value);

  constexpr void __cordl_internal_set_m_ShowBoundCollectionSize(bool value);

  constexpr void __cordl_internal_set_m_ShowFoldoutHeader(bool value);

  constexpr void __cordl_internal_set_reorderModeChanged(::System::Action* value);

  /// @brief Method .ctor, addr 0x4986134, size 0xac, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_reorderModeChanged, addr 0x4980950, size 0xa0, virtual false, abstract: false, final false
  inline void add_reorderModeChanged(::System::Action* value);

  static inline ::StringW getStaticF_arraySizeFieldUssClassName();

  static inline ::StringW getStaticF_arraySizeFieldWithFooterUssClassName();

  static inline ::StringW getStaticF_arraySizeFieldWithHeaderUssClassName();

  static inline ::StringW getStaticF_emptyLabelUssClassName();

  static inline ::StringW getStaticF_foldoutHeaderUssClassName();

  static inline ::StringW getStaticF_footerAddButtonName();

  static inline ::StringW getStaticF_footerRemoveButtonName();

  static inline ::StringW getStaticF_footerUssClassName();

  static inline ::StringW getStaticF_itemUssClassName();

  static inline ::StringW getStaticF_k_EmptyListStr();

  static inline ::StringW getStaticF_k_SizeFieldLabel();

  static inline ::StringW getStaticF_listViewWithFooterUssClassName();

  static inline ::StringW getStaticF_listViewWithHeaderUssClassName();

  static inline ::StringW getStaticF_overMaxMultiEditLimitClassName();

  static inline ::StringW getStaticF_reorderableItemContainerUssClassName();

  static inline ::StringW getStaticF_reorderableItemHandleBarUssClassName();

  static inline ::StringW getStaticF_reorderableItemHandleUssClassName();

  static inline ::StringW getStaticF_reorderableItemUssClassName();

  static inline ::StringW getStaticF_reorderableUssClassName();

  static inline ::StringW getStaticF_scrollViewWithFooterUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  /// @brief Method get_footer, addr 0x4985d08, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_footer();

  /// @brief Method get_reorderMode, addr 0x4985fdc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ListViewReorderMode get_reorderMode();

  /// @brief Method get_showAddRemoveFooter, addr 0x49851b0, size 0x10, virtual false, abstract: false, final false
  inline bool get_showAddRemoveFooter();

  /// @brief Method get_showBoundCollectionSize, addr 0x49849dc, size 0x8, virtual false, abstract: false, final false
  inline bool get_showBoundCollectionSize();

  /// @brief Method get_showFoldoutHeader, addr 0x4984cf8, size 0x8, virtual false, abstract: false, final false
  inline bool get_showFoldoutHeader();

  /// @brief Method get_viewController, addr 0x498562c, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BaseListViewController* get_viewController();

  /// @brief Method remove_reorderModeChanged, addr 0x4980aa8, size 0xa0, virtual false, abstract: false, final false
  inline void remove_reorderModeChanged(::System::Action* value);

  static inline void setStaticF_arraySizeFieldUssClassName(::StringW value);

  static inline void setStaticF_arraySizeFieldWithFooterUssClassName(::StringW value);

  static inline void setStaticF_arraySizeFieldWithHeaderUssClassName(::StringW value);

  static inline void setStaticF_emptyLabelUssClassName(::StringW value);

  static inline void setStaticF_foldoutHeaderUssClassName(::StringW value);

  static inline void setStaticF_footerAddButtonName(::StringW value);

  static inline void setStaticF_footerRemoveButtonName(::StringW value);

  static inline void setStaticF_footerUssClassName(::StringW value);

  static inline void setStaticF_itemUssClassName(::StringW value);

  static inline void setStaticF_k_EmptyListStr(::StringW value);

  static inline void setStaticF_k_SizeFieldLabel(::StringW value);

  static inline void setStaticF_listViewWithFooterUssClassName(::StringW value);

  static inline void setStaticF_listViewWithHeaderUssClassName(::StringW value);

  static inline void setStaticF_overMaxMultiEditLimitClassName(::StringW value);

  static inline void setStaticF_reorderableItemContainerUssClassName(::StringW value);

  static inline void setStaticF_reorderableItemHandleBarUssClassName(::StringW value);

  static inline void setStaticF_reorderableItemHandleUssClassName(::StringW value);

  static inline void setStaticF_reorderableItemUssClassName(::StringW value);

  static inline void setStaticF_reorderableUssClassName(::StringW value);

  static inline void setStaticF_scrollViewWithFooterUssClassName(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

  /// @brief Method set_headerTitle, addr 0x49855dc, size 0x1c, virtual false, abstract: false, final false
  inline void set_headerTitle(::StringW value);

  /// @brief Method set_reorderMode, addr 0x4985fe4, size 0x60, virtual false, abstract: false, final false
  inline void set_reorderMode(::UnityEngine::UIElements::ListViewReorderMode value);

  /// @brief Method set_showAddRemoveFooter, addr 0x49855f8, size 0x8, virtual false, abstract: false, final false
  inline void set_showAddRemoveFooter(bool value);

  /// @brief Method set_showBoundCollectionSize, addr 0x49849e4, size 0x1c, virtual false, abstract: false, final false
  inline void set_showBoundCollectionSize(bool value);

  /// @brief Method set_showFoldoutHeader, addr 0x4984d00, size 0x25c, virtual false, abstract: false, final false
  inline void set_showFoldoutHeader(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseListView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseListView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseListView(BaseListView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseListView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseListView(BaseListView const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5502 };

  /// @brief Field m_ShowBoundCollectionSize, offset: 0x4ac, size: 0x1, def value: None
  bool ___m_ShowBoundCollectionSize;

  /// @brief Field m_ShowFoldoutHeader, offset: 0x4ad, size: 0x1, def value: None
  bool ___m_ShowFoldoutHeader;

  /// @brief Field m_HeaderTitle, offset: 0x4b0, size: 0x8, def value: None
  ::StringW ___m_HeaderTitle;

  /// @brief Field itemsAdded, offset: 0x4b8, size: 0x8, def value: None
  ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* ___itemsAdded;

  /// @brief Field itemsRemoved, offset: 0x4c0, size: 0x8, def value: None
  ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* ___itemsRemoved;

  /// @brief Field itemsSourceSizeChanged, offset: 0x4c8, size: 0x8, def value: None
  ::System::Action* ___itemsSourceSizeChanged;

  /// @brief Field m_ListViewLabel, offset: 0x4d0, size: 0x8, def value: None
  ::UnityEngine::UIElements::Label* ___m_ListViewLabel;

  /// @brief Field m_Foldout, offset: 0x4d8, size: 0x8, def value: None
  ::UnityEngine::UIElements::Foldout* ___m_Foldout;

  /// @brief Field m_ArraySizeField, offset: 0x4e0, size: 0x8, def value: None
  ::UnityEngine::UIElements::TextField* ___m_ArraySizeField;

  /// @brief Field m_IsOverMultiEditLimit, offset: 0x4e8, size: 0x1, def value: None
  bool ___m_IsOverMultiEditLimit;

  /// @brief Field m_Footer, offset: 0x4f0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_Footer;

  /// @brief Field m_AddButton, offset: 0x4f8, size: 0x8, def value: None
  ::UnityEngine::UIElements::Button* ___m_AddButton;

  /// @brief Field m_RemoveButton, offset: 0x500, size: 0x8, def value: None
  ::UnityEngine::UIElements::Button* ___m_RemoveButton;

  /// @brief Field m_ItemAddedCallback, offset: 0x508, size: 0x8, def value: None
  ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* ___m_ItemAddedCallback;

  /// @brief Field m_ItemRemovedCallback, offset: 0x510, size: 0x8, def value: None
  ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* ___m_ItemRemovedCallback;

  /// @brief Field m_ItemsSourceSizeChangedCallback, offset: 0x518, size: 0x8, def value: None
  ::System::Action* ___m_ItemsSourceSizeChangedCallback;

  /// @brief Field m_ReorderMode, offset: 0x520, size: 0x4, def value: None
  ::UnityEngine::UIElements::ListViewReorderMode ___m_ReorderMode;

  /// @brief Field reorderModeChanged, offset: 0x528, size: 0x8, def value: None
  ::System::Action* ___reorderModeChanged;

  /// @brief Field m_MaxMultiEditStr, offset: 0x530, size: 0x8, def value: None
  ::StringW ___m_MaxMultiEditStr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___m_ShowBoundCollectionSize) == 0x4ac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___m_ShowFoldoutHeader) == 0x4ad, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___m_HeaderTitle) == 0x4b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___itemsAdded) == 0x4b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___itemsRemoved) == 0x4c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___itemsSourceSizeChanged) == 0x4c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___m_ListViewLabel) == 0x4d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___m_Foldout) == 0x4d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___m_ArraySizeField) == 0x4e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___m_IsOverMultiEditLimit) == 0x4e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___m_Footer) == 0x4f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___m_AddButton) == 0x4f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___m_RemoveButton) == 0x500, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___m_ItemAddedCallback) == 0x508, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___m_ItemRemovedCallback) == 0x510, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___m_ItemsSourceSizeChangedCallback) == 0x518, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___m_ReorderMode) == 0x520, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___reorderModeChanged) == 0x528, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___m_MaxMultiEditStr) == 0x530, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BaseListView, 0x538>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::BaseListView);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BaseListView*, "UnityEngine.UIElements", "BaseListView");
NEED_NO_BOX(::UnityEngine::UIElements::BaseListView_UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BaseListView_UxmlTraits*, "UnityEngine.UIElements", "BaseListView/UxmlTraits");
