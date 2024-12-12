#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VerticalVirtualizationController_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__CollectionVirtualizationController_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VerticalVirtualizationController_1)
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
template <typename TResult> class Func_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::Pool {
template <typename T> class ObjectPool_1;
}
namespace UnityEngine::UIElements {
class BaseVerticalCollectionView;
}
namespace UnityEngine::UIElements {
class ReusableCollectionItem;
}
namespace UnityEngine::UIElements {
class SerializedVirtualizationData;
}
namespace UnityEngine::UIElements {
template <typename T> class VerticalVirtualizationController_1___c;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename T> class VerticalVirtualizationController_1;
}
namespace UnityEngine::UIElements {
template <typename T> class VerticalVirtualizationController_1___c;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::VerticalVirtualizationController_1);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::VerticalVirtualizationController_1___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.VerticalVirtualizationController`1/<>c<T>
class CORDL_TYPE VerticalVirtualizationController_1___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::VerticalVirtualizationController_1___c<T>* __9;

  /// @brief Field <>9__30_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__30_0, put = setStaticF___9__30_0)) ::System::Func_1<T>* __9__30_0;

  /// @brief Field <>9__30_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__30_1, put = setStaticF___9__30_1)) ::System::Action_1<T>* __9__30_1;

  /// @brief Field <>9__30_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__30_2, put = setStaticF___9__30_2)) ::System::Action_1<T>* __9__30_2;

  static inline ::UnityEngine::UIElements::VerticalVirtualizationController_1___c<T>* New_ctor();

  /// @brief Method <.ctor>b__30_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T __ctor_b__30_0();

  /// @brief Method <.ctor>b__30_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __ctor_b__30_1(T i);

  /// @brief Method <.ctor>b__30_2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __ctor_b__30_2(T i);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::VerticalVirtualizationController_1___c<T>* getStaticF___9();

  static inline ::System::Func_1<T>* getStaticF___9__30_0();

  static inline ::System::Action_1<T>* getStaticF___9__30_1();

  static inline ::System::Action_1<T>* getStaticF___9__30_2();

  static inline void setStaticF___9(::UnityEngine::UIElements::VerticalVirtualizationController_1___c<T>* value);

  static inline void setStaticF___9__30_0(::System::Func_1<T>* value);

  static inline void setStaticF___9__30_1(::System::Action_1<T>* value);

  static inline void setStaticF___9__30_2(::System::Action_1<T>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VerticalVirtualizationController_1___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VerticalVirtualizationController_1___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VerticalVirtualizationController_1___c(VerticalVirtualizationController_1___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VerticalVirtualizationController_1___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VerticalVirtualizationController_1___c(VerticalVirtualizationController_1___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5487 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.CollectionVirtualizationController
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.VerticalVirtualizationController`1<T>
class CORDL_TYPE VerticalVirtualizationController_1 : public ::UnityEngine::UIElements::CollectionVirtualizationController {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::VerticalVirtualizationController_1___c<T>;

  __declspec(property(get = get_activeItems)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ReusableCollectionItem*>* activeItems;

  __declspec(property(get = get_alwaysRebindOnRefresh)) bool alwaysRebindOnRefresh;

  __declspec(property(get = get_firstVisibleIndex, put = set_firstVisibleIndex)) int32_t firstVisibleIndex;

  __declspec(property(get = get_firstVisibleItem)) T firstVisibleItem;

  __declspec(property(get = get_itemsCount)) int32_t itemsCount;

  __declspec(property(get = get_lastHeight)) float_t lastHeight;

  __declspec(property(get = get_lastVisibleItem)) T lastVisibleItem;

  /// @brief Field m_ActiveItems, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ActiveItems, put = __cordl_internal_set_m_ActiveItems)) ::System::Collections::Generic::List_1<T>* m_ActiveItems;

  /// @brief Field m_CollectionView, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CollectionView, put = __cordl_internal_set_m_CollectionView)) ::UnityEngine::UIElements::BaseVerticalCollectionView* m_CollectionView;

  /// @brief Field m_DraggedItem, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DraggedItem, put = __cordl_internal_set_m_DraggedItem)) T m_DraggedItem;

  /// @brief Field m_EmptyRows, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EmptyRows, put = __cordl_internal_set_m_EmptyRows)) ::UnityEngine::UIElements::VisualElement* m_EmptyRows;

  /// @brief Field m_LastFocusedElementIndex, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LastFocusedElementIndex, put = __cordl_internal_set_m_LastFocusedElementIndex)) int32_t m_LastFocusedElementIndex;

  /// @brief Field m_LastFocusedElementTreeChildIndexes, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LastFocusedElementTreeChildIndexes,
                      put = __cordl_internal_set_m_LastFocusedElementTreeChildIndexes)) ::System::Collections::Generic::List_1<int32_t>* m_LastFocusedElementTreeChildIndexes;

  /// @brief Field m_Pool, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Pool, put = __cordl_internal_set_m_Pool)) ::UnityEngine::Pool::ObjectPool_1<T>* m_Pool;

  /// @brief Field m_ScrollInsertionList, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ScrollInsertionList, put = __cordl_internal_set_m_ScrollInsertionList)) ::System::Collections::Generic::List_1<T>* m_ScrollInsertionList;

  /// @brief Field m_VisibleItemPredicateDelegate, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VisibleItemPredicateDelegate, put = __cordl_internal_set_m_VisibleItemPredicateDelegate)) ::System::Func_2<T, bool>* m_VisibleItemPredicateDelegate;

  __declspec(property(get = get_serializedData)) ::UnityEngine::UIElements::SerializedVirtualizationData* serializedData;

  __declspec(property(get = get_visibleItemCount)) int32_t visibleItemCount;

  /// @brief Method EndDrag, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void EndDrag(int32_t dropIndex);

  /// @brief Method GetDraggedIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t GetDraggedIndex();

  /// @brief Method GetOrMakeItemAtIndex, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline T GetOrMakeItemAtIndex(int32_t activeItemIndex, int32_t scrollViewIndex);

  /// @brief Method HandleFocus, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void HandleFocus(::UnityEngine::UIElements::ReusableCollectionItem* recycledItem, int32_t previousIndex);

  static inline ::UnityEngine::UIElements::VerticalVirtualizationController_1<T>* New_ctor(::UnityEngine::UIElements::BaseVerticalCollectionView* collectionView);

  /// @brief Method OnBlur, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnBlur(::UnityEngine::UIElements::VisualElement* willFocus);

  /// @brief Method OnDestroyItem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnDestroyItem(::UnityEngine::UIElements::ReusableCollectionItem* item);

  /// @brief Method OnFocus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnFocus(::UnityEngine::UIElements::VisualElement* leafTarget);

  /// @brief Method Refresh, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Refresh(bool rebuild);

  /// @brief Method ReleaseItem, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ReleaseItem(int32_t activeItemsIndex);

  /// @brief Method Setup, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Setup(T recycledItem, int32_t newIndex);

  /// @brief Method StartDragItem, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void StartDragItem(::UnityEngine::UIElements::ReusableCollectionItem* item);

  /// @brief Method UpdateBackground, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UpdateBackground();

  /// @brief Method VisibleItemPredicate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool VisibleItemPredicate(T i);

  constexpr ::System::Collections::Generic::List_1<T>* const& __cordl_internal_get_m_ActiveItems() const;

  constexpr ::System::Collections::Generic::List_1<T>*& __cordl_internal_get_m_ActiveItems();

  constexpr ::UnityEngine::UIElements::BaseVerticalCollectionView* const& __cordl_internal_get_m_CollectionView() const;

  constexpr ::UnityEngine::UIElements::BaseVerticalCollectionView*& __cordl_internal_get_m_CollectionView();

  constexpr T const& __cordl_internal_get_m_DraggedItem() const;

  constexpr T& __cordl_internal_get_m_DraggedItem();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_EmptyRows() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_EmptyRows();

  constexpr int32_t const& __cordl_internal_get_m_LastFocusedElementIndex() const;

  constexpr int32_t& __cordl_internal_get_m_LastFocusedElementIndex();

  constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_m_LastFocusedElementTreeChildIndexes() const;

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_m_LastFocusedElementTreeChildIndexes();

  constexpr ::UnityEngine::Pool::ObjectPool_1<T>* const& __cordl_internal_get_m_Pool() const;

  constexpr ::UnityEngine::Pool::ObjectPool_1<T>*& __cordl_internal_get_m_Pool();

  constexpr ::System::Collections::Generic::List_1<T>* const& __cordl_internal_get_m_ScrollInsertionList() const;

  constexpr ::System::Collections::Generic::List_1<T>*& __cordl_internal_get_m_ScrollInsertionList();

  constexpr ::System::Func_2<T, bool>* const& __cordl_internal_get_m_VisibleItemPredicateDelegate() const;

  constexpr ::System::Func_2<T, bool>*& __cordl_internal_get_m_VisibleItemPredicateDelegate();

  constexpr void __cordl_internal_set_m_ActiveItems(::System::Collections::Generic::List_1<T>* value);

  constexpr void __cordl_internal_set_m_CollectionView(::UnityEngine::UIElements::BaseVerticalCollectionView* value);

  constexpr void __cordl_internal_set_m_DraggedItem(T value);

  constexpr void __cordl_internal_set_m_EmptyRows(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_LastFocusedElementIndex(int32_t value);

  constexpr void __cordl_internal_set_m_LastFocusedElementTreeChildIndexes(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr void __cordl_internal_set_m_Pool(::UnityEngine::Pool::ObjectPool_1<T>* value);

  constexpr void __cordl_internal_set_m_ScrollInsertionList(::System::Collections::Generic::List_1<T>* value);

  constexpr void __cordl_internal_set_m_VisibleItemPredicateDelegate(::System::Func_2<T, bool>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::BaseVerticalCollectionView* collectionView);

  /// @brief Method get_activeItems, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ReusableCollectionItem*>* get_activeItems();

  /// @brief Method get_alwaysRebindOnRefresh, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_alwaysRebindOnRefresh();

  /// @brief Method get_firstVisibleIndex, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_firstVisibleIndex();

  /// @brief Method get_firstVisibleItem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_firstVisibleItem();

  /// @brief Method get_itemsCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_itemsCount();

  /// @brief Method get_lastHeight, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline float_t get_lastHeight();

  /// @brief Method get_lastVisibleItem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_lastVisibleItem();

  /// @brief Method get_serializedData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::SerializedVirtualizationData* get_serializedData();

  /// @brief Method get_visibleItemCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_visibleItemCount();

  /// @brief Method set_firstVisibleIndex, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_firstVisibleIndex(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VerticalVirtualizationController_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VerticalVirtualizationController_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VerticalVirtualizationController_1(VerticalVirtualizationController_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VerticalVirtualizationController_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VerticalVirtualizationController_1(VerticalVirtualizationController_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5488 };

  /// @brief Field m_Pool, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Pool::ObjectPool_1<T>* ___m_Pool;

  /// @brief Field m_CollectionView, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::BaseVerticalCollectionView* ___m_CollectionView;

  /// @brief Field m_ActiveItems, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<T>* ___m_ActiveItems;

  /// @brief Field m_DraggedItem, offset: 0x30, size: 0x8, def value: None
  T ___m_DraggedItem;

  /// @brief Field m_LastFocusedElementIndex, offset: 0x38, size: 0x4, def value: None
  int32_t ___m_LastFocusedElementIndex;

  /// @brief Field m_LastFocusedElementTreeChildIndexes, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___m_LastFocusedElementTreeChildIndexes;

  /// @brief Field m_VisibleItemPredicateDelegate, offset: 0x48, size: 0x8, def value: None
  ::System::Func_2<T, bool>* ___m_VisibleItemPredicateDelegate;

  /// @brief Field m_ScrollInsertionList, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<T>* ___m_ScrollInsertionList;

  /// @brief Field m_EmptyRows, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_EmptyRows;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::VerticalVirtualizationController_1, "UnityEngine.UIElements", "VerticalVirtualizationController`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::VerticalVirtualizationController_1___c, "UnityEngine.UIElements", "VerticalVirtualizationController`1/<>c");
