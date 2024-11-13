#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DynamicHeightVirtualizationController_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__DynamicHeightVirtualizationController_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__VerticalVirtualizationController_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
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
class IVisualElementScheduledItem;
}
namespace UnityEngine::UIElements {
class ReusableCollectionItem;
}
namespace UnityEngine::UIElements {
template <typename T> struct __DynamicHeightVirtualizationController_1__ContentHeightCacheInfo;
}
namespace UnityEngine::UIElements {
template <typename T> struct __DynamicHeightVirtualizationController_1__ScrollDirection;
}
namespace UnityEngine::UIElements {
template <typename T> struct __DynamicHeightVirtualizationController_1__VirtualizationChange;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename T> struct __DynamicHeightVirtualizationController_1__ScrollDirection;
}
namespace UnityEngine::UIElements {
template <typename T> struct __DynamicHeightVirtualizationController_1__VirtualizationChange;
}
namespace UnityEngine::UIElements {
template <typename T> class DynamicHeightVirtualizationController_1;
}
namespace UnityEngine::UIElements {
template <typename T> struct __DynamicHeightVirtualizationController_1__ContentHeightCacheInfo;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::UIElements::__DynamicHeightVirtualizationController_1__ScrollDirection);
MARK_GEN_VAL_T(::UnityEngine::UIElements::__DynamicHeightVirtualizationController_1__VirtualizationChange);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::DynamicHeightVirtualizationController_1);
MARK_GEN_VAL_T(::UnityEngine::UIElements::__DynamicHeightVirtualizationController_1__ContentHeightCacheInfo);
// Type: ::ContentHeightCacheInfo
// SizeInfo { instance_size: 8, native_size: 24, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::DynamicHeightVirtualizationController`1::ContentHeightCacheInfo<T>
struct CORDL_TYPE __DynamicHeightVirtualizationController_1__ContentHeightCacheInfo {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(float_t sum, int32_t count);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DynamicHeightVirtualizationController_1__ContentHeightCacheInfo();

  // Ctor Parameters [CppParam { name: "sum", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __DynamicHeightVirtualizationController_1__ContentHeightCacheInfo(float_t sum, int32_t count) noexcept;

  /// @brief Field sum, offset: 0x0, size: 0x4, def value: None
  float_t sum;

  /// @brief Field count, offset: 0x4, size: 0x4, def value: None
  int32_t count;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5453 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Type: ::VirtualizationChange
// SizeInfo { instance_size: 4, native_size: 20, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::DynamicHeightVirtualizationController`1::VirtualizationChange<T>
struct CORDL_TYPE __DynamicHeightVirtualizationController_1__VirtualizationChange {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____DynamicHeightVirtualizationController_1__VirtualizationChange_Unwrapped
  enum struct ____DynamicHeightVirtualizationController_1__VirtualizationChange_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Resize = static_cast<int32_t>(0x1),
    __E_Scroll = static_cast<int32_t>(0x2),
    __E_ForcedScroll = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____DynamicHeightVirtualizationController_1__VirtualizationChange_Unwrapped() const noexcept {
    return static_cast<____DynamicHeightVirtualizationController_1__VirtualizationChange_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DynamicHeightVirtualizationController_1__VirtualizationChange();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __DynamicHeightVirtualizationController_1__VirtualizationChange(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ForcedScroll value: static_cast<int32_t>(0x3)
  static ::UnityEngine::UIElements::__DynamicHeightVirtualizationController_1__VirtualizationChange<T> const ForcedScroll;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::__DynamicHeightVirtualizationController_1__VirtualizationChange<T> const None;

  /// @brief Field Resize value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::__DynamicHeightVirtualizationController_1__VirtualizationChange<T> const Resize;

  /// @brief Field Scroll value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::__DynamicHeightVirtualizationController_1__VirtualizationChange<T> const Scroll;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5454 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Type: ::ScrollDirection
// SizeInfo { instance_size: 4, native_size: 20, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::DynamicHeightVirtualizationController`1::ScrollDirection<T>
struct CORDL_TYPE __DynamicHeightVirtualizationController_1__ScrollDirection {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____DynamicHeightVirtualizationController_1__ScrollDirection_Unwrapped
  enum struct ____DynamicHeightVirtualizationController_1__ScrollDirection_Unwrapped : int32_t {
    __E_Idle = static_cast<int32_t>(0x0),
    __E_Up = static_cast<int32_t>(0x1),
    __E_Down = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____DynamicHeightVirtualizationController_1__ScrollDirection_Unwrapped() const noexcept {
    return static_cast<____DynamicHeightVirtualizationController_1__ScrollDirection_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DynamicHeightVirtualizationController_1__ScrollDirection();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __DynamicHeightVirtualizationController_1__ScrollDirection(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Down value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::__DynamicHeightVirtualizationController_1__ScrollDirection<T> const Down;

  /// @brief Field Idle value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::__DynamicHeightVirtualizationController_1__ScrollDirection<T> const Idle;

  /// @brief Field Up value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::__DynamicHeightVirtualizationController_1__ScrollDirection<T> const Up;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5455 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::DynamicHeightVirtualizationController`1
// SizeInfo { instance_size: 232, native_size: 232, calculated_instance_size: 232, calculated_native_size: 232, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::UnityEngine.UIElements::DynamicHeightVirtualizationController`1<T>*
class CORDL_TYPE DynamicHeightVirtualizationController_1 : public ::UnityEngine::UIElements::VerticalVirtualizationController_1<T> {
public:
  // Declarations
  using ContentHeightCacheInfo = ::UnityEngine::UIElements::__DynamicHeightVirtualizationController_1__ContentHeightCacheInfo<T>;

  using ScrollDirection = ::UnityEngine::UIElements::__DynamicHeightVirtualizationController_1__ScrollDirection<T>;

  using VirtualizationChange = ::UnityEngine::UIElements::__DynamicHeightVirtualizationController_1__VirtualizationChange<T>;

  __declspec(property(get = get_alwaysRebindOnRefresh)) bool alwaysRebindOnRefresh;

  __declspec(property(get = get_anchorOffset, put = set_anchorOffset)) float_t anchorOffset;

  __declspec(property(get = get_anchoredIndex, put = set_anchoredIndex)) int32_t anchoredIndex;

  __declspec(property(get = get_contentHeight, put = set_contentHeight)) float_t contentHeight;

  __declspec(property(get = get_contentPadding, put = set_contentPadding)) float_t contentPadding;

  __declspec(property(get = get_defaultExpectedHeight)) float_t defaultExpectedHeight;

  /// @brief Field m_AccumulatedHeight, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AccumulatedHeight, put = __cordl_internal_set_m_AccumulatedHeight)) float_t m_AccumulatedHeight;

  /// @brief Field m_ContentHeightCache, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ContentHeightCache, put = __cordl_internal_set_m_ContentHeightCache)) ::System::Collections::Generic::Dictionary_2<
      int32_t, ::UnityEngine::UIElements::__DynamicHeightVirtualizationController_1__ContentHeightCacheInfo<T>>* m_ContentHeightCache;

  /// @brief Field m_DelayedScrollOffset, offset 0x94, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DelayedScrollOffset, put = __cordl_internal_set_m_DelayedScrollOffset)) ::UnityEngine::Vector2 m_DelayedScrollOffset;

  /// @brief Field m_FillCallback, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FillCallback, put = __cordl_internal_set_m_FillCallback)) ::System::Action* m_FillCallback;

  /// @brief Field m_ForcedFirstVisibleItem, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ForcedFirstVisibleItem, put = __cordl_internal_set_m_ForcedFirstVisibleItem)) int32_t m_ForcedFirstVisibleItem;

  /// @brief Field m_ForcedLastVisibleItem, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ForcedLastVisibleItem, put = __cordl_internal_set_m_ForcedLastVisibleItem)) int32_t m_ForcedLastVisibleItem;

  /// @brief Field m_GeometryChangedCallback, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GeometryChangedCallback,
                      put = __cordl_internal_set_m_GeometryChangedCallback)) ::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>* m_GeometryChangedCallback;

  /// @brief Field m_HighestCachedIndex, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HighestCachedIndex, put = __cordl_internal_set_m_HighestCachedIndex)) int32_t m_HighestCachedIndex;

  /// @brief Field m_IndexOutOfBoundsPredicate, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_IndexOutOfBoundsPredicate, put = __cordl_internal_set_m_IndexOutOfBoundsPredicate)) ::System::Predicate_1<int32_t>* m_IndexOutOfBoundsPredicate;

  /// @brief Field m_ItemHeightCache, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ItemHeightCache, put = __cordl_internal_set_m_ItemHeightCache)) ::System::Collections::Generic::Dictionary_2<int32_t, float_t>* m_ItemHeightCache;

  /// @brief Field m_LastChange, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LastChange, put = __cordl_internal_set_m_LastChange)) ::UnityEngine::UIElements::__DynamicHeightVirtualizationController_1__VirtualizationChange<T>
      m_LastChange;

  /// @brief Field m_MinimumItemHeight, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MinimumItemHeight, put = __cordl_internal_set_m_MinimumItemHeight)) float_t m_MinimumItemHeight;

  /// @brief Field m_ScheduledItem, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ScheduledItem, put = __cordl_internal_set_m_ScheduledItem)) ::UnityEngine::UIElements::IVisualElementScheduledItem* m_ScheduledItem;

  /// @brief Field m_ScrollCallback, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ScrollCallback, put = __cordl_internal_set_m_ScrollCallback)) ::System::Action* m_ScrollCallback;

  /// @brief Field m_ScrollDirection, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ScrollDirection,
                      put = __cordl_internal_set_m_ScrollDirection)) ::UnityEngine::UIElements::__DynamicHeightVirtualizationController_1__ScrollDirection<T>
      m_ScrollDirection;

  /// @brief Field m_ScrollResetCallback, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ScrollResetCallback, put = __cordl_internal_set_m_ScrollResetCallback)) ::System::Action* m_ScrollResetCallback;

  /// @brief Field m_ScrollResetScheduledItem, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ScrollResetScheduledItem,
                      put = __cordl_internal_set_m_ScrollResetScheduledItem)) ::UnityEngine::UIElements::IVisualElementScheduledItem* m_ScrollResetScheduledItem;

  /// @brief Field m_ScrollScheduledItem, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ScrollScheduledItem,
                      put = __cordl_internal_set_m_ScrollScheduledItem)) ::UnityEngine::UIElements::IVisualElementScheduledItem* m_ScrollScheduledItem;

  /// @brief Field m_StickToBottom, offset 0x88, size 0x1
  __declspec(property(get = __cordl_internal_get_m_StickToBottom, put = __cordl_internal_set_m_StickToBottom)) bool m_StickToBottom;

  /// @brief Field m_WaitingCache, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_WaitingCache, put = __cordl_internal_set_m_WaitingCache)) ::System::Collections::Generic::HashSet_1<int32_t>* m_WaitingCache;

  __declspec(property(get = get_viewportMaxOffset)) float_t viewportMaxOffset;

  /// @brief Method ApplyScrollViewUpdate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ApplyScrollViewUpdate(bool dimensionsOnly);

  /// @brief Method CleanItemHeightCache, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CleanItemHeightCache();

  /// @brief Method CycleItems, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CycleItems(int32_t firstIndex);

  /// @brief Method EndDrag, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void EndDrag(int32_t dropIndex);

  /// @brief Method Fill, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Fill();

  /// @brief Method GetCachedContentHeight, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::__DynamicHeightVirtualizationController_1__ContentHeightCacheInfo<T> GetCachedContentHeight(int32_t index);

  /// @brief Method GetContentHeightForIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline float_t GetContentHeightForIndex(int32_t lastIndex);

  /// @brief Method GetExpectedContentHeight, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t GetExpectedContentHeight();

  /// @brief Method GetExpectedItemHeight, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t GetExpectedItemHeight(int32_t index);

  /// @brief Method GetFirstVisibleItem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t GetFirstVisibleItem(float_t offset);

  /// @brief Method GetIndexFromPosition, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetIndexFromPosition(::UnityEngine::Vector2 position);

  /// @brief Method GetOrMakeItemAtIndex, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline T GetOrMakeItemAtIndex(int32_t activeItemIndex, int32_t scrollViewIndex);

  /// @brief Method HideItem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void HideItem(int32_t activeItemsIndex);

  /// @brief Method IsIndexOutOfBounds, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool IsIndexOutOfBounds(int32_t i);

  /// @brief Method MarkWaitingForLayout, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void MarkWaitingForLayout(T item);

  /// @brief Method NeedsFill, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool NeedsFill();

  static inline ::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>* New_ctor(::UnityEngine::UIElements::BaseVerticalCollectionView* collectionView);

  /// @brief Method OnRecycledItemGeometryChanged, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnRecycledItemGeometryChanged(::UnityEngine::UIElements::ReusableCollectionItem* item);

  /// @brief Method OnScroll, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnScroll(::UnityEngine::Vector2 scrollOffset);

  /// @brief Method OnScrollUpdate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnScrollUpdate();

  /// @brief Method Refresh, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Refresh(bool rebuild);

  /// @brief Method RegisterItemHeight, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RegisterItemHeight(int32_t index, float_t height);

  /// @brief Method ReleaseItem, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ReleaseItem(int32_t activeItemsIndex);

  /// @brief Method ResetScroll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ResetScroll();

  /// @brief Method Resize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Resize(::UnityEngine::Vector2 size);

  /// @brief Method ScheduleFill, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ScheduleFill();

  /// @brief Method ScheduleScroll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ScheduleScroll();

  /// @brief Method ScheduleScrollDirectionReset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ScheduleScrollDirectionReset();

  /// @brief Method ScrollToItem, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ScrollToItem(int32_t index);

  /// @brief Method StartDragItem, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void StartDragItem(::UnityEngine::UIElements::ReusableCollectionItem* item);

  /// @brief Method UnregisterItemHeight, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UnregisterItemHeight(int32_t index);

  /// @brief Method UpdateAnchor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UpdateAnchor();

  /// @brief Method UpdateRegisteredHeight, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool UpdateRegisteredHeight(::UnityEngine::UIElements::ReusableCollectionItem* item);

  /// @brief Method UpdateScrollViewContainer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UpdateScrollViewContainer(float_t previousHeight, float_t newHeight);

  constexpr float_t const& __cordl_internal_get_m_AccumulatedHeight() const;

  constexpr float_t& __cordl_internal_get_m_AccumulatedHeight();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::UIElements::__DynamicHeightVirtualizationController_1__ContentHeightCacheInfo<T>>*&
  __cordl_internal_get_m_ContentHeightCache();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::UIElements::__DynamicHeightVirtualizationController_1__ContentHeightCacheInfo<T>>*> const&
  __cordl_internal_get_m_ContentHeightCache() const;

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_DelayedScrollOffset() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_DelayedScrollOffset();

  constexpr ::System::Action*& __cordl_internal_get_m_FillCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_m_FillCallback() const;

  constexpr int32_t const& __cordl_internal_get_m_ForcedFirstVisibleItem() const;

  constexpr int32_t& __cordl_internal_get_m_ForcedFirstVisibleItem();

  constexpr int32_t const& __cordl_internal_get_m_ForcedLastVisibleItem() const;

  constexpr int32_t& __cordl_internal_get_m_ForcedLastVisibleItem();

  constexpr ::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>*& __cordl_internal_get_m_GeometryChangedCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>*> const& __cordl_internal_get_m_GeometryChangedCallback() const;

  constexpr int32_t const& __cordl_internal_get_m_HighestCachedIndex() const;

  constexpr int32_t& __cordl_internal_get_m_HighestCachedIndex();

  constexpr ::System::Predicate_1<int32_t>*& __cordl_internal_get_m_IndexOutOfBoundsPredicate();

  constexpr ::cordl_internals::to_const_pointer<::System::Predicate_1<int32_t>*> const& __cordl_internal_get_m_IndexOutOfBoundsPredicate() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, float_t>*& __cordl_internal_get_m_ItemHeightCache();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, float_t>*> const& __cordl_internal_get_m_ItemHeightCache() const;

  constexpr ::UnityEngine::UIElements::__DynamicHeightVirtualizationController_1__VirtualizationChange<T> const& __cordl_internal_get_m_LastChange() const;

  constexpr ::UnityEngine::UIElements::__DynamicHeightVirtualizationController_1__VirtualizationChange<T>& __cordl_internal_get_m_LastChange();

  constexpr float_t const& __cordl_internal_get_m_MinimumItemHeight() const;

  constexpr float_t& __cordl_internal_get_m_MinimumItemHeight();

  constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem*& __cordl_internal_get_m_ScheduledItem();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IVisualElementScheduledItem*> const& __cordl_internal_get_m_ScheduledItem() const;

  constexpr ::System::Action*& __cordl_internal_get_m_ScrollCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_m_ScrollCallback() const;

  constexpr ::UnityEngine::UIElements::__DynamicHeightVirtualizationController_1__ScrollDirection<T> const& __cordl_internal_get_m_ScrollDirection() const;

  constexpr ::UnityEngine::UIElements::__DynamicHeightVirtualizationController_1__ScrollDirection<T>& __cordl_internal_get_m_ScrollDirection();

  constexpr ::System::Action*& __cordl_internal_get_m_ScrollResetCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_m_ScrollResetCallback() const;

  constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem*& __cordl_internal_get_m_ScrollResetScheduledItem();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IVisualElementScheduledItem*> const& __cordl_internal_get_m_ScrollResetScheduledItem() const;

  constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem*& __cordl_internal_get_m_ScrollScheduledItem();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IVisualElementScheduledItem*> const& __cordl_internal_get_m_ScrollScheduledItem() const;

  constexpr bool const& __cordl_internal_get_m_StickToBottom() const;

  constexpr bool& __cordl_internal_get_m_StickToBottom();

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get_m_WaitingCache();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<int32_t>*> const& __cordl_internal_get_m_WaitingCache() const;

  constexpr void __cordl_internal_set_m_AccumulatedHeight(float_t value);

  constexpr void __cordl_internal_set_m_ContentHeightCache(
      ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::UIElements::__DynamicHeightVirtualizationController_1__ContentHeightCacheInfo<T>>* value);

  constexpr void __cordl_internal_set_m_DelayedScrollOffset(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_FillCallback(::System::Action* value);

  constexpr void __cordl_internal_set_m_ForcedFirstVisibleItem(int32_t value);

  constexpr void __cordl_internal_set_m_ForcedLastVisibleItem(int32_t value);

  constexpr void __cordl_internal_set_m_GeometryChangedCallback(::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>* value);

  constexpr void __cordl_internal_set_m_HighestCachedIndex(int32_t value);

  constexpr void __cordl_internal_set_m_IndexOutOfBoundsPredicate(::System::Predicate_1<int32_t>* value);

  constexpr void __cordl_internal_set_m_ItemHeightCache(::System::Collections::Generic::Dictionary_2<int32_t, float_t>* value);

  constexpr void __cordl_internal_set_m_LastChange(::UnityEngine::UIElements::__DynamicHeightVirtualizationController_1__VirtualizationChange<T> value);

  constexpr void __cordl_internal_set_m_MinimumItemHeight(float_t value);

  constexpr void __cordl_internal_set_m_ScheduledItem(::UnityEngine::UIElements::IVisualElementScheduledItem* value);

  constexpr void __cordl_internal_set_m_ScrollCallback(::System::Action* value);

  constexpr void __cordl_internal_set_m_ScrollDirection(::UnityEngine::UIElements::__DynamicHeightVirtualizationController_1__ScrollDirection<T> value);

  constexpr void __cordl_internal_set_m_ScrollResetCallback(::System::Action* value);

  constexpr void __cordl_internal_set_m_ScrollResetScheduledItem(::UnityEngine::UIElements::IVisualElementScheduledItem* value);

  constexpr void __cordl_internal_set_m_ScrollScheduledItem(::UnityEngine::UIElements::IVisualElementScheduledItem* value);

  constexpr void __cordl_internal_set_m_StickToBottom(bool value);

  constexpr void __cordl_internal_set_m_WaitingCache(::System::Collections::Generic::HashSet_1<int32_t>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::BaseVerticalCollectionView* collectionView);

  /// @brief Method get_alwaysRebindOnRefresh, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_alwaysRebindOnRefresh();

  /// @brief Method get_anchorOffset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline float_t get_anchorOffset();

  /// @brief Method get_anchoredIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_anchoredIndex();

  /// @brief Method get_contentHeight, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline float_t get_contentHeight();

  /// @brief Method get_contentPadding, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline float_t get_contentPadding();

  /// @brief Method get_defaultExpectedHeight, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline float_t get_defaultExpectedHeight();

  /// @brief Method get_viewportMaxOffset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline float_t get_viewportMaxOffset();

  /// @brief Method set_anchorOffset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_anchorOffset(float_t value);

  /// @brief Method set_anchoredIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_anchoredIndex(int32_t value);

  /// @brief Method set_contentHeight, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_contentHeight(float_t value);

  /// @brief Method set_contentPadding, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_contentPadding(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamicHeightVirtualizationController_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DynamicHeightVirtualizationController_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DynamicHeightVirtualizationController_1(DynamicHeightVirtualizationController_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DynamicHeightVirtualizationController_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DynamicHeightVirtualizationController_1(DynamicHeightVirtualizationController_1 const&) = delete;

  /// @brief Field m_HighestCachedIndex, offset: 0x60, size: 0x4, def value: None
  int32_t ___m_HighestCachedIndex;

  /// @brief Field m_ItemHeightCache, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, float_t>* ___m_ItemHeightCache;

  /// @brief Field m_ContentHeightCache, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::UIElements::__DynamicHeightVirtualizationController_1__ContentHeightCacheInfo<T>>* ___m_ContentHeightCache;

  /// @brief Field m_WaitingCache, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<int32_t>* ___m_WaitingCache;

  /// @brief Field m_ForcedFirstVisibleItem, offset: 0x80, size: 0x4, def value: None
  int32_t ___m_ForcedFirstVisibleItem;

  /// @brief Field m_ForcedLastVisibleItem, offset: 0x84, size: 0x4, def value: None
  int32_t ___m_ForcedLastVisibleItem;

  /// @brief Field m_StickToBottom, offset: 0x88, size: 0x1, def value: None
  bool ___m_StickToBottom;

  /// @brief Field m_LastChange, offset: 0x8c, size: 0x4, def value: None
  ::UnityEngine::UIElements::__DynamicHeightVirtualizationController_1__VirtualizationChange<T> ___m_LastChange;

  /// @brief Field m_ScrollDirection, offset: 0x90, size: 0x4, def value: None
  ::UnityEngine::UIElements::__DynamicHeightVirtualizationController_1__ScrollDirection<T> ___m_ScrollDirection;

  /// @brief Field m_DelayedScrollOffset, offset: 0x94, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_DelayedScrollOffset;

  /// @brief Field m_AccumulatedHeight, offset: 0x9c, size: 0x4, def value: None
  float_t ___m_AccumulatedHeight;

  /// @brief Field m_MinimumItemHeight, offset: 0xa0, size: 0x4, def value: None
  float_t ___m_MinimumItemHeight;

  /// @brief Field m_FillCallback, offset: 0xa8, size: 0x8, def value: None
  ::System::Action* ___m_FillCallback;

  /// @brief Field m_ScrollCallback, offset: 0xb0, size: 0x8, def value: None
  ::System::Action* ___m_ScrollCallback;

  /// @brief Field m_ScrollResetCallback, offset: 0xb8, size: 0x8, def value: None
  ::System::Action* ___m_ScrollResetCallback;

  /// @brief Field m_GeometryChangedCallback, offset: 0xc0, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>* ___m_GeometryChangedCallback;

  /// @brief Field m_ScheduledItem, offset: 0xc8, size: 0x8, def value: None
  ::UnityEngine::UIElements::IVisualElementScheduledItem* ___m_ScheduledItem;

  /// @brief Field m_ScrollScheduledItem, offset: 0xd0, size: 0x8, def value: None
  ::UnityEngine::UIElements::IVisualElementScheduledItem* ___m_ScrollScheduledItem;

  /// @brief Field m_ScrollResetScheduledItem, offset: 0xd8, size: 0x8, def value: None
  ::UnityEngine::UIElements::IVisualElementScheduledItem* ___m_ScrollResetScheduledItem;

  /// @brief Field m_IndexOutOfBoundsPredicate, offset: 0xe0, size: 0x8, def value: None
  ::System::Predicate_1<int32_t>* ___m_IndexOutOfBoundsPredicate;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5456 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::UIElements::__DynamicHeightVirtualizationController_1__ScrollDirection, "UnityEngine.UIElements",
                                      "DynamicHeightVirtualizationController`1/ScrollDirection");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::UIElements::__DynamicHeightVirtualizationController_1__VirtualizationChange, "UnityEngine.UIElements",
                                      "DynamicHeightVirtualizationController`1/VirtualizationChange");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::DynamicHeightVirtualizationController_1, "UnityEngine.UIElements", "DynamicHeightVirtualizationController`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::UIElements::__DynamicHeightVirtualizationController_1__ContentHeightCacheInfo, "UnityEngine.UIElements",
                                      "DynamicHeightVirtualizationController`1/ContentHeightCacheInfo");
