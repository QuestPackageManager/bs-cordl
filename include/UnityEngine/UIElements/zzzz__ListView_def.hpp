#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseVerticalCollectionView_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindableElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__ListViewReorderMode_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListView)
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
struct AlternatingRowBackground;
}
namespace UnityEngine::UIElements {
class Button;
}
namespace UnityEngine::UIElements {
template <typename T> class ChangeEvent_1;
}
namespace UnityEngine::UIElements {
struct CollectionVirtualizationMethod;
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
class ListViewController;
}
namespace UnityEngine::UIElements {
class ListViewDragger;
}
namespace UnityEngine::UIElements {
struct ListViewReorderMode;
}
namespace UnityEngine::UIElements {
struct SelectionType;
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
class UxmlIntAttributeDescription;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class __ListView__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __ListView__UxmlTraits;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ListView;
}
namespace UnityEngine::UIElements {
class __ListView__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __ListView__UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ListView);
MARK_REF_PTR_T(::UnityEngine::UIElements::__ListView__UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::__ListView__UxmlTraits);
// Type: ::UxmlFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::ListView::UxmlFactory*
class CORDL_TYPE __ListView__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::ListView*, ::UnityEngine::UIElements::__ListView__UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__ListView__UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x337dc30, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ListView__UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ListView__UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ListView__UxmlFactory(__ListView__UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ListView__UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ListView__UxmlFactory(__ListView__UxmlFactory const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__ListView__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::UxmlTraits
// SizeInfo { instance_size: 216, native_size: -1, calculated_instance_size: 216, calculated_native_size: 216, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::ListView::UxmlTraits*
class CORDL_TYPE __ListView__UxmlTraits : public ::UnityEngine::UIElements::__BindableElement__UxmlTraits {
public:
  // Declarations
  /// @brief Field m_FixedItemHeight, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FixedItemHeight, put = __cordl_internal_set_m_FixedItemHeight))::UnityEngine::UIElements::UxmlIntAttributeDescription* m_FixedItemHeight;

  /// @brief Field m_HeaderTitle, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HeaderTitle, put = __cordl_internal_set_m_HeaderTitle))::UnityEngine::UIElements::UxmlStringAttributeDescription* m_HeaderTitle;

  /// @brief Field m_HorizontalScrollingEnabled, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HorizontalScrollingEnabled,
                      put = __cordl_internal_set_m_HorizontalScrollingEnabled))::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_HorizontalScrollingEnabled;

  /// @brief Field m_ReorderMode, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ReorderMode,
                      put = __cordl_internal_set_m_ReorderMode))::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ListViewReorderMode>* m_ReorderMode;

  /// @brief Field m_Reorderable, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Reorderable, put = __cordl_internal_set_m_Reorderable))::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_Reorderable;

  /// @brief Field m_SelectionType, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SelectionType,
                      put = __cordl_internal_set_m_SelectionType))::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SelectionType>* m_SelectionType;

  /// @brief Field m_ShowAddRemoveFooter, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShowAddRemoveFooter,
                      put = __cordl_internal_set_m_ShowAddRemoveFooter))::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_ShowAddRemoveFooter;

  /// @brief Field m_ShowAlternatingRowBackgrounds, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShowAlternatingRowBackgrounds, put = __cordl_internal_set_m_ShowAlternatingRowBackgrounds))::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<
      ::UnityEngine::UIElements::AlternatingRowBackground>* m_ShowAlternatingRowBackgrounds;

  /// @brief Field m_ShowBorder, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShowBorder, put = __cordl_internal_set_m_ShowBorder))::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_ShowBorder;

  /// @brief Field m_ShowBoundCollectionSize, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShowBoundCollectionSize,
                      put = __cordl_internal_set_m_ShowBoundCollectionSize))::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_ShowBoundCollectionSize;

  /// @brief Field m_ShowFoldoutHeader, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShowFoldoutHeader, put = __cordl_internal_set_m_ShowFoldoutHeader))::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_ShowFoldoutHeader;

  /// @brief Field m_VirtualizationMethod, offset 0x80, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_VirtualizationMethod,
      put = __cordl_internal_set_m_VirtualizationMethod))::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::CollectionVirtualizationMethod>* m_VirtualizationMethod;

  /// @brief Method Init, addr 0x337dc78, size 0x3d4, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::__ListView__UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& __cordl_internal_get_m_FixedItemHeight();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlIntAttributeDescription*> const& __cordl_internal_get_m_FixedItemHeight() const;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_HeaderTitle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> const& __cordl_internal_get_m_HeaderTitle() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_HorizontalScrollingEnabled();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> const& __cordl_internal_get_m_HorizontalScrollingEnabled() const;

  constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ListViewReorderMode>*& __cordl_internal_get_m_ReorderMode();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ListViewReorderMode>*> const&
  __cordl_internal_get_m_ReorderMode() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_Reorderable();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> const& __cordl_internal_get_m_Reorderable() const;

  constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SelectionType>*& __cordl_internal_get_m_SelectionType();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SelectionType>*> const&
  __cordl_internal_get_m_SelectionType() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_ShowAddRemoveFooter();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> const& __cordl_internal_get_m_ShowAddRemoveFooter() const;

  constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::AlternatingRowBackground>*& __cordl_internal_get_m_ShowAlternatingRowBackgrounds();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::AlternatingRowBackground>*> const&
  __cordl_internal_get_m_ShowAlternatingRowBackgrounds() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_ShowBorder();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> const& __cordl_internal_get_m_ShowBorder() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_ShowBoundCollectionSize();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> const& __cordl_internal_get_m_ShowBoundCollectionSize() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_ShowFoldoutHeader();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> const& __cordl_internal_get_m_ShowFoldoutHeader() const;

  constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::CollectionVirtualizationMethod>*& __cordl_internal_get_m_VirtualizationMethod();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::CollectionVirtualizationMethod>*> const&
  __cordl_internal_get_m_VirtualizationMethod() const;

  constexpr void __cordl_internal_set_m_FixedItemHeight(::UnityEngine::UIElements::UxmlIntAttributeDescription* value);

  constexpr void __cordl_internal_set_m_HeaderTitle(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  constexpr void __cordl_internal_set_m_HorizontalScrollingEnabled(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_ReorderMode(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ListViewReorderMode>* value);

  constexpr void __cordl_internal_set_m_Reorderable(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_SelectionType(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SelectionType>* value);

  constexpr void __cordl_internal_set_m_ShowAddRemoveFooter(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_ShowAlternatingRowBackgrounds(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::AlternatingRowBackground>* value);

  constexpr void __cordl_internal_set_m_ShowBorder(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_ShowBoundCollectionSize(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_ShowFoldoutHeader(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_VirtualizationMethod(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::CollectionVirtualizationMethod>* value);

  /// @brief Method .ctor, addr 0x337e04c, size 0x51c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ListView__UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ListView__UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ListView__UxmlTraits(__ListView__UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ListView__UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ListView__UxmlTraits(__ListView__UxmlTraits const&) = delete;

  /// @brief Field m_FixedItemHeight, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlIntAttributeDescription* ___m_FixedItemHeight;

  /// @brief Field m_VirtualizationMethod, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::CollectionVirtualizationMethod>* ___m_VirtualizationMethod;

  /// @brief Field m_ShowBorder, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_ShowBorder;

  /// @brief Field m_SelectionType, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SelectionType>* ___m_SelectionType;

  /// @brief Field m_ShowAlternatingRowBackgrounds, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::AlternatingRowBackground>* ___m_ShowAlternatingRowBackgrounds;

  /// @brief Field m_ShowFoldoutHeader, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_ShowFoldoutHeader;

  /// @brief Field m_HeaderTitle, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_HeaderTitle;

  /// @brief Field m_ShowAddRemoveFooter, offset: 0xb0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_ShowAddRemoveFooter;

  /// @brief Field m_Reorderable, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_Reorderable;

  /// @brief Field m_ReorderMode, offset: 0xc0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ListViewReorderMode>* ___m_ReorderMode;

  /// @brief Field m_ShowBoundCollectionSize, offset: 0xc8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_ShowBoundCollectionSize;

  /// @brief Field m_HorizontalScrollingEnabled, offset: 0xd0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_HorizontalScrollingEnabled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__ListView__UxmlTraits, 0xd8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__ListView__UxmlTraits, ___m_FixedItemHeight) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__ListView__UxmlTraits, ___m_VirtualizationMethod) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__ListView__UxmlTraits, ___m_ShowBorder) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__ListView__UxmlTraits, ___m_SelectionType) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__ListView__UxmlTraits, ___m_ShowAlternatingRowBackgrounds) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__ListView__UxmlTraits, ___m_ShowFoldoutHeader) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__ListView__UxmlTraits, ___m_HeaderTitle) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__ListView__UxmlTraits, ___m_ShowAddRemoveFooter) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__ListView__UxmlTraits, ___m_Reorderable) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__ListView__UxmlTraits, ___m_ReorderMode) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__ListView__UxmlTraits, ___m_ShowBoundCollectionSize) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__ListView__UxmlTraits, ___m_HorizontalScrollingEnabled) == 0xd0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::ListView
// SizeInfo { instance_size: 1288, native_size: -1, calculated_instance_size: 1288, calculated_native_size: 1284, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::ListView*
class CORDL_TYPE ListView : public ::UnityEngine::UIElements::BaseVerticalCollectionView {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::__ListView__UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::__ListView__UxmlTraits;

  /// @brief Field arraySizeFieldUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_arraySizeFieldUssClassName, put = setStaticF_arraySizeFieldUssClassName))::StringW arraySizeFieldUssClassName;

  /// @brief Field emptyLabelUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_emptyLabelUssClassName, put = setStaticF_emptyLabelUssClassName))::StringW emptyLabelUssClassName;

  /// @brief Field foldoutHeaderUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_foldoutHeaderUssClassName, put = setStaticF_foldoutHeaderUssClassName))::StringW foldoutHeaderUssClassName;

  /// @brief Field footerAddButtonName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_footerAddButtonName, put = setStaticF_footerAddButtonName))::StringW footerAddButtonName;

  /// @brief Field footerRemoveButtonName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_footerRemoveButtonName, put = setStaticF_footerRemoveButtonName))::StringW footerRemoveButtonName;

  /// @brief Field footerUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_footerUssClassName, put = setStaticF_footerUssClassName))::StringW footerUssClassName;

  __declspec(property(put = set_headerTitle))::StringW headerTitle;

  /// @brief Field itemUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_itemUssClassName, put = setStaticF_itemUssClassName))::StringW itemUssClassName;

  /// @brief Field itemsAdded, offset 0x4a0, size 0x8
  __declspec(property(get = __cordl_internal_get_itemsAdded, put = __cordl_internal_set_itemsAdded))::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* itemsAdded;

  /// @brief Field itemsRemoved, offset 0x4a8, size 0x8
  __declspec(property(get = __cordl_internal_get_itemsRemoved, put = __cordl_internal_set_itemsRemoved))::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* itemsRemoved;

  /// @brief Field listViewWithFooterUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_listViewWithFooterUssClassName, put = setStaticF_listViewWithFooterUssClassName))::StringW listViewWithFooterUssClassName;

  /// @brief Field listViewWithHeaderUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_listViewWithHeaderUssClassName, put = setStaticF_listViewWithHeaderUssClassName))::StringW listViewWithHeaderUssClassName;

  /// @brief Field m_AddButton, offset 0x4d0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AddButton, put = __cordl_internal_set_m_AddButton))::UnityEngine::UIElements::Button* m_AddButton;

  /// @brief Field m_ArraySizeField, offset 0x4c0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ArraySizeField, put = __cordl_internal_set_m_ArraySizeField))::UnityEngine::UIElements::TextField* m_ArraySizeField;

  /// @brief Field m_EmptyListLabel, offset 0x4b0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EmptyListLabel, put = __cordl_internal_set_m_EmptyListLabel))::UnityEngine::UIElements::Label* m_EmptyListLabel;

  /// @brief Field m_Foldout, offset 0x4b8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Foldout, put = __cordl_internal_set_m_Foldout))::UnityEngine::UIElements::Foldout* m_Foldout;

  /// @brief Field m_Footer, offset 0x4c8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Footer, put = __cordl_internal_set_m_Footer))::UnityEngine::UIElements::VisualElement* m_Footer;

  /// @brief Field m_HeaderTitle, offset 0x498, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HeaderTitle, put = __cordl_internal_set_m_HeaderTitle))::StringW m_HeaderTitle;

  /// @brief Field m_ItemAddedCallback, offset 0x4e0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ItemAddedCallback,
                      put = __cordl_internal_set_m_ItemAddedCallback))::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* m_ItemAddedCallback;

  /// @brief Field m_ItemRemovedCallback, offset 0x4e8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ItemRemovedCallback,
                      put = __cordl_internal_set_m_ItemRemovedCallback))::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* m_ItemRemovedCallback;

  /// @brief Field m_ItemsSourceSizeChangedCallback, offset 0x4f0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ItemsSourceSizeChangedCallback, put = __cordl_internal_set_m_ItemsSourceSizeChangedCallback))::System::Action* m_ItemsSourceSizeChangedCallback;

  /// @brief Field m_ListViewController, offset 0x4f8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ListViewController, put = __cordl_internal_set_m_ListViewController))::UnityEngine::UIElements::ListViewController* m_ListViewController;

  /// @brief Field m_RemoveButton, offset 0x4d8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RemoveButton, put = __cordl_internal_set_m_RemoveButton))::UnityEngine::UIElements::Button* m_RemoveButton;

  /// @brief Field m_ReorderMode, offset 0x500, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ReorderMode, put = __cordl_internal_set_m_ReorderMode))::UnityEngine::UIElements::ListViewReorderMode m_ReorderMode;

  /// @brief Field m_ShowBoundCollectionSize, offset 0x494, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ShowBoundCollectionSize, put = __cordl_internal_set_m_ShowBoundCollectionSize)) bool m_ShowBoundCollectionSize;

  /// @brief Field m_ShowFoldoutHeader, offset 0x495, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ShowFoldoutHeader, put = __cordl_internal_set_m_ShowFoldoutHeader)) bool m_ShowFoldoutHeader;

  __declspec(property(get = get_reorderMode, put = set_reorderMode))::UnityEngine::UIElements::ListViewReorderMode reorderMode;

  /// @brief Field reorderableItemContainerUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_reorderableItemContainerUssClassName, put = setStaticF_reorderableItemContainerUssClassName))::StringW reorderableItemContainerUssClassName;

  /// @brief Field reorderableItemHandleBarUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_reorderableItemHandleBarUssClassName, put = setStaticF_reorderableItemHandleBarUssClassName))::StringW reorderableItemHandleBarUssClassName;

  /// @brief Field reorderableItemHandleUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_reorderableItemHandleUssClassName, put = setStaticF_reorderableItemHandleUssClassName))::StringW reorderableItemHandleUssClassName;

  /// @brief Field reorderableItemUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_reorderableItemUssClassName, put = setStaticF_reorderableItemUssClassName))::StringW reorderableItemUssClassName;

  /// @brief Field reorderableUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_reorderableUssClassName, put = setStaticF_reorderableUssClassName))::StringW reorderableUssClassName;

  /// @brief Field scrollViewWithFooterUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_scrollViewWithFooterUssClassName, put = setStaticF_scrollViewWithFooterUssClassName))::StringW scrollViewWithFooterUssClassName;

  __declspec(property(get = get_showAddRemoveFooter, put = set_showAddRemoveFooter)) bool showAddRemoveFooter;

  __declspec(property(get = get_showBoundCollectionSize, put = set_showBoundCollectionSize)) bool showBoundCollectionSize;

  __declspec(property(get = get_showFoldoutHeader, put = set_showFoldoutHeader)) bool showFoldoutHeader;

  __declspec(property(get = get_sourceIncludesArraySize)) bool sourceIncludesArraySize;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName))::StringW ussClassName;

  __declspec(property(get = get_viewController))::UnityEngine::UIElements::ListViewController* viewController;

  /// @brief Method AddItems, addr 0x337ce1c, size 0x24, virtual false, abstract: false, final false
  inline void AddItems(int32_t itemCount);

  /// @brief Method CreateDragAndDropController, addr 0x337d6f0, size 0x64, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::ICollectionDragAndDropController* CreateDragAndDropController();

  /// @brief Method CreateDragger, addr 0x337d650, size 0xa0, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::ListViewDragger* CreateDragger();

  /// @brief Method CreateViewController, addr 0x337d3b0, size 0x64, virtual true, abstract: false, final false
  inline void CreateViewController();

  /// @brief Method CreateVirtualizationController, addr 0x337d368, size 0x48, virtual true, abstract: false, final false
  inline void CreateVirtualizationController();

  /// @brief Method EnableFooter, addr 0x337c898, size 0x32c, virtual false, abstract: false, final false
  inline void EnableFooter(bool enabled);

  static inline ::UnityEngine::UIElements::ListView* New_ctor();

  /// @brief Method OnAddClicked, addr 0x337cf48, size 0x24c, virtual false, abstract: false, final false
  inline void OnAddClicked();

  /// @brief Method OnArraySizeFieldChanged, addr 0x337ce40, size 0x108, virtual false, abstract: false, final false
  inline void OnArraySizeFieldChanged(::UnityEngine::UIElements::ChangeEvent_1<::StringW>* evt);

  /// @brief Method OnItemAdded, addr 0x337d5d0, size 0x1c, virtual false, abstract: false, final false
  inline void OnItemAdded(::System::Collections::Generic::IEnumerable_1<int32_t>* indices);

  /// @brief Method OnItemsRemoved, addr 0x337d5ec, size 0x1c, virtual false, abstract: false, final false
  inline void OnItemsRemoved(::System::Collections::Generic::IEnumerable_1<int32_t>* indices);

  /// @brief Method OnItemsSourceSizeChanged, addr 0x337d608, size 0x8, virtual false, abstract: false, final false
  inline void OnItemsSourceSizeChanged();

  /// @brief Method OnRemoveClicked, addr 0x337d194, size 0x1cc, virtual false, abstract: false, final false
  inline void OnRemoveClicked();

  /// @brief Method PostRefresh, addr 0x337d7f0, size 0x24, virtual true, abstract: false, final false
  inline void PostRefresh();

  /// @brief Method SetViewController, addr 0x337d414, size 0x1bc, virtual false, abstract: false, final false
  inline void SetViewController(::UnityEngine::UIElements::ListViewController* controller);

  /// @brief Method SetupArraySizeField, addr 0x337bed0, size 0x1d4, virtual false, abstract: false, final false
  inline void SetupArraySizeField();

  /// @brief Method UpdateArraySizeField, addr 0x337cbc4, size 0x70, virtual false, abstract: false, final false
  inline void UpdateArraySizeField();

  /// @brief Method UpdateEmpty, addr 0x337c6cc, size 0x1bc, virtual false, abstract: false, final false
  inline void UpdateEmpty();

  /// @brief Method <OnAddClicked>b__35_0, addr 0x337db60, size 0xd0, virtual false, abstract: false, final false
  inline void _OnAddClicked_b__35_0();

  constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*& __cordl_internal_get_itemsAdded();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*> const& __cordl_internal_get_itemsAdded() const;

  constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*& __cordl_internal_get_itemsRemoved();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*> const& __cordl_internal_get_itemsRemoved() const;

  constexpr ::UnityEngine::UIElements::Button*& __cordl_internal_get_m_AddButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Button*> const& __cordl_internal_get_m_AddButton() const;

  constexpr ::UnityEngine::UIElements::TextField*& __cordl_internal_get_m_ArraySizeField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::TextField*> const& __cordl_internal_get_m_ArraySizeField() const;

  constexpr ::UnityEngine::UIElements::Label*& __cordl_internal_get_m_EmptyListLabel();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Label*> const& __cordl_internal_get_m_EmptyListLabel() const;

  constexpr ::UnityEngine::UIElements::Foldout*& __cordl_internal_get_m_Foldout();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Foldout*> const& __cordl_internal_get_m_Foldout() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_Footer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __cordl_internal_get_m_Footer() const;

  constexpr ::StringW const& __cordl_internal_get_m_HeaderTitle() const;

  constexpr ::StringW& __cordl_internal_get_m_HeaderTitle();

  constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*& __cordl_internal_get_m_ItemAddedCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*> const& __cordl_internal_get_m_ItemAddedCallback() const;

  constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*& __cordl_internal_get_m_ItemRemovedCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*> const& __cordl_internal_get_m_ItemRemovedCallback() const;

  constexpr ::System::Action*& __cordl_internal_get_m_ItemsSourceSizeChangedCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_m_ItemsSourceSizeChangedCallback() const;

  constexpr ::UnityEngine::UIElements::ListViewController*& __cordl_internal_get_m_ListViewController();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ListViewController*> const& __cordl_internal_get_m_ListViewController() const;

  constexpr ::UnityEngine::UIElements::Button*& __cordl_internal_get_m_RemoveButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Button*> const& __cordl_internal_get_m_RemoveButton() const;

  constexpr ::UnityEngine::UIElements::ListViewReorderMode const& __cordl_internal_get_m_ReorderMode() const;

  constexpr ::UnityEngine::UIElements::ListViewReorderMode& __cordl_internal_get_m_ReorderMode();

  constexpr bool const& __cordl_internal_get_m_ShowBoundCollectionSize() const;

  constexpr bool& __cordl_internal_get_m_ShowBoundCollectionSize();

  constexpr bool const& __cordl_internal_get_m_ShowFoldoutHeader() const;

  constexpr bool& __cordl_internal_get_m_ShowFoldoutHeader();

  constexpr void __cordl_internal_set_itemsAdded(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* value);

  constexpr void __cordl_internal_set_itemsRemoved(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* value);

  constexpr void __cordl_internal_set_m_AddButton(::UnityEngine::UIElements::Button* value);

  constexpr void __cordl_internal_set_m_ArraySizeField(::UnityEngine::UIElements::TextField* value);

  constexpr void __cordl_internal_set_m_EmptyListLabel(::UnityEngine::UIElements::Label* value);

  constexpr void __cordl_internal_set_m_Foldout(::UnityEngine::UIElements::Foldout* value);

  constexpr void __cordl_internal_set_m_Footer(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_HeaderTitle(::StringW value);

  constexpr void __cordl_internal_set_m_ItemAddedCallback(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* value);

  constexpr void __cordl_internal_set_m_ItemRemovedCallback(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* value);

  constexpr void __cordl_internal_set_m_ItemsSourceSizeChangedCallback(::System::Action* value);

  constexpr void __cordl_internal_set_m_ListViewController(::UnityEngine::UIElements::ListViewController* value);

  constexpr void __cordl_internal_set_m_RemoveButton(::UnityEngine::UIElements::Button* value);

  constexpr void __cordl_internal_set_m_ReorderMode(::UnityEngine::UIElements::ListViewReorderMode value);

  constexpr void __cordl_internal_set_m_ShowBoundCollectionSize(bool value);

  constexpr void __cordl_internal_set_m_ShowFoldoutHeader(bool value);

  /// @brief Method .ctor, addr 0x337d754, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_arraySizeFieldUssClassName();

  static inline ::StringW getStaticF_emptyLabelUssClassName();

  static inline ::StringW getStaticF_foldoutHeaderUssClassName();

  static inline ::StringW getStaticF_footerAddButtonName();

  static inline ::StringW getStaticF_footerRemoveButtonName();

  static inline ::StringW getStaticF_footerUssClassName();

  static inline ::StringW getStaticF_itemUssClassName();

  static inline ::StringW getStaticF_listViewWithFooterUssClassName();

  static inline ::StringW getStaticF_listViewWithHeaderUssClassName();

  static inline ::StringW getStaticF_reorderableItemContainerUssClassName();

  static inline ::StringW getStaticF_reorderableItemHandleBarUssClassName();

  static inline ::StringW getStaticF_reorderableItemHandleUssClassName();

  static inline ::StringW getStaticF_reorderableItemUssClassName();

  static inline ::StringW getStaticF_reorderableUssClassName();

  static inline ::StringW getStaticF_scrollViewWithFooterUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  /// @brief Method get_reorderMode, addr 0x337d610, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ListViewReorderMode get_reorderMode();

  /// @brief Method get_showAddRemoveFooter, addr 0x337c888, size 0x10, virtual false, abstract: false, final false
  inline bool get_showAddRemoveFooter();

  /// @brief Method get_showBoundCollectionSize, addr 0x337beac, size 0x8, virtual false, abstract: false, final false
  inline bool get_showBoundCollectionSize();

  /// @brief Method get_showFoldoutHeader, addr 0x337c0cc, size 0x8, virtual false, abstract: false, final false
  inline bool get_showFoldoutHeader();

  /// @brief Method get_sourceIncludesArraySize, addr 0x337c0a4, size 0x28, virtual true, abstract: false, final false
  inline bool get_sourceIncludesArraySize();

  /// @brief Method get_viewController, addr 0x337d360, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ListViewController* get_viewController();

  static inline void setStaticF_arraySizeFieldUssClassName(::StringW value);

  static inline void setStaticF_emptyLabelUssClassName(::StringW value);

  static inline void setStaticF_foldoutHeaderUssClassName(::StringW value);

  static inline void setStaticF_footerAddButtonName(::StringW value);

  static inline void setStaticF_footerRemoveButtonName(::StringW value);

  static inline void setStaticF_footerUssClassName(::StringW value);

  static inline void setStaticF_itemUssClassName(::StringW value);

  static inline void setStaticF_listViewWithFooterUssClassName(::StringW value);

  static inline void setStaticF_listViewWithHeaderUssClassName(::StringW value);

  static inline void setStaticF_reorderableItemContainerUssClassName(::StringW value);

  static inline void setStaticF_reorderableItemHandleBarUssClassName(::StringW value);

  static inline void setStaticF_reorderableItemHandleUssClassName(::StringW value);

  static inline void setStaticF_reorderableItemUssClassName(::StringW value);

  static inline void setStaticF_reorderableUssClassName(::StringW value);

  static inline void setStaticF_scrollViewWithFooterUssClassName(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

  /// @brief Method set_headerTitle, addr 0x337cc34, size 0x18, virtual false, abstract: false, final false
  inline void set_headerTitle(::StringW value);

  /// @brief Method set_reorderMode, addr 0x337d618, size 0x38, virtual false, abstract: false, final false
  inline void set_reorderMode(::UnityEngine::UIElements::ListViewReorderMode value);

  /// @brief Method set_showAddRemoveFooter, addr 0x337cc4c, size 0x8, virtual false, abstract: false, final false
  inline void set_showAddRemoveFooter(bool value);

  /// @brief Method set_showBoundCollectionSize, addr 0x337beb4, size 0x1c, virtual false, abstract: false, final false
  inline void set_showBoundCollectionSize(bool value);

  /// @brief Method set_showFoldoutHeader, addr 0x337c0d4, size 0x1a4, virtual false, abstract: false, final false
  inline void set_showFoldoutHeader(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListView(ListView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListView(ListView const&) = delete;

  /// @brief Field m_ShowBoundCollectionSize, offset: 0x494, size: 0x1, def value: None
  bool ___m_ShowBoundCollectionSize;

  /// @brief Field m_ShowFoldoutHeader, offset: 0x495, size: 0x1, def value: None
  bool ___m_ShowFoldoutHeader;

  /// @brief Field m_HeaderTitle, offset: 0x498, size: 0x8, def value: None
  ::StringW ___m_HeaderTitle;

  /// @brief Field itemsAdded, offset: 0x4a0, size: 0x8, def value: None
  ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* ___itemsAdded;

  /// @brief Field itemsRemoved, offset: 0x4a8, size: 0x8, def value: None
  ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* ___itemsRemoved;

  /// @brief Field m_EmptyListLabel, offset: 0x4b0, size: 0x8, def value: None
  ::UnityEngine::UIElements::Label* ___m_EmptyListLabel;

  /// @brief Field m_Foldout, offset: 0x4b8, size: 0x8, def value: None
  ::UnityEngine::UIElements::Foldout* ___m_Foldout;

  /// @brief Field m_ArraySizeField, offset: 0x4c0, size: 0x8, def value: None
  ::UnityEngine::UIElements::TextField* ___m_ArraySizeField;

  /// @brief Field m_Footer, offset: 0x4c8, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_Footer;

  /// @brief Field m_AddButton, offset: 0x4d0, size: 0x8, def value: None
  ::UnityEngine::UIElements::Button* ___m_AddButton;

  /// @brief Field m_RemoveButton, offset: 0x4d8, size: 0x8, def value: None
  ::UnityEngine::UIElements::Button* ___m_RemoveButton;

  /// @brief Field m_ItemAddedCallback, offset: 0x4e0, size: 0x8, def value: None
  ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* ___m_ItemAddedCallback;

  /// @brief Field m_ItemRemovedCallback, offset: 0x4e8, size: 0x8, def value: None
  ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* ___m_ItemRemovedCallback;

  /// @brief Field m_ItemsSourceSizeChangedCallback, offset: 0x4f0, size: 0x8, def value: None
  ::System::Action* ___m_ItemsSourceSizeChangedCallback;

  /// @brief Field m_ListViewController, offset: 0x4f8, size: 0x8, def value: None
  ::UnityEngine::UIElements::ListViewController* ___m_ListViewController;

  /// @brief Field m_ReorderMode, offset: 0x500, size: 0x4, def value: None
  ::UnityEngine::UIElements::ListViewReorderMode ___m_ReorderMode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ListView, 0x508>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListView, ___m_ShowBoundCollectionSize) == 0x494, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListView, ___m_ShowFoldoutHeader) == 0x495, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListView, ___m_HeaderTitle) == 0x498, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListView, ___itemsAdded) == 0x4a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListView, ___itemsRemoved) == 0x4a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListView, ___m_EmptyListLabel) == 0x4b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListView, ___m_Foldout) == 0x4b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListView, ___m_ArraySizeField) == 0x4c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListView, ___m_Footer) == 0x4c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListView, ___m_AddButton) == 0x4d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListView, ___m_RemoveButton) == 0x4d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListView, ___m_ItemAddedCallback) == 0x4e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListView, ___m_ItemRemovedCallback) == 0x4e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListView, ___m_ItemsSourceSizeChangedCallback) == 0x4f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListView, ___m_ListViewController) == 0x4f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListView, ___m_ReorderMode) == 0x500, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ListView);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ListView*, "UnityEngine.UIElements", "ListView");
NEED_NO_BOX(::UnityEngine::UIElements::__ListView__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__ListView__UxmlFactory*, "UnityEngine.UIElements", "ListView/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__ListView__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__ListView__UxmlTraits*, "UnityEngine.UIElements", "ListView/UxmlTraits");
