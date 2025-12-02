#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BaseListView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseVerticalCollectionView_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingSourceSelectionMode_def.hpp"
#include "UnityEngine/UIElements/zzzz__ListViewReorderMode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BaseListView)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections {
class IList;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class Action;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace UnityEngine::UIElements {
class BaseListViewController;
}
namespace UnityEngine::UIElements {
class BaseListView_UxmlTraits;
}
namespace UnityEngine::UIElements {
struct BindingSourceSelectionMode;
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
class IVisualElementScheduledItem;
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
  /// @brief Field m_AllowAdd, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AllowAdd, put = __cordl_internal_set_m_AllowAdd)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_AllowAdd;

  /// @brief Field m_AllowRemove, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AllowRemove, put = __cordl_internal_set_m_AllowRemove)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_AllowRemove;

  /// @brief Field m_BindingSourceSelectionMode, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BindingSourceSelectionMode,
                      put = __cordl_internal_set_m_BindingSourceSelectionMode)) ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::BindingSourceSelectionMode>*
      m_BindingSourceSelectionMode;

  /// @brief Field m_HeaderTitle, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HeaderTitle, put = __cordl_internal_set_m_HeaderTitle)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_HeaderTitle;

  /// @brief Field m_ReorderMode, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ReorderMode,
                      put = __cordl_internal_set_m_ReorderMode)) ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ListViewReorderMode>* m_ReorderMode;

  /// @brief Field m_ShowAddRemoveFooter, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShowAddRemoveFooter,
                      put = __cordl_internal_set_m_ShowAddRemoveFooter)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_ShowAddRemoveFooter;

  /// @brief Field m_ShowBoundCollectionSize, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShowBoundCollectionSize,
                      put = __cordl_internal_set_m_ShowBoundCollectionSize)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_ShowBoundCollectionSize;

  /// @brief Field m_ShowFoldoutHeader, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShowFoldoutHeader, put = __cordl_internal_set_m_ShowFoldoutHeader)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_ShowFoldoutHeader;

  /// @brief Method Init, addr 0x6af7510, size 0x314, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::BaseListView_UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_AllowAdd() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_AllowAdd();

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_AllowRemove() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_AllowRemove();

  constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::BindingSourceSelectionMode>* const& __cordl_internal_get_m_BindingSourceSelectionMode() const;

  constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::BindingSourceSelectionMode>*& __cordl_internal_get_m_BindingSourceSelectionMode();

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

  constexpr void __cordl_internal_set_m_AllowAdd(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_AllowRemove(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_BindingSourceSelectionMode(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::BindingSourceSelectionMode>* value);

  constexpr void __cordl_internal_set_m_HeaderTitle(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  constexpr void __cordl_internal_set_m_ReorderMode(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ListViewReorderMode>* value);

  constexpr void __cordl_internal_set_m_ShowAddRemoveFooter(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_ShowBoundCollectionSize(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_ShowFoldoutHeader(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  /// @brief Method .ctor, addr 0x6af7ae0, size 0x35c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4109 };

  /// @brief Field m_ShowFoldoutHeader, offset: 0xc8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_ShowFoldoutHeader;

  /// @brief Field m_HeaderTitle, offset: 0xd0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_HeaderTitle;

  /// @brief Field m_ShowAddRemoveFooter, offset: 0xd8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_ShowAddRemoveFooter;

  /// @brief Field m_AllowAdd, offset: 0xe0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_AllowAdd;

  /// @brief Field m_AllowRemove, offset: 0xe8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_AllowRemove;

  /// @brief Field m_ReorderMode, offset: 0xf0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ListViewReorderMode>* ___m_ReorderMode;

  /// @brief Field m_ShowBoundCollectionSize, offset: 0xf8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_ShowBoundCollectionSize;

  /// @brief Field m_BindingSourceSelectionMode, offset: 0x100, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::BindingSourceSelectionMode>* ___m_BindingSourceSelectionMode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BaseListView_UxmlTraits, ___m_ShowFoldoutHeader) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView_UxmlTraits, ___m_HeaderTitle) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView_UxmlTraits, ___m_ShowAddRemoveFooter) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView_UxmlTraits, ___m_AllowAdd) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView_UxmlTraits, ___m_AllowRemove) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView_UxmlTraits, ___m_ReorderMode) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView_UxmlTraits, ___m_ShowBoundCollectionSize) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView_UxmlTraits, ___m_BindingSourceSelectionMode) == 0x100, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BaseListView_UxmlTraits, 0x108>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BaseVerticalCollectionView, UnityEngine.UIElements.BindingId, UnityEngine.UIElements.BindingSourceSelectionMode, UnityEngine.UIElements.ListViewReorderMode
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BaseListView
class CORDL_TYPE BaseListView : public ::UnityEngine::UIElements::BaseVerticalCollectionView {
public:
  // Declarations
  using UxmlTraits = ::UnityEngine::UIElements::BaseListView_UxmlTraits;

  __declspec(property(get = get_allowAdd, put = set_allowAdd)) bool allowAdd;

  /// @brief Field allowAddProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_allowAddProperty, put = setStaticF_allowAddProperty)) ::UnityEngine::UIElements::BindingId allowAddProperty;

  __declspec(property(get = get_allowRemove, put = set_allowRemove)) bool allowRemove;

  /// @brief Field allowRemoveProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_allowRemoveProperty, put = setStaticF_allowRemoveProperty)) ::UnityEngine::UIElements::BindingId allowRemoveProperty;

  /// @brief Field arraySizeFieldUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_arraySizeFieldUssClassName, put = setStaticF_arraySizeFieldUssClassName)) ::StringW arraySizeFieldUssClassName;

  /// @brief Field arraySizeFieldWithFooterUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_arraySizeFieldWithFooterUssClassName, put = setStaticF_arraySizeFieldWithFooterUssClassName)) ::StringW arraySizeFieldWithFooterUssClassName;

  /// @brief Field arraySizeFieldWithHeaderUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_arraySizeFieldWithHeaderUssClassName, put = setStaticF_arraySizeFieldWithHeaderUssClassName)) ::StringW arraySizeFieldWithHeaderUssClassName;

  __declspec(property(get = get_autoAssignSource)) bool autoAssignSource;

  __declspec(property(get = get_bindingSourceSelectionMode, put = set_bindingSourceSelectionMode)) ::UnityEngine::UIElements::BindingSourceSelectionMode bindingSourceSelectionMode;

  /// @brief Field bindingSourceSelectionModeProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_bindingSourceSelectionModeProperty,
                      put = setStaticF_bindingSourceSelectionModeProperty)) ::UnityEngine::UIElements::BindingId bindingSourceSelectionModeProperty;

  /// @brief Field drawnFooter, offset 0x5b0, size 0x8
  __declspec(property(get = __cordl_internal_get_drawnFooter, put = __cordl_internal_set_drawnFooter)) ::UnityEngine::UIElements::VisualElement* drawnFooter;

  /// @brief Field drawnHeader, offset 0x5a0, size 0x8
  __declspec(property(get = __cordl_internal_get_drawnHeader, put = __cordl_internal_set_drawnHeader)) ::UnityEngine::UIElements::VisualElement* drawnHeader;

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

  __declspec(property(get = get_headerTitle, put = set_headerTitle)) ::StringW headerTitle;

  /// @brief Field headerTitleProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_headerTitleProperty, put = setStaticF_headerTitleProperty)) ::UnityEngine::UIElements::BindingId headerTitleProperty;

  /// @brief Field itemUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_itemUssClassName, put = setStaticF_itemUssClassName)) ::StringW itemUssClassName;

  /// @brief Field itemsAdded, offset 0x5c8, size 0x8
  __declspec(property(get = __cordl_internal_get_itemsAdded, put = __cordl_internal_set_itemsAdded)) ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* itemsAdded;

  /// @brief Field itemsRemoved, offset 0x5d0, size 0x8
  __declspec(property(get = __cordl_internal_get_itemsRemoved, put = __cordl_internal_set_itemsRemoved)) ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* itemsRemoved;

  /// @brief Field itemsSourceSizeChanged, offset 0x5d8, size 0x8
  __declspec(property(get = __cordl_internal_get_itemsSourceSizeChanged, put = __cordl_internal_set_itemsSourceSizeChanged)) ::System::Action* itemsSourceSizeChanged;

  /// @brief Field k_EmptyListStr, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_EmptyListStr, put = setStaticF_k_EmptyListStr)) ::StringW k_EmptyListStr;

  /// @brief Field k_SizeFieldLabel, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_SizeFieldLabel, put = setStaticF_k_SizeFieldLabel)) ::StringW k_SizeFieldLabel;

  /// @brief Field listViewWithFooterUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_listViewWithFooterUssClassName, put = setStaticF_listViewWithFooterUssClassName)) ::StringW listViewWithFooterUssClassName;

  /// @brief Field listViewWithHeaderUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_listViewWithHeaderUssClassName, put = setStaticF_listViewWithHeaderUssClassName)) ::StringW listViewWithHeaderUssClassName;

  /// @brief Field m_AddButton, offset 0x628, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AddButton, put = __cordl_internal_set_m_AddButton)) ::UnityEngine::UIElements::Button* m_AddButton;

  /// @brief Field m_AllowAdd, offset 0x670, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AllowAdd, put = __cordl_internal_set_m_AllowAdd)) bool m_AllowAdd;

  /// @brief Field m_AllowRemove, offset 0x688, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AllowRemove, put = __cordl_internal_set_m_AllowRemove)) bool m_AllowRemove;

  /// @brief Field m_ArraySizeField, offset 0x610, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ArraySizeField, put = __cordl_internal_set_m_ArraySizeField)) ::UnityEngine::UIElements::TextField* m_ArraySizeField;

  /// @brief Field m_BindingSourceSelectionMode, offset 0x5f8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BindingSourceSelectionMode,
                      put = __cordl_internal_set_m_BindingSourceSelectionMode)) ::UnityEngine::UIElements::BindingSourceSelectionMode m_BindingSourceSelectionMode;

  /// @brief Field m_Foldout, offset 0x608, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Foldout, put = __cordl_internal_set_m_Foldout)) ::UnityEngine::UIElements::Foldout* m_Foldout;

  /// @brief Field m_Footer, offset 0x620, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Footer, put = __cordl_internal_set_m_Footer)) ::UnityEngine::UIElements::VisualElement* m_Footer;

  /// @brief Field m_HeaderTitle, offset 0x598, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HeaderTitle, put = __cordl_internal_set_m_HeaderTitle)) ::StringW m_HeaderTitle;

  /// @brief Field m_IsOverMultiEditLimit, offset 0x618, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsOverMultiEditLimit, put = __cordl_internal_set_m_IsOverMultiEditLimit)) bool m_IsOverMultiEditLimit;

  /// @brief Field m_ItemAddedCallback, offset 0x638, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ItemAddedCallback,
                      put = __cordl_internal_set_m_ItemAddedCallback)) ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* m_ItemAddedCallback;

  /// @brief Field m_ItemRemovedCallback, offset 0x640, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ItemRemovedCallback,
                      put = __cordl_internal_set_m_ItemRemovedCallback)) ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* m_ItemRemovedCallback;

  /// @brief Field m_ItemsSourceSizeChangedCallback, offset 0x648, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ItemsSourceSizeChangedCallback, put = __cordl_internal_set_m_ItemsSourceSizeChangedCallback)) ::System::Action* m_ItemsSourceSizeChangedCallback;

  /// @brief Field m_ListViewLabel, offset 0x600, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ListViewLabel, put = __cordl_internal_set_m_ListViewLabel)) ::UnityEngine::UIElements::Label* m_ListViewLabel;

  /// @brief Field m_MakeFooter, offset 0x5b8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MakeFooter, put = __cordl_internal_set_m_MakeFooter)) ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* m_MakeFooter;

  /// @brief Field m_MakeHeader, offset 0x5a8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MakeHeader, put = __cordl_internal_set_m_MakeHeader)) ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* m_MakeHeader;

  /// @brief Field m_MakeNoneElement, offset 0x668, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MakeNoneElement, put = __cordl_internal_set_m_MakeNoneElement)) ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* m_MakeNoneElement;

  /// @brief Field m_MaxMultiEditStr, offset 0x698, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MaxMultiEditStr, put = __cordl_internal_set_m_MaxMultiEditStr)) ::StringW m_MaxMultiEditStr;

  /// @brief Field m_NoneElement, offset 0x660, size 0x8
  __declspec(property(get = __cordl_internal_get_m_NoneElement, put = __cordl_internal_set_m_NoneElement)) ::UnityEngine::UIElements::VisualElement* m_NoneElement;

  /// @brief Field m_OnAdd, offset 0x680, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnAdd, put = __cordl_internal_set_m_OnAdd)) ::System::Action_1<::UnityEngine::UIElements::BaseListView*>* m_OnAdd;

  /// @brief Field m_OnRemove, offset 0x690, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnRemove, put = __cordl_internal_set_m_OnRemove)) ::System::Action_1<::UnityEngine::UIElements::BaseListView*>* m_OnRemove;

  /// @brief Field m_OverridingAddButtonBehavior, offset 0x678, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_OverridingAddButtonBehavior,
      put = __cordl_internal_set_m_OverridingAddButtonBehavior)) ::System::Action_2<::UnityEngine::UIElements::BaseListView*, ::UnityEngine::UIElements::Button*>* m_OverridingAddButtonBehavior;

  /// @brief Field m_RemoveButton, offset 0x630, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RemoveButton, put = __cordl_internal_set_m_RemoveButton)) ::UnityEngine::UIElements::Button* m_RemoveButton;

  /// @brief Field m_ReorderMode, offset 0x650, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ReorderMode, put = __cordl_internal_set_m_ReorderMode)) ::UnityEngine::UIElements::ListViewReorderMode m_ReorderMode;

  /// @brief Field m_ShowAddRemoveFooter, offset 0x5c0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ShowAddRemoveFooter, put = __cordl_internal_set_m_ShowAddRemoveFooter)) bool m_ShowAddRemoveFooter;

  /// @brief Field m_ShowBoundCollectionSize, offset 0x590, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ShowBoundCollectionSize, put = __cordl_internal_set_m_ShowBoundCollectionSize)) bool m_ShowBoundCollectionSize;

  /// @brief Field m_ShowFoldoutHeader, offset 0x591, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ShowFoldoutHeader, put = __cordl_internal_set_m_ShowFoldoutHeader)) bool m_ShowFoldoutHeader;

  /// @brief Field m_TrackCount, offset 0x5e8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TrackCount, put = __cordl_internal_set_m_TrackCount)) ::System::Action* m_TrackCount;

  /// @brief Field m_TrackedItem, offset 0x5e0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TrackedItem, put = __cordl_internal_set_m_TrackedItem)) ::UnityEngine::UIElements::IVisualElementScheduledItem* m_TrackedItem;

  /// @brief Field m_WhileAutoAssign, offset 0x5f0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_WhileAutoAssign, put = __cordl_internal_set_m_WhileAutoAssign)) ::System::Func_1<bool>* m_WhileAutoAssign;

  __declspec(property(get = get_makeFooter, put = set_makeFooter)) ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* makeFooter;

  /// @brief Field makeFooterProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_makeFooterProperty, put = setStaticF_makeFooterProperty)) ::UnityEngine::UIElements::BindingId makeFooterProperty;

  __declspec(property(get = get_makeHeader, put = set_makeHeader)) ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* makeHeader;

  /// @brief Field makeHeaderProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_makeHeaderProperty, put = setStaticF_makeHeaderProperty)) ::UnityEngine::UIElements::BindingId makeHeaderProperty;

  __declspec(property(get = get_makeNoneElement, put = set_makeNoneElement)) ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* makeNoneElement;

  /// @brief Field makeNoneElementProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_makeNoneElementProperty, put = setStaticF_makeNoneElementProperty)) ::UnityEngine::UIElements::BindingId makeNoneElementProperty;

  __declspec(property(get = get_onAdd, put = set_onAdd)) ::System::Action_1<::UnityEngine::UIElements::BaseListView*>* onAdd;

  /// @brief Field onAddProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_onAddProperty, put = setStaticF_onAddProperty)) ::UnityEngine::UIElements::BindingId onAddProperty;

  __declspec(property(get = get_onRemove, put = set_onRemove)) ::System::Action_1<::UnityEngine::UIElements::BaseListView*>* onRemove;

  /// @brief Field onRemoveProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_onRemoveProperty, put = setStaticF_onRemoveProperty)) ::UnityEngine::UIElements::BindingId onRemoveProperty;

  /// @brief Field overMaxMultiEditLimitClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_overMaxMultiEditLimitClassName, put = setStaticF_overMaxMultiEditLimitClassName)) ::StringW overMaxMultiEditLimitClassName;

  __declspec(property(get = get_overridingAddButtonBehavior,
                      put = set_overridingAddButtonBehavior)) ::System::Action_2<::UnityEngine::UIElements::BaseListView*, ::UnityEngine::UIElements::Button*>* overridingAddButtonBehavior;

  /// @brief Field overridingAddButtonBehaviorProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_overridingAddButtonBehaviorProperty,
                      put = setStaticF_overridingAddButtonBehaviorProperty)) ::UnityEngine::UIElements::BindingId overridingAddButtonBehaviorProperty;

  __declspec(property(get = get_reorderMode, put = set_reorderMode)) ::UnityEngine::UIElements::ListViewReorderMode reorderMode;

  /// @brief Field reorderModeChanged, offset 0x658, size 0x8
  __declspec(property(get = __cordl_internal_get_reorderModeChanged, put = __cordl_internal_set_reorderModeChanged)) ::System::Action* reorderModeChanged;

  /// @brief Field reorderModeProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_reorderModeProperty, put = setStaticF_reorderModeProperty)) ::UnityEngine::UIElements::BindingId reorderModeProperty;

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

  /// @brief Field showAddRemoveFooterProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_showAddRemoveFooterProperty, put = setStaticF_showAddRemoveFooterProperty)) ::UnityEngine::UIElements::BindingId showAddRemoveFooterProperty;

  __declspec(property(get = get_showBoundCollectionSize, put = set_showBoundCollectionSize)) bool showBoundCollectionSize;

  /// @brief Field showBoundCollectionSizeProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_showBoundCollectionSizeProperty, put = setStaticF_showBoundCollectionSizeProperty)) ::UnityEngine::UIElements::BindingId showBoundCollectionSizeProperty;

  __declspec(property(get = get_showFoldoutHeader, put = set_showFoldoutHeader)) bool showFoldoutHeader;

  /// @brief Field showFoldoutHeaderProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_showFoldoutHeaderProperty, put = setStaticF_showFoldoutHeaderProperty)) ::UnityEngine::UIElements::BindingId showFoldoutHeaderProperty;

  __declspec(property(get = get_trackCount)) ::System::Action* trackCount;

  __declspec(property(get = get_trackItemCount)) ::UnityEngine::UIElements::IVisualElementScheduledItem* trackItemCount;

  __declspec(property(get = get_untilManualBindingSourceSelectionMode)) ::System::Func_1<bool>* untilManualBindingSourceSelectionMode;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  __declspec(property(get = get_viewController)) ::UnityEngine::UIElements::BaseListViewController* viewController;

  /// @brief Method AddFoldout, addr 0x6a24abc, size 0x14c, virtual false, abstract: false, final false
  inline void AddFoldout();

  /// @brief Method AddItems, addr 0x6a25db8, size 0xd4, virtual false, abstract: false, final false
  inline void AddItems(int32_t itemCount);

  /// @brief Method CreateDragAndDropController, addr 0x6a27018, size 0x64, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::ICollectionDragAndDropController* CreateDragAndDropController();

  /// @brief Method CreateDragger, addr 0x6a26f78, size 0xa0, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::ListViewDragger* CreateDragger();

  /// @brief Method CreateVirtualizationController, addr 0x6a26784, size 0x4c, virtual true, abstract: false, final false
  inline void CreateVirtualizationController();

  /// @brief Method EnableFooter, addr 0x6a24f7c, size 0x3e0, virtual false, abstract: false, final false
  inline void EnableFooter(bool enabled);

  /// @brief Method HandleItemNavigation, addr 0x6a271a4, size 0x61c, virtual true, abstract: false, final false
  inline bool HandleItemNavigation(bool moveIn, bool altPressed);

  static inline ::UnityEngine::UIElements::BaseListView* New_ctor();

  static inline ::UnityEngine::UIElements::BaseListView* New_ctor(::System::Collections::IList* itemsSource, float_t itemHeight);

  /// @brief Method OnAddClicked, addr 0x6a260ec, size 0x3a0, virtual false, abstract: false, final false
  inline void OnAddClicked();

  /// @brief Method OnArraySizeFieldChanged, addr 0x6a25e8c, size 0x1e0, virtual false, abstract: false, final false
  inline void OnArraySizeFieldChanged(::UnityEngine::UIElements::ChangeEvent_1<::StringW>* evt);

  /// @brief Method OnItemAdded, addr 0x6a269e0, size 0x1c, virtual false, abstract: false, final false
  inline void OnItemAdded(::System::Collections::Generic::IEnumerable_1<int32_t>* indices);

  /// @brief Method OnItemsRemoved, addr 0x6a269fc, size 0x1c, virtual false, abstract: false, final false
  inline void OnItemsRemoved(::System::Collections::Generic::IEnumerable_1<int32_t>* indices);

  /// @brief Method OnItemsSourceSizeChanged, addr 0x6a2648c, size 0x8c, virtual false, abstract: false, final false
  inline void OnItemsSourceSizeChanged();

  /// @brief Method OnRemoveClicked, addr 0x6a26518, size 0x264, virtual false, abstract: false, final false
  inline void OnRemoveClicked();

  /// @brief Method PostRefresh, addr 0x6a27180, size 0x24, virtual true, abstract: false, final false
  inline void PostRefresh();

  /// @brief Method RemoveFoldout, addr 0x6a24c08, size 0x44, virtual false, abstract: false, final false
  inline void RemoveFoldout();

  /// @brief Method SetViewController, addr 0x6a267d0, size 0x210, virtual true, abstract: false, final false
  inline void SetViewController(::UnityEngine::UIElements::CollectionViewController* controller);

  /// @brief Method SetupArraySizeField, addr 0x6a24508, size 0x32c, virtual false, abstract: false, final false
  inline void SetupArraySizeField();

  /// @brief Method UpdateArraySizeField, addr 0x6a2535c, size 0xd8, virtual false, abstract: false, final false
  inline void UpdateArraySizeField();

  /// @brief Method UpdateListViewLabel, addr 0x6a24c4c, size 0x320, virtual false, abstract: false, final false
  inline void UpdateListViewLabel();

  /// @brief Method <OnAddClicked>b__81_0, addr 0x6a28618, size 0x1b0, virtual false, abstract: false, final false
  inline void _OnAddClicked_b__81_0();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_drawnFooter() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_drawnFooter();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_drawnHeader() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_drawnHeader();

  constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* const& __cordl_internal_get_itemsAdded() const;

  constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*& __cordl_internal_get_itemsAdded();

  constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* const& __cordl_internal_get_itemsRemoved() const;

  constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*& __cordl_internal_get_itemsRemoved();

  constexpr ::System::Action* const& __cordl_internal_get_itemsSourceSizeChanged() const;

  constexpr ::System::Action*& __cordl_internal_get_itemsSourceSizeChanged();

  constexpr ::UnityEngine::UIElements::Button* const& __cordl_internal_get_m_AddButton() const;

  constexpr ::UnityEngine::UIElements::Button*& __cordl_internal_get_m_AddButton();

  constexpr bool const& __cordl_internal_get_m_AllowAdd() const;

  constexpr bool& __cordl_internal_get_m_AllowAdd();

  constexpr bool const& __cordl_internal_get_m_AllowRemove() const;

  constexpr bool& __cordl_internal_get_m_AllowRemove();

  constexpr ::UnityEngine::UIElements::TextField* const& __cordl_internal_get_m_ArraySizeField() const;

  constexpr ::UnityEngine::UIElements::TextField*& __cordl_internal_get_m_ArraySizeField();

  constexpr ::UnityEngine::UIElements::BindingSourceSelectionMode const& __cordl_internal_get_m_BindingSourceSelectionMode() const;

  constexpr ::UnityEngine::UIElements::BindingSourceSelectionMode& __cordl_internal_get_m_BindingSourceSelectionMode();

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

  constexpr ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* const& __cordl_internal_get_m_MakeFooter() const;

  constexpr ::System::Func_1<::UnityEngine::UIElements::VisualElement*>*& __cordl_internal_get_m_MakeFooter();

  constexpr ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* const& __cordl_internal_get_m_MakeHeader() const;

  constexpr ::System::Func_1<::UnityEngine::UIElements::VisualElement*>*& __cordl_internal_get_m_MakeHeader();

  constexpr ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* const& __cordl_internal_get_m_MakeNoneElement() const;

  constexpr ::System::Func_1<::UnityEngine::UIElements::VisualElement*>*& __cordl_internal_get_m_MakeNoneElement();

  constexpr ::StringW const& __cordl_internal_get_m_MaxMultiEditStr() const;

  constexpr ::StringW& __cordl_internal_get_m_MaxMultiEditStr();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_NoneElement() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_NoneElement();

  constexpr ::System::Action_1<::UnityEngine::UIElements::BaseListView*>* const& __cordl_internal_get_m_OnAdd() const;

  constexpr ::System::Action_1<::UnityEngine::UIElements::BaseListView*>*& __cordl_internal_get_m_OnAdd();

  constexpr ::System::Action_1<::UnityEngine::UIElements::BaseListView*>* const& __cordl_internal_get_m_OnRemove() const;

  constexpr ::System::Action_1<::UnityEngine::UIElements::BaseListView*>*& __cordl_internal_get_m_OnRemove();

  constexpr ::System::Action_2<::UnityEngine::UIElements::BaseListView*, ::UnityEngine::UIElements::Button*>* const& __cordl_internal_get_m_OverridingAddButtonBehavior() const;

  constexpr ::System::Action_2<::UnityEngine::UIElements::BaseListView*, ::UnityEngine::UIElements::Button*>*& __cordl_internal_get_m_OverridingAddButtonBehavior();

  constexpr ::UnityEngine::UIElements::Button* const& __cordl_internal_get_m_RemoveButton() const;

  constexpr ::UnityEngine::UIElements::Button*& __cordl_internal_get_m_RemoveButton();

  constexpr ::UnityEngine::UIElements::ListViewReorderMode const& __cordl_internal_get_m_ReorderMode() const;

  constexpr ::UnityEngine::UIElements::ListViewReorderMode& __cordl_internal_get_m_ReorderMode();

  constexpr bool const& __cordl_internal_get_m_ShowAddRemoveFooter() const;

  constexpr bool& __cordl_internal_get_m_ShowAddRemoveFooter();

  constexpr bool const& __cordl_internal_get_m_ShowBoundCollectionSize() const;

  constexpr bool& __cordl_internal_get_m_ShowBoundCollectionSize();

  constexpr bool const& __cordl_internal_get_m_ShowFoldoutHeader() const;

  constexpr bool& __cordl_internal_get_m_ShowFoldoutHeader();

  constexpr ::System::Action* const& __cordl_internal_get_m_TrackCount() const;

  constexpr ::System::Action*& __cordl_internal_get_m_TrackCount();

  constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem* const& __cordl_internal_get_m_TrackedItem() const;

  constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem*& __cordl_internal_get_m_TrackedItem();

  constexpr ::System::Func_1<bool>* const& __cordl_internal_get_m_WhileAutoAssign() const;

  constexpr ::System::Func_1<bool>*& __cordl_internal_get_m_WhileAutoAssign();

  constexpr ::System::Action* const& __cordl_internal_get_reorderModeChanged() const;

  constexpr ::System::Action*& __cordl_internal_get_reorderModeChanged();

  constexpr void __cordl_internal_set_drawnFooter(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_drawnHeader(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_itemsAdded(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* value);

  constexpr void __cordl_internal_set_itemsRemoved(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* value);

  constexpr void __cordl_internal_set_itemsSourceSizeChanged(::System::Action* value);

  constexpr void __cordl_internal_set_m_AddButton(::UnityEngine::UIElements::Button* value);

  constexpr void __cordl_internal_set_m_AllowAdd(bool value);

  constexpr void __cordl_internal_set_m_AllowRemove(bool value);

  constexpr void __cordl_internal_set_m_ArraySizeField(::UnityEngine::UIElements::TextField* value);

  constexpr void __cordl_internal_set_m_BindingSourceSelectionMode(::UnityEngine::UIElements::BindingSourceSelectionMode value);

  constexpr void __cordl_internal_set_m_Foldout(::UnityEngine::UIElements::Foldout* value);

  constexpr void __cordl_internal_set_m_Footer(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_HeaderTitle(::StringW value);

  constexpr void __cordl_internal_set_m_IsOverMultiEditLimit(bool value);

  constexpr void __cordl_internal_set_m_ItemAddedCallback(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* value);

  constexpr void __cordl_internal_set_m_ItemRemovedCallback(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* value);

  constexpr void __cordl_internal_set_m_ItemsSourceSizeChangedCallback(::System::Action* value);

  constexpr void __cordl_internal_set_m_ListViewLabel(::UnityEngine::UIElements::Label* value);

  constexpr void __cordl_internal_set_m_MakeFooter(::System::Func_1<::UnityEngine::UIElements::VisualElement*>* value);

  constexpr void __cordl_internal_set_m_MakeHeader(::System::Func_1<::UnityEngine::UIElements::VisualElement*>* value);

  constexpr void __cordl_internal_set_m_MakeNoneElement(::System::Func_1<::UnityEngine::UIElements::VisualElement*>* value);

  constexpr void __cordl_internal_set_m_MaxMultiEditStr(::StringW value);

  constexpr void __cordl_internal_set_m_NoneElement(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_OnAdd(::System::Action_1<::UnityEngine::UIElements::BaseListView*>* value);

  constexpr void __cordl_internal_set_m_OnRemove(::System::Action_1<::UnityEngine::UIElements::BaseListView*>* value);

  constexpr void __cordl_internal_set_m_OverridingAddButtonBehavior(::System::Action_2<::UnityEngine::UIElements::BaseListView*, ::UnityEngine::UIElements::Button*>* value);

  constexpr void __cordl_internal_set_m_RemoveButton(::UnityEngine::UIElements::Button* value);

  constexpr void __cordl_internal_set_m_ReorderMode(::UnityEngine::UIElements::ListViewReorderMode value);

  constexpr void __cordl_internal_set_m_ShowAddRemoveFooter(bool value);

  constexpr void __cordl_internal_set_m_ShowBoundCollectionSize(bool value);

  constexpr void __cordl_internal_set_m_ShowFoldoutHeader(bool value);

  constexpr void __cordl_internal_set_m_TrackCount(::System::Action* value);

  constexpr void __cordl_internal_set_m_TrackedItem(::UnityEngine::UIElements::IVisualElementScheduledItem* value);

  constexpr void __cordl_internal_set_m_WhileAutoAssign(::System::Func_1<bool>* value);

  constexpr void __cordl_internal_set_reorderModeChanged(::System::Action* value);

  /// @brief Method .ctor, addr 0x6a2707c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6a27088, size 0xf8, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IList* itemsSource, float_t itemHeight);

  /// @brief Method <get_trackCount>b__65_0, addr 0x6a284f0, size 0x118, virtual false, abstract: false, final false
  inline void _get_trackCount_b__65_0();

  /// @brief Method <get_untilManualBindingSourceSelectionMode>b__68_0, addr 0x6a28608, size 0x10, virtual false, abstract: false, final false
  inline bool _get_untilManualBindingSourceSelectionMode_b__68_0();

  /// @brief Method add_reorderModeChanged, addr 0x6a1fd24, size 0xac, virtual false, abstract: false, final false
  inline void add_reorderModeChanged(::System::Action* value);

  static inline ::UnityEngine::UIElements::BindingId getStaticF_allowAddProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_allowRemoveProperty();

  static inline ::StringW getStaticF_arraySizeFieldUssClassName();

  static inline ::StringW getStaticF_arraySizeFieldWithFooterUssClassName();

  static inline ::StringW getStaticF_arraySizeFieldWithHeaderUssClassName();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_bindingSourceSelectionModeProperty();

  static inline ::StringW getStaticF_emptyLabelUssClassName();

  static inline ::StringW getStaticF_foldoutHeaderUssClassName();

  static inline ::StringW getStaticF_footerAddButtonName();

  static inline ::StringW getStaticF_footerRemoveButtonName();

  static inline ::StringW getStaticF_footerUssClassName();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_headerTitleProperty();

  static inline ::StringW getStaticF_itemUssClassName();

  static inline ::StringW getStaticF_k_EmptyListStr();

  static inline ::StringW getStaticF_k_SizeFieldLabel();

  static inline ::StringW getStaticF_listViewWithFooterUssClassName();

  static inline ::StringW getStaticF_listViewWithHeaderUssClassName();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_makeFooterProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_makeHeaderProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_makeNoneElementProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_onAddProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_onRemoveProperty();

  static inline ::StringW getStaticF_overMaxMultiEditLimitClassName();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_overridingAddButtonBehaviorProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_reorderModeProperty();

  static inline ::StringW getStaticF_reorderableItemContainerUssClassName();

  static inline ::StringW getStaticF_reorderableItemHandleBarUssClassName();

  static inline ::StringW getStaticF_reorderableItemHandleUssClassName();

  static inline ::StringW getStaticF_reorderableItemUssClassName();

  static inline ::StringW getStaticF_reorderableUssClassName();

  static inline ::StringW getStaticF_scrollViewWithFooterUssClassName();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_showAddRemoveFooterProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_showBoundCollectionSizeProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_showFoldoutHeaderProperty();

  static inline ::StringW getStaticF_ussClassName();

  /// @brief Method get_allowAdd, addr 0x6a26bcc, size 0x8, virtual false, abstract: false, final false
  inline bool get_allowAdd();

  /// @brief Method get_allowRemove, addr 0x6a26e04, size 0x8, virtual false, abstract: false, final false
  inline bool get_allowRemove();

  /// @brief Method get_autoAssignSource, addr 0x6a17aa0, size 0x10, virtual false, abstract: false, final false
  inline bool get_autoAssignSource();

  /// @brief Method get_bindingSourceSelectionMode, addr 0x6a25c7c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BindingSourceSelectionMode get_bindingSourceSelectionMode();

  /// @brief Method get_footer, addr 0x6a2677c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_footer();

  /// @brief Method get_headerTitle, addr 0x6a25434, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_headerTitle();

  /// @brief Method get_makeFooter, addr 0x6a256fc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* get_makeFooter();

  /// @brief Method get_makeHeader, addr 0x6a254f4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* get_makeHeader();

  /// @brief Method get_makeNoneElement, addr 0x6a26af4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* get_makeNoneElement();

  /// @brief Method get_onAdd, addr 0x6a26d40, size 0x8, virtual false, abstract: false, final false
  inline ::System::Action_1<::UnityEngine::UIElements::BaseListView*>* get_onAdd();

  /// @brief Method get_onRemove, addr 0x6a26eb4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Action_1<::UnityEngine::UIElements::BaseListView*>* get_onRemove();

  /// @brief Method get_overridingAddButtonBehavior, addr 0x6a26c7c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Action_2<::UnityEngine::UIElements::BaseListView*, ::UnityEngine::UIElements::Button*>* get_overridingAddButtonBehavior();

  /// @brief Method get_reorderMode, addr 0x6a26a18, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ListViewReorderMode get_reorderMode();

  /// @brief Method get_showAddRemoveFooter, addr 0x6a24f6c, size 0x10, virtual false, abstract: false, final false
  inline bool get_showAddRemoveFooter();

  /// @brief Method get_showBoundCollectionSize, addr 0x6a24464, size 0x8, virtual false, abstract: false, final false
  inline bool get_showBoundCollectionSize();

  /// @brief Method get_showFoldoutHeader, addr 0x6a24834, size 0x8, virtual false, abstract: false, final false
  inline bool get_showFoldoutHeader();

  /// @brief Method get_trackCount, addr 0x6a25b0c, size 0xb8, virtual false, abstract: false, final false
  inline ::System::Action* get_trackCount();

  /// @brief Method get_trackItemCount, addr 0x6a259c0, size 0x14c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::IVisualElementScheduledItem* get_trackItemCount();

  /// @brief Method get_untilManualBindingSourceSelectionMode, addr 0x6a25bc4, size 0xb8, virtual false, abstract: false, final false
  inline ::System::Func_1<bool>* get_untilManualBindingSourceSelectionMode();

  /// @brief Method get_viewController, addr 0x6a2606c, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BaseListViewController* get_viewController();

  /// @brief Method remove_reorderModeChanged, addr 0x6a1fe88, size 0xac, virtual false, abstract: false, final false
  inline void remove_reorderModeChanged(::System::Action* value);

  static inline void setStaticF_allowAddProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_allowRemoveProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_arraySizeFieldUssClassName(::StringW value);

  static inline void setStaticF_arraySizeFieldWithFooterUssClassName(::StringW value);

  static inline void setStaticF_arraySizeFieldWithHeaderUssClassName(::StringW value);

  static inline void setStaticF_bindingSourceSelectionModeProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_emptyLabelUssClassName(::StringW value);

  static inline void setStaticF_foldoutHeaderUssClassName(::StringW value);

  static inline void setStaticF_footerAddButtonName(::StringW value);

  static inline void setStaticF_footerRemoveButtonName(::StringW value);

  static inline void setStaticF_footerUssClassName(::StringW value);

  static inline void setStaticF_headerTitleProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_itemUssClassName(::StringW value);

  static inline void setStaticF_k_EmptyListStr(::StringW value);

  static inline void setStaticF_k_SizeFieldLabel(::StringW value);

  static inline void setStaticF_listViewWithFooterUssClassName(::StringW value);

  static inline void setStaticF_listViewWithHeaderUssClassName(::StringW value);

  static inline void setStaticF_makeFooterProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_makeHeaderProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_makeNoneElementProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_onAddProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_onRemoveProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_overMaxMultiEditLimitClassName(::StringW value);

  static inline void setStaticF_overridingAddButtonBehaviorProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_reorderModeProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_reorderableItemContainerUssClassName(::StringW value);

  static inline void setStaticF_reorderableItemHandleBarUssClassName(::StringW value);

  static inline void setStaticF_reorderableItemHandleUssClassName(::StringW value);

  static inline void setStaticF_reorderableItemUssClassName(::StringW value);

  static inline void setStaticF_reorderableUssClassName(::StringW value);

  static inline void setStaticF_scrollViewWithFooterUssClassName(::StringW value);

  static inline void setStaticF_showAddRemoveFooterProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_showBoundCollectionSizeProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_showFoldoutHeaderProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_ussClassName(::StringW value);

  /// @brief Method set_allowAdd, addr 0x6a26bd4, size 0xa8, virtual false, abstract: false, final false
  inline void set_allowAdd(bool value);

  /// @brief Method set_allowRemove, addr 0x6a26e0c, size 0xa8, virtual false, abstract: false, final false
  inline void set_allowRemove(bool value);

  /// @brief Method set_bindingSourceSelectionMode, addr 0x6a25c84, size 0x134, virtual false, abstract: false, final false
  inline void set_bindingSourceSelectionMode(::UnityEngine::UIElements::BindingSourceSelectionMode value);

  /// @brief Method set_headerTitle, addr 0x6a2543c, size 0xb8, virtual false, abstract: false, final false
  inline void set_headerTitle(::StringW value);

  /// @brief Method set_makeFooter, addr 0x6a25704, size 0x1bc, virtual false, abstract: false, final false
  inline void set_makeFooter(::System::Func_1<::UnityEngine::UIElements::VisualElement*>* value);

  /// @brief Method set_makeHeader, addr 0x6a254fc, size 0x200, virtual false, abstract: false, final false
  inline void set_makeHeader(::System::Func_1<::UnityEngine::UIElements::VisualElement*>* value);

  /// @brief Method set_makeNoneElement, addr 0x6a26afc, size 0xd0, virtual false, abstract: false, final false
  inline void set_makeNoneElement(::System::Func_1<::UnityEngine::UIElements::VisualElement*>* value);

  /// @brief Method set_onAdd, addr 0x6a26d48, size 0xbc, virtual false, abstract: false, final false
  inline void set_onAdd(::System::Action_1<::UnityEngine::UIElements::BaseListView*>* value);

  /// @brief Method set_onRemove, addr 0x6a26ebc, size 0xbc, virtual false, abstract: false, final false
  inline void set_onRemove(::System::Action_1<::UnityEngine::UIElements::BaseListView*>* value);

  /// @brief Method set_overridingAddButtonBehavior, addr 0x6a26c84, size 0xbc, virtual false, abstract: false, final false
  inline void set_overridingAddButtonBehavior(::System::Action_2<::UnityEngine::UIElements::BaseListView*, ::UnityEngine::UIElements::Button*>* value);

  /// @brief Method set_reorderMode, addr 0x6a26a20, size 0xd4, virtual false, abstract: false, final false
  inline void set_reorderMode(::UnityEngine::UIElements::ListViewReorderMode value);

  /// @brief Method set_showAddRemoveFooter, addr 0x6a258c0, size 0x100, virtual false, abstract: false, final false
  inline void set_showAddRemoveFooter(bool value);

  /// @brief Method set_showBoundCollectionSize, addr 0x6a2446c, size 0x9c, virtual false, abstract: false, final false
  inline void set_showBoundCollectionSize(bool value);

  /// @brief Method set_showFoldoutHeader, addr 0x6a2483c, size 0x280, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4110 };

  /// @brief Field m_ShowBoundCollectionSize, offset: 0x590, size: 0x1, def value: None
  bool ___m_ShowBoundCollectionSize;

  /// @brief Field m_ShowFoldoutHeader, offset: 0x591, size: 0x1, def value: None
  bool ___m_ShowFoldoutHeader;

  /// @brief Field m_HeaderTitle, offset: 0x598, size: 0x8, def value: None
  ::StringW ___m_HeaderTitle;

  /// @brief Field drawnHeader, offset: 0x5a0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___drawnHeader;

  /// @brief Field m_MakeHeader, offset: 0x5a8, size: 0x8, def value: None
  ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* ___m_MakeHeader;

  /// @brief Field drawnFooter, offset: 0x5b0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___drawnFooter;

  /// @brief Field m_MakeFooter, offset: 0x5b8, size: 0x8, def value: None
  ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* ___m_MakeFooter;

  /// @brief Field m_ShowAddRemoveFooter, offset: 0x5c0, size: 0x1, def value: None
  bool ___m_ShowAddRemoveFooter;

  /// @brief Field itemsAdded, offset: 0x5c8, size: 0x8, def value: None
  ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* ___itemsAdded;

  /// @brief Field itemsRemoved, offset: 0x5d0, size: 0x8, def value: None
  ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* ___itemsRemoved;

  /// @brief Field itemsSourceSizeChanged, offset: 0x5d8, size: 0x8, def value: None
  ::System::Action* ___itemsSourceSizeChanged;

  /// @brief Field m_TrackedItem, offset: 0x5e0, size: 0x8, def value: None
  ::UnityEngine::UIElements::IVisualElementScheduledItem* ___m_TrackedItem;

  /// @brief Field m_TrackCount, offset: 0x5e8, size: 0x8, def value: None
  ::System::Action* ___m_TrackCount;

  /// @brief Field m_WhileAutoAssign, offset: 0x5f0, size: 0x8, def value: None
  ::System::Func_1<bool>* ___m_WhileAutoAssign;

  /// @brief Field m_BindingSourceSelectionMode, offset: 0x5f8, size: 0x4, def value: None
  ::UnityEngine::UIElements::BindingSourceSelectionMode ___m_BindingSourceSelectionMode;

  /// @brief Field m_ListViewLabel, offset: 0x600, size: 0x8, def value: None
  ::UnityEngine::UIElements::Label* ___m_ListViewLabel;

  /// @brief Field m_Foldout, offset: 0x608, size: 0x8, def value: None
  ::UnityEngine::UIElements::Foldout* ___m_Foldout;

  /// @brief Field m_ArraySizeField, offset: 0x610, size: 0x8, def value: None
  ::UnityEngine::UIElements::TextField* ___m_ArraySizeField;

  /// @brief Field m_IsOverMultiEditLimit, offset: 0x618, size: 0x1, def value: None
  bool ___m_IsOverMultiEditLimit;

  /// @brief Field m_Footer, offset: 0x620, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_Footer;

  /// @brief Field m_AddButton, offset: 0x628, size: 0x8, def value: None
  ::UnityEngine::UIElements::Button* ___m_AddButton;

  /// @brief Field m_RemoveButton, offset: 0x630, size: 0x8, def value: None
  ::UnityEngine::UIElements::Button* ___m_RemoveButton;

  /// @brief Field m_ItemAddedCallback, offset: 0x638, size: 0x8, def value: None
  ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* ___m_ItemAddedCallback;

  /// @brief Field m_ItemRemovedCallback, offset: 0x640, size: 0x8, def value: None
  ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* ___m_ItemRemovedCallback;

  /// @brief Field m_ItemsSourceSizeChangedCallback, offset: 0x648, size: 0x8, def value: None
  ::System::Action* ___m_ItemsSourceSizeChangedCallback;

  /// @brief Field m_ReorderMode, offset: 0x650, size: 0x4, def value: None
  ::UnityEngine::UIElements::ListViewReorderMode ___m_ReorderMode;

  /// @brief Field reorderModeChanged, offset: 0x658, size: 0x8, def value: None
  ::System::Action* ___reorderModeChanged;

  /// @brief Field m_NoneElement, offset: 0x660, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_NoneElement;

  /// @brief Field m_MakeNoneElement, offset: 0x668, size: 0x8, def value: None
  ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* ___m_MakeNoneElement;

  /// @brief Field m_AllowAdd, offset: 0x670, size: 0x1, def value: None
  bool ___m_AllowAdd;

  /// @brief Field m_OverridingAddButtonBehavior, offset: 0x678, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::UIElements::BaseListView*, ::UnityEngine::UIElements::Button*>* ___m_OverridingAddButtonBehavior;

  /// @brief Field m_OnAdd, offset: 0x680, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::UIElements::BaseListView*>* ___m_OnAdd;

  /// @brief Field m_AllowRemove, offset: 0x688, size: 0x1, def value: None
  bool ___m_AllowRemove;

  /// @brief Field m_OnRemove, offset: 0x690, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::UIElements::BaseListView*>* ___m_OnRemove;

  /// @brief Field m_MaxMultiEditStr, offset: 0x698, size: 0x8, def value: None
  ::StringW ___m_MaxMultiEditStr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___m_ShowBoundCollectionSize) == 0x590, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___m_ShowFoldoutHeader) == 0x591, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___m_HeaderTitle) == 0x598, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___drawnHeader) == 0x5a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___m_MakeHeader) == 0x5a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___drawnFooter) == 0x5b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___m_MakeFooter) == 0x5b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___m_ShowAddRemoveFooter) == 0x5c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___itemsAdded) == 0x5c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___itemsRemoved) == 0x5d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___itemsSourceSizeChanged) == 0x5d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___m_TrackedItem) == 0x5e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___m_TrackCount) == 0x5e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___m_WhileAutoAssign) == 0x5f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___m_BindingSourceSelectionMode) == 0x5f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___m_ListViewLabel) == 0x600, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___m_Foldout) == 0x608, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___m_ArraySizeField) == 0x610, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___m_IsOverMultiEditLimit) == 0x618, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___m_Footer) == 0x620, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___m_AddButton) == 0x628, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___m_RemoveButton) == 0x630, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___m_ItemAddedCallback) == 0x638, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___m_ItemRemovedCallback) == 0x640, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___m_ItemsSourceSizeChangedCallback) == 0x648, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___m_ReorderMode) == 0x650, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___reorderModeChanged) == 0x658, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___m_NoneElement) == 0x660, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___m_MakeNoneElement) == 0x668, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___m_AllowAdd) == 0x670, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___m_OverridingAddButtonBehavior) == 0x678, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___m_OnAdd) == 0x680, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___m_AllowRemove) == 0x688, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___m_OnRemove) == 0x690, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseListView, ___m_MaxMultiEditStr) == 0x698, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BaseListView, 0x6a0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::BaseListView);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BaseListView*, "UnityEngine.UIElements", "BaseListView");
NEED_NO_BOX(::UnityEngine::UIElements::BaseListView_UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BaseListView_UxmlTraits*, "UnityEngine.UIElements", "BaseListView/UxmlTraits");
