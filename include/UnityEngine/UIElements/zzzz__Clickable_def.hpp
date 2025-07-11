#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Clickable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__PointerManipulator_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Clickable)
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class IVisualElementScheduledItem;
}
namespace UnityEngine::UIElements {
struct InvokePolicy;
}
namespace UnityEngine::UIElements {
class MouseCaptureOutEvent;
}
namespace UnityEngine::UIElements {
class MouseDownEvent;
}
namespace UnityEngine::UIElements {
class MouseMoveEvent;
}
namespace UnityEngine::UIElements {
class MouseUpEvent;
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
struct TimerState;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class Clickable;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Clickable);
// Dependencies UnityEngine.UIElements.PointerManipulator, UnityEngine.Vector2
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Clickable
class CORDL_TYPE Clickable : public ::UnityEngine::UIElements::PointerManipulator {
public:
  // Declarations
  /// @brief Field <active>k__BackingField, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__active_k__BackingField, put = __cordl_internal_set__active_k__BackingField)) bool _active_k__BackingField;

  /// @brief Field <lastMousePosition>k__BackingField, offset 0x54, size 0x8
  __declspec(property(get = __cordl_internal_get__lastMousePosition_k__BackingField,
                      put = __cordl_internal_set__lastMousePosition_k__BackingField)) ::UnityEngine::Vector2 _lastMousePosition_k__BackingField;

  __declspec(property(get = get_acceptClicksIfDisabled, put = set_acceptClicksIfDisabled)) bool acceptClicksIfDisabled;

  __declspec(property(get = get_active, put = set_active)) bool active;

  /// @brief Field clicked, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_clicked, put = __cordl_internal_set_clicked)) ::System::Action* clicked;

  /// @brief Field clickedWithEventInfo, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_clickedWithEventInfo,
                      put = __cordl_internal_set_clickedWithEventInfo)) ::System::Action_1<::UnityEngine::UIElements::EventBase*>* clickedWithEventInfo;

  __declspec(property(get = get_invokePolicy)) ::UnityEngine::UIElements::InvokePolicy invokePolicy;

  __declspec(property(get = get_lastMousePosition, put = set_lastMousePosition)) ::UnityEngine::Vector2 lastMousePosition;

  /// @brief Field m_AcceptClicksIfDisabled, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AcceptClicksIfDisabled, put = __cordl_internal_set_m_AcceptClicksIfDisabled)) bool m_AcceptClicksIfDisabled;

  /// @brief Field m_ActivePointerId, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ActivePointerId, put = __cordl_internal_set_m_ActivePointerId)) int32_t m_ActivePointerId;

  /// @brief Field m_Delay, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Delay, put = __cordl_internal_set_m_Delay)) int64_t m_Delay;

  /// @brief Field m_Interval, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Interval, put = __cordl_internal_set_m_Interval)) int64_t m_Interval;

  /// @brief Field m_Repeater, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Repeater, put = __cordl_internal_set_m_Repeater)) ::UnityEngine::UIElements::IVisualElementScheduledItem* m_Repeater;

  /// @brief Method ContainsPointer, addr 0x49743bc, size 0x80, virtual false, abstract: false, final false
  inline bool ContainsPointer(int32_t pointerId);

  /// @brief Method Invoke, addr 0x497443c, size 0x58, virtual false, abstract: false, final false
  inline void Invoke(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method IsNotMouseEvent, addr 0x49754ec, size 0x64, virtual false, abstract: false, final false
  static inline bool IsNotMouseEvent(int32_t pointerId);

  /// @brief Method IsRepeatable, addr 0x4974398, size 0x24, virtual false, abstract: false, final false
  inline bool IsRepeatable();

  static inline ::UnityEngine::UIElements::Clickable* New_ctor(::System::Action* handler);

  static inline ::UnityEngine::UIElements::Clickable* New_ctor(::System::Action* handler, int64_t delay, int64_t interval);

  static inline ::UnityEngine::UIElements::Clickable* New_ctor(::System::Action_1<::UnityEngine::UIElements::EventBase*>* handler);

  /// @brief Method OnMouseCaptureOut, addr 0x4975054, size 0x84, virtual false, abstract: false, final false
  inline void OnMouseCaptureOut(::UnityEngine::UIElements::MouseCaptureOutEvent* evt);

  /// @brief Method OnMouseDown, addr 0x4974e68, size 0xbc, virtual false, abstract: false, final false
  inline void OnMouseDown(::UnityEngine::UIElements::MouseDownEvent* evt);

  /// @brief Method OnMouseMove, addr 0x4974f24, size 0x6c, virtual false, abstract: false, final false
  inline void OnMouseMove(::UnityEngine::UIElements::MouseMoveEvent* evt);

  /// @brief Method OnMouseUp, addr 0x4974f90, size 0xc4, virtual false, abstract: false, final false
  inline void OnMouseUp(::UnityEngine::UIElements::MouseUpEvent* evt);

  /// @brief Method OnPointerCancel, addr 0x4975460, size 0x8c, virtual false, abstract: false, final false
  inline void OnPointerCancel(::UnityEngine::UIElements::PointerCancelEvent* evt);

  /// @brief Method OnPointerCaptureOut, addr 0x4975550, size 0x78, virtual false, abstract: false, final false
  inline void OnPointerCaptureOut(::UnityEngine::UIElements::PointerCaptureOutEvent* evt);

  /// @brief Method OnPointerDown, addr 0x49750d8, size 0x130, virtual false, abstract: false, final false
  inline void OnPointerDown(::UnityEngine::UIElements::PointerDownEvent* evt);

  /// @brief Method OnPointerMove, addr 0x4975208, size 0x120, virtual false, abstract: false, final false
  inline void OnPointerMove(::UnityEngine::UIElements::PointerMoveEvent* evt);

  /// @brief Method OnPointerUp, addr 0x4975328, size 0x138, virtual false, abstract: false, final false
  inline void OnPointerUp(::UnityEngine::UIElements::PointerUpEvent* evt);

  /// @brief Method OnTimer, addr 0x49742c8, size 0xd0, virtual false, abstract: false, final false
  inline void OnTimer(::UnityEngine::UIElements::TimerState timerState);

  /// @brief Method ProcessCancelEvent, addr 0x4975d40, size 0x174, virtual true, abstract: false, final false
  inline void ProcessCancelEvent(::UnityEngine::UIElements::EventBase* evt, int32_t pointerId);

  /// @brief Method ProcessDownEvent, addr 0x4975794, size 0x388, virtual true, abstract: false, final false
  inline void ProcessDownEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::Vector2 localPosition, int32_t pointerId);

  /// @brief Method ProcessMoveEvent, addr 0x4975b1c, size 0x6c, virtual true, abstract: false, final false
  inline void ProcessMoveEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::Vector2 localPosition);

  /// @brief Method ProcessUpEvent, addr 0x4975b88, size 0x1b8, virtual true, abstract: false, final false
  inline void ProcessUpEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::Vector2 localPosition, int32_t pointerId);

  /// @brief Method RegisterCallbacksOnTarget, addr 0x4974494, size 0x4fc, virtual true, abstract: false, final false
  inline void RegisterCallbacksOnTarget();

  /// @brief Method SimulateSingleClick, addr 0x49755c8, size 0x1cc, virtual false, abstract: false, final false
  inline void SimulateSingleClick(::UnityEngine::UIElements::EventBase* evt, int32_t delayMs);

  /// @brief Method UnregisterCallbacksFromTarget, addr 0x4974990, size 0x4d8, virtual true, abstract: false, final false
  inline void UnregisterCallbacksFromTarget();

  /// @brief Method <SimulateSingleClick>b__43_0, addr 0x4975eb4, size 0x34, virtual false, abstract: false, final false
  inline void _SimulateSingleClick_b__43_0();

  constexpr bool const& __cordl_internal_get__active_k__BackingField() const;

  constexpr bool& __cordl_internal_get__active_k__BackingField();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__lastMousePosition_k__BackingField() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__lastMousePosition_k__BackingField();

  constexpr ::System::Action* const& __cordl_internal_get_clicked() const;

  constexpr ::System::Action*& __cordl_internal_get_clicked();

  constexpr ::System::Action_1<::UnityEngine::UIElements::EventBase*>* const& __cordl_internal_get_clickedWithEventInfo() const;

  constexpr ::System::Action_1<::UnityEngine::UIElements::EventBase*>*& __cordl_internal_get_clickedWithEventInfo();

  constexpr bool const& __cordl_internal_get_m_AcceptClicksIfDisabled() const;

  constexpr bool& __cordl_internal_get_m_AcceptClicksIfDisabled();

  constexpr int32_t const& __cordl_internal_get_m_ActivePointerId() const;

  constexpr int32_t& __cordl_internal_get_m_ActivePointerId();

  constexpr int64_t const& __cordl_internal_get_m_Delay() const;

  constexpr int64_t& __cordl_internal_get_m_Delay();

  constexpr int64_t const& __cordl_internal_get_m_Interval() const;

  constexpr int64_t& __cordl_internal_get_m_Interval();

  constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem* const& __cordl_internal_get_m_Repeater() const;

  constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem*& __cordl_internal_get_m_Repeater();

  constexpr void __cordl_internal_set__active_k__BackingField(bool value);

  constexpr void __cordl_internal_set__lastMousePosition_k__BackingField(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_clicked(::System::Action* value);

  constexpr void __cordl_internal_set_clickedWithEventInfo(::System::Action_1<::UnityEngine::UIElements::EventBase*>* value);

  constexpr void __cordl_internal_set_m_AcceptClicksIfDisabled(bool value);

  constexpr void __cordl_internal_set_m_ActivePointerId(int32_t value);

  constexpr void __cordl_internal_set_m_Delay(int64_t value);

  constexpr void __cordl_internal_set_m_Interval(int64_t value);

  constexpr void __cordl_internal_set_m_Repeater(::UnityEngine::UIElements::IVisualElementScheduledItem* value);

  /// @brief Method .ctor, addr 0x4974138, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(::System::Action* handler);

  /// @brief Method .ctor, addr 0x497410c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Action* handler, int64_t delay, int64_t interval);

  /// @brief Method .ctor, addr 0x4974200, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(::System::Action_1<::UnityEngine::UIElements::EventBase*>* handler);

  /// @brief Method add_clicked, addr 0x4973f50, size 0x9c, virtual false, abstract: false, final false
  inline void add_clicked(::System::Action* value);

  /// @brief Method add_clickedWithEventInfo, addr 0x4973df0, size 0xb0, virtual false, abstract: false, final false
  inline void add_clickedWithEventInfo(::System::Action_1<::UnityEngine::UIElements::EventBase*>* value);

  /// @brief Method get_acceptClicksIfDisabled, addr 0x49740ac, size 0x8, virtual false, abstract: false, final false
  inline bool get_acceptClicksIfDisabled();

  /// @brief Method get_active, addr 0x4974088, size 0x8, virtual false, abstract: false, final false
  inline bool get_active();

  /// @brief Method get_invokePolicy, addr 0x4974104, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::InvokePolicy get_invokePolicy();

  /// @brief Method get_lastMousePosition, addr 0x497409c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_lastMousePosition();

  /// @brief Method remove_clicked, addr 0x4973fec, size 0x9c, virtual false, abstract: false, final false
  inline void remove_clicked(::System::Action* value);

  /// @brief Method remove_clickedWithEventInfo, addr 0x4973ea0, size 0xb0, virtual false, abstract: false, final false
  inline void remove_clickedWithEventInfo(::System::Action_1<::UnityEngine::UIElements::EventBase*>* value);

  /// @brief Method set_acceptClicksIfDisabled, addr 0x49740b4, size 0x50, virtual false, abstract: false, final false
  inline void set_acceptClicksIfDisabled(bool value);

  /// @brief Method set_active, addr 0x4974090, size 0xc, virtual false, abstract: false, final false
  inline void set_active(bool value);

  /// @brief Method set_lastMousePosition, addr 0x49740a4, size 0x8, virtual false, abstract: false, final false
  inline void set_lastMousePosition(::UnityEngine::Vector2 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Clickable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Clickable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Clickable(Clickable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Clickable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Clickable(Clickable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5467 };

  /// @brief Field clickedWithEventInfo, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::UIElements::EventBase*>* ___clickedWithEventInfo;

  /// @brief Field clicked, offset: 0x38, size: 0x8, def value: None
  ::System::Action* ___clicked;

  /// @brief Field m_Delay, offset: 0x40, size: 0x8, def value: None
  int64_t ___m_Delay;

  /// @brief Field m_Interval, offset: 0x48, size: 0x8, def value: None
  int64_t ___m_Interval;

  /// @brief Field <active>k__BackingField, offset: 0x50, size: 0x1, def value: None
  bool ____active_k__BackingField;

  /// @brief Field <lastMousePosition>k__BackingField, offset: 0x54, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____lastMousePosition_k__BackingField;

  /// @brief Field m_ActivePointerId, offset: 0x5c, size: 0x4, def value: None
  int32_t ___m_ActivePointerId;

  /// @brief Field m_AcceptClicksIfDisabled, offset: 0x60, size: 0x1, def value: None
  bool ___m_AcceptClicksIfDisabled;

  /// @brief Field m_Repeater, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::UIElements::IVisualElementScheduledItem* ___m_Repeater;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Clickable, ___clickedWithEventInfo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Clickable, ___clicked) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Clickable, ___m_Delay) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Clickable, ___m_Interval) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Clickable, ____active_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Clickable, ____lastMousePosition_k__BackingField) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Clickable, ___m_ActivePointerId) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Clickable, ___m_AcceptClicksIfDisabled) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Clickable, ___m_Repeater) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Clickable, 0x70>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::Clickable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Clickable*, "UnityEngine.UIElements", "Clickable");
