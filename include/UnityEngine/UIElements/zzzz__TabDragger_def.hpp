#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TabDragger.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__PointerManipulator_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TabDragger)
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class KeyDownEvent;
}
namespace UnityEngine::UIElements {
class PointerCancelEvent;
}
namespace UnityEngine::UIElements {
class PointerCaptureOutEvent;
}
namespace UnityEngine::UIElements {
class PointerDownEvent;
}
namespace UnityEngine::UIElements {
class PointerMoveEvent;
}
namespace UnityEngine::UIElements {
class PointerUpEvent;
}
namespace UnityEngine::UIElements {
class TabDragLocationPreview;
}
namespace UnityEngine::UIElements {
class TabLayout;
}
namespace UnityEngine::UIElements {
class TabView;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TabDragger;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TabDragger);
// Dependencies UnityEngine.UIElements.PointerManipulator
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TabDragger
class CORDL_TYPE TabDragger : public ::UnityEngine::UIElements::PointerManipulator {
public:
  // Declarations
  /// @brief Field <active>k__BackingField, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get__active_k__BackingField, put = __cordl_internal_set__active_k__BackingField)) bool _active_k__BackingField;

  /// @brief Field <isVertical>k__BackingField, offset 0x79, size 0x1
  __declspec(property(get = __cordl_internal_get__isVertical_k__BackingField, put = __cordl_internal_set__isVertical_k__BackingField)) bool _isVertical_k__BackingField;

  /// @brief Field <tabLayout>k__BackingField, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__tabLayout_k__BackingField, put = __cordl_internal_set__tabLayout_k__BackingField)) ::UnityEngine::UIElements::TabLayout* _tabLayout_k__BackingField;

  __declspec(property(get = get_active, put = set_active)) bool active;

  __declspec(property(get = get_isVertical, put = set_isVertical)) bool isVertical;

  /// @brief Field m_Cancelled, offset 0x2d, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Cancelled, put = __cordl_internal_set_m_Cancelled)) bool m_Cancelled;

  /// @brief Field m_DestinationTab, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DestinationTab, put = __cordl_internal_set_m_DestinationTab)) ::UnityEngine::UIElements::VisualElement* m_DestinationTab;

  /// @brief Field m_DraggingPointerId, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DraggingPointerId, put = __cordl_internal_set_m_DraggingPointerId)) int32_t m_DraggingPointerId;

  /// @brief Field m_Header, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Header, put = __cordl_internal_set_m_Header)) ::UnityEngine::UIElements::VisualElement* m_Header;

  /// @brief Field m_LastPos, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LastPos, put = __cordl_internal_set_m_LastPos)) float_t m_LastPos;

  /// @brief Field m_LocationPreviewElement, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LocationPreviewElement,
                      put = __cordl_internal_set_m_LocationPreviewElement)) ::UnityEngine::UIElements::TabDragLocationPreview* m_LocationPreviewElement;

  /// @brief Field m_MoveBeforeDestination, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_m_MoveBeforeDestination, put = __cordl_internal_set_m_MoveBeforeDestination)) bool m_MoveBeforeDestination;

  /// @brief Field m_Moving, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Moving, put = __cordl_internal_set_m_Moving)) bool m_Moving;

  /// @brief Field m_PreviewElement, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PreviewElement, put = __cordl_internal_set_m_PreviewElement)) ::UnityEngine::UIElements::VisualElement* m_PreviewElement;

  /// @brief Field m_StartPos, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_StartPos, put = __cordl_internal_set_m_StartPos)) float_t m_StartPos;

  /// @brief Field m_TabToMove, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TabToMove, put = __cordl_internal_set_m_TabToMove)) ::UnityEngine::UIElements::VisualElement* m_TabToMove;

  /// @brief Field m_TabToMovePos, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TabToMovePos, put = __cordl_internal_set_m_TabToMovePos)) float_t m_TabToMovePos;

  /// @brief Field m_TabView, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TabView, put = __cordl_internal_set_m_TabView)) ::UnityEngine::UIElements::TabView* m_TabView;

  __declspec(property(get = get_moving, put = set_moving)) bool moving;

  __declspec(property(get = get_tabLayout, put = set_tabLayout)) ::UnityEngine::UIElements::TabLayout* tabLayout;

  /// @brief Method BeginDragMove, addr 0x6baa604, size 0x3ac, virtual false, abstract: false, final false
  inline void BeginDragMove(float_t pos);

  /// @brief Method DragMove, addr 0x6baa9b0, size 0x8, virtual false, abstract: false, final false
  inline void DragMove(float_t pos);

  /// @brief Method EndDragMove, addr 0x6baa3ec, size 0x144, virtual false, abstract: false, final false
  inline void EndDragMove(bool cancelled);

  static inline ::UnityEngine::UIElements::TabDragger* New_ctor();

  /// @brief Method OnKeyDown, addr 0x6baa530, size 0xd4, virtual false, abstract: false, final false
  inline void OnKeyDown(::UnityEngine::UIElements::KeyDownEvent* e);

  /// @brief Method OnPointerCancel, addr 0x6baa234, size 0x8c, virtual false, abstract: false, final false
  inline void OnPointerCancel(::UnityEngine::UIElements::PointerCancelEvent* evt);

  /// @brief Method OnPointerCaptureOut, addr 0x6baa374, size 0x78, virtual false, abstract: false, final false
  inline void OnPointerCaptureOut(::UnityEngine::UIElements::PointerCaptureOutEvent* evt);

  /// @brief Method OnPointerDown, addr 0x6ba9c3c, size 0xb4, virtual false, abstract: false, final false
  inline void OnPointerDown(::UnityEngine::UIElements::PointerDownEvent* evt);

  /// @brief Method OnPointerMove, addr 0x6ba9f48, size 0x78, virtual false, abstract: false, final false
  inline void OnPointerMove(::UnityEngine::UIElements::PointerMoveEvent* evt);

  /// @brief Method OnPointerUp, addr 0x6baa0e4, size 0xa0, virtual false, abstract: false, final false
  inline void OnPointerUp(::UnityEngine::UIElements::PointerUpEvent* evt);

  /// @brief Method ProcessCancelEvent, addr 0x6baa2c0, size 0xb4, virtual false, abstract: false, final false
  inline void ProcessCancelEvent(::UnityEngine::UIElements::EventBase* evt, int32_t pointerId);

  /// @brief Method ProcessDownEvent, addr 0x6ba9cf0, size 0x258, virtual false, abstract: false, final false
  inline void ProcessDownEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::Vector2 localPosition, int32_t pointerId);

  /// @brief Method ProcessMoveEvent, addr 0x6ba9fc0, size 0x124, virtual false, abstract: false, final false
  inline void ProcessMoveEvent(::UnityEngine::UIElements::EventBase* e, ::UnityEngine::Vector2 localPosition);

  /// @brief Method ProcessUpEvent, addr 0x6baa184, size 0xb0, virtual false, abstract: false, final false
  inline void ProcessUpEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::Vector2 localPosition, int32_t pointerId);

  /// @brief Method RegisterCallbacksOnTarget, addr 0x6ba95e4, size 0x32c, virtual true, abstract: false, final false
  inline void RegisterCallbacksOnTarget();

  /// @brief Method UnregisterCallbacksFromTarget, addr 0x6ba9910, size 0x32c, virtual true, abstract: false, final false
  inline void UnregisterCallbacksFromTarget();

  /// @brief Method UpdateMoveLocation, addr 0x6baa9b8, size 0x17c, virtual false, abstract: false, final false
  inline void UpdateMoveLocation();

  /// @brief Method UpdatePreviewPosition, addr 0x6baab34, size 0x5b0, virtual false, abstract: false, final false
  inline void UpdatePreviewPosition();

  constexpr bool const& __cordl_internal_get__active_k__BackingField() const;

  constexpr bool& __cordl_internal_get__active_k__BackingField();

  constexpr bool const& __cordl_internal_get__isVertical_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isVertical_k__BackingField();

  constexpr ::UnityEngine::UIElements::TabLayout* const& __cordl_internal_get__tabLayout_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::TabLayout*& __cordl_internal_get__tabLayout_k__BackingField();

  constexpr bool const& __cordl_internal_get_m_Cancelled() const;

  constexpr bool& __cordl_internal_get_m_Cancelled();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_DestinationTab() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_DestinationTab();

  constexpr int32_t const& __cordl_internal_get_m_DraggingPointerId() const;

  constexpr int32_t& __cordl_internal_get_m_DraggingPointerId();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_Header() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_Header();

  constexpr float_t const& __cordl_internal_get_m_LastPos() const;

  constexpr float_t& __cordl_internal_get_m_LastPos();

  constexpr ::UnityEngine::UIElements::TabDragLocationPreview* const& __cordl_internal_get_m_LocationPreviewElement() const;

  constexpr ::UnityEngine::UIElements::TabDragLocationPreview*& __cordl_internal_get_m_LocationPreviewElement();

  constexpr bool const& __cordl_internal_get_m_MoveBeforeDestination() const;

  constexpr bool& __cordl_internal_get_m_MoveBeforeDestination();

  constexpr bool const& __cordl_internal_get_m_Moving() const;

  constexpr bool& __cordl_internal_get_m_Moving();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_PreviewElement() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_PreviewElement();

  constexpr float_t const& __cordl_internal_get_m_StartPos() const;

  constexpr float_t& __cordl_internal_get_m_StartPos();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_TabToMove() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_TabToMove();

  constexpr float_t const& __cordl_internal_get_m_TabToMovePos() const;

  constexpr float_t& __cordl_internal_get_m_TabToMovePos();

  constexpr ::UnityEngine::UIElements::TabView* const& __cordl_internal_get_m_TabView() const;

  constexpr ::UnityEngine::UIElements::TabView*& __cordl_internal_get_m_TabView();

  constexpr void __cordl_internal_set__active_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isVertical_k__BackingField(bool value);

  constexpr void __cordl_internal_set__tabLayout_k__BackingField(::UnityEngine::UIElements::TabLayout* value);

  constexpr void __cordl_internal_set_m_Cancelled(bool value);

  constexpr void __cordl_internal_set_m_DestinationTab(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_DraggingPointerId(int32_t value);

  constexpr void __cordl_internal_set_m_Header(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_LastPos(float_t value);

  constexpr void __cordl_internal_set_m_LocationPreviewElement(::UnityEngine::UIElements::TabDragLocationPreview* value);

  constexpr void __cordl_internal_set_m_MoveBeforeDestination(bool value);

  constexpr void __cordl_internal_set_m_Moving(bool value);

  constexpr void __cordl_internal_set_m_PreviewElement(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_StartPos(float_t value);

  constexpr void __cordl_internal_set_m_TabToMove(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_TabToMovePos(float_t value);

  constexpr void __cordl_internal_set_m_TabView(::UnityEngine::UIElements::TabView* value);

  /// @brief Method .ctor, addr 0x6ba8248, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_active, addr 0x6ba9508, size 0x8, virtual false, abstract: false, final false
  inline bool get_active();

  /// @brief Method get_isVertical, addr 0x6ba9518, size 0x8, virtual false, abstract: false, final false
  inline bool get_isVertical();

  /// @brief Method get_moving, addr 0x6ba9528, size 0x8, virtual false, abstract: false, final false
  inline bool get_moving();

  /// @brief Method get_tabLayout, addr 0x6ba94f8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TabLayout* get_tabLayout();

  /// @brief Method set_active, addr 0x6ba9510, size 0x8, virtual false, abstract: false, final false
  inline void set_active(bool value);

  /// @brief Method set_isVertical, addr 0x6ba9520, size 0x8, virtual false, abstract: false, final false
  inline void set_isVertical(bool value);

  /// @brief Method set_moving, addr 0x6ba9530, size 0xb4, virtual false, abstract: false, final false
  inline void set_moving(bool value);

  /// @brief Method set_tabLayout, addr 0x6ba9500, size 0x8, virtual false, abstract: false, final false
  inline void set_tabLayout(::UnityEngine::UIElements::TabLayout* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TabDragger();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TabDragger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TabDragger(TabDragger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TabDragger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TabDragger(TabDragger const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4328 };

  /// @brief Field m_StartPos, offset: 0x24, size: 0x4, def value: None
  float_t ___m_StartPos;

  /// @brief Field m_LastPos, offset: 0x28, size: 0x4, def value: None
  float_t ___m_LastPos;

  /// @brief Field m_Moving, offset: 0x2c, size: 0x1, def value: None
  bool ___m_Moving;

  /// @brief Field m_Cancelled, offset: 0x2d, size: 0x1, def value: None
  bool ___m_Cancelled;

  /// @brief Field m_Header, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_Header;

  /// @brief Field m_TabView, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::UIElements::TabView* ___m_TabView;

  /// @brief Field m_PreviewElement, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_PreviewElement;

  /// @brief Field m_LocationPreviewElement, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::UIElements::TabDragLocationPreview* ___m_LocationPreviewElement;

  /// @brief Field m_TabToMove, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_TabToMove;

  /// @brief Field m_TabToMovePos, offset: 0x58, size: 0x4, def value: None
  float_t ___m_TabToMovePos;

  /// @brief Field m_DestinationTab, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_DestinationTab;

  /// @brief Field m_MoveBeforeDestination, offset: 0x68, size: 0x1, def value: None
  bool ___m_MoveBeforeDestination;

  /// @brief Field m_DraggingPointerId, offset: 0x6c, size: 0x4, def value: None
  int32_t ___m_DraggingPointerId;

  /// @brief Field <tabLayout>k__BackingField, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::UIElements::TabLayout* ____tabLayout_k__BackingField;

  /// @brief Field <active>k__BackingField, offset: 0x78, size: 0x1, def value: None
  bool ____active_k__BackingField;

  /// @brief Field <isVertical>k__BackingField, offset: 0x79, size: 0x1, def value: None
  bool ____isVertical_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TabDragger, ___m_StartPos) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TabDragger, ___m_LastPos) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TabDragger, ___m_Moving) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TabDragger, ___m_Cancelled) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TabDragger, ___m_Header) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TabDragger, ___m_TabView) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TabDragger, ___m_PreviewElement) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TabDragger, ___m_LocationPreviewElement) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TabDragger, ___m_TabToMove) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TabDragger, ___m_TabToMovePos) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TabDragger, ___m_DestinationTab) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TabDragger, ___m_MoveBeforeDestination) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TabDragger, ___m_DraggingPointerId) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TabDragger, ____tabLayout_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TabDragger, ____active_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TabDragger, ____isVertical_k__BackingField) == 0x79, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TabDragger, 0x80>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TabDragger);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TabDragger*, "UnityEngine.UIElements", "TabDragger");
