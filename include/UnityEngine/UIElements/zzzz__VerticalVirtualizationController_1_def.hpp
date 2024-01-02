#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__CollectionVirtualizationController_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VerticalVirtualizationController_1)
namespace UnityEngine::UIElements {
template <typename T> class __VerticalVirtualizationController_1____c;
}
namespace UnityEngine::Pool {
template <typename T> class ObjectPool_1;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine::UIElements {
class BaseVerticalCollectionView;
}
namespace UnityEngine::UIElements {
class ReusableCollectionItem;
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
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename T> class VerticalVirtualizationController_1;
}
namespace UnityEngine::UIElements {
template <typename T> class __VerticalVirtualizationController_1____c;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::VerticalVirtualizationController_1);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::__VerticalVirtualizationController_1____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7369))
// CS Name: ::VerticalVirtualizationController`1::<>c<T>*
class CORDL_TYPE __VerticalVirtualizationController_1____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::UIElements::__VerticalVirtualizationController_1____c<T>* __9;

  /// @brief Field <>9__25_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__25_0, put = setStaticF___9__25_0))::System::Func_1<T>* __9__25_0;

  /// @brief Field <>9__25_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__25_1, put = setStaticF___9__25_1))::System::Action_1<T>* __9__25_1;

  static inline void setStaticF___9(::UnityEngine::UIElements::__VerticalVirtualizationController_1____c<T>* value);

  static inline ::UnityEngine::UIElements::__VerticalVirtualizationController_1____c<T>* getStaticF___9();

  static inline void setStaticF___9__25_0(::System::Func_1<T>* value);

  static inline ::System::Func_1<T>* getStaticF___9__25_0();

  static inline void setStaticF___9__25_1(::System::Action_1<T>* value);

  static inline ::System::Action_1<T>* getStaticF___9__25_1();

  static inline ::UnityEngine::UIElements::__VerticalVirtualizationController_1____c<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <.ctor>b__25_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T __ctor_b__25_0();

  /// @brief Method <.ctor>b__25_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __ctor_b__25_1(T i);

  // Ctor Parameters [CppParam { name: "", ty: "__VerticalVirtualizationController_1____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VerticalVirtualizationController_1____c(__VerticalVirtualizationController_1____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VerticalVirtualizationController_1____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VerticalVirtualizationController_1____c(__VerticalVirtualizationController_1____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VerticalVirtualizationController_1____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::VerticalVirtualizationController`1
// SizeInfo { instance_size: 96, native_size: 96, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7371))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7370))
// CS Name: ::UnityEngine.UIElements::VerticalVirtualizationController`1<T>*
class CORDL_TYPE VerticalVirtualizationController_1 : public ::UnityEngine::UIElements::CollectionVirtualizationController {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::__VerticalVirtualizationController_1____c<T>;

  /// @brief Field m_ListView, offset 0x18, size 0x8
  __declspec(property(get = __get_m_ListView, put = __set_m_ListView))::UnityEngine::UIElements::BaseVerticalCollectionView* m_ListView;

  /// @brief Field m_Pool, offset 0x20, size 0x8
  __declspec(property(get = __get_m_Pool, put = __set_m_Pool))::UnityEngine::Pool::ObjectPool_1<T>* m_Pool;

  /// @brief Field m_ActiveItems, offset 0x28, size 0x8
  __declspec(property(get = __get_m_ActiveItems, put = __set_m_ActiveItems))::System::Collections::Generic::List_1<T>* m_ActiveItems;

  /// @brief Field m_LastFocusedElementIndex, offset 0x30, size 0x4
  __declspec(property(get = __get_m_LastFocusedElementIndex, put = __set_m_LastFocusedElementIndex)) int32_t m_LastFocusedElementIndex;

  /// @brief Field m_LastFocusedElementTreeChildIndexes, offset 0x38, size 0x8
  __declspec(property(get = __get_m_LastFocusedElementTreeChildIndexes,
                      put = __set_m_LastFocusedElementTreeChildIndexes))::System::Collections::Generic::List_1<int32_t>* m_LastFocusedElementTreeChildIndexes;

  /// @brief Field m_FirstVisibleIndex, offset 0x40, size 0x4
  __declspec(property(get = __get_m_FirstVisibleIndex, put = __set_m_FirstVisibleIndex)) int32_t m_FirstVisibleIndex;

  /// @brief Field m_VisibleItemPredicateDelegate, offset 0x48, size 0x8
  __declspec(property(get = __get_m_VisibleItemPredicateDelegate, put = __set_m_VisibleItemPredicateDelegate))::System::Func_2<T, bool>* m_VisibleItemPredicateDelegate;

  /// @brief Field m_ScrollInsertionList, offset 0x50, size 0x8
  __declspec(property(get = __get_m_ScrollInsertionList, put = __set_m_ScrollInsertionList))::System::Collections::Generic::List_1<T>* m_ScrollInsertionList;

  /// @brief Field k_EmptyRows, offset 0x58, size 0x8
  __declspec(property(get = __get_k_EmptyRows, put = __set_k_EmptyRows))::UnityEngine::UIElements::VisualElement* k_EmptyRows;

  __declspec(property(get = get_activeItems))::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ReusableCollectionItem*>* activeItems;

  __declspec(property(get = get_firstVisibleItem)) T firstVisibleItem;

  __declspec(property(get = get_lastVisibleItem)) T lastVisibleItem;

  __declspec(property(get = get_visibleItemCount)) int32_t visibleItemCount;

  __declspec(property(get = get_lastVisibleIndex)) int32_t lastVisibleIndex;

  __declspec(property(get = get_lastHeight)) float_t lastHeight;

  constexpr ::UnityEngine::UIElements::BaseVerticalCollectionView*& __get_m_ListView();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::BaseVerticalCollectionView*> const& __get_m_ListView() const;

  constexpr void __set_m_ListView(::UnityEngine::UIElements::BaseVerticalCollectionView* value);

  constexpr ::UnityEngine::Pool::ObjectPool_1<T>*& __get_m_Pool();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Pool::ObjectPool_1<T>*> const& __get_m_Pool() const;

  constexpr void __set_m_Pool(::UnityEngine::Pool::ObjectPool_1<T>* value);

  constexpr ::System::Collections::Generic::List_1<T>*& __get_m_ActiveItems();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<T>*> const& __get_m_ActiveItems() const;

  constexpr void __set_m_ActiveItems(::System::Collections::Generic::List_1<T>* value);

  constexpr int32_t& __get_m_LastFocusedElementIndex();

  constexpr int32_t const& __get_m_LastFocusedElementIndex() const;

  constexpr void __set_m_LastFocusedElementIndex(int32_t value);

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __get_m_LastFocusedElementTreeChildIndexes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& __get_m_LastFocusedElementTreeChildIndexes() const;

  constexpr void __set_m_LastFocusedElementTreeChildIndexes(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr int32_t& __get_m_FirstVisibleIndex();

  constexpr int32_t const& __get_m_FirstVisibleIndex() const;

  constexpr void __set_m_FirstVisibleIndex(int32_t value);

  constexpr ::System::Func_2<T, bool>*& __get_m_VisibleItemPredicateDelegate();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<T, bool>*> const& __get_m_VisibleItemPredicateDelegate() const;

  constexpr void __set_m_VisibleItemPredicateDelegate(::System::Func_2<T, bool>* value);

  constexpr ::System::Collections::Generic::List_1<T>*& __get_m_ScrollInsertionList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<T>*> const& __get_m_ScrollInsertionList() const;

  constexpr void __set_m_ScrollInsertionList(::System::Collections::Generic::List_1<T>* value);

  constexpr ::UnityEngine::UIElements::VisualElement*& __get_k_EmptyRows();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __get_k_EmptyRows() const;

  constexpr void __set_k_EmptyRows(::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method get_activeItems, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ReusableCollectionItem*>* get_activeItems();

  /// @brief Method VisibleItemPredicate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool VisibleItemPredicate(T i);

  /// @brief Method get_firstVisibleItem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_firstVisibleItem();

  /// @brief Method get_lastVisibleItem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_lastVisibleItem();

  /// @brief Method get_visibleItemCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_visibleItemCount();

  /// @brief Method get_lastVisibleIndex, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_lastVisibleIndex();

  /// @brief Method get_lastHeight, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline float_t get_lastHeight();

  static inline ::UnityEngine::UIElements::VerticalVirtualizationController_1<T>* New_ctor(::UnityEngine::UIElements::BaseVerticalCollectionView* collectionView);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::BaseVerticalCollectionView* collectionView);

  /// @brief Method Refresh, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Refresh(bool rebuild);

  /// @brief Method Setup, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Setup(T recycledItem, int32_t newIndex);

  /// @brief Method OnFocus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnFocus(::UnityEngine::UIElements::VisualElement* leafTarget);

  /// @brief Method OnBlur, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnBlur(::UnityEngine::UIElements::VisualElement* willFocus);

  /// @brief Method HandleFocus, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void HandleFocus(::UnityEngine::UIElements::ReusableCollectionItem* recycledItem, int32_t previousIndex);

  /// @brief Method UpdateBackground, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UpdateBackground();

  /// @brief Method ReplaceActiveItem, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ReplaceActiveItem(int32_t index);

  /// @brief Method GetOrMakeItem, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline T GetOrMakeItem();

  /// @brief Method ReleaseItem, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ReleaseItem(int32_t activeItemsIndex);

  // Ctor Parameters [CppParam { name: "", ty: "VerticalVirtualizationController_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VerticalVirtualizationController_1(VerticalVirtualizationController_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VerticalVirtualizationController_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VerticalVirtualizationController_1(VerticalVirtualizationController_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VerticalVirtualizationController_1();

public:
  /// @brief Field m_ListView, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::BaseVerticalCollectionView* ___m_ListView;

  /// @brief Field m_Pool, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Pool::ObjectPool_1<T>* ___m_Pool;

  /// @brief Field m_ActiveItems, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<T>* ___m_ActiveItems;

  /// @brief Field m_LastFocusedElementIndex, offset: 0x30, size: 0x4, def value: None
  int32_t ___m_LastFocusedElementIndex;

  /// @brief Field m_LastFocusedElementTreeChildIndexes, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___m_LastFocusedElementTreeChildIndexes;

  /// @brief Field m_FirstVisibleIndex, offset: 0x40, size: 0x4, def value: None
  int32_t ___m_FirstVisibleIndex;

  /// @brief Field m_VisibleItemPredicateDelegate, offset: 0x48, size: 0x8, def value: None
  ::System::Func_2<T, bool>* ___m_VisibleItemPredicateDelegate;

  /// @brief Field m_ScrollInsertionList, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<T>* ___m_ScrollInsertionList;

  /// @brief Field k_EmptyRows, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___k_EmptyRows;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::VerticalVirtualizationController_1, "UnityEngine.UIElements", "VerticalVirtualizationController`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::__VerticalVirtualizationController_1____c, "UnityEngine.UIElements", "VerticalVirtualizationController`1/<>c");
