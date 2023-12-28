#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__AlternatingRowBackground_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindableElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__CollectionVirtualizationMethod_def.hpp"
#include "UnityEngine/UIElements/zzzz__CustomStyleProperty_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__SelectionType_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BaseVerticalCollectionView)
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class GeometryChangedEvent;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine::UIElements {
class DetachFromPanelEvent;
}
namespace UnityEngine::UIElements {
class IPointerEvent;
}
namespace System::Collections {
class IList;
}
namespace UnityEngine::UIElements {
class PointerMoveEvent;
}
namespace UnityEngine::UIElements {
class CustomStyleResolvedEvent;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace UnityEngine::UIElements {
class ICollectionDragAndDropController;
}
namespace UnityEngine::UIElements {
class ReusableCollectionItem;
}
namespace UnityEngine::UIElements {
struct KeyboardNavigationOperation;
}
namespace UnityEngine::UIElements {
class AttachToPanelEvent;
}
namespace UnityEngine {
struct Vector2;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::UIElements {
class KeyboardNavigationManipulator;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
class CollectionViewController;
}
namespace UnityEngine::UIElements {
struct AlternatingRowBackground;
}
namespace UnityEngine::UIElements {
class PointerCancelEvent;
}
namespace UnityEngine::UIElements {
class PointerUpEvent;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine::UIElements {
struct __BaseVerticalCollectionView____c__DisplayClass164_0;
}
namespace UnityEngine::UIElements {
class CollectionVirtualizationController;
}
namespace UnityEngine::UIElements {
class PointerDownEvent;
}
namespace System {
class Action;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace UnityEngine::UIElements {
class ListViewDragger;
}
namespace UnityEngine::UIElements {
struct SelectionType;
}
namespace UnityEngine::UIElements {
class ScrollView;
}
namespace UnityEngine::UIElements {
struct CollectionVirtualizationMethod;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class BaseVerticalCollectionView;
}
namespace UnityEngine::UIElements {
struct __BaseVerticalCollectionView____c__DisplayClass164_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::BaseVerticalCollectionView);
MARK_VAL_T(::UnityEngine::UIElements::__BaseVerticalCollectionView____c__DisplayClass164_0);
// Type: ::<>c__DisplayClass164_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7142))
// CS Name: ::BaseVerticalCollectionView::<>c__DisplayClass164_0
struct CORDL_TYPE __BaseVerticalCollectionView____c__DisplayClass164_0 {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "__4__this", ty: "::UnityEngine::UIElements::BaseVerticalCollectionView*", modifiers: "", def_value: None }, CppParam { name: "shiftKey", ty: "bool", modifiers:
  // "", def_value: None }]
  constexpr __BaseVerticalCollectionView____c__DisplayClass164_0(::UnityEngine::UIElements::BaseVerticalCollectionView* __4__this, bool shiftKey) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BaseVerticalCollectionView____c__DisplayClass164_0();

  /// @brief Field <>4__this, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::BaseVerticalCollectionView* __4__this;

  /// @brief Field shiftKey, offset: 0x8, size: 0x1, def value: None
  bool shiftKey;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__BaseVerticalCollectionView____c__DisplayClass164_0, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::BaseVerticalCollectionView
// SizeInfo { instance_size: 1176, native_size: -1, calculated_instance_size: 1176, calculated_native_size: 1172, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7141)), TypeDefinitionIndex(TypeDefinitionIndex(6801)), TypeDefinitionIndex(TypeDefinitionIndex(7306)),
// TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(6885)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7306), inst: 98 }),
// TypeDefinitionIndex(TypeDefinitionIndex(7140)), TypeDefinitionIndex(TypeDefinitionIndex(10243))} Self: TypeDefinitionIndex(TypeDefinitionIndex(7143)) CS Name:
// ::UnityEngine.UIElements::BaseVerticalCollectionView*
class CORDL_TYPE BaseVerticalCollectionView : public ::UnityEngine::UIElements::BindableElement {
public:
  // Declarations
  using __c__DisplayClass164_0 = ::UnityEngine::UIElements::__BaseVerticalCollectionView____c__DisplayClass164_0;

  /// @brief Field onItemsChosen, offset 0x3c0, size 0x8
  __declspec(property(get = __get_onItemsChosen, put = __set_onItemsChosen))::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>* onItemsChosen;

  /// @brief Field onSelectionChange, offset 0x3c8, size 0x8
  __declspec(property(get = __get_onSelectionChange, put = __set_onSelectionChange))::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>* onSelectionChange;

  /// @brief Field onSelectedIndicesChange, offset 0x3d0, size 0x8
  __declspec(property(get = __get_onSelectedIndicesChange, put = __set_onSelectedIndicesChange))::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* onSelectedIndicesChange;

  /// @brief Field itemIndexChanged, offset 0x3d8, size 0x8
  __declspec(property(get = __get_itemIndexChanged, put = __set_itemIndexChanged))::System::Action_2<int32_t, int32_t>* itemIndexChanged;

  /// @brief Field itemsSourceChanged, offset 0x3e0, size 0x8
  __declspec(property(get = __get_itemsSourceChanged, put = __set_itemsSourceChanged))::System::Action* itemsSourceChanged;

  /// @brief Field m_GetItemId, offset 0x3e8, size 0x8
  __declspec(property(get = __get_m_GetItemId, put = __set_m_GetItemId))::System::Func_2<int32_t, int32_t>* m_GetItemId;

  /// @brief Field m_MakeItem, offset 0x3f0, size 0x8
  __declspec(property(get = __get_m_MakeItem, put = __set_m_MakeItem))::System::Func_1<::UnityEngine::UIElements::VisualElement*>* m_MakeItem;

  /// @brief Field m_BindItem, offset 0x3f8, size 0x8
  __declspec(property(get = __get_m_BindItem, put = __set_m_BindItem))::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* m_BindItem;

  /// @brief Field <unbindItem>k__BackingField, offset 0x400, size 0x8
  __declspec(property(get = __get__unbindItem_k__BackingField,
                      put = __set__unbindItem_k__BackingField))::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* _unbindItem_k__BackingField;

  /// @brief Field <destroyItem>k__BackingField, offset 0x408, size 0x8
  __declspec(property(get = __get__destroyItem_k__BackingField, put = __set__destroyItem_k__BackingField))::System::Action_1<::UnityEngine::UIElements::VisualElement*>* _destroyItem_k__BackingField;

  /// @brief Field m_SelectionType, offset 0x410, size 0x4
  __declspec(property(get = __get_m_SelectionType, put = __set_m_SelectionType))::UnityEngine::UIElements::SelectionType m_SelectionType;

  /// @brief Field m_HorizontalScrollingEnabled, offset 0x414, size 0x1
  __declspec(property(get = __get_m_HorizontalScrollingEnabled, put = __set_m_HorizontalScrollingEnabled)) bool m_HorizontalScrollingEnabled;

  /// @brief Field m_ShowAlternatingRowBackgrounds, offset 0x418, size 0x4
  __declspec(property(get = __get_m_ShowAlternatingRowBackgrounds, put = __set_m_ShowAlternatingRowBackgrounds))::UnityEngine::UIElements::AlternatingRowBackground m_ShowAlternatingRowBackgrounds;

  /// @brief Field m_FixedItemHeight, offset 0x41c, size 0x4
  __declspec(property(get = __get_m_FixedItemHeight, put = __set_m_FixedItemHeight)) float_t m_FixedItemHeight;

  /// @brief Field m_ItemHeightIsInline, offset 0x420, size 0x1
  __declspec(property(get = __get_m_ItemHeightIsInline, put = __set_m_ItemHeightIsInline)) bool m_ItemHeightIsInline;

  /// @brief Field m_VirtualizationMethod, offset 0x424, size 0x4
  __declspec(property(get = __get_m_VirtualizationMethod, put = __set_m_VirtualizationMethod))::UnityEngine::UIElements::CollectionVirtualizationMethod m_VirtualizationMethod;

  /// @brief Field m_ScrollView, offset 0x428, size 0x8
  __declspec(property(get = __get_m_ScrollView, put = __set_m_ScrollView))::UnityEngine::UIElements::ScrollView* m_ScrollView;

  /// @brief Field m_ViewController, offset 0x430, size 0x8
  __declspec(property(get = __get_m_ViewController, put = __set_m_ViewController))::UnityEngine::UIElements::CollectionViewController* m_ViewController;

  /// @brief Field m_VirtualizationController, offset 0x438, size 0x8
  __declspec(property(get = __get_m_VirtualizationController, put = __set_m_VirtualizationController))::UnityEngine::UIElements::CollectionVirtualizationController* m_VirtualizationController;

  /// @brief Field m_NavigationManipulator, offset 0x440, size 0x8
  __declspec(property(get = __get_m_NavigationManipulator, put = __set_m_NavigationManipulator))::UnityEngine::UIElements::KeyboardNavigationManipulator* m_NavigationManipulator;

  /// @brief Field m_ScrollOffset, offset 0x448, size 0x8
  __declspec(property(get = __get_m_ScrollOffset, put = __set_m_ScrollOffset))::UnityEngine::Vector2 m_ScrollOffset;

  /// @brief Field m_SelectedIds, offset 0x450, size 0x8
  __declspec(property(get = __get_m_SelectedIds, put = __set_m_SelectedIds))::System::Collections::Generic::List_1<int32_t>* m_SelectedIds;

  /// @brief Field m_SelectedIndices, offset 0x458, size 0x8
  __declspec(property(get = __get_m_SelectedIndices, put = __set_m_SelectedIndices))::System::Collections::Generic::List_1<int32_t>* m_SelectedIndices;

  /// @brief Field m_SelectedItems, offset 0x460, size 0x8
  __declspec(property(get = __get_m_SelectedItems, put = __set_m_SelectedItems))::System::Collections::Generic::List_1<::System::Object*>* m_SelectedItems;

  /// @brief Field m_LastHeight, offset 0x468, size 0x4
  __declspec(property(get = __get_m_LastHeight, put = __set_m_LastHeight)) float_t m_LastHeight;

  /// @brief Field m_IsRangeSelectionDirectionUp, offset 0x46c, size 0x1
  __declspec(property(get = __get_m_IsRangeSelectionDirectionUp, put = __set_m_IsRangeSelectionDirectionUp)) bool m_IsRangeSelectionDirectionUp;

  /// @brief Field m_Dragger, offset 0x470, size 0x8
  __declspec(property(get = __get_m_Dragger, put = __set_m_Dragger))::UnityEngine::UIElements::ListViewDragger* m_Dragger;

  /// @brief Field m_ItemIndexChangedCallback, offset 0x478, size 0x8
  __declspec(property(get = __get_m_ItemIndexChangedCallback, put = __set_m_ItemIndexChangedCallback))::System::Action_2<int32_t, int32_t>* m_ItemIndexChangedCallback;

  /// @brief Field m_ItemsSourceChangedCallback, offset 0x480, size 0x8
  __declspec(property(get = __get_m_ItemsSourceChangedCallback, put = __set_m_ItemsSourceChangedCallback))::System::Action* m_ItemsSourceChangedCallback;

  /// @brief Field m_TouchDownPosition, offset 0x488, size 0xc
  __declspec(property(get = __get_m_TouchDownPosition, put = __set_m_TouchDownPosition))::UnityEngine::Vector3 m_TouchDownPosition;

  /// @brief Field k_EmptyItems, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_EmptyItems, put = setStaticF_k_EmptyItems))::System::Collections::Generic::List_1<::UnityEngine::UIElements::ReusableCollectionItem*>* k_EmptyItems;

  /// @brief Field s_DefaultItemHeight, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_DefaultItemHeight, put = setStaticF_s_DefaultItemHeight)) int32_t s_DefaultItemHeight;

  /// @brief Field s_ItemHeightProperty, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ItemHeightProperty, put = setStaticF_s_ItemHeightProperty))::UnityEngine::UIElements::CustomStyleProperty_1<int32_t> s_ItemHeightProperty;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName))::StringW ussClassName;

  /// @brief Field borderUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_borderUssClassName, put = setStaticF_borderUssClassName))::StringW borderUssClassName;

  /// @brief Field itemUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_itemUssClassName, put = setStaticF_itemUssClassName))::StringW itemUssClassName;

  /// @brief Field dragHoverBarUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dragHoverBarUssClassName, put = setStaticF_dragHoverBarUssClassName))::StringW dragHoverBarUssClassName;

  /// @brief Field itemDragHoverUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_itemDragHoverUssClassName, put = setStaticF_itemDragHoverUssClassName))::StringW itemDragHoverUssClassName;

  /// @brief Field itemSelectedVariantUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_itemSelectedVariantUssClassName, put = setStaticF_itemSelectedVariantUssClassName))::StringW itemSelectedVariantUssClassName;

  /// @brief Field itemAlternativeBackgroundUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_itemAlternativeBackgroundUssClassName, put = setStaticF_itemAlternativeBackgroundUssClassName))::StringW itemAlternativeBackgroundUssClassName;

  /// @brief Field listScrollViewUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_listScrollViewUssClassName, put = setStaticF_listScrollViewUssClassName))::StringW listScrollViewUssClassName;

  /// @brief Field backgroundFillUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_backgroundFillUssClassName, put = setStaticF_backgroundFillUssClassName))::StringW backgroundFillUssClassName;

  __declspec(property(get = get_getItemId, put = set_getItemId))::System::Func_2<int32_t, int32_t>* getItemId;

  __declspec(property(get = get_itemsSource, put = set_itemsSource))::System::Collections::IList* itemsSource;

  __declspec(property(get = get_sourceIncludesArraySize)) bool sourceIncludesArraySize;

  __declspec(property(get = get_makeItem, put = set_makeItem))::System::Func_1<::UnityEngine::UIElements::VisualElement*>* makeItem;

  __declspec(property(get = get_bindItem, put = set_bindItem))::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* bindItem;

  __declspec(property(get = get_unbindItem, put = set_unbindItem))::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* unbindItem;

  __declspec(property(get = get_destroyItem, put = set_destroyItem))::System::Action_1<::UnityEngine::UIElements::VisualElement*>* destroyItem;

  __declspec(property(get = get_contentContainer))::UnityEngine::UIElements::VisualElement* contentContainer;

  __declspec(property(get = get_selectionType, put = set_selectionType))::UnityEngine::UIElements::SelectionType selectionType;

  __declspec(property(get = get_selectedIndex, put = set_selectedIndex)) int32_t selectedIndex;

  __declspec(property(get = get_selectedIndices))::System::Collections::Generic::IEnumerable_1<int32_t>* selectedIndices;

  __declspec(property(get = get_activeItems))::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ReusableCollectionItem*>* activeItems;

  __declspec(property(get = get_scrollView))::UnityEngine::UIElements::ScrollView* scrollView;

  __declspec(property(get = get_dragger))::UnityEngine::UIElements::ListViewDragger* dragger;

  __declspec(property(get = get_viewController))::UnityEngine::UIElements::CollectionViewController* viewController;

  __declspec(property(get = get_virtualizationController))::UnityEngine::UIElements::CollectionVirtualizationController* virtualizationController;

  __declspec(property(put = set_showBorder)) bool showBorder;

  __declspec(property(get = get_reorderable, put = set_reorderable)) bool reorderable;

  __declspec(property(put = set_horizontalScrollingEnabled)) bool horizontalScrollingEnabled;

  __declspec(property(get = get_showAlternatingRowBackgrounds, put = set_showAlternatingRowBackgrounds))::UnityEngine::UIElements::AlternatingRowBackground showAlternatingRowBackgrounds;

  __declspec(property(get = get_virtualizationMethod, put = set_virtualizationMethod))::UnityEngine::UIElements::CollectionVirtualizationMethod virtualizationMethod;

  __declspec(property(get = get_fixedItemHeight, put = set_fixedItemHeight)) float_t fixedItemHeight;

  __declspec(property(get = get_lastHeight)) float_t lastHeight;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*& __get_onItemsChosen();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*> const& __get_onItemsChosen() const;

  constexpr void __set_onItemsChosen(::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>* value);

  constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*& __get_onSelectionChange();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*> const& __get_onSelectionChange() const;

  constexpr void __set_onSelectionChange(::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>* value);

  constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*& __get_onSelectedIndicesChange();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*> const& __get_onSelectedIndicesChange() const;

  constexpr void __set_onSelectedIndicesChange(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* value);

  constexpr ::System::Action_2<int32_t, int32_t>*& __get_itemIndexChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<int32_t, int32_t>*> const& __get_itemIndexChanged() const;

  constexpr void __set_itemIndexChanged(::System::Action_2<int32_t, int32_t>* value);

  constexpr ::System::Action*& __get_itemsSourceChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_itemsSourceChanged() const;

  constexpr void __set_itemsSourceChanged(::System::Action* value);

  constexpr ::System::Func_2<int32_t, int32_t>*& __get_m_GetItemId();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<int32_t, int32_t>*> const& __get_m_GetItemId() const;

  constexpr void __set_m_GetItemId(::System::Func_2<int32_t, int32_t>* value);

  constexpr ::System::Func_1<::UnityEngine::UIElements::VisualElement*>*& __get_m_MakeItem();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<::UnityEngine::UIElements::VisualElement*>*> const& __get_m_MakeItem() const;

  constexpr void __set_m_MakeItem(::System::Func_1<::UnityEngine::UIElements::VisualElement*>* value);

  constexpr ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>*& __get_m_BindItem();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>*> const& __get_m_BindItem() const;

  constexpr void __set_m_BindItem(::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* value);

  constexpr ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>*& __get__unbindItem_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>*> const& __get__unbindItem_k__BackingField() const;

  constexpr void __set__unbindItem_k__BackingField(::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* value);

  constexpr ::System::Action_1<::UnityEngine::UIElements::VisualElement*>*& __get__destroyItem_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::UIElements::VisualElement*>*> const& __get__destroyItem_k__BackingField() const;

  constexpr void __set__destroyItem_k__BackingField(::System::Action_1<::UnityEngine::UIElements::VisualElement*>* value);

  constexpr ::UnityEngine::UIElements::SelectionType& __get_m_SelectionType();

  constexpr ::UnityEngine::UIElements::SelectionType const& __get_m_SelectionType() const;

  constexpr void __set_m_SelectionType(::UnityEngine::UIElements::SelectionType value);

  constexpr bool& __get_m_HorizontalScrollingEnabled();

  constexpr bool const& __get_m_HorizontalScrollingEnabled() const;

  constexpr void __set_m_HorizontalScrollingEnabled(bool value);

  constexpr ::UnityEngine::UIElements::AlternatingRowBackground& __get_m_ShowAlternatingRowBackgrounds();

  constexpr ::UnityEngine::UIElements::AlternatingRowBackground const& __get_m_ShowAlternatingRowBackgrounds() const;

  constexpr void __set_m_ShowAlternatingRowBackgrounds(::UnityEngine::UIElements::AlternatingRowBackground value);

  constexpr float_t& __get_m_FixedItemHeight();

  constexpr float_t const& __get_m_FixedItemHeight() const;

  constexpr void __set_m_FixedItemHeight(float_t value);

  constexpr bool& __get_m_ItemHeightIsInline();

  constexpr bool const& __get_m_ItemHeightIsInline() const;

  constexpr void __set_m_ItemHeightIsInline(bool value);

  constexpr ::UnityEngine::UIElements::CollectionVirtualizationMethod& __get_m_VirtualizationMethod();

  constexpr ::UnityEngine::UIElements::CollectionVirtualizationMethod const& __get_m_VirtualizationMethod() const;

  constexpr void __set_m_VirtualizationMethod(::UnityEngine::UIElements::CollectionVirtualizationMethod value);

  constexpr ::UnityEngine::UIElements::ScrollView*& __get_m_ScrollView();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ScrollView*> const& __get_m_ScrollView() const;

  constexpr void __set_m_ScrollView(::UnityEngine::UIElements::ScrollView* value);

  constexpr ::UnityEngine::UIElements::CollectionViewController*& __get_m_ViewController();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::CollectionViewController*> const& __get_m_ViewController() const;

  constexpr void __set_m_ViewController(::UnityEngine::UIElements::CollectionViewController* value);

  constexpr ::UnityEngine::UIElements::CollectionVirtualizationController*& __get_m_VirtualizationController();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::CollectionVirtualizationController*> const& __get_m_VirtualizationController() const;

  constexpr void __set_m_VirtualizationController(::UnityEngine::UIElements::CollectionVirtualizationController* value);

  constexpr ::UnityEngine::UIElements::KeyboardNavigationManipulator*& __get_m_NavigationManipulator();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::KeyboardNavigationManipulator*> const& __get_m_NavigationManipulator() const;

  constexpr void __set_m_NavigationManipulator(::UnityEngine::UIElements::KeyboardNavigationManipulator* value);

  constexpr ::UnityEngine::Vector2& __get_m_ScrollOffset();

  constexpr ::UnityEngine::Vector2 const& __get_m_ScrollOffset() const;

  constexpr void __set_m_ScrollOffset(::UnityEngine::Vector2 value);

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __get_m_SelectedIds();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& __get_m_SelectedIds() const;

  constexpr void __set_m_SelectedIds(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __get_m_SelectedIndices();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& __get_m_SelectedIndices() const;

  constexpr void __set_m_SelectedIndices(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr ::System::Collections::Generic::List_1<::System::Object*>*& __get_m_SelectedItems();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Object*>*> const& __get_m_SelectedItems() const;

  constexpr void __set_m_SelectedItems(::System::Collections::Generic::List_1<::System::Object*>* value);

  constexpr float_t& __get_m_LastHeight();

  constexpr float_t const& __get_m_LastHeight() const;

  constexpr void __set_m_LastHeight(float_t value);

  constexpr bool& __get_m_IsRangeSelectionDirectionUp();

  constexpr bool const& __get_m_IsRangeSelectionDirectionUp() const;

  constexpr void __set_m_IsRangeSelectionDirectionUp(bool value);

  constexpr ::UnityEngine::UIElements::ListViewDragger*& __get_m_Dragger();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ListViewDragger*> const& __get_m_Dragger() const;

  constexpr void __set_m_Dragger(::UnityEngine::UIElements::ListViewDragger* value);

  constexpr ::System::Action_2<int32_t, int32_t>*& __get_m_ItemIndexChangedCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<int32_t, int32_t>*> const& __get_m_ItemIndexChangedCallback() const;

  constexpr void __set_m_ItemIndexChangedCallback(::System::Action_2<int32_t, int32_t>* value);

  constexpr ::System::Action*& __get_m_ItemsSourceChangedCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_m_ItemsSourceChangedCallback() const;

  constexpr void __set_m_ItemsSourceChangedCallback(::System::Action* value);

  constexpr ::UnityEngine::Vector3& __get_m_TouchDownPosition();

  constexpr ::UnityEngine::Vector3 const& __get_m_TouchDownPosition() const;

  constexpr void __set_m_TouchDownPosition(::UnityEngine::Vector3 value);

  static inline void setStaticF_k_EmptyItems(::System::Collections::Generic::List_1<::UnityEngine::UIElements::ReusableCollectionItem*>* value);

  static inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ReusableCollectionItem*>* getStaticF_k_EmptyItems();

  static inline void setStaticF_s_DefaultItemHeight(int32_t value);

  static inline int32_t getStaticF_s_DefaultItemHeight();

  static inline void setStaticF_s_ItemHeightProperty(::UnityEngine::UIElements::CustomStyleProperty_1<int32_t> value);

  static inline ::UnityEngine::UIElements::CustomStyleProperty_1<int32_t> getStaticF_s_ItemHeightProperty();

  static inline void setStaticF_ussClassName(::StringW value);

  static inline ::StringW getStaticF_ussClassName();

  static inline void setStaticF_borderUssClassName(::StringW value);

  static inline ::StringW getStaticF_borderUssClassName();

  static inline void setStaticF_itemUssClassName(::StringW value);

  static inline ::StringW getStaticF_itemUssClassName();

  static inline void setStaticF_dragHoverBarUssClassName(::StringW value);

  static inline ::StringW getStaticF_dragHoverBarUssClassName();

  static inline void setStaticF_itemDragHoverUssClassName(::StringW value);

  static inline ::StringW getStaticF_itemDragHoverUssClassName();

  static inline void setStaticF_itemSelectedVariantUssClassName(::StringW value);

  static inline ::StringW getStaticF_itemSelectedVariantUssClassName();

  static inline void setStaticF_itemAlternativeBackgroundUssClassName(::StringW value);

  static inline ::StringW getStaticF_itemAlternativeBackgroundUssClassName();

  static inline void setStaticF_listScrollViewUssClassName(::StringW value);

  static inline ::StringW getStaticF_listScrollViewUssClassName();

  static inline void setStaticF_backgroundFillUssClassName(::StringW value);

  static inline ::StringW getStaticF_backgroundFillUssClassName();

  /// @brief Method add_onItemsChosen addr 0x2e3f9e8 size 0xb4 virtual false final false
  inline void add_onItemsChosen(::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>* value);

  /// @brief Method remove_onItemsChosen addr 0x2e3fa9c size 0xb4 virtual false final false
  inline void remove_onItemsChosen(::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>* value);

  /// @brief Method add_onSelectionChange addr 0x2e3fb50 size 0xb4 virtual false final false
  inline void add_onSelectionChange(::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>* value);

  /// @brief Method remove_onSelectionChange addr 0x2e3fc04 size 0xb4 virtual false final false
  inline void remove_onSelectionChange(::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>* value);

  /// @brief Method get_getItemId addr 0x2e3fcb8 size 0x8 virtual false final false
  inline ::System::Func_2<int32_t, int32_t>* get_getItemId();

  /// @brief Method set_getItemId addr 0x2e3fcc0 size 0x8 virtual false final false
  inline void set_getItemId(::System::Func_2<int32_t, int32_t>* value);

  /// @brief Method get_itemsSource addr 0x2e3fd34 size 0x18 virtual false final false
  inline ::System::Collections::IList* get_itemsSource();

  /// @brief Method set_itemsSource addr 0x2e3fd4c size 0x4c virtual false final false
  inline void set_itemsSource(::System::Collections::IList* value);

  /// @brief Method get_sourceIncludesArraySize addr 0x2e3fdc8 size 0x8 virtual true final false
  inline bool get_sourceIncludesArraySize();

  /// @brief Method get_makeItem addr 0x2e3fdd0 size 0x8 virtual false final false
  inline ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* get_makeItem();

  /// @brief Method set_makeItem addr 0x2e3fdd8 size 0x8 virtual false final false
  inline void set_makeItem(::System::Func_1<::UnityEngine::UIElements::VisualElement*>* value);

  /// @brief Method get_bindItem addr 0x2e3fe4c size 0x8 virtual false final false
  inline ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* get_bindItem();

  /// @brief Method set_bindItem addr 0x2e3fe54 size 0x8 virtual false final false
  inline void set_bindItem(::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* value);

  /// @brief Method get_unbindItem addr 0x2e3fe5c size 0x8 virtual false final false
  inline ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* get_unbindItem();

  /// @brief Method set_unbindItem addr 0x2e3fe64 size 0x8 virtual false final false
  inline void set_unbindItem(::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* value);

  /// @brief Method get_destroyItem addr 0x2e3fe6c size 0x8 virtual false final false
  inline ::System::Action_1<::UnityEngine::UIElements::VisualElement*>* get_destroyItem();

  /// @brief Method set_destroyItem addr 0x2e3fe74 size 0x8 virtual false final false
  inline void set_destroyItem(::System::Action_1<::UnityEngine::UIElements::VisualElement*>* value);

  /// @brief Method get_contentContainer addr 0x2e3fe7c size 0x8 virtual true final false
  inline ::UnityEngine::UIElements::VisualElement* get_contentContainer();

  /// @brief Method get_selectionType addr 0x2e3fe84 size 0x8 virtual false final false
  inline ::UnityEngine::UIElements::SelectionType get_selectionType();

  /// @brief Method set_selectionType addr 0x2e3fe8c size 0xa4 virtual false final false
  inline void set_selectionType(::UnityEngine::UIElements::SelectionType value);

  /// @brief Method get_selectedIndex addr 0x2e4004c size 0x74 virtual false final false
  inline int32_t get_selectedIndex();

  /// @brief Method set_selectedIndex addr 0x2e400c0 size 0x4 virtual false final false
  inline void set_selectedIndex(int32_t value);

  /// @brief Method get_selectedIndices addr 0x2e400c4 size 0x8 virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<int32_t>* get_selectedIndices();

  /// @brief Method get_activeItems addr 0x2e400cc size 0x78 virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ReusableCollectionItem*>* get_activeItems();

  /// @brief Method get_scrollView addr 0x2e40144 size 0x8 virtual false final false
  inline ::UnityEngine::UIElements::ScrollView* get_scrollView();

  /// @brief Method get_dragger addr 0x2e4014c size 0x8 virtual false final false
  inline ::UnityEngine::UIElements::ListViewDragger* get_dragger();

  /// @brief Method get_viewController addr 0x2e40154 size 0x8 virtual false final false
  inline ::UnityEngine::UIElements::CollectionViewController* get_viewController();

  /// @brief Method get_virtualizationController addr 0x2e4015c size 0x30 virtual false final false
  inline ::UnityEngine::UIElements::CollectionVirtualizationController* get_virtualizationController();

  /// @brief Method ResolveItemHeight addr 0x2e401bc size 0xb8 virtual false final false
  inline float_t ResolveItemHeight(float_t height);

  /// @brief Method set_showBorder addr 0x2e40274 size 0x80 virtual false final false
  inline void set_showBorder(bool value);

  /// @brief Method get_reorderable addr 0x2e402f4 size 0xf0 virtual false final false
  inline bool get_reorderable();

  /// @brief Method set_reorderable addr 0x2e403e4 size 0x148 virtual false final false
  inline void set_reorderable(bool value);

  /// @brief Method set_horizontalScrollingEnabled addr 0x2e405a4 size 0x48 virtual false final false
  inline void set_horizontalScrollingEnabled(bool value);

  /// @brief Method get_showAlternatingRowBackgrounds addr 0x2e405ec size 0x8 virtual false final false
  inline ::UnityEngine::UIElements::AlternatingRowBackground get_showAlternatingRowBackgrounds();

  /// @brief Method set_showAlternatingRowBackgrounds addr 0x2e405f4 size 0x18 virtual false final false
  inline void set_showAlternatingRowBackgrounds(::UnityEngine::UIElements::AlternatingRowBackground value);

  /// @brief Method get_virtualizationMethod addr 0x2e4060c size 0x8 virtual false final false
  inline ::UnityEngine::UIElements::CollectionVirtualizationMethod get_virtualizationMethod();

  /// @brief Method set_virtualizationMethod addr 0x2e40614 size 0x3c virtual false final false
  inline void set_virtualizationMethod(::UnityEngine::UIElements::CollectionVirtualizationMethod value);

  /// @brief Method get_fixedItemHeight addr 0x2e40650 size 0x8 virtual false final false
  inline float_t get_fixedItemHeight();

  /// @brief Method set_fixedItemHeight addr 0x2e40658 size 0xfc virtual false final false
  inline void set_fixedItemHeight(float_t value);

  /// @brief Method get_lastHeight addr 0x2e40754 size 0x8 virtual false final false
  inline float_t get_lastHeight();

  /// @brief Method CreateVirtualizationController addr 0x2e4075c size 0x48 virtual true final false
  inline void CreateVirtualizationController();

  /// @brief Method GetOrCreateVirtualizationController addr 0x2e4018c size 0x30 virtual false final false
  inline ::UnityEngine::UIElements::CollectionVirtualizationController* GetOrCreateVirtualizationController();

  /// @brief Method CreateVirtualizationController addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void CreateVirtualizationController();

  /// @brief Method GetOrCreateViewController addr 0x2e3fd98 size 0x30 virtual false final false
  inline ::UnityEngine::UIElements::CollectionViewController* GetOrCreateViewController();

  /// @brief Method CreateViewController addr 0x2e407a4 size 0x64 virtual true final false
  inline void CreateViewController();

  /// @brief Method SetViewController addr 0x2e40808 size 0x90 virtual false final false
  inline void SetViewController(::UnityEngine::UIElements::CollectionViewController* controller);

  /// @brief Method CreateDragger addr 0x2e40898 size 0x64 virtual true final false
  inline ::UnityEngine::UIElements::ListViewDragger* CreateDragger();

  /// @brief Method InitializeDragAndDropController addr 0x2e4052c size 0x78 virtual false final false
  inline void InitializeDragAndDropController();

  /// @brief Method CreateDragAndDropController addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::UIElements::ICollectionDragAndDropController* CreateDragAndDropController();

  static inline ::UnityEngine::UIElements::BaseVerticalCollectionView* New_ctor();

  /// @brief Method .ctor addr 0x2e408fc size 0x5a0 virtual false final false
  inline void _ctor();

  /// @brief Method HasValidDataAndBindings addr 0x2e40e9c size 0x38 virtual false final false
  inline bool HasValidDataAndBindings();

  /// @brief Method OnItemIndexChanged addr 0x2e40ed4 size 0x1e4 virtual false final false
  inline void OnItemIndexChanged(int32_t srcIndex, int32_t dstIndex);

  /// @brief Method OnItemsSourceChanged addr 0x2e410b8 size 0x78 virtual false final false
  inline void OnItemsSourceChanged();

  /// @brief Method RefreshItems addr 0x2e3fcc8 size 0x6c virtual false final false
  inline void RefreshItems();

  /// @brief Method Rebuild addr 0x2e3fde0 size 0x6c virtual false final false
  inline void Rebuild();

  /// @brief Method RefreshSelection addr 0x2e41130 size 0x298 virtual false final false
  inline void RefreshSelection();

  /// @brief Method PostRefresh addr 0x2e413c8 size 0x12c virtual true final false
  inline void PostRefresh();

  /// @brief Method ScrollToItem addr 0x2e41594 size 0x8c virtual false final false
  inline void ScrollToItem(int32_t index);

  /// @brief Method OnScroll addr 0x2e41620 size 0x94 virtual false final false
  inline void OnScroll(::UnityEngine::Vector2 offset);

  /// @brief Method Resize addr 0x2e414f4 size 0xa0 virtual false final false
  inline void Resize(::UnityEngine::Vector2 size, int32_t layoutPass);

  /// @brief Method OnAttachToPanel addr 0x2e416b4 size 0x35c virtual false final false
  inline void OnAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent* evt);

  /// @brief Method OnDetachFromPanel addr 0x2e41a10 size 0x2c8 virtual false final false
  inline void OnDetachFromPanel(::UnityEngine::UIElements::DetachFromPanelEvent* evt);

  /// @brief Method Apply addr 0x2e41cd8 size 0x3b4 virtual false final false
  inline bool Apply(::UnityEngine::UIElements::KeyboardNavigationOperation op, bool shiftKey);

  /// @brief Method Apply addr 0x2e427a4 size 0xe4 virtual false final false
  inline void Apply(::UnityEngine::UIElements::KeyboardNavigationOperation op, ::UnityEngine::UIElements::EventBase* sourceEvent);

  /// @brief Method OnPointerMove addr 0x2e428b0 size 0x88 virtual false final false
  inline void OnPointerMove(::UnityEngine::UIElements::PointerMoveEvent* evt);

  /// @brief Method OnPointerDown addr 0x2e43324 size 0xbc virtual false final false
  inline void OnPointerDown(::UnityEngine::UIElements::PointerDownEvent* evt);

  /// @brief Method OnPointerCancel addr 0x2e433e0 size 0x8c virtual false final false
  inline void OnPointerCancel(::UnityEngine::UIElements::PointerCancelEvent* evt);

  /// @brief Method OnPointerUp addr 0x2e4346c size 0xbc virtual false final false
  inline void OnPointerUp(::UnityEngine::UIElements::PointerUpEvent* evt);

  /// @brief Method ProcessPointerDown addr 0x2e42f2c size 0x3f8 virtual false final false
  inline void ProcessPointerDown(::UnityEngine::UIElements::IPointerEvent* evt);

  /// @brief Method ProcessPointerUp addr 0x2e42938 size 0x5f4 virtual false final false
  inline void ProcessPointerUp(::UnityEngine::UIElements::IPointerEvent* evt);

  /// @brief Method DoSelect addr 0x2e43528 size 0x29c virtual false final false
  inline void DoSelect(::UnityEngine::Vector2 localPosition, int32_t clickCount, bool actionKey, bool shiftKey);

  /// @brief Method DoRangeSelection addr 0x2e438a0 size 0x19c virtual false final false
  inline void DoRangeSelection(int32_t rangeSelectionFinalIndex);

  /// @brief Method ProcessSingleClick addr 0x2e437c4 size 0x4 virtual false final false
  inline void ProcessSingleClick(int32_t clickedIndex);

  /// @brief Method SelectAll addr 0x2e4208c size 0x5e4 virtual false final false
  inline void SelectAll();

  /// @brief Method AddToSelection addr 0x2e43828 size 0x78 virtual false final false
  inline void AddToSelection(int32_t index);

  /// @brief Method AddToSelection addr 0x2e43d9c size 0x390 virtual false final false
  inline void AddToSelection(::System::Collections::Generic::IList_1<int32_t>* indexes);

  /// @brief Method AddToSelectionWithoutValidation addr 0x2e441a8 size 0x4e0 virtual false final false
  inline void AddToSelectionWithoutValidation(int32_t index);

  /// @brief Method RemoveFromSelection addr 0x2e437c8 size 0x60 virtual false final false
  inline void RemoveFromSelection(int32_t index);

  /// @brief Method RemoveFromSelectionWithoutValidation addr 0x2e44688 size 0x40c virtual false final false
  inline void RemoveFromSelectionWithoutValidation(int32_t index);

  /// @brief Method SetSelection addr 0x2e3ffc4 size 0x88 virtual false final false
  inline void SetSelection(int32_t index);

  /// @brief Method SetSelection addr 0x2e44a94 size 0x8 virtual false final false
  inline void SetSelection(::System::Collections::Generic::IEnumerable_1<int32_t>* indices);

  /// @brief Method SetSelectionWithoutNotify addr 0x2e44dd8 size 0x8 virtual false final false
  inline void SetSelectionWithoutNotify(::System::Collections::Generic::IEnumerable_1<int32_t>* indices);

  /// @brief Method SetSelectionInternal addr 0x2e44a9c size 0x33c virtual false final false
  inline void SetSelectionInternal(::System::Collections::Generic::IEnumerable_1<int32_t>* indices, bool sendNotification);

  /// @brief Method NotifyOfSelectionChange addr 0x2e4412c size 0x7c virtual false final false
  inline void NotifyOfSelectionChange();

  /// @brief Method ClearSelection addr 0x2e3ff30 size 0x94 virtual false final false
  inline void ClearSelection();

  /// @brief Method ClearSelectionWithoutValidation addr 0x2e43a3c size 0x360 virtual false final false
  inline void ClearSelectionWithoutValidation();

  /// @brief Method OnViewDataReady addr 0x2e44de0 size 0x34 virtual true final false
  inline void OnViewDataReady();

  /// @brief Method ExecuteDefaultAction addr 0x2e44e14 size 0x378 virtual true final false
  inline void ExecuteDefaultAction(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method OnSizeChanged addr 0x2e45194 size 0x1b8 virtual false final false
  inline void OnSizeChanged(::UnityEngine::UIElements::GeometryChangedEvent* evt);

  /// @brief Method OnCustomStyleResolved addr 0x2e4534c size 0x164 virtual false final false
  inline void OnCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent* e);

  /// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize addr 0x2e45538 size 0x4 virtual true final true
  inline void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize();

  /// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize addr 0x2e4553c size 0x4 virtual true final true
  inline void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize();

  /// @brief Method <.ctor>b__143_0 addr 0x2e457ec size 0xc virtual false final false
  inline void __ctor_b__143_0(float_t v);

  /// @brief Method <Apply>g__HandleSelectionAndScroll|164_0 addr 0x2e42670 size 0x134 virtual false final false
  inline void _Apply_g__HandleSelectionAndScroll_164_0(int32_t index, ByRef<::UnityEngine::UIElements::__BaseVerticalCollectionView____c__DisplayClass164_0> _cordl_fixed_empty_name_whitespace);

  // Ctor Parameters [CppParam { name: "", ty: "BaseVerticalCollectionView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseVerticalCollectionView(BaseVerticalCollectionView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseVerticalCollectionView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseVerticalCollectionView(BaseVerticalCollectionView const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseVerticalCollectionView();

public:
  /// @brief Field onItemsChosen, offset: 0x3c0, size: 0x8, def value: None
  ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>* ___onItemsChosen;

  /// @brief Field onSelectionChange, offset: 0x3c8, size: 0x8, def value: None
  ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>* ___onSelectionChange;

  /// @brief Field onSelectedIndicesChange, offset: 0x3d0, size: 0x8, def value: None
  ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* ___onSelectedIndicesChange;

  /// @brief Field itemIndexChanged, offset: 0x3d8, size: 0x8, def value: None
  ::System::Action_2<int32_t, int32_t>* ___itemIndexChanged;

  /// @brief Field itemsSourceChanged, offset: 0x3e0, size: 0x8, def value: None
  ::System::Action* ___itemsSourceChanged;

  /// @brief Field m_GetItemId, offset: 0x3e8, size: 0x8, def value: None
  ::System::Func_2<int32_t, int32_t>* ___m_GetItemId;

  /// @brief Field m_MakeItem, offset: 0x3f0, size: 0x8, def value: None
  ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* ___m_MakeItem;

  /// @brief Field m_BindItem, offset: 0x3f8, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* ___m_BindItem;

  /// @brief Field <unbindItem>k__BackingField, offset: 0x400, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* ____unbindItem_k__BackingField;

  /// @brief Field <destroyItem>k__BackingField, offset: 0x408, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::UIElements::VisualElement*>* ____destroyItem_k__BackingField;

  /// @brief Field m_SelectionType, offset: 0x410, size: 0x4, def value: None
  ::UnityEngine::UIElements::SelectionType ___m_SelectionType;

  /// @brief Field m_HorizontalScrollingEnabled, offset: 0x414, size: 0x1, def value: None
  bool ___m_HorizontalScrollingEnabled;

  /// @brief Field m_ShowAlternatingRowBackgrounds, offset: 0x418, size: 0x4, def value: None
  ::UnityEngine::UIElements::AlternatingRowBackground ___m_ShowAlternatingRowBackgrounds;

  /// @brief Field m_FixedItemHeight, offset: 0x41c, size: 0x4, def value: None
  float_t ___m_FixedItemHeight;

  /// @brief Field m_ItemHeightIsInline, offset: 0x420, size: 0x1, def value: None
  bool ___m_ItemHeightIsInline;

  /// @brief Field m_VirtualizationMethod, offset: 0x424, size: 0x4, def value: None
  ::UnityEngine::UIElements::CollectionVirtualizationMethod ___m_VirtualizationMethod;

  /// @brief Field m_ScrollView, offset: 0x428, size: 0x8, def value: None
  ::UnityEngine::UIElements::ScrollView* ___m_ScrollView;

  /// @brief Field m_ViewController, offset: 0x430, size: 0x8, def value: None
  ::UnityEngine::UIElements::CollectionViewController* ___m_ViewController;

  /// @brief Field m_VirtualizationController, offset: 0x438, size: 0x8, def value: None
  ::UnityEngine::UIElements::CollectionVirtualizationController* ___m_VirtualizationController;

  /// @brief Field m_NavigationManipulator, offset: 0x440, size: 0x8, def value: None
  ::UnityEngine::UIElements::KeyboardNavigationManipulator* ___m_NavigationManipulator;

  /// @brief Field m_ScrollOffset, offset: 0x448, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_ScrollOffset;

  /// @brief Field m_SelectedIds, offset: 0x450, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___m_SelectedIds;

  /// @brief Field m_SelectedIndices, offset: 0x458, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___m_SelectedIndices;

  /// @brief Field m_SelectedItems, offset: 0x460, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Object*>* ___m_SelectedItems;

  /// @brief Field m_LastHeight, offset: 0x468, size: 0x4, def value: None
  float_t ___m_LastHeight;

  /// @brief Field m_IsRangeSelectionDirectionUp, offset: 0x46c, size: 0x1, def value: None
  bool ___m_IsRangeSelectionDirectionUp;

  /// @brief Field m_Dragger, offset: 0x470, size: 0x8, def value: None
  ::UnityEngine::UIElements::ListViewDragger* ___m_Dragger;

  /// @brief Field m_ItemIndexChangedCallback, offset: 0x478, size: 0x8, def value: None
  ::System::Action_2<int32_t, int32_t>* ___m_ItemIndexChangedCallback;

  /// @brief Field m_ItemsSourceChangedCallback, offset: 0x480, size: 0x8, def value: None
  ::System::Action* ___m_ItemsSourceChangedCallback;

  /// @brief Field m_TouchDownPosition, offset: 0x488, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_TouchDownPosition;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BaseVerticalCollectionView, 0x498>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::BaseVerticalCollectionView);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BaseVerticalCollectionView*, "UnityEngine.UIElements", "BaseVerticalCollectionView");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__BaseVerticalCollectionView____c__DisplayClass164_0, "UnityEngine.UIElements", "BaseVerticalCollectionView/<>c__DisplayClass164_0");
