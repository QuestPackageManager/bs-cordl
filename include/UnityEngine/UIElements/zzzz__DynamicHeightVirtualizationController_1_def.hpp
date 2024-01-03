#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__VerticalVirtualizationController_1_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DynamicHeightVirtualizationController_1)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace System {
template <typename T> class Predicate_1;
}
namespace UnityEngine::UIElements {
class BaseVerticalCollectionView;
}
namespace UnityEngine::UIElements {
class GeometryChangedEvent;
}
namespace UnityEngine::UIElements {
class IVisualElementScheduledItem;
}
namespace UnityEngine::UIElements {
class ReusableCollectionItem;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename T> class DynamicHeightVirtualizationController_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::DynamicHeightVirtualizationController_1);
// Type: UnityEngine.UIElements::DynamicHeightVirtualizationController`1
// SizeInfo { instance_size: 168, native_size: 168, calculated_instance_size: 168, calculated_native_size: 168, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7370)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7370), inst: 5349 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7366))
// CS Name: ::UnityEngine.UIElements::DynamicHeightVirtualizationController`1<T>*
class CORDL_TYPE DynamicHeightVirtualizationController_1 : public ::UnityEngine::UIElements::VerticalVirtualizationController_1<T> {
public:
  // Declarations
  /// @brief Field m_ItemHeightCache, offset 0x60, size 0x8
  __declspec(property(get = __get_m_ItemHeightCache, put = __set_m_ItemHeightCache))::System::Collections::Generic::Dictionary_2<int32_t, float_t>* m_ItemHeightCache;

  /// @brief Field m_WaitingCache, offset 0x68, size 0x8
  __declspec(property(get = __get_m_WaitingCache, put = __set_m_WaitingCache))::System::Collections::Generic::HashSet_1<int32_t>* m_WaitingCache;

  /// @brief Field m_ForcedFirstVisibleItem, offset 0x70, size 0x4
  __declspec(property(get = __get_m_ForcedFirstVisibleItem, put = __set_m_ForcedFirstVisibleItem)) int32_t m_ForcedFirstVisibleItem;

  /// @brief Field m_ForcedLastVisibleItem, offset 0x74, size 0x4
  __declspec(property(get = __get_m_ForcedLastVisibleItem, put = __set_m_ForcedLastVisibleItem)) int32_t m_ForcedLastVisibleItem;

  /// @brief Field m_StickToBottom, offset 0x78, size 0x1
  __declspec(property(get = __get_m_StickToBottom, put = __set_m_StickToBottom)) bool m_StickToBottom;

  /// @brief Field m_AverageHeight, offset 0x7c, size 0x4
  __declspec(property(get = __get_m_AverageHeight, put = __set_m_AverageHeight)) float_t m_AverageHeight;

  /// @brief Field m_AccumulatedHeight, offset 0x80, size 0x4
  __declspec(property(get = __get_m_AccumulatedHeight, put = __set_m_AccumulatedHeight)) float_t m_AccumulatedHeight;

  /// @brief Field m_StoredPadding, offset 0x84, size 0x4
  __declspec(property(get = __get_m_StoredPadding, put = __set_m_StoredPadding)) float_t m_StoredPadding;

  /// @brief Field m_FillCallback, offset 0x88, size 0x8
  __declspec(property(get = __get_m_FillCallback, put = __set_m_FillCallback))::System::Action* m_FillCallback;

  /// @brief Field m_GeometryChangedCallback, offset 0x90, size 0x8
  __declspec(property(get = __get_m_GeometryChangedCallback, put = __set_m_GeometryChangedCallback))::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>* m_GeometryChangedCallback;

  /// @brief Field m_ScheduledItem, offset 0x98, size 0x8
  __declspec(property(get = __get_m_ScheduledItem, put = __set_m_ScheduledItem))::UnityEngine::UIElements::IVisualElementScheduledItem* m_ScheduledItem;

  /// @brief Field m_IndexOutOfBoundsPredicate, offset 0xa0, size 0x8
  __declspec(property(get = __get_m_IndexOutOfBoundsPredicate, put = __set_m_IndexOutOfBoundsPredicate))::System::Predicate_1<int32_t>* m_IndexOutOfBoundsPredicate;

  /// @brief Field InitialAverageHeight, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_InitialAverageHeight, put = setStaticF_InitialAverageHeight)) int32_t InitialAverageHeight;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, float_t>*& __get_m_ItemHeightCache();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, float_t>*> const& __get_m_ItemHeightCache() const;

  constexpr void __set_m_ItemHeightCache(::System::Collections::Generic::Dictionary_2<int32_t, float_t>* value);

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __get_m_WaitingCache();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<int32_t>*> const& __get_m_WaitingCache() const;

  constexpr void __set_m_WaitingCache(::System::Collections::Generic::HashSet_1<int32_t>* value);

  constexpr int32_t& __get_m_ForcedFirstVisibleItem();

  constexpr int32_t const& __get_m_ForcedFirstVisibleItem() const;

  constexpr void __set_m_ForcedFirstVisibleItem(int32_t value);

  constexpr int32_t& __get_m_ForcedLastVisibleItem();

  constexpr int32_t const& __get_m_ForcedLastVisibleItem() const;

  constexpr void __set_m_ForcedLastVisibleItem(int32_t value);

  constexpr bool& __get_m_StickToBottom();

  constexpr bool const& __get_m_StickToBottom() const;

  constexpr void __set_m_StickToBottom(bool value);

  constexpr float_t& __get_m_AverageHeight();

  constexpr float_t const& __get_m_AverageHeight() const;

  constexpr void __set_m_AverageHeight(float_t value);

  constexpr float_t& __get_m_AccumulatedHeight();

  constexpr float_t const& __get_m_AccumulatedHeight() const;

  constexpr void __set_m_AccumulatedHeight(float_t value);

  constexpr float_t& __get_m_StoredPadding();

  constexpr float_t const& __get_m_StoredPadding() const;

  constexpr void __set_m_StoredPadding(float_t value);

  constexpr ::System::Action*& __get_m_FillCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_m_FillCallback() const;

  constexpr void __set_m_FillCallback(::System::Action* value);

  constexpr ::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>*& __get_m_GeometryChangedCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>*> const& __get_m_GeometryChangedCallback() const;

  constexpr void __set_m_GeometryChangedCallback(::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>* value);

  constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem*& __get_m_ScheduledItem();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IVisualElementScheduledItem*> const& __get_m_ScheduledItem() const;

  constexpr void __set_m_ScheduledItem(::UnityEngine::UIElements::IVisualElementScheduledItem* value);

  constexpr ::System::Predicate_1<int32_t>*& __get_m_IndexOutOfBoundsPredicate();

  constexpr ::cordl_internals::to_const_pointer<::System::Predicate_1<int32_t>*> const& __get_m_IndexOutOfBoundsPredicate() const;

  constexpr void __set_m_IndexOutOfBoundsPredicate(::System::Predicate_1<int32_t>* value);

  static inline void setStaticF_InitialAverageHeight(int32_t value);

  static inline int32_t getStaticF_InitialAverageHeight();

  static inline ::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>* New_ctor(::UnityEngine::UIElements::BaseVerticalCollectionView* collectionView);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::BaseVerticalCollectionView* collectionView);

  /// @brief Method Refresh, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Refresh(bool rebuild);

  /// @brief Method ScrollToItem, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ScrollToItem(int32_t index);

  /// @brief Method Resize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Resize(::UnityEngine::Vector2 size, int32_t layoutPass);

  /// @brief Method OnScroll, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnScroll(::UnityEngine::Vector2 scrollOffset);

  /// @brief Method NeedsFill, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool NeedsFill();

  /// @brief Method Fill, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Fill();

  /// @brief Method GetIndexFromPosition, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetIndexFromPosition(::UnityEngine::Vector2 position);

  /// @brief Method GetItemHeight, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t GetItemHeight(int32_t index);

  /// @brief Method GetFirstVisibleItem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t GetFirstVisibleItem(float_t offset);

  /// @brief Method UpdateScrollViewContainer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UpdateScrollViewContainer(int32_t index, float_t previousHeight, float_t newHeight);

  /// @brief Method ApplyScrollViewUpdate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ApplyScrollViewUpdate();

  /// @brief Method OnViewportGeometryChanged, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnViewportGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent* evt);

  /// @brief Method GetContentHeight, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline float_t GetContentHeight();

  /// @brief Method GetContentHeightForIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline float_t GetContentHeightForIndex(int32_t lastIndex);

  /// @brief Method RegisterItemHeight, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RegisterItemHeight(int32_t index, float_t height);

  /// @brief Method UnregisterItemHeight, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UnregisterItemHeight(int32_t index, float_t height);

  /// @brief Method OnRecycledItemGeometryChanged, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnRecycledItemGeometryChanged(::UnityEngine::UIElements::ReusableCollectionItem* item);

  /// @brief Method GetOrMakeItem, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline T GetOrMakeItem();

  /// @brief Method ReplaceActiveItem, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ReplaceActiveItem(int32_t index);

  /// @brief Method ReleaseItem, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ReleaseItem(int32_t activeItemsIndex);

  /// @brief Method IsIndexOutOfBounds, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool IsIndexOutOfBounds(int32_t i);

  /// @brief Method <.ctor>b__13_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __ctor_b__13_0(::UnityEngine::UIElements::VisualElement* element);

  // Ctor Parameters [CppParam { name: "", ty: "DynamicHeightVirtualizationController_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DynamicHeightVirtualizationController_1(DynamicHeightVirtualizationController_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DynamicHeightVirtualizationController_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DynamicHeightVirtualizationController_1(DynamicHeightVirtualizationController_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamicHeightVirtualizationController_1();

public:
  /// @brief Field m_ItemHeightCache, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, float_t>* ___m_ItemHeightCache;

  /// @brief Field m_WaitingCache, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<int32_t>* ___m_WaitingCache;

  /// @brief Field m_ForcedFirstVisibleItem, offset: 0x70, size: 0x4, def value: None
  int32_t ___m_ForcedFirstVisibleItem;

  /// @brief Field m_ForcedLastVisibleItem, offset: 0x74, size: 0x4, def value: None
  int32_t ___m_ForcedLastVisibleItem;

  /// @brief Field m_StickToBottom, offset: 0x78, size: 0x1, def value: None
  bool ___m_StickToBottom;

  /// @brief Field m_AverageHeight, offset: 0x7c, size: 0x4, def value: None
  float_t ___m_AverageHeight;

  /// @brief Field m_AccumulatedHeight, offset: 0x80, size: 0x4, def value: None
  float_t ___m_AccumulatedHeight;

  /// @brief Field m_StoredPadding, offset: 0x84, size: 0x4, def value: None
  float_t ___m_StoredPadding;

  /// @brief Field m_FillCallback, offset: 0x88, size: 0x8, def value: None
  ::System::Action* ___m_FillCallback;

  /// @brief Field m_GeometryChangedCallback, offset: 0x90, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>* ___m_GeometryChangedCallback;

  /// @brief Field m_ScheduledItem, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::UIElements::IVisualElementScheduledItem* ___m_ScheduledItem;

  /// @brief Field m_IndexOutOfBoundsPredicate, offset: 0xa0, size: 0x8, def value: None
  ::System::Predicate_1<int32_t>* ___m_IndexOutOfBoundsPredicate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::DynamicHeightVirtualizationController_1, "UnityEngine.UIElements", "DynamicHeightVirtualizationController`1");
