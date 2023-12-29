#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__PointerManipulator_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Clickable)
namespace UnityEngine::UIElements {
struct InvokePolicy;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
class PointerMoveEvent;
}
namespace UnityEngine::UIElements {
class IVisualElementScheduledItem;
}
namespace UnityEngine::UIElements {
class MouseUpEvent;
}
namespace UnityEngine::UIElements {
class MouseCaptureOutEvent;
}
namespace UnityEngine::UIElements {
class PointerUpEvent;
}
namespace UnityEngine::UIElements {
class MouseDownEvent;
}
namespace UnityEngine::UIElements {
class PointerCaptureOutEvent;
}
namespace System {
class Action;
}
namespace UnityEngine::UIElements {
struct TimerState;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class MouseMoveEvent;
}
namespace UnityEngine::UIElements {
class PointerCancelEvent;
}
namespace UnityEngine::UIElements {
class PointerDownEvent;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class Clickable;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Clickable);
// Type: UnityEngine.UIElements::Clickable
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6912)), TypeDefinitionIndex(TypeDefinitionIndex(10170))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6893))
// CS Name: ::UnityEngine.UIElements::Clickable*
class CORDL_TYPE Clickable : public ::UnityEngine::UIElements::PointerManipulator {
public:
  // Declarations
  /// @brief Field clickedWithEventInfo, offset 0x30, size 0x8
  __declspec(property(get = __get_clickedWithEventInfo, put = __set_clickedWithEventInfo))::System::Action_1<::UnityEngine::UIElements::EventBase*>* clickedWithEventInfo;

  /// @brief Field clicked, offset 0x38, size 0x8
  __declspec(property(get = __get_clicked, put = __set_clicked))::System::Action* clicked;

  /// @brief Field m_Delay, offset 0x40, size 0x8
  __declspec(property(get = __get_m_Delay, put = __set_m_Delay)) int64_t m_Delay;

  /// @brief Field m_Interval, offset 0x48, size 0x8
  __declspec(property(get = __get_m_Interval, put = __set_m_Interval)) int64_t m_Interval;

  /// @brief Field <active>k__BackingField, offset 0x50, size 0x1
  __declspec(property(get = __get__active_k__BackingField, put = __set__active_k__BackingField)) bool _active_k__BackingField;

  /// @brief Field <lastMousePosition>k__BackingField, offset 0x54, size 0x8
  __declspec(property(get = __get__lastMousePosition_k__BackingField, put = __set__lastMousePosition_k__BackingField))::UnityEngine::Vector2 _lastMousePosition_k__BackingField;

  /// @brief Field m_ActivePointerId, offset 0x5c, size 0x4
  __declspec(property(get = __get_m_ActivePointerId, put = __set_m_ActivePointerId)) int32_t m_ActivePointerId;

  /// @brief Field m_AcceptClicksIfDisabled, offset 0x60, size 0x1
  __declspec(property(get = __get_m_AcceptClicksIfDisabled, put = __set_m_AcceptClicksIfDisabled)) bool m_AcceptClicksIfDisabled;

  /// @brief Field m_Repeater, offset 0x68, size 0x8
  __declspec(property(get = __get_m_Repeater, put = __set_m_Repeater))::UnityEngine::UIElements::IVisualElementScheduledItem* m_Repeater;

  __declspec(property(get = get_active, put = set_active)) bool active;

  __declspec(property(get = get_lastMousePosition, put = set_lastMousePosition))::UnityEngine::Vector2 lastMousePosition;

  __declspec(property(get = get_acceptClicksIfDisabled)) bool acceptClicksIfDisabled;

  __declspec(property(get = get_invokePolicy))::UnityEngine::UIElements::InvokePolicy invokePolicy;

  constexpr ::System::Action_1<::UnityEngine::UIElements::EventBase*>*& __get_clickedWithEventInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::UIElements::EventBase*>*> const& __get_clickedWithEventInfo() const;

  constexpr void __set_clickedWithEventInfo(::System::Action_1<::UnityEngine::UIElements::EventBase*>* value);

  constexpr ::System::Action*& __get_clicked();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_clicked() const;

  constexpr void __set_clicked(::System::Action* value);

  constexpr int64_t& __get_m_Delay();

  constexpr int64_t const& __get_m_Delay() const;

  constexpr void __set_m_Delay(int64_t value);

  constexpr int64_t& __get_m_Interval();

  constexpr int64_t const& __get_m_Interval() const;

  constexpr void __set_m_Interval(int64_t value);

  constexpr bool& __get__active_k__BackingField();

  constexpr bool const& __get__active_k__BackingField() const;

  constexpr void __set__active_k__BackingField(bool value);

  constexpr ::UnityEngine::Vector2& __get__lastMousePosition_k__BackingField();

  constexpr ::UnityEngine::Vector2 const& __get__lastMousePosition_k__BackingField() const;

  constexpr void __set__lastMousePosition_k__BackingField(::UnityEngine::Vector2 value);

  constexpr int32_t& __get_m_ActivePointerId();

  constexpr int32_t const& __get_m_ActivePointerId() const;

  constexpr void __set_m_ActivePointerId(int32_t value);

  constexpr bool& __get_m_AcceptClicksIfDisabled();

  constexpr bool const& __get_m_AcceptClicksIfDisabled() const;

  constexpr void __set_m_AcceptClicksIfDisabled(bool value);

  constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem*& __get_m_Repeater();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IVisualElementScheduledItem*> const& __get_m_Repeater() const;

  constexpr void __set_m_Repeater(::UnityEngine::UIElements::IVisualElementScheduledItem* value);

  /// @brief Method get_active addr 0x2c55c0c size 0x8 virtual false final false
  inline bool get_active();

  /// @brief Method set_active addr 0x2c55c14 size 0xc virtual false final false
  inline void set_active(bool value);

  /// @brief Method get_lastMousePosition addr 0x2c55c20 size 0x8 virtual false final false
  inline ::UnityEngine::Vector2 get_lastMousePosition();

  /// @brief Method set_lastMousePosition addr 0x2c55c28 size 0x8 virtual false final false
  inline void set_lastMousePosition(::UnityEngine::Vector2 value);

  /// @brief Method get_acceptClicksIfDisabled addr 0x2c55c30 size 0x8 virtual false final false
  inline bool get_acceptClicksIfDisabled();

  /// @brief Method get_invokePolicy addr 0x2c55c38 size 0x8 virtual false final false
  inline ::UnityEngine::UIElements::InvokePolicy get_invokePolicy();

  static inline ::UnityEngine::UIElements::Clickable* New_ctor(::System::Action* handler, int64_t delay, int64_t interval);

  /// @brief Method .ctor addr 0x2c55c40 size 0x2c virtual false final false
  inline void _ctor(::System::Action* handler, int64_t delay, int64_t interval);

  static inline ::UnityEngine::UIElements::Clickable* New_ctor(::System::Action_1<::UnityEngine::UIElements::EventBase*>* handler);

  /// @brief Method .ctor addr 0x2c55d34 size 0xc8 virtual false final false
  inline void _ctor(::System::Action_1<::UnityEngine::UIElements::EventBase*>* handler);

  static inline ::UnityEngine::UIElements::Clickable* New_ctor(::System::Action* handler);

  /// @brief Method .ctor addr 0x2c55c6c size 0xc8 virtual false final false
  inline void _ctor(::System::Action* handler);

  /// @brief Method OnTimer addr 0x2c55e00 size 0xac virtual false final false
  inline void OnTimer(::UnityEngine::UIElements::TimerState timerState);

  /// @brief Method IsRepeatable addr 0x2c55eac size 0x24 virtual false final false
  inline bool IsRepeatable();

  /// @brief Method RegisterCallbacksOnTarget addr 0x2c55fb0 size 0x520 virtual true final false
  inline void RegisterCallbacksOnTarget();

  /// @brief Method UnregisterCallbacksFromTarget addr 0x2c564d0 size 0x4fc virtual true final false
  inline void UnregisterCallbacksFromTarget();

  /// @brief Method OnMouseDown addr 0x2c569cc size 0xb8 virtual false final false
  inline void OnMouseDown(::UnityEngine::UIElements::MouseDownEvent* evt);

  /// @brief Method OnMouseMove addr 0x2c56a84 size 0x6c virtual false final false
  inline void OnMouseMove(::UnityEngine::UIElements::MouseMoveEvent* evt);

  /// @brief Method OnMouseUp addr 0x2c56af0 size 0xc0 virtual false final false
  inline void OnMouseUp(::UnityEngine::UIElements::MouseUpEvent* evt);

  /// @brief Method OnMouseCaptureOut addr 0x2c56bb0 size 0x84 virtual false final false
  inline void OnMouseCaptureOut(::UnityEngine::UIElements::MouseCaptureOutEvent* evt);

  /// @brief Method OnPointerDown addr 0x2c56c34 size 0x124 virtual false final false
  inline void OnPointerDown(::UnityEngine::UIElements::PointerDownEvent* evt);

  /// @brief Method OnPointerMove addr 0x2c56f4c size 0x118 virtual false final false
  inline void OnPointerMove(::UnityEngine::UIElements::PointerMoveEvent* evt);

  /// @brief Method OnPointerUp addr 0x2c57064 size 0x12c virtual false final false
  inline void OnPointerUp(::UnityEngine::UIElements::PointerUpEvent* evt);

  /// @brief Method OnPointerCancel addr 0x2c57244 size 0x88 virtual false final false
  inline void OnPointerCancel(::UnityEngine::UIElements::PointerCancelEvent* evt);

  /// @brief Method OnPointerCaptureOut addr 0x2c57330 size 0x78 virtual false final false
  inline void OnPointerCaptureOut(::UnityEngine::UIElements::PointerCaptureOutEvent* evt);

  /// @brief Method ContainsPointer addr 0x2c55ed0 size 0x88 virtual false final false
  inline bool ContainsPointer(int32_t pointerId);

  /// @brief Method IsNotMouseEvent addr 0x2c572cc size 0x64 virtual false final false
  static inline bool IsNotMouseEvent(int32_t pointerId);

  /// @brief Method Invoke addr 0x2c55f58 size 0x58 virtual false final false
  inline void Invoke(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method SimulateSingleClick addr 0x2c573c4 size 0x1d4 virtual false final false
  inline void SimulateSingleClick(::UnityEngine::UIElements::EventBase* evt, int32_t delayMs);

  /// @brief Method ProcessDownEvent addr 0x2c57598 size 0x360 virtual true final false
  inline void ProcessDownEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::Vector2 localPosition, int32_t pointerId);

  /// @brief Method ProcessMoveEvent addr 0x2c578f8 size 0x74 virtual true final false
  inline void ProcessMoveEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::Vector2 localPosition);

  /// @brief Method ProcessUpEvent addr 0x2c5796c size 0x1a8 virtual true final false
  inline void ProcessUpEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::Vector2 localPosition, int32_t pointerId);

  /// @brief Method ProcessCancelEvent addr 0x2c57b14 size 0x16c virtual true final false
  inline void ProcessCancelEvent(::UnityEngine::UIElements::EventBase* evt, int32_t pointerId);

  /// @brief Method <SimulateSingleClick>b__43_0 addr 0x2c57c80 size 0x34 virtual false final false
  inline void _SimulateSingleClick_b__43_0();

  // Ctor Parameters [CppParam { name: "", ty: "Clickable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Clickable(Clickable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Clickable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Clickable(Clickable const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Clickable();

public:
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
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Clickable, 0x70>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Clickable, ___clickedWithEventInfo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Clickable, ___clicked) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Clickable, ___m_Delay) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Clickable, ___m_Interval) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Clickable, ____active_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Clickable, ____lastMousePosition_k__BackingField) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Clickable, ___m_ActivePointerId) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Clickable, ___m_AcceptClicksIfDisabled) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Clickable, ___m_Repeater) == 0x68, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::Clickable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Clickable*, "UnityEngine.UIElements", "Clickable");
