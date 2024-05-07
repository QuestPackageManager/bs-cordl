#pragma once
// IWYU pragma private; include "UnityEngine/UI/ScrollRect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/UI/zzzz__ScrollRect_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__DrivenRectTransformTracker_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScrollRect)
namespace UnityEngine::EventSystems {
class IBeginDragHandler;
}
namespace UnityEngine::EventSystems {
class IDragHandler;
}
namespace UnityEngine::EventSystems {
class IEndDragHandler;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IInitializePotentialDragHandler;
}
namespace UnityEngine::EventSystems {
class IScrollHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::UI {
struct CanvasUpdate;
}
namespace UnityEngine::UI {
class ICanvasElement;
}
namespace UnityEngine::UI {
class ILayoutController;
}
namespace UnityEngine::UI {
class ILayoutElement;
}
namespace UnityEngine::UI {
class ILayoutGroup;
}
namespace UnityEngine::UI {
class Scrollbar;
}
namespace UnityEngine::UI {
struct __ScrollRect__MovementType;
}
namespace UnityEngine::UI {
class __ScrollRect__ScrollRectEvent;
}
namespace UnityEngine::UI {
struct __ScrollRect__ScrollbarVisibility;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UI {
struct __ScrollRect__MovementType;
}
namespace UnityEngine::UI {
struct __ScrollRect__ScrollbarVisibility;
}
namespace UnityEngine::UI {
class ScrollRect;
}
namespace UnityEngine::UI {
class __ScrollRect__ScrollRectEvent;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UI::__ScrollRect__MovementType);
MARK_VAL_T(::UnityEngine::UI::__ScrollRect__ScrollbarVisibility);
MARK_REF_PTR_T(::UnityEngine::UI::ScrollRect);
MARK_REF_PTR_T(::UnityEngine::UI::__ScrollRect__ScrollRectEvent);
// Type: ::MovementType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: true
// CS Name: ::ScrollRect::MovementType
struct CORDL_TYPE __ScrollRect__MovementType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ScrollRect__MovementType_Unwrapped
  enum struct ____ScrollRect__MovementType_Unwrapped : int32_t {
    __E_Unrestricted = static_cast<int32_t>(0x0),
    __E_Elastic = static_cast<int32_t>(0x1),
    __E_Clamped = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ScrollRect__MovementType_Unwrapped() const noexcept {
    return static_cast<____ScrollRect__MovementType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScrollRect__MovementType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ScrollRect__MovementType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Clamped value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UI::__ScrollRect__MovementType const Clamped;

  /// @brief Field Elastic value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UI::__ScrollRect__MovementType const Elastic;

  /// @brief Field Unrestricted value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UI::__ScrollRect__MovementType const Unrestricted;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__ScrollRect__MovementType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::__ScrollRect__MovementType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UI
// Type: ::ScrollbarVisibility
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: true
// CS Name: ::ScrollRect::ScrollbarVisibility
struct CORDL_TYPE __ScrollRect__ScrollbarVisibility {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ScrollRect__ScrollbarVisibility_Unwrapped
  enum struct ____ScrollRect__ScrollbarVisibility_Unwrapped : int32_t {
    __E_Permanent = static_cast<int32_t>(0x0),
    __E_AutoHide = static_cast<int32_t>(0x1),
    __E_AutoHideAndExpandViewport = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ScrollRect__ScrollbarVisibility_Unwrapped() const noexcept {
    return static_cast<____ScrollRect__ScrollbarVisibility_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScrollRect__ScrollbarVisibility();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ScrollRect__ScrollbarVisibility(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AutoHide value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UI::__ScrollRect__ScrollbarVisibility const AutoHide;

  /// @brief Field AutoHideAndExpandViewport value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UI::__ScrollRect__ScrollbarVisibility const AutoHideAndExpandViewport;

  /// @brief Field Permanent value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UI::__ScrollRect__ScrollbarVisibility const Permanent;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__ScrollRect__ScrollbarVisibility, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::__ScrollRect__ScrollbarVisibility, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UI
// Type: ::ScrollRectEvent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::ScrollRect::ScrollRectEvent*
class CORDL_TYPE __ScrollRect__ScrollRectEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector2> {
public:
  // Declarations
  static inline ::UnityEngine::UI::__ScrollRect__ScrollRectEvent* New_ctor();

  /// @brief Method .ctor, addr 0x34d83dc, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScrollRect__ScrollRectEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ScrollRect__ScrollRectEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ScrollRect__ScrollRectEvent(__ScrollRect__ScrollRectEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ScrollRect__ScrollRectEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ScrollRect__ScrollRectEvent(__ScrollRect__ScrollRectEvent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__ScrollRect__ScrollRectEvent, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UI
// Type: UnityEngine.UI::ScrollRect
// SizeInfo { instance_size: 296, native_size: -1, calculated_instance_size: 296, calculated_native_size: 296, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::UnityEngine.UI::ScrollRect*
class CORDL_TYPE ScrollRect : public ::UnityEngine::EventSystems::UIBehaviour {
public:
  // Declarations
  using MovementType = ::UnityEngine::UI::__ScrollRect__MovementType;

  using ScrollRectEvent = ::UnityEngine::UI::__ScrollRect__ScrollRectEvent;

  using ScrollbarVisibility = ::UnityEngine::UI::__ScrollRect__ScrollbarVisibility;

  __declspec(property(get = get_content, put = set_content))::UnityW<::UnityEngine::RectTransform> content;

  __declspec(property(get = get_decelerationRate, put = set_decelerationRate)) float_t decelerationRate;

  __declspec(property(get = get_elasticity, put = set_elasticity)) float_t elasticity;

  __declspec(property(get = get_flexibleHeight)) float_t flexibleHeight;

  __declspec(property(get = get_flexibleWidth)) float_t flexibleWidth;

  __declspec(property(get = get_hScrollingNeeded)) bool hScrollingNeeded;

  __declspec(property(get = get_horizontal, put = set_horizontal)) bool horizontal;

  __declspec(property(get = get_horizontalNormalizedPosition, put = set_horizontalNormalizedPosition)) float_t horizontalNormalizedPosition;

  __declspec(property(get = get_horizontalScrollbar, put = set_horizontalScrollbar))::UnityW<::UnityEngine::UI::Scrollbar> horizontalScrollbar;

  __declspec(property(get = get_horizontalScrollbarSpacing, put = set_horizontalScrollbarSpacing)) float_t horizontalScrollbarSpacing;

  __declspec(property(get = get_horizontalScrollbarVisibility, put = set_horizontalScrollbarVisibility))::UnityEngine::UI::__ScrollRect__ScrollbarVisibility horizontalScrollbarVisibility;

  __declspec(property(get = get_inertia, put = set_inertia)) bool inertia;

  __declspec(property(get = get_layoutPriority)) int32_t layoutPriority;

  /// @brief Field m_Content, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Content, put = __cordl_internal_set_m_Content))::UnityW<::UnityEngine::RectTransform> m_Content;

  /// @brief Field m_ContentBounds, offset 0x80, size 0x18
  __declspec(property(get = __cordl_internal_get_m_ContentBounds, put = __cordl_internal_set_m_ContentBounds))::UnityEngine::Bounds m_ContentBounds;

  /// @brief Field m_ContentStartPosition, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ContentStartPosition, put = __cordl_internal_set_m_ContentStartPosition))::UnityEngine::Vector2 m_ContentStartPosition;

  /// @brief Field m_Corners, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Corners, put = __cordl_internal_set_m_Corners))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> m_Corners;

  /// @brief Field m_DecelerationRate, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DecelerationRate, put = __cordl_internal_set_m_DecelerationRate)) float_t m_DecelerationRate;

  /// @brief Field m_Dragging, offset 0xb8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Dragging, put = __cordl_internal_set_m_Dragging)) bool m_Dragging;

  /// @brief Field m_Elasticity, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Elasticity, put = __cordl_internal_set_m_Elasticity)) float_t m_Elasticity;

  /// @brief Field m_HSliderExpand, offset 0xf5, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HSliderExpand, put = __cordl_internal_set_m_HSliderExpand)) bool m_HSliderExpand;

  /// @brief Field m_HSliderHeight, offset 0xf8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HSliderHeight, put = __cordl_internal_set_m_HSliderHeight)) float_t m_HSliderHeight;

  /// @brief Field m_HasRebuiltLayout, offset 0xf4, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HasRebuiltLayout, put = __cordl_internal_set_m_HasRebuiltLayout)) bool m_HasRebuiltLayout;

  /// @brief Field m_Horizontal, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Horizontal, put = __cordl_internal_set_m_Horizontal)) bool m_Horizontal;

  /// @brief Field m_HorizontalScrollbar, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HorizontalScrollbar, put = __cordl_internal_set_m_HorizontalScrollbar))::UnityW<::UnityEngine::UI::Scrollbar> m_HorizontalScrollbar;

  /// @brief Field m_HorizontalScrollbarRect, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HorizontalScrollbarRect, put = __cordl_internal_set_m_HorizontalScrollbarRect))::UnityW<::UnityEngine::RectTransform> m_HorizontalScrollbarRect;

  /// @brief Field m_HorizontalScrollbarSpacing, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HorizontalScrollbarSpacing, put = __cordl_internal_set_m_HorizontalScrollbarSpacing)) float_t m_HorizontalScrollbarSpacing;

  /// @brief Field m_HorizontalScrollbarVisibility, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HorizontalScrollbarVisibility,
                      put = __cordl_internal_set_m_HorizontalScrollbarVisibility))::UnityEngine::UI::__ScrollRect__ScrollbarVisibility m_HorizontalScrollbarVisibility;

  /// @brief Field m_Inertia, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Inertia, put = __cordl_internal_set_m_Inertia)) bool m_Inertia;

  /// @brief Field m_MovementType, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MovementType, put = __cordl_internal_set_m_MovementType))::UnityEngine::UI::__ScrollRect__MovementType m_MovementType;

  /// @brief Field m_OnValueChanged, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnValueChanged, put = __cordl_internal_set_m_OnValueChanged))::UnityEngine::UI::__ScrollRect__ScrollRectEvent* m_OnValueChanged;

  /// @brief Field m_PointerStartLocalCursor, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PointerStartLocalCursor, put = __cordl_internal_set_m_PointerStartLocalCursor))::UnityEngine::Vector2 m_PointerStartLocalCursor;

  /// @brief Field m_PrevContentBounds, offset 0xc4, size 0x18
  __declspec(property(get = __cordl_internal_get_m_PrevContentBounds, put = __cordl_internal_set_m_PrevContentBounds))::UnityEngine::Bounds m_PrevContentBounds;

  /// @brief Field m_PrevPosition, offset 0xbc, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PrevPosition, put = __cordl_internal_set_m_PrevPosition))::UnityEngine::Vector2 m_PrevPosition;

  /// @brief Field m_PrevViewBounds, offset 0xdc, size 0x18
  __declspec(property(get = __cordl_internal_get_m_PrevViewBounds, put = __cordl_internal_set_m_PrevViewBounds))::UnityEngine::Bounds m_PrevViewBounds;

  /// @brief Field m_Rect, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Rect, put = __cordl_internal_set_m_Rect))::UnityW<::UnityEngine::RectTransform> m_Rect;

  /// @brief Field m_ScrollSensitivity, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ScrollSensitivity, put = __cordl_internal_set_m_ScrollSensitivity)) float_t m_ScrollSensitivity;

  /// @brief Field m_Scrolling, offset 0xb9, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Scrolling, put = __cordl_internal_set_m_Scrolling)) bool m_Scrolling;

  /// @brief Field m_Tracker, offset 0x118, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Tracker, put = __cordl_internal_set_m_Tracker))::UnityEngine::DrivenRectTransformTracker m_Tracker;

  /// @brief Field m_VSliderExpand, offset 0xf6, size 0x1
  __declspec(property(get = __cordl_internal_get_m_VSliderExpand, put = __cordl_internal_set_m_VSliderExpand)) bool m_VSliderExpand;

  /// @brief Field m_VSliderWidth, offset 0xfc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_VSliderWidth, put = __cordl_internal_set_m_VSliderWidth)) float_t m_VSliderWidth;

  /// @brief Field m_Velocity, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Velocity, put = __cordl_internal_set_m_Velocity))::UnityEngine::Vector2 m_Velocity;

  /// @brief Field m_Vertical, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Vertical, put = __cordl_internal_set_m_Vertical)) bool m_Vertical;

  /// @brief Field m_VerticalScrollbar, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VerticalScrollbar, put = __cordl_internal_set_m_VerticalScrollbar))::UnityW<::UnityEngine::UI::Scrollbar> m_VerticalScrollbar;

  /// @brief Field m_VerticalScrollbarRect, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VerticalScrollbarRect, put = __cordl_internal_set_m_VerticalScrollbarRect))::UnityW<::UnityEngine::RectTransform> m_VerticalScrollbarRect;

  /// @brief Field m_VerticalScrollbarSpacing, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_VerticalScrollbarSpacing, put = __cordl_internal_set_m_VerticalScrollbarSpacing)) float_t m_VerticalScrollbarSpacing;

  /// @brief Field m_VerticalScrollbarVisibility, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_m_VerticalScrollbarVisibility,
                      put = __cordl_internal_set_m_VerticalScrollbarVisibility))::UnityEngine::UI::__ScrollRect__ScrollbarVisibility m_VerticalScrollbarVisibility;

  /// @brief Field m_ViewBounds, offset 0x98, size 0x18
  __declspec(property(get = __cordl_internal_get_m_ViewBounds, put = __cordl_internal_set_m_ViewBounds))::UnityEngine::Bounds m_ViewBounds;

  /// @brief Field m_ViewRect, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ViewRect, put = __cordl_internal_set_m_ViewRect))::UnityW<::UnityEngine::RectTransform> m_ViewRect;

  /// @brief Field m_Viewport, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Viewport, put = __cordl_internal_set_m_Viewport))::UnityW<::UnityEngine::RectTransform> m_Viewport;

  __declspec(property(get = get_minHeight)) float_t minHeight;

  __declspec(property(get = get_minWidth)) float_t minWidth;

  __declspec(property(get = get_movementType, put = set_movementType))::UnityEngine::UI::__ScrollRect__MovementType movementType;

  __declspec(property(get = get_normalizedPosition, put = set_normalizedPosition))::UnityEngine::Vector2 normalizedPosition;

  __declspec(property(get = get_onValueChanged, put = set_onValueChanged))::UnityEngine::UI::__ScrollRect__ScrollRectEvent* onValueChanged;

  __declspec(property(get = get_preferredHeight)) float_t preferredHeight;

  __declspec(property(get = get_preferredWidth)) float_t preferredWidth;

  __declspec(property(get = get_rectTransform))::UnityW<::UnityEngine::RectTransform> rectTransform;

  __declspec(property(get = get_scrollSensitivity, put = set_scrollSensitivity)) float_t scrollSensitivity;

  __declspec(property(get = get_vScrollingNeeded)) bool vScrollingNeeded;

  __declspec(property(get = get_velocity, put = set_velocity))::UnityEngine::Vector2 velocity;

  __declspec(property(get = get_vertical, put = set_vertical)) bool vertical;

  __declspec(property(get = get_verticalNormalizedPosition, put = set_verticalNormalizedPosition)) float_t verticalNormalizedPosition;

  __declspec(property(get = get_verticalScrollbar, put = set_verticalScrollbar))::UnityW<::UnityEngine::UI::Scrollbar> verticalScrollbar;

  __declspec(property(get = get_verticalScrollbarSpacing, put = set_verticalScrollbarSpacing)) float_t verticalScrollbarSpacing;

  __declspec(property(get = get_verticalScrollbarVisibility, put = set_verticalScrollbarVisibility))::UnityEngine::UI::__ScrollRect__ScrollbarVisibility verticalScrollbarVisibility;

  __declspec(property(get = get_viewRect))::UnityW<::UnityEngine::RectTransform> viewRect;

  __declspec(property(get = get_viewport, put = set_viewport))::UnityW<::UnityEngine::RectTransform> viewport;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IBeginDragHandler"
  constexpr operator ::UnityEngine::EventSystems::IBeginDragHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IDragHandler"
  constexpr operator ::UnityEngine::EventSystems::IDragHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEndDragHandler"
  constexpr operator ::UnityEngine::EventSystems::IEndDragHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IInitializePotentialDragHandler"
  constexpr operator ::UnityEngine::EventSystems::IInitializePotentialDragHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IScrollHandler"
  constexpr operator ::UnityEngine::EventSystems::IScrollHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UI::ICanvasElement"
  constexpr operator ::UnityEngine::UI::ICanvasElement*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UI::ILayoutController"
  constexpr operator ::UnityEngine::UI::ILayoutController*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UI::ILayoutElement"
  constexpr operator ::UnityEngine::UI::ILayoutElement*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UI::ILayoutGroup"
  constexpr operator ::UnityEngine::UI::ILayoutGroup*() noexcept;

  /// @brief Method AdjustBounds, addr 0x34db2d4, size 0xac, virtual false, abstract: false, final false
  static inline void AdjustBounds(ByRef<::UnityEngine::Bounds> viewBounds, ByRef<::UnityEngine::Vector2> contentPivot, ByRef<::UnityEngine::Vector3> contentSize,
                                  ByRef<::UnityEngine::Vector3> contentPos);

  /// @brief Method CalculateLayoutInputHorizontal, addr 0x34da81c, size 0x4, virtual true, abstract: false, final false
  inline void CalculateLayoutInputHorizontal();

  /// @brief Method CalculateLayoutInputVertical, addr 0x34da820, size 0x4, virtual true, abstract: false, final false
  inline void CalculateLayoutInputVertical();

  /// @brief Method CalculateOffset, addr 0x34d962c, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 CalculateOffset(::UnityEngine::Vector2 delta);

  /// @brief Method EnsureLayoutHasRebuilt, addr 0x34d93f0, size 0x74, virtual false, abstract: false, final false
  inline void EnsureLayoutHasRebuilt();

  /// @brief Method GetBounds, addr 0x34dadb4, size 0xfc, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds GetBounds();

  /// @brief Method GraphicUpdateComplete, addr 0x34d8f90, size 0x4, virtual true, abstract: false, final false
  inline void GraphicUpdateComplete();

  /// @brief Method InternalCalculateOffset, addr 0x34db4d8, size 0x184, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 InternalCalculateOffset(ByRef<::UnityEngine::Bounds> viewBounds, ByRef<::UnityEngine::Bounds> contentBounds, bool horizontal, bool vertical,
                                                               ::UnityEngine::UI::__ScrollRect__MovementType movementType, ByRef<::UnityEngine::Vector2> delta);

  /// @brief Method InternalGetBounds, addr 0x34db380, size 0x158, virtual false, abstract: false, final false
  static inline ::UnityEngine::Bounds InternalGetBounds(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> corners, ByRef<::UnityEngine::Matrix4x4> viewWorldToLocalMatrix);

  /// @brief Method IsActive, addr 0x34d9370, size 0x80, virtual true, abstract: false, final false
  inline bool IsActive();

  /// @brief Method LateUpdate, addr 0x34d9b14, size 0x594, virtual true, abstract: false, final false
  inline void LateUpdate();

  /// @brief Method LayoutComplete, addr 0x34d8f8c, size 0x4, virtual true, abstract: false, final false
  inline void LayoutComplete();

  static inline ::UnityEngine::UI::ScrollRect* New_ctor();

  /// @brief Method OnBeginDrag, addr 0x34d96bc, size 0x128, virtual true, abstract: false, final false
  inline void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnDisable, addr 0x34d9140, size 0x230, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnDrag, addr 0x34d9804, size 0x220, virtual true, abstract: false, final false
  inline void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnEnable, addr 0x34d8f94, size 0x1ac, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnEndDrag, addr 0x34d97e4, size 0x20, virtual true, abstract: false, final false
  inline void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnInitializePotentialDrag, addr 0x34d965c, size 0x60, virtual true, abstract: false, final false
  inline void OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnRectTransformDimensionsChange, addr 0x34da760, size 0x4, virtual true, abstract: false, final false
  inline void OnRectTransformDimensionsChange();

  /// @brief Method OnScroll, addr 0x34d94b4, size 0x178, virtual true, abstract: false, final false
  inline void OnScroll(::UnityEngine::EventSystems::PointerEventData* data);

  /// @brief Method Rebuild, addr 0x34d8424, size 0x88, virtual true, abstract: false, final false
  inline void Rebuild(::UnityEngine::UI::CanvasUpdate executing);

  /// @brief Method RubberDelta, addr 0x34d9a24, size 0x3c, virtual false, abstract: false, final false
  static inline float_t RubberDelta(float_t overStretching, float_t viewSize);

  /// @brief Method SetContentAnchoredPosition, addr 0x34d9a60, size 0xb4, virtual true, abstract: false, final false
  inline void SetContentAnchoredPosition(::UnityEngine::Vector2 position);

  /// @brief Method SetDirty, addr 0x34d809c, size 0x88, virtual false, abstract: false, final false
  inline void SetDirty();

  /// @brief Method SetDirtyCaching, addr 0x34d7cc0, size 0xb4, virtual false, abstract: false, final false
  inline void SetDirtyCaching();

  /// @brief Method SetHorizontalNormalizedPosition, addr 0x34da440, size 0x14, virtual false, abstract: false, final false
  inline void SetHorizontalNormalizedPosition(float_t value);

  /// @brief Method SetLayoutHorizontal, addr 0x34da85c, size 0x558, virtual true, abstract: false, final false
  inline void SetLayoutHorizontal();

  /// @brief Method SetLayoutVertical, addr 0x34daeb0, size 0xdc, virtual true, abstract: false, final false
  inline void SetLayoutVertical();

  /// @brief Method SetNormalizedPosition, addr 0x34da468, size 0x2f8, virtual true, abstract: false, final false
  inline void SetNormalizedPosition(float_t value, int32_t axis);

  /// @brief Method SetVerticalNormalizedPosition, addr 0x34da454, size 0x14, virtual false, abstract: false, final false
  inline void SetVerticalNormalizedPosition(float_t value);

  /// @brief Method StopMovement, addr 0x34d9464, size 0x50, virtual true, abstract: false, final false
  inline void StopMovement();

  /// @brief Method UnityEngine.UI.ICanvasElement.get_transform, addr 0x34db65c, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::Transform> UnityEngine_UI_ICanvasElement_get_transform();

  /// @brief Method UpdateBounds, addr 0x34d8824, size 0x4b4, virtual false, abstract: false, final false
  inline void UpdateBounds();

  /// @brief Method UpdateCachedData, addr 0x34d84ac, size 0x378, virtual false, abstract: false, final false
  inline void UpdateCachedData();

  /// @brief Method UpdateOneScrollbarVisibility, addr 0x34db1e0, size 0xf4, virtual false, abstract: false, final false
  static inline void UpdateOneScrollbarVisibility(bool xScrollingNeeded, bool xAxisEnabled, ::UnityEngine::UI::__ScrollRect__ScrollbarVisibility scrollbarVisibility,
                                                  ::UnityEngine::UI::Scrollbar* scrollbar);

  /// @brief Method UpdatePrevData, addr 0x34d8eb0, size 0xdc, virtual false, abstract: false, final false
  inline void UpdatePrevData();

  /// @brief Method UpdateScrollbarLayout, addr 0x34daf8c, size 0x254, virtual false, abstract: false, final false
  inline void UpdateScrollbarLayout();

  /// @brief Method UpdateScrollbarVisibility, addr 0x34da0d8, size 0x40, virtual false, abstract: false, final false
  inline void UpdateScrollbarVisibility();

  /// @brief Method UpdateScrollbars, addr 0x34d8cd8, size 0x1d8, virtual false, abstract: false, final false
  inline void UpdateScrollbars(::UnityEngine::Vector2 offset);

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_m_Content() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_m_Content();

  constexpr ::UnityEngine::Bounds const& __cordl_internal_get_m_ContentBounds() const;

  constexpr ::UnityEngine::Bounds& __cordl_internal_get_m_ContentBounds();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_ContentStartPosition() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_ContentStartPosition();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_m_Corners() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_m_Corners();

  constexpr float_t const& __cordl_internal_get_m_DecelerationRate() const;

  constexpr float_t& __cordl_internal_get_m_DecelerationRate();

  constexpr bool const& __cordl_internal_get_m_Dragging() const;

  constexpr bool& __cordl_internal_get_m_Dragging();

  constexpr float_t const& __cordl_internal_get_m_Elasticity() const;

  constexpr float_t& __cordl_internal_get_m_Elasticity();

  constexpr bool const& __cordl_internal_get_m_HSliderExpand() const;

  constexpr bool& __cordl_internal_get_m_HSliderExpand();

  constexpr float_t const& __cordl_internal_get_m_HSliderHeight() const;

  constexpr float_t& __cordl_internal_get_m_HSliderHeight();

  constexpr bool const& __cordl_internal_get_m_HasRebuiltLayout() const;

  constexpr bool& __cordl_internal_get_m_HasRebuiltLayout();

  constexpr bool const& __cordl_internal_get_m_Horizontal() const;

  constexpr bool& __cordl_internal_get_m_Horizontal();

  constexpr ::UnityW<::UnityEngine::UI::Scrollbar> const& __cordl_internal_get_m_HorizontalScrollbar() const;

  constexpr ::UnityW<::UnityEngine::UI::Scrollbar>& __cordl_internal_get_m_HorizontalScrollbar();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_m_HorizontalScrollbarRect() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_m_HorizontalScrollbarRect();

  constexpr float_t const& __cordl_internal_get_m_HorizontalScrollbarSpacing() const;

  constexpr float_t& __cordl_internal_get_m_HorizontalScrollbarSpacing();

  constexpr ::UnityEngine::UI::__ScrollRect__ScrollbarVisibility const& __cordl_internal_get_m_HorizontalScrollbarVisibility() const;

  constexpr ::UnityEngine::UI::__ScrollRect__ScrollbarVisibility& __cordl_internal_get_m_HorizontalScrollbarVisibility();

  constexpr bool const& __cordl_internal_get_m_Inertia() const;

  constexpr bool& __cordl_internal_get_m_Inertia();

  constexpr ::UnityEngine::UI::__ScrollRect__MovementType const& __cordl_internal_get_m_MovementType() const;

  constexpr ::UnityEngine::UI::__ScrollRect__MovementType& __cordl_internal_get_m_MovementType();

  constexpr ::UnityEngine::UI::__ScrollRect__ScrollRectEvent*& __cordl_internal_get_m_OnValueChanged();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::__ScrollRect__ScrollRectEvent*> const& __cordl_internal_get_m_OnValueChanged() const;

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_PointerStartLocalCursor() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_PointerStartLocalCursor();

  constexpr ::UnityEngine::Bounds const& __cordl_internal_get_m_PrevContentBounds() const;

  constexpr ::UnityEngine::Bounds& __cordl_internal_get_m_PrevContentBounds();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_PrevPosition() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_PrevPosition();

  constexpr ::UnityEngine::Bounds const& __cordl_internal_get_m_PrevViewBounds() const;

  constexpr ::UnityEngine::Bounds& __cordl_internal_get_m_PrevViewBounds();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_m_Rect() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_m_Rect();

  constexpr float_t const& __cordl_internal_get_m_ScrollSensitivity() const;

  constexpr float_t& __cordl_internal_get_m_ScrollSensitivity();

  constexpr bool const& __cordl_internal_get_m_Scrolling() const;

  constexpr bool& __cordl_internal_get_m_Scrolling();

  constexpr ::UnityEngine::DrivenRectTransformTracker const& __cordl_internal_get_m_Tracker() const;

  constexpr ::UnityEngine::DrivenRectTransformTracker& __cordl_internal_get_m_Tracker();

  constexpr bool const& __cordl_internal_get_m_VSliderExpand() const;

  constexpr bool& __cordl_internal_get_m_VSliderExpand();

  constexpr float_t const& __cordl_internal_get_m_VSliderWidth() const;

  constexpr float_t& __cordl_internal_get_m_VSliderWidth();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_Velocity() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_Velocity();

  constexpr bool const& __cordl_internal_get_m_Vertical() const;

  constexpr bool& __cordl_internal_get_m_Vertical();

  constexpr ::UnityW<::UnityEngine::UI::Scrollbar> const& __cordl_internal_get_m_VerticalScrollbar() const;

  constexpr ::UnityW<::UnityEngine::UI::Scrollbar>& __cordl_internal_get_m_VerticalScrollbar();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_m_VerticalScrollbarRect() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_m_VerticalScrollbarRect();

  constexpr float_t const& __cordl_internal_get_m_VerticalScrollbarSpacing() const;

  constexpr float_t& __cordl_internal_get_m_VerticalScrollbarSpacing();

  constexpr ::UnityEngine::UI::__ScrollRect__ScrollbarVisibility const& __cordl_internal_get_m_VerticalScrollbarVisibility() const;

  constexpr ::UnityEngine::UI::__ScrollRect__ScrollbarVisibility& __cordl_internal_get_m_VerticalScrollbarVisibility();

  constexpr ::UnityEngine::Bounds const& __cordl_internal_get_m_ViewBounds() const;

  constexpr ::UnityEngine::Bounds& __cordl_internal_get_m_ViewBounds();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_m_ViewRect() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_m_ViewRect();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_m_Viewport() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_m_Viewport();

  constexpr void __cordl_internal_set_m_Content(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set_m_ContentBounds(::UnityEngine::Bounds value);

  constexpr void __cordl_internal_set_m_ContentStartPosition(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_Corners(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set_m_DecelerationRate(float_t value);

  constexpr void __cordl_internal_set_m_Dragging(bool value);

  constexpr void __cordl_internal_set_m_Elasticity(float_t value);

  constexpr void __cordl_internal_set_m_HSliderExpand(bool value);

  constexpr void __cordl_internal_set_m_HSliderHeight(float_t value);

  constexpr void __cordl_internal_set_m_HasRebuiltLayout(bool value);

  constexpr void __cordl_internal_set_m_Horizontal(bool value);

  constexpr void __cordl_internal_set_m_HorizontalScrollbar(::UnityW<::UnityEngine::UI::Scrollbar> value);

  constexpr void __cordl_internal_set_m_HorizontalScrollbarRect(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set_m_HorizontalScrollbarSpacing(float_t value);

  constexpr void __cordl_internal_set_m_HorizontalScrollbarVisibility(::UnityEngine::UI::__ScrollRect__ScrollbarVisibility value);

  constexpr void __cordl_internal_set_m_Inertia(bool value);

  constexpr void __cordl_internal_set_m_MovementType(::UnityEngine::UI::__ScrollRect__MovementType value);

  constexpr void __cordl_internal_set_m_OnValueChanged(::UnityEngine::UI::__ScrollRect__ScrollRectEvent* value);

  constexpr void __cordl_internal_set_m_PointerStartLocalCursor(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_PrevContentBounds(::UnityEngine::Bounds value);

  constexpr void __cordl_internal_set_m_PrevPosition(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_PrevViewBounds(::UnityEngine::Bounds value);

  constexpr void __cordl_internal_set_m_Rect(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set_m_ScrollSensitivity(float_t value);

  constexpr void __cordl_internal_set_m_Scrolling(bool value);

  constexpr void __cordl_internal_set_m_Tracker(::UnityEngine::DrivenRectTransformTracker value);

  constexpr void __cordl_internal_set_m_VSliderExpand(bool value);

  constexpr void __cordl_internal_set_m_VSliderWidth(float_t value);

  constexpr void __cordl_internal_set_m_Velocity(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_Vertical(bool value);

  constexpr void __cordl_internal_set_m_VerticalScrollbar(::UnityW<::UnityEngine::UI::Scrollbar> value);

  constexpr void __cordl_internal_set_m_VerticalScrollbarRect(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set_m_VerticalScrollbarSpacing(float_t value);

  constexpr void __cordl_internal_set_m_VerticalScrollbarVisibility(::UnityEngine::UI::__ScrollRect__ScrollbarVisibility value);

  constexpr void __cordl_internal_set_m_ViewBounds(::UnityEngine::Bounds value);

  constexpr void __cordl_internal_set_m_ViewRect(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set_m_Viewport(::UnityW<::UnityEngine::RectTransform> value);

  /// @brief Method .ctor, addr 0x34d82d8, size 0x104, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_content, addr 0x34d7c24, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RectTransform> get_content();

  /// @brief Method get_decelerationRate, addr 0x34d7c90, size 0x8, virtual false, abstract: false, final false
  inline float_t get_decelerationRate();

  /// @brief Method get_elasticity, addr 0x34d7c6c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_elasticity();

  /// @brief Method get_flexibleHeight, addr 0x34da84c, size 0x8, virtual true, abstract: false, final false
  inline float_t get_flexibleHeight();

  /// @brief Method get_flexibleWidth, addr 0x34da834, size 0x8, virtual true, abstract: false, final false
  inline float_t get_flexibleWidth();

  /// @brief Method get_hScrollingNeeded, addr 0x34da764, size 0x5c, virtual false, abstract: false, final false
  inline bool get_hScrollingNeeded();

  /// @brief Method get_horizontal, addr 0x34d7c34, size 0x8, virtual false, abstract: false, final false
  inline bool get_horizontal();

  /// @brief Method get_horizontalNormalizedPosition, addr 0x34da118, size 0x15c, virtual false, abstract: false, final false
  inline float_t get_horizontalNormalizedPosition();

  /// @brief Method get_horizontalScrollbar, addr 0x34d7d74, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Scrollbar> get_horizontalScrollbar();

  /// @brief Method get_horizontalScrollbarSpacing, addr 0x34d808c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_horizontalScrollbarSpacing();

  /// @brief Method get_horizontalScrollbarVisibility, addr 0x34d806c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::__ScrollRect__ScrollbarVisibility get_horizontalScrollbarVisibility();

  /// @brief Method get_inertia, addr 0x34d7c7c, size 0x8, virtual false, abstract: false, final false
  inline bool get_inertia();

  /// @brief Method get_layoutPriority, addr 0x34da854, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_layoutPriority();

  /// @brief Method get_minHeight, addr 0x34da83c, size 0x8, virtual true, abstract: false, final false
  inline float_t get_minHeight();

  /// @brief Method get_minWidth, addr 0x34da824, size 0x8, virtual true, abstract: false, final false
  inline float_t get_minWidth();

  /// @brief Method get_movementType, addr 0x34d7c5c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::__ScrollRect__MovementType get_movementType();

  /// @brief Method get_normalizedPosition, addr 0x34da0a8, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_normalizedPosition();

  /// @brief Method get_onValueChanged, addr 0x34d8134, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::__ScrollRect__ScrollRectEvent* get_onValueChanged();

  /// @brief Method get_preferredHeight, addr 0x34da844, size 0x8, virtual true, abstract: false, final false
  inline float_t get_preferredHeight();

  /// @brief Method get_preferredWidth, addr 0x34da82c, size 0x8, virtual true, abstract: false, final false
  inline float_t get_preferredWidth();

  /// @brief Method get_rectTransform, addr 0x34d8244, size 0x94, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RectTransform> get_rectTransform();

  /// @brief Method get_scrollSensitivity, addr 0x34d7ca0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_scrollSensitivity();

  /// @brief Method get_vScrollingNeeded, addr 0x34da7c0, size 0x5c, virtual false, abstract: false, final false
  inline bool get_vScrollingNeeded();

  /// @brief Method get_velocity, addr 0x34d8234, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_velocity();

  /// @brief Method get_vertical, addr 0x34d7c48, size 0x8, virtual false, abstract: false, final false
  inline bool get_vertical();

  /// @brief Method get_verticalNormalizedPosition, addr 0x34da274, size 0x15c, virtual false, abstract: false, final false
  inline float_t get_verticalNormalizedPosition();

  /// @brief Method get_verticalScrollbar, addr 0x34d7ef0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Scrollbar> get_verticalScrollbar();

  /// @brief Method get_verticalScrollbarSpacing, addr 0x34d8124, size 0x8, virtual false, abstract: false, final false
  inline float_t get_verticalScrollbarSpacing();

  /// @brief Method get_verticalScrollbarVisibility, addr 0x34d807c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::__ScrollRect__ScrollbarVisibility get_verticalScrollbarVisibility();

  /// @brief Method get_viewRect, addr 0x34d8144, size 0xf0, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RectTransform> get_viewRect();

  /// @brief Method get_viewport, addr 0x34d7cb0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RectTransform> get_viewport();

  /// @brief Convert to "::UnityEngine::EventSystems::IBeginDragHandler"
  constexpr ::UnityEngine::EventSystems::IBeginDragHandler* i___UnityEngine__EventSystems__IBeginDragHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IDragHandler"
  constexpr ::UnityEngine::EventSystems::IDragHandler* i___UnityEngine__EventSystems__IDragHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IEndDragHandler"
  constexpr ::UnityEngine::EventSystems::IEndDragHandler* i___UnityEngine__EventSystems__IEndDragHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IInitializePotentialDragHandler"
  constexpr ::UnityEngine::EventSystems::IInitializePotentialDragHandler* i___UnityEngine__EventSystems__IInitializePotentialDragHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IScrollHandler"
  constexpr ::UnityEngine::EventSystems::IScrollHandler* i___UnityEngine__EventSystems__IScrollHandler() noexcept;

  /// @brief Convert to "::UnityEngine::UI::ICanvasElement"
  constexpr ::UnityEngine::UI::ICanvasElement* i___UnityEngine__UI__ICanvasElement() noexcept;

  /// @brief Convert to "::UnityEngine::UI::ILayoutController"
  constexpr ::UnityEngine::UI::ILayoutController* i___UnityEngine__UI__ILayoutController() noexcept;

  /// @brief Convert to "::UnityEngine::UI::ILayoutElement"
  constexpr ::UnityEngine::UI::ILayoutElement* i___UnityEngine__UI__ILayoutElement() noexcept;

  /// @brief Convert to "::UnityEngine::UI::ILayoutGroup"
  constexpr ::UnityEngine::UI::ILayoutGroup* i___UnityEngine__UI__ILayoutGroup() noexcept;

  /// @brief Method set_content, addr 0x34d7c2c, size 0x8, virtual false, abstract: false, final false
  inline void set_content(::UnityEngine::RectTransform* value);

  /// @brief Method set_decelerationRate, addr 0x34d7c98, size 0x8, virtual false, abstract: false, final false
  inline void set_decelerationRate(float_t value);

  /// @brief Method set_elasticity, addr 0x34d7c74, size 0x8, virtual false, abstract: false, final false
  inline void set_elasticity(float_t value);

  /// @brief Method set_horizontal, addr 0x34d7c3c, size 0xc, virtual false, abstract: false, final false
  inline void set_horizontal(bool value);

  /// @brief Method set_horizontalNormalizedPosition, addr 0x34da418, size 0x14, virtual false, abstract: false, final false
  inline void set_horizontalNormalizedPosition(float_t value);

  /// @brief Method set_horizontalScrollbar, addr 0x34d7d7c, size 0x174, virtual false, abstract: false, final false
  inline void set_horizontalScrollbar(::UnityEngine::UI::Scrollbar* value);

  /// @brief Method set_horizontalScrollbarSpacing, addr 0x34d8094, size 0x8, virtual false, abstract: false, final false
  inline void set_horizontalScrollbarSpacing(float_t value);

  /// @brief Method set_horizontalScrollbarVisibility, addr 0x34d8074, size 0x8, virtual false, abstract: false, final false
  inline void set_horizontalScrollbarVisibility(::UnityEngine::UI::__ScrollRect__ScrollbarVisibility value);

  /// @brief Method set_inertia, addr 0x34d7c84, size 0xc, virtual false, abstract: false, final false
  inline void set_inertia(bool value);

  /// @brief Method set_movementType, addr 0x34d7c64, size 0x8, virtual false, abstract: false, final false
  inline void set_movementType(::UnityEngine::UI::__ScrollRect__MovementType value);

  /// @brief Method set_normalizedPosition, addr 0x34da3d0, size 0x48, virtual false, abstract: false, final false
  inline void set_normalizedPosition(::UnityEngine::Vector2 value);

  /// @brief Method set_onValueChanged, addr 0x34d813c, size 0x8, virtual false, abstract: false, final false
  inline void set_onValueChanged(::UnityEngine::UI::__ScrollRect__ScrollRectEvent* value);

  /// @brief Method set_scrollSensitivity, addr 0x34d7ca8, size 0x8, virtual false, abstract: false, final false
  inline void set_scrollSensitivity(float_t value);

  /// @brief Method set_velocity, addr 0x34d823c, size 0x8, virtual false, abstract: false, final false
  inline void set_velocity(::UnityEngine::Vector2 value);

  /// @brief Method set_vertical, addr 0x34d7c50, size 0xc, virtual false, abstract: false, final false
  inline void set_vertical(bool value);

  /// @brief Method set_verticalNormalizedPosition, addr 0x34da42c, size 0x14, virtual false, abstract: false, final false
  inline void set_verticalNormalizedPosition(float_t value);

  /// @brief Method set_verticalScrollbar, addr 0x34d7ef8, size 0x174, virtual false, abstract: false, final false
  inline void set_verticalScrollbar(::UnityEngine::UI::Scrollbar* value);

  /// @brief Method set_verticalScrollbarSpacing, addr 0x34d812c, size 0x8, virtual false, abstract: false, final false
  inline void set_verticalScrollbarSpacing(float_t value);

  /// @brief Method set_verticalScrollbarVisibility, addr 0x34d8084, size 0x8, virtual false, abstract: false, final false
  inline void set_verticalScrollbarVisibility(::UnityEngine::UI::__ScrollRect__ScrollbarVisibility value);

  /// @brief Method set_viewport, addr 0x34d7cb8, size 0x8, virtual false, abstract: false, final false
  inline void set_viewport(::UnityEngine::RectTransform* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScrollRect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScrollRect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScrollRect(ScrollRect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScrollRect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScrollRect(ScrollRect const&) = delete;

  /// @brief Field m_Content, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___m_Content;

  /// @brief Field m_Horizontal, offset: 0x20, size: 0x1, def value: None
  bool ___m_Horizontal;

  /// @brief Field m_Vertical, offset: 0x21, size: 0x1, def value: None
  bool ___m_Vertical;

  /// @brief Field m_MovementType, offset: 0x24, size: 0x4, def value: None
  ::UnityEngine::UI::__ScrollRect__MovementType ___m_MovementType;

  /// @brief Field m_Elasticity, offset: 0x28, size: 0x4, def value: None
  float_t ___m_Elasticity;

  /// @brief Field m_Inertia, offset: 0x2c, size: 0x1, def value: None
  bool ___m_Inertia;

  /// @brief Field m_DecelerationRate, offset: 0x30, size: 0x4, def value: None
  float_t ___m_DecelerationRate;

  /// @brief Field m_ScrollSensitivity, offset: 0x34, size: 0x4, def value: None
  float_t ___m_ScrollSensitivity;

  /// @brief Field m_Viewport, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___m_Viewport;

  /// @brief Field m_HorizontalScrollbar, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Scrollbar> ___m_HorizontalScrollbar;

  /// @brief Field m_VerticalScrollbar, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Scrollbar> ___m_VerticalScrollbar;

  /// @brief Field m_HorizontalScrollbarVisibility, offset: 0x50, size: 0x4, def value: None
  ::UnityEngine::UI::__ScrollRect__ScrollbarVisibility ___m_HorizontalScrollbarVisibility;

  /// @brief Field m_VerticalScrollbarVisibility, offset: 0x54, size: 0x4, def value: None
  ::UnityEngine::UI::__ScrollRect__ScrollbarVisibility ___m_VerticalScrollbarVisibility;

  /// @brief Field m_HorizontalScrollbarSpacing, offset: 0x58, size: 0x4, def value: None
  float_t ___m_HorizontalScrollbarSpacing;

  /// @brief Field m_VerticalScrollbarSpacing, offset: 0x5c, size: 0x4, def value: None
  float_t ___m_VerticalScrollbarSpacing;

  /// @brief Field m_OnValueChanged, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::UI::__ScrollRect__ScrollRectEvent* ___m_OnValueChanged;

  /// @brief Field m_PointerStartLocalCursor, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_PointerStartLocalCursor;

  /// @brief Field m_ContentStartPosition, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_ContentStartPosition;

  /// @brief Field m_ViewRect, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___m_ViewRect;

  /// @brief Field m_ContentBounds, offset: 0x80, size: 0x18, def value: None
  ::UnityEngine::Bounds ___m_ContentBounds;

  /// @brief Field m_ViewBounds, offset: 0x98, size: 0x18, def value: None
  ::UnityEngine::Bounds ___m_ViewBounds;

  /// @brief Field m_Velocity, offset: 0xb0, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_Velocity;

  /// @brief Field m_Dragging, offset: 0xb8, size: 0x1, def value: None
  bool ___m_Dragging;

  /// @brief Field m_Scrolling, offset: 0xb9, size: 0x1, def value: None
  bool ___m_Scrolling;

  /// @brief Field m_PrevPosition, offset: 0xbc, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_PrevPosition;

  /// @brief Field m_PrevContentBounds, offset: 0xc4, size: 0x18, def value: None
  ::UnityEngine::Bounds ___m_PrevContentBounds;

  /// @brief Field m_PrevViewBounds, offset: 0xdc, size: 0x18, def value: None
  ::UnityEngine::Bounds ___m_PrevViewBounds;

  /// @brief Field m_HasRebuiltLayout, offset: 0xf4, size: 0x1, def value: None
  bool ___m_HasRebuiltLayout;

  /// @brief Field m_HSliderExpand, offset: 0xf5, size: 0x1, def value: None
  bool ___m_HSliderExpand;

  /// @brief Field m_VSliderExpand, offset: 0xf6, size: 0x1, def value: None
  bool ___m_VSliderExpand;

  /// @brief Field m_HSliderHeight, offset: 0xf8, size: 0x4, def value: None
  float_t ___m_HSliderHeight;

  /// @brief Field m_VSliderWidth, offset: 0xfc, size: 0x4, def value: None
  float_t ___m_VSliderWidth;

  /// @brief Field m_Rect, offset: 0x100, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___m_Rect;

  /// @brief Field m_HorizontalScrollbarRect, offset: 0x108, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___m_HorizontalScrollbarRect;

  /// @brief Field m_VerticalScrollbarRect, offset: 0x110, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___m_VerticalScrollbarRect;

  /// @brief Field m_Tracker, offset: 0x118, size: 0x1, def value: None
  ::UnityEngine::DrivenRectTransformTracker ___m_Tracker;

  /// @brief Field m_Corners, offset: 0x120, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___m_Corners;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::ScrollRect, 0x128>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::ScrollRect, ___m_Content) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ScrollRect, ___m_Horizontal) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ScrollRect, ___m_Vertical) == 0x21, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ScrollRect, ___m_MovementType) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ScrollRect, ___m_Elasticity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ScrollRect, ___m_Inertia) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ScrollRect, ___m_DecelerationRate) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ScrollRect, ___m_ScrollSensitivity) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ScrollRect, ___m_Viewport) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ScrollRect, ___m_HorizontalScrollbar) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ScrollRect, ___m_VerticalScrollbar) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ScrollRect, ___m_HorizontalScrollbarVisibility) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ScrollRect, ___m_VerticalScrollbarVisibility) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ScrollRect, ___m_HorizontalScrollbarSpacing) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ScrollRect, ___m_VerticalScrollbarSpacing) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ScrollRect, ___m_OnValueChanged) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ScrollRect, ___m_PointerStartLocalCursor) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ScrollRect, ___m_ContentStartPosition) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ScrollRect, ___m_ViewRect) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ScrollRect, ___m_ContentBounds) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ScrollRect, ___m_ViewBounds) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ScrollRect, ___m_Velocity) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ScrollRect, ___m_Dragging) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ScrollRect, ___m_Scrolling) == 0xb9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ScrollRect, ___m_PrevPosition) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ScrollRect, ___m_PrevContentBounds) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ScrollRect, ___m_PrevViewBounds) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ScrollRect, ___m_HasRebuiltLayout) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ScrollRect, ___m_HSliderExpand) == 0xf5, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ScrollRect, ___m_VSliderExpand) == 0xf6, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ScrollRect, ___m_HSliderHeight) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ScrollRect, ___m_VSliderWidth) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ScrollRect, ___m_Rect) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ScrollRect, ___m_HorizontalScrollbarRect) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ScrollRect, ___m_VerticalScrollbarRect) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ScrollRect, ___m_Tracker) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ScrollRect, ___m_Corners) == 0x120, "Offset mismatch!");

} // namespace UnityEngine::UI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__ScrollRect__MovementType, "UnityEngine.UI", "ScrollRect/MovementType");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__ScrollRect__ScrollbarVisibility, "UnityEngine.UI", "ScrollRect/ScrollbarVisibility");
NEED_NO_BOX(::UnityEngine::UI::ScrollRect);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::ScrollRect*, "UnityEngine.UI", "ScrollRect");
NEED_NO_BOX(::UnityEngine::UI::__ScrollRect__ScrollRectEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__ScrollRect__ScrollRectEvent*, "UnityEngine.UI", "ScrollRect/ScrollRectEvent");
